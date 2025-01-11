local clang = require("luaclang-parser")
local lfs = require("lfs")
local utils = require("src.utils")

-- BEGIN!!

local script_path = utils.get_script_dir()
assert(script_path, "Unable to determine script path!")

local stubs_root = utils.path_combine(script_path, "..", "stubs")
if not utils.file_exists(stubs_root) then
    assert(lfs.mkdir(stubs_root))
end

local stubs = {
    require("specs.gtk_spec"),
    require("specs.glib_spec"),
    require("specs.gobject_spec"),
    require("specs.gio_spec"),
    nil,
}

--- @param name string
--- @return string
local function cxtype_name(name)
    if name == "Char_S" then
        return "char"
    elseif name == "LongDouble" then
        return "long double"
    elseif name == "UInt" then
        return "unsigned int"
    else
        return name:lower()
    end
end

--- @return string, integer|nil
local function get_full_type(type, flip)
    local _type = type

    local ptr_str = ""

    while _type:name() == "Pointer" do
        local const_str = _type:isConst() and " const" or ""
        local volatile_str = _type:isVolatile() and " volatile" or ""
        local restrict_str = _type:isRestrict() and " restrict" or ""

        if not flip then
            ptr_str = ptr_str .. const_str .. volatile_str .. " *"
        else
            ptr_str = ptr_str .. " *" .. const_str .. volatile_str .. restrict_str
        end

        _type = _type:pointee()
    end

    if _type:name() == "Elaborated" then
        local struct_str = _type:getNamedType():name() == "Record" and "struct " or ""
        local const_str = _type:isConst() and "const " or ""
        local volatile_str = _type:isVolatile() and "volatile " or ""
        local restrict_str = _type:isRestrict() and "restrict " or ""
        local e_type = _type:declaration()

        return const_str .. volatile_str .. restrict_str .. struct_str .. e_type:name() .. ptr_str, nil
    elseif _type:name() == "ConstantArray" then
        local array_type = _type:getArrayElementType()
        local len = _type:getArraySize()

        return get_full_type(array_type, true), len
    elseif _type:name() == "IncompleteArray" then
        local array_type = _type:getArrayElementType()

        return get_full_type(array_type, true), 0
    else
        local const_str = _type:isConst() and "const " or ""
        local volatile_str = _type:isVolatile() and "volatile " or ""
        local restrict_str = _type:isRestrict() and "restrict " or ""

        return const_str .. volatile_str .. restrict_str .. cxtype_name(_type:name()) .. ptr_str, nil
    end
end

local function fmt_arg(arg)
    local type, len = get_full_type(arg:type())
    local array_str = ""
    if len == 0 then
        array_str = "[]"
    elseif len then
        array_str = string.format("[%s]", len)
    end

    return string.format("%s %s%s", type, arg:name(), array_str)
end

local function fmt_args(args, is_var)
    local ret
    if #args == 0 then
        ret = "void"
    else
        ret = table.concat(utils.transform(args, function(_, v) return fmt_arg(v) end), ", ")
    end

    if is_var then
        ret = ret .. ", ..."
    end

    return ret
end

