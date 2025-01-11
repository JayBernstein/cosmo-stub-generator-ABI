#include "girepository_stub.h"
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define _COMSO_SOURCE
#include <libc/dlopen/dlfcn.h>

static struct girepositoryFuncs {
    GType (*ptr_gi_callable_info_get_type)(void);
    GType (*ptr_gi_function_info_get_type)(void);
    GType (*ptr_gi_callback_info_get_type)(void);
    GType (*ptr_gi_registered_type_info_get_type)(void);
    GType (*ptr_gi_struct_info_get_type)(void);
    GType (*ptr_gi_union_info_get_type)(void);
    GType (*ptr_gi_enum_info_get_type)(void);
    GType (*ptr_gi_flags_info_get_type)(void);
    GType (*ptr_gi_object_info_get_type)(void);
    GType (*ptr_gi_interface_info_get_type)(void);
    GType (*ptr_gi_constant_info_get_type)(void);
    GType (*ptr_gi_value_info_get_type)(void);
    GType (*ptr_gi_signal_info_get_type)(void);
    GType (*ptr_gi_vfunc_info_get_type)(void);
    GType (*ptr_gi_property_info_get_type)(void);
    GType (*ptr_gi_field_info_get_type)(void);
    GType (*ptr_gi_arg_info_get_type)(void);
    GType (*ptr_gi_type_info_get_type)(void);
    GType (*ptr_gi_unresolved_info_get_type)(void);
    GIDirection (*ptr_gi_arg_info_get_direction)(GIArgInfo * info);
    gboolean (*ptr_gi_arg_info_is_return_value)(GIArgInfo * info);
    gboolean (*ptr_gi_arg_info_is_optional)(GIArgInfo * info);
    gboolean (*ptr_gi_arg_info_is_caller_allocates)(GIArgInfo * info);
    gboolean (*ptr_gi_arg_info_may_be_null)(GIArgInfo * info);
    gboolean (*ptr_gi_arg_info_is_skip)(GIArgInfo * info);
    GITransfer (*ptr_gi_arg_info_get_ownership_transfer)(GIArgInfo * info);
    GIScopeType (*ptr_gi_arg_info_get_scope)(GIArgInfo * info);
    gboolean (*ptr_gi_arg_info_get_closure_index)(GIArgInfo * info, unsigned int * out_closure_index);
    gboolean (*ptr_gi_arg_info_get_destroy_index)(GIArgInfo * info, unsigned int * out_destroy_index);
    GITypeInfo * (*ptr_gi_arg_info_get_type_info)(GIArgInfo * info);
    void (*ptr_gi_arg_info_load_type_info)(GIArgInfo * info, GITypeInfo * type);
    GType (*ptr_gi_typelib_get_type)(void);
    GITypelib * (*ptr_gi_typelib_new_from_bytes)(GBytes * bytes, GError * * error);
    GITypelib * (*ptr_gi_typelib_ref)(GITypelib * typelib);
    void (*ptr_gi_typelib_unref)(GITypelib * typelib);
    gboolean (*ptr_gi_typelib_symbol)(GITypelib * typelib, const char * symbol_name, void * * symbol);
    const char * (*ptr_gi_typelib_get_namespace)(GITypelib * typelib);
    GType (*ptr_gi_base_info_get_type)(void);
    GIBaseInfo * (*ptr_gi_base_info_ref)(void * info);
    void (*ptr_gi_base_info_unref)(void * info);
    void (*ptr_gi_base_info_clear)(void * info);
    const char * (*ptr_gi_base_info_get_name)(GIBaseInfo * info);
    const char * (*ptr_gi_base_info_get_namespace)(GIBaseInfo * info);
    gboolean (*ptr_gi_base_info_is_deprecated)(GIBaseInfo * info);
    const char * (*ptr_gi_base_info_get_attribute)(GIBaseInfo * info, const char * name);
    gboolean (*ptr_gi_base_info_iterate_attributes)(GIBaseInfo * info, GIAttributeIter * iterator, const char * * name, const char * * value);
    GIBaseInfo * (*ptr_gi_base_info_get_container)(GIBaseInfo * info);
    GITypelib * (*ptr_gi_base_info_get_typelib)(GIBaseInfo * info);
    gboolean (*ptr_gi_base_info_equal)(GIBaseInfo * info1, GIBaseInfo * info2);
    gboolean (*ptr_gi_callable_info_is_method)(GICallableInfo * info);
    gboolean (*ptr_gi_callable_info_can_throw_gerror)(GICallableInfo * info);
    GITypeInfo * (*ptr_gi_callable_info_get_return_type)(GICallableInfo * info);
    void (*ptr_gi_callable_info_load_return_type)(GICallableInfo * info, GITypeInfo * type);
    const char * (*ptr_gi_callable_info_get_return_attribute)(GICallableInfo * info, const char * name);
    gboolean (*ptr_gi_callable_info_iterate_return_attributes)(GICallableInfo * info, GIAttributeIter * iterator, const char * * name, const char * * value);
    GITransfer (*ptr_gi_callable_info_get_caller_owns)(GICallableInfo * info);
    gboolean (*ptr_gi_callable_info_may_return_null)(GICallableInfo * info);
    gboolean (*ptr_gi_callable_info_skip_return)(GICallableInfo * info);
    unsigned int (*ptr_gi_callable_info_get_n_args)(GICallableInfo * info);
    GIArgInfo * (*ptr_gi_callable_info_get_arg)(GICallableInfo * info, unsigned int n);
    void (*ptr_gi_callable_info_load_arg)(GICallableInfo * info, unsigned int n, GIArgInfo * arg);
    gboolean (*ptr_gi_callable_info_invoke)(GICallableInfo * info, void * function, const GIArgument * in_args, size_t n_in_args, GIArgument * out_args, size_t n_out_args, GIArgument * return_value, GError * * error);
    GITransfer (*ptr_gi_callable_info_get_instance_ownership_transfer)(GICallableInfo * info);
    GITypeInfo * (*ptr_gi_constant_info_get_type_info)(GIConstantInfo * info);
    void (*ptr_gi_constant_info_free_value)(GIConstantInfo * info, GIArgument * value);
    size_t (*ptr_gi_constant_info_get_value)(GIConstantInfo * info, GIArgument * value);
    unsigned int (*ptr_gi_enum_info_get_n_values)(GIEnumInfo * info);
    GIValueInfo * (*ptr_gi_enum_info_get_value)(GIEnumInfo * info, unsigned int n);
    unsigned int (*ptr_gi_enum_info_get_n_methods)(GIEnumInfo * info);
    GIFunctionInfo * (*ptr_gi_enum_info_get_method)(GIEnumInfo * info, unsigned int n);
    GITypeTag (*ptr_gi_enum_info_get_storage_type)(GIEnumInfo * info);
    const char * (*ptr_gi_enum_info_get_error_domain)(GIEnumInfo * info);
    GIFieldInfoFlags (*ptr_gi_field_info_get_flags)(GIFieldInfo * info);
    size_t (*ptr_gi_field_info_get_size)(GIFieldInfo * info);
    size_t (*ptr_gi_field_info_get_offset)(GIFieldInfo * info);
    GITypeInfo * (*ptr_gi_field_info_get_type_info)(GIFieldInfo * info);
    gboolean (*ptr_gi_field_info_get_field)(GIFieldInfo * field_info, void * mem, GIArgument * value);
    gboolean (*ptr_gi_field_info_set_field)(GIFieldInfo * field_info, void * mem, const GIArgument * value);
    const char * (*ptr_gi_function_info_get_symbol)(GIFunctionInfo * info);
    GIFunctionInfoFlags (*ptr_gi_function_info_get_flags)(GIFunctionInfo * info);
    GIPropertyInfo * (*ptr_gi_function_info_get_property)(GIFunctionInfo * info);
    GIVFuncInfo * (*ptr_gi_function_info_get_vfunc)(GIFunctionInfo * info);
    GQuark (*ptr_gi_invoke_error_quark)(void);
    gboolean (*ptr_gi_function_info_invoke)(GIFunctionInfo * info, const GIArgument * in_args, size_t n_in_args, GIArgument * out_args, size_t n_out_args, GIArgument * return_value, GError * * error);
    unsigned int (*ptr_gi_interface_info_get_n_prerequisites)(GIInterfaceInfo * info);
    GIBaseInfo * (*ptr_gi_interface_info_get_prerequisite)(GIInterfaceInfo * info, unsigned int n);
    unsigned int (*ptr_gi_interface_info_get_n_properties)(GIInterfaceInfo * info);
    GIPropertyInfo * (*ptr_gi_interface_info_get_property)(GIInterfaceInfo * info, unsigned int n);
    unsigned int (*ptr_gi_interface_info_get_n_methods)(GIInterfaceInfo * info);
    GIFunctionInfo * (*ptr_gi_interface_info_get_method)(GIInterfaceInfo * info, unsigned int n);
    GIFunctionInfo * (*ptr_gi_interface_info_find_method)(GIInterfaceInfo * info, const char * name);
    unsigned int (*ptr_gi_interface_info_get_n_signals)(GIInterfaceInfo * info);
    GISignalInfo * (*ptr_gi_interface_info_get_signal)(GIInterfaceInfo * info, unsigned int n);
    GISignalInfo * (*ptr_gi_interface_info_find_signal)(GIInterfaceInfo * info, const char * name);
    unsigned int (*ptr_gi_interface_info_get_n_vfuncs)(GIInterfaceInfo * info);
    GIVFuncInfo * (*ptr_gi_interface_info_get_vfunc)(GIInterfaceInfo * info, unsigned int n);
    GIVFuncInfo * (*ptr_gi_interface_info_find_vfunc)(GIInterfaceInfo * info, const char * name);
    unsigned int (*ptr_gi_interface_info_get_n_constants)(GIInterfaceInfo * info);
    GIConstantInfo * (*ptr_gi_interface_info_get_constant)(GIInterfaceInfo * info, unsigned int n);
    GIStructInfo * (*ptr_gi_interface_info_get_iface_struct)(GIInterfaceInfo * info);
    const char * (*ptr_gi_object_info_get_type_name)(GIObjectInfo * info);
    const char * (*ptr_gi_object_info_get_type_init_function_name)(GIObjectInfo * info);
    gboolean (*ptr_gi_object_info_get_abstract)(GIObjectInfo * info);
    gboolean (*ptr_gi_object_info_get_final)(GIObjectInfo * info);
    gboolean (*ptr_gi_object_info_get_fundamental)(GIObjectInfo * info);
    GIObjectInfo * (*ptr_gi_object_info_get_parent)(GIObjectInfo * info);
    unsigned int (*ptr_gi_object_info_get_n_interfaces)(GIObjectInfo * info);
    GIInterfaceInfo * (*ptr_gi_object_info_get_interface)(GIObjectInfo * info, unsigned int n);
    unsigned int (*ptr_gi_object_info_get_n_fields)(GIObjectInfo * info);
    GIFieldInfo * (*ptr_gi_object_info_get_field)(GIObjectInfo * info, unsigned int n);
    unsigned int (*ptr_gi_object_info_get_n_properties)(GIObjectInfo * info);
    GIPropertyInfo * (*ptr_gi_object_info_get_property)(GIObjectInfo * info, unsigned int n);
    unsigned int (*ptr_gi_object_info_get_n_methods)(GIObjectInfo * info);
    GIFunctionInfo * (*ptr_gi_object_info_get_method)(GIObjectInfo * info, unsigned int n);
    GIFunctionInfo * (*ptr_gi_object_info_find_method)(GIObjectInfo * info, const char * name);
    GIFunctionInfo * (*ptr_gi_object_info_find_method_using_interfaces)(GIObjectInfo * info, const char * name, GIBaseInfo * * declarer);
    unsigned int (*ptr_gi_object_info_get_n_signals)(GIObjectInfo * info);
    GISignalInfo * (*ptr_gi_object_info_get_signal)(GIObjectInfo * info, unsigned int n);
    GISignalInfo * (*ptr_gi_object_info_find_signal)(GIObjectInfo * info, const char * name);
    unsigned int (*ptr_gi_object_info_get_n_vfuncs)(GIObjectInfo * info);
    GIVFuncInfo * (*ptr_gi_object_info_get_vfunc)(GIObjectInfo * info, unsigned int n);
    GIVFuncInfo * (*ptr_gi_object_info_find_vfunc)(GIObjectInfo * info, const char * name);
    GIVFuncInfo * (*ptr_gi_object_info_find_vfunc_using_interfaces)(GIObjectInfo * info, const char * name, GIBaseInfo * * declarer);
    unsigned int (*ptr_gi_object_info_get_n_constants)(GIObjectInfo * info);
    GIConstantInfo * (*ptr_gi_object_info_get_constant)(GIObjectInfo * info, unsigned int n);
    GIStructInfo * (*ptr_gi_object_info_get_class_struct)(GIObjectInfo * info);
    const char * (*ptr_gi_object_info_get_ref_function_name)(GIObjectInfo * info);
    GIObjectInfoRefFunction (*ptr_gi_object_info_get_ref_function_pointer)(GIObjectInfo * info);
    const char * (*ptr_gi_object_info_get_unref_function_name)(GIObjectInfo * info);
    GIObjectInfoUnrefFunction (*ptr_gi_object_info_get_unref_function_pointer)(GIObjectInfo * info);
    const char * (*ptr_gi_object_info_get_set_value_function_name)(GIObjectInfo * info);
    GIObjectInfoSetValueFunction (*ptr_gi_object_info_get_set_value_function_pointer)(GIObjectInfo * info);
    const char * (*ptr_gi_object_info_get_get_value_function_name)(GIObjectInfo * info);
    GIObjectInfoGetValueFunction (*ptr_gi_object_info_get_get_value_function_pointer)(GIObjectInfo * info);
    GParamFlags (*ptr_gi_property_info_get_flags)(GIPropertyInfo * info);
    GITypeInfo * (*ptr_gi_property_info_get_type_info)(GIPropertyInfo * info);
    GITransfer (*ptr_gi_property_info_get_ownership_transfer)(GIPropertyInfo * info);
    GIFunctionInfo * (*ptr_gi_property_info_get_setter)(GIPropertyInfo * info);
    GIFunctionInfo * (*ptr_gi_property_info_get_getter)(GIPropertyInfo * info);
    const char * (*ptr_gi_registered_type_info_get_type_name)(GIRegisteredTypeInfo * info);
    const char * (*ptr_gi_registered_type_info_get_type_init_function_name)(GIRegisteredTypeInfo * info);
    GType (*ptr_gi_registered_type_info_get_g_type)(GIRegisteredTypeInfo * info);
    gboolean (*ptr_gi_registered_type_info_is_boxed)(GIRegisteredTypeInfo * info);
    GSignalFlags (*ptr_gi_signal_info_get_flags)(GISignalInfo * info);
    GIVFuncInfo * (*ptr_gi_signal_info_get_class_closure)(GISignalInfo * info);
    gboolean (*ptr_gi_signal_info_true_stops_emit)(GISignalInfo * info);
    unsigned int (*ptr_gi_struct_info_get_n_fields)(GIStructInfo * info);
    GIFieldInfo * (*ptr_gi_struct_info_get_field)(GIStructInfo * info, unsigned int n);
    GIFieldInfo * (*ptr_gi_struct_info_find_field)(GIStructInfo * info, const char * name);
    unsigned int (*ptr_gi_struct_info_get_n_methods)(GIStructInfo * info);
    GIFunctionInfo * (*ptr_gi_struct_info_get_method)(GIStructInfo * info, unsigned int n);
    GIFunctionInfo * (*ptr_gi_struct_info_find_method)(GIStructInfo * info, const char * name);
    size_t (*ptr_gi_struct_info_get_size)(GIStructInfo * info);
    size_t (*ptr_gi_struct_info_get_alignment)(GIStructInfo * info);
    gboolean (*ptr_gi_struct_info_is_gtype_struct)(GIStructInfo * info);
    gboolean (*ptr_gi_struct_info_is_foreign)(GIStructInfo * info);
    const char * (*ptr_gi_struct_info_get_copy_function_name)(GIStructInfo * info);
    const char * (*ptr_gi_struct_info_get_free_function_name)(GIStructInfo * info);
    const char * (*ptr_gi_type_tag_to_string)(GITypeTag type);
    gboolean (*ptr_gi_type_info_is_pointer)(GITypeInfo * info);
    GITypeTag (*ptr_gi_type_info_get_tag)(GITypeInfo * info);
    GITypeInfo * (*ptr_gi_type_info_get_param_type)(GITypeInfo * info, unsigned int n);
    GIBaseInfo * (*ptr_gi_type_info_get_interface)(GITypeInfo * info);
    gboolean (*ptr_gi_type_info_get_array_length_index)(GITypeInfo * info, unsigned int * out_length_index);
    gboolean (*ptr_gi_type_info_get_array_fixed_size)(GITypeInfo * info, size_t * out_size);
    gboolean (*ptr_gi_type_info_is_zero_terminated)(GITypeInfo * info);
    GIArrayType (*ptr_gi_type_info_get_array_type)(GITypeInfo * info);
    GITypeTag (*ptr_gi_type_info_get_storage_type)(GITypeInfo * info);
    void (*ptr_gi_type_info_argument_from_hash_pointer)(GITypeInfo * info, void * hash_pointer, GIArgument * arg);
    void * (*ptr_gi_type_info_hash_pointer_from_argument)(GITypeInfo * info, GIArgument * arg);
    void (*ptr_gi_type_tag_argument_from_hash_pointer)(GITypeTag storage_type, void * hash_pointer, GIArgument * arg);
    void * (*ptr_gi_type_tag_hash_pointer_from_argument)(GITypeTag storage_type, GIArgument * arg);
    unsigned int (*ptr_gi_union_info_get_n_fields)(GIUnionInfo * info);
    GIFieldInfo * (*ptr_gi_union_info_get_field)(GIUnionInfo * info, unsigned int n);
    unsigned int (*ptr_gi_union_info_get_n_methods)(GIUnionInfo * info);
    GIFunctionInfo * (*ptr_gi_union_info_get_method)(GIUnionInfo * info, unsigned int n);
    gboolean (*ptr_gi_union_info_is_discriminated)(GIUnionInfo * info);
    gboolean (*ptr_gi_union_info_get_discriminator_offset)(GIUnionInfo * info, size_t * out_offset);
    GITypeInfo * (*ptr_gi_union_info_get_discriminator_type)(GIUnionInfo * info);
    GIConstantInfo * (*ptr_gi_union_info_get_discriminator)(GIUnionInfo * info, size_t n);
    GIFunctionInfo * (*ptr_gi_union_info_find_method)(GIUnionInfo * info, const char * name);
    size_t (*ptr_gi_union_info_get_size)(GIUnionInfo * info);
    size_t (*ptr_gi_union_info_get_alignment)(GIUnionInfo * info);
    const char * (*ptr_gi_union_info_get_copy_function_name)(GIUnionInfo * info);
    const char * (*ptr_gi_union_info_get_free_function_name)(GIUnionInfo * info);
    int64_t (*ptr_gi_value_info_get_value)(GIValueInfo * info);
    GIVFuncInfoFlags (*ptr_gi_vfunc_info_get_flags)(GIVFuncInfo * info);
    size_t (*ptr_gi_vfunc_info_get_offset)(GIVFuncInfo * info);
    GISignalInfo * (*ptr_gi_vfunc_info_get_signal)(GIVFuncInfo * info);
    GIFunctionInfo * (*ptr_gi_vfunc_info_get_invoker)(GIVFuncInfo * info);
    void * (*ptr_gi_vfunc_info_get_address)(GIVFuncInfo * info, GType implementor_gtype, GError * * error);
    gboolean (*ptr_gi_vfunc_info_invoke)(GIVFuncInfo * info, GType implementor, const GIArgument * in_args, size_t n_in_args, GIArgument * out_args, size_t n_out_args, GIArgument * return_value, GError * * error);
    GType (*ptr_gi_repository_get_type)(void);
    GIRepository * (*ptr_gi_repository_new)(void);
    void (*ptr_gi_repository_prepend_search_path)(GIRepository * repository, const char * directory);
    void (*ptr_gi_repository_prepend_library_path)(GIRepository * repository, const char * directory);
    const char * const * (*ptr_gi_repository_get_search_path)(GIRepository * repository, size_t * n_paths_out);
    const char * const * (*ptr_gi_repository_get_library_path)(GIRepository * repository, size_t * n_paths_out);
    const char * (*ptr_gi_repository_load_typelib)(GIRepository * repository, GITypelib * typelib, GIRepositoryLoadFlags flags, GError * * error);
    gboolean (*ptr_gi_repository_is_registered)(GIRepository * repository, const char * namespace_, const char * version);
    GIBaseInfo * (*ptr_gi_repository_find_by_name)(GIRepository * repository, const char * namespace_, const char * name);
    char * * (*ptr_gi_repository_enumerate_versions)(GIRepository * repository, const char * namespace_, size_t * n_versions_out);
    GITypelib * (*ptr_gi_repository_require)(GIRepository * repository, const char * namespace_, const char * version, GIRepositoryLoadFlags flags, GError * * error);
    GITypelib * (*ptr_gi_repository_require_private)(GIRepository * repository, const char * typelib_dir, const char * namespace_, const char * version, GIRepositoryLoadFlags flags, GError * * error);
    char * * (*ptr_gi_repository_get_immediate_dependencies)(GIRepository * repository, const char * namespace_, size_t * n_dependencies_out);
    char * * (*ptr_gi_repository_get_dependencies)(GIRepository * repository, const char * namespace_, size_t * n_dependencies_out);
    char * * (*ptr_gi_repository_get_loaded_namespaces)(GIRepository * repository, size_t * n_namespaces_out);
    GIBaseInfo * (*ptr_gi_repository_find_by_gtype)(GIRepository * repository, GType gtype);
    void (*ptr_gi_repository_get_object_gtype_interfaces)(GIRepository * repository, GType gtype, size_t * n_interfaces_out, GIInterfaceInfo * * * interfaces_out);
    unsigned int (*ptr_gi_repository_get_n_infos)(GIRepository * repository, const char * namespace_);
    GIBaseInfo * (*ptr_gi_repository_get_info)(GIRepository * repository, const char * namespace_, unsigned int idx);
    GIEnumInfo * (*ptr_gi_repository_find_by_error_domain)(GIRepository * repository, GQuark domain);
    const char * (*ptr_gi_repository_get_typelib_path)(GIRepository * repository, const char * namespace_);
    const char * const * (*ptr_gi_repository_get_shared_libraries)(GIRepository * repository, const char * namespace_, size_t * out_n_elements);
    const char * (*ptr_gi_repository_get_c_prefix)(GIRepository * repository, const char * namespace_);
    const char * (*ptr_gi_repository_get_version)(GIRepository * repository, const char * namespace_);
    GOptionGroup * (*ptr_gi_repository_get_option_group)(void);
    gboolean (*ptr_gi_repository_dump)(const char * input_filename, const char * output_filename, GError * * error);
    GQuark (*ptr_gi_repository_error_quark)(void);
    void (*ptr_gi_cclosure_marshal_generic)(GClosure * closure, GValue * return_gvalue, unsigned int n_param_values, const GValue * param_values, void * invocation_hint, void * marshal_data);
} stub_funcs;

