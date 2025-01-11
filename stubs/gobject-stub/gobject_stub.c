#include "gobject_stub.h"
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define _COMSO_SOURCE
#include <libc/dlopen/dlfcn.h>

static struct gobjectFuncs {
    void (*ptr_g_type_init)(void);
    void (*ptr_g_type_init_with_debug_flags)(GTypeDebugFlags debug_flags);
    const gchar * (*ptr_g_type_name)(GType type);
    GQuark (*ptr_g_type_qname)(GType type);
    GType (*ptr_g_type_from_name)(const gchar * name);
    GType (*ptr_g_type_parent)(GType type);
    guint (*ptr_g_type_depth)(GType type);
    GType (*ptr_g_type_next_base)(GType leaf_type, GType root_type);
    gboolean (*ptr_g_type_is_a)(GType type, GType is_a_type);
    gpointer (*ptr_g_type_class_ref)(GType type);
    gpointer (*ptr_g_type_class_peek)(GType type);
    gpointer (*ptr_g_type_class_peek_static)(GType type);
    void (*ptr_g_type_class_unref)(gpointer g_class);
    gpointer (*ptr_g_type_class_peek_parent)(gpointer g_class);
    gpointer (*ptr_g_type_interface_peek)(gpointer instance_class, GType iface_type);
    gpointer (*ptr_g_type_interface_peek_parent)(gpointer g_iface);
    gpointer (*ptr_g_type_default_interface_ref)(GType g_type);
    gpointer (*ptr_g_type_default_interface_peek)(GType g_type);
    void (*ptr_g_type_default_interface_unref)(gpointer g_iface);
    GType * (*ptr_g_type_children)(GType type, guint * n_children);
    GType * (*ptr_g_type_interfaces)(GType type, guint * n_interfaces);
    void (*ptr_g_type_set_qdata)(GType type, GQuark quark, gpointer data);
    gpointer (*ptr_g_type_get_qdata)(GType type, GQuark quark);
    void (*ptr_g_type_query)(GType type, GTypeQuery * query);
    int (*ptr_g_type_get_instance_count)(GType type);
    GType (*ptr_g_type_register_static)(GType parent_type, const gchar * type_name, const GTypeInfo * info, GTypeFlags flags);
    GType (*ptr_g_type_register_static_simple)(GType parent_type, const gchar * type_name, guint class_size, GClassInitFunc class_init, guint instance_size, GInstanceInitFunc instance_init, GTypeFlags flags);
    GType (*ptr_g_type_register_dynamic)(GType parent_type, const gchar * type_name, GTypePlugin * plugin, GTypeFlags flags);
    GType (*ptr_g_type_register_fundamental)(GType type_id, const gchar * type_name, const GTypeInfo * info, const GTypeFundamentalInfo * finfo, GTypeFlags flags);
    void (*ptr_g_type_add_interface_static)(GType instance_type, GType interface_type, const GInterfaceInfo * info);
    void (*ptr_g_type_add_interface_dynamic)(GType instance_type, GType interface_type, GTypePlugin * plugin);
    void (*ptr_g_type_interface_add_prerequisite)(GType interface_type, GType prerequisite_type);
    GType * (*ptr_g_type_interface_prerequisites)(GType interface_type, guint * n_prerequisites);
    GType (*ptr_g_type_interface_instantiatable_prerequisite)(GType interface_type);
    void (*ptr_g_type_class_add_private)(gpointer g_class, gsize private_size);
    gint (*ptr_g_type_add_instance_private)(GType class_type, gsize private_size);
    gpointer (*ptr_g_type_instance_get_private)(GTypeInstance * instance, GType private_type);
    void (*ptr_g_type_class_adjust_private_offset)(gpointer g_class, gint * private_size_or_offset);
    void (*ptr_g_type_add_class_private)(GType class_type, gsize private_size);
    gpointer (*ptr_g_type_class_get_private)(GTypeClass * klass, GType private_type);
    gint (*ptr_g_type_class_get_instance_private_offset)(gpointer g_class);
    void (*ptr_g_type_ensure)(GType type);
    guint (*ptr_g_type_get_type_registration_serial)(void);
    GTypePlugin * (*ptr_g_type_get_plugin)(GType type);
    GTypePlugin * (*ptr_g_type_interface_get_plugin)(GType instance_type, GType interface_type);
    GType (*ptr_g_type_fundamental_next)(void);
    GType (*ptr_g_type_fundamental)(GType type_id);
    GTypeInstance * (*ptr_g_type_create_instance)(GType type);
    void (*ptr_g_type_free_instance)(GTypeInstance * instance);
    void (*ptr_g_type_add_class_cache_func)(gpointer cache_data, GTypeClassCacheFunc cache_func);
    void (*ptr_g_type_remove_class_cache_func)(gpointer cache_data, GTypeClassCacheFunc cache_func);
    void (*ptr_g_type_class_unref_uncached)(gpointer g_class);
    void (*ptr_g_type_add_interface_check)(gpointer check_data, GTypeInterfaceCheckFunc check_func);
    void (*ptr_g_type_remove_interface_check)(gpointer check_data, GTypeInterfaceCheckFunc check_func);
    GTypeValueTable * (*ptr_g_type_value_table_peek)(GType type);
    gboolean (*ptr_g_type_check_instance)(GTypeInstance * instance);
    GTypeInstance * (*ptr_g_type_check_instance_cast)(GTypeInstance * instance, GType iface_type);
    gboolean (*ptr_g_type_check_instance_is_a)(GTypeInstance * instance, GType iface_type);
    gboolean (*ptr_g_type_check_instance_is_fundamentally_a)(GTypeInstance * instance, GType fundamental_type);
    GTypeClass * (*ptr_g_type_check_class_cast)(GTypeClass * g_class, GType is_a_type);
    gboolean (*ptr_g_type_check_class_is_a)(GTypeClass * g_class, GType is_a_type);
    gboolean (*ptr_g_type_check_is_value_type)(GType type);
    gboolean (*ptr_g_type_check_value)(const GValue * value);
    gboolean (*ptr_g_type_check_value_holds)(const GValue * value, GType type);
    gboolean (*ptr_g_type_test_flags)(GType type, guint flags);
    const gchar * (*ptr_g_type_name_from_instance)(GTypeInstance * instance);
    const gchar * (*ptr_g_type_name_from_class)(GTypeClass * g_class);
    GValue * (*ptr_g_value_init)(GValue * value, GType g_type);
    void (*ptr_g_value_copy)(const GValue * src_value, GValue * dest_value);
    GValue * (*ptr_g_value_reset)(GValue * value);
    void (*ptr_g_value_unset)(GValue * value);
    void (*ptr_g_value_set_instance)(GValue * value, gpointer instance);
    void (*ptr_g_value_init_from_instance)(GValue * value, gpointer instance);
    gboolean (*ptr_g_value_fits_pointer)(const GValue * value);
    gpointer (*ptr_g_value_peek_pointer)(const GValue * value);
    gboolean (*ptr_g_value_type_compatible)(GType src_type, GType dest_type);
    gboolean (*ptr_g_value_type_transformable)(GType src_type, GType dest_type);
    gboolean (*ptr_g_value_transform)(const GValue * src_value, GValue * dest_value);
    void (*ptr_g_value_register_transform_func)(GType src_type, GType dest_type, GValueTransform transform_func);
    GParamSpec * (*ptr_g_param_spec_ref)(GParamSpec * pspec);
    void (*ptr_g_param_spec_unref)(GParamSpec * pspec);
    void (*ptr_g_param_spec_sink)(GParamSpec * pspec);
    GParamSpec * (*ptr_g_param_spec_ref_sink)(GParamSpec * pspec);
    gpointer (*ptr_g_param_spec_get_qdata)(GParamSpec * pspec, GQuark quark);
    void (*ptr_g_param_spec_set_qdata)(GParamSpec * pspec, GQuark quark, gpointer data);
    void (*ptr_g_param_spec_set_qdata_full)(GParamSpec * pspec, GQuark quark, gpointer data, GDestroyNotify destroy);
    gpointer (*ptr_g_param_spec_steal_qdata)(GParamSpec * pspec, GQuark quark);
    GParamSpec * (*ptr_g_param_spec_get_redirect_target)(GParamSpec * pspec);
    void (*ptr_g_param_value_set_default)(GParamSpec * pspec, GValue * value);
    gboolean (*ptr_g_param_value_defaults)(GParamSpec * pspec, const GValue * value);
    gboolean (*ptr_g_param_value_validate)(GParamSpec * pspec, GValue * value);
    gboolean (*ptr_g_param_value_is_valid)(GParamSpec * pspec, const GValue * value);
    gboolean (*ptr_g_param_value_convert)(GParamSpec * pspec, const GValue * src_value, GValue * dest_value, gboolean strict_validation);
    gint (*ptr_g_param_values_cmp)(GParamSpec * pspec, const GValue * value1, const GValue * value2);
    const gchar * (*ptr_g_param_spec_get_name)(GParamSpec * pspec);
    const gchar * (*ptr_g_param_spec_get_nick)(GParamSpec * pspec);
    const gchar * (*ptr_g_param_spec_get_blurb)(GParamSpec * pspec);
    void (*ptr_g_value_set_param)(GValue * value, GParamSpec * param);
    GParamSpec * (*ptr_g_value_get_param)(const GValue * value);
    GParamSpec * (*ptr_g_value_dup_param)(const GValue * value);
    void (*ptr_g_value_take_param)(GValue * value, GParamSpec * param);
    void (*ptr_g_value_set_param_take_ownership)(GValue * value, GParamSpec * param);
    const GValue * (*ptr_g_param_spec_get_default_value)(GParamSpec * pspec);
    GQuark (*ptr_g_param_spec_get_name_quark)(GParamSpec * pspec);
    GType (*ptr_g_param_type_register_static)(const gchar * name, const GParamSpecTypeInfo * pspec_info);
    gboolean (*ptr_g_param_spec_is_valid_name)(const gchar * name);
    GType (*ptr__g_param_type_register_static_constant)(const gchar * name, const GParamSpecTypeInfo * pspec_info, GType opt_type);
    gpointer (*ptr_g_param_spec_internal)(GType param_type, const gchar * name, const gchar * nick, const gchar * blurb, GParamFlags flags);
    GParamSpecPool * (*ptr_g_param_spec_pool_new)(gboolean type_prefixing);
    void (*ptr_g_param_spec_pool_insert)(GParamSpecPool * pool, GParamSpec * pspec, GType owner_type);
    void (*ptr_g_param_spec_pool_remove)(GParamSpecPool * pool, GParamSpec * pspec);
    GParamSpec * (*ptr_g_param_spec_pool_lookup)(GParamSpecPool * pool, const gchar * param_name, GType owner_type, gboolean walk_ancestors);
    GList * (*ptr_g_param_spec_pool_list_owned)(GParamSpecPool * pool, GType owner_type);
    GParamSpec * * (*ptr_g_param_spec_pool_list)(GParamSpecPool * pool, GType owner_type, guint * n_pspecs_p);
    void (*ptr_g_param_spec_pool_free)(GParamSpecPool * pool);
    GClosure * (*ptr_g_cclosure_new)(GCallback callback_func, gpointer user_data, GClosureNotify destroy_data);
    GClosure * (*ptr_g_cclosure_new_swap)(GCallback callback_func, gpointer user_data, GClosureNotify destroy_data);
    GClosure * (*ptr_g_signal_type_cclosure_new)(GType itype, guint struct_offset);
    GClosure * (*ptr_g_closure_ref)(GClosure * closure);
    void (*ptr_g_closure_sink)(GClosure * closure);
    void (*ptr_g_closure_unref)(GClosure * closure);
    GClosure * (*ptr_g_closure_new_simple)(guint sizeof_closure, gpointer data);
    void (*ptr_g_closure_add_finalize_notifier)(GClosure * closure, gpointer notify_data, GClosureNotify notify_func);
    void (*ptr_g_closure_remove_finalize_notifier)(GClosure * closure, gpointer notify_data, GClosureNotify notify_func);
    void (*ptr_g_closure_add_invalidate_notifier)(GClosure * closure, gpointer notify_data, GClosureNotify notify_func);
    void (*ptr_g_closure_remove_invalidate_notifier)(GClosure * closure, gpointer notify_data, GClosureNotify notify_func);
    void (*ptr_g_closure_add_marshal_guards)(GClosure * closure, gpointer pre_marshal_data, GClosureNotify pre_marshal_notify, gpointer post_marshal_data, GClosureNotify post_marshal_notify);
    void (*ptr_g_closure_set_marshal)(GClosure * closure, GClosureMarshal marshal);
    void (*ptr_g_closure_set_meta_marshal)(GClosure * closure, gpointer marshal_data, GClosureMarshal meta_marshal);
    void (*ptr_g_closure_invalidate)(GClosure * closure);
    void (*ptr_g_closure_invoke)(GClosure * closure, GValue * return_value, guint n_param_values, const GValue * param_values, gpointer invocation_hint);
    void (*ptr_g_cclosure_marshal_generic)(GClosure * closure, GValue * return_gvalue, guint n_param_values, const GValue * param_values, gpointer invocation_hint, gpointer marshal_data);
    void (*ptr_g_cclosure_marshal_generic_va)(GClosure * closure, GValue * return_value, gpointer instance, va_list args_list, gpointer marshal_data, int n_params, GType * param_types);
    void (*ptr_g_cclosure_marshal_VOID__VOID)(GClosure * closure, GValue * return_value, guint n_param_values, const GValue * param_values, gpointer invocation_hint, gpointer marshal_data);
    void (*ptr_g_cclosure_marshal_VOID__VOIDv)(GClosure * closure, GValue * return_value, gpointer instance, va_list args, gpointer marshal_data, int n_params, GType * param_types);
    void (*ptr_g_cclosure_marshal_VOID__BOOLEAN)(GClosure * closure, GValue * return_value, guint n_param_values, const GValue * param_values, gpointer invocation_hint, gpointer marshal_data);
    void (*ptr_g_cclosure_marshal_VOID__BOOLEANv)(GClosure * closure, GValue * return_value, gpointer instance, va_list args, gpointer marshal_data, int n_params, GType * param_types);
    void (*ptr_g_cclosure_marshal_VOID__CHAR)(GClosure * closure, GValue * return_value, guint n_param_values, const GValue * param_values, gpointer invocation_hint, gpointer marshal_data);
    void (*ptr_g_cclosure_marshal_VOID__CHARv)(GClosure * closure, GValue * return_value, gpointer instance, va_list args, gpointer marshal_data, int n_params, GType * param_types);
    void (*ptr_g_cclosure_marshal_VOID__UCHAR)(GClosure * closure, GValue * return_value, guint n_param_values, const GValue * param_values, gpointer invocation_hint, gpointer marshal_data);
    void (*ptr_g_cclosure_marshal_VOID__UCHARv)(GClosure * closure, GValue * return_value, gpointer instance, va_list args, gpointer marshal_data, int n_params, GType * param_types);
    void (*ptr_g_cclosure_marshal_VOID__INT)(GClosure * closure, GValue * return_value, guint n_param_values, const GValue * param_values, gpointer invocation_hint, gpointer marshal_data);
    void (*ptr_g_cclosure_marshal_VOID__INTv)(GClosure * closure, GValue * return_value, gpointer instance, va_list args, gpointer marshal_data, int n_params, GType * param_types);
    void (*ptr_g_cclosure_marshal_VOID__UINT)(GClosure * closure, GValue * return_value, guint n_param_values, const GValue * param_values, gpointer invocation_hint, gpointer marshal_data);
    void (*ptr_g_cclosure_marshal_VOID__UINTv)(GClosure * closure, GValue * return_value, gpointer instance, va_list args, gpointer marshal_data, int n_params, GType * param_types);
    void (*ptr_g_cclosure_marshal_VOID__LONG)(GClosure * closure, GValue * return_value, guint n_param_values, const GValue * param_values, gpointer invocation_hint, gpointer marshal_data);
    void (*ptr_g_cclosure_marshal_VOID__LONGv)(GClosure * closure, GValue * return_value, gpointer instance, va_list args, gpointer marshal_data, int n_params, GType * param_types);
    void (*ptr_g_cclosure_marshal_VOID__ULONG)(GClosure * closure, GValue * return_value, guint n_param_values, const GValue * param_values, gpointer invocation_hint, gpointer marshal_data);
    void (*ptr_g_cclosure_marshal_VOID__ULONGv)(GClosure * closure, GValue * return_value, gpointer instance, va_list args, gpointer marshal_data, int n_params, GType * param_types);
    void (*ptr_g_cclosure_marshal_VOID__ENUM)(GClosure * closure, GValue * return_value, guint n_param_values, const GValue * param_values, gpointer invocation_hint, gpointer marshal_data);
    void (*ptr_g_cclosure_marshal_VOID__ENUMv)(GClosure * closure, GValue * return_value, gpointer instance, va_list args, gpointer marshal_data, int n_params, GType * param_types);
    void (*ptr_g_cclosure_marshal_VOID__FLAGS)(GClosure * closure, GValue * return_value, guint n_param_values, const GValue * param_values, gpointer invocation_hint, gpointer marshal_data);
    void (*ptr_g_cclosure_marshal_VOID__FLAGSv)(GClosure * closure, GValue * return_value, gpointer instance, va_list args, gpointer marshal_data, int n_params, GType * param_types);
    void (*ptr_g_cclosure_marshal_VOID__FLOAT)(GClosure * closure, GValue * return_value, guint n_param_values, const GValue * param_values, gpointer invocation_hint, gpointer marshal_data);
    void (*ptr_g_cclosure_marshal_VOID__FLOATv)(GClosure * closure, GValue * return_value, gpointer instance, va_list args, gpointer marshal_data, int n_params, GType * param_types);
    void (*ptr_g_cclosure_marshal_VOID__DOUBLE)(GClosure * closure, GValue * return_value, guint n_param_values, const GValue * param_values, gpointer invocation_hint, gpointer marshal_data);
    void (*ptr_g_cclosure_marshal_VOID__DOUBLEv)(GClosure * closure, GValue * return_value, gpointer instance, va_list args, gpointer marshal_data, int n_params, GType * param_types);
    void (*ptr_g_cclosure_marshal_VOID__STRING)(GClosure * closure, GValue * return_value, guint n_param_values, const GValue * param_values, gpointer invocation_hint, gpointer marshal_data);
    void (*ptr_g_cclosure_marshal_VOID__STRINGv)(GClosure * closure, GValue * return_value, gpointer instance, va_list args, gpointer marshal_data, int n_params, GType * param_types);
    void (*ptr_g_cclosure_marshal_VOID__PARAM)(GClosure * closure, GValue * return_value, guint n_param_values, const GValue * param_values, gpointer invocation_hint, gpointer marshal_data);
    void (*ptr_g_cclosure_marshal_VOID__PARAMv)(GClosure * closure, GValue * return_value, gpointer instance, va_list args, gpointer marshal_data, int n_params, GType * param_types);
    void (*ptr_g_cclosure_marshal_VOID__BOXED)(GClosure * closure, GValue * return_value, guint n_param_values, const GValue * param_values, gpointer invocation_hint, gpointer marshal_data);
    void (*ptr_g_cclosure_marshal_VOID__BOXEDv)(GClosure * closure, GValue * return_value, gpointer instance, va_list args, gpointer marshal_data, int n_params, GType * param_types);
    void (*ptr_g_cclosure_marshal_VOID__POINTER)(GClosure * closure, GValue * return_value, guint n_param_values, const GValue * param_values, gpointer invocation_hint, gpointer marshal_data);
    void (*ptr_g_cclosure_marshal_VOID__POINTERv)(GClosure * closure, GValue * return_value, gpointer instance, va_list args, gpointer marshal_data, int n_params, GType * param_types);
    void (*ptr_g_cclosure_marshal_VOID__OBJECT)(GClosure * closure, GValue * return_value, guint n_param_values, const GValue * param_values, gpointer invocation_hint, gpointer marshal_data);
    void (*ptr_g_cclosure_marshal_VOID__OBJECTv)(GClosure * closure, GValue * return_value, gpointer instance, va_list args, gpointer marshal_data, int n_params, GType * param_types);
    void (*ptr_g_cclosure_marshal_VOID__VARIANT)(GClosure * closure, GValue * return_value, guint n_param_values, const GValue * param_values, gpointer invocation_hint, gpointer marshal_data);
    void (*ptr_g_cclosure_marshal_VOID__VARIANTv)(GClosure * closure, GValue * return_value, gpointer instance, va_list args, gpointer marshal_data, int n_params, GType * param_types);
    void (*ptr_g_cclosure_marshal_VOID__UINT_POINTER)(GClosure * closure, GValue * return_value, guint n_param_values, const GValue * param_values, gpointer invocation_hint, gpointer marshal_data);
    void (*ptr_g_cclosure_marshal_VOID__UINT_POINTERv)(GClosure * closure, GValue * return_value, gpointer instance, va_list args, gpointer marshal_data, int n_params, GType * param_types);
    void (*ptr_g_cclosure_marshal_BOOLEAN__FLAGS)(GClosure * closure, GValue * return_value, guint n_param_values, const GValue * param_values, gpointer invocation_hint, gpointer marshal_data);
    void (*ptr_g_cclosure_marshal_BOOLEAN__FLAGSv)(GClosure * closure, GValue * return_value, gpointer instance, va_list args, gpointer marshal_data, int n_params, GType * param_types);
    void (*ptr_g_cclosure_marshal_STRING__OBJECT_POINTER)(GClosure * closure, GValue * return_value, guint n_param_values, const GValue * param_values, gpointer invocation_hint, gpointer marshal_data);
    void (*ptr_g_cclosure_marshal_STRING__OBJECT_POINTERv)(GClosure * closure, GValue * return_value, gpointer instance, va_list args, gpointer marshal_data, int n_params, GType * param_types);
    void (*ptr_g_cclosure_marshal_BOOLEAN__BOXED_BOXED)(GClosure * closure, GValue * return_value, guint n_param_values, const GValue * param_values, gpointer invocation_hint, gpointer marshal_data);
    void (*ptr_g_cclosure_marshal_BOOLEAN__BOXED_BOXEDv)(GClosure * closure, GValue * return_value, gpointer instance, va_list args, gpointer marshal_data, int n_params, GType * param_types);
    guint (*ptr_g_signal_newv)(const gchar * signal_name, GType itype, GSignalFlags signal_flags, GClosure * class_closure, GSignalAccumulator accumulator, gpointer accu_data, GSignalCMarshaller c_marshaller, GType return_type, guint n_params, GType * param_types);
    guint (*ptr_g_signal_new_valist)(const gchar * signal_name, GType itype, GSignalFlags signal_flags, GClosure * class_closure, GSignalAccumulator accumulator, gpointer accu_data, GSignalCMarshaller c_marshaller, GType return_type, guint n_params, va_list args);
    guint (*ptr_g_signal_new)(const gchar * signal_name, GType itype, GSignalFlags signal_flags, guint class_offset, GSignalAccumulator accumulator, gpointer accu_data, GSignalCMarshaller c_marshaller, GType return_type, guint n_params, ...);
    void (*ptr_g_signal_set_va_marshaller)(guint signal_id, GType instance_type, GSignalCVaMarshaller va_marshaller);
    void (*ptr_g_signal_emitv)(const GValue * instance_and_params, guint signal_id, GQuark detail, GValue * return_value);
    void (*ptr_g_signal_emit_valist)(gpointer instance, guint signal_id, GQuark detail, va_list var_args);
    void (*ptr_g_signal_emit)(gpointer instance, guint signal_id, GQuark detail, ...);
    guint (*ptr_g_signal_lookup)(const gchar * name, GType itype);
    const gchar * (*ptr_g_signal_name)(guint signal_id);
    void (*ptr_g_signal_query)(guint signal_id, GSignalQuery * query);
    guint * (*ptr_g_signal_list_ids)(GType itype, guint * n_ids);
    gboolean (*ptr_g_signal_is_valid_name)(const gchar * name);
    gboolean (*ptr_g_signal_parse_name)(const gchar * detailed_signal, GType itype, guint * signal_id_p, GQuark * detail_p, gboolean force_detail_quark);
    GSignalInvocationHint * (*ptr_g_signal_get_invocation_hint)(gpointer instance);
    void (*ptr_g_signal_stop_emission)(gpointer instance, guint signal_id, GQuark detail);
    void (*ptr_g_signal_stop_emission_by_name)(gpointer instance, const gchar * detailed_signal);
    gulong (*ptr_g_signal_add_emission_hook)(guint signal_id, GQuark detail, GSignalEmissionHook hook_func, gpointer hook_data, GDestroyNotify data_destroy);
    void (*ptr_g_signal_remove_emission_hook)(guint signal_id, gulong hook_id);
    gboolean (*ptr_g_signal_has_handler_pending)(gpointer instance, guint signal_id, GQuark detail, gboolean may_be_blocked);
    gulong (*ptr_g_signal_connect_closure_by_id)(gpointer instance, guint signal_id, GQuark detail, GClosure * closure, gboolean after);
    gulong (*ptr_g_signal_connect_closure)(gpointer instance, const gchar * detailed_signal, GClosure * closure, gboolean after);
    gulong (*ptr_g_signal_connect_data)(gpointer instance, const gchar * detailed_signal, GCallback c_handler, gpointer data, GClosureNotify destroy_data, GConnectFlags connect_flags);
    void (*ptr_g_signal_handler_block)(gpointer instance, gulong handler_id);
    void (*ptr_g_signal_handler_unblock)(gpointer instance, gulong handler_id);
    void (*ptr_g_signal_handler_disconnect)(gpointer instance, gulong handler_id);
    gboolean (*ptr_g_signal_handler_is_connected)(gpointer instance, gulong handler_id);
    gulong (*ptr_g_signal_handler_find)(gpointer instance, GSignalMatchType mask, guint signal_id, GQuark detail, GClosure * closure, gpointer func, gpointer data);
    guint (*ptr_g_signal_handlers_block_matched)(gpointer instance, GSignalMatchType mask, guint signal_id, GQuark detail, GClosure * closure, gpointer func, gpointer data);
    guint (*ptr_g_signal_handlers_unblock_matched)(gpointer instance, GSignalMatchType mask, guint signal_id, GQuark detail, GClosure * closure, gpointer func, gpointer data);
    guint (*ptr_g_signal_handlers_disconnect_matched)(gpointer instance, GSignalMatchType mask, guint signal_id, GQuark detail, GClosure * closure, gpointer func, gpointer data);
    void (*ptr_g_clear_signal_handler)(gulong * handler_id_ptr, gpointer instance);
    void (*ptr_g_signal_override_class_closure)(guint signal_id, GType instance_type, GClosure * class_closure);
    void (*ptr_g_signal_override_class_handler)(const gchar * signal_name, GType instance_type, GCallback class_handler);
    void (*ptr_g_signal_chain_from_overridden)(const GValue * instance_and_params, GValue * return_value);
    gboolean (*ptr_g_signal_accumulator_true_handled)(GSignalInvocationHint * ihint, GValue * return_accu, const GValue * handler_return, gpointer dummy);
    gboolean (*ptr_g_signal_accumulator_first_wins)(GSignalInvocationHint * ihint, GValue * return_accu, const GValue * handler_return, gpointer dummy);
    void (*ptr_g_signal_handlers_destroy)(gpointer instance);
    void (*ptr__g_signals_destroy)(GType itype);
    GType (*ptr_g_date_get_type)(void);
    GType (*ptr_g_strv_get_type)(void);
    GType (*ptr_g_gstring_get_type)(void);
    GType (*ptr_g_hash_table_get_type)(void);
    GType (*ptr_g_array_get_type)(void);
    GType (*ptr_g_byte_array_get_type)(void);
    GType (*ptr_g_ptr_array_get_type)(void);
    GType (*ptr_g_bytes_get_type)(void);
    GType (*ptr_g_variant_type_get_gtype)(void);
    GType (*ptr_g_regex_get_type)(void);
    GType (*ptr_g_match_info_get_type)(void);
    GType (*ptr_g_error_get_type)(void);
    GType (*ptr_g_date_time_get_type)(void);
    GType (*ptr_g_time_zone_get_type)(void);
    GType (*ptr_g_io_channel_get_type)(void);
    GType (*ptr_g_io_condition_get_type)(void);
    GType (*ptr_g_variant_builder_get_type)(void);
    GType (*ptr_g_variant_dict_get_type)(void);
    GType (*ptr_g_key_file_get_type)(void);
    GType (*ptr_g_main_loop_get_type)(void);
    GType (*ptr_g_main_context_get_type)(void);
    GType (*ptr_g_source_get_type)(void);
    GType (*ptr_g_pollfd_get_type)(void);
    GType (*ptr_g_thread_get_type)(void);
    GType (*ptr_g_checksum_get_type)(void);
    GType (*ptr_g_markup_parse_context_get_type)(void);
    GType (*ptr_g_mapped_file_get_type)(void);
    GType (*ptr_g_option_group_get_type)(void);
    GType (*ptr_g_uri_get_type)(void);
    GType (*ptr_g_tree_get_type)(void);
    GType (*ptr_g_pattern_spec_get_type)(void);
    GType (*ptr_g_bookmark_file_get_type)(void);
    GType (*ptr_g_hmac_get_type)(void);
    GType (*ptr_g_dir_get_type)(void);
    GType (*ptr_g_rand_get_type)(void);
    GType (*ptr_g_strv_builder_get_type)(void);
    GType (*ptr_g_variant_get_gtype)(void);
    gpointer (*ptr_g_boxed_copy)(GType boxed_type, gconstpointer src_boxed);
    void (*ptr_g_boxed_free)(GType boxed_type, gpointer boxed);
    void (*ptr_g_value_set_boxed)(GValue * value, gconstpointer v_boxed);
    void (*ptr_g_value_set_static_boxed)(GValue * value, gconstpointer v_boxed);
    void (*ptr_g_value_take_boxed)(GValue * value, gconstpointer v_boxed);
    void (*ptr_g_value_set_boxed_take_ownership)(GValue * value, gconstpointer v_boxed);
    gpointer (*ptr_g_value_get_boxed)(const GValue * value);
    gpointer (*ptr_g_value_dup_boxed)(const GValue * value);
    GType (*ptr_g_boxed_type_register_static)(const gchar * name, GBoxedCopyFunc boxed_copy, GBoxedFreeFunc boxed_free);
    GType (*ptr_g_closure_get_type)(void);
    GType (*ptr_g_value_get_type)(void);
    GType (*ptr_g_initially_unowned_get_type)(void);
    void (*ptr_g_object_class_install_property)(GObjectClass * oclass, guint property_id, GParamSpec * pspec);
    GParamSpec * (*ptr_g_object_class_find_property)(GObjectClass * oclass, const gchar * property_name);
    GParamSpec * * (*ptr_g_object_class_list_properties)(GObjectClass * oclass, guint * n_properties);
    void (*ptr_g_object_class_override_property)(GObjectClass * oclass, guint property_id, const gchar * name);
    void (*ptr_g_object_class_install_properties)(GObjectClass * oclass, guint n_pspecs, GParamSpec * * pspecs);
    void (*ptr_g_object_interface_install_property)(gpointer g_iface, GParamSpec * pspec);
    GParamSpec * (*ptr_g_object_interface_find_property)(gpointer g_iface, const gchar * property_name);
    GParamSpec * * (*ptr_g_object_interface_list_properties)(gpointer g_iface, guint * n_properties_p);
    GType (*ptr_g_object_get_type)(void);
    gpointer (*ptr_g_object_new)(GType object_type, const gchar * first_property_name, ...);
    GObject * (*ptr_g_object_new_with_properties)(GType object_type, guint n_properties, const char * names[], const GValue values[]);
    gpointer (*ptr_g_object_newv)(GType object_type, guint n_parameters, GParameter * parameters);
    GObject * (*ptr_g_object_new_valist)(GType object_type, const gchar * first_property_name, va_list var_args);
    void (*ptr_g_object_set)(gpointer object, const gchar * first_property_name, ...);
    void (*ptr_g_object_get)(gpointer object, const gchar * first_property_name, ...);
    void (*ptr_g_object_setv)(GObject * object, guint n_properties, const gchar * names[], const GValue values[]);
    void (*ptr_g_object_set_valist)(GObject * object, const gchar * first_property_name, va_list var_args);
    void (*ptr_g_object_getv)(GObject * object, guint n_properties, const gchar * names[], GValue values[]);
    void (*ptr_g_object_get_valist)(GObject * object, const gchar * first_property_name, va_list var_args);
    void (*ptr_g_object_set_property)(GObject * object, const gchar * property_name, const GValue * value);
    void (*ptr_g_object_get_property)(GObject * object, const gchar * property_name, GValue * value);
    void (*ptr_g_object_freeze_notify)(GObject * object);
    void (*ptr_g_object_notify)(GObject * object, const gchar * property_name);
    void (*ptr_g_object_notify_by_pspec)(GObject * object, GParamSpec * pspec);
    void (*ptr_g_object_thaw_notify)(GObject * object);
    gboolean (*ptr_g_object_is_floating)(gpointer object);
    gpointer (*ptr_g_object_ref_sink)(gpointer object);
    gpointer (*ptr_g_object_take_ref)(gpointer object);
    gpointer (*ptr_g_object_ref)(gpointer object);
    void (*ptr_g_object_unref)(gpointer object);
    void (*ptr_g_object_weak_ref)(GObject * object, GWeakNotify notify, gpointer data);
    void (*ptr_g_object_weak_unref)(GObject * object, GWeakNotify notify, gpointer data);
    void (*ptr_g_object_add_weak_pointer)(GObject * object, gpointer * weak_pointer_location);
    void (*ptr_g_object_remove_weak_pointer)(GObject * object, gpointer * weak_pointer_location);
    void (*ptr_g_object_add_toggle_ref)(GObject * object, GToggleNotify notify, gpointer data);
    void (*ptr_g_object_remove_toggle_ref)(GObject * object, GToggleNotify notify, gpointer data);
    gpointer (*ptr_g_object_get_qdata)(GObject * object, GQuark quark);
    void (*ptr_g_object_set_qdata)(GObject * object, GQuark quark, gpointer data);
    void (*ptr_g_object_set_qdata_full)(GObject * object, GQuark quark, gpointer data, GDestroyNotify destroy);
    gpointer (*ptr_g_object_steal_qdata)(GObject * object, GQuark quark);
    gpointer (*ptr_g_object_dup_qdata)(GObject * object, GQuark quark, GDuplicateFunc dup_func, gpointer user_data);
    gboolean (*ptr_g_object_replace_qdata)(GObject * object, GQuark quark, gpointer oldval, gpointer newval, GDestroyNotify destroy, GDestroyNotify * old_destroy);
    gpointer (*ptr_g_object_get_data)(GObject * object, const gchar * key);
    void (*ptr_g_object_set_data)(GObject * object, const gchar * key, gpointer data);
    void (*ptr_g_object_set_data_full)(GObject * object, const gchar * key, gpointer data, GDestroyNotify destroy);
    gpointer (*ptr_g_object_steal_data)(GObject * object, const gchar * key);
    gpointer (*ptr_g_object_dup_data)(GObject * object, const gchar * key, GDuplicateFunc dup_func, gpointer user_data);
    gboolean (*ptr_g_object_replace_data)(GObject * object, const gchar * key, gpointer oldval, gpointer newval, GDestroyNotify destroy, GDestroyNotify * old_destroy);
    void (*ptr_g_object_watch_closure)(GObject * object, GClosure * closure);
    GClosure * (*ptr_g_cclosure_new_object)(GCallback callback_func, GObject * object);
    GClosure * (*ptr_g_cclosure_new_object_swap)(GCallback callback_func, GObject * object);
    GClosure * (*ptr_g_closure_new_object)(guint sizeof_closure, GObject * object);
    void (*ptr_g_value_set_object)(GValue * value, gpointer v_object);
    gpointer (*ptr_g_value_get_object)(const GValue * value);
    gpointer (*ptr_g_value_dup_object)(const GValue * value);
    gulong (*ptr_g_signal_connect_object)(gpointer instance, const gchar * detailed_signal, GCallback c_handler, gpointer gobject, GConnectFlags connect_flags);
    void (*ptr_g_object_force_floating)(GObject * object);
    void (*ptr_g_object_run_dispose)(GObject * object);
    void (*ptr_g_value_take_object)(GValue * value, gpointer v_object);
    void (*ptr_g_value_set_object_take_ownership)(GValue * value, gpointer v_object);
    gsize (*ptr_g_object_compat_control)(gsize what, gpointer data);
    void (*ptr_g_clear_object)(GObject * * object_ptr);
    void (*ptr_g_weak_ref_init)(GWeakRef * weak_ref, gpointer object);
    void (*ptr_g_weak_ref_clear)(GWeakRef * weak_ref);
    gpointer (*ptr_g_weak_ref_get)(GWeakRef * weak_ref);
    void (*ptr_g_weak_ref_set)(GWeakRef * weak_ref, gpointer object);
    GType (*ptr_g_binding_flags_get_type)(void);
    GType (*ptr_g_binding_get_type)(void);
    GBindingFlags (*ptr_g_binding_get_flags)(GBinding * binding);
    GObject * (*ptr_g_binding_get_source)(GBinding * binding);
    GObject * (*ptr_g_binding_dup_source)(GBinding * binding);
    GObject * (*ptr_g_binding_get_target)(GBinding * binding);
    GObject * (*ptr_g_binding_dup_target)(GBinding * binding);
    const gchar * (*ptr_g_binding_get_source_property)(GBinding * binding);
    const gchar * (*ptr_g_binding_get_target_property)(GBinding * binding);
    void (*ptr_g_binding_unbind)(GBinding * binding);
    GBinding * (*ptr_g_object_bind_property)(gpointer source, const gchar * source_property, gpointer target, const gchar * target_property, GBindingFlags flags);
    GBinding * (*ptr_g_object_bind_property_full)(gpointer source, const gchar * source_property, gpointer target, const gchar * target_property, GBindingFlags flags, GBindingTransformFunc transform_to, GBindingTransformFunc transform_from, gpointer user_data, GDestroyNotify notify);
    GBinding * (*ptr_g_object_bind_property_with_closures)(gpointer source, const gchar * source_property, gpointer target, const gchar * target_property, GBindingFlags flags, GClosure * transform_to, GClosure * transform_from);
    GType (*ptr_g_binding_group_get_type)(void);
    GBindingGroup * (*ptr_g_binding_group_new)(void);
    gpointer (*ptr_g_binding_group_dup_source)(GBindingGroup * self);
    void (*ptr_g_binding_group_set_source)(GBindingGroup * self, gpointer source);
    void (*ptr_g_binding_group_bind)(GBindingGroup * self, const gchar * source_property, gpointer target, const gchar * target_property, GBindingFlags flags);
    void (*ptr_g_binding_group_bind_full)(GBindingGroup * self, const gchar * source_property, gpointer target, const gchar * target_property, GBindingFlags flags, GBindingTransformFunc transform_to, GBindingTransformFunc transform_from, gpointer user_data, GDestroyNotify user_data_destroy);
    void (*ptr_g_binding_group_bind_with_closures)(GBindingGroup * self, const gchar * source_property, gpointer target, const gchar * target_property, GBindingFlags flags, GClosure * transform_to, GClosure * transform_from);
    GEnumValue * (*ptr_g_enum_get_value)(GEnumClass * enum_class, gint value);
    GEnumValue * (*ptr_g_enum_get_value_by_name)(GEnumClass * enum_class, const gchar * name);
    GEnumValue * (*ptr_g_enum_get_value_by_nick)(GEnumClass * enum_class, const gchar * nick);
    GFlagsValue * (*ptr_g_flags_get_first_value)(GFlagsClass * flags_class, guint value);
    GFlagsValue * (*ptr_g_flags_get_value_by_name)(GFlagsClass * flags_class, const gchar * name);
    GFlagsValue * (*ptr_g_flags_get_value_by_nick)(GFlagsClass * flags_class, const gchar * nick);
    gchar * (*ptr_g_enum_to_string)(GType g_enum_type, gint value);
    gchar * (*ptr_g_flags_to_string)(GType flags_type, guint value);
    void (*ptr_g_value_set_enum)(GValue * value, gint v_enum);
    gint (*ptr_g_value_get_enum)(const GValue * value);
    void (*ptr_g_value_set_flags)(GValue * value, guint v_flags);
    guint (*ptr_g_value_get_flags)(const GValue * value);
    GType (*ptr_g_enum_register_static)(const gchar * name, const GEnumValue * const_static_values);
    GType (*ptr_g_flags_register_static)(const gchar * name, const GFlagsValue * const_static_values);
    void (*ptr_g_enum_complete_type_info)(GType g_enum_type, GTypeInfo * info, const GEnumValue * const_values);
    void (*ptr_g_flags_complete_type_info)(GType g_flags_type, GTypeInfo * info, const GFlagsValue * const_values);
    GType (*ptr_g_unicode_type_get_type)(void);
    GType (*ptr_g_unicode_break_type_get_type)(void);
    GType (*ptr_g_unicode_script_get_type)(void);
    GType (*ptr_g_normalize_mode_get_type)(void);
    GParamSpec * (*ptr_g_param_spec_char)(const gchar * name, const gchar * nick, const gchar * blurb, gint8 minimum, gint8 maximum, gint8 default_value, GParamFlags flags);
    GParamSpec * (*ptr_g_param_spec_uchar)(const gchar * name, const gchar * nick, const gchar * blurb, guint8 minimum, guint8 maximum, guint8 default_value, GParamFlags flags);
    GParamSpec * (*ptr_g_param_spec_boolean)(const gchar * name, const gchar * nick, const gchar * blurb, gboolean default_value, GParamFlags flags);
    GParamSpec * (*ptr_g_param_spec_int)(const gchar * name, const gchar * nick, const gchar * blurb, gint minimum, gint maximum, gint default_value, GParamFlags flags);
    GParamSpec * (*ptr_g_param_spec_uint)(const gchar * name, const gchar * nick, const gchar * blurb, guint minimum, guint maximum, guint default_value, GParamFlags flags);
    GParamSpec * (*ptr_g_param_spec_long)(const gchar * name, const gchar * nick, const gchar * blurb, glong minimum, glong maximum, glong default_value, GParamFlags flags);
    GParamSpec * (*ptr_g_param_spec_ulong)(const gchar * name, const gchar * nick, const gchar * blurb, gulong minimum, gulong maximum, gulong default_value, GParamFlags flags);
    GParamSpec * (*ptr_g_param_spec_int64)(const gchar * name, const gchar * nick, const gchar * blurb, gint64 minimum, gint64 maximum, gint64 default_value, GParamFlags flags);
    GParamSpec * (*ptr_g_param_spec_uint64)(const gchar * name, const gchar * nick, const gchar * blurb, guint64 minimum, guint64 maximum, guint64 default_value, GParamFlags flags);
    GParamSpec * (*ptr_g_param_spec_unichar)(const gchar * name, const gchar * nick, const gchar * blurb, gunichar default_value, GParamFlags flags);
    GParamSpec * (*ptr_g_param_spec_enum)(const gchar * name, const gchar * nick, const gchar * blurb, GType enum_type, gint default_value, GParamFlags flags);
    GParamSpec * (*ptr_g_param_spec_flags)(const gchar * name, const gchar * nick, const gchar * blurb, GType flags_type, guint default_value, GParamFlags flags);
    GParamSpec * (*ptr_g_param_spec_float)(const gchar * name, const gchar * nick, const gchar * blurb, gfloat minimum, gfloat maximum, gfloat default_value, GParamFlags flags);
    GParamSpec * (*ptr_g_param_spec_double)(const gchar * name, const gchar * nick, const gchar * blurb, gdouble minimum, gdouble maximum, gdouble default_value, GParamFlags flags);
    GParamSpec * (*ptr_g_param_spec_string)(const gchar * name, const gchar * nick, const gchar * blurb, const gchar * default_value, GParamFlags flags);
    GParamSpec * (*ptr_g_param_spec_param)(const gchar * name, const gchar * nick, const gchar * blurb, GType param_type, GParamFlags flags);
    GParamSpec * (*ptr_g_param_spec_boxed)(const gchar * name, const gchar * nick, const gchar * blurb, GType boxed_type, GParamFlags flags);
    GParamSpec * (*ptr_g_param_spec_pointer)(const gchar * name, const gchar * nick, const gchar * blurb, GParamFlags flags);
    GParamSpec * (*ptr_g_param_spec_value_array)(const gchar * name, const gchar * nick, const gchar * blurb, GParamSpec * element_spec, GParamFlags flags);
    GParamSpec * (*ptr_g_param_spec_object)(const gchar * name, const gchar * nick, const gchar * blurb, GType object_type, GParamFlags flags);
    GParamSpec * (*ptr_g_param_spec_override)(const gchar * name, GParamSpec * overridden);
    GParamSpec * (*ptr_g_param_spec_gtype)(const gchar * name, const gchar * nick, const gchar * blurb, GType is_a_type, GParamFlags flags);
    GParamSpec * (*ptr_g_param_spec_variant)(const gchar * name, const gchar * nick, const gchar * blurb, const GVariantType * type, GVariant * default_value, GParamFlags flags);
    GType (*ptr_g_signal_group_get_type)(void);
    GSignalGroup * (*ptr_g_signal_group_new)(GType target_type);
    void (*ptr_g_signal_group_set_target)(GSignalGroup * self, gpointer target);
    gpointer (*ptr_g_signal_group_dup_target)(GSignalGroup * self);
    void (*ptr_g_signal_group_block)(GSignalGroup * self);
    void (*ptr_g_signal_group_unblock)(GSignalGroup * self);
    void (*ptr_g_signal_group_connect_closure)(GSignalGroup * self, const gchar * detailed_signal, GClosure * closure, gboolean after);
    void (*ptr_g_signal_group_connect_object)(GSignalGroup * self, const gchar * detailed_signal, GCallback c_handler, gpointer object, GConnectFlags flags);
    void (*ptr_g_signal_group_connect_data)(GSignalGroup * self, const gchar * detailed_signal, GCallback c_handler, gpointer data, GClosureNotify notify, GConnectFlags flags);
    void (*ptr_g_signal_group_connect)(GSignalGroup * self, const gchar * detailed_signal, GCallback c_handler, gpointer data);
    void (*ptr_g_signal_group_connect_after)(GSignalGroup * self, const gchar * detailed_signal, GCallback c_handler, gpointer data);
    void (*ptr_g_signal_group_connect_swapped)(GSignalGroup * self, const gchar * detailed_signal, GCallback c_handler, gpointer data);
    void (*ptr_g_source_set_closure)(GSource * source, GClosure * closure);
    void (*ptr_g_source_set_dummy_callback)(GSource * source);
    GType (*ptr_g_type_module_get_type)(void);
    gboolean (*ptr_g_type_module_use)(GTypeModule * module);
    void (*ptr_g_type_module_unuse)(GTypeModule * module);
    void (*ptr_g_type_module_set_name)(GTypeModule * module, const gchar * name);
    GType (*ptr_g_type_module_register_type)(GTypeModule * module, GType parent_type, const gchar * type_name, const GTypeInfo * type_info, GTypeFlags flags);
    void (*ptr_g_type_module_add_interface)(GTypeModule * module, GType instance_type, GType interface_type, const GInterfaceInfo * interface_info);
    GType (*ptr_g_type_module_register_enum)(GTypeModule * module, const gchar * name, const GEnumValue * const_static_values);
    GType (*ptr_g_type_module_register_flags)(GTypeModule * module, const gchar * name, const GFlagsValue * const_static_values);
    GType (*ptr_g_type_plugin_get_type)(void);
    void (*ptr_g_type_plugin_use)(GTypePlugin * plugin);
    void (*ptr_g_type_plugin_unuse)(GTypePlugin * plugin);
    void (*ptr_g_type_plugin_complete_type_info)(GTypePlugin * plugin, GType g_type, GTypeInfo * info, GTypeValueTable * value_table);
    void (*ptr_g_type_plugin_complete_interface_info)(GTypePlugin * plugin, GType instance_type, GType interface_type, GInterfaceInfo * info);
    GType (*ptr_g_value_array_get_type)(void);
    GValue * (*ptr_g_value_array_get_nth)(GValueArray * value_array, guint index_);
    GValueArray * (*ptr_g_value_array_new)(guint n_prealloced);
    void (*ptr_g_value_array_free)(GValueArray * value_array);
    GValueArray * (*ptr_g_value_array_copy)(const GValueArray * value_array);
    GValueArray * (*ptr_g_value_array_prepend)(GValueArray * value_array, const GValue * value);
    GValueArray * (*ptr_g_value_array_append)(GValueArray * value_array, const GValue * value);
    GValueArray * (*ptr_g_value_array_insert)(GValueArray * value_array, guint index_, const GValue * value);
    GValueArray * (*ptr_g_value_array_remove)(GValueArray * value_array, guint index_);
    GValueArray * (*ptr_g_value_array_sort)(GValueArray * value_array, GCompareFunc compare_func);
    GValueArray * (*ptr_g_value_array_sort_with_data)(GValueArray * value_array, GCompareDataFunc compare_func, gpointer user_data);
    void (*ptr_g_value_set_char)(GValue * value, gchar v_char);
    gchar (*ptr_g_value_get_char)(const GValue * value);
    void (*ptr_g_value_set_schar)(GValue * value, gint8 v_char);
    gint8 (*ptr_g_value_get_schar)(const GValue * value);
    void (*ptr_g_value_set_uchar)(GValue * value, guchar v_uchar);
    guchar (*ptr_g_value_get_uchar)(const GValue * value);
    void (*ptr_g_value_set_boolean)(GValue * value, gboolean v_boolean);
    gboolean (*ptr_g_value_get_boolean)(const GValue * value);
    void (*ptr_g_value_set_int)(GValue * value, gint v_int);
    gint (*ptr_g_value_get_int)(const GValue * value);
    void (*ptr_g_value_set_uint)(GValue * value, guint v_uint);
    guint (*ptr_g_value_get_uint)(const GValue * value);
    void (*ptr_g_value_set_long)(GValue * value, glong v_long);
    glong (*ptr_g_value_get_long)(const GValue * value);
    void (*ptr_g_value_set_ulong)(GValue * value, gulong v_ulong);
    gulong (*ptr_g_value_get_ulong)(const GValue * value);
    void (*ptr_g_value_set_int64)(GValue * value, gint64 v_int64);
    gint64 (*ptr_g_value_get_int64)(const GValue * value);
    void (*ptr_g_value_set_uint64)(GValue * value, guint64 v_uint64);
    guint64 (*ptr_g_value_get_uint64)(const GValue * value);
    void (*ptr_g_value_set_float)(GValue * value, gfloat v_float);
    gfloat (*ptr_g_value_get_float)(const GValue * value);
    void (*ptr_g_value_set_double)(GValue * value, gdouble v_double);
    gdouble (*ptr_g_value_get_double)(const GValue * value);
    void (*ptr_g_value_set_string)(GValue * value, const gchar * v_string);
    void (*ptr_g_value_set_static_string)(GValue * value, const gchar * v_string);
    void (*ptr_g_value_set_interned_string)(GValue * value, const gchar * v_string);
    const gchar * (*ptr_g_value_get_string)(const GValue * value);
    gchar * (*ptr_g_value_dup_string)(const GValue * value);
    gchar * (*ptr_g_value_steal_string)(GValue * value);
    void (*ptr_g_value_set_pointer)(GValue * value, gpointer v_pointer);
    gpointer (*ptr_g_value_get_pointer)(const GValue * value);
    GType (*ptr_g_gtype_get_type)(void);
    void (*ptr_g_value_set_gtype)(GValue * value, GType v_gtype);
    GType (*ptr_g_value_get_gtype)(const GValue * value);
    void (*ptr_g_value_set_variant)(GValue * value, GVariant * variant);
    void (*ptr_g_value_take_variant)(GValue * value, GVariant * variant);
    GVariant * (*ptr_g_value_get_variant)(const GValue * value);
    GVariant * (*ptr_g_value_dup_variant)(const GValue * value);
    GType (*ptr_g_pointer_type_register_static)(const gchar * name);
    gchar * (*ptr_g_strdup_value_contents)(const GValue * value);
    void (*ptr_g_value_take_string)(GValue * value, gchar * v_string);
    void (*ptr_g_value_set_string_take_ownership)(GValue * value, gchar * v_string);
} stub_funcs;