local function try_find_va_equivalent(funcs, fname, fargs)
    local patterns = {}
    local fsplit = utils.split(fname, "_")

    table.insert(patterns, fname .. "[_]*va*$")
    table.insert(patterns, fname .. "[_]*valist$")

    for i = 1, #fsplit do
        local prefix_vfname = ""

        for j, segment in ipairs(fsplit) do
            prefix_vfname = prefix_vfname .. (j ~= 1 and "_" or "") .. (j == i and "v" or "") .. segment
        end

        table.insert(patterns, prefix_vfname)
    end

    local function print_err(name, args, pattern, err)
        print(
            string.format(
                "Found va_equiv for func %s as func %s(%s) with pattern %s, but err: %s\n",
                fname,
                name,
                fmt_args(args),
                pattern,
                err
            )
        )
    end

    local function check_args(args)
        for _, arg in ipairs(args) do
            if get_full_type(arg:type()):match("va_list") then
                return true
            end
        end

        return false
    end

    for _, func in ipairs(funcs) do
        local name = func:name()
        local args = func:arguments()
        for _, _pattern in ipairs(patterns) do
            if name:match(_pattern) then
                if not check_args(args) then
                    print_err(name, args, _pattern, "va_list missing")
                elseif #args ~= #fargs + 1 then
                    print_err(
                        name,
                        args,
                        _pattern,
                        string.format("args count mismatch, expected: %s, found: %s", #fargs + 1, #args)
                    )
                else
                    return func
                end
            end
        end
    end

    return nil
end

local RAYO_COSMICO = "__builtin_unreachable(); "

local function create_variadic_function(funcs, fname, fargs, ret_type)
    local va_equiv = try_find_va_equivalent(funcs, fname, fargs)

    if not va_equiv then
        return nil
    end

    local nonvoid = ret_type ~= "void"
    local ret_var = nonvoid and (ret_type .. " ret; ") or ""

    local va_equiv_args = va_equiv:arguments()

    return string.format(
        "%s (%s)(%s) { %sva_list vaargs; va_start(vaargs, %s); %sstub_funcs.ptr_%s(%s); va_end(vaargs); %s}",
        ret_type,
        fname,
        fmt_args(fargs) .. ", ...",
        ret_var,
        fargs[#fargs]:name(),
        nonvoid and "ret = " or "",
        va_equiv:name(),
        table.concat(utils.transform(fargs, function(_, v) return v:name() end), ", ")
            .. string.format(", %svaargs", va_equiv_args[#va_equiv_args]:type():name() == "Pointer" and "&" or ""),
        va_equiv:isNoReturn() and RAYO_COSMICO or nonvoid and "return ret; " or ""
    )
end

--- return string c struct def, string c load sym, string c function def, string header function def
local function gen_func(funcs, func, soname)
    local name = func:name()
    local ret_type = get_full_type(func:resultType())
    local args = func:arguments()
    local is_variadic = func:type():isFunctionTypeVariadic()

    local args_str = fmt_args(args, is_variadic)

    local func_body
    local success = true
    if is_variadic then
        func_body = create_variadic_function(funcs, name, args, ret_type)

        if not func_body then
            success = false
        end
    else
        local ret_kwd = ret_type == "void" and "" or "return "
        local args_inner_str = table.concat(utils.transform(args, function(_, v) return v:name() end), ", ")

        func_body = string.format(
            "%s (%s)(%s) { %sstub_funcs.ptr_%s(%s); %s}",
            ret_type,
            name,
            args_str,
            ret_kwd,
            name,
            args_inner_str,
            func:isNoReturn() and RAYO_COSMICO or ""
        )
    end

    return string.format("    %s (*ptr_%s)(%s);", ret_type, name, args_str),
        string.format('    stub_funcs.ptr_%s = try_find_sym(%s, "%s");', name, soname, name),
        func_body,
        string.format("%s (%s)(%s);", ret_type, name, args_str),
        success
end

for _, stub in ipairs(stubs) do
    local stub_dir = utils.path_combine(stubs_root, stub.name .. "-stub")
    if not utils.file_exists(stub_dir) then
        assert(lfs.mkdir(stub_dir))
    end

    local c_out_path = utils.path_combine(stub_dir, stub.name .. "_stub.c")
    local c_text = {}
    local h_out_path = utils.path_combine(stub_dir, stub.name .. "_stub.h")
    local h_text = {}

    utils.tbl_extend(c_text, {
        string.format('#include "%s_stub.h"', stub.name),
        "#include <stdbool.h>",
        "#include <stdio.h>",
        "#include <stdlib.h>",
        "",
        "#define _COMSO_SOURCE",
        "#include <libc/dlopen/dlfcn.h>",
        "",
    })

    local parse_args = { "-isystem", "/usr/lib/clang/18/include/" }
    for _, dir in ipairs(stub.search_dirs or {}) do
        table.insert(parse_args, "-isystem")
        table.insert(parse_args, dir)
    end
    utils.tbl_extend(parse_args, { stub.hfile })

    local idx = clang.createIndex(false, true)
    local tu = assert(idx:parse(parse_args))

    local function find_functions(cursor)
        local ret = {}

        local function find(_cursor)
            for _, c in ipairs(_cursor:children()) do
                if c and c:kind() == "FunctionDecl" and not c:isFunctionInlined() then
                    local loc = c:location() or ""
                    local matched_any = false
                    if loc == stub.hfile then
                        matched_any = true
                    else
                        for _, filter in ipairs(stub.filter) do
                            if loc:find(filter) then
                                matched_any = true
                                break
                            end
                        end
                    end

                    if matched_any then
                        table.insert(ret, c)
                    end
                end

                find(c)
            end
        end

        find(cursor)

        return ret
    end

    local funcs = find_functions(tu:cursor())

    table.insert(c_text, string.format("static struct %sFuncs {", stub.name))

    local c_struct_defs = {}
    local c_load_syms = {}
    local c_func_defs = {}
    local h_func_defs = {}

    for _, func in ipairs(funcs) do
        local c_struct_def, c_load_sym, c_func_def, h_func_def, var_failed = gen_func(funcs, func, stub.so.name)

        local explicit_body = stub.explicit_function_bodies and stub.explicit_function_bodies[func:name()]
        if explicit_body then
            c_func_def = explicit_body
        end

        if c_struct_def and c_load_sym and c_func_def and h_func_def then
            table.insert(c_struct_defs, c_struct_def)
            table.insert(c_load_syms, c_load_sym)
            table.insert(c_func_defs, c_func_def)
            table.insert(h_func_defs, h_func_def)
        elseif var_failed then
            print("skipping matchless va function " .. func:name())
        end
    end

    utils.tbl_extend(c_text, c_struct_defs)

    utils.tbl_extend(c_text, {
        "} stub_funcs;",
        "",
        string.format("void *%s;", stub.so.name),
        "",
        string.format("void initialize_%s(void) {", stub.name),
        string.format(
            "    char *candidates_%s[] = { %s };",
            stub.so.name,
            table.concat(utils.transform(stub.so.fnames, function(_, v) return string.format('"%s"', v) end), ", ")
        ),
        string.format("    %s = try_find_lib(candidates_%s, %s);", stub.so.name, stub.so.name, #stub.so.fnames),
        "",
        string.format("    if (!%s) {", stub.so.name),
        string.format('        fprintf(stderr, "Unable to locate %s, exiting!");', stub.so.name),
        "        exit(1);",
        "    }",
        "",
    })

    utils.tbl_extend(c_text, c_load_syms)
    table.insert(c_text, "}")
    table.insert(c_text, "")

    utils.tbl_extend(c_text, c_func_defs)

    utils.tbl_extend(c_text, {
        "",
        string.format("void close_%s(void) {", stub.name),
        string.format("    cosmo_dlclose(%s);", stub.so.name),
        "}",
    })

    table.insert(h_text, '#include "../stub.h"')
    utils.tbl_extend(
        h_text,
        utils.transform(stub.header_includes, function(_, v) return string.format('#include "%s"', v) end)
    )
    utils.tbl_extend(h_text, {
        "",
        string.format("void initialize_%s(void);", stub.name),
        string.format("void close_%s(void);", stub.name),
        "",
    })

    utils.tbl_extend(h_text, h_func_defs)

    utils.file_write(c_out_path, table.concat(c_text, "\n"))
    utils.file_write(h_out_path, table.concat(h_text, "\n"))
end