void *girepository;

void initialize_girepository(void) {
    char *candidates_girepository[] = { "libgirepository-2.0.so", "libgirepository-2.0-0.dll" };
    girepository = try_find_lib(candidates_girepository, 2);

    if (!girepository) {
        fprintf(stderr, "Unable to locate girepository, exiting!");
        exit(1);
    }

    stub_funcs.ptr_gi_callable_info_get_type = try_find_sym(girepository, "gi_callable_info_get_type");
    stub_funcs.ptr_gi_function_info_get_type = try_find_sym(girepository, "gi_function_info_get_type");
    stub_funcs.ptr_gi_callback_info_get_type = try_find_sym(girepository, "gi_callback_info_get_type");
    stub_funcs.ptr_gi_registered_type_info_get_type = try_find_sym(girepository, "gi_registered_type_info_get_type");
    stub_funcs.ptr_gi_struct_info_get_type = try_find_sym(girepository, "gi_struct_info_get_type");
    stub_funcs.ptr_gi_union_info_get_type = try_find_sym(girepository, "gi_union_info_get_type");
    stub_funcs.ptr_gi_enum_info_get_type = try_find_sym(girepository, "gi_enum_info_get_type");
    stub_funcs.ptr_gi_flags_info_get_type = try_find_sym(girepository, "gi_flags_info_get_type");
    stub_funcs.ptr_gi_object_info_get_type = try_find_sym(girepository, "gi_object_info_get_type");
    stub_funcs.ptr_gi_interface_info_get_type = try_find_sym(girepository, "gi_interface_info_get_type");
    stub_funcs.ptr_gi_constant_info_get_type = try_find_sym(girepository, "gi_constant_info_get_type");
    stub_funcs.ptr_gi_value_info_get_type = try_find_sym(girepository, "gi_value_info_get_type");
    stub_funcs.ptr_gi_signal_info_get_type = try_find_sym(girepository, "gi_signal_info_get_type");
    stub_funcs.ptr_gi_vfunc_info_get_type = try_find_sym(girepository, "gi_vfunc_info_get_type");
    stub_funcs.ptr_gi_property_info_get_type = try_find_sym(girepository, "gi_property_info_get_type");
    stub_funcs.ptr_gi_field_info_get_type = try_find_sym(girepository, "gi_field_info_get_type");
    stub_funcs.ptr_gi_arg_info_get_type = try_find_sym(girepository, "gi_arg_info_get_type");
    stub_funcs.ptr_gi_type_info_get_type = try_find_sym(girepository, "gi_type_info_get_type");
    stub_funcs.ptr_gi_unresolved_info_get_type = try_find_sym(girepository, "gi_unresolved_info_get_type");
    stub_funcs.ptr_gi_arg_info_get_direction = try_find_sym(girepository, "gi_arg_info_get_direction");
    stub_funcs.ptr_gi_arg_info_is_return_value = try_find_sym(girepository, "gi_arg_info_is_return_value");
    stub_funcs.ptr_gi_arg_info_is_optional = try_find_sym(girepository, "gi_arg_info_is_optional");
    stub_funcs.ptr_gi_arg_info_is_caller_allocates = try_find_sym(girepository, "gi_arg_info_is_caller_allocates");
    stub_funcs.ptr_gi_arg_info_may_be_null = try_find_sym(girepository, "gi_arg_info_may_be_null");
    stub_funcs.ptr_gi_arg_info_is_skip = try_find_sym(girepository, "gi_arg_info_is_skip");
    stub_funcs.ptr_gi_arg_info_get_ownership_transfer = try_find_sym(girepository, "gi_arg_info_get_ownership_transfer");
    stub_funcs.ptr_gi_arg_info_get_scope = try_find_sym(girepository, "gi_arg_info_get_scope");
    stub_funcs.ptr_gi_arg_info_get_closure_index = try_find_sym(girepository, "gi_arg_info_get_closure_index");
    stub_funcs.ptr_gi_arg_info_get_destroy_index = try_find_sym(girepository, "gi_arg_info_get_destroy_index");
    stub_funcs.ptr_gi_arg_info_get_type_info = try_find_sym(girepository, "gi_arg_info_get_type_info");
    stub_funcs.ptr_gi_arg_info_load_type_info = try_find_sym(girepository, "gi_arg_info_load_type_info");
    stub_funcs.ptr_gi_typelib_get_type = try_find_sym(girepository, "gi_typelib_get_type");
    stub_funcs.ptr_gi_typelib_new_from_bytes = try_find_sym(girepository, "gi_typelib_new_from_bytes");
    stub_funcs.ptr_gi_typelib_ref = try_find_sym(girepository, "gi_typelib_ref");
    stub_funcs.ptr_gi_typelib_unref = try_find_sym(girepository, "gi_typelib_unref");
    stub_funcs.ptr_gi_typelib_symbol = try_find_sym(girepository, "gi_typelib_symbol");
    stub_funcs.ptr_gi_typelib_get_namespace = try_find_sym(girepository, "gi_typelib_get_namespace");
    stub_funcs.ptr_gi_base_info_get_type = try_find_sym(girepository, "gi_base_info_get_type");
    stub_funcs.ptr_gi_base_info_ref = try_find_sym(girepository, "gi_base_info_ref");
    stub_funcs.ptr_gi_base_info_unref = try_find_sym(girepository, "gi_base_info_unref");
    stub_funcs.ptr_gi_base_info_clear = try_find_sym(girepository, "gi_base_info_clear");
    stub_funcs.ptr_gi_base_info_get_name = try_find_sym(girepository, "gi_base_info_get_name");
    stub_funcs.ptr_gi_base_info_get_namespace = try_find_sym(girepository, "gi_base_info_get_namespace");
    stub_funcs.ptr_gi_base_info_is_deprecated = try_find_sym(girepository, "gi_base_info_is_deprecated");
    stub_funcs.ptr_gi_base_info_get_attribute = try_find_sym(girepository, "gi_base_info_get_attribute");
    stub_funcs.ptr_gi_base_info_iterate_attributes = try_find_sym(girepository, "gi_base_info_iterate_attributes");
    stub_funcs.ptr_gi_base_info_get_container = try_find_sym(girepository, "gi_base_info_get_container");
    stub_funcs.ptr_gi_base_info_get_typelib = try_find_sym(girepository, "gi_base_info_get_typelib");
    stub_funcs.ptr_gi_base_info_equal = try_find_sym(girepository, "gi_base_info_equal");
    stub_funcs.ptr_gi_callable_info_is_method = try_find_sym(girepository, "gi_callable_info_is_method");
    stub_funcs.ptr_gi_callable_info_can_throw_gerror = try_find_sym(girepository, "gi_callable_info_can_throw_gerror");
    stub_funcs.ptr_gi_callable_info_get_return_type = try_find_sym(girepository, "gi_callable_info_get_return_type");
    stub_funcs.ptr_gi_callable_info_load_return_type = try_find_sym(girepository, "gi_callable_info_load_return_type");
    stub_funcs.ptr_gi_callable_info_get_return_attribute = try_find_sym(girepository, "gi_callable_info_get_return_attribute");
    stub_funcs.ptr_gi_callable_info_iterate_return_attributes = try_find_sym(girepository, "gi_callable_info_iterate_return_attributes");
    stub_funcs.ptr_gi_callable_info_get_caller_owns = try_find_sym(girepository, "gi_callable_info_get_caller_owns");
    stub_funcs.ptr_gi_callable_info_may_return_null = try_find_sym(girepository, "gi_callable_info_may_return_null");
    stub_funcs.ptr_gi_callable_info_skip_return = try_find_sym(girepository, "gi_callable_info_skip_return");
    stub_funcs.ptr_gi_callable_info_get_n_args = try_find_sym(girepository, "gi_callable_info_get_n_args");
    stub_funcs.ptr_gi_callable_info_get_arg = try_find_sym(girepository, "gi_callable_info_get_arg");
    stub_funcs.ptr_gi_callable_info_load_arg = try_find_sym(girepository, "gi_callable_info_load_arg");
    stub_funcs.ptr_gi_callable_info_invoke = try_find_sym(girepository, "gi_callable_info_invoke");
    stub_funcs.ptr_gi_callable_info_get_instance_ownership_transfer = try_find_sym(girepository, "gi_callable_info_get_instance_ownership_transfer");
    stub_funcs.ptr_gi_constant_info_get_type_info = try_find_sym(girepository, "gi_constant_info_get_type_info");
    stub_funcs.ptr_gi_constant_info_free_value = try_find_sym(girepository, "gi_constant_info_free_value");
    stub_funcs.ptr_gi_constant_info_get_value = try_find_sym(girepository, "gi_constant_info_get_value");
    stub_funcs.ptr_gi_enum_info_get_n_values = try_find_sym(girepository, "gi_enum_info_get_n_values");
    stub_funcs.ptr_gi_enum_info_get_value = try_find_sym(girepository, "gi_enum_info_get_value");
    stub_funcs.ptr_gi_enum_info_get_n_methods = try_find_sym(girepository, "gi_enum_info_get_n_methods");
    stub_funcs.ptr_gi_enum_info_get_method = try_find_sym(girepository, "gi_enum_info_get_method");
    stub_funcs.ptr_gi_enum_info_get_storage_type = try_find_sym(girepository, "gi_enum_info_get_storage_type");
    stub_funcs.ptr_gi_enum_info_get_error_domain = try_find_sym(girepository, "gi_enum_info_get_error_domain");
    stub_funcs.ptr_gi_field_info_get_flags = try_find_sym(girepository, "gi_field_info_get_flags");
    stub_funcs.ptr_gi_field_info_get_size = try_find_sym(girepository, "gi_field_info_get_size");
    stub_funcs.ptr_gi_field_info_get_offset = try_find_sym(girepository, "gi_field_info_get_offset");
    stub_funcs.ptr_gi_field_info_get_type_info = try_find_sym(girepository, "gi_field_info_get_type_info");
    stub_funcs.ptr_gi_field_info_get_field = try_find_sym(girepository, "gi_field_info_get_field");
    stub_funcs.ptr_gi_field_info_set_field = try_find_sym(girepository, "gi_field_info_set_field");
    stub_funcs.ptr_gi_function_info_get_symbol = try_find_sym(girepository, "gi_function_info_get_symbol");
    stub_funcs.ptr_gi_function_info_get_flags = try_find_sym(girepository, "gi_function_info_get_flags");
    stub_funcs.ptr_gi_function_info_get_property = try_find_sym(girepository, "gi_function_info_get_property");
    stub_funcs.ptr_gi_function_info_get_vfunc = try_find_sym(girepository, "gi_function_info_get_vfunc");
    stub_funcs.ptr_gi_invoke_error_quark = try_find_sym(girepository, "gi_invoke_error_quark");
    stub_funcs.ptr_gi_function_info_invoke = try_find_sym(girepository, "gi_function_info_invoke");
    stub_funcs.ptr_gi_interface_info_get_n_prerequisites = try_find_sym(girepository, "gi_interface_info_get_n_prerequisites");
    stub_funcs.ptr_gi_interface_info_get_prerequisite = try_find_sym(girepository, "gi_interface_info_get_prerequisite");
    stub_funcs.ptr_gi_interface_info_get_n_properties = try_find_sym(girepository, "gi_interface_info_get_n_properties");
    stub_funcs.ptr_gi_interface_info_get_property = try_find_sym(girepository, "gi_interface_info_get_property");
    stub_funcs.ptr_gi_interface_info_get_n_methods = try_find_sym(girepository, "gi_interface_info_get_n_methods");
    stub_funcs.ptr_gi_interface_info_get_method = try_find_sym(girepository, "gi_interface_info_get_method");
    stub_funcs.ptr_gi_interface_info_find_method = try_find_sym(girepository, "gi_interface_info_find_method");
    stub_funcs.ptr_gi_interface_info_get_n_signals = try_find_sym(girepository, "gi_interface_info_get_n_signals");
    stub_funcs.ptr_gi_interface_info_get_signal = try_find_sym(girepository, "gi_interface_info_get_signal");
    stub_funcs.ptr_gi_interface_info_find_signal = try_find_sym(girepository, "gi_interface_info_find_signal");
    stub_funcs.ptr_gi_interface_info_get_n_vfuncs = try_find_sym(girepository, "gi_interface_info_get_n_vfuncs");
    stub_funcs.ptr_gi_interface_info_get_vfunc = try_find_sym(girepository, "gi_interface_info_get_vfunc");
    stub_funcs.ptr_gi_interface_info_find_vfunc = try_find_sym(girepository, "gi_interface_info_find_vfunc");
    stub_funcs.ptr_gi_interface_info_get_n_constants = try_find_sym(girepository, "gi_interface_info_get_n_constants");
    stub_funcs.ptr_gi_interface_info_get_constant = try_find_sym(girepository, "gi_interface_info_get_constant");
    stub_funcs.ptr_gi_interface_info_get_iface_struct = try_find_sym(girepository, "gi_interface_info_get_iface_struct");
    stub_funcs.ptr_gi_object_info_get_type_name = try_find_sym(girepository, "gi_object_info_get_type_name");
    stub_funcs.ptr_gi_object_info_get_type_init_function_name = try_find_sym(girepository, "gi_object_info_get_type_init_function_name");
    stub_funcs.ptr_gi_object_info_get_abstract = try_find_sym(girepository, "gi_object_info_get_abstract");
    stub_funcs.ptr_gi_object_info_get_final = try_find_sym(girepository, "gi_object_info_get_final");
    stub_funcs.ptr_gi_object_info_get_fundamental = try_find_sym(girepository, "gi_object_info_get_fundamental");
    stub_funcs.ptr_gi_object_info_get_parent = try_find_sym(girepository, "gi_object_info_get_parent");
    stub_funcs.ptr_gi_object_info_get_n_interfaces = try_find_sym(girepository, "gi_object_info_get_n_interfaces");
    stub_funcs.ptr_gi_object_info_get_interface = try_find_sym(girepository, "gi_object_info_get_interface");
    stub_funcs.ptr_gi_object_info_get_n_fields = try_find_sym(girepository, "gi_object_info_get_n_fields");
    stub_funcs.ptr_gi_object_info_get_field = try_find_sym(girepository, "gi_object_info_get_field");
    stub_funcs.ptr_gi_object_info_get_n_properties = try_find_sym(girepository, "gi_object_info_get_n_properties");
    stub_funcs.ptr_gi_object_info_get_property = try_find_sym(girepository, "gi_object_info_get_property");
    stub_funcs.ptr_gi_object_info_get_n_methods = try_find_sym(girepository, "gi_object_info_get_n_methods");
    stub_funcs.ptr_gi_object_info_get_method = try_find_sym(girepository, "gi_object_info_get_method");
    stub_funcs.ptr_gi_object_info_find_method = try_find_sym(girepository, "gi_object_info_find_method");
    stub_funcs.ptr_gi_object_info_find_method_using_interfaces = try_find_sym(girepository, "gi_object_info_find_method_using_interfaces");
    stub_funcs.ptr_gi_object_info_get_n_signals = try_find_sym(girepository, "gi_object_info_get_n_signals");
    stub_funcs.ptr_gi_object_info_get_signal = try_find_sym(girepository, "gi_object_info_get_signal");
    stub_funcs.ptr_gi_object_info_find_signal = try_find_sym(girepository, "gi_object_info_find_signal");
    stub_funcs.ptr_gi_object_info_get_n_vfuncs = try_find_sym(girepository, "gi_object_info_get_n_vfuncs");
    stub_funcs.ptr_gi_object_info_get_vfunc = try_find_sym(girepository, "gi_object_info_get_vfunc");
    stub_funcs.ptr_gi_object_info_find_vfunc = try_find_sym(girepository, "gi_object_info_find_vfunc");
    stub_funcs.ptr_gi_object_info_find_vfunc_using_interfaces = try_find_sym(girepository, "gi_object_info_find_vfunc_using_interfaces");
    stub_funcs.ptr_gi_object_info_get_n_constants = try_find_sym(girepository, "gi_object_info_get_n_constants");
    stub_funcs.ptr_gi_object_info_get_constant = try_find_sym(girepository, "gi_object_info_get_constant");
    stub_funcs.ptr_gi_object_info_get_class_struct = try_find_sym(girepository, "gi_object_info_get_class_struct");
    stub_funcs.ptr_gi_object_info_get_ref_function_name = try_find_sym(girepository, "gi_object_info_get_ref_function_name");
    stub_funcs.ptr_gi_object_info_get_ref_function_pointer = try_find_sym(girepository, "gi_object_info_get_ref_function_pointer");
    stub_funcs.ptr_gi_object_info_get_unref_function_name = try_find_sym(girepository, "gi_object_info_get_unref_function_name");
    stub_funcs.ptr_gi_object_info_get_unref_function_pointer = try_find_sym(girepository, "gi_object_info_get_unref_function_pointer");
    stub_funcs.ptr_gi_object_info_get_set_value_function_name = try_find_sym(girepository, "gi_object_info_get_set_value_function_name");
    stub_funcs.ptr_gi_object_info_get_set_value_function_pointer = try_find_sym(girepository, "gi_object_info_get_set_value_function_pointer");
    stub_funcs.ptr_gi_object_info_get_get_value_function_name = try_find_sym(girepository, "gi_object_info_get_get_value_function_name");
    stub_funcs.ptr_gi_object_info_get_get_value_function_pointer = try_find_sym(girepository, "gi_object_info_get_get_value_function_pointer");
    stub_funcs.ptr_gi_property_info_get_flags = try_find_sym(girepository, "gi_property_info_get_flags");
    stub_funcs.ptr_gi_property_info_get_type_info = try_find_sym(girepository, "gi_property_info_get_type_info");
    stub_funcs.ptr_gi_property_info_get_ownership_transfer = try_find_sym(girepository, "gi_property_info_get_ownership_transfer");
    stub_funcs.ptr_gi_property_info_get_setter = try_find_sym(girepository, "gi_property_info_get_setter");
    stub_funcs.ptr_gi_property_info_get_getter = try_find_sym(girepository, "gi_property_info_get_getter");
    stub_funcs.ptr_gi_registered_type_info_get_type_name = try_find_sym(girepository, "gi_registered_type_info_get_type_name");
    stub_funcs.ptr_gi_registered_type_info_get_type_init_function_name = try_find_sym(girepository, "gi_registered_type_info_get_type_init_function_name");
    stub_funcs.ptr_gi_registered_type_info_get_g_type = try_find_sym(girepository, "gi_registered_type_info_get_g_type");
    stub_funcs.ptr_gi_registered_type_info_is_boxed = try_find_sym(girepository, "gi_registered_type_info_is_boxed");
    stub_funcs.ptr_gi_signal_info_get_flags = try_find_sym(girepository, "gi_signal_info_get_flags");
    stub_funcs.ptr_gi_signal_info_get_class_closure = try_find_sym(girepository, "gi_signal_info_get_class_closure");
    stub_funcs.ptr_gi_signal_info_true_stops_emit = try_find_sym(girepository, "gi_signal_info_true_stops_emit");
    stub_funcs.ptr_gi_struct_info_get_n_fields = try_find_sym(girepository, "gi_struct_info_get_n_fields");
    stub_funcs.ptr_gi_struct_info_get_field = try_find_sym(girepository, "gi_struct_info_get_field");
    stub_funcs.ptr_gi_struct_info_find_field = try_find_sym(girepository, "gi_struct_info_find_field");
    stub_funcs.ptr_gi_struct_info_get_n_methods = try_find_sym(girepository, "gi_struct_info_get_n_methods");
    stub_funcs.ptr_gi_struct_info_get_method = try_find_sym(girepository, "gi_struct_info_get_method");
    stub_funcs.ptr_gi_struct_info_find_method = try_find_sym(girepository, "gi_struct_info_find_method");
    stub_funcs.ptr_gi_struct_info_get_size = try_find_sym(girepository, "gi_struct_info_get_size");
    stub_funcs.ptr_gi_struct_info_get_alignment = try_find_sym(girepository, "gi_struct_info_get_alignment");
    stub_funcs.ptr_gi_struct_info_is_gtype_struct = try_find_sym(girepository, "gi_struct_info_is_gtype_struct");
    stub_funcs.ptr_gi_struct_info_is_foreign = try_find_sym(girepository, "gi_struct_info_is_foreign");
    stub_funcs.ptr_gi_struct_info_get_copy_function_name = try_find_sym(girepository, "gi_struct_info_get_copy_function_name");
    stub_funcs.ptr_gi_struct_info_get_free_function_name = try_find_sym(girepository, "gi_struct_info_get_free_function_name");
    stub_funcs.ptr_gi_type_tag_to_string = try_find_sym(girepository, "gi_type_tag_to_string");
    stub_funcs.ptr_gi_type_info_is_pointer = try_find_sym(girepository, "gi_type_info_is_pointer");
    stub_funcs.ptr_gi_type_info_get_tag = try_find_sym(girepository, "gi_type_info_get_tag");
    stub_funcs.ptr_gi_type_info_get_param_type = try_find_sym(girepository, "gi_type_info_get_param_type");
    stub_funcs.ptr_gi_type_info_get_interface = try_find_sym(girepository, "gi_type_info_get_interface");
    stub_funcs.ptr_gi_type_info_get_array_length_index = try_find_sym(girepository, "gi_type_info_get_array_length_index");
    stub_funcs.ptr_gi_type_info_get_array_fixed_size = try_find_sym(girepository, "gi_type_info_get_array_fixed_size");
    stub_funcs.ptr_gi_type_info_is_zero_terminated = try_find_sym(girepository, "gi_type_info_is_zero_terminated");
    stub_funcs.ptr_gi_type_info_get_array_type = try_find_sym(girepository, "gi_type_info_get_array_type");
    stub_funcs.ptr_gi_type_info_get_storage_type = try_find_sym(girepository, "gi_type_info_get_storage_type");
    stub_funcs.ptr_gi_type_info_argument_from_hash_pointer = try_find_sym(girepository, "gi_type_info_argument_from_hash_pointer");
    stub_funcs.ptr_gi_type_info_hash_pointer_from_argument = try_find_sym(girepository, "gi_type_info_hash_pointer_from_argument");
    stub_funcs.ptr_gi_type_tag_argument_from_hash_pointer = try_find_sym(girepository, "gi_type_tag_argument_from_hash_pointer");
    stub_funcs.ptr_gi_type_tag_hash_pointer_from_argument = try_find_sym(girepository, "gi_type_tag_hash_pointer_from_argument");
    stub_funcs.ptr_gi_union_info_get_n_fields = try_find_sym(girepository, "gi_union_info_get_n_fields");
    stub_funcs.ptr_gi_union_info_get_field = try_find_sym(girepository, "gi_union_info_get_field");
    stub_funcs.ptr_gi_union_info_get_n_methods = try_find_sym(girepository, "gi_union_info_get_n_methods");
    stub_funcs.ptr_gi_union_info_get_method = try_find_sym(girepository, "gi_union_info_get_method");
    stub_funcs.ptr_gi_union_info_is_discriminated = try_find_sym(girepository, "gi_union_info_is_discriminated");
    stub_funcs.ptr_gi_union_info_get_discriminator_offset = try_find_sym(girepository, "gi_union_info_get_discriminator_offset");
    stub_funcs.ptr_gi_union_info_get_discriminator_type = try_find_sym(girepository, "gi_union_info_get_discriminator_type");
    stub_funcs.ptr_gi_union_info_get_discriminator = try_find_sym(girepository, "gi_union_info_get_discriminator");
    stub_funcs.ptr_gi_union_info_find_method = try_find_sym(girepository, "gi_union_info_find_method");
    stub_funcs.ptr_gi_union_info_get_size = try_find_sym(girepository, "gi_union_info_get_size");
    stub_funcs.ptr_gi_union_info_get_alignment = try_find_sym(girepository, "gi_union_info_get_alignment");
    stub_funcs.ptr_gi_union_info_get_copy_function_name = try_find_sym(girepository, "gi_union_info_get_copy_function_name");
    stub_funcs.ptr_gi_union_info_get_free_function_name = try_find_sym(girepository, "gi_union_info_get_free_function_name");
    stub_funcs.ptr_gi_value_info_get_value = try_find_sym(girepository, "gi_value_info_get_value");
    stub_funcs.ptr_gi_vfunc_info_get_flags = try_find_sym(girepository, "gi_vfunc_info_get_flags");
    stub_funcs.ptr_gi_vfunc_info_get_offset = try_find_sym(girepository, "gi_vfunc_info_get_offset");
    stub_funcs.ptr_gi_vfunc_info_get_signal = try_find_sym(girepository, "gi_vfunc_info_get_signal");
    stub_funcs.ptr_gi_vfunc_info_get_invoker = try_find_sym(girepository, "gi_vfunc_info_get_invoker");
    stub_funcs.ptr_gi_vfunc_info_get_address = try_find_sym(girepository, "gi_vfunc_info_get_address");
    stub_funcs.ptr_gi_vfunc_info_invoke = try_find_sym(girepository, "gi_vfunc_info_invoke");
    stub_funcs.ptr_gi_repository_get_type = try_find_sym(girepository, "gi_repository_get_type");
    stub_funcs.ptr_gi_repository_new = try_find_sym(girepository, "gi_repository_new");
    stub_funcs.ptr_gi_repository_prepend_search_path = try_find_sym(girepository, "gi_repository_prepend_search_path");
    stub_funcs.ptr_gi_repository_prepend_library_path = try_find_sym(girepository, "gi_repository_prepend_library_path");
    stub_funcs.ptr_gi_repository_get_search_path = try_find_sym(girepository, "gi_repository_get_search_path");
    stub_funcs.ptr_gi_repository_get_library_path = try_find_sym(girepository, "gi_repository_get_library_path");
    stub_funcs.ptr_gi_repository_load_typelib = try_find_sym(girepository, "gi_repository_load_typelib");
    stub_funcs.ptr_gi_repository_is_registered = try_find_sym(girepository, "gi_repository_is_registered");
    stub_funcs.ptr_gi_repository_find_by_name = try_find_sym(girepository, "gi_repository_find_by_name");
    stub_funcs.ptr_gi_repository_enumerate_versions = try_find_sym(girepository, "gi_repository_enumerate_versions");
    stub_funcs.ptr_gi_repository_require = try_find_sym(girepository, "gi_repository_require");
    stub_funcs.ptr_gi_repository_require_private = try_find_sym(girepository, "gi_repository_require_private");
    stub_funcs.ptr_gi_repository_get_immediate_dependencies = try_find_sym(girepository, "gi_repository_get_immediate_dependencies");
    stub_funcs.ptr_gi_repository_get_dependencies = try_find_sym(girepository, "gi_repository_get_dependencies");
    stub_funcs.ptr_gi_repository_get_loaded_namespaces = try_find_sym(girepository, "gi_repository_get_loaded_namespaces");
    stub_funcs.ptr_gi_repository_find_by_gtype = try_find_sym(girepository, "gi_repository_find_by_gtype");
    stub_funcs.ptr_gi_repository_get_object_gtype_interfaces = try_find_sym(girepository, "gi_repository_get_object_gtype_interfaces");
    stub_funcs.ptr_gi_repository_get_n_infos = try_find_sym(girepository, "gi_repository_get_n_infos");
    stub_funcs.ptr_gi_repository_get_info = try_find_sym(girepository, "gi_repository_get_info");
    stub_funcs.ptr_gi_repository_find_by_error_domain = try_find_sym(girepository, "gi_repository_find_by_error_domain");
    stub_funcs.ptr_gi_repository_get_typelib_path = try_find_sym(girepository, "gi_repository_get_typelib_path");
    stub_funcs.ptr_gi_repository_get_shared_libraries = try_find_sym(girepository, "gi_repository_get_shared_libraries");
    stub_funcs.ptr_gi_repository_get_c_prefix = try_find_sym(girepository, "gi_repository_get_c_prefix");
    stub_funcs.ptr_gi_repository_get_version = try_find_sym(girepository, "gi_repository_get_version");
    stub_funcs.ptr_gi_repository_get_option_group = try_find_sym(girepository, "gi_repository_get_option_group");
    stub_funcs.ptr_gi_repository_dump = try_find_sym(girepository, "gi_repository_dump");
    stub_funcs.ptr_gi_repository_error_quark = try_find_sym(girepository, "gi_repository_error_quark");
    stub_funcs.ptr_gi_cclosure_marshal_generic = try_find_sym(girepository, "gi_cclosure_marshal_generic");
}

