#include "gmodule_stub.h"
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define _COMSO_SOURCE
#include <libc/dlopen/dlfcn.h>

static struct gmoduleFuncs {
    GQuark (*ptr_g_module_error_quark)(void);
    gboolean (*ptr_g_module_supported)(void);
    GModule * (*ptr_g_module_open)(const gchar * file_name, GModuleFlags flags);
    GModule * (*ptr_g_module_open_full)(const gchar * file_name, GModuleFlags flags, GError * * error);
    gboolean (*ptr_g_module_close)(GModule * module);
    void (*ptr_g_module_make_resident)(GModule * module);
    const gchar * (*ptr_g_module_error)(void);
    gboolean (*ptr_g_module_symbol)(GModule * module, const gchar * symbol_name, gpointer * symbol);
    const gchar * (*ptr_g_module_name)(GModule * module);
    gchar * (*ptr_g_module_build_path)(const gchar * directory, const gchar * module_name);
} stub_funcs;

void *gmodule;

void initialize_gmodule(void) {
    char *candidates_gmodule[] = { "libgmodule-2.so", "libgmodule-2.0-0.dll" };
    gmodule = try_find_lib(candidates_gmodule, 2);

    if (!gmodule) {
        fprintf(stderr, "Unable to locate gmodule, exiting!");
        exit(1);
    }

    stub_funcs.ptr_g_module_error_quark = try_find_sym(gmodule, "g_module_error_quark");
    stub_funcs.ptr_g_module_supported = try_find_sym(gmodule, "g_module_supported");
    stub_funcs.ptr_g_module_open = try_find_sym(gmodule, "g_module_open");
    stub_funcs.ptr_g_module_open_full = try_find_sym(gmodule, "g_module_open_full");
    stub_funcs.ptr_g_module_close = try_find_sym(gmodule, "g_module_close");
    stub_funcs.ptr_g_module_make_resident = try_find_sym(gmodule, "g_module_make_resident");
    stub_funcs.ptr_g_module_error = try_find_sym(gmodule, "g_module_error");
    stub_funcs.ptr_g_module_symbol = try_find_sym(gmodule, "g_module_symbol");
    stub_funcs.ptr_g_module_name = try_find_sym(gmodule, "g_module_name");
    stub_funcs.ptr_g_module_build_path = try_find_sym(gmodule, "g_module_build_path");
}

GQuark (g_module_error_quark)(void) { return stub_funcs.ptr_g_module_error_quark(); }
gboolean (g_module_supported)(void) { return stub_funcs.ptr_g_module_supported(); }
GModule * (g_module_open)(const gchar * file_name, GModuleFlags flags) { return stub_funcs.ptr_g_module_open(file_name, flags); }
GModule * (g_module_open_full)(const gchar * file_name, GModuleFlags flags, GError * * error) { return stub_funcs.ptr_g_module_open_full(file_name, flags, error); }
gboolean (g_module_close)(GModule * module) { return stub_funcs.ptr_g_module_close(module); }
void (g_module_make_resident)(GModule * module) { stub_funcs.ptr_g_module_make_resident(module); }
const gchar * (g_module_error)(void) { return stub_funcs.ptr_g_module_error(); }
gboolean (g_module_symbol)(GModule * module, const gchar * symbol_name, gpointer * symbol) { return stub_funcs.ptr_g_module_symbol(module, symbol_name, symbol); }
const gchar * (g_module_name)(GModule * module) { return stub_funcs.ptr_g_module_name(module); }
gchar * (g_module_build_path)(const gchar * directory, const gchar * module_name) { return stub_funcs.ptr_g_module_build_path(directory, module_name); }

void close_gmodule(void) {
    cosmo_dlclose(gmodule);
}