void *glib2;

void initialize_gobject(void) {
    char *candidates_glib2[] = { "libgobject-2.so", "libgobject-2.0-0.dll" };
    glib2 = try_find_lib(candidates_glib2, 2);

    if (!glib2) {
        fprintf(stderr, "Unable to locate glib2, exiting!");
        exit(1);
    }

    stub_funcs.ptr_g_type_init = try_find_sym(glib2, "g_type_init");
    stub_funcs.ptr_g_type_init_with_debug_flags = try_find_sym(glib2, "g_type_init_with_debug_flags");
    stub_funcs.ptr_g_type_name = try_find_sym(glib2, "g_type_name");
    stub_funcs.ptr_g_type_qname = try_find_sym(glib2, "g_type_qname");
    stub_funcs.ptr_g_type_from_name = try_find_sym(glib2, "g_type_from_name");
    stub_funcs.ptr_g_type_parent = try_find_sym(glib2, "g_type_parent");
    stub_funcs.ptr_g_type_depth = try_find_sym(glib2, "g_type_depth");
    stub_funcs.ptr_g_type_next_base = try_find_sym(glib2, "g_type_next_base");
    stub_funcs.ptr_g_type_is_a = try_find_sym(glib2, "g_type_is_a");
    stub_funcs.ptr_g_type_class_ref = try_find_sym(glib2, "g_type_class_ref");
    stub_funcs.ptr_g_type_class_peek = try_find_sym(glib2, "g_type_class_peek");
    stub_funcs.ptr_g_type_class_peek_static = try_find_sym(glib2, "g_type_class_peek_static");
    stub_funcs.ptr_g_type_class_unref = try_find_sym(glib2, "g_type_class_unref");
    stub_funcs.ptr_g_type_class_peek_parent = try_find_sym(glib2, "g_type_class_peek_parent");
    stub_funcs.ptr_g_type_interface_peek = try_find_sym(glib2, "g_type_interface_peek");
    stub_funcs.ptr_g_type_interface_peek_parent = try_find_sym(glib2, "g_type_interface_peek_parent");
    stub_funcs.ptr_g_type_default_interface_ref = try_find_sym(glib2, "g_type_default_interface_ref");
    stub_funcs.ptr_g_type_default_interface_peek = try_find_sym(glib2, "g_type_default_interface_peek");
    stub_funcs.ptr_g_type_default_interface_unref = try_find_sym(glib2, "g_type_default_interface_unref");
    stub_funcs.ptr_g_type_children = try_find_sym(glib2, "g_type_children");
    stub_funcs.ptr_g_type_interfaces = try_find_sym(glib2, "g_type_interfaces");
    stub_funcs.ptr_g_type_set_qdata = try_find_sym(glib2, "g_type_set_qdata");
    stub_funcs.ptr_g_type_get_qdata = try_find_sym(glib2, "g_type_get_qdata");
    stub_funcs.ptr_g_type_query = try_find_sym(glib2, "g_type_query");
    stub_funcs.ptr_g_type_get_instance_count = try_find_sym(glib2, "g_type_get_instance_count");
    stub_funcs.ptr_g_type_register_static = try_find_sym(glib2, "g_type_register_static");
    stub_funcs.ptr_g_type_register_static_simple = try_find_sym(glib2, "g_type_register_static_simple");
    stub_funcs.ptr_g_type_register_dynamic = try_find_sym(glib2, "g_type_register_dynamic");
    stub_funcs.ptr_g_type_register_fundamental = try_find_sym(glib2, "g_type_register_fundamental");
    stub_funcs.ptr_g_type_add_interface_static = try_find_sym(glib2, "g_type_add_interface_static");
    stub_funcs.ptr_g_type_add_interface_dynamic = try_find_sym(glib2, "g_type_add_interface_dynamic");
    stub_funcs.ptr_g_type_interface_add_prerequisite = try_find_sym(glib2, "g_type_interface_add_prerequisite");
    stub_funcs.ptr_g_type_interface_prerequisites = try_find_sym(glib2, "g_type_interface_prerequisites");
    stub_funcs.ptr_g_type_interface_instantiatable_prerequisite = try_find_sym(glib2, "g_type_interface_instantiatable_prerequisite");
    stub_funcs.ptr_g_type_class_add_private = try_find_sym(glib2, "g_type_class_add_private");
    stub_funcs.ptr_g_type_add_instance_private = try_find_sym(glib2, "g_type_add_instance_private");
    stub_funcs.ptr_g_type_instance_get_private = try_find_sym(glib2, "g_type_instance_get_private");
    stub_funcs.ptr_g_type_class_adjust_private_offset = try_find_sym(glib2, "g_type_class_adjust_private_offset");
    stub_funcs.ptr_g_type_add_class_private = try_find_sym(glib2, "g_type_add_class_private");
    stub_funcs.ptr_g_type_class_get_private = try_find_sym(glib2, "g_type_class_get_private");
    stub_funcs.ptr_g_type_class_get_instance_private_offset = try_find_sym(glib2, "g_type_class_get_instance_private_offset");
    stub_funcs.ptr_g_type_ensure = try_find_sym(glib2, "g_type_ensure");
    stub_funcs.ptr_g_type_get_type_registration_serial = try_find_sym(glib2, "g_type_get_type_registration_serial");
    stub_funcs.ptr_g_type_get_plugin = try_find_sym(glib2, "g_type_get_plugin");
    stub_funcs.ptr_g_type_interface_get_plugin = try_find_sym(glib2, "g_type_interface_get_plugin");
    stub_funcs.ptr_g_type_fundamental_next = try_find_sym(glib2, "g_type_fundamental_next");
    stub_funcs.ptr_g_type_fundamental = try_find_sym(glib2, "g_type_fundamental");
    stub_funcs.ptr_g_type_create_instance = try_find_sym(glib2, "g_type_create_instance");
    stub_funcs.ptr_g_type_free_instance = try_find_sym(glib2, "g_type_free_instance");
    stub_funcs.ptr_g_type_add_class_cache_func = try_find_sym(glib2, "g_type_add_class_cache_func");
    stub_funcs.ptr_g_type_remove_class_cache_func = try_find_sym(glib2, "g_type_remove_class_cache_func");
    stub_funcs.ptr_g_type_class_unref_uncached = try_find_sym(glib2, "g_type_class_unref_uncached");
    stub_funcs.ptr_g_type_add_interface_check = try_find_sym(glib2, "g_type_add_interface_check");
    stub_funcs.ptr_g_type_remove_interface_check = try_find_sym(glib2, "g_type_remove_interface_check");
    stub_funcs.ptr_g_type_value_table_peek = try_find_sym(glib2, "g_type_value_table_peek");
    stub_funcs.ptr_g_type_check_instance = try_find_sym(glib2, "g_type_check_instance");
    stub_funcs.ptr_g_type_check_instance_cast = try_find_sym(glib2, "g_type_check_instance_cast");
    stub_funcs.ptr_g_type_check_instance_is_a = try_find_sym(glib2, "g_type_check_instance_is_a");
    stub_funcs.ptr_g_type_check_instance_is_fundamentally_a = try_find_sym(glib2, "g_type_check_instance_is_fundamentally_a");
    stub_funcs.ptr_g_type_check_class_cast = try_find_sym(glib2, "g_type_check_class_cast");
    stub_funcs.ptr_g_type_check_class_is_a = try_find_sym(glib2, "g_type_check_class_is_a");
    stub_funcs.ptr_g_type_check_is_value_type = try_find_sym(glib2, "g_type_check_is_value_type");
    stub_funcs.ptr_g_type_check_value = try_find_sym(glib2, "g_type_check_value");
    stub_funcs.ptr_g_type_check_value_holds = try_find_sym(glib2, "g_type_check_value_holds");
    stub_funcs.ptr_g_type_test_flags = try_find_sym(glib2, "g_type_test_flags");
    stub_funcs.ptr_g_type_name_from_instance = try_find_sym(glib2, "g_type_name_from_instance");
    stub_funcs.ptr_g_type_name_from_class = try_find_sym(glib2, "g_type_name_from_class");
    stub_funcs.ptr_g_value_init = try_find_sym(glib2, "g_value_init");
    stub_funcs.ptr_g_value_copy = try_find_sym(glib2, "g_value_copy");
    stub_funcs.ptr_g_value_reset = try_find_sym(glib2, "g_value_reset");
    stub_funcs.ptr_g_value_unset = try_find_sym(glib2, "g_value_unset");
    stub_funcs.ptr_g_value_set_instance = try_find_sym(glib2, "g_value_set_instance");
    stub_funcs.ptr_g_value_init_from_instance = try_find_sym(glib2, "g_value_init_from_instance");
    stub_funcs.ptr_g_value_fits_pointer = try_find_sym(glib2, "g_value_fits_pointer");
    stub_funcs.ptr_g_value_peek_pointer = try_find_sym(glib2, "g_value_peek_pointer");
    stub_funcs.ptr_g_value_type_compatible = try_find_sym(glib2, "g_value_type_compatible");
    stub_funcs.ptr_g_value_type_transformable = try_find_sym(glib2, "g_value_type_transformable");
    stub_funcs.ptr_g_value_transform = try_find_sym(glib2, "g_value_transform");
    stub_funcs.ptr_g_value_register_transform_func = try_find_sym(glib2, "g_value_register_transform_func");
    stub_funcs.ptr_g_param_spec_ref = try_find_sym(glib2, "g_param_spec_ref");
    stub_funcs.ptr_g_param_spec_unref = try_find_sym(glib2, "g_param_spec_unref");
    stub_funcs.ptr_g_param_spec_sink = try_find_sym(glib2, "g_param_spec_sink");
    stub_funcs.ptr_g_param_spec_ref_sink = try_find_sym(glib2, "g_param_spec_ref_sink");
    stub_funcs.ptr_g_param_spec_get_qdata = try_find_sym(glib2, "g_param_spec_get_qdata");
    stub_funcs.ptr_g_param_spec_set_qdata = try_find_sym(glib2, "g_param_spec_set_qdata");
    stub_funcs.ptr_g_param_spec_set_qdata_full = try_find_sym(glib2, "g_param_spec_set_qdata_full");
    stub_funcs.ptr_g_param_spec_steal_qdata = try_find_sym(glib2, "g_param_spec_steal_qdata");
    stub_funcs.ptr_g_param_spec_get_redirect_target = try_find_sym(glib2, "g_param_spec_get_redirect_target");
    stub_funcs.ptr_g_param_value_set_default = try_find_sym(glib2, "g_param_value_set_default");
    stub_funcs.ptr_g_param_value_defaults = try_find_sym(glib2, "g_param_value_defaults");
    stub_funcs.ptr_g_param_value_validate = try_find_sym(glib2, "g_param_value_validate");
    stub_funcs.ptr_g_param_value_is_valid = try_find_sym(glib2, "g_param_value_is_valid");
    stub_funcs.ptr_g_param_value_convert = try_find_sym(glib2, "g_param_value_convert");
    stub_funcs.ptr_g_param_values_cmp = try_find_sym(glib2, "g_param_values_cmp");
    stub_funcs.ptr_g_param_spec_get_name = try_find_sym(glib2, "g_param_spec_get_name");
    stub_funcs.ptr_g_param_spec_get_nick = try_find_sym(glib2, "g_param_spec_get_nick");
    stub_funcs.ptr_g_param_spec_get_blurb = try_find_sym(glib2, "g_param_spec_get_blurb");
    stub_funcs.ptr_g_value_set_param = try_find_sym(glib2, "g_value_set_param");
    stub_funcs.ptr_g_value_get_param = try_find_sym(glib2, "g_value_get_param");
    stub_funcs.ptr_g_value_dup_param = try_find_sym(glib2, "g_value_dup_param");
    stub_funcs.ptr_g_value_take_param = try_find_sym(glib2, "g_value_take_param");
    stub_funcs.ptr_g_value_set_param_take_ownership = try_find_sym(glib2, "g_value_set_param_take_ownership");
    stub_funcs.ptr_g_param_spec_get_default_value = try_find_sym(glib2, "g_param_spec_get_default_value");
    stub_funcs.ptr_g_param_spec_get_name_quark = try_find_sym(glib2, "g_param_spec_get_name_quark");
    stub_funcs.ptr_g_param_type_register_static = try_find_sym(glib2, "g_param_type_register_static");
    stub_funcs.ptr_g_param_spec_is_valid_name = try_find_sym(glib2, "g_param_spec_is_valid_name");
    stub_funcs.ptr__g_param_type_register_static_constant = try_find_sym(glib2, "_g_param_type_register_static_constant");
    stub_funcs.ptr_g_param_spec_internal = try_find_sym(glib2, "g_param_spec_internal");
    stub_funcs.ptr_g_param_spec_pool_new = try_find_sym(glib2, "g_param_spec_pool_new");
    stub_funcs.ptr_g_param_spec_pool_insert = try_find_sym(glib2, "g_param_spec_pool_insert");
    stub_funcs.ptr_g_param_spec_pool_remove = try_find_sym(glib2, "g_param_spec_pool_remove");
    stub_funcs.ptr_g_param_spec_pool_lookup = try_find_sym(glib2, "g_param_spec_pool_lookup");
    stub_funcs.ptr_g_param_spec_pool_list_owned = try_find_sym(glib2, "g_param_spec_pool_list_owned");
    stub_funcs.ptr_g_param_spec_pool_list = try_find_sym(glib2, "g_param_spec_pool_list");
    stub_funcs.ptr_g_param_spec_pool_free = try_find_sym(glib2, "g_param_spec_pool_free");
    stub_funcs.ptr_g_cclosure_new = try_find_sym(glib2, "g_cclosure_new");
    stub_funcs.ptr_g_cclosure_new_swap = try_find_sym(glib2, "g_cclosure_new_swap");
    stub_funcs.ptr_g_signal_type_cclosure_new = try_find_sym(glib2, "g_signal_type_cclosure_new");
    stub_funcs.ptr_g_closure_ref = try_find_sym(glib2, "g_closure_ref");
    stub_funcs.ptr_g_closure_sink = try_find_sym(glib2, "g_closure_sink");
    stub_funcs.ptr_g_closure_unref = try_find_sym(glib2, "g_closure_unref");
    stub_funcs.ptr_g_closure_new_simple = try_find_sym(glib2, "g_closure_new_simple");
    stub_funcs.ptr_g_closure_add_finalize_notifier = try_find_sym(glib2, "g_closure_add_finalize_notifier");
    stub_funcs.ptr_g_closure_remove_finalize_notifier = try_find_sym(glib2, "g_closure_remove_finalize_notifier");
    stub_funcs.ptr_g_closure_add_invalidate_notifier = try_find_sym(glib2, "g_closure_add_invalidate_notifier");
    stub_funcs.ptr_g_closure_remove_invalidate_notifier = try_find_sym(glib2, "g_closure_remove_invalidate_notifier");
    stub_funcs.ptr_g_closure_add_marshal_guards = try_find_sym(glib2, "g_closure_add_marshal_guards");
    stub_funcs.ptr_g_closure_set_marshal = try_find_sym(glib2, "g_closure_set_marshal");
    stub_funcs.ptr_g_closure_set_meta_marshal = try_find_sym(glib2, "g_closure_set_meta_marshal");
    stub_funcs.ptr_g_closure_invalidate = try_find_sym(glib2, "g_closure_invalidate");
    stub_funcs.ptr_g_closure_invoke = try_find_sym(glib2, "g_closure_invoke");
    stub_funcs.ptr_g_cclosure_marshal_generic = try_find_sym(glib2, "g_cclosure_marshal_generic");
    stub_funcs.ptr_g_cclosure_marshal_generic_va = try_find_sym(glib2, "g_cclosure_marshal_generic_va");
    stub_funcs.ptr_g_cclosure_marshal_VOID__VOID = try_find_sym(glib2, "g_cclosure_marshal_VOID__VOID");
    stub_funcs.ptr_g_cclosure_marshal_VOID__VOIDv = try_find_sym(glib2, "g_cclosure_marshal_VOID__VOIDv");
    stub_funcs.ptr_g_cclosure_marshal_VOID__BOOLEAN = try_find_sym(glib2, "g_cclosure_marshal_VOID__BOOLEAN");
    stub_funcs.ptr_g_cclosure_marshal_VOID__BOOLEANv = try_find_sym(glib2, "g_cclosure_marshal_VOID__BOOLEANv");
    stub_funcs.ptr_g_cclosure_marshal_VOID__CHAR = try_find_sym(glib2, "g_cclosure_marshal_VOID__CHAR");
    stub_funcs.ptr_g_cclosure_marshal_VOID__CHARv = try_find_sym(glib2, "g_cclosure_marshal_VOID__CHARv");
    stub_funcs.ptr_g_cclosure_marshal_VOID__UCHAR = try_find_sym(glib2, "g_cclosure_marshal_VOID__UCHAR");
    stub_funcs.ptr_g_cclosure_marshal_VOID__UCHARv = try_find_sym(glib2, "g_cclosure_marshal_VOID__UCHARv");
    stub_funcs.ptr_g_cclosure_marshal_VOID__INT = try_find_sym(glib2, "g_cclosure_marshal_VOID__INT");
    stub_funcs.ptr_g_cclosure_marshal_VOID__INTv = try_find_sym(glib2, "g_cclosure_marshal_VOID__INTv");
    stub_funcs.ptr_g_cclosure_marshal_VOID__UINT = try_find_sym(glib2, "g_cclosure_marshal_VOID__UINT");
    stub_funcs.ptr_g_cclosure_marshal_VOID__UINTv = try_find_sym(glib2, "g_cclosure_marshal_VOID__UINTv");
    stub_funcs.ptr_g_cclosure_marshal_VOID__LONG = try_find_sym(glib2, "g_cclosure_marshal_VOID__LONG");
    stub_funcs.ptr_g_cclosure_marshal_VOID__LONGv = try_find_sym(glib2, "g_cclosure_marshal_VOID__LONGv");
    stub_funcs.ptr_g_cclosure_marshal_VOID__ULONG = try_find_sym(glib2, "g_cclosure_marshal_VOID__ULONG");
    stub_funcs.ptr_g_cclosure_marshal_VOID__ULONGv = try_find_sym(glib2, "g_cclosure_marshal_VOID__ULONGv");
    stub_funcs.ptr_g_cclosure_marshal_VOID__ENUM = try_find_sym(glib2, "g_cclosure_marshal_VOID__ENUM");
    stub_funcs.ptr_g_cclosure_marshal_VOID__ENUMv = try_find_sym(glib2, "g_cclosure_marshal_VOID__ENUMv");
    stub_funcs.ptr_g_cclosure_marshal_VOID__FLAGS = try_find_sym(glib2, "g_cclosure_marshal_VOID__FLAGS");
    stub_funcs.ptr_g_cclosure_marshal_VOID__FLAGSv = try_find_sym(glib2, "g_cclosure_marshal_VOID__FLAGSv");
    stub_funcs.ptr_g_cclosure_marshal_VOID__FLOAT = try_find_sym(glib2, "g_cclosure_marshal_VOID__FLOAT");
    stub_funcs.ptr_g_cclosure_marshal_VOID__FLOATv = try_find_sym(glib2, "g_cclosure_marshal_VOID__FLOATv");
    stub_funcs.ptr_g_cclosure_marshal_VOID__DOUBLE = try_find_sym(glib2, "g_cclosure_marshal_VOID__DOUBLE");
    stub_funcs.ptr_g_cclosure_marshal_VOID__DOUBLEv = try_find_sym(glib2, "g_cclosure_marshal_VOID__DOUBLEv");
    stub_funcs.ptr_g_cclosure_marshal_VOID__STRING = try_find_sym(glib2, "g_cclosure_marshal_VOID__STRING");
    stub_funcs.ptr_g_cclosure_marshal_VOID__STRINGv = try_find_sym(glib2, "g_cclosure_marshal_VOID__STRINGv");
    stub_funcs.ptr_g_cclosure_marshal_VOID__PARAM = try_find_sym(glib2, "g_cclosure_marshal_VOID__PARAM");
    stub_funcs.ptr_g_cclosure_marshal_VOID__PARAMv = try_find_sym(glib2, "g_cclosure_marshal_VOID__PARAMv");
    stub_funcs.ptr_g_cclosure_marshal_VOID__BOXED = try_find_sym(glib2, "g_cclosure_marshal_VOID__BOXED");
    stub_funcs.ptr_g_cclosure_marshal_VOID__BOXEDv = try_find_sym(glib2, "g_cclosure_marshal_VOID__BOXEDv");
    stub_funcs.ptr_g_cclosure_marshal_VOID__POINTER = try_find_sym(glib2, "g_cclosure_marshal_VOID__POINTER");
    stub_funcs.ptr_g_cclosure_marshal_VOID__POINTERv = try_find_sym(glib2, "g_cclosure_marshal_VOID__POINTERv");
    stub_funcs.ptr_g_cclosure_marshal_VOID__OBJECT = try_find_sym(glib2, "g_cclosure_marshal_VOID__OBJECT");
    stub_funcs.ptr_g_cclosure_marshal_VOID__OBJECTv = try_find_sym(glib2, "g_cclosure_marshal_VOID__OBJECTv");
    stub_funcs.ptr_g_cclosure_marshal_VOID__VARIANT = try_find_sym(glib2, "g_cclosure_marshal_VOID__VARIANT");
    stub_funcs.ptr_g_cclosure_marshal_VOID__VARIANTv = try_find_sym(glib2, "g_cclosure_marshal_VOID__VARIANTv");
    stub_funcs.ptr_g_cclosure_marshal_VOID__UINT_POINTER = try_find_sym(glib2, "g_cclosure_marshal_VOID__UINT_POINTER");
    stub_funcs.ptr_g_cclosure_marshal_VOID__UINT_POINTERv = try_find_sym(glib2, "g_cclosure_marshal_VOID__UINT_POINTERv");
    stub_funcs.ptr_g_cclosure_marshal_BOOLEAN__FLAGS = try_find_sym(glib2, "g_cclosure_marshal_BOOLEAN__FLAGS");
    stub_funcs.ptr_g_cclosure_marshal_BOOLEAN__FLAGSv = try_find_sym(glib2, "g_cclosure_marshal_BOOLEAN__FLAGSv");
    stub_funcs.ptr_g_cclosure_marshal_STRING__OBJECT_POINTER = try_find_sym(glib2, "g_cclosure_marshal_STRING__OBJECT_POINTER");
    stub_funcs.ptr_g_cclosure_marshal_STRING__OBJECT_POINTERv = try_find_sym(glib2, "g_cclosure_marshal_STRING__OBJECT_POINTERv");
    stub_funcs.ptr_g_cclosure_marshal_BOOLEAN__BOXED_BOXED = try_find_sym(glib2, "g_cclosure_marshal_BOOLEAN__BOXED_BOXED");
    stub_funcs.ptr_g_cclosure_marshal_BOOLEAN__BOXED_BOXEDv = try_find_sym(glib2, "g_cclosure_marshal_BOOLEAN__BOXED_BOXEDv");
    stub_funcs.ptr_g_signal_newv = try_find_sym(glib2, "g_signal_newv");
    stub_funcs.ptr_g_signal_new_valist = try_find_sym(glib2, "g_signal_new_valist");
    stub_funcs.ptr_g_signal_new = try_find_sym(glib2, "g_signal_new");
    stub_funcs.ptr_g_signal_set_va_marshaller = try_find_sym(glib2, "g_signal_set_va_marshaller");
    stub_funcs.ptr_g_signal_emitv = try_find_sym(glib2, "g_signal_emitv");
    stub_funcs.ptr_g_signal_emit_valist = try_find_sym(glib2, "g_signal_emit_valist");
    stub_funcs.ptr_g_signal_emit = try_find_sym(glib2, "g_signal_emit");
    stub_funcs.ptr_g_signal_lookup = try_find_sym(glib2, "g_signal_lookup");
    stub_funcs.ptr_g_signal_name = try_find_sym(glib2, "g_signal_name");
    stub_funcs.ptr_g_signal_query = try_find_sym(glib2, "g_signal_query");
    stub_funcs.ptr_g_signal_list_ids = try_find_sym(glib2, "g_signal_list_ids");
    stub_funcs.ptr_g_signal_is_valid_name = try_find_sym(glib2, "g_signal_is_valid_name");
    stub_funcs.ptr_g_signal_parse_name = try_find_sym(glib2, "g_signal_parse_name");
    stub_funcs.ptr_g_signal_get_invocation_hint = try_find_sym(glib2, "g_signal_get_invocation_hint");
    stub_funcs.ptr_g_signal_stop_emission = try_find_sym(glib2, "g_signal_stop_emission");
    stub_funcs.ptr_g_signal_stop_emission_by_name = try_find_sym(glib2, "g_signal_stop_emission_by_name");
    stub_funcs.ptr_g_signal_add_emission_hook = try_find_sym(glib2, "g_signal_add_emission_hook");
    stub_funcs.ptr_g_signal_remove_emission_hook = try_find_sym(glib2, "g_signal_remove_emission_hook");
    stub_funcs.ptr_g_signal_has_handler_pending = try_find_sym(glib2, "g_signal_has_handler_pending");
    stub_funcs.ptr_g_signal_connect_closure_by_id = try_find_sym(glib2, "g_signal_connect_closure_by_id");
    stub_funcs.ptr_g_signal_connect_closure = try_find_sym(glib2, "g_signal_connect_closure");
    stub_funcs.ptr_g_signal_connect_data = try_find_sym(glib2, "g_signal_connect_data");
    stub_funcs.ptr_g_signal_handler_block = try_find_sym(glib2, "g_signal_handler_block");
    stub_funcs.ptr_g_signal_handler_unblock = try_find_sym(glib2, "g_signal_handler_unblock");
    stub_funcs.ptr_g_signal_handler_disconnect = try_find_sym(glib2, "g_signal_handler_disconnect");
    stub_funcs.ptr_g_signal_handler_is_connected = try_find_sym(glib2, "g_signal_handler_is_connected");
    stub_funcs.ptr_g_signal_handler_find = try_find_sym(glib2, "g_signal_handler_find");
    stub_funcs.ptr_g_signal_handlers_block_matched = try_find_sym(glib2, "g_signal_handlers_block_matched");
    stub_funcs.ptr_g_signal_handlers_unblock_matched = try_find_sym(glib2, "g_signal_handlers_unblock_matched");
    stub_funcs.ptr_g_signal_handlers_disconnect_matched = try_find_sym(glib2, "g_signal_handlers_disconnect_matched");
    stub_funcs.ptr_g_clear_signal_handler = try_find_sym(glib2, "g_clear_signal_handler");
    stub_funcs.ptr_g_signal_override_class_closure = try_find_sym(glib2, "g_signal_override_class_closure");
    stub_funcs.ptr_g_signal_override_class_handler = try_find_sym(glib2, "g_signal_override_class_handler");
    stub_funcs.ptr_g_signal_chain_from_overridden = try_find_sym(glib2, "g_signal_chain_from_overridden");
    stub_funcs.ptr_g_signal_accumulator_true_handled = try_find_sym(glib2, "g_signal_accumulator_true_handled");
    stub_funcs.ptr_g_signal_accumulator_first_wins = try_find_sym(glib2, "g_signal_accumulator_first_wins");
    stub_funcs.ptr_g_signal_handlers_destroy = try_find_sym(glib2, "g_signal_handlers_destroy");
    stub_funcs.ptr__g_signals_destroy = try_find_sym(glib2, "_g_signals_destroy");
    stub_funcs.ptr_g_date_get_type = try_find_sym(glib2, "g_date_get_type");
    stub_funcs.ptr_g_strv_get_type = try_find_sym(glib2, "g_strv_get_type");
    stub_funcs.ptr_g_gstring_get_type = try_find_sym(glib2, "g_gstring_get_type");
    stub_funcs.ptr_g_hash_table_get_type = try_find_sym(glib2, "g_hash_table_get_type");
    stub_funcs.ptr_g_array_get_type = try_find_sym(glib2, "g_array_get_type");
    stub_funcs.ptr_g_byte_array_get_type = try_find_sym(glib2, "g_byte_array_get_type");
    stub_funcs.ptr_g_ptr_array_get_type = try_find_sym(glib2, "g_ptr_array_get_type");
    stub_funcs.ptr_g_bytes_get_type = try_find_sym(glib2, "g_bytes_get_type");
    stub_funcs.ptr_g_variant_type_get_gtype = try_find_sym(glib2, "g_variant_type_get_gtype");
    stub_funcs.ptr_g_regex_get_type = try_find_sym(glib2, "g_regex_get_type");
    stub_funcs.ptr_g_match_info_get_type = try_find_sym(glib2, "g_match_info_get_type");
    stub_funcs.ptr_g_error_get_type = try_find_sym(glib2, "g_error_get_type");
    stub_funcs.ptr_g_date_time_get_type = try_find_sym(glib2, "g_date_time_get_type");
    stub_funcs.ptr_g_time_zone_get_type = try_find_sym(glib2, "g_time_zone_get_type");
    stub_funcs.ptr_g_io_channel_get_type = try_find_sym(glib2, "g_io_channel_get_type");
    stub_funcs.ptr_g_io_condition_get_type = try_find_sym(glib2, "g_io_condition_get_type");
    stub_funcs.ptr_g_variant_builder_get_type = try_find_sym(glib2, "g_variant_builder_get_type");
    stub_funcs.ptr_g_variant_dict_get_type = try_find_sym(glib2, "g_variant_dict_get_type");
    stub_funcs.ptr_g_key_file_get_type = try_find_sym(glib2, "g_key_file_get_type");
    stub_funcs.ptr_g_main_loop_get_type = try_find_sym(glib2, "g_main_loop_get_type");
    stub_funcs.ptr_g_main_context_get_type = try_find_sym(glib2, "g_main_context_get_type");
    stub_funcs.ptr_g_source_get_type = try_find_sym(glib2, "g_source_get_type");
    stub_funcs.ptr_g_pollfd_get_type = try_find_sym(glib2, "g_pollfd_get_type");
    stub_funcs.ptr_g_thread_get_type = try_find_sym(glib2, "g_thread_get_type");
    stub_funcs.ptr_g_checksum_get_type = try_find_sym(glib2, "g_checksum_get_type");
    stub_funcs.ptr_g_markup_parse_context_get_type = try_find_sym(glib2, "g_markup_parse_context_get_type");
    stub_funcs.ptr_g_mapped_file_get_type = try_find_sym(glib2, "g_mapped_file_get_type");
    stub_funcs.ptr_g_option_group_get_type = try_find_sym(glib2, "g_option_group_get_type");
    stub_funcs.ptr_g_uri_get_type = try_find_sym(glib2, "g_uri_get_type");
    stub_funcs.ptr_g_tree_get_type = try_find_sym(glib2, "g_tree_get_type");
    stub_funcs.ptr_g_pattern_spec_get_type = try_find_sym(glib2, "g_pattern_spec_get_type");
    stub_funcs.ptr_g_bookmark_file_get_type = try_find_sym(glib2, "g_bookmark_file_get_type");
    stub_funcs.ptr_g_hmac_get_type = try_find_sym(glib2, "g_hmac_get_type");
    stub_funcs.ptr_g_dir_get_type = try_find_sym(glib2, "g_dir_get_type");
    stub_funcs.ptr_g_rand_get_type = try_find_sym(glib2, "g_rand_get_type");
    stub_funcs.ptr_g_strv_builder_get_type = try_find_sym(glib2, "g_strv_builder_get_type");
    stub_funcs.ptr_g_variant_get_gtype = try_find_sym(glib2, "g_variant_get_gtype");
    stub_funcs.ptr_g_boxed_copy = try_find_sym(glib2, "g_boxed_copy");
    stub_funcs.ptr_g_boxed_free = try_find_sym(glib2, "g_boxed_free");
    stub_funcs.ptr_g_value_set_boxed = try_find_sym(glib2, "g_value_set_boxed");
    stub_funcs.ptr_g_value_set_static_boxed = try_find_sym(glib2, "g_value_set_static_boxed");
    stub_funcs.ptr_g_value_take_boxed = try_find_sym(glib2, "g_value_take_boxed");
    stub_funcs.ptr_g_value_set_boxed_take_ownership = try_find_sym(glib2, "g_value_set_boxed_take_ownership");
    stub_funcs.ptr_g_value_get_boxed = try_find_sym(glib2, "g_value_get_boxed");
    stub_funcs.ptr_g_value_dup_boxed = try_find_sym(glib2, "g_value_dup_boxed");
    stub_funcs.ptr_g_boxed_type_register_static = try_find_sym(glib2, "g_boxed_type_register_static");
    stub_funcs.ptr_g_closure_get_type = try_find_sym(glib2, "g_closure_get_type");
    stub_funcs.ptr_g_value_get_type = try_find_sym(glib2, "g_value_get_type");
    stub_funcs.ptr_g_initially_unowned_get_type = try_find_sym(glib2, "g_initially_unowned_get_type");
    stub_funcs.ptr_g_object_class_install_property = try_find_sym(glib2, "g_object_class_install_property");
    stub_funcs.ptr_g_object_class_find_property = try_find_sym(glib2, "g_object_class_find_property");
    stub_funcs.ptr_g_object_class_list_properties = try_find_sym(glib2, "g_object_class_list_properties");
    stub_funcs.ptr_g_object_class_override_property = try_find_sym(glib2, "g_object_class_override_property");
    stub_funcs.ptr_g_object_class_install_properties = try_find_sym(glib2, "g_object_class_install_properties");
    stub_funcs.ptr_g_object_interface_install_property = try_find_sym(glib2, "g_object_interface_install_property");
    stub_funcs.ptr_g_object_interface_find_property = try_find_sym(glib2, "g_object_interface_find_property");
    stub_funcs.ptr_g_object_interface_list_properties = try_find_sym(glib2, "g_object_interface_list_properties");
    stub_funcs.ptr_g_object_get_type = try_find_sym(glib2, "g_object_get_type");
    stub_funcs.ptr_g_object_new = try_find_sym(glib2, "g_object_new");
    stub_funcs.ptr_g_object_new_with_properties = try_find_sym(glib2, "g_object_new_with_properties");
    stub_funcs.ptr_g_object_newv = try_find_sym(glib2, "g_object_newv");
    stub_funcs.ptr_g_object_new_valist = try_find_sym(glib2, "g_object_new_valist");
    stub_funcs.ptr_g_object_set = try_find_sym(glib2, "g_object_set");
    stub_funcs.ptr_g_object_get = try_find_sym(glib2, "g_object_get");
    stub_funcs.ptr_g_object_setv = try_find_sym(glib2, "g_object_setv");
    stub_funcs.ptr_g_object_set_valist = try_find_sym(glib2, "g_object_set_valist");
    stub_funcs.ptr_g_object_getv = try_find_sym(glib2, "g_object_getv");
    stub_funcs.ptr_g_object_get_valist = try_find_sym(glib2, "g_object_get_valist");
    stub_funcs.ptr_g_object_set_property = try_find_sym(glib2, "g_object_set_property");
    stub_funcs.ptr_g_object_get_property = try_find_sym(glib2, "g_object_get_property");
    stub_funcs.ptr_g_object_freeze_notify = try_find_sym(glib2, "g_object_freeze_notify");
    stub_funcs.ptr_g_object_notify = try_find_sym(glib2, "g_object_notify");
    stub_funcs.ptr_g_object_notify_by_pspec = try_find_sym(glib2, "g_object_notify_by_pspec");
    stub_funcs.ptr_g_object_thaw_notify = try_find_sym(glib2, "g_object_thaw_notify");
    stub_funcs.ptr_g_object_is_floating = try_find_sym(glib2, "g_object_is_floating");
    stub_funcs.ptr_g_object_ref_sink = try_find_sym(glib2, "g_object_ref_sink");
    stub_funcs.ptr_g_object_take_ref = try_find_sym(glib2, "g_object_take_ref");
    stub_funcs.ptr_g_object_ref = try_find_sym(glib2, "g_object_ref");
    stub_funcs.ptr_g_object_unref = try_find_sym(glib2, "g_object_unref");
    stub_funcs.ptr_g_object_weak_ref = try_find_sym(glib2, "g_object_weak_ref");
    stub_funcs.ptr_g_object_weak_unref = try_find_sym(glib2, "g_object_weak_unref");
    stub_funcs.ptr_g_object_add_weak_pointer = try_find_sym(glib2, "g_object_add_weak_pointer");
    stub_funcs.ptr_g_object_remove_weak_pointer = try_find_sym(glib2, "g_object_remove_weak_pointer");
    stub_funcs.ptr_g_object_add_toggle_ref = try_find_sym(glib2, "g_object_add_toggle_ref");
    stub_funcs.ptr_g_object_remove_toggle_ref = try_find_sym(glib2, "g_object_remove_toggle_ref");
    stub_funcs.ptr_g_object_get_qdata = try_find_sym(glib2, "g_object_get_qdata");
    stub_funcs.ptr_g_object_set_qdata = try_find_sym(glib2, "g_object_set_qdata");
    stub_funcs.ptr_g_object_set_qdata_full = try_find_sym(glib2, "g_object_set_qdata_full");
    stub_funcs.ptr_g_object_steal_qdata = try_find_sym(glib2, "g_object_steal_qdata");
    stub_funcs.ptr_g_object_dup_qdata = try_find_sym(glib2, "g_object_dup_qdata");
    stub_funcs.ptr_g_object_replace_qdata = try_find_sym(glib2, "g_object_replace_qdata");
    stub_funcs.ptr_g_object_get_data = try_find_sym(glib2, "g_object_get_data");
    stub_funcs.ptr_g_object_set_data = try_find_sym(glib2, "g_object_set_data");
    stub_funcs.ptr_g_object_set_data_full = try_find_sym(glib2, "g_object_set_data_full");
    stub_funcs.ptr_g_object_steal_data = try_find_sym(glib2, "g_object_steal_data");
    stub_funcs.ptr_g_object_dup_data = try_find_sym(glib2, "g_object_dup_data");
    stub_funcs.ptr_g_object_replace_data = try_find_sym(glib2, "g_object_replace_data");
    stub_funcs.ptr_g_object_watch_closure = try_find_sym(glib2, "g_object_watch_closure");
    stub_funcs.ptr_g_cclosure_new_object = try_find_sym(glib2, "g_cclosure_new_object");
    stub_funcs.ptr_g_cclosure_new_object_swap = try_find_sym(glib2, "g_cclosure_new_object_swap");
    stub_funcs.ptr_g_closure_new_object = try_find_sym(glib2, "g_closure_new_object");
    stub_funcs.ptr_g_value_set_object = try_find_sym(glib2, "g_value_set_object");
    stub_funcs.ptr_g_value_get_object = try_find_sym(glib2, "g_value_get_object");
    stub_funcs.ptr_g_value_dup_object = try_find_sym(glib2, "g_value_dup_object");
    stub_funcs.ptr_g_signal_connect_object = try_find_sym(glib2, "g_signal_connect_object");
    stub_funcs.ptr_g_object_force_floating = try_find_sym(glib2, "g_object_force_floating");
    stub_funcs.ptr_g_object_run_dispose = try_find_sym(glib2, "g_object_run_dispose");
    stub_funcs.ptr_g_value_take_object = try_find_sym(glib2, "g_value_take_object");
    stub_funcs.ptr_g_value_set_object_take_ownership = try_find_sym(glib2, "g_value_set_object_take_ownership");
    stub_funcs.ptr_g_object_compat_control = try_find_sym(glib2, "g_object_compat_control");
    stub_funcs.ptr_g_clear_object = try_find_sym(glib2, "g_clear_object");
    stub_funcs.ptr_g_weak_ref_init = try_find_sym(glib2, "g_weak_ref_init");
    stub_funcs.ptr_g_weak_ref_clear = try_find_sym(glib2, "g_weak_ref_clear");
    stub_funcs.ptr_g_weak_ref_get = try_find_sym(glib2, "g_weak_ref_get");
    stub_funcs.ptr_g_weak_ref_set = try_find_sym(glib2, "g_weak_ref_set");
    stub_funcs.ptr_g_binding_flags_get_type = try_find_sym(glib2, "g_binding_flags_get_type");
    stub_funcs.ptr_g_binding_get_type = try_find_sym(glib2, "g_binding_get_type");
    stub_funcs.ptr_g_binding_get_flags = try_find_sym(glib2, "g_binding_get_flags");
    stub_funcs.ptr_g_binding_get_source = try_find_sym(glib2, "g_binding_get_source");
    stub_funcs.ptr_g_binding_dup_source = try_find_sym(glib2, "g_binding_dup_source");
    stub_funcs.ptr_g_binding_get_target = try_find_sym(glib2, "g_binding_get_target");
    stub_funcs.ptr_g_binding_dup_target = try_find_sym(glib2, "g_binding_dup_target");
    stub_funcs.ptr_g_binding_get_source_property = try_find_sym(glib2, "g_binding_get_source_property");
    stub_funcs.ptr_g_binding_get_target_property = try_find_sym(glib2, "g_binding_get_target_property");
    stub_funcs.ptr_g_binding_unbind = try_find_sym(glib2, "g_binding_unbind");
    stub_funcs.ptr_g_object_bind_property = try_find_sym(glib2, "g_object_bind_property");
    stub_funcs.ptr_g_object_bind_property_full = try_find_sym(glib2, "g_object_bind_property_full");
    stub_funcs.ptr_g_object_bind_property_with_closures = try_find_sym(glib2, "g_object_bind_property_with_closures");
    stub_funcs.ptr_g_binding_group_get_type = try_find_sym(glib2, "g_binding_group_get_type");
    stub_funcs.ptr_g_binding_group_new = try_find_sym(glib2, "g_binding_group_new");
    stub_funcs.ptr_g_binding_group_dup_source = try_find_sym(glib2, "g_binding_group_dup_source");
    stub_funcs.ptr_g_binding_group_set_source = try_find_sym(glib2, "g_binding_group_set_source");
    stub_funcs.ptr_g_binding_group_bind = try_find_sym(glib2, "g_binding_group_bind");
    stub_funcs.ptr_g_binding_group_bind_full = try_find_sym(glib2, "g_binding_group_bind_full");
    stub_funcs.ptr_g_binding_group_bind_with_closures = try_find_sym(glib2, "g_binding_group_bind_with_closures");
    stub_funcs.ptr_g_enum_get_value = try_find_sym(glib2, "g_enum_get_value");
    stub_funcs.ptr_g_enum_get_value_by_name = try_find_sym(glib2, "g_enum_get_value_by_name");
    stub_funcs.ptr_g_enum_get_value_by_nick = try_find_sym(glib2, "g_enum_get_value_by_nick");
    stub_funcs.ptr_g_flags_get_first_value = try_find_sym(glib2, "g_flags_get_first_value");
    stub_funcs.ptr_g_flags_get_value_by_name = try_find_sym(glib2, "g_flags_get_value_by_name");
    stub_funcs.ptr_g_flags_get_value_by_nick = try_find_sym(glib2, "g_flags_get_value_by_nick");
    stub_funcs.ptr_g_enum_to_string = try_find_sym(glib2, "g_enum_to_string");
    stub_funcs.ptr_g_flags_to_string = try_find_sym(glib2, "g_flags_to_string");
    stub_funcs.ptr_g_value_set_enum = try_find_sym(glib2, "g_value_set_enum");
    stub_funcs.ptr_g_value_get_enum = try_find_sym(glib2, "g_value_get_enum");
    stub_funcs.ptr_g_value_set_flags = try_find_sym(glib2, "g_value_set_flags");
    stub_funcs.ptr_g_value_get_flags = try_find_sym(glib2, "g_value_get_flags");
    stub_funcs.ptr_g_enum_register_static = try_find_sym(glib2, "g_enum_register_static");
    stub_funcs.ptr_g_flags_register_static = try_find_sym(glib2, "g_flags_register_static");
    stub_funcs.ptr_g_enum_complete_type_info = try_find_sym(glib2, "g_enum_complete_type_info");
    stub_funcs.ptr_g_flags_complete_type_info = try_find_sym(glib2, "g_flags_complete_type_info");
    stub_funcs.ptr_g_unicode_type_get_type = try_find_sym(glib2, "g_unicode_type_get_type");
    stub_funcs.ptr_g_unicode_break_type_get_type = try_find_sym(glib2, "g_unicode_break_type_get_type");
    stub_funcs.ptr_g_unicode_script_get_type = try_find_sym(glib2, "g_unicode_script_get_type");
    stub_funcs.ptr_g_normalize_mode_get_type = try_find_sym(glib2, "g_normalize_mode_get_type");
    stub_funcs.ptr_g_param_spec_char = try_find_sym(glib2, "g_param_spec_char");
    stub_funcs.ptr_g_param_spec_uchar = try_find_sym(glib2, "g_param_spec_uchar");
    stub_funcs.ptr_g_param_spec_boolean = try_find_sym(glib2, "g_param_spec_boolean");
    stub_funcs.ptr_g_param_spec_int = try_find_sym(glib2, "g_param_spec_int");
    stub_funcs.ptr_g_param_spec_uint = try_find_sym(glib2, "g_param_spec_uint");
    stub_funcs.ptr_g_param_spec_long = try_find_sym(glib2, "g_param_spec_long");
    stub_funcs.ptr_g_param_spec_ulong = try_find_sym(glib2, "g_param_spec_ulong");
    stub_funcs.ptr_g_param_spec_int64 = try_find_sym(glib2, "g_param_spec_int64");
    stub_funcs.ptr_g_param_spec_uint64 = try_find_sym(glib2, "g_param_spec_uint64");
    stub_funcs.ptr_g_param_spec_unichar = try_find_sym(glib2, "g_param_spec_unichar");
    stub_funcs.ptr_g_param_spec_enum = try_find_sym(glib2, "g_param_spec_enum");
    stub_funcs.ptr_g_param_spec_flags = try_find_sym(glib2, "g_param_spec_flags");
    stub_funcs.ptr_g_param_spec_float = try_find_sym(glib2, "g_param_spec_float");
    stub_funcs.ptr_g_param_spec_double = try_find_sym(glib2, "g_param_spec_double");
    stub_funcs.ptr_g_param_spec_string = try_find_sym(glib2, "g_param_spec_string");
    stub_funcs.ptr_g_param_spec_param = try_find_sym(glib2, "g_param_spec_param");
    stub_funcs.ptr_g_param_spec_boxed = try_find_sym(glib2, "g_param_spec_boxed");
    stub_funcs.ptr_g_param_spec_pointer = try_find_sym(glib2, "g_param_spec_pointer");
    stub_funcs.ptr_g_param_spec_value_array = try_find_sym(glib2, "g_param_spec_value_array");
    stub_funcs.ptr_g_param_spec_object = try_find_sym(glib2, "g_param_spec_object");
    stub_funcs.ptr_g_param_spec_override = try_find_sym(glib2, "g_param_spec_override");
    stub_funcs.ptr_g_param_spec_gtype = try_find_sym(glib2, "g_param_spec_gtype");
    stub_funcs.ptr_g_param_spec_variant = try_find_sym(glib2, "g_param_spec_variant");
    stub_funcs.ptr_g_signal_group_get_type = try_find_sym(glib2, "g_signal_group_get_type");
    stub_funcs.ptr_g_signal_group_new = try_find_sym(glib2, "g_signal_group_new");
    stub_funcs.ptr_g_signal_group_set_target = try_find_sym(glib2, "g_signal_group_set_target");
    stub_funcs.ptr_g_signal_group_dup_target = try_find_sym(glib2, "g_signal_group_dup_target");
    stub_funcs.ptr_g_signal_group_block = try_find_sym(glib2, "g_signal_group_block");
    stub_funcs.ptr_g_signal_group_unblock = try_find_sym(glib2, "g_signal_group_unblock");
    stub_funcs.ptr_g_signal_group_connect_closure = try_find_sym(glib2, "g_signal_group_connect_closure");
    stub_funcs.ptr_g_signal_group_connect_object = try_find_sym(glib2, "g_signal_group_connect_object");
    stub_funcs.ptr_g_signal_group_connect_data = try_find_sym(glib2, "g_signal_group_connect_data");
    stub_funcs.ptr_g_signal_group_connect = try_find_sym(glib2, "g_signal_group_connect");
    stub_funcs.ptr_g_signal_group_connect_after = try_find_sym(glib2, "g_signal_group_connect_after");
    stub_funcs.ptr_g_signal_group_connect_swapped = try_find_sym(glib2, "g_signal_group_connect_swapped");
    stub_funcs.ptr_g_source_set_closure = try_find_sym(glib2, "g_source_set_closure");
    stub_funcs.ptr_g_source_set_dummy_callback = try_find_sym(glib2, "g_source_set_dummy_callback");
    stub_funcs.ptr_g_type_module_get_type = try_find_sym(glib2, "g_type_module_get_type");
    stub_funcs.ptr_g_type_module_use = try_find_sym(glib2, "g_type_module_use");
    stub_funcs.ptr_g_type_module_unuse = try_find_sym(glib2, "g_type_module_unuse");
    stub_funcs.ptr_g_type_module_set_name = try_find_sym(glib2, "g_type_module_set_name");
    stub_funcs.ptr_g_type_module_register_type = try_find_sym(glib2, "g_type_module_register_type");
    stub_funcs.ptr_g_type_module_add_interface = try_find_sym(glib2, "g_type_module_add_interface");
    stub_funcs.ptr_g_type_module_register_enum = try_find_sym(glib2, "g_type_module_register_enum");
    stub_funcs.ptr_g_type_module_register_flags = try_find_sym(glib2, "g_type_module_register_flags");
    stub_funcs.ptr_g_type_plugin_get_type = try_find_sym(glib2, "g_type_plugin_get_type");
    stub_funcs.ptr_g_type_plugin_use = try_find_sym(glib2, "g_type_plugin_use");
    stub_funcs.ptr_g_type_plugin_unuse = try_find_sym(glib2, "g_type_plugin_unuse");
    stub_funcs.ptr_g_type_plugin_complete_type_info = try_find_sym(glib2, "g_type_plugin_complete_type_info");
    stub_funcs.ptr_g_type_plugin_complete_interface_info = try_find_sym(glib2, "g_type_plugin_complete_interface_info");
    stub_funcs.ptr_g_value_array_get_type = try_find_sym(glib2, "g_value_array_get_type");
    stub_funcs.ptr_g_value_array_get_nth = try_find_sym(glib2, "g_value_array_get_nth");
    stub_funcs.ptr_g_value_array_new = try_find_sym(glib2, "g_value_array_new");
    stub_funcs.ptr_g_value_array_free = try_find_sym(glib2, "g_value_array_free");
    stub_funcs.ptr_g_value_array_copy = try_find_sym(glib2, "g_value_array_copy");
    stub_funcs.ptr_g_value_array_prepend = try_find_sym(glib2, "g_value_array_prepend");
    stub_funcs.ptr_g_value_array_append = try_find_sym(glib2, "g_value_array_append");
    stub_funcs.ptr_g_value_array_insert = try_find_sym(glib2, "g_value_array_insert");
    stub_funcs.ptr_g_value_array_remove = try_find_sym(glib2, "g_value_array_remove");
    stub_funcs.ptr_g_value_array_sort = try_find_sym(glib2, "g_value_array_sort");
    stub_funcs.ptr_g_value_array_sort_with_data = try_find_sym(glib2, "g_value_array_sort_with_data");
    stub_funcs.ptr_g_value_set_char = try_find_sym(glib2, "g_value_set_char");
    stub_funcs.ptr_g_value_get_char = try_find_sym(glib2, "g_value_get_char");
    stub_funcs.ptr_g_value_set_schar = try_find_sym(glib2, "g_value_set_schar");
    stub_funcs.ptr_g_value_get_schar = try_find_sym(glib2, "g_value_get_schar");
    stub_funcs.ptr_g_value_set_uchar = try_find_sym(glib2, "g_value_set_uchar");
    stub_funcs.ptr_g_value_get_uchar = try_find_sym(glib2, "g_value_get_uchar");
    stub_funcs.ptr_g_value_set_boolean = try_find_sym(glib2, "g_value_set_boolean");
    stub_funcs.ptr_g_value_get_boolean = try_find_sym(glib2, "g_value_get_boolean");
    stub_funcs.ptr_g_value_set_int = try_find_sym(glib2, "g_value_set_int");
    stub_funcs.ptr_g_value_get_int = try_find_sym(glib2, "g_value_get_int");
    stub_funcs.ptr_g_value_set_uint = try_find_sym(glib2, "g_value_set_uint");
    stub_funcs.ptr_g_value_get_uint = try_find_sym(glib2, "g_value_get_uint");
    stub_funcs.ptr_g_value_set_long = try_find_sym(glib2, "g_value_set_long");
    stub_funcs.ptr_g_value_get_long = try_find_sym(glib2, "g_value_get_long");
    stub_funcs.ptr_g_value_set_ulong = try_find_sym(glib2, "g_value_set_ulong");
    stub_funcs.ptr_g_value_get_ulong = try_find_sym(glib2, "g_value_get_ulong");
    stub_funcs.ptr_g_value_set_int64 = try_find_sym(glib2, "g_value_set_int64");
    stub_funcs.ptr_g_value_get_int64 = try_find_sym(glib2, "g_value_get_int64");
    stub_funcs.ptr_g_value_set_uint64 = try_find_sym(glib2, "g_value_set_uint64");
    stub_funcs.ptr_g_value_get_uint64 = try_find_sym(glib2, "g_value_get_uint64");
    stub_funcs.ptr_g_value_set_float = try_find_sym(glib2, "g_value_set_float");
    stub_funcs.ptr_g_value_get_float = try_find_sym(glib2, "g_value_get_float");
    stub_funcs.ptr_g_value_set_double = try_find_sym(glib2, "g_value_set_double");
    stub_funcs.ptr_g_value_get_double = try_find_sym(glib2, "g_value_get_double");
    stub_funcs.ptr_g_value_set_string = try_find_sym(glib2, "g_value_set_string");
    stub_funcs.ptr_g_value_set_static_string = try_find_sym(glib2, "g_value_set_static_string");
    stub_funcs.ptr_g_value_set_interned_string = try_find_sym(glib2, "g_value_set_interned_string");
    stub_funcs.ptr_g_value_get_string = try_find_sym(glib2, "g_value_get_string");
    stub_funcs.ptr_g_value_dup_string = try_find_sym(glib2, "g_value_dup_string");
    stub_funcs.ptr_g_value_steal_string = try_find_sym(glib2, "g_value_steal_string");
    stub_funcs.ptr_g_value_set_pointer = try_find_sym(glib2, "g_value_set_pointer");
    stub_funcs.ptr_g_value_get_pointer = try_find_sym(glib2, "g_value_get_pointer");
    stub_funcs.ptr_g_gtype_get_type = try_find_sym(glib2, "g_gtype_get_type");
    stub_funcs.ptr_g_value_set_gtype = try_find_sym(glib2, "g_value_set_gtype");
    stub_funcs.ptr_g_value_get_gtype = try_find_sym(glib2, "g_value_get_gtype");
    stub_funcs.ptr_g_value_set_variant = try_find_sym(glib2, "g_value_set_variant");
    stub_funcs.ptr_g_value_take_variant = try_find_sym(glib2, "g_value_take_variant");
    stub_funcs.ptr_g_value_get_variant = try_find_sym(glib2, "g_value_get_variant");
    stub_funcs.ptr_g_value_dup_variant = try_find_sym(glib2, "g_value_dup_variant");
    stub_funcs.ptr_g_pointer_type_register_static = try_find_sym(glib2, "g_pointer_type_register_static");
    stub_funcs.ptr_g_strdup_value_contents = try_find_sym(glib2, "g_strdup_value_contents");
    stub_funcs.ptr_g_value_take_string = try_find_sym(glib2, "g_value_take_string");
    stub_funcs.ptr_g_value_set_string_take_ownership = try_find_sym(glib2, "g_value_set_string_take_ownership");
}