GType (gi_callable_info_get_type)(void) { return stub_funcs.ptr_gi_callable_info_get_type(); }
GType (gi_function_info_get_type)(void) { return stub_funcs.ptr_gi_function_info_get_type(); }
GType (gi_callback_info_get_type)(void) { return stub_funcs.ptr_gi_callback_info_get_type(); }
GType (gi_registered_type_info_get_type)(void) { return stub_funcs.ptr_gi_registered_type_info_get_type(); }
GType (gi_struct_info_get_type)(void) { return stub_funcs.ptr_gi_struct_info_get_type(); }
GType (gi_union_info_get_type)(void) { return stub_funcs.ptr_gi_union_info_get_type(); }
GType (gi_enum_info_get_type)(void) { return stub_funcs.ptr_gi_enum_info_get_type(); }
GType (gi_flags_info_get_type)(void) { return stub_funcs.ptr_gi_flags_info_get_type(); }
GType (gi_object_info_get_type)(void) { return stub_funcs.ptr_gi_object_info_get_type(); }
GType (gi_interface_info_get_type)(void) { return stub_funcs.ptr_gi_interface_info_get_type(); }
GType (gi_constant_info_get_type)(void) { return stub_funcs.ptr_gi_constant_info_get_type(); }
GType (gi_value_info_get_type)(void) { return stub_funcs.ptr_gi_value_info_get_type(); }
GType (gi_signal_info_get_type)(void) { return stub_funcs.ptr_gi_signal_info_get_type(); }
GType (gi_vfunc_info_get_type)(void) { return stub_funcs.ptr_gi_vfunc_info_get_type(); }
GType (gi_property_info_get_type)(void) { return stub_funcs.ptr_gi_property_info_get_type(); }
GType (gi_field_info_get_type)(void) { return stub_funcs.ptr_gi_field_info_get_type(); }
GType (gi_arg_info_get_type)(void) { return stub_funcs.ptr_gi_arg_info_get_type(); }
GType (gi_type_info_get_type)(void) { return stub_funcs.ptr_gi_type_info_get_type(); }
GType (gi_unresolved_info_get_type)(void) { return stub_funcs.ptr_gi_unresolved_info_get_type(); }
GIDirection (gi_arg_info_get_direction)(GIArgInfo * info) { return stub_funcs.ptr_gi_arg_info_get_direction(info); }
gboolean (gi_arg_info_is_return_value)(GIArgInfo * info) { return stub_funcs.ptr_gi_arg_info_is_return_value(info); }
gboolean (gi_arg_info_is_optional)(GIArgInfo * info) { return stub_funcs.ptr_gi_arg_info_is_optional(info); }
gboolean (gi_arg_info_is_caller_allocates)(GIArgInfo * info) { return stub_funcs.ptr_gi_arg_info_is_caller_allocates(info); }
gboolean (gi_arg_info_may_be_null)(GIArgInfo * info) { return stub_funcs.ptr_gi_arg_info_may_be_null(info); }
gboolean (gi_arg_info_is_skip)(GIArgInfo * info) { return stub_funcs.ptr_gi_arg_info_is_skip(info); }
GITransfer (gi_arg_info_get_ownership_transfer)(GIArgInfo * info) { return stub_funcs.ptr_gi_arg_info_get_ownership_transfer(info); }
GIScopeType (gi_arg_info_get_scope)(GIArgInfo * info) { return stub_funcs.ptr_gi_arg_info_get_scope(info); }
gboolean (gi_arg_info_get_closure_index)(GIArgInfo * info, unsigned int * out_closure_index) { return stub_funcs.ptr_gi_arg_info_get_closure_index(info, out_closure_index); }
gboolean (gi_arg_info_get_destroy_index)(GIArgInfo * info, unsigned int * out_destroy_index) { return stub_funcs.ptr_gi_arg_info_get_destroy_index(info, out_destroy_index); }
GITypeInfo * (gi_arg_info_get_type_info)(GIArgInfo * info) { return stub_funcs.ptr_gi_arg_info_get_type_info(info); }
void (gi_arg_info_load_type_info)(GIArgInfo * info, GITypeInfo * type) { stub_funcs.ptr_gi_arg_info_load_type_info(info, type); }
GType (gi_typelib_get_type)(void) { return stub_funcs.ptr_gi_typelib_get_type(); }
GITypelib * (gi_typelib_new_from_bytes)(GBytes * bytes, GError * * error) { return stub_funcs.ptr_gi_typelib_new_from_bytes(bytes, error); }
GITypelib * (gi_typelib_ref)(GITypelib * typelib) { return stub_funcs.ptr_gi_typelib_ref(typelib); }
void (gi_typelib_unref)(GITypelib * typelib) { stub_funcs.ptr_gi_typelib_unref(typelib); }
gboolean (gi_typelib_symbol)(GITypelib * typelib, const char * symbol_name, void * * symbol) { return stub_funcs.ptr_gi_typelib_symbol(typelib, symbol_name, symbol); }
const char * (gi_typelib_get_namespace)(GITypelib * typelib) { return stub_funcs.ptr_gi_typelib_get_namespace(typelib); }
GType (gi_base_info_get_type)(void) { return stub_funcs.ptr_gi_base_info_get_type(); }
GIBaseInfo * (gi_base_info_ref)(void * info) { return stub_funcs.ptr_gi_base_info_ref(info); }
void (gi_base_info_unref)(void * info) { stub_funcs.ptr_gi_base_info_unref(info); }
void (gi_base_info_clear)(void * info) { stub_funcs.ptr_gi_base_info_clear(info); }
const char * (gi_base_info_get_name)(GIBaseInfo * info) { return stub_funcs.ptr_gi_base_info_get_name(info); }
const char * (gi_base_info_get_namespace)(GIBaseInfo * info) { return stub_funcs.ptr_gi_base_info_get_namespace(info); }
gboolean (gi_base_info_is_deprecated)(GIBaseInfo * info) { return stub_funcs.ptr_gi_base_info_is_deprecated(info); }
const char * (gi_base_info_get_attribute)(GIBaseInfo * info, const char * name) { return stub_funcs.ptr_gi_base_info_get_attribute(info, name); }
gboolean (gi_base_info_iterate_attributes)(GIBaseInfo * info, GIAttributeIter * iterator, const char * * name, const char * * value) { return stub_funcs.ptr_gi_base_info_iterate_attributes(info, iterator, name, value); }
GIBaseInfo * (gi_base_info_get_container)(GIBaseInfo * info) { return stub_funcs.ptr_gi_base_info_get_container(info); }
GITypelib * (gi_base_info_get_typelib)(GIBaseInfo * info) { return stub_funcs.ptr_gi_base_info_get_typelib(info); }
gboolean (gi_base_info_equal)(GIBaseInfo * info1, GIBaseInfo * info2) { return stub_funcs.ptr_gi_base_info_equal(info1, info2); }
gboolean (gi_callable_info_is_method)(GICallableInfo * info) { return stub_funcs.ptr_gi_callable_info_is_method(info); }
gboolean (gi_callable_info_can_throw_gerror)(GICallableInfo * info) { return stub_funcs.ptr_gi_callable_info_can_throw_gerror(info); }
GITypeInfo * (gi_callable_info_get_return_type)(GICallableInfo * info) { return stub_funcs.ptr_gi_callable_info_get_return_type(info); }
void (gi_callable_info_load_return_type)(GICallableInfo * info, GITypeInfo * type) { stub_funcs.ptr_gi_callable_info_load_return_type(info, type); }
const char * (gi_callable_info_get_return_attribute)(GICallableInfo * info, const char * name) { return stub_funcs.ptr_gi_callable_info_get_return_attribute(info, name); }
gboolean (gi_callable_info_iterate_return_attributes)(GICallableInfo * info, GIAttributeIter * iterator, const char * * name, const char * * value) { return stub_funcs.ptr_gi_callable_info_iterate_return_attributes(info, iterator, name, value); }
GITransfer (gi_callable_info_get_caller_owns)(GICallableInfo * info) { return stub_funcs.ptr_gi_callable_info_get_caller_owns(info); }
gboolean (gi_callable_info_may_return_null)(GICallableInfo * info) { return stub_funcs.ptr_gi_callable_info_may_return_null(info); }
gboolean (gi_callable_info_skip_return)(GICallableInfo * info) { return stub_funcs.ptr_gi_callable_info_skip_return(info); }
unsigned int (gi_callable_info_get_n_args)(GICallableInfo * info) { return stub_funcs.ptr_gi_callable_info_get_n_args(info); }
GIArgInfo * (gi_callable_info_get_arg)(GICallableInfo * info, unsigned int n) { return stub_funcs.ptr_gi_callable_info_get_arg(info, n); }
void (gi_callable_info_load_arg)(GICallableInfo * info, unsigned int n, GIArgInfo * arg) { stub_funcs.ptr_gi_callable_info_load_arg(info, n, arg); }
gboolean (gi_callable_info_invoke)(GICallableInfo * info, void * function, const GIArgument * in_args, size_t n_in_args, GIArgument * out_args, size_t n_out_args, GIArgument * return_value, GError * * error) { return stub_funcs.ptr_gi_callable_info_invoke(info, function, in_args, n_in_args, out_args, n_out_args, return_value, error); }
GITransfer (gi_callable_info_get_instance_ownership_transfer)(GICallableInfo * info) { return stub_funcs.ptr_gi_callable_info_get_instance_ownership_transfer(info); }
GITypeInfo * (gi_constant_info_get_type_info)(GIConstantInfo * info) { return stub_funcs.ptr_gi_constant_info_get_type_info(info); }
void (gi_constant_info_free_value)(GIConstantInfo * info, GIArgument * value) { stub_funcs.ptr_gi_constant_info_free_value(info, value); }
size_t (gi_constant_info_get_value)(GIConstantInfo * info, GIArgument * value) { return stub_funcs.ptr_gi_constant_info_get_value(info, value); }
unsigned int (gi_enum_info_get_n_values)(GIEnumInfo * info) { return stub_funcs.ptr_gi_enum_info_get_n_values(info); }
GIValueInfo * (gi_enum_info_get_value)(GIEnumInfo * info, unsigned int n) { return stub_funcs.ptr_gi_enum_info_get_value(info, n); }
unsigned int (gi_enum_info_get_n_methods)(GIEnumInfo * info) { return stub_funcs.ptr_gi_enum_info_get_n_methods(info); }
GIFunctionInfo * (gi_enum_info_get_method)(GIEnumInfo * info, unsigned int n) { return stub_funcs.ptr_gi_enum_info_get_method(info, n); }
GITypeTag (gi_enum_info_get_storage_type)(GIEnumInfo * info) { return stub_funcs.ptr_gi_enum_info_get_storage_type(info); }
const char * (gi_enum_info_get_error_domain)(GIEnumInfo * info) { return stub_funcs.ptr_gi_enum_info_get_error_domain(info); }
GIFieldInfoFlags (gi_field_info_get_flags)(GIFieldInfo * info) { return stub_funcs.ptr_gi_field_info_get_flags(info); }
size_t (gi_field_info_get_size)(GIFieldInfo * info) { return stub_funcs.ptr_gi_field_info_get_size(info); }
size_t (gi_field_info_get_offset)(GIFieldInfo * info) { return stub_funcs.ptr_gi_field_info_get_offset(info); }
GITypeInfo * (gi_field_info_get_type_info)(GIFieldInfo * info) { return stub_funcs.ptr_gi_field_info_get_type_info(info); }
gboolean (gi_field_info_get_field)(GIFieldInfo * field_info, void * mem, GIArgument * value) { return stub_funcs.ptr_gi_field_info_get_field(field_info, mem, value); }
gboolean (gi_field_info_set_field)(GIFieldInfo * field_info, void * mem, const GIArgument * value) { return stub_funcs.ptr_gi_field_info_set_field(field_info, mem, value); }
const char * (gi_function_info_get_symbol)(GIFunctionInfo * info) { return stub_funcs.ptr_gi_function_info_get_symbol(info); }
GIFunctionInfoFlags (gi_function_info_get_flags)(GIFunctionInfo * info) { return stub_funcs.ptr_gi_function_info_get_flags(info); }
GIPropertyInfo * (gi_function_info_get_property)(GIFunctionInfo * info) { return stub_funcs.ptr_gi_function_info_get_property(info); }
GIVFuncInfo * (gi_function_info_get_vfunc)(GIFunctionInfo * info) { return stub_funcs.ptr_gi_function_info_get_vfunc(info); }
GQuark (gi_invoke_error_quark)(void) { return stub_funcs.ptr_gi_invoke_error_quark(); }
gboolean (gi_function_info_invoke)(GIFunctionInfo * info, const GIArgument * in_args, size_t n_in_args, GIArgument * out_args, size_t n_out_args, GIArgument * return_value, GError * * error) { return stub_funcs.ptr_gi_function_info_invoke(info, in_args, n_in_args, out_args, n_out_args, return_value, error); }
unsigned int (gi_interface_info_get_n_prerequisites)(GIInterfaceInfo * info) { return stub_funcs.ptr_gi_interface_info_get_n_prerequisites(info); }
GIBaseInfo * (gi_interface_info_get_prerequisite)(GIInterfaceInfo * info, unsigned int n) { return stub_funcs.ptr_gi_interface_info_get_prerequisite(info, n); }
unsigned int (gi_interface_info_get_n_properties)(GIInterfaceInfo * info) { return stub_funcs.ptr_gi_interface_info_get_n_properties(info); }
GIPropertyInfo * (gi_interface_info_get_property)(GIInterfaceInfo * info, unsigned int n) { return stub_funcs.ptr_gi_interface_info_get_property(info, n); }
unsigned int (gi_interface_info_get_n_methods)(GIInterfaceInfo * info) { return stub_funcs.ptr_gi_interface_info_get_n_methods(info); }
GIFunctionInfo * (gi_interface_info_get_method)(GIInterfaceInfo * info, unsigned int n) { return stub_funcs.ptr_gi_interface_info_get_method(info, n); }
GIFunctionInfo * (gi_interface_info_find_method)(GIInterfaceInfo * info, const char * name) { return stub_funcs.ptr_gi_interface_info_find_method(info, name); }
unsigned int (gi_interface_info_get_n_signals)(GIInterfaceInfo * info) { return stub_funcs.ptr_gi_interface_info_get_n_signals(info); }
GISignalInfo * (gi_interface_info_get_signal)(GIInterfaceInfo * info, unsigned int n) { return stub_funcs.ptr_gi_interface_info_get_signal(info, n); }
GISignalInfo * (gi_interface_info_find_signal)(GIInterfaceInfo * info, const char * name) { return stub_funcs.ptr_gi_interface_info_find_signal(info, name); }
unsigned int (gi_interface_info_get_n_vfuncs)(GIInterfaceInfo * info) { return stub_funcs.ptr_gi_interface_info_get_n_vfuncs(info); }
GIVFuncInfo * (gi_interface_info_get_vfunc)(GIInterfaceInfo * info, unsigned int n) { return stub_funcs.ptr_gi_interface_info_get_vfunc(info, n); }
GIVFuncInfo * (gi_interface_info_find_vfunc)(GIInterfaceInfo * info, const char * name) { return stub_funcs.ptr_gi_interface_info_find_vfunc(info, name); }
unsigned int (gi_interface_info_get_n_constants)(GIInterfaceInfo * info) { return stub_funcs.ptr_gi_interface_info_get_n_constants(info); }
GIConstantInfo * (gi_interface_info_get_constant)(GIInterfaceInfo * info, unsigned int n) { return stub_funcs.ptr_gi_interface_info_get_constant(info, n); }
GIStructInfo * (gi_interface_info_get_iface_struct)(GIInterfaceInfo * info) { return stub_funcs.ptr_gi_interface_info_get_iface_struct(info); }
const char * (gi_object_info_get_type_name)(GIObjectInfo * info) { return stub_funcs.ptr_gi_object_info_get_type_name(info); }
const char * (gi_object_info_get_type_init_function_name)(GIObjectInfo * info) { return stub_funcs.ptr_gi_object_info_get_type_init_function_name(info); }
gboolean (gi_object_info_get_abstract)(GIObjectInfo * info) { return stub_funcs.ptr_gi_object_info_get_abstract(info); }
gboolean (gi_object_info_get_final)(GIObjectInfo * info) { return stub_funcs.ptr_gi_object_info_get_final(info); }
gboolean (gi_object_info_get_fundamental)(GIObjectInfo * info) { return stub_funcs.ptr_gi_object_info_get_fundamental(info); }
GIObjectInfo * (gi_object_info_get_parent)(GIObjectInfo * info) { return stub_funcs.ptr_gi_object_info_get_parent(info); }
unsigned int (gi_object_info_get_n_interfaces)(GIObjectInfo * info) { return stub_funcs.ptr_gi_object_info_get_n_interfaces(info); }
GIInterfaceInfo * (gi_object_info_get_interface)(GIObjectInfo * info, unsigned int n) { return stub_funcs.ptr_gi_object_info_get_interface(info, n); }
unsigned int (gi_object_info_get_n_fields)(GIObjectInfo * info) { return stub_funcs.ptr_gi_object_info_get_n_fields(info); }
GIFieldInfo * (gi_object_info_get_field)(GIObjectInfo * info, unsigned int n) { return stub_funcs.ptr_gi_object_info_get_field(info, n); }
unsigned int (gi_object_info_get_n_properties)(GIObjectInfo * info) { return stub_funcs.ptr_gi_object_info_get_n_properties(info); }
GIPropertyInfo * (gi_object_info_get_property)(GIObjectInfo * info, unsigned int n) { return stub_funcs.ptr_gi_object_info_get_property(info, n); }
unsigned int (gi_object_info_get_n_methods)(GIObjectInfo * info) { return stub_funcs.ptr_gi_object_info_get_n_methods(info); }
GIFunctionInfo * (gi_object_info_get_method)(GIObjectInfo * info, unsigned int n) { return stub_funcs.ptr_gi_object_info_get_method(info, n); }
GIFunctionInfo * (gi_object_info_find_method)(GIObjectInfo * info, const char * name) { return stub_funcs.ptr_gi_object_info_find_method(info, name); }
GIFunctionInfo * (gi_object_info_find_method_using_interfaces)(GIObjectInfo * info, const char * name, GIBaseInfo * * declarer) { return stub_funcs.ptr_gi_object_info_find_method_using_interfaces(info, name, declarer); }
unsigned int (gi_object_info_get_n_signals)(GIObjectInfo * info) { return stub_funcs.ptr_gi_object_info_get_n_signals(info); }
GISignalInfo * (gi_object_info_get_signal)(GIObjectInfo * info, unsigned int n) { return stub_funcs.ptr_gi_object_info_get_signal(info, n); }
GISignalInfo * (gi_object_info_find_signal)(GIObjectInfo * info, const char * name) { return stub_funcs.ptr_gi_object_info_find_signal(info, name); }
unsigned int (gi_object_info_get_n_vfuncs)(GIObjectInfo * info) { return stub_funcs.ptr_gi_object_info_get_n_vfuncs(info); }
GIVFuncInfo * (gi_object_info_get_vfunc)(GIObjectInfo * info, unsigned int n) { return stub_funcs.ptr_gi_object_info_get_vfunc(info, n); }
GIVFuncInfo * (gi_object_info_find_vfunc)(GIObjectInfo * info, const char * name) { return stub_funcs.ptr_gi_object_info_find_vfunc(info, name); }
GIVFuncInfo * (gi_object_info_find_vfunc_using_interfaces)(GIObjectInfo * info, const char * name, GIBaseInfo * * declarer) { return stub_funcs.ptr_gi_object_info_find_vfunc_using_interfaces(info, name, declarer); }
unsigned int (gi_object_info_get_n_constants)(GIObjectInfo * info) { return stub_funcs.ptr_gi_object_info_get_n_constants(info); }
GIConstantInfo * (gi_object_info_get_constant)(GIObjectInfo * info, unsigned int n) { return stub_funcs.ptr_gi_object_info_get_constant(info, n); }
GIStructInfo * (gi_object_info_get_class_struct)(GIObjectInfo * info) { return stub_funcs.ptr_gi_object_info_get_class_struct(info); }
const char * (gi_object_info_get_ref_function_name)(GIObjectInfo * info) { return stub_funcs.ptr_gi_object_info_get_ref_function_name(info); }
GIObjectInfoRefFunction (gi_object_info_get_ref_function_pointer)(GIObjectInfo * info) { return stub_funcs.ptr_gi_object_info_get_ref_function_pointer(info); }
const char * (gi_object_info_get_unref_function_name)(GIObjectInfo * info) { return stub_funcs.ptr_gi_object_info_get_unref_function_name(info); }
GIObjectInfoUnrefFunction (gi_object_info_get_unref_function_pointer)(GIObjectInfo * info) { return stub_funcs.ptr_gi_object_info_get_unref_function_pointer(info); }
const char * (gi_object_info_get_set_value_function_name)(GIObjectInfo * info) { return stub_funcs.ptr_gi_object_info_get_set_value_function_name(info); }
GIObjectInfoSetValueFunction (gi_object_info_get_set_value_function_pointer)(GIObjectInfo * info) { return stub_funcs.ptr_gi_object_info_get_set_value_function_pointer(info); }
const char * (gi_object_info_get_get_value_function_name)(GIObjectInfo * info) { return stub_funcs.ptr_gi_object_info_get_get_value_function_name(info); }
GIObjectInfoGetValueFunction (gi_object_info_get_get_value_function_pointer)(GIObjectInfo * info) { return stub_funcs.ptr_gi_object_info_get_get_value_function_pointer(info); }
GParamFlags (gi_property_info_get_flags)(GIPropertyInfo * info) { return stub_funcs.ptr_gi_property_info_get_flags(info); }
GITypeInfo * (gi_property_info_get_type_info)(GIPropertyInfo * info) { return stub_funcs.ptr_gi_property_info_get_type_info(info); }
GITransfer (gi_property_info_get_ownership_transfer)(GIPropertyInfo * info) { return stub_funcs.ptr_gi_property_info_get_ownership_transfer(info); }
GIFunctionInfo * (gi_property_info_get_setter)(GIPropertyInfo * info) { return stub_funcs.ptr_gi_property_info_get_setter(info); }
GIFunctionInfo * (gi_property_info_get_getter)(GIPropertyInfo * info) { return stub_funcs.ptr_gi_property_info_get_getter(info); }
const char * (gi_registered_type_info_get_type_name)(GIRegisteredTypeInfo * info) { return stub_funcs.ptr_gi_registered_type_info_get_type_name(info); }
const char * (gi_registered_type_info_get_type_init_function_name)(GIRegisteredTypeInfo * info) { return stub_funcs.ptr_gi_registered_type_info_get_type_init_function_name(info); }
GType (gi_registered_type_info_get_g_type)(GIRegisteredTypeInfo * info) { return stub_funcs.ptr_gi_registered_type_info_get_g_type(info); }
gboolean (gi_registered_type_info_is_boxed)(GIRegisteredTypeInfo * info) { return stub_funcs.ptr_gi_registered_type_info_is_boxed(info); }
GSignalFlags (gi_signal_info_get_flags)(GISignalInfo * info) { return stub_funcs.ptr_gi_signal_info_get_flags(info); }
GIVFuncInfo * (gi_signal_info_get_class_closure)(GISignalInfo * info) { return stub_funcs.ptr_gi_signal_info_get_class_closure(info); }
gboolean (gi_signal_info_true_stops_emit)(GISignalInfo * info) { return stub_funcs.ptr_gi_signal_info_true_stops_emit(info); }
unsigned int (gi_struct_info_get_n_fields)(GIStructInfo * info) { return stub_funcs.ptr_gi_struct_info_get_n_fields(info); }
GIFieldInfo * (gi_struct_info_get_field)(GIStructInfo * info, unsigned int n) { return stub_funcs.ptr_gi_struct_info_get_field(info, n); }
GIFieldInfo * (gi_struct_info_find_field)(GIStructInfo * info, const char * name) { return stub_funcs.ptr_gi_struct_info_find_field(info, name); }
unsigned int (gi_struct_info_get_n_methods)(GIStructInfo * info) { return stub_funcs.ptr_gi_struct_info_get_n_methods(info); }
GIFunctionInfo * (gi_struct_info_get_method)(GIStructInfo * info, unsigned int n) { return stub_funcs.ptr_gi_struct_info_get_method(info, n); }
GIFunctionInfo * (gi_struct_info_find_method)(GIStructInfo * info, const char * name) { return stub_funcs.ptr_gi_struct_info_find_method(info, name); }
size_t (gi_struct_info_get_size)(GIStructInfo * info) { return stub_funcs.ptr_gi_struct_info_get_size(info); }
size_t (gi_struct_info_get_alignment)(GIStructInfo * info) { return stub_funcs.ptr_gi_struct_info_get_alignment(info); }
gboolean (gi_struct_info_is_gtype_struct)(GIStructInfo * info) { return stub_funcs.ptr_gi_struct_info_is_gtype_struct(info); }
gboolean (gi_struct_info_is_foreign)(GIStructInfo * info) { return stub_funcs.ptr_gi_struct_info_is_foreign(info); }
const char * (gi_struct_info_get_copy_function_name)(GIStructInfo * info) { return stub_funcs.ptr_gi_struct_info_get_copy_function_name(info); }
const char * (gi_struct_info_get_free_function_name)(GIStructInfo * info) { return stub_funcs.ptr_gi_struct_info_get_free_function_name(info); }
const char * (gi_type_tag_to_string)(GITypeTag type) { return stub_funcs.ptr_gi_type_tag_to_string(type); }
gboolean (gi_type_info_is_pointer)(GITypeInfo * info) { return stub_funcs.ptr_gi_type_info_is_pointer(info); }
GITypeTag (gi_type_info_get_tag)(GITypeInfo * info) { return stub_funcs.ptr_gi_type_info_get_tag(info); }
GITypeInfo * (gi_type_info_get_param_type)(GITypeInfo * info, unsigned int n) { return stub_funcs.ptr_gi_type_info_get_param_type(info, n); }
GIBaseInfo * (gi_type_info_get_interface)(GITypeInfo * info) { return stub_funcs.ptr_gi_type_info_get_interface(info); }
gboolean (gi_type_info_get_array_length_index)(GITypeInfo * info, unsigned int * out_length_index) { return stub_funcs.ptr_gi_type_info_get_array_length_index(info, out_length_index); }
gboolean (gi_type_info_get_array_fixed_size)(GITypeInfo * info, size_t * out_size) { return stub_funcs.ptr_gi_type_info_get_array_fixed_size(info, out_size); }
gboolean (gi_type_info_is_zero_terminated)(GITypeInfo * info) { return stub_funcs.ptr_gi_type_info_is_zero_terminated(info); }
GIArrayType (gi_type_info_get_array_type)(GITypeInfo * info) { return stub_funcs.ptr_gi_type_info_get_array_type(info); }
GITypeTag (gi_type_info_get_storage_type)(GITypeInfo * info) { return stub_funcs.ptr_gi_type_info_get_storage_type(info); }
void (gi_type_info_argument_from_hash_pointer)(GITypeInfo * info, void * hash_pointer, GIArgument * arg) { stub_funcs.ptr_gi_type_info_argument_from_hash_pointer(info, hash_pointer, arg); }
void * (gi_type_info_hash_pointer_from_argument)(GITypeInfo * info, GIArgument * arg) { return stub_funcs.ptr_gi_type_info_hash_pointer_from_argument(info, arg); }
void (gi_type_tag_argument_from_hash_pointer)(GITypeTag storage_type, void * hash_pointer, GIArgument * arg) { stub_funcs.ptr_gi_type_tag_argument_from_hash_pointer(storage_type, hash_pointer, arg); }
void * (gi_type_tag_hash_pointer_from_argument)(GITypeTag storage_type, GIArgument * arg) { return stub_funcs.ptr_gi_type_tag_hash_pointer_from_argument(storage_type, arg); }
unsigned int (gi_union_info_get_n_fields)(GIUnionInfo * info) { return stub_funcs.ptr_gi_union_info_get_n_fields(info); }
GIFieldInfo * (gi_union_info_get_field)(GIUnionInfo * info, unsigned int n) { return stub_funcs.ptr_gi_union_info_get_field(info, n); }
unsigned int (gi_union_info_get_n_methods)(GIUnionInfo * info) { return stub_funcs.ptr_gi_union_info_get_n_methods(info); }
GIFunctionInfo * (gi_union_info_get_method)(GIUnionInfo * info, unsigned int n) { return stub_funcs.ptr_gi_union_info_get_method(info, n); }
gboolean (gi_union_info_is_discriminated)(GIUnionInfo * info) { return stub_funcs.ptr_gi_union_info_is_discriminated(info); }
gboolean (gi_union_info_get_discriminator_offset)(GIUnionInfo * info, size_t * out_offset) { return stub_funcs.ptr_gi_union_info_get_discriminator_offset(info, out_offset); }
GITypeInfo * (gi_union_info_get_discriminator_type)(GIUnionInfo * info) { return stub_funcs.ptr_gi_union_info_get_discriminator_type(info); }
GIConstantInfo * (gi_union_info_get_discriminator)(GIUnionInfo * info, size_t n) { return stub_funcs.ptr_gi_union_info_get_discriminator(info, n); }
GIFunctionInfo * (gi_union_info_find_method)(GIUnionInfo * info, const char * name) { return stub_funcs.ptr_gi_union_info_find_method(info, name); }
size_t (gi_union_info_get_size)(GIUnionInfo * info) { return stub_funcs.ptr_gi_union_info_get_size(info); }
size_t (gi_union_info_get_alignment)(GIUnionInfo * info) { return stub_funcs.ptr_gi_union_info_get_alignment(info); }
const char * (gi_union_info_get_copy_function_name)(GIUnionInfo * info) { return stub_funcs.ptr_gi_union_info_get_copy_function_name(info); }
const char * (gi_union_info_get_free_function_name)(GIUnionInfo * info) { return stub_funcs.ptr_gi_union_info_get_free_function_name(info); }
int64_t (gi_value_info_get_value)(GIValueInfo * info) { return stub_funcs.ptr_gi_value_info_get_value(info); }
GIVFuncInfoFlags (gi_vfunc_info_get_flags)(GIVFuncInfo * info) { return stub_funcs.ptr_gi_vfunc_info_get_flags(info); }
size_t (gi_vfunc_info_get_offset)(GIVFuncInfo * info) { return stub_funcs.ptr_gi_vfunc_info_get_offset(info); }
GISignalInfo * (gi_vfunc_info_get_signal)(GIVFuncInfo * info) { return stub_funcs.ptr_gi_vfunc_info_get_signal(info); }
GIFunctionInfo * (gi_vfunc_info_get_invoker)(GIVFuncInfo * info) { return stub_funcs.ptr_gi_vfunc_info_get_invoker(info); }
void * (gi_vfunc_info_get_address)(GIVFuncInfo * info, GType implementor_gtype, GError * * error) { return stub_funcs.ptr_gi_vfunc_info_get_address(info, implementor_gtype, error); }
gboolean (gi_vfunc_info_invoke)(GIVFuncInfo * info, GType implementor, const GIArgument * in_args, size_t n_in_args, GIArgument * out_args, size_t n_out_args, GIArgument * return_value, GError * * error) { return stub_funcs.ptr_gi_vfunc_info_invoke(info, implementor, in_args, n_in_args, out_args, n_out_args, return_value, error); }
GType (gi_repository_get_type)(void) { return stub_funcs.ptr_gi_repository_get_type(); }
GIRepository * (gi_repository_new)(void) { return stub_funcs.ptr_gi_repository_new(); }
void (gi_repository_prepend_search_path)(GIRepository * repository, const char * directory) { stub_funcs.ptr_gi_repository_prepend_search_path(repository, directory); }
void (gi_repository_prepend_library_path)(GIRepository * repository, const char * directory) { stub_funcs.ptr_gi_repository_prepend_library_path(repository, directory); }
const char * const * (gi_repository_get_search_path)(GIRepository * repository, size_t * n_paths_out) { return stub_funcs.ptr_gi_repository_get_search_path(repository, n_paths_out); }
const char * const * (gi_repository_get_library_path)(GIRepository * repository, size_t * n_paths_out) { return stub_funcs.ptr_gi_repository_get_library_path(repository, n_paths_out); }
const char * (gi_repository_load_typelib)(GIRepository * repository, GITypelib * typelib, GIRepositoryLoadFlags flags, GError * * error) { return stub_funcs.ptr_gi_repository_load_typelib(repository, typelib, flags, error); }
gboolean (gi_repository_is_registered)(GIRepository * repository, const char * namespace_, const char * version) { return stub_funcs.ptr_gi_repository_is_registered(repository, namespace_, version); }
GIBaseInfo * (gi_repository_find_by_name)(GIRepository * repository, const char * namespace_, const char * name) { return stub_funcs.ptr_gi_repository_find_by_name(repository, namespace_, name); }
char * * (gi_repository_enumerate_versions)(GIRepository * repository, const char * namespace_, size_t * n_versions_out) { return stub_funcs.ptr_gi_repository_enumerate_versions(repository, namespace_, n_versions_out); }
GITypelib * (gi_repository_require)(GIRepository * repository, const char * namespace_, const char * version, GIRepositoryLoadFlags flags, GError * * error) { return stub_funcs.ptr_gi_repository_require(repository, namespace_, version, flags, error); }
GITypelib * (gi_repository_require_private)(GIRepository * repository, const char * typelib_dir, const char * namespace_, const char * version, GIRepositoryLoadFlags flags, GError * * error) { return stub_funcs.ptr_gi_repository_require_private(repository, typelib_dir, namespace_, version, flags, error); }
char * * (gi_repository_get_immediate_dependencies)(GIRepository * repository, const char * namespace_, size_t * n_dependencies_out) { return stub_funcs.ptr_gi_repository_get_immediate_dependencies(repository, namespace_, n_dependencies_out); }
char * * (gi_repository_get_dependencies)(GIRepository * repository, const char * namespace_, size_t * n_dependencies_out) { return stub_funcs.ptr_gi_repository_get_dependencies(repository, namespace_, n_dependencies_out); }
char * * (gi_repository_get_loaded_namespaces)(GIRepository * repository, size_t * n_namespaces_out) { return stub_funcs.ptr_gi_repository_get_loaded_namespaces(repository, n_namespaces_out); }
GIBaseInfo * (gi_repository_find_by_gtype)(GIRepository * repository, GType gtype) { return stub_funcs.ptr_gi_repository_find_by_gtype(repository, gtype); }
void (gi_repository_get_object_gtype_interfaces)(GIRepository * repository, GType gtype, size_t * n_interfaces_out, GIInterfaceInfo * * * interfaces_out) { stub_funcs.ptr_gi_repository_get_object_gtype_interfaces(repository, gtype, n_interfaces_out, interfaces_out); }
unsigned int (gi_repository_get_n_infos)(GIRepository * repository, const char * namespace_) { return stub_funcs.ptr_gi_repository_get_n_infos(repository, namespace_); }
GIBaseInfo * (gi_repository_get_info)(GIRepository * repository, const char * namespace_, unsigned int idx) { return stub_funcs.ptr_gi_repository_get_info(repository, namespace_, idx); }
GIEnumInfo * (gi_repository_find_by_error_domain)(GIRepository * repository, GQuark domain) { return stub_funcs.ptr_gi_repository_find_by_error_domain(repository, domain); }
const char * (gi_repository_get_typelib_path)(GIRepository * repository, const char * namespace_) { return stub_funcs.ptr_gi_repository_get_typelib_path(repository, namespace_); }
const char * const * (gi_repository_get_shared_libraries)(GIRepository * repository, const char * namespace_, size_t * out_n_elements) { return stub_funcs.ptr_gi_repository_get_shared_libraries(repository, namespace_, out_n_elements); }
const char * (gi_repository_get_c_prefix)(GIRepository * repository, const char * namespace_) { return stub_funcs.ptr_gi_repository_get_c_prefix(repository, namespace_); }
const char * (gi_repository_get_version)(GIRepository * repository, const char * namespace_) { return stub_funcs.ptr_gi_repository_get_version(repository, namespace_); }
GOptionGroup * (gi_repository_get_option_group)(void) { return stub_funcs.ptr_gi_repository_get_option_group(); }
gboolean (gi_repository_dump)(const char * input_filename, const char * output_filename, GError * * error) { return stub_funcs.ptr_gi_repository_dump(input_filename, output_filename, error); }
GQuark (gi_repository_error_quark)(void) { return stub_funcs.ptr_gi_repository_error_quark(); }
void (gi_cclosure_marshal_generic)(GClosure * closure, GValue * return_gvalue, unsigned int n_param_values, const GValue * param_values, void * invocation_hint, void * marshal_data) { stub_funcs.ptr_gi_cclosure_marshal_generic(closure, return_gvalue, n_param_values, param_values, invocation_hint, marshal_data); }

void close_girepository(void) {
    cosmo_dlclose(girepository);
}