void (g_type_init)(void) { stub_funcs.ptr_g_type_init(); }
void (g_type_init_with_debug_flags)(GTypeDebugFlags debug_flags) { stub_funcs.ptr_g_type_init_with_debug_flags(debug_flags); }
const gchar * (g_type_name)(GType type) { return stub_funcs.ptr_g_type_name(type); }
GQuark (g_type_qname)(GType type) { return stub_funcs.ptr_g_type_qname(type); }
GType (g_type_from_name)(const gchar * name) { return stub_funcs.ptr_g_type_from_name(name); }
GType (g_type_parent)(GType type) { return stub_funcs.ptr_g_type_parent(type); }
guint (g_type_depth)(GType type) { return stub_funcs.ptr_g_type_depth(type); }
GType (g_type_next_base)(GType leaf_type, GType root_type) { return stub_funcs.ptr_g_type_next_base(leaf_type, root_type); }
gboolean (g_type_is_a)(GType type, GType is_a_type) { return stub_funcs.ptr_g_type_is_a(type, is_a_type); }
gpointer (g_type_class_ref)(GType type) { return stub_funcs.ptr_g_type_class_ref(type); }
gpointer (g_type_class_peek)(GType type) { return stub_funcs.ptr_g_type_class_peek(type); }
gpointer (g_type_class_peek_static)(GType type) { return stub_funcs.ptr_g_type_class_peek_static(type); }
void (g_type_class_unref)(gpointer g_class) { stub_funcs.ptr_g_type_class_unref(g_class); }
gpointer (g_type_class_peek_parent)(gpointer g_class) { return stub_funcs.ptr_g_type_class_peek_parent(g_class); }
gpointer (g_type_interface_peek)(gpointer instance_class, GType iface_type) { return stub_funcs.ptr_g_type_interface_peek(instance_class, iface_type); }
gpointer (g_type_interface_peek_parent)(gpointer g_iface) { return stub_funcs.ptr_g_type_interface_peek_parent(g_iface); }
gpointer (g_type_default_interface_ref)(GType g_type) { return stub_funcs.ptr_g_type_default_interface_ref(g_type); }
gpointer (g_type_default_interface_peek)(GType g_type) { return stub_funcs.ptr_g_type_default_interface_peek(g_type); }
void (g_type_default_interface_unref)(gpointer g_iface) { stub_funcs.ptr_g_type_default_interface_unref(g_iface); }
GType * (g_type_children)(GType type, guint * n_children) { return stub_funcs.ptr_g_type_children(type, n_children); }
GType * (g_type_interfaces)(GType type, guint * n_interfaces) { return stub_funcs.ptr_g_type_interfaces(type, n_interfaces); }
void (g_type_set_qdata)(GType type, GQuark quark, gpointer data) { stub_funcs.ptr_g_type_set_qdata(type, quark, data); }
gpointer (g_type_get_qdata)(GType type, GQuark quark) { return stub_funcs.ptr_g_type_get_qdata(type, quark); }
void (g_type_query)(GType type, GTypeQuery * query) { stub_funcs.ptr_g_type_query(type, query); }
int (g_type_get_instance_count)(GType type) { return stub_funcs.ptr_g_type_get_instance_count(type); }
GType (g_type_register_static)(GType parent_type, const gchar * type_name, const GTypeInfo * info, GTypeFlags flags) { return stub_funcs.ptr_g_type_register_static(parent_type, type_name, info, flags); }
GType (g_type_register_static_simple)(GType parent_type, const gchar * type_name, guint class_size, GClassInitFunc class_init, guint instance_size, GInstanceInitFunc instance_init, GTypeFlags flags) { return stub_funcs.ptr_g_type_register_static_simple(parent_type, type_name, class_size, class_init, instance_size, instance_init, flags); }
GType (g_type_register_dynamic)(GType parent_type, const gchar * type_name, GTypePlugin * plugin, GTypeFlags flags) { return stub_funcs.ptr_g_type_register_dynamic(parent_type, type_name, plugin, flags); }
GType (g_type_register_fundamental)(GType type_id, const gchar * type_name, const GTypeInfo * info, const GTypeFundamentalInfo * finfo, GTypeFlags flags) { return stub_funcs.ptr_g_type_register_fundamental(type_id, type_name, info, finfo, flags); }
void (g_type_add_interface_static)(GType instance_type, GType interface_type, const GInterfaceInfo * info) { stub_funcs.ptr_g_type_add_interface_static(instance_type, interface_type, info); }
void (g_type_add_interface_dynamic)(GType instance_type, GType interface_type, GTypePlugin * plugin) { stub_funcs.ptr_g_type_add_interface_dynamic(instance_type, interface_type, plugin); }
void (g_type_interface_add_prerequisite)(GType interface_type, GType prerequisite_type) { stub_funcs.ptr_g_type_interface_add_prerequisite(interface_type, prerequisite_type); }
GType * (g_type_interface_prerequisites)(GType interface_type, guint * n_prerequisites) { return stub_funcs.ptr_g_type_interface_prerequisites(interface_type, n_prerequisites); }
GType (g_type_interface_instantiatable_prerequisite)(GType interface_type) { return stub_funcs.ptr_g_type_interface_instantiatable_prerequisite(interface_type); }
void (g_type_class_add_private)(gpointer g_class, gsize private_size) { stub_funcs.ptr_g_type_class_add_private(g_class, private_size); }
gint (g_type_add_instance_private)(GType class_type, gsize private_size) { return stub_funcs.ptr_g_type_add_instance_private(class_type, private_size); }
gpointer (g_type_instance_get_private)(GTypeInstance * instance, GType private_type) { return stub_funcs.ptr_g_type_instance_get_private(instance, private_type); }
void (g_type_class_adjust_private_offset)(gpointer g_class, gint * private_size_or_offset) { stub_funcs.ptr_g_type_class_adjust_private_offset(g_class, private_size_or_offset); }
void (g_type_add_class_private)(GType class_type, gsize private_size) { stub_funcs.ptr_g_type_add_class_private(class_type, private_size); }
gpointer (g_type_class_get_private)(GTypeClass * klass, GType private_type) { return stub_funcs.ptr_g_type_class_get_private(klass, private_type); }
gint (g_type_class_get_instance_private_offset)(gpointer g_class) { return stub_funcs.ptr_g_type_class_get_instance_private_offset(g_class); }
void (g_type_ensure)(GType type) { stub_funcs.ptr_g_type_ensure(type); }
guint (g_type_get_type_registration_serial)(void) { return stub_funcs.ptr_g_type_get_type_registration_serial(); }
GTypePlugin * (g_type_get_plugin)(GType type) { return stub_funcs.ptr_g_type_get_plugin(type); }
GTypePlugin * (g_type_interface_get_plugin)(GType instance_type, GType interface_type) { return stub_funcs.ptr_g_type_interface_get_plugin(instance_type, interface_type); }
GType (g_type_fundamental_next)(void) { return stub_funcs.ptr_g_type_fundamental_next(); }
GType (g_type_fundamental)(GType type_id) { return stub_funcs.ptr_g_type_fundamental(type_id); }
GTypeInstance * (g_type_create_instance)(GType type) { return stub_funcs.ptr_g_type_create_instance(type); }
void (g_type_free_instance)(GTypeInstance * instance) { stub_funcs.ptr_g_type_free_instance(instance); }
void (g_type_add_class_cache_func)(gpointer cache_data, GTypeClassCacheFunc cache_func) { stub_funcs.ptr_g_type_add_class_cache_func(cache_data, cache_func); }
void (g_type_remove_class_cache_func)(gpointer cache_data, GTypeClassCacheFunc cache_func) { stub_funcs.ptr_g_type_remove_class_cache_func(cache_data, cache_func); }
void (g_type_class_unref_uncached)(gpointer g_class) { stub_funcs.ptr_g_type_class_unref_uncached(g_class); }
void (g_type_add_interface_check)(gpointer check_data, GTypeInterfaceCheckFunc check_func) { stub_funcs.ptr_g_type_add_interface_check(check_data, check_func); }
void (g_type_remove_interface_check)(gpointer check_data, GTypeInterfaceCheckFunc check_func) { stub_funcs.ptr_g_type_remove_interface_check(check_data, check_func); }
GTypeValueTable * (g_type_value_table_peek)(GType type) { return stub_funcs.ptr_g_type_value_table_peek(type); }
gboolean (g_type_check_instance)(GTypeInstance * instance) { return stub_funcs.ptr_g_type_check_instance(instance); }
GTypeInstance * (g_type_check_instance_cast)(GTypeInstance * instance, GType iface_type) { return stub_funcs.ptr_g_type_check_instance_cast(instance, iface_type); }
gboolean (g_type_check_instance_is_a)(GTypeInstance * instance, GType iface_type) { return stub_funcs.ptr_g_type_check_instance_is_a(instance, iface_type); }
gboolean (g_type_check_instance_is_fundamentally_a)(GTypeInstance * instance, GType fundamental_type) { return stub_funcs.ptr_g_type_check_instance_is_fundamentally_a(instance, fundamental_type); }
GTypeClass * (g_type_check_class_cast)(GTypeClass * g_class, GType is_a_type) { return stub_funcs.ptr_g_type_check_class_cast(g_class, is_a_type); }
gboolean (g_type_check_class_is_a)(GTypeClass * g_class, GType is_a_type) { return stub_funcs.ptr_g_type_check_class_is_a(g_class, is_a_type); }
gboolean (g_type_check_is_value_type)(GType type) { return stub_funcs.ptr_g_type_check_is_value_type(type); }
gboolean (g_type_check_value)(const GValue * value) { return stub_funcs.ptr_g_type_check_value(value); }
gboolean (g_type_check_value_holds)(const GValue * value, GType type) { return stub_funcs.ptr_g_type_check_value_holds(value, type); }
gboolean (g_type_test_flags)(GType type, guint flags) { return stub_funcs.ptr_g_type_test_flags(type, flags); }
const gchar * (g_type_name_from_instance)(GTypeInstance * instance) { return stub_funcs.ptr_g_type_name_from_instance(instance); }
const gchar * (g_type_name_from_class)(GTypeClass * g_class) { return stub_funcs.ptr_g_type_name_from_class(g_class); }
GValue * (g_value_init)(GValue * value, GType g_type) { return stub_funcs.ptr_g_value_init(value, g_type); }
void (g_value_copy)(const GValue * src_value, GValue * dest_value) { stub_funcs.ptr_g_value_copy(src_value, dest_value); }
GValue * (g_value_reset)(GValue * value) { return stub_funcs.ptr_g_value_reset(value); }
void (g_value_unset)(GValue * value) { stub_funcs.ptr_g_value_unset(value); }
void (g_value_set_instance)(GValue * value, gpointer instance) { stub_funcs.ptr_g_value_set_instance(value, instance); }
void (g_value_init_from_instance)(GValue * value, gpointer instance) { stub_funcs.ptr_g_value_init_from_instance(value, instance); }
gboolean (g_value_fits_pointer)(const GValue * value) { return stub_funcs.ptr_g_value_fits_pointer(value); }
gpointer (g_value_peek_pointer)(const GValue * value) { return stub_funcs.ptr_g_value_peek_pointer(value); }
gboolean (g_value_type_compatible)(GType src_type, GType dest_type) { return stub_funcs.ptr_g_value_type_compatible(src_type, dest_type); }
gboolean (g_value_type_transformable)(GType src_type, GType dest_type) { return stub_funcs.ptr_g_value_type_transformable(src_type, dest_type); }
gboolean (g_value_transform)(const GValue * src_value, GValue * dest_value) { return stub_funcs.ptr_g_value_transform(src_value, dest_value); }
void (g_value_register_transform_func)(GType src_type, GType dest_type, GValueTransform transform_func) { stub_funcs.ptr_g_value_register_transform_func(src_type, dest_type, transform_func); }
GParamSpec * (g_param_spec_ref)(GParamSpec * pspec) { return stub_funcs.ptr_g_param_spec_ref(pspec); }
void (g_param_spec_unref)(GParamSpec * pspec) { stub_funcs.ptr_g_param_spec_unref(pspec); }
void (g_param_spec_sink)(GParamSpec * pspec) { stub_funcs.ptr_g_param_spec_sink(pspec); }
GParamSpec * (g_param_spec_ref_sink)(GParamSpec * pspec) { return stub_funcs.ptr_g_param_spec_ref_sink(pspec); }
gpointer (g_param_spec_get_qdata)(GParamSpec * pspec, GQuark quark) { return stub_funcs.ptr_g_param_spec_get_qdata(pspec, quark); }
void (g_param_spec_set_qdata)(GParamSpec * pspec, GQuark quark, gpointer data) { stub_funcs.ptr_g_param_spec_set_qdata(pspec, quark, data); }
void (g_param_spec_set_qdata_full)(GParamSpec * pspec, GQuark quark, gpointer data, GDestroyNotify destroy) { stub_funcs.ptr_g_param_spec_set_qdata_full(pspec, quark, data, destroy); }
gpointer (g_param_spec_steal_qdata)(GParamSpec * pspec, GQuark quark) { return stub_funcs.ptr_g_param_spec_steal_qdata(pspec, quark); }
GParamSpec * (g_param_spec_get_redirect_target)(GParamSpec * pspec) { return stub_funcs.ptr_g_param_spec_get_redirect_target(pspec); }
void (g_param_value_set_default)(GParamSpec * pspec, GValue * value) { stub_funcs.ptr_g_param_value_set_default(pspec, value); }
gboolean (g_param_value_defaults)(GParamSpec * pspec, const GValue * value) { return stub_funcs.ptr_g_param_value_defaults(pspec, value); }
gboolean (g_param_value_validate)(GParamSpec * pspec, GValue * value) { return stub_funcs.ptr_g_param_value_validate(pspec, value); }
gboolean (g_param_value_is_valid)(GParamSpec * pspec, const GValue * value) { return stub_funcs.ptr_g_param_value_is_valid(pspec, value); }
gboolean (g_param_value_convert)(GParamSpec * pspec, const GValue * src_value, GValue * dest_value, gboolean strict_validation) { return stub_funcs.ptr_g_param_value_convert(pspec, src_value, dest_value, strict_validation); }
gint (g_param_values_cmp)(GParamSpec * pspec, const GValue * value1, const GValue * value2) { return stub_funcs.ptr_g_param_values_cmp(pspec, value1, value2); }
const gchar * (g_param_spec_get_name)(GParamSpec * pspec) { return stub_funcs.ptr_g_param_spec_get_name(pspec); }
const gchar * (g_param_spec_get_nick)(GParamSpec * pspec) { return stub_funcs.ptr_g_param_spec_get_nick(pspec); }
const gchar * (g_param_spec_get_blurb)(GParamSpec * pspec) { return stub_funcs.ptr_g_param_spec_get_blurb(pspec); }
void (g_value_set_param)(GValue * value, GParamSpec * param) { stub_funcs.ptr_g_value_set_param(value, param); }
GParamSpec * (g_value_get_param)(const GValue * value) { return stub_funcs.ptr_g_value_get_param(value); }
GParamSpec * (g_value_dup_param)(const GValue * value) { return stub_funcs.ptr_g_value_dup_param(value); }
void (g_value_take_param)(GValue * value, GParamSpec * param) { stub_funcs.ptr_g_value_take_param(value, param); }
void (g_value_set_param_take_ownership)(GValue * value, GParamSpec * param) { stub_funcs.ptr_g_value_set_param_take_ownership(value, param); }
const GValue * (g_param_spec_get_default_value)(GParamSpec * pspec) { return stub_funcs.ptr_g_param_spec_get_default_value(pspec); }
GQuark (g_param_spec_get_name_quark)(GParamSpec * pspec) { return stub_funcs.ptr_g_param_spec_get_name_quark(pspec); }
GType (g_param_type_register_static)(const gchar * name, const GParamSpecTypeInfo * pspec_info) { return stub_funcs.ptr_g_param_type_register_static(name, pspec_info); }
gboolean (g_param_spec_is_valid_name)(const gchar * name) { return stub_funcs.ptr_g_param_spec_is_valid_name(name); }
GType (_g_param_type_register_static_constant)(const gchar * name, const GParamSpecTypeInfo * pspec_info, GType opt_type) { return stub_funcs.ptr__g_param_type_register_static_constant(name, pspec_info, opt_type); }
gpointer (g_param_spec_internal)(GType param_type, const gchar * name, const gchar * nick, const gchar * blurb, GParamFlags flags) { return stub_funcs.ptr_g_param_spec_internal(param_type, name, nick, blurb, flags); }
GParamSpecPool * (g_param_spec_pool_new)(gboolean type_prefixing) { return stub_funcs.ptr_g_param_spec_pool_new(type_prefixing); }
void (g_param_spec_pool_insert)(GParamSpecPool * pool, GParamSpec * pspec, GType owner_type) { stub_funcs.ptr_g_param_spec_pool_insert(pool, pspec, owner_type); }
void (g_param_spec_pool_remove)(GParamSpecPool * pool, GParamSpec * pspec) { stub_funcs.ptr_g_param_spec_pool_remove(pool, pspec); }
GParamSpec * (g_param_spec_pool_lookup)(GParamSpecPool * pool, const gchar * param_name, GType owner_type, gboolean walk_ancestors) { return stub_funcs.ptr_g_param_spec_pool_lookup(pool, param_name, owner_type, walk_ancestors); }
GList * (g_param_spec_pool_list_owned)(GParamSpecPool * pool, GType owner_type) { return stub_funcs.ptr_g_param_spec_pool_list_owned(pool, owner_type); }
GParamSpec * * (g_param_spec_pool_list)(GParamSpecPool * pool, GType owner_type, guint * n_pspecs_p) { return stub_funcs.ptr_g_param_spec_pool_list(pool, owner_type, n_pspecs_p); }
void (g_param_spec_pool_free)(GParamSpecPool * pool) { stub_funcs.ptr_g_param_spec_pool_free(pool); }
GClosure * (g_cclosure_new)(GCallback callback_func, gpointer user_data, GClosureNotify destroy_data) { return stub_funcs.ptr_g_cclosure_new(callback_func, user_data, destroy_data); }
GClosure * (g_cclosure_new_swap)(GCallback callback_func, gpointer user_data, GClosureNotify destroy_data) { return stub_funcs.ptr_g_cclosure_new_swap(callback_func, user_data, destroy_data); }
GClosure * (g_signal_type_cclosure_new)(GType itype, guint struct_offset) { return stub_funcs.ptr_g_signal_type_cclosure_new(itype, struct_offset); }
GClosure * (g_closure_ref)(GClosure * closure) { return stub_funcs.ptr_g_closure_ref(closure); }
void (g_closure_sink)(GClosure * closure) { stub_funcs.ptr_g_closure_sink(closure); }
void (g_closure_unref)(GClosure * closure) { stub_funcs.ptr_g_closure_unref(closure); }
GClosure * (g_closure_new_simple)(guint sizeof_closure, gpointer data) { return stub_funcs.ptr_g_closure_new_simple(sizeof_closure, data); }
void (g_closure_add_finalize_notifier)(GClosure * closure, gpointer notify_data, GClosureNotify notify_func) { stub_funcs.ptr_g_closure_add_finalize_notifier(closure, notify_data, notify_func); }
void (g_closure_remove_finalize_notifier)(GClosure * closure, gpointer notify_data, GClosureNotify notify_func) { stub_funcs.ptr_g_closure_remove_finalize_notifier(closure, notify_data, notify_func); }
void (g_closure_add_invalidate_notifier)(GClosure * closure, gpointer notify_data, GClosureNotify notify_func) { stub_funcs.ptr_g_closure_add_invalidate_notifier(closure, notify_data, notify_func); }
void (g_closure_remove_invalidate_notifier)(GClosure * closure, gpointer notify_data, GClosureNotify notify_func) { stub_funcs.ptr_g_closure_remove_invalidate_notifier(closure, notify_data, notify_func); }
void (g_closure_add_marshal_guards)(GClosure * closure, gpointer pre_marshal_data, GClosureNotify pre_marshal_notify, gpointer post_marshal_data, GClosureNotify post_marshal_notify) { stub_funcs.ptr_g_closure_add_marshal_guards(closure, pre_marshal_data, pre_marshal_notify, post_marshal_data, post_marshal_notify); }
void (g_closure_set_marshal)(GClosure * closure, GClosureMarshal marshal) { stub_funcs.ptr_g_closure_set_marshal(closure, marshal); }
void (g_closure_set_meta_marshal)(GClosure * closure, gpointer marshal_data, GClosureMarshal meta_marshal) { stub_funcs.ptr_g_closure_set_meta_marshal(closure, marshal_data, meta_marshal); }
void (g_closure_invalidate)(GClosure * closure) { stub_funcs.ptr_g_closure_invalidate(closure); }
void (g_closure_invoke)(GClosure * closure, GValue * return_value, guint n_param_values, const GValue * param_values, gpointer invocation_hint) { stub_funcs.ptr_g_closure_invoke(closure, return_value, n_param_values, param_values, invocation_hint); }
void (g_cclosure_marshal_generic)(GClosure * closure, GValue * return_gvalue, guint n_param_values, const GValue * param_values, gpointer invocation_hint, gpointer marshal_data) { stub_funcs.ptr_g_cclosure_marshal_generic(closure, return_gvalue, n_param_values, param_values, invocation_hint, marshal_data); }
void (g_cclosure_marshal_generic_va)(GClosure * closure, GValue * return_value, gpointer instance, va_list args_list, gpointer marshal_data, int n_params, GType * param_types) { stub_funcs.ptr_g_cclosure_marshal_generic_va(closure, return_value, instance, args_list, marshal_data, n_params, param_types); }
void (g_cclosure_marshal_VOID__VOID)(GClosure * closure, GValue * return_value, guint n_param_values, const GValue * param_values, gpointer invocation_hint, gpointer marshal_data) { stub_funcs.ptr_g_cclosure_marshal_VOID__VOID(closure, return_value, n_param_values, param_values, invocation_hint, marshal_data); }
void (g_cclosure_marshal_VOID__VOIDv)(GClosure * closure, GValue * return_value, gpointer instance, va_list args, gpointer marshal_data, int n_params, GType * param_types) { stub_funcs.ptr_g_cclosure_marshal_VOID__VOIDv(closure, return_value, instance, args, marshal_data, n_params, param_types); }
void (g_cclosure_marshal_VOID__BOOLEAN)(GClosure * closure, GValue * return_value, guint n_param_values, const GValue * param_values, gpointer invocation_hint, gpointer marshal_data) { stub_funcs.ptr_g_cclosure_marshal_VOID__BOOLEAN(closure, return_value, n_param_values, param_values, invocation_hint, marshal_data); }
void (g_cclosure_marshal_VOID__BOOLEANv)(GClosure * closure, GValue * return_value, gpointer instance, va_list args, gpointer marshal_data, int n_params, GType * param_types) { stub_funcs.ptr_g_cclosure_marshal_VOID__BOOLEANv(closure, return_value, instance, args, marshal_data, n_params, param_types); }
void (g_cclosure_marshal_VOID__CHAR)(GClosure * closure, GValue * return_value, guint n_param_values, const GValue * param_values, gpointer invocation_hint, gpointer marshal_data) { stub_funcs.ptr_g_cclosure_marshal_VOID__CHAR(closure, return_value, n_param_values, param_values, invocation_hint, marshal_data); }
void (g_cclosure_marshal_VOID__CHARv)(GClosure * closure, GValue * return_value, gpointer instance, va_list args, gpointer marshal_data, int n_params, GType * param_types) { stub_funcs.ptr_g_cclosure_marshal_VOID__CHARv(closure, return_value, instance, args, marshal_data, n_params, param_types); }
void (g_cclosure_marshal_VOID__UCHAR)(GClosure * closure, GValue * return_value, guint n_param_values, const GValue * param_values, gpointer invocation_hint, gpointer marshal_data) { stub_funcs.ptr_g_cclosure_marshal_VOID__UCHAR(closure, return_value, n_param_values, param_values, invocation_hint, marshal_data); }
void (g_cclosure_marshal_VOID__UCHARv)(GClosure * closure, GValue * return_value, gpointer instance, va_list args, gpointer marshal_data, int n_params, GType * param_types) { stub_funcs.ptr_g_cclosure_marshal_VOID__UCHARv(closure, return_value, instance, args, marshal_data, n_params, param_types); }
void (g_cclosure_marshal_VOID__INT)(GClosure * closure, GValue * return_value, guint n_param_values, const GValue * param_values, gpointer invocation_hint, gpointer marshal_data) { stub_funcs.ptr_g_cclosure_marshal_VOID__INT(closure, return_value, n_param_values, param_values, invocation_hint, marshal_data); }
void (g_cclosure_marshal_VOID__INTv)(GClosure * closure, GValue * return_value, gpointer instance, va_list args, gpointer marshal_data, int n_params, GType * param_types) { stub_funcs.ptr_g_cclosure_marshal_VOID__INTv(closure, return_value, instance, args, marshal_data, n_params, param_types); }
void (g_cclosure_marshal_VOID__UINT)(GClosure * closure, GValue * return_value, guint n_param_values, const GValue * param_values, gpointer invocation_hint, gpointer marshal_data) { stub_funcs.ptr_g_cclosure_marshal_VOID__UINT(closure, return_value, n_param_values, param_values, invocation_hint, marshal_data); }
void (g_cclosure_marshal_VOID__UINTv)(GClosure * closure, GValue * return_value, gpointer instance, va_list args, gpointer marshal_data, int n_params, GType * param_types) { stub_funcs.ptr_g_cclosure_marshal_VOID__UINTv(closure, return_value, instance, args, marshal_data, n_params, param_types); }
void (g_cclosure_marshal_VOID__LONG)(GClosure * closure, GValue * return_value, guint n_param_values, const GValue * param_values, gpointer invocation_hint, gpointer marshal_data) { stub_funcs.ptr_g_cclosure_marshal_VOID__LONG(closure, return_value, n_param_values, param_values, invocation_hint, marshal_data); }
void (g_cclosure_marshal_VOID__LONGv)(GClosure * closure, GValue * return_value, gpointer instance, va_list args, gpointer marshal_data, int n_params, GType * param_types) { stub_funcs.ptr_g_cclosure_marshal_VOID__LONGv(closure, return_value, instance, args, marshal_data, n_params, param_types); }
void (g_cclosure_marshal_VOID__ULONG)(GClosure * closure, GValue * return_value, guint n_param_values, const GValue * param_values, gpointer invocation_hint, gpointer marshal_data) { stub_funcs.ptr_g_cclosure_marshal_VOID__ULONG(closure, return_value, n_param_values, param_values, invocation_hint, marshal_data); }
void (g_cclosure_marshal_VOID__ULONGv)(GClosure * closure, GValue * return_value, gpointer instance, va_list args, gpointer marshal_data, int n_params, GType * param_types) { stub_funcs.ptr_g_cclosure_marshal_VOID__ULONGv(closure, return_value, instance, args, marshal_data, n_params, param_types); }
void (g_cclosure_marshal_VOID__ENUM)(GClosure * closure, GValue * return_value, guint n_param_values, const GValue * param_values, gpointer invocation_hint, gpointer marshal_data) { stub_funcs.ptr_g_cclosure_marshal_VOID__ENUM(closure, return_value, n_param_values, param_values, invocation_hint, marshal_data); }
void (g_cclosure_marshal_VOID__ENUMv)(GClosure * closure, GValue * return_value, gpointer instance, va_list args, gpointer marshal_data, int n_params, GType * param_types) { stub_funcs.ptr_g_cclosure_marshal_VOID__ENUMv(closure, return_value, instance, args, marshal_data, n_params, param_types); }
void (g_cclosure_marshal_VOID__FLAGS)(GClosure * closure, GValue * return_value, guint n_param_values, const GValue * param_values, gpointer invocation_hint, gpointer marshal_data) { stub_funcs.ptr_g_cclosure_marshal_VOID__FLAGS(closure, return_value, n_param_values, param_values, invocation_hint, marshal_data); }
void (g_cclosure_marshal_VOID__FLAGSv)(GClosure * closure, GValue * return_value, gpointer instance, va_list args, gpointer marshal_data, int n_params, GType * param_types) { stub_funcs.ptr_g_cclosure_marshal_VOID__FLAGSv(closure, return_value, instance, args, marshal_data, n_params, param_types); }
void (g_cclosure_marshal_VOID__FLOAT)(GClosure * closure, GValue * return_value, guint n_param_values, const GValue * param_values, gpointer invocation_hint, gpointer marshal_data) { stub_funcs.ptr_g_cclosure_marshal_VOID__FLOAT(closure, return_value, n_param_values, param_values, invocation_hint, marshal_data); }
void (g_cclosure_marshal_VOID__FLOATv)(GClosure * closure, GValue * return_value, gpointer instance, va_list args, gpointer marshal_data, int n_params, GType * param_types) { stub_funcs.ptr_g_cclosure_marshal_VOID__FLOATv(closure, return_value, instance, args, marshal_data, n_params, param_types); }
void (g_cclosure_marshal_VOID__DOUBLE)(GClosure * closure, GValue * return_value, guint n_param_values, const GValue * param_values, gpointer invocation_hint, gpointer marshal_data) { stub_funcs.ptr_g_cclosure_marshal_VOID__DOUBLE(closure, return_value, n_param_values, param_values, invocation_hint, marshal_data); }
void (g_cclosure_marshal_VOID__DOUBLEv)(GClosure * closure, GValue * return_value, gpointer instance, va_list args, gpointer marshal_data, int n_params, GType * param_types) { stub_funcs.ptr_g_cclosure_marshal_VOID__DOUBLEv(closure, return_value, instance, args, marshal_data, n_params, param_types); }
void (g_cclosure_marshal_VOID__STRING)(GClosure * closure, GValue * return_value, guint n_param_values, const GValue * param_values, gpointer invocation_hint, gpointer marshal_data) { stub_funcs.ptr_g_cclosure_marshal_VOID__STRING(closure, return_value, n_param_values, param_values, invocation_hint, marshal_data); }
void (g_cclosure_marshal_VOID__STRINGv)(GClosure * closure, GValue * return_value, gpointer instance, va_list args, gpointer marshal_data, int n_params, GType * param_types) { stub_funcs.ptr_g_cclosure_marshal_VOID__STRINGv(closure, return_value, instance, args, marshal_data, n_params, param_types); }
void (g_cclosure_marshal_VOID__PARAM)(GClosure * closure, GValue * return_value, guint n_param_values, const GValue * param_values, gpointer invocation_hint, gpointer marshal_data) { stub_funcs.ptr_g_cclosure_marshal_VOID__PARAM(closure, return_value, n_param_values, param_values, invocation_hint, marshal_data); }
void (g_cclosure_marshal_VOID__PARAMv)(GClosure * closure, GValue * return_value, gpointer instance, va_list args, gpointer marshal_data, int n_params, GType * param_types) { stub_funcs.ptr_g_cclosure_marshal_VOID__PARAMv(closure, return_value, instance, args, marshal_data, n_params, param_types); }
void (g_cclosure_marshal_VOID__BOXED)(GClosure * closure, GValue * return_value, guint n_param_values, const GValue * param_values, gpointer invocation_hint, gpointer marshal_data) { stub_funcs.ptr_g_cclosure_marshal_VOID__BOXED(closure, return_value, n_param_values, param_values, invocation_hint, marshal_data); }
void (g_cclosure_marshal_VOID__BOXEDv)(GClosure * closure, GValue * return_value, gpointer instance, va_list args, gpointer marshal_data, int n_params, GType * param_types) { stub_funcs.ptr_g_cclosure_marshal_VOID__BOXEDv(closure, return_value, instance, args, marshal_data, n_params, param_types); }
void (g_cclosure_marshal_VOID__POINTER)(GClosure * closure, GValue * return_value, guint n_param_values, const GValue * param_values, gpointer invocation_hint, gpointer marshal_data) { stub_funcs.ptr_g_cclosure_marshal_VOID__POINTER(closure, return_value, n_param_values, param_values, invocation_hint, marshal_data); }
void (g_cclosure_marshal_VOID__POINTERv)(GClosure * closure, GValue * return_value, gpointer instance, va_list args, gpointer marshal_data, int n_params, GType * param_types) { stub_funcs.ptr_g_cclosure_marshal_VOID__POINTERv(closure, return_value, instance, args, marshal_data, n_params, param_types); }
void (g_cclosure_marshal_VOID__OBJECT)(GClosure * closure, GValue * return_value, guint n_param_values, const GValue * param_values, gpointer invocation_hint, gpointer marshal_data) { stub_funcs.ptr_g_cclosure_marshal_VOID__OBJECT(closure, return_value, n_param_values, param_values, invocation_hint, marshal_data); }
void (g_cclosure_marshal_VOID__OBJECTv)(GClosure * closure, GValue * return_value, gpointer instance, va_list args, gpointer marshal_data, int n_params, GType * param_types) { stub_funcs.ptr_g_cclosure_marshal_VOID__OBJECTv(closure, return_value, instance, args, marshal_data, n_params, param_types); }
void (g_cclosure_marshal_VOID__VARIANT)(GClosure * closure, GValue * return_value, guint n_param_values, const GValue * param_values, gpointer invocation_hint, gpointer marshal_data) { stub_funcs.ptr_g_cclosure_marshal_VOID__VARIANT(closure, return_value, n_param_values, param_values, invocation_hint, marshal_data); }
void (g_cclosure_marshal_VOID__VARIANTv)(GClosure * closure, GValue * return_value, gpointer instance, va_list args, gpointer marshal_data, int n_params, GType * param_types) { stub_funcs.ptr_g_cclosure_marshal_VOID__VARIANTv(closure, return_value, instance, args, marshal_data, n_params, param_types); }
void (g_cclosure_marshal_VOID__UINT_POINTER)(GClosure * closure, GValue * return_value, guint n_param_values, const GValue * param_values, gpointer invocation_hint, gpointer marshal_data) { stub_funcs.ptr_g_cclosure_marshal_VOID__UINT_POINTER(closure, return_value, n_param_values, param_values, invocation_hint, marshal_data); }
void (g_cclosure_marshal_VOID__UINT_POINTERv)(GClosure * closure, GValue * return_value, gpointer instance, va_list args, gpointer marshal_data, int n_params, GType * param_types) { stub_funcs.ptr_g_cclosure_marshal_VOID__UINT_POINTERv(closure, return_value, instance, args, marshal_data, n_params, param_types); }
void (g_cclosure_marshal_BOOLEAN__FLAGS)(GClosure * closure, GValue * return_value, guint n_param_values, const GValue * param_values, gpointer invocation_hint, gpointer marshal_data) { stub_funcs.ptr_g_cclosure_marshal_BOOLEAN__FLAGS(closure, return_value, n_param_values, param_values, invocation_hint, marshal_data); }
void (g_cclosure_marshal_BOOLEAN__FLAGSv)(GClosure * closure, GValue * return_value, gpointer instance, va_list args, gpointer marshal_data, int n_params, GType * param_types) { stub_funcs.ptr_g_cclosure_marshal_BOOLEAN__FLAGSv(closure, return_value, instance, args, marshal_data, n_params, param_types); }
void (g_cclosure_marshal_STRING__OBJECT_POINTER)(GClosure * closure, GValue * return_value, guint n_param_values, const GValue * param_values, gpointer invocation_hint, gpointer marshal_data) { stub_funcs.ptr_g_cclosure_marshal_STRING__OBJECT_POINTER(closure, return_value, n_param_values, param_values, invocation_hint, marshal_data); }
void (g_cclosure_marshal_STRING__OBJECT_POINTERv)(GClosure * closure, GValue * return_value, gpointer instance, va_list args, gpointer marshal_data, int n_params, GType * param_types) { stub_funcs.ptr_g_cclosure_marshal_STRING__OBJECT_POINTERv(closure, return_value, instance, args, marshal_data, n_params, param_types); }
void (g_cclosure_marshal_BOOLEAN__BOXED_BOXED)(GClosure * closure, GValue * return_value, guint n_param_values, const GValue * param_values, gpointer invocation_hint, gpointer marshal_data) { stub_funcs.ptr_g_cclosure_marshal_BOOLEAN__BOXED_BOXED(closure, return_value, n_param_values, param_values, invocation_hint, marshal_data); }
void (g_cclosure_marshal_BOOLEAN__BOXED_BOXEDv)(GClosure * closure, GValue * return_value, gpointer instance, va_list args, gpointer marshal_data, int n_params, GType * param_types) { stub_funcs.ptr_g_cclosure_marshal_BOOLEAN__BOXED_BOXEDv(closure, return_value, instance, args, marshal_data, n_params, param_types); }
guint (g_signal_newv)(const gchar * signal_name, GType itype, GSignalFlags signal_flags, GClosure * class_closure, GSignalAccumulator accumulator, gpointer accu_data, GSignalCMarshaller c_marshaller, GType return_type, guint n_params, GType * param_types) { return stub_funcs.ptr_g_signal_newv(signal_name, itype, signal_flags, class_closure, accumulator, accu_data, c_marshaller, return_type, n_params, param_types); }
guint (g_signal_new_valist)(const gchar * signal_name, GType itype, GSignalFlags signal_flags, GClosure * class_closure, GSignalAccumulator accumulator, gpointer accu_data, GSignalCMarshaller c_marshaller, GType return_type, guint n_params, va_list args) { return stub_funcs.ptr_g_signal_new_valist(signal_name, itype, signal_flags, class_closure, accumulator, accu_data, c_marshaller, return_type, n_params, args); }
guint g_signal_new (const gchar *signal_name, GType itype, GSignalFlags signal_flags, guint class_offset, GSignalAccumulator accumulator, gpointer accu_data, GSignalCMarshaller c_marshaller, GType return_type, guint n_params, ...) {
    va_list args;
    guint signal_id;

    g_return_val_if_fail(signal_name != NULL, 0);
    va_start(args, n_params);

    signal_id = stub_funcs.ptr_g_signal_new_valist(signal_name, itype, signal_flags,
        class_offset ? stub_funcs.ptr_g_signal_type_cclosure_new(itype, class_offset): NULL,
        accumulator, accu_data, c_marshaller, return_type, n_params, args);

    va_end(args);

    return signal_id;
}
void (g_signal_set_va_marshaller)(guint signal_id, GType instance_type, GSignalCVaMarshaller va_marshaller) { stub_funcs.ptr_g_signal_set_va_marshaller(signal_id, instance_type, va_marshaller); }
void (g_signal_emitv)(const GValue * instance_and_params, guint signal_id, GQuark detail, GValue * return_value) { stub_funcs.ptr_g_signal_emitv(instance_and_params, signal_id, detail, return_value); }
void (g_signal_emit_valist)(gpointer instance, guint signal_id, GQuark detail, va_list var_args) { stub_funcs.ptr_g_signal_emit_valist(instance, signal_id, detail, var_args); }
void (g_signal_emit)(gpointer instance, guint signal_id, GQuark detail, ...) { va_list vaargs; va_start(vaargs, detail); stub_funcs.ptr_g_signal_emit_valist(instance, signal_id, detail, vaargs); va_end(vaargs); }
guint (g_signal_lookup)(const gchar * name, GType itype) { return stub_funcs.ptr_g_signal_lookup(name, itype); }
const gchar * (g_signal_name)(guint signal_id) { return stub_funcs.ptr_g_signal_name(signal_id); }
void (g_signal_query)(guint signal_id, GSignalQuery * query) { stub_funcs.ptr_g_signal_query(signal_id, query); }
guint * (g_signal_list_ids)(GType itype, guint * n_ids) { return stub_funcs.ptr_g_signal_list_ids(itype, n_ids); }
gboolean (g_signal_is_valid_name)(const gchar * name) { return stub_funcs.ptr_g_signal_is_valid_name(name); }
gboolean (g_signal_parse_name)(const gchar * detailed_signal, GType itype, guint * signal_id_p, GQuark * detail_p, gboolean force_detail_quark) { return stub_funcs.ptr_g_signal_parse_name(detailed_signal, itype, signal_id_p, detail_p, force_detail_quark); }
GSignalInvocationHint * (g_signal_get_invocation_hint)(gpointer instance) { return stub_funcs.ptr_g_signal_get_invocation_hint(instance); }
void (g_signal_stop_emission)(gpointer instance, guint signal_id, GQuark detail) { stub_funcs.ptr_g_signal_stop_emission(instance, signal_id, detail); }
void (g_signal_stop_emission_by_name)(gpointer instance, const gchar * detailed_signal) { stub_funcs.ptr_g_signal_stop_emission_by_name(instance, detailed_signal); }
gulong (g_signal_add_emission_hook)(guint signal_id, GQuark detail, GSignalEmissionHook hook_func, gpointer hook_data, GDestroyNotify data_destroy) { return stub_funcs.ptr_g_signal_add_emission_hook(signal_id, detail, hook_func, hook_data, data_destroy); }
void (g_signal_remove_emission_hook)(guint signal_id, gulong hook_id) { stub_funcs.ptr_g_signal_remove_emission_hook(signal_id, hook_id); }
gboolean (g_signal_has_handler_pending)(gpointer instance, guint signal_id, GQuark detail, gboolean may_be_blocked) { return stub_funcs.ptr_g_signal_has_handler_pending(instance, signal_id, detail, may_be_blocked); }
gulong (g_signal_connect_closure_by_id)(gpointer instance, guint signal_id, GQuark detail, GClosure * closure, gboolean after) { return stub_funcs.ptr_g_signal_connect_closure_by_id(instance, signal_id, detail, closure, after); }
gulong (g_signal_connect_closure)(gpointer instance, const gchar * detailed_signal, GClosure * closure, gboolean after) { return stub_funcs.ptr_g_signal_connect_closure(instance, detailed_signal, closure, after); }
gulong (g_signal_connect_data)(gpointer instance, const gchar * detailed_signal, GCallback c_handler, gpointer data, GClosureNotify destroy_data, GConnectFlags connect_flags) { return stub_funcs.ptr_g_signal_connect_data(instance, detailed_signal, c_handler, data, destroy_data, connect_flags); }
void (g_signal_handler_block)(gpointer instance, gulong handler_id) { stub_funcs.ptr_g_signal_handler_block(instance, handler_id); }
void (g_signal_handler_unblock)(gpointer instance, gulong handler_id) { stub_funcs.ptr_g_signal_handler_unblock(instance, handler_id); }
void (g_signal_handler_disconnect)(gpointer instance, gulong handler_id) { stub_funcs.ptr_g_signal_handler_disconnect(instance, handler_id); }
gboolean (g_signal_handler_is_connected)(gpointer instance, gulong handler_id) { return stub_funcs.ptr_g_signal_handler_is_connected(instance, handler_id); }
gulong (g_signal_handler_find)(gpointer instance, GSignalMatchType mask, guint signal_id, GQuark detail, GClosure * closure, gpointer func, gpointer data) { return stub_funcs.ptr_g_signal_handler_find(instance, mask, signal_id, detail, closure, func, data); }
guint (g_signal_handlers_block_matched)(gpointer instance, GSignalMatchType mask, guint signal_id, GQuark detail, GClosure * closure, gpointer func, gpointer data) { return stub_funcs.ptr_g_signal_handlers_block_matched(instance, mask, signal_id, detail, closure, func, data); }
guint (g_signal_handlers_unblock_matched)(gpointer instance, GSignalMatchType mask, guint signal_id, GQuark detail, GClosure * closure, gpointer func, gpointer data) { return stub_funcs.ptr_g_signal_handlers_unblock_matched(instance, mask, signal_id, detail, closure, func, data); }
guint (g_signal_handlers_disconnect_matched)(gpointer instance, GSignalMatchType mask, guint signal_id, GQuark detail, GClosure * closure, gpointer func, gpointer data) { return stub_funcs.ptr_g_signal_handlers_disconnect_matched(instance, mask, signal_id, detail, closure, func, data); }
void (g_clear_signal_handler)(gulong * handler_id_ptr, gpointer instance) { stub_funcs.ptr_g_clear_signal_handler(handler_id_ptr, instance); }
void (g_signal_override_class_closure)(guint signal_id, GType instance_type, GClosure * class_closure) { stub_funcs.ptr_g_signal_override_class_closure(signal_id, instance_type, class_closure); }
void (g_signal_override_class_handler)(const gchar * signal_name, GType instance_type, GCallback class_handler) { stub_funcs.ptr_g_signal_override_class_handler(signal_name, instance_type, class_handler); }
void (g_signal_chain_from_overridden)(const GValue * instance_and_params, GValue * return_value) { stub_funcs.ptr_g_signal_chain_from_overridden(instance_and_params, return_value); }
gboolean (g_signal_accumulator_true_handled)(GSignalInvocationHint * ihint, GValue * return_accu, const GValue * handler_return, gpointer dummy) { return stub_funcs.ptr_g_signal_accumulator_true_handled(ihint, return_accu, handler_return, dummy); }
gboolean (g_signal_accumulator_first_wins)(GSignalInvocationHint * ihint, GValue * return_accu, const GValue * handler_return, gpointer dummy) { return stub_funcs.ptr_g_signal_accumulator_first_wins(ihint, return_accu, handler_return, dummy); }
void (g_signal_handlers_destroy)(gpointer instance) { stub_funcs.ptr_g_signal_handlers_destroy(instance); }
void (_g_signals_destroy)(GType itype) { stub_funcs.ptr__g_signals_destroy(itype); }
GType (g_date_get_type)(void) { return stub_funcs.ptr_g_date_get_type(); }
GType (g_strv_get_type)(void) { return stub_funcs.ptr_g_strv_get_type(); }
GType (g_gstring_get_type)(void) { return stub_funcs.ptr_g_gstring_get_type(); }
GType (g_hash_table_get_type)(void) { return stub_funcs.ptr_g_hash_table_get_type(); }
GType (g_array_get_type)(void) { return stub_funcs.ptr_g_array_get_type(); }
GType (g_byte_array_get_type)(void) { return stub_funcs.ptr_g_byte_array_get_type(); }
GType (g_ptr_array_get_type)(void) { return stub_funcs.ptr_g_ptr_array_get_type(); }
GType (g_bytes_get_type)(void) { return stub_funcs.ptr_g_bytes_get_type(); }
GType (g_variant_type_get_gtype)(void) { return stub_funcs.ptr_g_variant_type_get_gtype(); }
GType (g_regex_get_type)(void) { return stub_funcs.ptr_g_regex_get_type(); }
GType (g_match_info_get_type)(void) { return stub_funcs.ptr_g_match_info_get_type(); }
GType (g_error_get_type)(void) { return stub_funcs.ptr_g_error_get_type(); }
GType (g_date_time_get_type)(void) { return stub_funcs.ptr_g_date_time_get_type(); }
GType (g_time_zone_get_type)(void) { return stub_funcs.ptr_g_time_zone_get_type(); }
GType (g_io_channel_get_type)(void) { return stub_funcs.ptr_g_io_channel_get_type(); }
GType (g_io_condition_get_type)(void) { return stub_funcs.ptr_g_io_condition_get_type(); }
GType (g_variant_builder_get_type)(void) { return stub_funcs.ptr_g_variant_builder_get_type(); }
GType (g_variant_dict_get_type)(void) { return stub_funcs.ptr_g_variant_dict_get_type(); }
GType (g_key_file_get_type)(void) { return stub_funcs.ptr_g_key_file_get_type(); }
GType (g_main_loop_get_type)(void) { return stub_funcs.ptr_g_main_loop_get_type(); }
GType (g_main_context_get_type)(void) { return stub_funcs.ptr_g_main_context_get_type(); }
GType (g_source_get_type)(void) { return stub_funcs.ptr_g_source_get_type(); }
GType (g_pollfd_get_type)(void) { return stub_funcs.ptr_g_pollfd_get_type(); }
GType (g_thread_get_type)(void) { return stub_funcs.ptr_g_thread_get_type(); }
GType (g_checksum_get_type)(void) { return stub_funcs.ptr_g_checksum_get_type(); }
GType (g_markup_parse_context_get_type)(void) { return stub_funcs.ptr_g_markup_parse_context_get_type(); }
GType (g_mapped_file_get_type)(void) { return stub_funcs.ptr_g_mapped_file_get_type(); }
GType (g_option_group_get_type)(void) { return stub_funcs.ptr_g_option_group_get_type(); }
GType (g_uri_get_type)(void) { return stub_funcs.ptr_g_uri_get_type(); }
GType (g_tree_get_type)(void) { return stub_funcs.ptr_g_tree_get_type(); }
GType (g_pattern_spec_get_type)(void) { return stub_funcs.ptr_g_pattern_spec_get_type(); }
GType (g_bookmark_file_get_type)(void) { return stub_funcs.ptr_g_bookmark_file_get_type(); }
GType (g_hmac_get_type)(void) { return stub_funcs.ptr_g_hmac_get_type(); }
GType (g_dir_get_type)(void) { return stub_funcs.ptr_g_dir_get_type(); }
GType (g_rand_get_type)(void) { return stub_funcs.ptr_g_rand_get_type(); }
GType (g_strv_builder_get_type)(void) { return stub_funcs.ptr_g_strv_builder_get_type(); }
GType (g_variant_get_gtype)(void) { return stub_funcs.ptr_g_variant_get_gtype(); }
gpointer (g_boxed_copy)(GType boxed_type, gconstpointer src_boxed) { return stub_funcs.ptr_g_boxed_copy(boxed_type, src_boxed); }
void (g_boxed_free)(GType boxed_type, gpointer boxed) { stub_funcs.ptr_g_boxed_free(boxed_type, boxed); }
void (g_value_set_boxed)(GValue * value, gconstpointer v_boxed) { stub_funcs.ptr_g_value_set_boxed(value, v_boxed); }
void (g_value_set_static_boxed)(GValue * value, gconstpointer v_boxed) { stub_funcs.ptr_g_value_set_static_boxed(value, v_boxed); }
void (g_value_take_boxed)(GValue * value, gconstpointer v_boxed) { stub_funcs.ptr_g_value_take_boxed(value, v_boxed); }
void (g_value_set_boxed_take_ownership)(GValue * value, gconstpointer v_boxed) { stub_funcs.ptr_g_value_set_boxed_take_ownership(value, v_boxed); }
gpointer (g_value_get_boxed)(const GValue * value) { return stub_funcs.ptr_g_value_get_boxed(value); }
gpointer (g_value_dup_boxed)(const GValue * value) { return stub_funcs.ptr_g_value_dup_boxed(value); }
GType (g_boxed_type_register_static)(const gchar * name, GBoxedCopyFunc boxed_copy, GBoxedFreeFunc boxed_free) { return stub_funcs.ptr_g_boxed_type_register_static(name, boxed_copy, boxed_free); }
GType (g_closure_get_type)(void) { return stub_funcs.ptr_g_closure_get_type(); }
GType (g_value_get_type)(void) { return stub_funcs.ptr_g_value_get_type(); }
GType (g_initially_unowned_get_type)(void) { return stub_funcs.ptr_g_initially_unowned_get_type(); }
void (g_object_class_install_property)(GObjectClass * oclass, guint property_id, GParamSpec * pspec) { stub_funcs.ptr_g_object_class_install_property(oclass, property_id, pspec); }
GParamSpec * (g_object_class_find_property)(GObjectClass * oclass, const gchar * property_name) { return stub_funcs.ptr_g_object_class_find_property(oclass, property_name); }
GParamSpec * * (g_object_class_list_properties)(GObjectClass * oclass, guint * n_properties) { return stub_funcs.ptr_g_object_class_list_properties(oclass, n_properties); }
void (g_object_class_override_property)(GObjectClass * oclass, guint property_id, const gchar * name) { stub_funcs.ptr_g_object_class_override_property(oclass, property_id, name); }
void (g_object_class_install_properties)(GObjectClass * oclass, guint n_pspecs, GParamSpec * * pspecs) { stub_funcs.ptr_g_object_class_install_properties(oclass, n_pspecs, pspecs); }
void (g_object_interface_install_property)(gpointer g_iface, GParamSpec * pspec) { stub_funcs.ptr_g_object_interface_install_property(g_iface, pspec); }
GParamSpec * (g_object_interface_find_property)(gpointer g_iface, const gchar * property_name) { return stub_funcs.ptr_g_object_interface_find_property(g_iface, property_name); }
GParamSpec * * (g_object_interface_list_properties)(gpointer g_iface, guint * n_properties_p) { return stub_funcs.ptr_g_object_interface_list_properties(g_iface, n_properties_p); }
GType (g_object_get_type)(void) { return stub_funcs.ptr_g_object_get_type(); }
gpointer g_object_new(GType object_type, const gchar *first_property_name, ...) {
    GObject *object;
    va_list var_args;

    /* short circuit for calls supplying no properties */
    if (!first_property_name)
        return stub_funcs.ptr_g_object_new_with_properties(object_type, 0, NULL, NULL);

    va_start(var_args, first_property_name);
    object = stub_funcs.ptr_g_object_new_valist(object_type, first_property_name, var_args);
    va_end(var_args);

    return object;
}
GObject * (g_object_new_with_properties)(GType object_type, guint n_properties, const char * names[], const GValue values[]) { return stub_funcs.ptr_g_object_new_with_properties(object_type, n_properties, names, values); }
gpointer (g_object_newv)(GType object_type, guint n_parameters, GParameter * parameters) { return stub_funcs.ptr_g_object_newv(object_type, n_parameters, parameters); }
GObject * (g_object_new_valist)(GType object_type, const gchar * first_property_name, va_list var_args) { return stub_funcs.ptr_g_object_new_valist(object_type, first_property_name, var_args); }
void (g_object_set)(gpointer object, const gchar * first_property_name, ...) { va_list vaargs; va_start(vaargs, first_property_name); stub_funcs.ptr_g_object_set_valist(object, first_property_name, vaargs); va_end(vaargs); }
void (g_object_get)(gpointer object, const gchar * first_property_name, ...) { va_list vaargs; va_start(vaargs, first_property_name); stub_funcs.ptr_g_object_get_valist(object, first_property_name, vaargs); va_end(vaargs); }
void (g_object_setv)(GObject * object, guint n_properties, const gchar * names[], const GValue values[]) { stub_funcs.ptr_g_object_setv(object, n_properties, names, values); }
void (g_object_set_valist)(GObject * object, const gchar * first_property_name, va_list var_args) { stub_funcs.ptr_g_object_set_valist(object, first_property_name, var_args); }
void (g_object_getv)(GObject * object, guint n_properties, const gchar * names[], GValue values[]) { stub_funcs.ptr_g_object_getv(object, n_properties, names, values); }
void (g_object_get_valist)(GObject * object, const gchar * first_property_name, va_list var_args) { stub_funcs.ptr_g_object_get_valist(object, first_property_name, var_args); }
void (g_object_set_property)(GObject * object, const gchar * property_name, const GValue * value) { stub_funcs.ptr_g_object_set_property(object, property_name, value); }
void (g_object_get_property)(GObject * object, const gchar * property_name, GValue * value) { stub_funcs.ptr_g_object_get_property(object, property_name, value); }
void (g_object_freeze_notify)(GObject * object) { stub_funcs.ptr_g_object_freeze_notify(object); }
void (g_object_notify)(GObject * object, const gchar * property_name) { stub_funcs.ptr_g_object_notify(object, property_name); }
void (g_object_notify_by_pspec)(GObject * object, GParamSpec * pspec) { stub_funcs.ptr_g_object_notify_by_pspec(object, pspec); }
void (g_object_thaw_notify)(GObject * object) { stub_funcs.ptr_g_object_thaw_notify(object); }
gboolean (g_object_is_floating)(gpointer object) { return stub_funcs.ptr_g_object_is_floating(object); }
gpointer (g_object_ref_sink)(gpointer object) { return stub_funcs.ptr_g_object_ref_sink(object); }
gpointer (g_object_take_ref)(gpointer object) { return stub_funcs.ptr_g_object_take_ref(object); }
gpointer (g_object_ref)(gpointer object) { return stub_funcs.ptr_g_object_ref(object); }
void (g_object_unref)(gpointer object) { stub_funcs.ptr_g_object_unref(object); }
void (g_object_weak_ref)(GObject * object, GWeakNotify notify, gpointer data) { stub_funcs.ptr_g_object_weak_ref(object, notify, data); }
void (g_object_weak_unref)(GObject * object, GWeakNotify notify, gpointer data) { stub_funcs.ptr_g_object_weak_unref(object, notify, data); }
void (g_object_add_weak_pointer)(GObject * object, gpointer * weak_pointer_location) { stub_funcs.ptr_g_object_add_weak_pointer(object, weak_pointer_location); }
void (g_object_remove_weak_pointer)(GObject * object, gpointer * weak_pointer_location) { stub_funcs.ptr_g_object_remove_weak_pointer(object, weak_pointer_location); }
void (g_object_add_toggle_ref)(GObject * object, GToggleNotify notify, gpointer data) { stub_funcs.ptr_g_object_add_toggle_ref(object, notify, data); }
void (g_object_remove_toggle_ref)(GObject * object, GToggleNotify notify, gpointer data) { stub_funcs.ptr_g_object_remove_toggle_ref(object, notify, data); }
gpointer (g_object_get_qdata)(GObject * object, GQuark quark) { return stub_funcs.ptr_g_object_get_qdata(object, quark); }
void (g_object_set_qdata)(GObject * object, GQuark quark, gpointer data) { stub_funcs.ptr_g_object_set_qdata(object, quark, data); }
void (g_object_set_qdata_full)(GObject * object, GQuark quark, gpointer data, GDestroyNotify destroy) { stub_funcs.ptr_g_object_set_qdata_full(object, quark, data, destroy); }
gpointer (g_object_steal_qdata)(GObject * object, GQuark quark) { return stub_funcs.ptr_g_object_steal_qdata(object, quark); }
gpointer (g_object_dup_qdata)(GObject * object, GQuark quark, GDuplicateFunc dup_func, gpointer user_data) { return stub_funcs.ptr_g_object_dup_qdata(object, quark, dup_func, user_data); }
gboolean (g_object_replace_qdata)(GObject * object, GQuark quark, gpointer oldval, gpointer newval, GDestroyNotify destroy, GDestroyNotify * old_destroy) { return stub_funcs.ptr_g_object_replace_qdata(object, quark, oldval, newval, destroy, old_destroy); }
gpointer (g_object_get_data)(GObject * object, const gchar * key) { return stub_funcs.ptr_g_object_get_data(object, key); }
void (g_object_set_data)(GObject * object, const gchar * key, gpointer data) { stub_funcs.ptr_g_object_set_data(object, key, data); }
void (g_object_set_data_full)(GObject * object, const gchar * key, gpointer data, GDestroyNotify destroy) { stub_funcs.ptr_g_object_set_data_full(object, key, data, destroy); }
gpointer (g_object_steal_data)(GObject * object, const gchar * key) { return stub_funcs.ptr_g_object_steal_data(object, key); }
gpointer (g_object_dup_data)(GObject * object, const gchar * key, GDuplicateFunc dup_func, gpointer user_data) { return stub_funcs.ptr_g_object_dup_data(object, key, dup_func, user_data); }
gboolean (g_object_replace_data)(GObject * object, const gchar * key, gpointer oldval, gpointer newval, GDestroyNotify destroy, GDestroyNotify * old_destroy) { return stub_funcs.ptr_g_object_replace_data(object, key, oldval, newval, destroy, old_destroy); }
void (g_object_watch_closure)(GObject * object, GClosure * closure) { stub_funcs.ptr_g_object_watch_closure(object, closure); }
GClosure * (g_cclosure_new_object)(GCallback callback_func, GObject * object) { return stub_funcs.ptr_g_cclosure_new_object(callback_func, object); }
GClosure * (g_cclosure_new_object_swap)(GCallback callback_func, GObject * object) { return stub_funcs.ptr_g_cclosure_new_object_swap(callback_func, object); }
GClosure * (g_closure_new_object)(guint sizeof_closure, GObject * object) { return stub_funcs.ptr_g_closure_new_object(sizeof_closure, object); }
void (g_value_set_object)(GValue * value, gpointer v_object) { stub_funcs.ptr_g_value_set_object(value, v_object); }
gpointer (g_value_get_object)(const GValue * value) { return stub_funcs.ptr_g_value_get_object(value); }
gpointer (g_value_dup_object)(const GValue * value) { return stub_funcs.ptr_g_value_dup_object(value); }
gulong (g_signal_connect_object)(gpointer instance, const gchar * detailed_signal, GCallback c_handler, gpointer gobject, GConnectFlags connect_flags) { return stub_funcs.ptr_g_signal_connect_object(instance, detailed_signal, c_handler, gobject, connect_flags); }
void (g_object_force_floating)(GObject * object) { stub_funcs.ptr_g_object_force_floating(object); }
void (g_object_run_dispose)(GObject * object) { stub_funcs.ptr_g_object_run_dispose(object); }
void (g_value_take_object)(GValue * value, gpointer v_object) { stub_funcs.ptr_g_value_take_object(value, v_object); }
void (g_value_set_object_take_ownership)(GValue * value, gpointer v_object) { stub_funcs.ptr_g_value_set_object_take_ownership(value, v_object); }
gsize (g_object_compat_control)(gsize what, gpointer data) { return stub_funcs.ptr_g_object_compat_control(what, data); }
void (g_clear_object)(GObject * * object_ptr) { stub_funcs.ptr_g_clear_object(object_ptr); }
void (g_weak_ref_init)(GWeakRef * weak_ref, gpointer object) { stub_funcs.ptr_g_weak_ref_init(weak_ref, object); }
void (g_weak_ref_clear)(GWeakRef * weak_ref) { stub_funcs.ptr_g_weak_ref_clear(weak_ref); }
gpointer (g_weak_ref_get)(GWeakRef * weak_ref) { return stub_funcs.ptr_g_weak_ref_get(weak_ref); }
void (g_weak_ref_set)(GWeakRef * weak_ref, gpointer object) { stub_funcs.ptr_g_weak_ref_set(weak_ref, object); }
GType (g_binding_flags_get_type)(void) { return stub_funcs.ptr_g_binding_flags_get_type(); }
GType (g_binding_get_type)(void) { return stub_funcs.ptr_g_binding_get_type(); }
GBindingFlags (g_binding_get_flags)(GBinding * binding) { return stub_funcs.ptr_g_binding_get_flags(binding); }
GObject * (g_binding_get_source)(GBinding * binding) { return stub_funcs.ptr_g_binding_get_source(binding); }
GObject * (g_binding_dup_source)(GBinding * binding) { return stub_funcs.ptr_g_binding_dup_source(binding); }
GObject * (g_binding_get_target)(GBinding * binding) { return stub_funcs.ptr_g_binding_get_target(binding); }
GObject * (g_binding_dup_target)(GBinding * binding) { return stub_funcs.ptr_g_binding_dup_target(binding); }
const gchar * (g_binding_get_source_property)(GBinding * binding) { return stub_funcs.ptr_g_binding_get_source_property(binding); }
const gchar * (g_binding_get_target_property)(GBinding * binding) { return stub_funcs.ptr_g_binding_get_target_property(binding); }
void (g_binding_unbind)(GBinding * binding) { stub_funcs.ptr_g_binding_unbind(binding); }
GBinding * (g_object_bind_property)(gpointer source, const gchar * source_property, gpointer target, const gchar * target_property, GBindingFlags flags) { return stub_funcs.ptr_g_object_bind_property(source, source_property, target, target_property, flags); }
GBinding * (g_object_bind_property_full)(gpointer source, const gchar * source_property, gpointer target, const gchar * target_property, GBindingFlags flags, GBindingTransformFunc transform_to, GBindingTransformFunc transform_from, gpointer user_data, GDestroyNotify notify) { return stub_funcs.ptr_g_object_bind_property_full(source, source_property, target, target_property, flags, transform_to, transform_from, user_data, notify); }
GBinding * (g_object_bind_property_with_closures)(gpointer source, const gchar * source_property, gpointer target, const gchar * target_property, GBindingFlags flags, GClosure * transform_to, GClosure * transform_from) { return stub_funcs.ptr_g_object_bind_property_with_closures(source, source_property, target, target_property, flags, transform_to, transform_from); }
GType (g_binding_group_get_type)(void) { return stub_funcs.ptr_g_binding_group_get_type(); }
GBindingGroup * (g_binding_group_new)(void) { return stub_funcs.ptr_g_binding_group_new(); }
gpointer (g_binding_group_dup_source)(GBindingGroup * self) { return stub_funcs.ptr_g_binding_group_dup_source(self); }
void (g_binding_group_set_source)(GBindingGroup * self, gpointer source) { stub_funcs.ptr_g_binding_group_set_source(self, source); }
void (g_binding_group_bind)(GBindingGroup * self, const gchar * source_property, gpointer target, const gchar * target_property, GBindingFlags flags) { stub_funcs.ptr_g_binding_group_bind(self, source_property, target, target_property, flags); }
void (g_binding_group_bind_full)(GBindingGroup * self, const gchar * source_property, gpointer target, const gchar * target_property, GBindingFlags flags, GBindingTransformFunc transform_to, GBindingTransformFunc transform_from, gpointer user_data, GDestroyNotify user_data_destroy) { stub_funcs.ptr_g_binding_group_bind_full(self, source_property, target, target_property, flags, transform_to, transform_from, user_data, user_data_destroy); }
void (g_binding_group_bind_with_closures)(GBindingGroup * self, const gchar * source_property, gpointer target, const gchar * target_property, GBindingFlags flags, GClosure * transform_to, GClosure * transform_from) { stub_funcs.ptr_g_binding_group_bind_with_closures(self, source_property, target, target_property, flags, transform_to, transform_from); }
GEnumValue * (g_enum_get_value)(GEnumClass * enum_class, gint value) { return stub_funcs.ptr_g_enum_get_value(enum_class, value); }
GEnumValue * (g_enum_get_value_by_name)(GEnumClass * enum_class, const gchar * name) { return stub_funcs.ptr_g_enum_get_value_by_name(enum_class, name); }
GEnumValue * (g_enum_get_value_by_nick)(GEnumClass * enum_class, const gchar * nick) { return stub_funcs.ptr_g_enum_get_value_by_nick(enum_class, nick); }
GFlagsValue * (g_flags_get_first_value)(GFlagsClass * flags_class, guint value) { return stub_funcs.ptr_g_flags_get_first_value(flags_class, value); }
GFlagsValue * (g_flags_get_value_by_name)(GFlagsClass * flags_class, const gchar * name) { return stub_funcs.ptr_g_flags_get_value_by_name(flags_class, name); }
GFlagsValue * (g_flags_get_value_by_nick)(GFlagsClass * flags_class, const gchar * nick) { return stub_funcs.ptr_g_flags_get_value_by_nick(flags_class, nick); }
gchar * (g_enum_to_string)(GType g_enum_type, gint value) { return stub_funcs.ptr_g_enum_to_string(g_enum_type, value); }
gchar * (g_flags_to_string)(GType flags_type, guint value) { return stub_funcs.ptr_g_flags_to_string(flags_type, value); }
void (g_value_set_enum)(GValue * value, gint v_enum) { stub_funcs.ptr_g_value_set_enum(value, v_enum); }
gint (g_value_get_enum)(const GValue * value) { return stub_funcs.ptr_g_value_get_enum(value); }
void (g_value_set_flags)(GValue * value, guint v_flags) { stub_funcs.ptr_g_value_set_flags(value, v_flags); }
guint (g_value_get_flags)(const GValue * value) { return stub_funcs.ptr_g_value_get_flags(value); }
GType (g_enum_register_static)(const gchar * name, const GEnumValue * const_static_values) { return stub_funcs.ptr_g_enum_register_static(name, const_static_values); }
GType (g_flags_register_static)(const gchar * name, const GFlagsValue * const_static_values) { return stub_funcs.ptr_g_flags_register_static(name, const_static_values); }
void (g_enum_complete_type_info)(GType g_enum_type, GTypeInfo * info, const GEnumValue * const_values) { stub_funcs.ptr_g_enum_complete_type_info(g_enum_type, info, const_values); }
void (g_flags_complete_type_info)(GType g_flags_type, GTypeInfo * info, const GFlagsValue * const_values) { stub_funcs.ptr_g_flags_complete_type_info(g_flags_type, info, const_values); }
GType (g_unicode_type_get_type)(void) { return stub_funcs.ptr_g_unicode_type_get_type(); }
GType (g_unicode_break_type_get_type)(void) { return stub_funcs.ptr_g_unicode_break_type_get_type(); }
GType (g_unicode_script_get_type)(void) { return stub_funcs.ptr_g_unicode_script_get_type(); }
GType (g_normalize_mode_get_type)(void) { return stub_funcs.ptr_g_normalize_mode_get_type(); }
GParamSpec * (g_param_spec_char)(const gchar * name, const gchar * nick, const gchar * blurb, gint8 minimum, gint8 maximum, gint8 default_value, GParamFlags flags) { return stub_funcs.ptr_g_param_spec_char(name, nick, blurb, minimum, maximum, default_value, flags); }
GParamSpec * (g_param_spec_uchar)(const gchar * name, const gchar * nick, const gchar * blurb, guint8 minimum, guint8 maximum, guint8 default_value, GParamFlags flags) { return stub_funcs.ptr_g_param_spec_uchar(name, nick, blurb, minimum, maximum, default_value, flags); }
GParamSpec * (g_param_spec_boolean)(const gchar * name, const gchar * nick, const gchar * blurb, gboolean default_value, GParamFlags flags) { return stub_funcs.ptr_g_param_spec_boolean(name, nick, blurb, default_value, flags); }
GParamSpec * (g_param_spec_int)(const gchar * name, const gchar * nick, const gchar * blurb, gint minimum, gint maximum, gint default_value, GParamFlags flags) { return stub_funcs.ptr_g_param_spec_int(name, nick, blurb, minimum, maximum, default_value, flags); }
GParamSpec * (g_param_spec_uint)(const gchar * name, const gchar * nick, const gchar * blurb, guint minimum, guint maximum, guint default_value, GParamFlags flags) { return stub_funcs.ptr_g_param_spec_uint(name, nick, blurb, minimum, maximum, default_value, flags); }
GParamSpec * (g_param_spec_long)(const gchar * name, const gchar * nick, const gchar * blurb, glong minimum, glong maximum, glong default_value, GParamFlags flags) { return stub_funcs.ptr_g_param_spec_long(name, nick, blurb, minimum, maximum, default_value, flags); }
GParamSpec * (g_param_spec_ulong)(const gchar * name, const gchar * nick, const gchar * blurb, gulong minimum, gulong maximum, gulong default_value, GParamFlags flags) { return stub_funcs.ptr_g_param_spec_ulong(name, nick, blurb, minimum, maximum, default_value, flags); }
GParamSpec * (g_param_spec_int64)(const gchar * name, const gchar * nick, const gchar * blurb, gint64 minimum, gint64 maximum, gint64 default_value, GParamFlags flags) { return stub_funcs.ptr_g_param_spec_int64(name, nick, blurb, minimum, maximum, default_value, flags); }
GParamSpec * (g_param_spec_uint64)(const gchar * name, const gchar * nick, const gchar * blurb, guint64 minimum, guint64 maximum, guint64 default_value, GParamFlags flags) { return stub_funcs.ptr_g_param_spec_uint64(name, nick, blurb, minimum, maximum, default_value, flags); }
GParamSpec * (g_param_spec_unichar)(const gchar * name, const gchar * nick, const gchar * blurb, gunichar default_value, GParamFlags flags) { return stub_funcs.ptr_g_param_spec_unichar(name, nick, blurb, default_value, flags); }
GParamSpec * (g_param_spec_enum)(const gchar * name, const gchar * nick, const gchar * blurb, GType enum_type, gint default_value, GParamFlags flags) { return stub_funcs.ptr_g_param_spec_enum(name, nick, blurb, enum_type, default_value, flags); }
GParamSpec * (g_param_spec_flags)(const gchar * name, const gchar * nick, const gchar * blurb, GType flags_type, guint default_value, GParamFlags flags) { return stub_funcs.ptr_g_param_spec_flags(name, nick, blurb, flags_type, default_value, flags); }
GParamSpec * (g_param_spec_float)(const gchar * name, const gchar * nick, const gchar * blurb, gfloat minimum, gfloat maximum, gfloat default_value, GParamFlags flags) { return stub_funcs.ptr_g_param_spec_float(name, nick, blurb, minimum, maximum, default_value, flags); }
GParamSpec * (g_param_spec_double)(const gchar * name, const gchar * nick, const gchar * blurb, gdouble minimum, gdouble maximum, gdouble default_value, GParamFlags flags) { return stub_funcs.ptr_g_param_spec_double(name, nick, blurb, minimum, maximum, default_value, flags); }
GParamSpec * (g_param_spec_string)(const gchar * name, const gchar * nick, const gchar * blurb, const gchar * default_value, GParamFlags flags) { return stub_funcs.ptr_g_param_spec_string(name, nick, blurb, default_value, flags); }
GParamSpec * (g_param_spec_param)(const gchar * name, const gchar * nick, const gchar * blurb, GType param_type, GParamFlags flags) { return stub_funcs.ptr_g_param_spec_param(name, nick, blurb, param_type, flags); }
GParamSpec * (g_param_spec_boxed)(const gchar * name, const gchar * nick, const gchar * blurb, GType boxed_type, GParamFlags flags) { return stub_funcs.ptr_g_param_spec_boxed(name, nick, blurb, boxed_type, flags); }
GParamSpec * (g_param_spec_pointer)(const gchar * name, const gchar * nick, const gchar * blurb, GParamFlags flags) { return stub_funcs.ptr_g_param_spec_pointer(name, nick, blurb, flags); }
GParamSpec * (g_param_spec_value_array)(const gchar * name, const gchar * nick, const gchar * blurb, GParamSpec * element_spec, GParamFlags flags) { return stub_funcs.ptr_g_param_spec_value_array(name, nick, blurb, element_spec, flags); }
GParamSpec * (g_param_spec_object)(const gchar * name, const gchar * nick, const gchar * blurb, GType object_type, GParamFlags flags) { return stub_funcs.ptr_g_param_spec_object(name, nick, blurb, object_type, flags); }
GParamSpec * (g_param_spec_override)(const gchar * name, GParamSpec * overridden) { return stub_funcs.ptr_g_param_spec_override(name, overridden); }
GParamSpec * (g_param_spec_gtype)(const gchar * name, const gchar * nick, const gchar * blurb, GType is_a_type, GParamFlags flags) { return stub_funcs.ptr_g_param_spec_gtype(name, nick, blurb, is_a_type, flags); }
GParamSpec * (g_param_spec_variant)(const gchar * name, const gchar * nick, const gchar * blurb, const GVariantType * type, GVariant * default_value, GParamFlags flags) { return stub_funcs.ptr_g_param_spec_variant(name, nick, blurb, type, default_value, flags); }
GType (g_signal_group_get_type)(void) { return stub_funcs.ptr_g_signal_group_get_type(); }
GSignalGroup * (g_signal_group_new)(GType target_type) { return stub_funcs.ptr_g_signal_group_new(target_type); }
void (g_signal_group_set_target)(GSignalGroup * self, gpointer target) { stub_funcs.ptr_g_signal_group_set_target(self, target); }
gpointer (g_signal_group_dup_target)(GSignalGroup * self) { return stub_funcs.ptr_g_signal_group_dup_target(self); }
void (g_signal_group_block)(GSignalGroup * self) { stub_funcs.ptr_g_signal_group_block(self); }
void (g_signal_group_unblock)(GSignalGroup * self) { stub_funcs.ptr_g_signal_group_unblock(self); }
void (g_signal_group_connect_closure)(GSignalGroup * self, const gchar * detailed_signal, GClosure * closure, gboolean after) { stub_funcs.ptr_g_signal_group_connect_closure(self, detailed_signal, closure, after); }
void (g_signal_group_connect_object)(GSignalGroup * self, const gchar * detailed_signal, GCallback c_handler, gpointer object, GConnectFlags flags) { stub_funcs.ptr_g_signal_group_connect_object(self, detailed_signal, c_handler, object, flags); }
void (g_signal_group_connect_data)(GSignalGroup * self, const gchar * detailed_signal, GCallback c_handler, gpointer data, GClosureNotify notify, GConnectFlags flags) { stub_funcs.ptr_g_signal_group_connect_data(self, detailed_signal, c_handler, data, notify, flags); }
void (g_signal_group_connect)(GSignalGroup * self, const gchar * detailed_signal, GCallback c_handler, gpointer data) { stub_funcs.ptr_g_signal_group_connect(self, detailed_signal, c_handler, data); }
void (g_signal_group_connect_after)(GSignalGroup * self, const gchar * detailed_signal, GCallback c_handler, gpointer data) { stub_funcs.ptr_g_signal_group_connect_after(self, detailed_signal, c_handler, data); }
void (g_signal_group_connect_swapped)(GSignalGroup * self, const gchar * detailed_signal, GCallback c_handler, gpointer data) { stub_funcs.ptr_g_signal_group_connect_swapped(self, detailed_signal, c_handler, data); }
void (g_source_set_closure)(GSource * source, GClosure * closure) { stub_funcs.ptr_g_source_set_closure(source, closure); }
void (g_source_set_dummy_callback)(GSource * source) { stub_funcs.ptr_g_source_set_dummy_callback(source); }
GType (g_type_module_get_type)(void) { return stub_funcs.ptr_g_type_module_get_type(); }
gboolean (g_type_module_use)(GTypeModule * module) { return stub_funcs.ptr_g_type_module_use(module); }
void (g_type_module_unuse)(GTypeModule * module) { stub_funcs.ptr_g_type_module_unuse(module); }
void (g_type_module_set_name)(GTypeModule * module, const gchar * name) { stub_funcs.ptr_g_type_module_set_name(module, name); }
GType (g_type_module_register_type)(GTypeModule * module, GType parent_type, const gchar * type_name, const GTypeInfo * type_info, GTypeFlags flags) { return stub_funcs.ptr_g_type_module_register_type(module, parent_type, type_name, type_info, flags); }
void (g_type_module_add_interface)(GTypeModule * module, GType instance_type, GType interface_type, const GInterfaceInfo * interface_info) { stub_funcs.ptr_g_type_module_add_interface(module, instance_type, interface_type, interface_info); }
GType (g_type_module_register_enum)(GTypeModule * module, const gchar * name, const GEnumValue * const_static_values) { return stub_funcs.ptr_g_type_module_register_enum(module, name, const_static_values); }
GType (g_type_module_register_flags)(GTypeModule * module, const gchar * name, const GFlagsValue * const_static_values) { return stub_funcs.ptr_g_type_module_register_flags(module, name, const_static_values); }
GType (g_type_plugin_get_type)(void) { return stub_funcs.ptr_g_type_plugin_get_type(); }
void (g_type_plugin_use)(GTypePlugin * plugin) { stub_funcs.ptr_g_type_plugin_use(plugin); }
void (g_type_plugin_unuse)(GTypePlugin * plugin) { stub_funcs.ptr_g_type_plugin_unuse(plugin); }
void (g_type_plugin_complete_type_info)(GTypePlugin * plugin, GType g_type, GTypeInfo * info, GTypeValueTable * value_table) { stub_funcs.ptr_g_type_plugin_complete_type_info(plugin, g_type, info, value_table); }
void (g_type_plugin_complete_interface_info)(GTypePlugin * plugin, GType instance_type, GType interface_type, GInterfaceInfo * info) { stub_funcs.ptr_g_type_plugin_complete_interface_info(plugin, instance_type, interface_type, info); }
GType (g_value_array_get_type)(void) { return stub_funcs.ptr_g_value_array_get_type(); }
GValue * (g_value_array_get_nth)(GValueArray * value_array, guint index_) { return stub_funcs.ptr_g_value_array_get_nth(value_array, index_); }
GValueArray * (g_value_array_new)(guint n_prealloced) { return stub_funcs.ptr_g_value_array_new(n_prealloced); }
void (g_value_array_free)(GValueArray * value_array) { stub_funcs.ptr_g_value_array_free(value_array); }
GValueArray * (g_value_array_copy)(const GValueArray * value_array) { return stub_funcs.ptr_g_value_array_copy(value_array); }
GValueArray * (g_value_array_prepend)(GValueArray * value_array, const GValue * value) { return stub_funcs.ptr_g_value_array_prepend(value_array, value); }
GValueArray * (g_value_array_append)(GValueArray * value_array, const GValue * value) { return stub_funcs.ptr_g_value_array_append(value_array, value); }
GValueArray * (g_value_array_insert)(GValueArray * value_array, guint index_, const GValue * value) { return stub_funcs.ptr_g_value_array_insert(value_array, index_, value); }
GValueArray * (g_value_array_remove)(GValueArray * value_array, guint index_) { return stub_funcs.ptr_g_value_array_remove(value_array, index_); }
GValueArray * (g_value_array_sort)(GValueArray * value_array, GCompareFunc compare_func) { return stub_funcs.ptr_g_value_array_sort(value_array, compare_func); }
GValueArray * (g_value_array_sort_with_data)(GValueArray * value_array, GCompareDataFunc compare_func, gpointer user_data) { return stub_funcs.ptr_g_value_array_sort_with_data(value_array, compare_func, user_data); }
void (g_value_set_char)(GValue * value, gchar v_char) { stub_funcs.ptr_g_value_set_char(value, v_char); }
gchar (g_value_get_char)(const GValue * value) { return stub_funcs.ptr_g_value_get_char(value); }
void (g_value_set_schar)(GValue * value, gint8 v_char) { stub_funcs.ptr_g_value_set_schar(value, v_char); }
gint8 (g_value_get_schar)(const GValue * value) { return stub_funcs.ptr_g_value_get_schar(value); }
void (g_value_set_uchar)(GValue * value, guchar v_uchar) { stub_funcs.ptr_g_value_set_uchar(value, v_uchar); }
guchar (g_value_get_uchar)(const GValue * value) { return stub_funcs.ptr_g_value_get_uchar(value); }
void (g_value_set_boolean)(GValue * value, gboolean v_boolean) { stub_funcs.ptr_g_value_set_boolean(value, v_boolean); }
gboolean (g_value_get_boolean)(const GValue * value) { return stub_funcs.ptr_g_value_get_boolean(value); }
void (g_value_set_int)(GValue * value, gint v_int) { stub_funcs.ptr_g_value_set_int(value, v_int); }
gint (g_value_get_int)(const GValue * value) { return stub_funcs.ptr_g_value_get_int(value); }
void (g_value_set_uint)(GValue * value, guint v_uint) { stub_funcs.ptr_g_value_set_uint(value, v_uint); }
guint (g_value_get_uint)(const GValue * value) { return stub_funcs.ptr_g_value_get_uint(value); }
void (g_value_set_long)(GValue * value, glong v_long) { stub_funcs.ptr_g_value_set_long(value, v_long); }
glong (g_value_get_long)(const GValue * value) { return stub_funcs.ptr_g_value_get_long(value); }
void (g_value_set_ulong)(GValue * value, gulong v_ulong) { stub_funcs.ptr_g_value_set_ulong(value, v_ulong); }
gulong (g_value_get_ulong)(const GValue * value) { return stub_funcs.ptr_g_value_get_ulong(value); }
void (g_value_set_int64)(GValue * value, gint64 v_int64) { stub_funcs.ptr_g_value_set_int64(value, v_int64); }
gint64 (g_value_get_int64)(const GValue * value) { return stub_funcs.ptr_g_value_get_int64(value); }
void (g_value_set_uint64)(GValue * value, guint64 v_uint64) { stub_funcs.ptr_g_value_set_uint64(value, v_uint64); }
guint64 (g_value_get_uint64)(const GValue * value) { return stub_funcs.ptr_g_value_get_uint64(value); }
void (g_value_set_float)(GValue * value, gfloat v_float) { stub_funcs.ptr_g_value_set_float(value, v_float); }
gfloat (g_value_get_float)(const GValue * value) { return stub_funcs.ptr_g_value_get_float(value); }
void (g_value_set_double)(GValue * value, gdouble v_double) { stub_funcs.ptr_g_value_set_double(value, v_double); }
gdouble (g_value_get_double)(const GValue * value) { return stub_funcs.ptr_g_value_get_double(value); }
void (g_value_set_string)(GValue * value, const gchar * v_string) { stub_funcs.ptr_g_value_set_string(value, v_string); }
void (g_value_set_static_string)(GValue * value, const gchar * v_string) { stub_funcs.ptr_g_value_set_static_string(value, v_string); }
void (g_value_set_interned_string)(GValue * value, const gchar * v_string) { stub_funcs.ptr_g_value_set_interned_string(value, v_string); }
const gchar * (g_value_get_string)(const GValue * value) { return stub_funcs.ptr_g_value_get_string(value); }
gchar * (g_value_dup_string)(const GValue * value) { return stub_funcs.ptr_g_value_dup_string(value); }
gchar * (g_value_steal_string)(GValue * value) { return stub_funcs.ptr_g_value_steal_string(value); }
void (g_value_set_pointer)(GValue * value, gpointer v_pointer) { stub_funcs.ptr_g_value_set_pointer(value, v_pointer); }
gpointer (g_value_get_pointer)(const GValue * value) { return stub_funcs.ptr_g_value_get_pointer(value); }
GType (g_gtype_get_type)(void) { return stub_funcs.ptr_g_gtype_get_type(); }
void (g_value_set_gtype)(GValue * value, GType v_gtype) { stub_funcs.ptr_g_value_set_gtype(value, v_gtype); }
GType (g_value_get_gtype)(const GValue * value) { return stub_funcs.ptr_g_value_get_gtype(value); }
void (g_value_set_variant)(GValue * value, GVariant * variant) { stub_funcs.ptr_g_value_set_variant(value, variant); }
void (g_value_take_variant)(GValue * value, GVariant * variant) { stub_funcs.ptr_g_value_take_variant(value, variant); }
GVariant * (g_value_get_variant)(const GValue * value) { return stub_funcs.ptr_g_value_get_variant(value); }
GVariant * (g_value_dup_variant)(const GValue * value) { return stub_funcs.ptr_g_value_dup_variant(value); }
GType (g_pointer_type_register_static)(const gchar * name) { return stub_funcs.ptr_g_pointer_type_register_static(name); }
gchar * (g_strdup_value_contents)(const GValue * value) { return stub_funcs.ptr_g_strdup_value_contents(value); }
void (g_value_take_string)(GValue * value, gchar * v_string) { stub_funcs.ptr_g_value_take_string(value, v_string); }
void (g_value_set_string_take_ownership)(GValue * value, gchar * v_string) { stub_funcs.ptr_g_value_set_string_take_ownership(value, v_string); }

void close_gobject(void) {
    cosmo_dlclose(glib2);
}