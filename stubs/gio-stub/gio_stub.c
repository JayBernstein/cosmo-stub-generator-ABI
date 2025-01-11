#include "gio_stub.h"
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define _COMSO_SOURCE
#include <libc/dlopen/dlfcn.h>

static struct gioFuncs {
    GType (*ptr_g_action_get_type)(void);
    const gchar * (*ptr_g_action_get_name)(GAction * action);
    const GVariantType * (*ptr_g_action_get_parameter_type)(GAction * action);
    const GVariantType * (*ptr_g_action_get_state_type)(GAction * action);
    GVariant * (*ptr_g_action_get_state_hint)(GAction * action);
    gboolean (*ptr_g_action_get_enabled)(GAction * action);
    GVariant * (*ptr_g_action_get_state)(GAction * action);
    void (*ptr_g_action_change_state)(GAction * action, GVariant * value);
    void (*ptr_g_action_activate)(GAction * action, GVariant * parameter);
    gboolean (*ptr_g_action_name_is_valid)(const gchar * action_name);
    gboolean (*ptr_g_action_parse_detailed_name)(const gchar * detailed_name, gchar * * action_name, GVariant * * target_value, GError * * error);
    gchar * (*ptr_g_action_print_detailed_name)(const gchar * action_name, GVariant * target_value);
    GType (*ptr_g_action_group_get_type)(void);
    gboolean (*ptr_g_action_group_has_action)(GActionGroup * action_group, const gchar * action_name);
    gchar * * (*ptr_g_action_group_list_actions)(GActionGroup * action_group);
    const GVariantType * (*ptr_g_action_group_get_action_parameter_type)(GActionGroup * action_group, const gchar * action_name);
    const GVariantType * (*ptr_g_action_group_get_action_state_type)(GActionGroup * action_group, const gchar * action_name);
    GVariant * (*ptr_g_action_group_get_action_state_hint)(GActionGroup * action_group, const gchar * action_name);
    gboolean (*ptr_g_action_group_get_action_enabled)(GActionGroup * action_group, const gchar * action_name);
    GVariant * (*ptr_g_action_group_get_action_state)(GActionGroup * action_group, const gchar * action_name);
    void (*ptr_g_action_group_change_action_state)(GActionGroup * action_group, const gchar * action_name, GVariant * value);
    void (*ptr_g_action_group_activate_action)(GActionGroup * action_group, const gchar * action_name, GVariant * parameter);
    void (*ptr_g_action_group_action_added)(GActionGroup * action_group, const gchar * action_name);
    void (*ptr_g_action_group_action_removed)(GActionGroup * action_group, const gchar * action_name);
    void (*ptr_g_action_group_action_enabled_changed)(GActionGroup * action_group, const gchar * action_name, gboolean enabled);
    void (*ptr_g_action_group_action_state_changed)(GActionGroup * action_group, const gchar * action_name, GVariant * state);
    gboolean (*ptr_g_action_group_query_action)(GActionGroup * action_group, const gchar * action_name, gboolean * enabled, const GVariantType * * parameter_type, const GVariantType * * state_type, GVariant * * state_hint, GVariant * * state);
    guint (*ptr_g_dbus_connection_export_action_group)(GDBusConnection * connection, const gchar * object_path, GActionGroup * action_group, GError * * error);
    void (*ptr_g_dbus_connection_unexport_action_group)(GDBusConnection * connection, guint export_id);
    GType (*ptr_g_action_map_get_type)(void);
    GAction * (*ptr_g_action_map_lookup_action)(GActionMap * action_map, const gchar * action_name);
    void (*ptr_g_action_map_add_action)(GActionMap * action_map, GAction * action);
    void (*ptr_g_action_map_remove_action)(GActionMap * action_map, const gchar * action_name);
    void (*ptr_g_action_map_add_action_entries)(GActionMap * action_map, const GActionEntry * entries, gint n_entries, gpointer user_data);
    void (*ptr_g_action_map_remove_action_entries)(GActionMap * action_map, const GActionEntry * entries, gint n_entries);
    GType (*ptr_g_app_info_get_type)(void);
    GAppInfo * (*ptr_g_app_info_create_from_commandline)(const char * commandline, const char * application_name, GAppInfoCreateFlags flags, GError * * error);
    GAppInfo * (*ptr_g_app_info_dup)(GAppInfo * appinfo);
    gboolean (*ptr_g_app_info_equal)(GAppInfo * appinfo1, GAppInfo * appinfo2);
    const char * (*ptr_g_app_info_get_id)(GAppInfo * appinfo);
    const char * (*ptr_g_app_info_get_name)(GAppInfo * appinfo);
    const char * (*ptr_g_app_info_get_display_name)(GAppInfo * appinfo);
    const char * (*ptr_g_app_info_get_description)(GAppInfo * appinfo);
    const char * (*ptr_g_app_info_get_executable)(GAppInfo * appinfo);
    const char * (*ptr_g_app_info_get_commandline)(GAppInfo * appinfo);
    GIcon * (*ptr_g_app_info_get_icon)(GAppInfo * appinfo);
    gboolean (*ptr_g_app_info_launch)(GAppInfo * appinfo, GList * files, GAppLaunchContext * context, GError * * error);
    gboolean (*ptr_g_app_info_supports_uris)(GAppInfo * appinfo);
    gboolean (*ptr_g_app_info_supports_files)(GAppInfo * appinfo);
    gboolean (*ptr_g_app_info_launch_uris)(GAppInfo * appinfo, GList * uris, GAppLaunchContext * context, GError * * error);
    void (*ptr_g_app_info_launch_uris_async)(GAppInfo * appinfo, GList * uris, GAppLaunchContext * context, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data);
    gboolean (*ptr_g_app_info_launch_uris_finish)(GAppInfo * appinfo, GAsyncResult * result, GError * * error);
    gboolean (*ptr_g_app_info_should_show)(GAppInfo * appinfo);
    gboolean (*ptr_g_app_info_set_as_default_for_type)(GAppInfo * appinfo, const char * content_type, GError * * error);
    gboolean (*ptr_g_app_info_set_as_default_for_extension)(GAppInfo * appinfo, const char * extension, GError * * error);
    gboolean (*ptr_g_app_info_add_supports_type)(GAppInfo * appinfo, const char * content_type, GError * * error);
    gboolean (*ptr_g_app_info_can_remove_supports_type)(GAppInfo * appinfo);
    gboolean (*ptr_g_app_info_remove_supports_type)(GAppInfo * appinfo, const char * content_type, GError * * error);
    const char * * (*ptr_g_app_info_get_supported_types)(GAppInfo * appinfo);
    gboolean (*ptr_g_app_info_can_delete)(GAppInfo * appinfo);
    gboolean (*ptr_g_app_info_delete)(GAppInfo * appinfo);
    gboolean (*ptr_g_app_info_set_as_last_used_for_type)(GAppInfo * appinfo, const char * content_type, GError * * error);
    GList * (*ptr_g_app_info_get_all)(void);
    GList * (*ptr_g_app_info_get_all_for_type)(const char * content_type);
    GList * (*ptr_g_app_info_get_recommended_for_type)(const gchar * content_type);
    GList * (*ptr_g_app_info_get_fallback_for_type)(const gchar * content_type);
    void (*ptr_g_app_info_reset_type_associations)(const char * content_type);
    GAppInfo * (*ptr_g_app_info_get_default_for_type)(const char * content_type, gboolean must_support_uris);
    void (*ptr_g_app_info_get_default_for_type_async)(const char * content_type, gboolean must_support_uris, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data);
    GAppInfo * (*ptr_g_app_info_get_default_for_type_finish)(GAsyncResult * result, GError * * error);
    GAppInfo * (*ptr_g_app_info_get_default_for_uri_scheme)(const char * uri_scheme);
    void (*ptr_g_app_info_get_default_for_uri_scheme_async)(const char * uri_scheme, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data);
    GAppInfo * (*ptr_g_app_info_get_default_for_uri_scheme_finish)(GAsyncResult * result, GError * * error);
    gboolean (*ptr_g_app_info_launch_default_for_uri)(const char * uri, GAppLaunchContext * context, GError * * error);
    void (*ptr_g_app_info_launch_default_for_uri_async)(const char * uri, GAppLaunchContext * context, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data);
    gboolean (*ptr_g_app_info_launch_default_for_uri_finish)(GAsyncResult * result, GError * * error);
    GType (*ptr_g_app_launch_context_get_type)(void);
    GAppLaunchContext * (*ptr_g_app_launch_context_new)(void);
    void (*ptr_g_app_launch_context_setenv)(GAppLaunchContext * context, const char * variable, const char * value);
    void (*ptr_g_app_launch_context_unsetenv)(GAppLaunchContext * context, const char * variable);
    char * * (*ptr_g_app_launch_context_get_environment)(GAppLaunchContext * context);
    char * (*ptr_g_app_launch_context_get_display)(GAppLaunchContext * context, GAppInfo * info, GList * files);
    char * (*ptr_g_app_launch_context_get_startup_notify_id)(GAppLaunchContext * context, GAppInfo * info, GList * files);
    void (*ptr_g_app_launch_context_launch_failed)(GAppLaunchContext * context, const char * startup_notify_id);
    GType (*ptr_g_app_info_monitor_get_type)(void);
    GAppInfoMonitor * (*ptr_g_app_info_monitor_get)(void);
    GType (*ptr_g_application_get_type)(void);
    gboolean (*ptr_g_application_id_is_valid)(const gchar * application_id);
    GApplication * (*ptr_g_application_new)(const gchar * application_id, GApplicationFlags flags);
    const gchar * (*ptr_g_application_get_application_id)(GApplication * application);
    void (*ptr_g_application_set_application_id)(GApplication * application, const gchar * application_id);
    const gchar * (*ptr_g_application_get_version)(GApplication * application);
    void (*ptr_g_application_set_version)(GApplication * application, const gchar * version);
    GDBusConnection * (*ptr_g_application_get_dbus_connection)(GApplication * application);
    const gchar * (*ptr_g_application_get_dbus_object_path)(GApplication * application);
    guint (*ptr_g_application_get_inactivity_timeout)(GApplication * application);
    void (*ptr_g_application_set_inactivity_timeout)(GApplication * application, guint inactivity_timeout);
    GApplicationFlags (*ptr_g_application_get_flags)(GApplication * application);
    void (*ptr_g_application_set_flags)(GApplication * application, GApplicationFlags flags);
    const gchar * (*ptr_g_application_get_resource_base_path)(GApplication * application);
    void (*ptr_g_application_set_resource_base_path)(GApplication * application, const gchar * resource_path);
    void (*ptr_g_application_set_action_group)(GApplication * application, GActionGroup * action_group);
    void (*ptr_g_application_add_main_option_entries)(GApplication * application, const GOptionEntry * entries);
    void (*ptr_g_application_add_main_option)(GApplication * application, const char * long_name, char short_name, GOptionFlags flags, GOptionArg arg, const char * description, const char * arg_description);
    void (*ptr_g_application_add_option_group)(GApplication * application, GOptionGroup * group);
    void (*ptr_g_application_set_option_context_parameter_string)(GApplication * application, const gchar * parameter_string);
    void (*ptr_g_application_set_option_context_summary)(GApplication * application, const gchar * summary);
    void (*ptr_g_application_set_option_context_description)(GApplication * application, const gchar * description);
    gboolean (*ptr_g_application_get_is_registered)(GApplication * application);
    gboolean (*ptr_g_application_get_is_remote)(GApplication * application);
    gboolean (*ptr_g_application_register)(GApplication * application, GCancellable * cancellable, GError * * error);
    void (*ptr_g_application_hold)(GApplication * application);
    void (*ptr_g_application_release)(GApplication * application);
    void (*ptr_g_application_activate)(GApplication * application);
    void (*ptr_g_application_open)(GApplication * application, GFile * * files, gint n_files, const gchar * hint);
    int (*ptr_g_application_run)(GApplication * application, int argc, char * * argv);
    void (*ptr_g_application_quit)(GApplication * application);
    GApplication * (*ptr_g_application_get_default)(void);
    void (*ptr_g_application_set_default)(GApplication * application);
    void (*ptr_g_application_mark_busy)(GApplication * application);
    void (*ptr_g_application_unmark_busy)(GApplication * application);
    gboolean (*ptr_g_application_get_is_busy)(GApplication * application);
    void (*ptr_g_application_send_notification)(GApplication * application, const gchar * id, GNotification * notification);
    void (*ptr_g_application_withdraw_notification)(GApplication * application, const gchar * id);
    void (*ptr_g_application_bind_busy_property)(GApplication * application, gpointer object, const gchar * property);
    void (*ptr_g_application_unbind_busy_property)(GApplication * application, gpointer object, const gchar * property);
    GType (*ptr_g_application_command_line_get_type)(void);
    gchar * * (*ptr_g_application_command_line_get_arguments)(GApplicationCommandLine * cmdline, int * argc);
    GVariantDict * (*ptr_g_application_command_line_get_options_dict)(GApplicationCommandLine * cmdline);
    GInputStream * (*ptr_g_application_command_line_get_stdin)(GApplicationCommandLine * cmdline);
    const gchar * const * (*ptr_g_application_command_line_get_environ)(GApplicationCommandLine * cmdline);
    const gchar * (*ptr_g_application_command_line_getenv)(GApplicationCommandLine * cmdline, const gchar * name);
    const gchar * (*ptr_g_application_command_line_get_cwd)(GApplicationCommandLine * cmdline);
    gboolean (*ptr_g_application_command_line_get_is_remote)(GApplicationCommandLine * cmdline);
    void (*ptr_g_application_command_line_print_literal)(GApplicationCommandLine * cmdline, const gchar * message);
    void (*ptr_g_application_command_line_printerr_literal)(GApplicationCommandLine * cmdline, const gchar * message);
    int (*ptr_g_application_command_line_get_exit_status)(GApplicationCommandLine * cmdline);
    void (*ptr_g_application_command_line_set_exit_status)(GApplicationCommandLine * cmdline, int exit_status);
    GVariant * (*ptr_g_application_command_line_get_platform_data)(GApplicationCommandLine * cmdline);
    GFile * (*ptr_g_application_command_line_create_file_for_arg)(GApplicationCommandLine * cmdline, const gchar * arg);
    void (*ptr_g_application_command_line_done)(GApplicationCommandLine * cmdline);
    GType (*ptr_g_initable_get_type)(void);
    gboolean (*ptr_g_initable_init)(GInitable * initable, GCancellable * cancellable, GError * * error);
    gpointer (*ptr_g_initable_new)(GType object_type, GCancellable * cancellable, GError * * error, const gchar * first_property_name, ...);
    gpointer (*ptr_g_initable_newv)(GType object_type, guint n_parameters, GParameter * parameters, GCancellable * cancellable, GError * * error);
    GObject * (*ptr_g_initable_new_valist)(GType object_type, const gchar * first_property_name, va_list var_args, GCancellable * cancellable, GError * * error);
    GType (*ptr_g_async_initable_get_type)(void);
    void (*ptr_g_async_initable_init_async)(GAsyncInitable * initable, int io_priority, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data);
    gboolean (*ptr_g_async_initable_init_finish)(GAsyncInitable * initable, GAsyncResult * res, GError * * error);
    void (*ptr_g_async_initable_newv_async)(GType object_type, guint n_parameters, GParameter * parameters, int io_priority, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data);
    void (*ptr_g_async_initable_new_valist_async)(GType object_type, const gchar * first_property_name, va_list var_args, int io_priority, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data);
    GObject * (*ptr_g_async_initable_new_finish)(GAsyncInitable * initable, GAsyncResult * res, GError * * error);
    GType (*ptr_g_async_result_get_type)(void);
    gpointer (*ptr_g_async_result_get_user_data)(GAsyncResult * res);
    GObject * (*ptr_g_async_result_get_source_object)(GAsyncResult * res);
    gboolean (*ptr_g_async_result_legacy_propagate_error)(GAsyncResult * res, GError * * error);
    gboolean (*ptr_g_async_result_is_tagged)(GAsyncResult * res, gpointer source_tag);
    GType (*ptr_g_input_stream_get_type)(void);
    gssize (*ptr_g_input_stream_read)(GInputStream * stream, void * buffer, gsize count, GCancellable * cancellable, GError * * error);
    gboolean (*ptr_g_input_stream_read_all)(GInputStream * stream, void * buffer, gsize count, gsize * bytes_read, GCancellable * cancellable, GError * * error);
    GBytes * (*ptr_g_input_stream_read_bytes)(GInputStream * stream, gsize count, GCancellable * cancellable, GError * * error);
    gssize (*ptr_g_input_stream_skip)(GInputStream * stream, gsize count, GCancellable * cancellable, GError * * error);
    gboolean (*ptr_g_input_stream_close)(GInputStream * stream, GCancellable * cancellable, GError * * error);
    void (*ptr_g_input_stream_read_async)(GInputStream * stream, void * buffer, gsize count, int io_priority, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data);
    gssize (*ptr_g_input_stream_read_finish)(GInputStream * stream, GAsyncResult * result, GError * * error);
    void (*ptr_g_input_stream_read_all_async)(GInputStream * stream, void * buffer, gsize count, int io_priority, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data);
    gboolean (*ptr_g_input_stream_read_all_finish)(GInputStream * stream, GAsyncResult * result, gsize * bytes_read, GError * * error);
    void (*ptr_g_input_stream_read_bytes_async)(GInputStream * stream, gsize count, int io_priority, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data);
    GBytes * (*ptr_g_input_stream_read_bytes_finish)(GInputStream * stream, GAsyncResult * result, GError * * error);
    void (*ptr_g_input_stream_skip_async)(GInputStream * stream, gsize count, int io_priority, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data);
    gssize (*ptr_g_input_stream_skip_finish)(GInputStream * stream, GAsyncResult * result, GError * * error);
    void (*ptr_g_input_stream_close_async)(GInputStream * stream, int io_priority, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data);
    gboolean (*ptr_g_input_stream_close_finish)(GInputStream * stream, GAsyncResult * result, GError * * error);
    gboolean (*ptr_g_input_stream_is_closed)(GInputStream * stream);
    gboolean (*ptr_g_input_stream_has_pending)(GInputStream * stream);
    gboolean (*ptr_g_input_stream_set_pending)(GInputStream * stream, GError * * error);
    void (*ptr_g_input_stream_clear_pending)(GInputStream * stream);
    GType (*ptr_g_filter_input_stream_get_type)(void);
    GInputStream * (*ptr_g_filter_input_stream_get_base_stream)(GFilterInputStream * stream);
    gboolean (*ptr_g_filter_input_stream_get_close_base_stream)(GFilterInputStream * stream);
    void (*ptr_g_filter_input_stream_set_close_base_stream)(GFilterInputStream * stream, gboolean close_base);
    GType (*ptr_g_buffered_input_stream_get_type)(void);
    GInputStream * (*ptr_g_buffered_input_stream_new)(GInputStream * base_stream);
    GInputStream * (*ptr_g_buffered_input_stream_new_sized)(GInputStream * base_stream, gsize size);
    gsize (*ptr_g_buffered_input_stream_get_buffer_size)(GBufferedInputStream * stream);
    void (*ptr_g_buffered_input_stream_set_buffer_size)(GBufferedInputStream * stream, gsize size);
    gsize (*ptr_g_buffered_input_stream_get_available)(GBufferedInputStream * stream);
    gsize (*ptr_g_buffered_input_stream_peek)(GBufferedInputStream * stream, void * buffer, gsize offset, gsize count);
    const void * (*ptr_g_buffered_input_stream_peek_buffer)(GBufferedInputStream * stream, gsize * count);
    gssize (*ptr_g_buffered_input_stream_fill)(GBufferedInputStream * stream, gssize count, GCancellable * cancellable, GError * * error);
    void (*ptr_g_buffered_input_stream_fill_async)(GBufferedInputStream * stream, gssize count, int io_priority, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data);
    gssize (*ptr_g_buffered_input_stream_fill_finish)(GBufferedInputStream * stream, GAsyncResult * result, GError * * error);
    int (*ptr_g_buffered_input_stream_read_byte)(GBufferedInputStream * stream, GCancellable * cancellable, GError * * error);
    GType (*ptr_g_output_stream_get_type)(void);
    gssize (*ptr_g_output_stream_write)(GOutputStream * stream, const void * buffer, gsize count, GCancellable * cancellable, GError * * error);
    gboolean (*ptr_g_output_stream_write_all)(GOutputStream * stream, const void * buffer, gsize count, gsize * bytes_written, GCancellable * cancellable, GError * * error);
    gboolean (*ptr_g_output_stream_writev)(GOutputStream * stream, const GOutputVector * vectors, gsize n_vectors, gsize * bytes_written, GCancellable * cancellable, GError * * error);
    gboolean (*ptr_g_output_stream_writev_all)(GOutputStream * stream, GOutputVector * vectors, gsize n_vectors, gsize * bytes_written, GCancellable * cancellable, GError * * error);
    gboolean (*ptr_g_output_stream_printf)(GOutputStream * stream, gsize * bytes_written, GCancellable * cancellable, GError * * error, const gchar * format, ...);
    gboolean (*ptr_g_output_stream_vprintf)(GOutputStream * stream, gsize * bytes_written, GCancellable * cancellable, GError * * error, const gchar * format, va_list args);
    gssize (*ptr_g_output_stream_write_bytes)(GOutputStream * stream, GBytes * bytes, GCancellable * cancellable, GError * * error);
    gssize (*ptr_g_output_stream_splice)(GOutputStream * stream, GInputStream * source, GOutputStreamSpliceFlags flags, GCancellable * cancellable, GError * * error);
    gboolean (*ptr_g_output_stream_flush)(GOutputStream * stream, GCancellable * cancellable, GError * * error);
    gboolean (*ptr_g_output_stream_close)(GOutputStream * stream, GCancellable * cancellable, GError * * error);
    void (*ptr_g_output_stream_write_async)(GOutputStream * stream, const void * buffer, gsize count, int io_priority, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data);
    gssize (*ptr_g_output_stream_write_finish)(GOutputStream * stream, GAsyncResult * result, GError * * error);
    void (*ptr_g_output_stream_write_all_async)(GOutputStream * stream, const void * buffer, gsize count, int io_priority, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data);
    gboolean (*ptr_g_output_stream_write_all_finish)(GOutputStream * stream, GAsyncResult * result, gsize * bytes_written, GError * * error);
    void (*ptr_g_output_stream_writev_async)(GOutputStream * stream, const GOutputVector * vectors, gsize n_vectors, int io_priority, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data);
    gboolean (*ptr_g_output_stream_writev_finish)(GOutputStream * stream, GAsyncResult * result, gsize * bytes_written, GError * * error);
    void (*ptr_g_output_stream_writev_all_async)(GOutputStream * stream, GOutputVector * vectors, gsize n_vectors, int io_priority, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data);
    gboolean (*ptr_g_output_stream_writev_all_finish)(GOutputStream * stream, GAsyncResult * result, gsize * bytes_written, GError * * error);
    void (*ptr_g_output_stream_write_bytes_async)(GOutputStream * stream, GBytes * bytes, int io_priority, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data);
    gssize (*ptr_g_output_stream_write_bytes_finish)(GOutputStream * stream, GAsyncResult * result, GError * * error);
    void (*ptr_g_output_stream_splice_async)(GOutputStream * stream, GInputStream * source, GOutputStreamSpliceFlags flags, int io_priority, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data);
    gssize (*ptr_g_output_stream_splice_finish)(GOutputStream * stream, GAsyncResult * result, GError * * error);
    void (*ptr_g_output_stream_flush_async)(GOutputStream * stream, int io_priority, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data);
    gboolean (*ptr_g_output_stream_flush_finish)(GOutputStream * stream, GAsyncResult * result, GError * * error);
    void (*ptr_g_output_stream_close_async)(GOutputStream * stream, int io_priority, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data);
    gboolean (*ptr_g_output_stream_close_finish)(GOutputStream * stream, GAsyncResult * result, GError * * error);
    gboolean (*ptr_g_output_stream_is_closed)(GOutputStream * stream);
    gboolean (*ptr_g_output_stream_is_closing)(GOutputStream * stream);
    gboolean (*ptr_g_output_stream_has_pending)(GOutputStream * stream);
    gboolean (*ptr_g_output_stream_set_pending)(GOutputStream * stream, GError * * error);
    void (*ptr_g_output_stream_clear_pending)(GOutputStream * stream);
    GType (*ptr_g_filter_output_stream_get_type)(void);
    GOutputStream * (*ptr_g_filter_output_stream_get_base_stream)(GFilterOutputStream * stream);
    gboolean (*ptr_g_filter_output_stream_get_close_base_stream)(GFilterOutputStream * stream);
    void (*ptr_g_filter_output_stream_set_close_base_stream)(GFilterOutputStream * stream, gboolean close_base);
    GType (*ptr_g_buffered_output_stream_get_type)(void);
    GOutputStream * (*ptr_g_buffered_output_stream_new)(GOutputStream * base_stream);
    GOutputStream * (*ptr_g_buffered_output_stream_new_sized)(GOutputStream * base_stream, gsize size);
    gsize (*ptr_g_buffered_output_stream_get_buffer_size)(GBufferedOutputStream * stream);
    void (*ptr_g_buffered_output_stream_set_buffer_size)(GBufferedOutputStream * stream, gsize size);
    gboolean (*ptr_g_buffered_output_stream_get_auto_grow)(GBufferedOutputStream * stream);
    void (*ptr_g_buffered_output_stream_set_auto_grow)(GBufferedOutputStream * stream, gboolean auto_grow);
    GType (*ptr_g_bytes_icon_get_type)(void);
    GIcon * (*ptr_g_bytes_icon_new)(GBytes * bytes);
    GBytes * (*ptr_g_bytes_icon_get_bytes)(GBytesIcon * icon);
    GType (*ptr_g_cancellable_get_type)(void);
    GCancellable * (*ptr_g_cancellable_new)(void);
    gboolean (*ptr_g_cancellable_is_cancelled)(GCancellable * cancellable);
    gboolean (*ptr_g_cancellable_set_error_if_cancelled)(GCancellable * cancellable, GError * * error);
    int (*ptr_g_cancellable_get_fd)(GCancellable * cancellable);
    gboolean (*ptr_g_cancellable_make_pollfd)(GCancellable * cancellable, GPollFD * pollfd);
    void (*ptr_g_cancellable_release_fd)(GCancellable * cancellable);
    GSource * (*ptr_g_cancellable_source_new)(GCancellable * cancellable);
    GCancellable * (*ptr_g_cancellable_get_current)(void);
    void (*ptr_g_cancellable_push_current)(GCancellable * cancellable);
    void (*ptr_g_cancellable_pop_current)(GCancellable * cancellable);
    void (*ptr_g_cancellable_reset)(GCancellable * cancellable);
    gulong (*ptr_g_cancellable_connect)(GCancellable * cancellable, GCallback callback, gpointer data, GDestroyNotify data_destroy_func);
    void (*ptr_g_cancellable_disconnect)(GCancellable * cancellable, gulong handler_id);
    void (*ptr_g_cancellable_cancel)(GCancellable * cancellable);
    GType (*ptr_g_converter_get_type)(void);
    GConverterResult (*ptr_g_converter_convert)(GConverter * converter, const void * inbuf, gsize inbuf_size, void * outbuf, gsize outbuf_size, GConverterFlags flags, gsize * bytes_read, gsize * bytes_written, GError * * error);
    void (*ptr_g_converter_reset)(GConverter * converter);
    GBytes * (*ptr_g_converter_convert_bytes)(GConverter * converter, GBytes * bytes, GError * * error);
    GType (*ptr_g_charset_converter_get_type)(void);
    GCharsetConverter * (*ptr_g_charset_converter_new)(const gchar * to_charset, const gchar * from_charset, GError * * error);
    void (*ptr_g_charset_converter_set_use_fallback)(GCharsetConverter * converter, gboolean use_fallback);
    gboolean (*ptr_g_charset_converter_get_use_fallback)(GCharsetConverter * converter);
    guint (*ptr_g_charset_converter_get_num_fallbacks)(GCharsetConverter * converter);
    gboolean (*ptr_g_content_type_equals)(const gchar * type1, const gchar * type2);
    gboolean (*ptr_g_content_type_is_a)(const gchar * type, const gchar * supertype);
    gboolean (*ptr_g_content_type_is_mime_type)(const gchar * type, const gchar * mime_type);
    gboolean (*ptr_g_content_type_is_unknown)(const gchar * type);
    gchar * (*ptr_g_content_type_get_description)(const gchar * type);
    gchar * (*ptr_g_content_type_get_mime_type)(const gchar * type);
    GIcon * (*ptr_g_content_type_get_icon)(const gchar * type);
    GIcon * (*ptr_g_content_type_get_symbolic_icon)(const gchar * type);
    gchar * (*ptr_g_content_type_get_generic_icon_name)(const gchar * type);
    gboolean (*ptr_g_content_type_can_be_executable)(const gchar * type);
    gchar * (*ptr_g_content_type_from_mime_type)(const gchar * mime_type);
    gchar * (*ptr_g_content_type_guess)(const gchar * filename, const guchar * data, gsize data_size, gboolean * result_uncertain);
    gchar * * (*ptr_g_content_type_guess_for_tree)(GFile * root);
    GList * (*ptr_g_content_types_get_registered)(void);
    const gchar * const * (*ptr_g_content_type_get_mime_dirs)(void);
    void (*ptr_g_content_type_set_mime_dirs)(const gchar * const * dirs);
    GType (*ptr_g_converter_input_stream_get_type)(void);
    GInputStream * (*ptr_g_converter_input_stream_new)(GInputStream * base_stream, GConverter * converter);
    GConverter * (*ptr_g_converter_input_stream_get_converter)(GConverterInputStream * converter_stream);
    GType (*ptr_g_converter_output_stream_get_type)(void);
    GOutputStream * (*ptr_g_converter_output_stream_new)(GOutputStream * base_stream, GConverter * converter);
    GConverter * (*ptr_g_converter_output_stream_get_converter)(GConverterOutputStream * converter_stream);
    GType (*ptr_g_credentials_get_type)(void);
    GCredentials * (*ptr_g_credentials_new)(void);
    gchar * (*ptr_g_credentials_to_string)(GCredentials * credentials);
    gpointer (*ptr_g_credentials_get_native)(GCredentials * credentials, GCredentialsType native_type);
    void (*ptr_g_credentials_set_native)(GCredentials * credentials, GCredentialsType native_type, gpointer native);
    gboolean (*ptr_g_credentials_is_same_user)(GCredentials * credentials, GCredentials * other_credentials, GError * * error);
    pid_t (*ptr_g_credentials_get_unix_pid)(GCredentials * credentials, GError * * error);
    uid_t (*ptr_g_credentials_get_unix_user)(GCredentials * credentials, GError * * error);
    gboolean (*ptr_g_credentials_set_unix_user)(GCredentials * credentials, uid_t uid, GError * * error);
    GType (*ptr_g_datagram_based_get_type)(void);
    gint (*ptr_g_datagram_based_receive_messages)(GDatagramBased * datagram_based, GInputMessage * messages, guint num_messages, gint flags, gint64 timeout, GCancellable * cancellable, GError * * error);
    gint (*ptr_g_datagram_based_send_messages)(GDatagramBased * datagram_based, GOutputMessage * messages, guint num_messages, gint flags, gint64 timeout, GCancellable * cancellable, GError * * error);
    GSource * (*ptr_g_datagram_based_create_source)(GDatagramBased * datagram_based, GIOCondition condition, GCancellable * cancellable);
    GIOCondition (*ptr_g_datagram_based_condition_check)(GDatagramBased * datagram_based, GIOCondition condition);
    gboolean (*ptr_g_datagram_based_condition_wait)(GDatagramBased * datagram_based, GIOCondition condition, gint64 timeout, GCancellable * cancellable, GError * * error);
    GType (*ptr_g_data_input_stream_get_type)(void);
    GDataInputStream * (*ptr_g_data_input_stream_new)(GInputStream * base_stream);
    void (*ptr_g_data_input_stream_set_byte_order)(GDataInputStream * stream, GDataStreamByteOrder order);
    GDataStreamByteOrder (*ptr_g_data_input_stream_get_byte_order)(GDataInputStream * stream);
    void (*ptr_g_data_input_stream_set_newline_type)(GDataInputStream * stream, GDataStreamNewlineType type);
    GDataStreamNewlineType (*ptr_g_data_input_stream_get_newline_type)(GDataInputStream * stream);
    guchar (*ptr_g_data_input_stream_read_byte)(GDataInputStream * stream, GCancellable * cancellable, GError * * error);
    gint16 (*ptr_g_data_input_stream_read_int16)(GDataInputStream * stream, GCancellable * cancellable, GError * * error);
    guint16 (*ptr_g_data_input_stream_read_uint16)(GDataInputStream * stream, GCancellable * cancellable, GError * * error);
    gint32 (*ptr_g_data_input_stream_read_int32)(GDataInputStream * stream, GCancellable * cancellable, GError * * error);
    guint32 (*ptr_g_data_input_stream_read_uint32)(GDataInputStream * stream, GCancellable * cancellable, GError * * error);
    gint64 (*ptr_g_data_input_stream_read_int64)(GDataInputStream * stream, GCancellable * cancellable, GError * * error);
    guint64 (*ptr_g_data_input_stream_read_uint64)(GDataInputStream * stream, GCancellable * cancellable, GError * * error);
    char * (*ptr_g_data_input_stream_read_line)(GDataInputStream * stream, gsize * length, GCancellable * cancellable, GError * * error);
    char * (*ptr_g_data_input_stream_read_line_utf8)(GDataInputStream * stream, gsize * length, GCancellable * cancellable, GError * * error);
    void (*ptr_g_data_input_stream_read_line_async)(GDataInputStream * stream, gint io_priority, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data);
    char * (*ptr_g_data_input_stream_read_line_finish)(GDataInputStream * stream, GAsyncResult * result, gsize * length, GError * * error);
    char * (*ptr_g_data_input_stream_read_line_finish_utf8)(GDataInputStream * stream, GAsyncResult * result, gsize * length, GError * * error);
    char * (*ptr_g_data_input_stream_read_until)(GDataInputStream * stream, const gchar * stop_chars, gsize * length, GCancellable * cancellable, GError * * error);
    void (*ptr_g_data_input_stream_read_until_async)(GDataInputStream * stream, const gchar * stop_chars, gint io_priority, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data);
    char * (*ptr_g_data_input_stream_read_until_finish)(GDataInputStream * stream, GAsyncResult * result, gsize * length, GError * * error);
    char * (*ptr_g_data_input_stream_read_upto)(GDataInputStream * stream, const gchar * stop_chars, gssize stop_chars_len, gsize * length, GCancellable * cancellable, GError * * error);
    void (*ptr_g_data_input_stream_read_upto_async)(GDataInputStream * stream, const gchar * stop_chars, gssize stop_chars_len, gint io_priority, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data);
    char * (*ptr_g_data_input_stream_read_upto_finish)(GDataInputStream * stream, GAsyncResult * result, gsize * length, GError * * error);
    GType (*ptr_g_data_output_stream_get_type)(void);
    GDataOutputStream * (*ptr_g_data_output_stream_new)(GOutputStream * base_stream);
    void (*ptr_g_data_output_stream_set_byte_order)(GDataOutputStream * stream, GDataStreamByteOrder order);
    GDataStreamByteOrder (*ptr_g_data_output_stream_get_byte_order)(GDataOutputStream * stream);
    gboolean (*ptr_g_data_output_stream_put_byte)(GDataOutputStream * stream, guchar data, GCancellable * cancellable, GError * * error);
    gboolean (*ptr_g_data_output_stream_put_int16)(GDataOutputStream * stream, gint16 data, GCancellable * cancellable, GError * * error);
    gboolean (*ptr_g_data_output_stream_put_uint16)(GDataOutputStream * stream, guint16 data, GCancellable * cancellable, GError * * error);
    gboolean (*ptr_g_data_output_stream_put_int32)(GDataOutputStream * stream, gint32 data, GCancellable * cancellable, GError * * error);
    gboolean (*ptr_g_data_output_stream_put_uint32)(GDataOutputStream * stream, guint32 data, GCancellable * cancellable, GError * * error);
    gboolean (*ptr_g_data_output_stream_put_int64)(GDataOutputStream * stream, gint64 data, GCancellable * cancellable, GError * * error);
    gboolean (*ptr_g_data_output_stream_put_uint64)(GDataOutputStream * stream, guint64 data, GCancellable * cancellable, GError * * error);
    gboolean (*ptr_g_data_output_stream_put_string)(GDataOutputStream * stream, const char * str, GCancellable * cancellable, GError * * error);
    GType (*ptr_g_dbus_action_group_get_type)(void);
    GDBusActionGroup * (*ptr_g_dbus_action_group_get)(GDBusConnection * connection, const gchar * bus_name, const gchar * object_path);
    gchar * (*ptr_g_dbus_address_escape_value)(const gchar * string);
    gboolean (*ptr_g_dbus_is_address)(const gchar * string);
    gboolean (*ptr_g_dbus_is_supported_address)(const gchar * string, GError * * error);
    void (*ptr_g_dbus_address_get_stream)(const gchar * address, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data);
    GIOStream * (*ptr_g_dbus_address_get_stream_finish)(GAsyncResult * res, gchar * * out_guid, GError * * error);
    GIOStream * (*ptr_g_dbus_address_get_stream_sync)(const gchar * address, gchar * * out_guid, GCancellable * cancellable, GError * * error);
    gchar * (*ptr_g_dbus_address_get_for_bus_sync)(GBusType bus_type, GCancellable * cancellable, GError * * error);
    GType (*ptr_g_dbus_auth_observer_get_type)(void);
    GDBusAuthObserver * (*ptr_g_dbus_auth_observer_new)(void);
    gboolean (*ptr_g_dbus_auth_observer_authorize_authenticated_peer)(GDBusAuthObserver * observer, GIOStream * stream, GCredentials * credentials);
    gboolean (*ptr_g_dbus_auth_observer_allow_mechanism)(GDBusAuthObserver * observer, const gchar * mechanism);
    GType (*ptr_g_dbus_connection_get_type)(void);
    void (*ptr_g_bus_get)(GBusType bus_type, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data);
    GDBusConnection * (*ptr_g_bus_get_finish)(GAsyncResult * res, GError * * error);
    GDBusConnection * (*ptr_g_bus_get_sync)(GBusType bus_type, GCancellable * cancellable, GError * * error);
    void (*ptr_g_dbus_connection_new)(GIOStream * stream, const gchar * guid, GDBusConnectionFlags flags, GDBusAuthObserver * observer, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data);
    GDBusConnection * (*ptr_g_dbus_connection_new_finish)(GAsyncResult * res, GError * * error);
    GDBusConnection * (*ptr_g_dbus_connection_new_sync)(GIOStream * stream, const gchar * guid, GDBusConnectionFlags flags, GDBusAuthObserver * observer, GCancellable * cancellable, GError * * error);
    void (*ptr_g_dbus_connection_new_for_address)(const gchar * address, GDBusConnectionFlags flags, GDBusAuthObserver * observer, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data);
    GDBusConnection * (*ptr_g_dbus_connection_new_for_address_finish)(GAsyncResult * res, GError * * error);
    GDBusConnection * (*ptr_g_dbus_connection_new_for_address_sync)(const gchar * address, GDBusConnectionFlags flags, GDBusAuthObserver * observer, GCancellable * cancellable, GError * * error);
    void (*ptr_g_dbus_connection_start_message_processing)(GDBusConnection * connection);
    gboolean (*ptr_g_dbus_connection_is_closed)(GDBusConnection * connection);
    GIOStream * (*ptr_g_dbus_connection_get_stream)(GDBusConnection * connection);
    const gchar * (*ptr_g_dbus_connection_get_guid)(GDBusConnection * connection);
    const gchar * (*ptr_g_dbus_connection_get_unique_name)(GDBusConnection * connection);
    GCredentials * (*ptr_g_dbus_connection_get_peer_credentials)(GDBusConnection * connection);
    guint32 (*ptr_g_dbus_connection_get_last_serial)(GDBusConnection * connection);
    gboolean (*ptr_g_dbus_connection_get_exit_on_close)(GDBusConnection * connection);
    void (*ptr_g_dbus_connection_set_exit_on_close)(GDBusConnection * connection, gboolean exit_on_close);
    GDBusCapabilityFlags (*ptr_g_dbus_connection_get_capabilities)(GDBusConnection * connection);
    GDBusConnectionFlags (*ptr_g_dbus_connection_get_flags)(GDBusConnection * connection);
    void (*ptr_g_dbus_connection_close)(GDBusConnection * connection, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data);
    gboolean (*ptr_g_dbus_connection_close_finish)(GDBusConnection * connection, GAsyncResult * res, GError * * error);
    gboolean (*ptr_g_dbus_connection_close_sync)(GDBusConnection * connection, GCancellable * cancellable, GError * * error);
    void (*ptr_g_dbus_connection_flush)(GDBusConnection * connection, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data);
    gboolean (*ptr_g_dbus_connection_flush_finish)(GDBusConnection * connection, GAsyncResult * res, GError * * error);
    gboolean (*ptr_g_dbus_connection_flush_sync)(GDBusConnection * connection, GCancellable * cancellable, GError * * error);
    gboolean (*ptr_g_dbus_connection_send_message)(GDBusConnection * connection, GDBusMessage * message, GDBusSendMessageFlags flags, volatile guint32 * out_serial, GError * * error);
    void (*ptr_g_dbus_connection_send_message_with_reply)(GDBusConnection * connection, GDBusMessage * message, GDBusSendMessageFlags flags, gint timeout_msec, volatile guint32 * out_serial, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data);
    GDBusMessage * (*ptr_g_dbus_connection_send_message_with_reply_finish)(GDBusConnection * connection, GAsyncResult * res, GError * * error);
    GDBusMessage * (*ptr_g_dbus_connection_send_message_with_reply_sync)(GDBusConnection * connection, GDBusMessage * message, GDBusSendMessageFlags flags, gint timeout_msec, volatile guint32 * out_serial, GCancellable * cancellable, GError * * error);
    gboolean (*ptr_g_dbus_connection_emit_signal)(GDBusConnection * connection, const gchar * destination_bus_name, const gchar * object_path, const gchar * interface_name, const gchar * signal_name, GVariant * parameters, GError * * error);
    void (*ptr_g_dbus_connection_call)(GDBusConnection * connection, const gchar * bus_name, const gchar * object_path, const gchar * interface_name, const gchar * method_name, GVariant * parameters, const GVariantType * reply_type, GDBusCallFlags flags, gint timeout_msec, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data);
    GVariant * (*ptr_g_dbus_connection_call_finish)(GDBusConnection * connection, GAsyncResult * res, GError * * error);
    GVariant * (*ptr_g_dbus_connection_call_sync)(GDBusConnection * connection, const gchar * bus_name, const gchar * object_path, const gchar * interface_name, const gchar * method_name, GVariant * parameters, const GVariantType * reply_type, GDBusCallFlags flags, gint timeout_msec, GCancellable * cancellable, GError * * error);
    void (*ptr_g_dbus_connection_call_with_unix_fd_list)(GDBusConnection * connection, const gchar * bus_name, const gchar * object_path, const gchar * interface_name, const gchar * method_name, GVariant * parameters, const GVariantType * reply_type, GDBusCallFlags flags, gint timeout_msec, GUnixFDList * fd_list, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data);
    GVariant * (*ptr_g_dbus_connection_call_with_unix_fd_list_finish)(GDBusConnection * connection, GUnixFDList * * out_fd_list, GAsyncResult * res, GError * * error);
    GVariant * (*ptr_g_dbus_connection_call_with_unix_fd_list_sync)(GDBusConnection * connection, const gchar * bus_name, const gchar * object_path, const gchar * interface_name, const gchar * method_name, GVariant * parameters, const GVariantType * reply_type, GDBusCallFlags flags, gint timeout_msec, GUnixFDList * fd_list, GUnixFDList * * out_fd_list, GCancellable * cancellable, GError * * error);
    guint (*ptr_g_dbus_connection_register_object)(GDBusConnection * connection, const gchar * object_path, GDBusInterfaceInfo * interface_info, const GDBusInterfaceVTable * vtable, gpointer user_data, GDestroyNotify user_data_free_func, GError * * error);
    guint (*ptr_g_dbus_connection_register_object_with_closures)(GDBusConnection * connection, const gchar * object_path, GDBusInterfaceInfo * interface_info, GClosure * method_call_closure, GClosure * get_property_closure, GClosure * set_property_closure, GError * * error);
    gboolean (*ptr_g_dbus_connection_unregister_object)(GDBusConnection * connection, guint registration_id);
    guint (*ptr_g_dbus_connection_register_subtree)(GDBusConnection * connection, const gchar * object_path, const GDBusSubtreeVTable * vtable, GDBusSubtreeFlags flags, gpointer user_data, GDestroyNotify user_data_free_func, GError * * error);
    gboolean (*ptr_g_dbus_connection_unregister_subtree)(GDBusConnection * connection, guint registration_id);
    guint (*ptr_g_dbus_connection_signal_subscribe)(GDBusConnection * connection, const gchar * sender, const gchar * interface_name, const gchar * member, const gchar * object_path, const gchar * arg0, GDBusSignalFlags flags, GDBusSignalCallback callback, gpointer user_data, GDestroyNotify user_data_free_func);
    void (*ptr_g_dbus_connection_signal_unsubscribe)(GDBusConnection * connection, guint subscription_id);
    guint (*ptr_g_dbus_connection_add_filter)(GDBusConnection * connection, GDBusMessageFilterFunction filter_function, gpointer user_data, GDestroyNotify user_data_free_func);
    void (*ptr_g_dbus_connection_remove_filter)(GDBusConnection * connection, guint filter_id);
    GQuark (*ptr_g_dbus_error_quark)(void);
    gboolean (*ptr_g_dbus_error_is_remote_error)(const GError * error);
    gchar * (*ptr_g_dbus_error_get_remote_error)(const GError * error);
    gboolean (*ptr_g_dbus_error_strip_remote_error)(GError * error);
    gboolean (*ptr_g_dbus_error_register_error)(GQuark error_domain, gint error_code, const gchar * dbus_error_name);
    gboolean (*ptr_g_dbus_error_unregister_error)(GQuark error_domain, gint error_code, const gchar * dbus_error_name);
    void (*ptr_g_dbus_error_register_error_domain)(const gchar * error_domain_quark_name, volatile gsize * quark_volatile, const GDBusErrorEntry * entries, guint num_entries);
    GError * (*ptr_g_dbus_error_new_for_dbus_error)(const gchar * dbus_error_name, const gchar * dbus_error_message);
    void (*ptr_g_dbus_error_set_dbus_error)(GError * * error, const gchar * dbus_error_name, const gchar * dbus_error_message, const gchar * format, ...);
    void (*ptr_g_dbus_error_set_dbus_error_valist)(GError * * error, const gchar * dbus_error_name, const gchar * dbus_error_message, const gchar * format, va_list var_args);
    gchar * (*ptr_g_dbus_error_encode_gerror)(const GError * error);
    GType (*ptr_g_dbus_interface_get_type)(void);
    GDBusInterfaceInfo * (*ptr_g_dbus_interface_get_info)(GDBusInterface * interface_);
    GDBusObject * (*ptr_g_dbus_interface_get_object)(GDBusInterface * interface_);
    void (*ptr_g_dbus_interface_set_object)(GDBusInterface * interface_, GDBusObject * object);
    GDBusObject * (*ptr_g_dbus_interface_dup_object)(GDBusInterface * interface_);
    GType (*ptr_g_dbus_interface_skeleton_get_type)(void);
    GDBusInterfaceSkeletonFlags (*ptr_g_dbus_interface_skeleton_get_flags)(GDBusInterfaceSkeleton * interface_);
    void (*ptr_g_dbus_interface_skeleton_set_flags)(GDBusInterfaceSkeleton * interface_, GDBusInterfaceSkeletonFlags flags);
    GDBusInterfaceInfo * (*ptr_g_dbus_interface_skeleton_get_info)(GDBusInterfaceSkeleton * interface_);
    GDBusInterfaceVTable * (*ptr_g_dbus_interface_skeleton_get_vtable)(GDBusInterfaceSkeleton * interface_);
    GVariant * (*ptr_g_dbus_interface_skeleton_get_properties)(GDBusInterfaceSkeleton * interface_);
    void (*ptr_g_dbus_interface_skeleton_flush)(GDBusInterfaceSkeleton * interface_);
    gboolean (*ptr_g_dbus_interface_skeleton_export)(GDBusInterfaceSkeleton * interface_, GDBusConnection * connection, const gchar * object_path, GError * * error);
    void (*ptr_g_dbus_interface_skeleton_unexport)(GDBusInterfaceSkeleton * interface_);
    void (*ptr_g_dbus_interface_skeleton_unexport_from_connection)(GDBusInterfaceSkeleton * interface_, GDBusConnection * connection);
    GDBusConnection * (*ptr_g_dbus_interface_skeleton_get_connection)(GDBusInterfaceSkeleton * interface_);
    GList * (*ptr_g_dbus_interface_skeleton_get_connections)(GDBusInterfaceSkeleton * interface_);
    gboolean (*ptr_g_dbus_interface_skeleton_has_connection)(GDBusInterfaceSkeleton * interface_, GDBusConnection * connection);
    const gchar * (*ptr_g_dbus_interface_skeleton_get_object_path)(GDBusInterfaceSkeleton * interface_);
    const gchar * (*ptr_g_dbus_annotation_info_lookup)(GDBusAnnotationInfo * * annotations, const gchar * name);
    GDBusMethodInfo * (*ptr_g_dbus_interface_info_lookup_method)(GDBusInterfaceInfo * info, const gchar * name);
    GDBusSignalInfo * (*ptr_g_dbus_interface_info_lookup_signal)(GDBusInterfaceInfo * info, const gchar * name);
    GDBusPropertyInfo * (*ptr_g_dbus_interface_info_lookup_property)(GDBusInterfaceInfo * info, const gchar * name);
    void (*ptr_g_dbus_interface_info_cache_build)(GDBusInterfaceInfo * info);
    void (*ptr_g_dbus_interface_info_cache_release)(GDBusInterfaceInfo * info);
    void (*ptr_g_dbus_interface_info_generate_xml)(GDBusInterfaceInfo * info, guint indent, GString * string_builder);
    GDBusNodeInfo * (*ptr_g_dbus_node_info_new_for_xml)(const gchar * xml_data, GError * * error);
    GDBusInterfaceInfo * (*ptr_g_dbus_node_info_lookup_interface)(GDBusNodeInfo * info, const gchar * name);
    void (*ptr_g_dbus_node_info_generate_xml)(GDBusNodeInfo * info, guint indent, GString * string_builder);
    GDBusNodeInfo * (*ptr_g_dbus_node_info_ref)(GDBusNodeInfo * info);
    GDBusInterfaceInfo * (*ptr_g_dbus_interface_info_ref)(GDBusInterfaceInfo * info);
    GDBusMethodInfo * (*ptr_g_dbus_method_info_ref)(GDBusMethodInfo * info);
    GDBusSignalInfo * (*ptr_g_dbus_signal_info_ref)(GDBusSignalInfo * info);
    GDBusPropertyInfo * (*ptr_g_dbus_property_info_ref)(GDBusPropertyInfo * info);
    GDBusArgInfo * (*ptr_g_dbus_arg_info_ref)(GDBusArgInfo * info);
    GDBusAnnotationInfo * (*ptr_g_dbus_annotation_info_ref)(GDBusAnnotationInfo * info);
    void (*ptr_g_dbus_node_info_unref)(GDBusNodeInfo * info);
    void (*ptr_g_dbus_interface_info_unref)(GDBusInterfaceInfo * info);
    void (*ptr_g_dbus_method_info_unref)(GDBusMethodInfo * info);
    void (*ptr_g_dbus_signal_info_unref)(GDBusSignalInfo * info);
    void (*ptr_g_dbus_property_info_unref)(GDBusPropertyInfo * info);
    void (*ptr_g_dbus_arg_info_unref)(GDBusArgInfo * info);
    void (*ptr_g_dbus_annotation_info_unref)(GDBusAnnotationInfo * info);
    GType (*ptr_g_dbus_node_info_get_type)(void);
    GType (*ptr_g_dbus_interface_info_get_type)(void);
    GType (*ptr_g_dbus_method_info_get_type)(void);
    GType (*ptr_g_dbus_signal_info_get_type)(void);
    GType (*ptr_g_dbus_property_info_get_type)(void);
    GType (*ptr_g_dbus_arg_info_get_type)(void);
    GType (*ptr_g_dbus_annotation_info_get_type)(void);
    GType (*ptr_g_dbus_menu_model_get_type)(void);
    GDBusMenuModel * (*ptr_g_dbus_menu_model_get)(GDBusConnection * connection, const gchar * bus_name, const gchar * object_path);
    GType (*ptr_g_dbus_message_get_type)(void);
    GDBusMessage * (*ptr_g_dbus_message_new)(void);
    GDBusMessage * (*ptr_g_dbus_message_new_signal)(const gchar * path, const gchar * interface_, const gchar * signal);
    GDBusMessage * (*ptr_g_dbus_message_new_method_call)(const gchar * name, const gchar * path, const gchar * interface_, const gchar * method);
    GDBusMessage * (*ptr_g_dbus_message_new_method_reply)(GDBusMessage * method_call_message);
    GDBusMessage * (*ptr_g_dbus_message_new_method_error)(GDBusMessage * method_call_message, const gchar * error_name, const gchar * error_message_format, ...);
    GDBusMessage * (*ptr_g_dbus_message_new_method_error_valist)(GDBusMessage * method_call_message, const gchar * error_name, const gchar * error_message_format, va_list var_args);
    GDBusMessage * (*ptr_g_dbus_message_new_method_error_literal)(GDBusMessage * method_call_message, const gchar * error_name, const gchar * error_message);
    gchar * (*ptr_g_dbus_message_print)(GDBusMessage * message, guint indent);
    gboolean (*ptr_g_dbus_message_get_locked)(GDBusMessage * message);
    void (*ptr_g_dbus_message_lock)(GDBusMessage * message);
    GDBusMessage * (*ptr_g_dbus_message_copy)(GDBusMessage * message, GError * * error);
    GDBusMessageByteOrder (*ptr_g_dbus_message_get_byte_order)(GDBusMessage * message);
    void (*ptr_g_dbus_message_set_byte_order)(GDBusMessage * message, GDBusMessageByteOrder byte_order);
    GDBusMessageType (*ptr_g_dbus_message_get_message_type)(GDBusMessage * message);
    void (*ptr_g_dbus_message_set_message_type)(GDBusMessage * message, GDBusMessageType type);
    GDBusMessageFlags (*ptr_g_dbus_message_get_flags)(GDBusMessage * message);
    void (*ptr_g_dbus_message_set_flags)(GDBusMessage * message, GDBusMessageFlags flags);
    guint32 (*ptr_g_dbus_message_get_serial)(GDBusMessage * message);
    void (*ptr_g_dbus_message_set_serial)(GDBusMessage * message, guint32 serial);
    GVariant * (*ptr_g_dbus_message_get_header)(GDBusMessage * message, GDBusMessageHeaderField header_field);
    void (*ptr_g_dbus_message_set_header)(GDBusMessage * message, GDBusMessageHeaderField header_field, GVariant * value);
    guchar * (*ptr_g_dbus_message_get_header_fields)(GDBusMessage * message);
    GVariant * (*ptr_g_dbus_message_get_body)(GDBusMessage * message);
    void (*ptr_g_dbus_message_set_body)(GDBusMessage * message, GVariant * body);
    GUnixFDList * (*ptr_g_dbus_message_get_unix_fd_list)(GDBusMessage * message);
    void (*ptr_g_dbus_message_set_unix_fd_list)(GDBusMessage * message, GUnixFDList * fd_list);
    guint32 (*ptr_g_dbus_message_get_reply_serial)(GDBusMessage * message);
    void (*ptr_g_dbus_message_set_reply_serial)(GDBusMessage * message, guint32 value);
    const gchar * (*ptr_g_dbus_message_get_interface)(GDBusMessage * message);
    void (*ptr_g_dbus_message_set_interface)(GDBusMessage * message, const gchar * value);
    const gchar * (*ptr_g_dbus_message_get_member)(GDBusMessage * message);
    void (*ptr_g_dbus_message_set_member)(GDBusMessage * message, const gchar * value);
    const gchar * (*ptr_g_dbus_message_get_path)(GDBusMessage * message);
    void (*ptr_g_dbus_message_set_path)(GDBusMessage * message, const gchar * value);
    const gchar * (*ptr_g_dbus_message_get_sender)(GDBusMessage * message);
    void (*ptr_g_dbus_message_set_sender)(GDBusMessage * message, const gchar * value);
    const gchar * (*ptr_g_dbus_message_get_destination)(GDBusMessage * message);
    void (*ptr_g_dbus_message_set_destination)(GDBusMessage * message, const gchar * value);
    const gchar * (*ptr_g_dbus_message_get_error_name)(GDBusMessage * message);
    void (*ptr_g_dbus_message_set_error_name)(GDBusMessage * message, const gchar * value);
    const gchar * (*ptr_g_dbus_message_get_signature)(GDBusMessage * message);
    void (*ptr_g_dbus_message_set_signature)(GDBusMessage * message, const gchar * value);
    guint32 (*ptr_g_dbus_message_get_num_unix_fds)(GDBusMessage * message);
    void (*ptr_g_dbus_message_set_num_unix_fds)(GDBusMessage * message, guint32 value);
    const gchar * (*ptr_g_dbus_message_get_arg0)(GDBusMessage * message);
    const gchar * (*ptr_g_dbus_message_get_arg0_path)(GDBusMessage * message);
    GDBusMessage * (*ptr_g_dbus_message_new_from_blob)(guchar * blob, gsize blob_len, GDBusCapabilityFlags capabilities, GError * * error);
    gssize (*ptr_g_dbus_message_bytes_needed)(guchar * blob, gsize blob_len, GError * * error);
    guchar * (*ptr_g_dbus_message_to_blob)(GDBusMessage * message, gsize * out_size, GDBusCapabilityFlags capabilities, GError * * error);
    gboolean (*ptr_g_dbus_message_to_gerror)(GDBusMessage * message, GError * * error);
    GType (*ptr_g_dbus_method_invocation_get_type)(void);
    const gchar * (*ptr_g_dbus_method_invocation_get_sender)(GDBusMethodInvocation * invocation);
    const gchar * (*ptr_g_dbus_method_invocation_get_object_path)(GDBusMethodInvocation * invocation);
    const gchar * (*ptr_g_dbus_method_invocation_get_interface_name)(GDBusMethodInvocation * invocation);
    const gchar * (*ptr_g_dbus_method_invocation_get_method_name)(GDBusMethodInvocation * invocation);
    const GDBusMethodInfo * (*ptr_g_dbus_method_invocation_get_method_info)(GDBusMethodInvocation * invocation);
    const GDBusPropertyInfo * (*ptr_g_dbus_method_invocation_get_property_info)(GDBusMethodInvocation * invocation);
    GDBusConnection * (*ptr_g_dbus_method_invocation_get_connection)(GDBusMethodInvocation * invocation);
    GDBusMessage * (*ptr_g_dbus_method_invocation_get_message)(GDBusMethodInvocation * invocation);
    GVariant * (*ptr_g_dbus_method_invocation_get_parameters)(GDBusMethodInvocation * invocation);
    gpointer (*ptr_g_dbus_method_invocation_get_user_data)(GDBusMethodInvocation * invocation);
    void (*ptr_g_dbus_method_invocation_return_value)(GDBusMethodInvocation * invocation, GVariant * parameters);
    void (*ptr_g_dbus_method_invocation_return_value_with_unix_fd_list)(GDBusMethodInvocation * invocation, GVariant * parameters, GUnixFDList * fd_list);
    void (*ptr_g_dbus_method_invocation_return_error)(GDBusMethodInvocation * invocation, GQuark domain, gint code, const gchar * format, ...);
    void (*ptr_g_dbus_method_invocation_return_error_valist)(GDBusMethodInvocation * invocation, GQuark domain, gint code, const gchar * format, va_list var_args);
    void (*ptr_g_dbus_method_invocation_return_error_literal)(GDBusMethodInvocation * invocation, GQuark domain, gint code, const gchar * message);
    void (*ptr_g_dbus_method_invocation_return_gerror)(GDBusMethodInvocation * invocation, const GError * error);
    void (*ptr_g_dbus_method_invocation_take_error)(GDBusMethodInvocation * invocation, GError * error);
    void (*ptr_g_dbus_method_invocation_return_dbus_error)(GDBusMethodInvocation * invocation, const gchar * error_name, const gchar * error_message);
    guint (*ptr_g_bus_own_name)(GBusType bus_type, const gchar * name, GBusNameOwnerFlags flags, GBusAcquiredCallback bus_acquired_handler, GBusNameAcquiredCallback name_acquired_handler, GBusNameLostCallback name_lost_handler, gpointer user_data, GDestroyNotify user_data_free_func);
    guint (*ptr_g_bus_own_name_on_connection)(GDBusConnection * connection, const gchar * name, GBusNameOwnerFlags flags, GBusNameAcquiredCallback name_acquired_handler, GBusNameLostCallback name_lost_handler, gpointer user_data, GDestroyNotify user_data_free_func);
    guint (*ptr_g_bus_own_name_with_closures)(GBusType bus_type, const gchar * name, GBusNameOwnerFlags flags, GClosure * bus_acquired_closure, GClosure * name_acquired_closure, GClosure * name_lost_closure);
    guint (*ptr_g_bus_own_name_on_connection_with_closures)(GDBusConnection * connection, const gchar * name, GBusNameOwnerFlags flags, GClosure * name_acquired_closure, GClosure * name_lost_closure);
    void (*ptr_g_bus_unown_name)(guint owner_id);
    guint (*ptr_g_bus_watch_name)(GBusType bus_type, const gchar * name, GBusNameWatcherFlags flags, GBusNameAppearedCallback name_appeared_handler, GBusNameVanishedCallback name_vanished_handler, gpointer user_data, GDestroyNotify user_data_free_func);
    guint (*ptr_g_bus_watch_name_on_connection)(GDBusConnection * connection, const gchar * name, GBusNameWatcherFlags flags, GBusNameAppearedCallback name_appeared_handler, GBusNameVanishedCallback name_vanished_handler, gpointer user_data, GDestroyNotify user_data_free_func);
    guint (*ptr_g_bus_watch_name_with_closures)(GBusType bus_type, const gchar * name, GBusNameWatcherFlags flags, GClosure * name_appeared_closure, GClosure * name_vanished_closure);
    guint (*ptr_g_bus_watch_name_on_connection_with_closures)(GDBusConnection * connection, const gchar * name, GBusNameWatcherFlags flags, GClosure * name_appeared_closure, GClosure * name_vanished_closure);
    void (*ptr_g_bus_unwatch_name)(guint watcher_id);
    GType (*ptr_g_dbus_object_get_type)(void);
    const gchar * (*ptr_g_dbus_object_get_object_path)(GDBusObject * object);
    GList * (*ptr_g_dbus_object_get_interfaces)(GDBusObject * object);
    GDBusInterface * (*ptr_g_dbus_object_get_interface)(GDBusObject * object, const gchar * interface_name);
    GType (*ptr_g_dbus_object_manager_get_type)(void);
    const gchar * (*ptr_g_dbus_object_manager_get_object_path)(GDBusObjectManager * manager);
    GList * (*ptr_g_dbus_object_manager_get_objects)(GDBusObjectManager * manager);
    GDBusObject * (*ptr_g_dbus_object_manager_get_object)(GDBusObjectManager * manager, const gchar * object_path);
    GDBusInterface * (*ptr_g_dbus_object_manager_get_interface)(GDBusObjectManager * manager, const gchar * object_path, const gchar * interface_name);
    GType (*ptr_g_dbus_object_manager_client_get_type)(void);
    void (*ptr_g_dbus_object_manager_client_new)(GDBusConnection * connection, GDBusObjectManagerClientFlags flags, const gchar * name, const gchar * object_path, GDBusProxyTypeFunc get_proxy_type_func, gpointer get_proxy_type_user_data, GDestroyNotify get_proxy_type_destroy_notify, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data);
    GDBusObjectManager * (*ptr_g_dbus_object_manager_client_new_finish)(GAsyncResult * res, GError * * error);
    GDBusObjectManager * (*ptr_g_dbus_object_manager_client_new_sync)(GDBusConnection * connection, GDBusObjectManagerClientFlags flags, const gchar * name, const gchar * object_path, GDBusProxyTypeFunc get_proxy_type_func, gpointer get_proxy_type_user_data, GDestroyNotify get_proxy_type_destroy_notify, GCancellable * cancellable, GError * * error);
    void (*ptr_g_dbus_object_manager_client_new_for_bus)(GBusType bus_type, GDBusObjectManagerClientFlags flags, const gchar * name, const gchar * object_path, GDBusProxyTypeFunc get_proxy_type_func, gpointer get_proxy_type_user_data, GDestroyNotify get_proxy_type_destroy_notify, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data);
    GDBusObjectManager * (*ptr_g_dbus_object_manager_client_new_for_bus_finish)(GAsyncResult * res, GError * * error);
    GDBusObjectManager * (*ptr_g_dbus_object_manager_client_new_for_bus_sync)(GBusType bus_type, GDBusObjectManagerClientFlags flags, const gchar * name, const gchar * object_path, GDBusProxyTypeFunc get_proxy_type_func, gpointer get_proxy_type_user_data, GDestroyNotify get_proxy_type_destroy_notify, GCancellable * cancellable, GError * * error);
    GDBusConnection * (*ptr_g_dbus_object_manager_client_get_connection)(GDBusObjectManagerClient * manager);
    GDBusObjectManagerClientFlags (*ptr_g_dbus_object_manager_client_get_flags)(GDBusObjectManagerClient * manager);
    const gchar * (*ptr_g_dbus_object_manager_client_get_name)(GDBusObjectManagerClient * manager);
    gchar * (*ptr_g_dbus_object_manager_client_get_name_owner)(GDBusObjectManagerClient * manager);
    GType (*ptr_g_dbus_object_manager_server_get_type)(void);
    GDBusObjectManagerServer * (*ptr_g_dbus_object_manager_server_new)(const gchar * object_path);
    GDBusConnection * (*ptr_g_dbus_object_manager_server_get_connection)(GDBusObjectManagerServer * manager);
    void (*ptr_g_dbus_object_manager_server_set_connection)(GDBusObjectManagerServer * manager, GDBusConnection * connection);
    void (*ptr_g_dbus_object_manager_server_export)(GDBusObjectManagerServer * manager, GDBusObjectSkeleton * object);
    void (*ptr_g_dbus_object_manager_server_export_uniquely)(GDBusObjectManagerServer * manager, GDBusObjectSkeleton * object);
    gboolean (*ptr_g_dbus_object_manager_server_is_exported)(GDBusObjectManagerServer * manager, GDBusObjectSkeleton * object);
    gboolean (*ptr_g_dbus_object_manager_server_unexport)(GDBusObjectManagerServer * manager, const gchar * object_path);
    GType (*ptr_g_dbus_object_proxy_get_type)(void);
    GDBusObjectProxy * (*ptr_g_dbus_object_proxy_new)(GDBusConnection * connection, const gchar * object_path);
    GDBusConnection * (*ptr_g_dbus_object_proxy_get_connection)(GDBusObjectProxy * proxy);
    GType (*ptr_g_dbus_object_skeleton_get_type)(void);
    GDBusObjectSkeleton * (*ptr_g_dbus_object_skeleton_new)(const gchar * object_path);
    void (*ptr_g_dbus_object_skeleton_flush)(GDBusObjectSkeleton * object);
    void (*ptr_g_dbus_object_skeleton_add_interface)(GDBusObjectSkeleton * object, GDBusInterfaceSkeleton * interface_);
    void (*ptr_g_dbus_object_skeleton_remove_interface)(GDBusObjectSkeleton * object, GDBusInterfaceSkeleton * interface_);
    void (*ptr_g_dbus_object_skeleton_remove_interface_by_name)(GDBusObjectSkeleton * object, const gchar * interface_name);
    void (*ptr_g_dbus_object_skeleton_set_object_path)(GDBusObjectSkeleton * object, const gchar * object_path);
    GType (*ptr_g_dbus_proxy_get_type)(void);
    void (*ptr_g_dbus_proxy_new)(GDBusConnection * connection, GDBusProxyFlags flags, GDBusInterfaceInfo * info, const gchar * name, const gchar * object_path, const gchar * interface_name, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data);
    GDBusProxy * (*ptr_g_dbus_proxy_new_finish)(GAsyncResult * res, GError * * error);
    GDBusProxy * (*ptr_g_dbus_proxy_new_sync)(GDBusConnection * connection, GDBusProxyFlags flags, GDBusInterfaceInfo * info, const gchar * name, const gchar * object_path, const gchar * interface_name, GCancellable * cancellable, GError * * error);
    void (*ptr_g_dbus_proxy_new_for_bus)(GBusType bus_type, GDBusProxyFlags flags, GDBusInterfaceInfo * info, const gchar * name, const gchar * object_path, const gchar * interface_name, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data);
    GDBusProxy * (*ptr_g_dbus_proxy_new_for_bus_finish)(GAsyncResult * res, GError * * error);
    GDBusProxy * (*ptr_g_dbus_proxy_new_for_bus_sync)(GBusType bus_type, GDBusProxyFlags flags, GDBusInterfaceInfo * info, const gchar * name, const gchar * object_path, const gchar * interface_name, GCancellable * cancellable, GError * * error);
    GDBusConnection * (*ptr_g_dbus_proxy_get_connection)(GDBusProxy * proxy);
    GDBusProxyFlags (*ptr_g_dbus_proxy_get_flags)(GDBusProxy * proxy);
    const gchar * (*ptr_g_dbus_proxy_get_name)(GDBusProxy * proxy);
    gchar * (*ptr_g_dbus_proxy_get_name_owner)(GDBusProxy * proxy);
    const gchar * (*ptr_g_dbus_proxy_get_object_path)(GDBusProxy * proxy);
    const gchar * (*ptr_g_dbus_proxy_get_interface_name)(GDBusProxy * proxy);
    gint (*ptr_g_dbus_proxy_get_default_timeout)(GDBusProxy * proxy);
    void (*ptr_g_dbus_proxy_set_default_timeout)(GDBusProxy * proxy, gint timeout_msec);
    GDBusInterfaceInfo * (*ptr_g_dbus_proxy_get_interface_info)(GDBusProxy * proxy);
    void (*ptr_g_dbus_proxy_set_interface_info)(GDBusProxy * proxy, GDBusInterfaceInfo * info);
    GVariant * (*ptr_g_dbus_proxy_get_cached_property)(GDBusProxy * proxy, const gchar * property_name);
    void (*ptr_g_dbus_proxy_set_cached_property)(GDBusProxy * proxy, const gchar * property_name, GVariant * value);
    gchar * * (*ptr_g_dbus_proxy_get_cached_property_names)(GDBusProxy * proxy);
    void (*ptr_g_dbus_proxy_call)(GDBusProxy * proxy, const gchar * method_name, GVariant * parameters, GDBusCallFlags flags, gint timeout_msec, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data);
    GVariant * (*ptr_g_dbus_proxy_call_finish)(GDBusProxy * proxy, GAsyncResult * res, GError * * error);
    GVariant * (*ptr_g_dbus_proxy_call_sync)(GDBusProxy * proxy, const gchar * method_name, GVariant * parameters, GDBusCallFlags flags, gint timeout_msec, GCancellable * cancellable, GError * * error);
    void (*ptr_g_dbus_proxy_call_with_unix_fd_list)(GDBusProxy * proxy, const gchar * method_name, GVariant * parameters, GDBusCallFlags flags, gint timeout_msec, GUnixFDList * fd_list, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data);
    GVariant * (*ptr_g_dbus_proxy_call_with_unix_fd_list_finish)(GDBusProxy * proxy, GUnixFDList * * out_fd_list, GAsyncResult * res, GError * * error);
    GVariant * (*ptr_g_dbus_proxy_call_with_unix_fd_list_sync)(GDBusProxy * proxy, const gchar * method_name, GVariant * parameters, GDBusCallFlags flags, gint timeout_msec, GUnixFDList * fd_list, GUnixFDList * * out_fd_list, GCancellable * cancellable, GError * * error);
    GType (*ptr_g_dbus_server_get_type)(void);
    GDBusServer * (*ptr_g_dbus_server_new_sync)(const gchar * address, GDBusServerFlags flags, const gchar * guid, GDBusAuthObserver * observer, GCancellable * cancellable, GError * * error);
    const gchar * (*ptr_g_dbus_server_get_client_address)(GDBusServer * server);
    const gchar * (*ptr_g_dbus_server_get_guid)(GDBusServer * server);
    GDBusServerFlags (*ptr_g_dbus_server_get_flags)(GDBusServer * server);
    void (*ptr_g_dbus_server_start)(GDBusServer * server);
    void (*ptr_g_dbus_server_stop)(GDBusServer * server);
    gboolean (*ptr_g_dbus_server_is_active)(GDBusServer * server);
    gboolean (*ptr_g_dbus_is_guid)(const gchar * string);
    gchar * (*ptr_g_dbus_generate_guid)(void);
    gboolean (*ptr_g_dbus_is_name)(const gchar * string);
    gboolean (*ptr_g_dbus_is_unique_name)(const gchar * string);
    gboolean (*ptr_g_dbus_is_member_name)(const gchar * string);
    gboolean (*ptr_g_dbus_is_interface_name)(const gchar * string);
    gboolean (*ptr_g_dbus_is_error_name)(const gchar * string);
    void (*ptr_g_dbus_gvariant_to_gvalue)(GVariant * value, GValue * out_gvalue);
    GVariant * (*ptr_g_dbus_gvalue_to_gvariant)(const GValue * gvalue, const GVariantType * type);
    gchar * (*ptr_g_dbus_escape_object_path_bytestring)(const guint8 * bytes);
    gchar * (*ptr_g_dbus_escape_object_path)(const gchar * s);
    guint8 * (*ptr_g_dbus_unescape_object_path)(const gchar * s);
    GType (*ptr_g_debug_controller_get_type)(void);
    gboolean (*ptr_g_debug_controller_get_debug_enabled)(GDebugController * self);
    void (*ptr_g_debug_controller_set_debug_enabled)(GDebugController * self, gboolean debug_enabled);
    GType (*ptr_g_debug_controller_dbus_get_type)(void);
    GDebugControllerDBus * (*ptr_g_debug_controller_dbus_new)(GDBusConnection * connection, GCancellable * cancellable, GError * * error);
    void (*ptr_g_debug_controller_dbus_stop)(GDebugControllerDBus * self);
    GType (*ptr_g_drive_get_type)(void);
    char * (*ptr_g_drive_get_name)(GDrive * drive);
    GIcon * (*ptr_g_drive_get_icon)(GDrive * drive);
    GIcon * (*ptr_g_drive_get_symbolic_icon)(GDrive * drive);
    gboolean (*ptr_g_drive_has_volumes)(GDrive * drive);
    GList * (*ptr_g_drive_get_volumes)(GDrive * drive);
    gboolean (*ptr_g_drive_is_removable)(GDrive * drive);
    gboolean (*ptr_g_drive_is_media_removable)(GDrive * drive);
    gboolean (*ptr_g_drive_has_media)(GDrive * drive);
    gboolean (*ptr_g_drive_is_media_check_automatic)(GDrive * drive);
    gboolean (*ptr_g_drive_can_poll_for_media)(GDrive * drive);
    gboolean (*ptr_g_drive_can_eject)(GDrive * drive);
    void (*ptr_g_drive_eject)(GDrive * drive, GMountUnmountFlags flags, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data);
    gboolean (*ptr_g_drive_eject_finish)(GDrive * drive, GAsyncResult * result, GError * * error);
    void (*ptr_g_drive_poll_for_media)(GDrive * drive, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data);
    gboolean (*ptr_g_drive_poll_for_media_finish)(GDrive * drive, GAsyncResult * result, GError * * error);
    char * (*ptr_g_drive_get_identifier)(GDrive * drive, const char * kind);
    char * * (*ptr_g_drive_enumerate_identifiers)(GDrive * drive);
    GDriveStartStopType (*ptr_g_drive_get_start_stop_type)(GDrive * drive);
    gboolean (*ptr_g_drive_can_start)(GDrive * drive);
    gboolean (*ptr_g_drive_can_start_degraded)(GDrive * drive);
    void (*ptr_g_drive_start)(GDrive * drive, GDriveStartFlags flags, GMountOperation * mount_operation, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data);
    gboolean (*ptr_g_drive_start_finish)(GDrive * drive, GAsyncResult * result, GError * * error);
    gboolean (*ptr_g_drive_can_stop)(GDrive * drive);
    void (*ptr_g_drive_stop)(GDrive * drive, GMountUnmountFlags flags, GMountOperation * mount_operation, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data);
    gboolean (*ptr_g_drive_stop_finish)(GDrive * drive, GAsyncResult * result, GError * * error);
    void (*ptr_g_drive_eject_with_operation)(GDrive * drive, GMountUnmountFlags flags, GMountOperation * mount_operation, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data);
    gboolean (*ptr_g_drive_eject_with_operation_finish)(GDrive * drive, GAsyncResult * result, GError * * error);
    const gchar * (*ptr_g_drive_get_sort_key)(GDrive * drive);
    GType (*ptr_g_dtls_connection_get_type)(void);
    void (*ptr_g_dtls_connection_set_database)(GDtlsConnection * conn, GTlsDatabase * database);
    GTlsDatabase * (*ptr_g_dtls_connection_get_database)(GDtlsConnection * conn);
    void (*ptr_g_dtls_connection_set_certificate)(GDtlsConnection * conn, GTlsCertificate * certificate);
    GTlsCertificate * (*ptr_g_dtls_connection_get_certificate)(GDtlsConnection * conn);
    void (*ptr_g_dtls_connection_set_interaction)(GDtlsConnection * conn, GTlsInteraction * interaction);
    GTlsInteraction * (*ptr_g_dtls_connection_get_interaction)(GDtlsConnection * conn);
    GTlsCertificate * (*ptr_g_dtls_connection_get_peer_certificate)(GDtlsConnection * conn);
    GTlsCertificateFlags (*ptr_g_dtls_connection_get_peer_certificate_errors)(GDtlsConnection * conn);
    void (*ptr_g_dtls_connection_set_require_close_notify)(GDtlsConnection * conn, gboolean require_close_notify);
    gboolean (*ptr_g_dtls_connection_get_require_close_notify)(GDtlsConnection * conn);
    void (*ptr_g_dtls_connection_set_rehandshake_mode)(GDtlsConnection * conn, GTlsRehandshakeMode mode);
    GTlsRehandshakeMode (*ptr_g_dtls_connection_get_rehandshake_mode)(GDtlsConnection * conn);
    gboolean (*ptr_g_dtls_connection_handshake)(GDtlsConnection * conn, GCancellable * cancellable, GError * * error);
    void (*ptr_g_dtls_connection_handshake_async)(GDtlsConnection * conn, int io_priority, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data);
    gboolean (*ptr_g_dtls_connection_handshake_finish)(GDtlsConnection * conn, GAsyncResult * result, GError * * error);
    gboolean (*ptr_g_dtls_connection_shutdown)(GDtlsConnection * conn, gboolean shutdown_read, gboolean shutdown_write, GCancellable * cancellable, GError * * error);
    void (*ptr_g_dtls_connection_shutdown_async)(GDtlsConnection * conn, gboolean shutdown_read, gboolean shutdown_write, int io_priority, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data);
    gboolean (*ptr_g_dtls_connection_shutdown_finish)(GDtlsConnection * conn, GAsyncResult * result, GError * * error);
    gboolean (*ptr_g_dtls_connection_close)(GDtlsConnection * conn, GCancellable * cancellable, GError * * error);
    void (*ptr_g_dtls_connection_close_async)(GDtlsConnection * conn, int io_priority, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data);
    gboolean (*ptr_g_dtls_connection_close_finish)(GDtlsConnection * conn, GAsyncResult * result, GError * * error);
    gboolean (*ptr_g_dtls_connection_emit_accept_certificate)(GDtlsConnection * conn, GTlsCertificate * peer_cert, GTlsCertificateFlags errors);
    void (*ptr_g_dtls_connection_set_advertised_protocols)(GDtlsConnection * conn, const gchar * const * protocols);
    const gchar * (*ptr_g_dtls_connection_get_negotiated_protocol)(GDtlsConnection * conn);
    gboolean (*ptr_g_dtls_connection_get_channel_binding_data)(GDtlsConnection * conn, GTlsChannelBindingType type, GByteArray * data, GError * * error);
    GTlsProtocolVersion (*ptr_g_dtls_connection_get_protocol_version)(GDtlsConnection * conn);
    gchar * (*ptr_g_dtls_connection_get_ciphersuite_name)(GDtlsConnection * conn);
    GType (*ptr_g_dtls_client_connection_get_type)(void);
    GDatagramBased * (*ptr_g_dtls_client_connection_new)(GDatagramBased * base_socket, GSocketConnectable * server_identity, GError * * error);
    GTlsCertificateFlags (*ptr_g_dtls_client_connection_get_validation_flags)(GDtlsClientConnection * conn);
    void (*ptr_g_dtls_client_connection_set_validation_flags)(GDtlsClientConnection * conn, GTlsCertificateFlags flags);
    GSocketConnectable * (*ptr_g_dtls_client_connection_get_server_identity)(GDtlsClientConnection * conn);
    void (*ptr_g_dtls_client_connection_set_server_identity)(GDtlsClientConnection * conn, GSocketConnectable * identity);
    GList * (*ptr_g_dtls_client_connection_get_accepted_cas)(GDtlsClientConnection * conn);
    GType (*ptr_g_dtls_server_connection_get_type)(void);
    GDatagramBased * (*ptr_g_dtls_server_connection_new)(GDatagramBased * base_socket, GTlsCertificate * certificate, GError * * error);
    GType (*ptr_g_icon_get_type)(void);
    guint (*ptr_g_icon_hash)(gconstpointer icon);
    gboolean (*ptr_g_icon_equal)(GIcon * icon1, GIcon * icon2);
    gchar * (*ptr_g_icon_to_string)(GIcon * icon);
    GIcon * (*ptr_g_icon_new_for_string)(const gchar * str, GError * * error);
    GVariant * (*ptr_g_icon_serialize)(GIcon * icon);
    GIcon * (*ptr_g_icon_deserialize)(GVariant * value);
    GType (*ptr_g_emblem_get_type)(void);
    GEmblem * (*ptr_g_emblem_new)(GIcon * icon);
    GEmblem * (*ptr_g_emblem_new_with_origin)(GIcon * icon, GEmblemOrigin origin);
    GIcon * (*ptr_g_emblem_get_icon)(GEmblem * emblem);
    GEmblemOrigin (*ptr_g_emblem_get_origin)(GEmblem * emblem);
    GType (*ptr_g_emblemed_icon_get_type)(void);
    GIcon * (*ptr_g_emblemed_icon_new)(GIcon * icon, GEmblem * emblem);
    GIcon * (*ptr_g_emblemed_icon_get_icon)(GEmblemedIcon * emblemed);
    GList * (*ptr_g_emblemed_icon_get_emblems)(GEmblemedIcon * emblemed);
    void (*ptr_g_emblemed_icon_add_emblem)(GEmblemedIcon * emblemed, GEmblem * emblem);
    void (*ptr_g_emblemed_icon_clear_emblems)(GEmblemedIcon * emblemed);
    GType (*ptr_g_file_get_type)(void);
    GFile * (*ptr_g_file_new_for_path)(const char * path);
    GFile * (*ptr_g_file_new_for_uri)(const char * uri);
    GFile * (*ptr_g_file_new_for_commandline_arg)(const char * arg);
    GFile * (*ptr_g_file_new_for_commandline_arg_and_cwd)(const gchar * arg, const gchar * cwd);
    GFile * (*ptr_g_file_new_tmp)(const char * tmpl, GFileIOStream * * iostream, GError * * error);
    void (*ptr_g_file_new_tmp_async)(const char * tmpl, int io_priority, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data);
    GFile * (*ptr_g_file_new_tmp_finish)(GAsyncResult * result, GFileIOStream * * iostream, GError * * error);
    void (*ptr_g_file_new_tmp_dir_async)(const char * tmpl, int io_priority, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data);
    GFile * (*ptr_g_file_new_tmp_dir_finish)(GAsyncResult * result, GError * * error);
    GFile * (*ptr_g_file_parse_name)(const char * parse_name);
    GFile * (*ptr_g_file_new_build_filenamev)(const gchar * const * args);
    GFile * (*ptr_g_file_dup)(GFile * file);
    guint (*ptr_g_file_hash)(gconstpointer file);
    gboolean (*ptr_g_file_equal)(GFile * file1, GFile * file2);
    char * (*ptr_g_file_get_basename)(GFile * file);
    char * (*ptr_g_file_get_path)(GFile * file);
    const char * (*ptr_g_file_peek_path)(GFile * file);
    char * (*ptr_g_file_get_uri)(GFile * file);
    char * (*ptr_g_file_get_parse_name)(GFile * file);
    GFile * (*ptr_g_file_get_parent)(GFile * file);
    gboolean (*ptr_g_file_has_parent)(GFile * file, GFile * parent);
    GFile * (*ptr_g_file_get_child)(GFile * file, const char * name);
    GFile * (*ptr_g_file_get_child_for_display_name)(GFile * file, const char * display_name, GError * * error);
    gboolean (*ptr_g_file_has_prefix)(GFile * file, GFile * prefix);
    char * (*ptr_g_file_get_relative_path)(GFile * parent, GFile * descendant);
    GFile * (*ptr_g_file_resolve_relative_path)(GFile * file, const char * relative_path);
    gboolean (*ptr_g_file_is_native)(GFile * file);
    gboolean (*ptr_g_file_has_uri_scheme)(GFile * file, const char * uri_scheme);
    char * (*ptr_g_file_get_uri_scheme)(GFile * file);
    GFileInputStream * (*ptr_g_file_read)(GFile * file, GCancellable * cancellable, GError * * error);
    void (*ptr_g_file_read_async)(GFile * file, int io_priority, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data);
    GFileInputStream * (*ptr_g_file_read_finish)(GFile * file, GAsyncResult * res, GError * * error);
    GFileOutputStream * (*ptr_g_file_append_to)(GFile * file, GFileCreateFlags flags, GCancellable * cancellable, GError * * error);
    GFileOutputStream * (*ptr_g_file_create)(GFile * file, GFileCreateFlags flags, GCancellable * cancellable, GError * * error);
    GFileOutputStream * (*ptr_g_file_replace)(GFile * file, const char * etag, gboolean make_backup, GFileCreateFlags flags, GCancellable * cancellable, GError * * error);
    void (*ptr_g_file_append_to_async)(GFile * file, GFileCreateFlags flags, int io_priority, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data);
    GFileOutputStream * (*ptr_g_file_append_to_finish)(GFile * file, GAsyncResult * res, GError * * error);
    void (*ptr_g_file_create_async)(GFile * file, GFileCreateFlags flags, int io_priority, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data);
    GFileOutputStream * (*ptr_g_file_create_finish)(GFile * file, GAsyncResult * res, GError * * error);
    void (*ptr_g_file_replace_async)(GFile * file, const char * etag, gboolean make_backup, GFileCreateFlags flags, int io_priority, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data);
    GFileOutputStream * (*ptr_g_file_replace_finish)(GFile * file, GAsyncResult * res, GError * * error);
    GFileIOStream * (*ptr_g_file_open_readwrite)(GFile * file, GCancellable * cancellable, GError * * error);
    void (*ptr_g_file_open_readwrite_async)(GFile * file, int io_priority, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data);
    GFileIOStream * (*ptr_g_file_open_readwrite_finish)(GFile * file, GAsyncResult * res, GError * * error);
    GFileIOStream * (*ptr_g_file_create_readwrite)(GFile * file, GFileCreateFlags flags, GCancellable * cancellable, GError * * error);
    void (*ptr_g_file_create_readwrite_async)(GFile * file, GFileCreateFlags flags, int io_priority, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data);
    GFileIOStream * (*ptr_g_file_create_readwrite_finish)(GFile * file, GAsyncResult * res, GError * * error);
    GFileIOStream * (*ptr_g_file_replace_readwrite)(GFile * file, const char * etag, gboolean make_backup, GFileCreateFlags flags, GCancellable * cancellable, GError * * error);
    void (*ptr_g_file_replace_readwrite_async)(GFile * file, const char * etag, gboolean make_backup, GFileCreateFlags flags, int io_priority, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data);
    GFileIOStream * (*ptr_g_file_replace_readwrite_finish)(GFile * file, GAsyncResult * res, GError * * error);
    gboolean (*ptr_g_file_query_exists)(GFile * file, GCancellable * cancellable);
    GFileType (*ptr_g_file_query_file_type)(GFile * file, GFileQueryInfoFlags flags, GCancellable * cancellable);
    GFileInfo * (*ptr_g_file_query_info)(GFile * file, const char * attributes, GFileQueryInfoFlags flags, GCancellable * cancellable, GError * * error);
    void (*ptr_g_file_query_info_async)(GFile * file, const char * attributes, GFileQueryInfoFlags flags, int io_priority, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data);
    GFileInfo * (*ptr_g_file_query_info_finish)(GFile * file, GAsyncResult * res, GError * * error);
    GFileInfo * (*ptr_g_file_query_filesystem_info)(GFile * file, const char * attributes, GCancellable * cancellable, GError * * error);
    void (*ptr_g_file_query_filesystem_info_async)(GFile * file, const char * attributes, int io_priority, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data);
    GFileInfo * (*ptr_g_file_query_filesystem_info_finish)(GFile * file, GAsyncResult * res, GError * * error);
    GMount * (*ptr_g_file_find_enclosing_mount)(GFile * file, GCancellable * cancellable, GError * * error);
    void (*ptr_g_file_find_enclosing_mount_async)(GFile * file, int io_priority, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data);
    GMount * (*ptr_g_file_find_enclosing_mount_finish)(GFile * file, GAsyncResult * res, GError * * error);
    GFileEnumerator * (*ptr_g_file_enumerate_children)(GFile * file, const char * attributes, GFileQueryInfoFlags flags, GCancellable * cancellable, GError * * error);
    void (*ptr_g_file_enumerate_children_async)(GFile * file, const char * attributes, GFileQueryInfoFlags flags, int io_priority, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data);
    GFileEnumerator * (*ptr_g_file_enumerate_children_finish)(GFile * file, GAsyncResult * res, GError * * error);
    GFile * (*ptr_g_file_set_display_name)(GFile * file, const char * display_name, GCancellable * cancellable, GError * * error);
    void (*ptr_g_file_set_display_name_async)(GFile * file, const char * display_name, int io_priority, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data);
    GFile * (*ptr_g_file_set_display_name_finish)(GFile * file, GAsyncResult * res, GError * * error);
    gboolean (*ptr_g_file_delete)(GFile * file, GCancellable * cancellable, GError * * error);
    void (*ptr_g_file_delete_async)(GFile * file, int io_priority, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data);
    gboolean (*ptr_g_file_delete_finish)(GFile * file, GAsyncResult * result, GError * * error);
    gboolean (*ptr_g_file_trash)(GFile * file, GCancellable * cancellable, GError * * error);
    void (*ptr_g_file_trash_async)(GFile * file, int io_priority, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data);
    gboolean (*ptr_g_file_trash_finish)(GFile * file, GAsyncResult * result, GError * * error);
    gboolean (*ptr_g_file_copy)(GFile * source, GFile * destination, GFileCopyFlags flags, GCancellable * cancellable, GFileProgressCallback progress_callback, gpointer progress_callback_data, GError * * error);
    void (*ptr_g_file_copy_async)(GFile * source, GFile * destination, GFileCopyFlags flags, int io_priority, GCancellable * cancellable, GFileProgressCallback progress_callback, gpointer progress_callback_data, GAsyncReadyCallback callback, gpointer user_data);
    void (*ptr_g_file_copy_async_with_closures)(GFile * source, GFile * destination, GFileCopyFlags flags, int io_priority, GCancellable * cancellable, GClosure * progress_callback_closure, GClosure * ready_callback_closure);
    gboolean (*ptr_g_file_copy_finish)(GFile * file, GAsyncResult * res, GError * * error);
    gboolean (*ptr_g_file_move)(GFile * source, GFile * destination, GFileCopyFlags flags, GCancellable * cancellable, GFileProgressCallback progress_callback, gpointer progress_callback_data, GError * * error);
    void (*ptr_g_file_move_async)(GFile * source, GFile * destination, GFileCopyFlags flags, int io_priority, GCancellable * cancellable, GFileProgressCallback progress_callback, gpointer progress_callback_data, GAsyncReadyCallback callback, gpointer user_data);
    void (*ptr_g_file_move_async_with_closures)(GFile * source, GFile * destination, GFileCopyFlags flags, int io_priority, GCancellable * cancellable, GClosure * progress_callback_closure, GClosure * ready_callback_closure);
    gboolean (*ptr_g_file_move_finish)(GFile * file, GAsyncResult * result, GError * * error);
    gboolean (*ptr_g_file_make_directory)(GFile * file, GCancellable * cancellable, GError * * error);
    void (*ptr_g_file_make_directory_async)(GFile * file, int io_priority, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data);
    gboolean (*ptr_g_file_make_directory_finish)(GFile * file, GAsyncResult * result, GError * * error);
    gboolean (*ptr_g_file_make_directory_with_parents)(GFile * file, GCancellable * cancellable, GError * * error);
    gboolean (*ptr_g_file_make_symbolic_link)(GFile * file, const char * symlink_value, GCancellable * cancellable, GError * * error);
    void (*ptr_g_file_make_symbolic_link_async)(GFile * file, const char * symlink_value, int io_priority, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data);
    gboolean (*ptr_g_file_make_symbolic_link_finish)(GFile * file, GAsyncResult * result, GError * * error);
    GFileAttributeInfoList * (*ptr_g_file_query_settable_attributes)(GFile * file, GCancellable * cancellable, GError * * error);
    GFileAttributeInfoList * (*ptr_g_file_query_writable_namespaces)(GFile * file, GCancellable * cancellable, GError * * error);
    gboolean (*ptr_g_file_set_attribute)(GFile * file, const char * attribute, GFileAttributeType type, gpointer value_p, GFileQueryInfoFlags flags, GCancellable * cancellable, GError * * error);
    gboolean (*ptr_g_file_set_attributes_from_info)(GFile * file, GFileInfo * info, GFileQueryInfoFlags flags, GCancellable * cancellable, GError * * error);
    void (*ptr_g_file_set_attributes_async)(GFile * file, GFileInfo * info, GFileQueryInfoFlags flags, int io_priority, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data);
    gboolean (*ptr_g_file_set_attributes_finish)(GFile * file, GAsyncResult * result, GFileInfo * * info, GError * * error);
    gboolean (*ptr_g_file_set_attribute_string)(GFile * file, const char * attribute, const char * value, GFileQueryInfoFlags flags, GCancellable * cancellable, GError * * error);
    gboolean (*ptr_g_file_set_attribute_byte_string)(GFile * file, const char * attribute, const char * value, GFileQueryInfoFlags flags, GCancellable * cancellable, GError * * error);
    gboolean (*ptr_g_file_set_attribute_uint32)(GFile * file, const char * attribute, guint32 value, GFileQueryInfoFlags flags, GCancellable * cancellable, GError * * error);
    gboolean (*ptr_g_file_set_attribute_int32)(GFile * file, const char * attribute, gint32 value, GFileQueryInfoFlags flags, GCancellable * cancellable, GError * * error);
    gboolean (*ptr_g_file_set_attribute_uint64)(GFile * file, const char * attribute, guint64 value, GFileQueryInfoFlags flags, GCancellable * cancellable, GError * * error);
    gboolean (*ptr_g_file_set_attribute_int64)(GFile * file, const char * attribute, gint64 value, GFileQueryInfoFlags flags, GCancellable * cancellable, GError * * error);
    void (*ptr_g_file_mount_enclosing_volume)(GFile * location, GMountMountFlags flags, GMountOperation * mount_operation, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data);
    gboolean (*ptr_g_file_mount_enclosing_volume_finish)(GFile * location, GAsyncResult * result, GError * * error);
    void (*ptr_g_file_mount_mountable)(GFile * file, GMountMountFlags flags, GMountOperation * mount_operation, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data);
    GFile * (*ptr_g_file_mount_mountable_finish)(GFile * file, GAsyncResult * result, GError * * error);
    void (*ptr_g_file_unmount_mountable)(GFile * file, GMountUnmountFlags flags, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data);
    gboolean (*ptr_g_file_unmount_mountable_finish)(GFile * file, GAsyncResult * result, GError * * error);
    void (*ptr_g_file_unmount_mountable_with_operation)(GFile * file, GMountUnmountFlags flags, GMountOperation * mount_operation, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data);
    gboolean (*ptr_g_file_unmount_mountable_with_operation_finish)(GFile * file, GAsyncResult * result, GError * * error);
    void (*ptr_g_file_eject_mountable)(GFile * file, GMountUnmountFlags flags, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data);
    gboolean (*ptr_g_file_eject_mountable_finish)(GFile * file, GAsyncResult * result, GError * * error);
    void (*ptr_g_file_eject_mountable_with_operation)(GFile * file, GMountUnmountFlags flags, GMountOperation * mount_operation, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data);
    gboolean (*ptr_g_file_eject_mountable_with_operation_finish)(GFile * file, GAsyncResult * result, GError * * error);
    char * (*ptr_g_file_build_attribute_list_for_copy)(GFile * file, GFileCopyFlags flags, GCancellable * cancellable, GError * * error);
    gboolean (*ptr_g_file_copy_attributes)(GFile * source, GFile * destination, GFileCopyFlags flags, GCancellable * cancellable, GError * * error);
    GFileMonitor * (*ptr_g_file_monitor_directory)(GFile * file, GFileMonitorFlags flags, GCancellable * cancellable, GError * * error);
    GFileMonitor * (*ptr_g_file_monitor_file)(GFile * file, GFileMonitorFlags flags, GCancellable * cancellable, GError * * error);
    GFileMonitor * (*ptr_g_file_monitor)(GFile * file, GFileMonitorFlags flags, GCancellable * cancellable, GError * * error);
    gboolean (*ptr_g_file_measure_disk_usage)(GFile * file, GFileMeasureFlags flags, GCancellable * cancellable, GFileMeasureProgressCallback progress_callback, gpointer progress_data, guint64 * disk_usage, guint64 * num_dirs, guint64 * num_files, GError * * error);
    void (*ptr_g_file_measure_disk_usage_async)(GFile * file, GFileMeasureFlags flags, gint io_priority, GCancellable * cancellable, GFileMeasureProgressCallback progress_callback, gpointer progress_data, GAsyncReadyCallback callback, gpointer user_data);
    gboolean (*ptr_g_file_measure_disk_usage_finish)(GFile * file, GAsyncResult * result, guint64 * disk_usage, guint64 * num_dirs, guint64 * num_files, GError * * error);
    void (*ptr_g_file_start_mountable)(GFile * file, GDriveStartFlags flags, GMountOperation * start_operation, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data);
    gboolean (*ptr_g_file_start_mountable_finish)(GFile * file, GAsyncResult * result, GError * * error);
    void (*ptr_g_file_stop_mountable)(GFile * file, GMountUnmountFlags flags, GMountOperation * mount_operation, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data);
    gboolean (*ptr_g_file_stop_mountable_finish)(GFile * file, GAsyncResult * result, GError * * error);
    void (*ptr_g_file_poll_mountable)(GFile * file, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data);
    gboolean (*ptr_g_file_poll_mountable_finish)(GFile * file, GAsyncResult * result, GError * * error);
    GAppInfo * (*ptr_g_file_query_default_handler)(GFile * file, GCancellable * cancellable, GError * * error);
    void (*ptr_g_file_query_default_handler_async)(GFile * file, int io_priority, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data);
    GAppInfo * (*ptr_g_file_query_default_handler_finish)(GFile * file, GAsyncResult * result, GError * * error);
    gboolean (*ptr_g_file_load_contents)(GFile * file, GCancellable * cancellable, char * * contents, gsize * length, char * * etag_out, GError * * error);
    void (*ptr_g_file_load_contents_async)(GFile * file, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data);
    gboolean (*ptr_g_file_load_contents_finish)(GFile * file, GAsyncResult * res, char * * contents, gsize * length, char * * etag_out, GError * * error);
    void (*ptr_g_file_load_partial_contents_async)(GFile * file, GCancellable * cancellable, GFileReadMoreCallback read_more_callback, GAsyncReadyCallback callback, gpointer user_data);
    gboolean (*ptr_g_file_load_partial_contents_finish)(GFile * file, GAsyncResult * res, char * * contents, gsize * length, char * * etag_out, GError * * error);
    gboolean (*ptr_g_file_replace_contents)(GFile * file, const char * contents, gsize length, const char * etag, gboolean make_backup, GFileCreateFlags flags, char * * new_etag, GCancellable * cancellable, GError * * error);
    void (*ptr_g_file_replace_contents_async)(GFile * file, const char * contents, gsize length, const char * etag, gboolean make_backup, GFileCreateFlags flags, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data);
    void (*ptr_g_file_replace_contents_bytes_async)(GFile * file, GBytes * contents, const char * etag, gboolean make_backup, GFileCreateFlags flags, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data);
    gboolean (*ptr_g_file_replace_contents_finish)(GFile * file, GAsyncResult * res, char * * new_etag, GError * * error);
    gboolean (*ptr_g_file_supports_thread_contexts)(GFile * file);
    GBytes * (*ptr_g_file_load_bytes)(GFile * file, GCancellable * cancellable, gchar * * etag_out, GError * * error);
    void (*ptr_g_file_load_bytes_async)(GFile * file, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data);
    GBytes * (*ptr_g_file_load_bytes_finish)(GFile * file, GAsyncResult * result, gchar * * etag_out, GError * * error);
    GType (*ptr_g_file_attribute_info_list_get_type)(void);
    GFileAttributeInfoList * (*ptr_g_file_attribute_info_list_new)(void);
    GFileAttributeInfoList * (*ptr_g_file_attribute_info_list_ref)(GFileAttributeInfoList * list);
    void (*ptr_g_file_attribute_info_list_unref)(GFileAttributeInfoList * list);
    GFileAttributeInfoList * (*ptr_g_file_attribute_info_list_dup)(GFileAttributeInfoList * list);
    const GFileAttributeInfo * (*ptr_g_file_attribute_info_list_lookup)(GFileAttributeInfoList * list, const char * name);
    void (*ptr_g_file_attribute_info_list_add)(GFileAttributeInfoList * list, const char * name, GFileAttributeType type, GFileAttributeInfoFlags flags);
    GType (*ptr_g_file_enumerator_get_type)(void);
    GFileInfo * (*ptr_g_file_enumerator_next_file)(GFileEnumerator * enumerator, GCancellable * cancellable, GError * * error);
    gboolean (*ptr_g_file_enumerator_close)(GFileEnumerator * enumerator, GCancellable * cancellable, GError * * error);
    void (*ptr_g_file_enumerator_next_files_async)(GFileEnumerator * enumerator, int num_files, int io_priority, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data);
    GList * (*ptr_g_file_enumerator_next_files_finish)(GFileEnumerator * enumerator, GAsyncResult * result, GError * * error);
    void (*ptr_g_file_enumerator_close_async)(GFileEnumerator * enumerator, int io_priority, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data);
    gboolean (*ptr_g_file_enumerator_close_finish)(GFileEnumerator * enumerator, GAsyncResult * result, GError * * error);
    gboolean (*ptr_g_file_enumerator_is_closed)(GFileEnumerator * enumerator);
    gboolean (*ptr_g_file_enumerator_has_pending)(GFileEnumerator * enumerator);
    void (*ptr_g_file_enumerator_set_pending)(GFileEnumerator * enumerator, gboolean pending);
    GFile * (*ptr_g_file_enumerator_get_container)(GFileEnumerator * enumerator);
    GFile * (*ptr_g_file_enumerator_get_child)(GFileEnumerator * enumerator, GFileInfo * info);
    gboolean (*ptr_g_file_enumerator_iterate)(GFileEnumerator * direnum, GFileInfo * * out_info, GFile * * out_child, GCancellable * cancellable, GError * * error);
    GType (*ptr_g_file_icon_get_type)(void);
    GIcon * (*ptr_g_file_icon_new)(GFile * file);
    GFile * (*ptr_g_file_icon_get_file)(GFileIcon * icon);
    GType (*ptr_g_file_info_get_type)(void);
    GFileInfo * (*ptr_g_file_info_new)(void);
    GFileInfo * (*ptr_g_file_info_dup)(GFileInfo * other);
    void (*ptr_g_file_info_copy_into)(GFileInfo * src_info, GFileInfo * dest_info);
    gboolean (*ptr_g_file_info_has_attribute)(GFileInfo * info, const char * attribute);
    gboolean (*ptr_g_file_info_has_namespace)(GFileInfo * info, const char * name_space);
    char * * (*ptr_g_file_info_list_attributes)(GFileInfo * info, const char * name_space);
    gboolean (*ptr_g_file_info_get_attribute_data)(GFileInfo * info, const char * attribute, GFileAttributeType * type, gpointer * value_pp, GFileAttributeStatus * status);
    GFileAttributeType (*ptr_g_file_info_get_attribute_type)(GFileInfo * info, const char * attribute);
    void (*ptr_g_file_info_remove_attribute)(GFileInfo * info, const char * attribute);
    GFileAttributeStatus (*ptr_g_file_info_get_attribute_status)(GFileInfo * info, const char * attribute);
    gboolean (*ptr_g_file_info_set_attribute_status)(GFileInfo * info, const char * attribute, GFileAttributeStatus status);
    char * (*ptr_g_file_info_get_attribute_as_string)(GFileInfo * info, const char * attribute);
    const char * (*ptr_g_file_info_get_attribute_string)(GFileInfo * info, const char * attribute);
    const char * (*ptr_g_file_info_get_attribute_byte_string)(GFileInfo * info, const char * attribute);
    gboolean (*ptr_g_file_info_get_attribute_boolean)(GFileInfo * info, const char * attribute);
    guint32 (*ptr_g_file_info_get_attribute_uint32)(GFileInfo * info, const char * attribute);
    gint32 (*ptr_g_file_info_get_attribute_int32)(GFileInfo * info, const char * attribute);
    guint64 (*ptr_g_file_info_get_attribute_uint64)(GFileInfo * info, const char * attribute);
    gint64 (*ptr_g_file_info_get_attribute_int64)(GFileInfo * info, const char * attribute);
    GObject * (*ptr_g_file_info_get_attribute_object)(GFileInfo * info, const char * attribute);
    char * * (*ptr_g_file_info_get_attribute_stringv)(GFileInfo * info, const char * attribute);
    const char * (*ptr_g_file_info_get_attribute_file_path)(GFileInfo * info, const char * attribute);
    void (*ptr_g_file_info_set_attribute)(GFileInfo * info, const char * attribute, GFileAttributeType type, gpointer value_p);
    void (*ptr_g_file_info_set_attribute_string)(GFileInfo * info, const char * attribute, const char * attr_value);
    void (*ptr_g_file_info_set_attribute_byte_string)(GFileInfo * info, const char * attribute, const char * attr_value);
    void (*ptr_g_file_info_set_attribute_boolean)(GFileInfo * info, const char * attribute, gboolean attr_value);
    void (*ptr_g_file_info_set_attribute_uint32)(GFileInfo * info, const char * attribute, guint32 attr_value);
    void (*ptr_g_file_info_set_attribute_int32)(GFileInfo * info, const char * attribute, gint32 attr_value);
    void (*ptr_g_file_info_set_attribute_uint64)(GFileInfo * info, const char * attribute, guint64 attr_value);
    void (*ptr_g_file_info_set_attribute_int64)(GFileInfo * info, const char * attribute, gint64 attr_value);
    void (*ptr_g_file_info_set_attribute_object)(GFileInfo * info, const char * attribute, GObject * attr_value);
    void (*ptr_g_file_info_set_attribute_stringv)(GFileInfo * info, const char * attribute, char * * attr_value);
    void (*ptr_g_file_info_set_attribute_file_path)(GFileInfo * info, const char * attribute, const char * attr_value);
    void (*ptr_g_file_info_clear_status)(GFileInfo * info);
    GDateTime * (*ptr_g_file_info_get_deletion_date)(GFileInfo * info);
    GFileType (*ptr_g_file_info_get_file_type)(GFileInfo * info);
    gboolean (*ptr_g_file_info_get_is_hidden)(GFileInfo * info);
    gboolean (*ptr_g_file_info_get_is_backup)(GFileInfo * info);
    gboolean (*ptr_g_file_info_get_is_symlink)(GFileInfo * info);
    const char * (*ptr_g_file_info_get_name)(GFileInfo * info);
    const char * (*ptr_g_file_info_get_display_name)(GFileInfo * info);
    const char * (*ptr_g_file_info_get_edit_name)(GFileInfo * info);
    GIcon * (*ptr_g_file_info_get_icon)(GFileInfo * info);
    GIcon * (*ptr_g_file_info_get_symbolic_icon)(GFileInfo * info);
    const char * (*ptr_g_file_info_get_content_type)(GFileInfo * info);
    goffset (*ptr_g_file_info_get_size)(GFileInfo * info);
    void (*ptr_g_file_info_get_modification_time)(GFileInfo * info, GTimeVal * result);
    GDateTime * (*ptr_g_file_info_get_modification_date_time)(GFileInfo * info);
    GDateTime * (*ptr_g_file_info_get_access_date_time)(GFileInfo * info);
    GDateTime * (*ptr_g_file_info_get_creation_date_time)(GFileInfo * info);
    const char * (*ptr_g_file_info_get_symlink_target)(GFileInfo * info);
    const char * (*ptr_g_file_info_get_etag)(GFileInfo * info);
    gint32 (*ptr_g_file_info_get_sort_order)(GFileInfo * info);
    void (*ptr_g_file_info_set_attribute_mask)(GFileInfo * info, GFileAttributeMatcher * mask);
    void (*ptr_g_file_info_unset_attribute_mask)(GFileInfo * info);
    void (*ptr_g_file_info_set_file_type)(GFileInfo * info, GFileType type);
    void (*ptr_g_file_info_set_is_hidden)(GFileInfo * info, gboolean is_hidden);
    void (*ptr_g_file_info_set_is_symlink)(GFileInfo * info, gboolean is_symlink);
    void (*ptr_g_file_info_set_name)(GFileInfo * info, const char * name);
    void (*ptr_g_file_info_set_display_name)(GFileInfo * info, const char * display_name);
    void (*ptr_g_file_info_set_edit_name)(GFileInfo * info, const char * edit_name);
    void (*ptr_g_file_info_set_icon)(GFileInfo * info, GIcon * icon);
    void (*ptr_g_file_info_set_symbolic_icon)(GFileInfo * info, GIcon * icon);
    void (*ptr_g_file_info_set_content_type)(GFileInfo * info, const char * content_type);
    void (*ptr_g_file_info_set_size)(GFileInfo * info, goffset size);
    void (*ptr_g_file_info_set_modification_time)(GFileInfo * info, GTimeVal * mtime);
    void (*ptr_g_file_info_set_modification_date_time)(GFileInfo * info, GDateTime * mtime);
    void (*ptr_g_file_info_set_access_date_time)(GFileInfo * info, GDateTime * atime);
    void (*ptr_g_file_info_set_creation_date_time)(GFileInfo * info, GDateTime * creation_time);
    void (*ptr_g_file_info_set_symlink_target)(GFileInfo * info, const char * symlink_target);
    void (*ptr_g_file_info_set_sort_order)(GFileInfo * info, gint32 sort_order);
    GType (*ptr_g_file_attribute_matcher_get_type)(void);
    GFileAttributeMatcher * (*ptr_g_file_attribute_matcher_new)(const char * attributes);
    GFileAttributeMatcher * (*ptr_g_file_attribute_matcher_ref)(GFileAttributeMatcher * matcher);
    void (*ptr_g_file_attribute_matcher_unref)(GFileAttributeMatcher * matcher);
    GFileAttributeMatcher * (*ptr_g_file_attribute_matcher_subtract)(GFileAttributeMatcher * matcher, GFileAttributeMatcher * subtract);
    gboolean (*ptr_g_file_attribute_matcher_matches)(GFileAttributeMatcher * matcher, const char * attribute);
    gboolean (*ptr_g_file_attribute_matcher_matches_only)(GFileAttributeMatcher * matcher, const char * attribute);
    gboolean (*ptr_g_file_attribute_matcher_enumerate_namespace)(GFileAttributeMatcher * matcher, const char * ns);
    const char * (*ptr_g_file_attribute_matcher_enumerate_next)(GFileAttributeMatcher * matcher);
    char * (*ptr_g_file_attribute_matcher_to_string)(GFileAttributeMatcher * matcher);
    GType (*ptr_g_file_input_stream_get_type)(void);
    GFileInfo * (*ptr_g_file_input_stream_query_info)(GFileInputStream * stream, const char * attributes, GCancellable * cancellable, GError * * error);
    void (*ptr_g_file_input_stream_query_info_async)(GFileInputStream * stream, const char * attributes, int io_priority, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data);
    GFileInfo * (*ptr_g_file_input_stream_query_info_finish)(GFileInputStream * stream, GAsyncResult * result, GError * * error);
    GQuark (*ptr_g_io_error_quark)(void);
    GIOErrorEnum (*ptr_g_io_error_from_errno)(gint err_no);
    GIOErrorEnum (*ptr_g_io_error_from_file_error)(GFileError file_error);
    GType (*ptr_g_io_stream_get_type)(void);
    GInputStream * (*ptr_g_io_stream_get_input_stream)(GIOStream * stream);
    GOutputStream * (*ptr_g_io_stream_get_output_stream)(GIOStream * stream);
    void (*ptr_g_io_stream_splice_async)(GIOStream * stream1, GIOStream * stream2, GIOStreamSpliceFlags flags, int io_priority, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data);
    gboolean (*ptr_g_io_stream_splice_finish)(GAsyncResult * result, GError * * error);
    gboolean (*ptr_g_io_stream_close)(GIOStream * stream, GCancellable * cancellable, GError * * error);
    void (*ptr_g_io_stream_close_async)(GIOStream * stream, int io_priority, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data);
    gboolean (*ptr_g_io_stream_close_finish)(GIOStream * stream, GAsyncResult * result, GError * * error);
    gboolean (*ptr_g_io_stream_is_closed)(GIOStream * stream);
    gboolean (*ptr_g_io_stream_has_pending)(GIOStream * stream);
    gboolean (*ptr_g_io_stream_set_pending)(GIOStream * stream, GError * * error);
    void (*ptr_g_io_stream_clear_pending)(GIOStream * stream);
    GType (*ptr_g_file_io_stream_get_type)(void);
    GFileInfo * (*ptr_g_file_io_stream_query_info)(GFileIOStream * stream, const char * attributes, GCancellable * cancellable, GError * * error);
    void (*ptr_g_file_io_stream_query_info_async)(GFileIOStream * stream, const char * attributes, int io_priority, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data);
    GFileInfo * (*ptr_g_file_io_stream_query_info_finish)(GFileIOStream * stream, GAsyncResult * result, GError * * error);
    char * (*ptr_g_file_io_stream_get_etag)(GFileIOStream * stream);
    GType (*ptr_g_file_monitor_get_type)(void);
    gboolean (*ptr_g_file_monitor_cancel)(GFileMonitor * monitor);
    gboolean (*ptr_g_file_monitor_is_cancelled)(GFileMonitor * monitor);
    void (*ptr_g_file_monitor_set_rate_limit)(GFileMonitor * monitor, gint limit_msecs);
    void (*ptr_g_file_monitor_emit_event)(GFileMonitor * monitor, GFile * child, GFile * other_file, GFileMonitorEvent event_type);
    GType (*ptr_g_filename_completer_get_type)(void);
    GFilenameCompleter * (*ptr_g_filename_completer_new)(void);
    char * (*ptr_g_filename_completer_get_completion_suffix)(GFilenameCompleter * completer, const char * initial_text);
    char * * (*ptr_g_filename_completer_get_completions)(GFilenameCompleter * completer, const char * initial_text);
    void (*ptr_g_filename_completer_set_dirs_only)(GFilenameCompleter * completer, gboolean dirs_only);
    GType (*ptr_g_file_output_stream_get_type)(void);
    GFileInfo * (*ptr_g_file_output_stream_query_info)(GFileOutputStream * stream, const char * attributes, GCancellable * cancellable, GError * * error);
    void (*ptr_g_file_output_stream_query_info_async)(GFileOutputStream * stream, const char * attributes, int io_priority, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data);
    GFileInfo * (*ptr_g_file_output_stream_query_info_finish)(GFileOutputStream * stream, GAsyncResult * result, GError * * error);
    char * (*ptr_g_file_output_stream_get_etag)(GFileOutputStream * stream);
    GType (*ptr_g_inet_address_get_type)(void);
    GInetAddress * (*ptr_g_inet_address_new_from_string)(const gchar * string);
    GInetAddress * (*ptr_g_inet_address_new_from_bytes)(const guint8 * bytes, GSocketFamily family);
    GInetAddress * (*ptr_g_inet_address_new_loopback)(GSocketFamily family);
    GInetAddress * (*ptr_g_inet_address_new_any)(GSocketFamily family);
    gboolean (*ptr_g_inet_address_equal)(GInetAddress * address, GInetAddress * other_address);
    gchar * (*ptr_g_inet_address_to_string)(GInetAddress * address);
    const guint8 * (*ptr_g_inet_address_to_bytes)(GInetAddress * address);
    gsize (*ptr_g_inet_address_get_native_size)(GInetAddress * address);
    GSocketFamily (*ptr_g_inet_address_get_family)(GInetAddress * address);
    gboolean (*ptr_g_inet_address_get_is_any)(GInetAddress * address);
    gboolean (*ptr_g_inet_address_get_is_loopback)(GInetAddress * address);
    gboolean (*ptr_g_inet_address_get_is_link_local)(GInetAddress * address);
    gboolean (*ptr_g_inet_address_get_is_site_local)(GInetAddress * address);
    gboolean (*ptr_g_inet_address_get_is_multicast)(GInetAddress * address);
    gboolean (*ptr_g_inet_address_get_is_mc_global)(GInetAddress * address);
    gboolean (*ptr_g_inet_address_get_is_mc_link_local)(GInetAddress * address);
    gboolean (*ptr_g_inet_address_get_is_mc_node_local)(GInetAddress * address);
    gboolean (*ptr_g_inet_address_get_is_mc_org_local)(GInetAddress * address);
    gboolean (*ptr_g_inet_address_get_is_mc_site_local)(GInetAddress * address);
    GType (*ptr_g_inet_address_mask_get_type)(void);
    GInetAddressMask * (*ptr_g_inet_address_mask_new)(GInetAddress * addr, guint length, GError * * error);
    GInetAddressMask * (*ptr_g_inet_address_mask_new_from_string)(const gchar * mask_string, GError * * error);
    gchar * (*ptr_g_inet_address_mask_to_string)(GInetAddressMask * mask);
    GSocketFamily (*ptr_g_inet_address_mask_get_family)(GInetAddressMask * mask);
    GInetAddress * (*ptr_g_inet_address_mask_get_address)(GInetAddressMask * mask);
    guint (*ptr_g_inet_address_mask_get_length)(GInetAddressMask * mask);
    gboolean (*ptr_g_inet_address_mask_matches)(GInetAddressMask * mask, GInetAddress * address);
    gboolean (*ptr_g_inet_address_mask_equal)(GInetAddressMask * mask, GInetAddressMask * mask2);
    GType (*ptr_g_socket_address_get_type)(void);
    GSocketFamily (*ptr_g_socket_address_get_family)(GSocketAddress * address);
    GSocketAddress * (*ptr_g_socket_address_new_from_native)(gpointer native, gsize len);
    gboolean (*ptr_g_socket_address_to_native)(GSocketAddress * address, gpointer dest, gsize destlen, GError * * error);
    gssize (*ptr_g_socket_address_get_native_size)(GSocketAddress * address);
    GType (*ptr_g_inet_socket_address_get_type)(void);
    GSocketAddress * (*ptr_g_inet_socket_address_new)(GInetAddress * address, guint16 port);
    GSocketAddress * (*ptr_g_inet_socket_address_new_from_string)(const char * address, guint port);
    GInetAddress * (*ptr_g_inet_socket_address_get_address)(GInetSocketAddress * address);
    guint16 (*ptr_g_inet_socket_address_get_port)(GInetSocketAddress * address);
    guint32 (*ptr_g_inet_socket_address_get_flowinfo)(GInetSocketAddress * address);
    guint32 (*ptr_g_inet_socket_address_get_scope_id)(GInetSocketAddress * address);
    GType (*ptr_g_app_info_create_flags_get_type)(void);
    GType (*ptr_g_converter_flags_get_type)(void);
    GType (*ptr_g_converter_result_get_type)(void);
    GType (*ptr_g_data_stream_byte_order_get_type)(void);
    GType (*ptr_g_data_stream_newline_type_get_type)(void);
    GType (*ptr_g_file_attribute_type_get_type)(void);
    GType (*ptr_g_file_attribute_info_flags_get_type)(void);
    GType (*ptr_g_file_attribute_status_get_type)(void);
    GType (*ptr_g_file_query_info_flags_get_type)(void);
    GType (*ptr_g_file_create_flags_get_type)(void);
    GType (*ptr_g_file_measure_flags_get_type)(void);
    GType (*ptr_g_mount_mount_flags_get_type)(void);
    GType (*ptr_g_mount_unmount_flags_get_type)(void);
    GType (*ptr_g_drive_start_flags_get_type)(void);
    GType (*ptr_g_drive_start_stop_type_get_type)(void);
    GType (*ptr_g_file_copy_flags_get_type)(void);
    GType (*ptr_g_file_monitor_flags_get_type)(void);
    GType (*ptr_g_file_type_get_type)(void);
    GType (*ptr_g_filesystem_preview_type_get_type)(void);
    GType (*ptr_g_file_monitor_event_get_type)(void);
    GType (*ptr_g_io_error_enum_get_type)(void);
    GType (*ptr_g_ask_password_flags_get_type)(void);
    GType (*ptr_g_password_save_get_type)(void);
    GType (*ptr_g_mount_operation_result_get_type)(void);
    GType (*ptr_g_output_stream_splice_flags_get_type)(void);
    GType (*ptr_g_io_stream_splice_flags_get_type)(void);
    GType (*ptr_g_emblem_origin_get_type)(void);
    GType (*ptr_g_resolver_error_get_type)(void);
    GType (*ptr_g_resolver_record_type_get_type)(void);
    GType (*ptr_g_resource_error_get_type)(void);
    GType (*ptr_g_resource_flags_get_type)(void);
    GType (*ptr_g_resource_lookup_flags_get_type)(void);
    GType (*ptr_g_socket_family_get_type)(void);
    GType (*ptr_g_socket_type_get_type)(void);
    GType (*ptr_g_socket_msg_flags_get_type)(void);
    GType (*ptr_g_socket_protocol_get_type)(void);
    GType (*ptr_g_zlib_compressor_format_get_type)(void);
    GType (*ptr_g_unix_socket_address_type_get_type)(void);
    GType (*ptr_g_bus_type_get_type)(void);
    GType (*ptr_g_bus_name_owner_flags_get_type)(void);
    GType (*ptr_g_bus_name_watcher_flags_get_type)(void);
    GType (*ptr_g_dbus_proxy_flags_get_type)(void);
    GType (*ptr_g_dbus_error_get_type)(void);
    GType (*ptr_g_dbus_connection_flags_get_type)(void);
    GType (*ptr_g_dbus_capability_flags_get_type)(void);
    GType (*ptr_g_dbus_call_flags_get_type)(void);
    GType (*ptr_g_dbus_message_type_get_type)(void);
    GType (*ptr_g_dbus_message_flags_get_type)(void);
    GType (*ptr_g_dbus_message_header_field_get_type)(void);
    GType (*ptr_g_dbus_property_info_flags_get_type)(void);
    GType (*ptr_g_dbus_subtree_flags_get_type)(void);
    GType (*ptr_g_dbus_server_flags_get_type)(void);
    GType (*ptr_g_dbus_signal_flags_get_type)(void);
    GType (*ptr_g_dbus_send_message_flags_get_type)(void);
    GType (*ptr_g_credentials_type_get_type)(void);
    GType (*ptr_g_dbus_message_byte_order_get_type)(void);
    GType (*ptr_g_application_flags_get_type)(void);
    GType (*ptr_g_tls_error_get_type)(void);
    GType (*ptr_g_tls_certificate_flags_get_type)(void);
    GType (*ptr_g_tls_authentication_mode_get_type)(void);
    GType (*ptr_g_tls_channel_binding_type_get_type)(void);
    GType (*ptr_g_tls_channel_binding_error_get_type)(void);
    GType (*ptr_g_tls_rehandshake_mode_get_type)(void);
    GType (*ptr_g_tls_password_flags_get_type)(void);
    GType (*ptr_g_tls_interaction_result_get_type)(void);
    GType (*ptr_g_dbus_interface_skeleton_flags_get_type)(void);
    GType (*ptr_g_dbus_object_manager_client_flags_get_type)(void);
    GType (*ptr_g_tls_database_verify_flags_get_type)(void);
    GType (*ptr_g_tls_database_lookup_flags_get_type)(void);
    GType (*ptr_g_tls_certificate_request_flags_get_type)(void);
    GType (*ptr_g_tls_protocol_version_get_type)(void);
    GType (*ptr_g_io_module_scope_flags_get_type)(void);
    GType (*ptr_g_socket_client_event_get_type)(void);
    GType (*ptr_g_socket_listener_event_get_type)(void);
    GType (*ptr_g_test_dbus_flags_get_type)(void);
    GType (*ptr_g_subprocess_flags_get_type)(void);
    GType (*ptr_g_notification_priority_get_type)(void);
    GType (*ptr_g_network_connectivity_get_type)(void);
    GType (*ptr_g_pollable_return_get_type)(void);
    GType (*ptr_g_memory_monitor_warning_level_get_type)(void);
    GType (*ptr_g_resolver_name_lookup_flags_get_type)(void);
    GType (*ptr_g_settings_bind_flags_get_type)(void);
    GIOModuleScope * (*ptr_g_io_module_scope_new)(GIOModuleScopeFlags flags);
    void (*ptr_g_io_module_scope_free)(GIOModuleScope * scope);
    void (*ptr_g_io_module_scope_block)(GIOModuleScope * scope, const gchar * basename);
    GType (*ptr_g_io_module_get_type)(void);
    GIOModule * (*ptr_g_io_module_new)(const gchar * filename);
    void (*ptr_g_io_modules_scan_all_in_directory)(const char * dirname);
    GList * (*ptr_g_io_modules_load_all_in_directory)(const gchar * dirname);
    void (*ptr_g_io_modules_scan_all_in_directory_with_scope)(const gchar * dirname, GIOModuleScope * scope);
    GList * (*ptr_g_io_modules_load_all_in_directory_with_scope)(const gchar * dirname, GIOModuleScope * scope);
    GIOExtensionPoint * (*ptr_g_io_extension_point_register)(const char * name);
    GIOExtensionPoint * (*ptr_g_io_extension_point_lookup)(const char * name);
    void (*ptr_g_io_extension_point_set_required_type)(GIOExtensionPoint * extension_point, GType type);
    GType (*ptr_g_io_extension_point_get_required_type)(GIOExtensionPoint * extension_point);
    GList * (*ptr_g_io_extension_point_get_extensions)(GIOExtensionPoint * extension_point);
    GIOExtension * (*ptr_g_io_extension_point_get_extension_by_name)(GIOExtensionPoint * extension_point, const char * name);
    GIOExtension * (*ptr_g_io_extension_point_implement)(const char * extension_point_name, GType type, const char * extension_name, gint priority);
    GType (*ptr_g_io_extension_get_type)(GIOExtension * extension);
    const char * (*ptr_g_io_extension_get_name)(GIOExtension * extension);
    gint (*ptr_g_io_extension_get_priority)(GIOExtension * extension);
    GTypeClass * (*ptr_g_io_extension_ref_class)(GIOExtension * extension);
    void (*ptr_g_io_module_load)(GIOModule * module);
    void (*ptr_g_io_module_unload)(GIOModule * module);
    char * * (*ptr_g_io_module_query)(void);
    void (*ptr_g_io_scheduler_push_job)(GIOSchedulerJobFunc job_func, gpointer user_data, GDestroyNotify notify, gint io_priority, GCancellable * cancellable);
    void (*ptr_g_io_scheduler_cancel_all_jobs)(void);
    gboolean (*ptr_g_io_scheduler_job_send_to_mainloop)(GIOSchedulerJob * job, GSourceFunc func, gpointer user_data, GDestroyNotify notify);
    void (*ptr_g_io_scheduler_job_send_to_mainloop_async)(GIOSchedulerJob * job, GSourceFunc func, gpointer user_data, GDestroyNotify notify);
    GType (*ptr_g_list_model_get_type)(void);
    GType (*ptr_g_list_model_get_item_type)(GListModel * list);
    guint (*ptr_g_list_model_get_n_items)(GListModel * list);
    gpointer (*ptr_g_list_model_get_item)(GListModel * list, guint position);
    GObject * (*ptr_g_list_model_get_object)(GListModel * list, guint position);
    void (*ptr_g_list_model_items_changed)(GListModel * list, guint position, guint removed, guint added);
    GType (*ptr_g_list_store_get_type)(void);
    GListStore * (*ptr_g_list_store_new)(GType item_type);
    void (*ptr_g_list_store_insert)(GListStore * store, guint position, gpointer item);
    guint (*ptr_g_list_store_insert_sorted)(GListStore * store, gpointer item, GCompareDataFunc compare_func, gpointer user_data);
    void (*ptr_g_list_store_sort)(GListStore * store, GCompareDataFunc compare_func, gpointer user_data);
    void (*ptr_g_list_store_append)(GListStore * store, gpointer item);
    void (*ptr_g_list_store_remove)(GListStore * store, guint position);
    void (*ptr_g_list_store_remove_all)(GListStore * store);
    void (*ptr_g_list_store_splice)(GListStore * store, guint position, guint n_removals, gpointer * additions, guint n_additions);
    gboolean (*ptr_g_list_store_find)(GListStore * store, gpointer item, guint * position);
    gboolean (*ptr_g_list_store_find_with_equal_func)(GListStore * store, gpointer item, GEqualFunc equal_func, guint * position);
    gboolean (*ptr_g_list_store_find_with_equal_func_full)(GListStore * store, gpointer item, GEqualFuncFull equal_func, gpointer user_data, guint * position);
    GType (*ptr_g_loadable_icon_get_type)(void);
    GInputStream * (*ptr_g_loadable_icon_load)(GLoadableIcon * icon, int size, char * * type, GCancellable * cancellable, GError * * error);
    void (*ptr_g_loadable_icon_load_async)(GLoadableIcon * icon, int size, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data);
    GInputStream * (*ptr_g_loadable_icon_load_finish)(GLoadableIcon * icon, GAsyncResult * res, char * * type, GError * * error);
    GType (*ptr_g_memory_input_stream_get_type)(void);
    GInputStream * (*ptr_g_memory_input_stream_new)(void);
    GInputStream * (*ptr_g_memory_input_stream_new_from_data)(const void * data, gssize len, GDestroyNotify destroy);
    GInputStream * (*ptr_g_memory_input_stream_new_from_bytes)(GBytes * bytes);
    void (*ptr_g_memory_input_stream_add_data)(GMemoryInputStream * stream, const void * data, gssize len, GDestroyNotify destroy);
    void (*ptr_g_memory_input_stream_add_bytes)(GMemoryInputStream * stream, GBytes * bytes);
    GType (*ptr_g_memory_monitor_get_type)(void);
    GMemoryMonitor * (*ptr_g_memory_monitor_dup_default)(void);
    GType (*ptr_g_memory_output_stream_get_type)(void);
    GOutputStream * (*ptr_g_memory_output_stream_new)(gpointer data, gsize size, GReallocFunc realloc_function, GDestroyNotify destroy_function);
    GOutputStream * (*ptr_g_memory_output_stream_new_resizable)(void);
    gpointer (*ptr_g_memory_output_stream_get_data)(GMemoryOutputStream * ostream);
    gsize (*ptr_g_memory_output_stream_get_size)(GMemoryOutputStream * ostream);
    gsize (*ptr_g_memory_output_stream_get_data_size)(GMemoryOutputStream * ostream);
    gpointer (*ptr_g_memory_output_stream_steal_data)(GMemoryOutputStream * ostream);
    GBytes * (*ptr_g_memory_output_stream_steal_as_bytes)(GMemoryOutputStream * ostream);
    GType (*ptr_g_menu_model_get_type)(void);
    gboolean (*ptr_g_menu_model_is_mutable)(GMenuModel * model);
    gint (*ptr_g_menu_model_get_n_items)(GMenuModel * model);
    GMenuAttributeIter * (*ptr_g_menu_model_iterate_item_attributes)(GMenuModel * model, gint item_index);
    GVariant * (*ptr_g_menu_model_get_item_attribute_value)(GMenuModel * model, gint item_index, const gchar * attribute, const GVariantType * expected_type);
    GMenuLinkIter * (*ptr_g_menu_model_iterate_item_links)(GMenuModel * model, gint item_index);
    GMenuModel * (*ptr_g_menu_model_get_item_link)(GMenuModel * model, gint item_index, const gchar * link);
    void (*ptr_g_menu_model_items_changed)(GMenuModel * model, gint position, gint removed, gint added);
    GType (*ptr_g_menu_attribute_iter_get_type)(void);
    gboolean (*ptr_g_menu_attribute_iter_get_next)(GMenuAttributeIter * iter, const gchar * * out_name, GVariant * * value);
    gboolean (*ptr_g_menu_attribute_iter_next)(GMenuAttributeIter * iter);
    const gchar * (*ptr_g_menu_attribute_iter_get_name)(GMenuAttributeIter * iter);
    GVariant * (*ptr_g_menu_attribute_iter_get_value)(GMenuAttributeIter * iter);
    GType (*ptr_g_menu_link_iter_get_type)(void);
    gboolean (*ptr_g_menu_link_iter_get_next)(GMenuLinkIter * iter, const gchar * * out_link, GMenuModel * * value);
    gboolean (*ptr_g_menu_link_iter_next)(GMenuLinkIter * iter);
    const gchar * (*ptr_g_menu_link_iter_get_name)(GMenuLinkIter * iter);
    GMenuModel * (*ptr_g_menu_link_iter_get_value)(GMenuLinkIter * iter);
    GType (*ptr_g_menu_get_type)(void);
    GMenu * (*ptr_g_menu_new)(void);
    void (*ptr_g_menu_freeze)(GMenu * menu);
    void (*ptr_g_menu_insert_item)(GMenu * menu, gint position, GMenuItem * item);
    void (*ptr_g_menu_prepend_item)(GMenu * menu, GMenuItem * item);
    void (*ptr_g_menu_append_item)(GMenu * menu, GMenuItem * item);
    void (*ptr_g_menu_remove)(GMenu * menu, gint position);
    void (*ptr_g_menu_remove_all)(GMenu * menu);
    void (*ptr_g_menu_insert)(GMenu * menu, gint position, const gchar * label, const gchar * detailed_action);
    void (*ptr_g_menu_prepend)(GMenu * menu, const gchar * label, const gchar * detailed_action);
    void (*ptr_g_menu_append)(GMenu * menu, const gchar * label, const gchar * detailed_action);
    void (*ptr_g_menu_insert_section)(GMenu * menu, gint position, const gchar * label, GMenuModel * section);
    void (*ptr_g_menu_prepend_section)(GMenu * menu, const gchar * label, GMenuModel * section);
    void (*ptr_g_menu_append_section)(GMenu * menu, const gchar * label, GMenuModel * section);
    void (*ptr_g_menu_insert_submenu)(GMenu * menu, gint position, const gchar * label, GMenuModel * submenu);
    void (*ptr_g_menu_prepend_submenu)(GMenu * menu, const gchar * label, GMenuModel * submenu);
    void (*ptr_g_menu_append_submenu)(GMenu * menu, const gchar * label, GMenuModel * submenu);
    GType (*ptr_g_menu_item_get_type)(void);
    GMenuItem * (*ptr_g_menu_item_new)(const gchar * label, const gchar * detailed_action);
    GMenuItem * (*ptr_g_menu_item_new_from_model)(GMenuModel * model, gint item_index);
    GMenuItem * (*ptr_g_menu_item_new_submenu)(const gchar * label, GMenuModel * submenu);
    GMenuItem * (*ptr_g_menu_item_new_section)(const gchar * label, GMenuModel * section);
    GVariant * (*ptr_g_menu_item_get_attribute_value)(GMenuItem * menu_item, const gchar * attribute, const GVariantType * expected_type);
    GMenuModel * (*ptr_g_menu_item_get_link)(GMenuItem * menu_item, const gchar * link);
    void (*ptr_g_menu_item_set_attribute_value)(GMenuItem * menu_item, const gchar * attribute, GVariant * value);
    void (*ptr_g_menu_item_set_link)(GMenuItem * menu_item, const gchar * link, GMenuModel * model);
    void (*ptr_g_menu_item_set_label)(GMenuItem * menu_item, const gchar * label);
    void (*ptr_g_menu_item_set_submenu)(GMenuItem * menu_item, GMenuModel * submenu);
    void (*ptr_g_menu_item_set_section)(GMenuItem * menu_item, GMenuModel * section);
    void (*ptr_g_menu_item_set_action_and_target_value)(GMenuItem * menu_item, const gchar * action, GVariant * target_value);
    void (*ptr_g_menu_item_set_detailed_action)(GMenuItem * menu_item, const gchar * detailed_action);
    void (*ptr_g_menu_item_set_icon)(GMenuItem * menu_item, GIcon * icon);
    guint (*ptr_g_dbus_connection_export_menu_model)(GDBusConnection * connection, const gchar * object_path, GMenuModel * menu, GError * * error);
    void (*ptr_g_dbus_connection_unexport_menu_model)(GDBusConnection * connection, guint export_id);
    GType (*ptr_g_mount_get_type)(void);
    GFile * (*ptr_g_mount_get_root)(GMount * mount);
    GFile * (*ptr_g_mount_get_default_location)(GMount * mount);
    char * (*ptr_g_mount_get_name)(GMount * mount);
    GIcon * (*ptr_g_mount_get_icon)(GMount * mount);
    GIcon * (*ptr_g_mount_get_symbolic_icon)(GMount * mount);
    char * (*ptr_g_mount_get_uuid)(GMount * mount);
    GVolume * (*ptr_g_mount_get_volume)(GMount * mount);
    GDrive * (*ptr_g_mount_get_drive)(GMount * mount);
    gboolean (*ptr_g_mount_can_unmount)(GMount * mount);
    gboolean (*ptr_g_mount_can_eject)(GMount * mount);
    void (*ptr_g_mount_unmount)(GMount * mount, GMountUnmountFlags flags, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data);
    gboolean (*ptr_g_mount_unmount_finish)(GMount * mount, GAsyncResult * result, GError * * error);
    void (*ptr_g_mount_eject)(GMount * mount, GMountUnmountFlags flags, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data);
    gboolean (*ptr_g_mount_eject_finish)(GMount * mount, GAsyncResult * result, GError * * error);
    void (*ptr_g_mount_remount)(GMount * mount, GMountMountFlags flags, GMountOperation * mount_operation, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data);
    gboolean (*ptr_g_mount_remount_finish)(GMount * mount, GAsyncResult * result, GError * * error);
    void (*ptr_g_mount_guess_content_type)(GMount * mount, gboolean force_rescan, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data);
    gchar * * (*ptr_g_mount_guess_content_type_finish)(GMount * mount, GAsyncResult * result, GError * * error);
    gchar * * (*ptr_g_mount_guess_content_type_sync)(GMount * mount, gboolean force_rescan, GCancellable * cancellable, GError * * error);
    gboolean (*ptr_g_mount_is_shadowed)(GMount * mount);
    void (*ptr_g_mount_shadow)(GMount * mount);
    void (*ptr_g_mount_unshadow)(GMount * mount);
    void (*ptr_g_mount_unmount_with_operation)(GMount * mount, GMountUnmountFlags flags, GMountOperation * mount_operation, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data);
    gboolean (*ptr_g_mount_unmount_with_operation_finish)(GMount * mount, GAsyncResult * result, GError * * error);
    void (*ptr_g_mount_eject_with_operation)(GMount * mount, GMountUnmountFlags flags, GMountOperation * mount_operation, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data);
    gboolean (*ptr_g_mount_eject_with_operation_finish)(GMount * mount, GAsyncResult * result, GError * * error);
    const gchar * (*ptr_g_mount_get_sort_key)(GMount * mount);
    GType (*ptr_g_mount_operation_get_type)(void);
    GMountOperation * (*ptr_g_mount_operation_new)(void);
    const char * (*ptr_g_mount_operation_get_username)(GMountOperation * op);
    void (*ptr_g_mount_operation_set_username)(GMountOperation * op, const char * username);
    const char * (*ptr_g_mount_operation_get_password)(GMountOperation * op);
    void (*ptr_g_mount_operation_set_password)(GMountOperation * op, const char * password);
    gboolean (*ptr_g_mount_operation_get_anonymous)(GMountOperation * op);
    void (*ptr_g_mount_operation_set_anonymous)(GMountOperation * op, gboolean anonymous);
    const char * (*ptr_g_mount_operation_get_domain)(GMountOperation * op);
    void (*ptr_g_mount_operation_set_domain)(GMountOperation * op, const char * domain);
    GPasswordSave (*ptr_g_mount_operation_get_password_save)(GMountOperation * op);
    void (*ptr_g_mount_operation_set_password_save)(GMountOperation * op, GPasswordSave save);
    int (*ptr_g_mount_operation_get_choice)(GMountOperation * op);
    void (*ptr_g_mount_operation_set_choice)(GMountOperation * op, int choice);
    void (*ptr_g_mount_operation_reply)(GMountOperation * op, GMountOperationResult result);
    gboolean (*ptr_g_mount_operation_get_is_tcrypt_hidden_volume)(GMountOperation * op);
    void (*ptr_g_mount_operation_set_is_tcrypt_hidden_volume)(GMountOperation * op, gboolean hidden_volume);
    gboolean (*ptr_g_mount_operation_get_is_tcrypt_system_volume)(GMountOperation * op);
    void (*ptr_g_mount_operation_set_is_tcrypt_system_volume)(GMountOperation * op, gboolean system_volume);
    guint (*ptr_g_mount_operation_get_pim)(GMountOperation * op);
    void (*ptr_g_mount_operation_set_pim)(GMountOperation * op, guint pim);
    GType (*ptr_g_native_socket_address_get_type)(void);
    GSocketAddress * (*ptr_g_native_socket_address_new)(gpointer native, gsize len);
    GType (*ptr_g_volume_monitor_get_type)(void);
    GVolumeMonitor * (*ptr_g_volume_monitor_get)(void);
    GList * (*ptr_g_volume_monitor_get_connected_drives)(GVolumeMonitor * volume_monitor);
    GList * (*ptr_g_volume_monitor_get_volumes)(GVolumeMonitor * volume_monitor);
    GList * (*ptr_g_volume_monitor_get_mounts)(GVolumeMonitor * volume_monitor);
    GVolume * (*ptr_g_volume_monitor_get_volume_for_uuid)(GVolumeMonitor * volume_monitor, const char * uuid);
    GMount * (*ptr_g_volume_monitor_get_mount_for_uuid)(GVolumeMonitor * volume_monitor, const char * uuid);
    GVolume * (*ptr_g_volume_monitor_adopt_orphan_mount)(GMount * mount);
    GType (*ptr_g_native_volume_monitor_get_type)(void);
    GType (*ptr_g_network_address_get_type)(void);
    GSocketConnectable * (*ptr_g_network_address_new)(const gchar * hostname, guint16 port);
    GSocketConnectable * (*ptr_g_network_address_new_loopback)(guint16 port);
    GSocketConnectable * (*ptr_g_network_address_parse)(const gchar * host_and_port, guint16 default_port, GError * * error);
    GSocketConnectable * (*ptr_g_network_address_parse_uri)(const gchar * uri, guint16 default_port, GError * * error);
    const gchar * (*ptr_g_network_address_get_hostname)(GNetworkAddress * addr);
    guint16 (*ptr_g_network_address_get_port)(GNetworkAddress * addr);
    const gchar * (*ptr_g_network_address_get_scheme)(GNetworkAddress * addr);
    GType (*ptr_g_network_monitor_get_type)(void);
    GNetworkMonitor * (*ptr_g_network_monitor_get_default)(void);
    gboolean (*ptr_g_network_monitor_get_network_available)(GNetworkMonitor * monitor);
    gboolean (*ptr_g_network_monitor_get_network_metered)(GNetworkMonitor * monitor);
    GNetworkConnectivity (*ptr_g_network_monitor_get_connectivity)(GNetworkMonitor * monitor);
    gboolean (*ptr_g_network_monitor_can_reach)(GNetworkMonitor * monitor, GSocketConnectable * connectable, GCancellable * cancellable, GError * * error);
    void (*ptr_g_network_monitor_can_reach_async)(GNetworkMonitor * monitor, GSocketConnectable * connectable, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data);
    gboolean (*ptr_g_network_monitor_can_reach_finish)(GNetworkMonitor * monitor, GAsyncResult * result, GError * * error);
    GType (*ptr_g_network_service_get_type)(void);
    GSocketConnectable * (*ptr_g_network_service_new)(const gchar * service, const gchar * protocol, const gchar * domain);
    const gchar * (*ptr_g_network_service_get_service)(GNetworkService * srv);
    const gchar * (*ptr_g_network_service_get_protocol)(GNetworkService * srv);
    const gchar * (*ptr_g_network_service_get_domain)(GNetworkService * srv);
    const gchar * (*ptr_g_network_service_get_scheme)(GNetworkService * srv);
    void (*ptr_g_network_service_set_scheme)(GNetworkService * srv, const gchar * scheme);
    GType (*ptr_g_notification_get_type)(void);
    GNotification * (*ptr_g_notification_new)(const gchar * title);
    void (*ptr_g_notification_set_title)(GNotification * notification, const gchar * title);
    void (*ptr_g_notification_set_body)(GNotification * notification, const gchar * body);
    void (*ptr_g_notification_set_icon)(GNotification * notification, GIcon * icon);
    void (*ptr_g_notification_set_urgent)(GNotification * notification, gboolean urgent);
    void (*ptr_g_notification_set_priority)(GNotification * notification, GNotificationPriority priority);
    void (*ptr_g_notification_set_category)(GNotification * notification, const gchar * category);
    void (*ptr_g_notification_add_button)(GNotification * notification, const gchar * label, const gchar * detailed_action);
    void (*ptr_g_notification_add_button_with_target_value)(GNotification * notification, const gchar * label, const gchar * action, GVariant * target);
    void (*ptr_g_notification_set_default_action)(GNotification * notification, const gchar * detailed_action);
    void (*ptr_g_notification_set_default_action_and_target_value)(GNotification * notification, const gchar * action, GVariant * target);
    GType (*ptr_g_permission_get_type)(void);
    gboolean (*ptr_g_permission_acquire)(GPermission * permission, GCancellable * cancellable, GError * * error);
    void (*ptr_g_permission_acquire_async)(GPermission * permission, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data);
    gboolean (*ptr_g_permission_acquire_finish)(GPermission * permission, GAsyncResult * result, GError * * error);
    gboolean (*ptr_g_permission_release)(GPermission * permission, GCancellable * cancellable, GError * * error);
    void (*ptr_g_permission_release_async)(GPermission * permission, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data);
    gboolean (*ptr_g_permission_release_finish)(GPermission * permission, GAsyncResult * result, GError * * error);
    gboolean (*ptr_g_permission_get_allowed)(GPermission * permission);
    gboolean (*ptr_g_permission_get_can_acquire)(GPermission * permission);
    gboolean (*ptr_g_permission_get_can_release)(GPermission * permission);
    void (*ptr_g_permission_impl_update)(GPermission * permission, gboolean allowed, gboolean can_acquire, gboolean can_release);
    GType (*ptr_g_pollable_input_stream_get_type)(void);
    gboolean (*ptr_g_pollable_input_stream_can_poll)(GPollableInputStream * stream);
    gboolean (*ptr_g_pollable_input_stream_is_readable)(GPollableInputStream * stream);
    GSource * (*ptr_g_pollable_input_stream_create_source)(GPollableInputStream * stream, GCancellable * cancellable);
    gssize (*ptr_g_pollable_input_stream_read_nonblocking)(GPollableInputStream * stream, void * buffer, gsize count, GCancellable * cancellable, GError * * error);
    GType (*ptr_g_pollable_output_stream_get_type)(void);
    gboolean (*ptr_g_pollable_output_stream_can_poll)(GPollableOutputStream * stream);
    gboolean (*ptr_g_pollable_output_stream_is_writable)(GPollableOutputStream * stream);
    GSource * (*ptr_g_pollable_output_stream_create_source)(GPollableOutputStream * stream, GCancellable * cancellable);
    gssize (*ptr_g_pollable_output_stream_write_nonblocking)(GPollableOutputStream * stream, const void * buffer, gsize count, GCancellable * cancellable, GError * * error);
    GPollableReturn (*ptr_g_pollable_output_stream_writev_nonblocking)(GPollableOutputStream * stream, const GOutputVector * vectors, gsize n_vectors, gsize * bytes_written, GCancellable * cancellable, GError * * error);
    GSource * (*ptr_g_pollable_source_new)(GObject * pollable_stream);
    GSource * (*ptr_g_pollable_source_new_full)(gpointer pollable_stream, GSource * child_source, GCancellable * cancellable);
    gssize (*ptr_g_pollable_stream_read)(GInputStream * stream, void * buffer, gsize count, gboolean blocking, GCancellable * cancellable, GError * * error);
    gssize (*ptr_g_pollable_stream_write)(GOutputStream * stream, const void * buffer, gsize count, gboolean blocking, GCancellable * cancellable, GError * * error);
    gboolean (*ptr_g_pollable_stream_write_all)(GOutputStream * stream, const void * buffer, gsize count, gboolean blocking, gsize * bytes_written, GCancellable * cancellable, GError * * error);
    GType (*ptr_g_power_profile_monitor_get_type)(void);
    GPowerProfileMonitor * (*ptr_g_power_profile_monitor_dup_default)(void);
    gboolean (*ptr_g_power_profile_monitor_get_power_saver_enabled)(GPowerProfileMonitor * monitor);
    GType (*ptr_g_property_action_get_type)(void);
    GPropertyAction * (*ptr_g_property_action_new)(const gchar * name, gpointer object, const gchar * property_name);
    GType (*ptr_g_proxy_get_type)(void);
    GProxy * (*ptr_g_proxy_get_default_for_protocol)(const gchar * protocol);
    GIOStream * (*ptr_g_proxy_connect)(GProxy * proxy, GIOStream * connection, GProxyAddress * proxy_address, GCancellable * cancellable, GError * * error);
    void (*ptr_g_proxy_connect_async)(GProxy * proxy, GIOStream * connection, GProxyAddress * proxy_address, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data);
    GIOStream * (*ptr_g_proxy_connect_finish)(GProxy * proxy, GAsyncResult * result, GError * * error);
    gboolean (*ptr_g_proxy_supports_hostname)(GProxy * proxy);
    GType (*ptr_g_proxy_address_get_type)(void);
    GSocketAddress * (*ptr_g_proxy_address_new)(GInetAddress * inetaddr, guint16 port, const gchar * protocol, const gchar * dest_hostname, guint16 dest_port, const gchar * username, const gchar * password);
    const gchar * (*ptr_g_proxy_address_get_protocol)(GProxyAddress * proxy);
    const gchar * (*ptr_g_proxy_address_get_destination_protocol)(GProxyAddress * proxy);
    const gchar * (*ptr_g_proxy_address_get_destination_hostname)(GProxyAddress * proxy);
    guint16 (*ptr_g_proxy_address_get_destination_port)(GProxyAddress * proxy);
    const gchar * (*ptr_g_proxy_address_get_username)(GProxyAddress * proxy);
    const gchar * (*ptr_g_proxy_address_get_password)(GProxyAddress * proxy);
    const gchar * (*ptr_g_proxy_address_get_uri)(GProxyAddress * proxy);
    GType (*ptr_g_socket_address_enumerator_get_type)(void);
    GSocketAddress * (*ptr_g_socket_address_enumerator_next)(GSocketAddressEnumerator * enumerator, GCancellable * cancellable, GError * * error);
    void (*ptr_g_socket_address_enumerator_next_async)(GSocketAddressEnumerator * enumerator, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data);
    GSocketAddress * (*ptr_g_socket_address_enumerator_next_finish)(GSocketAddressEnumerator * enumerator, GAsyncResult * result, GError * * error);
    GType (*ptr_g_proxy_address_enumerator_get_type)(void);
    GType (*ptr_g_proxy_resolver_get_type)(void);
    GProxyResolver * (*ptr_g_proxy_resolver_get_default)(void);
    gboolean (*ptr_g_proxy_resolver_is_supported)(GProxyResolver * resolver);
    gchar * * (*ptr_g_proxy_resolver_lookup)(GProxyResolver * resolver, const gchar * uri, GCancellable * cancellable, GError * * error);
    void (*ptr_g_proxy_resolver_lookup_async)(GProxyResolver * resolver, const gchar * uri, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data);
    gchar * * (*ptr_g_proxy_resolver_lookup_finish)(GProxyResolver * resolver, GAsyncResult * result, GError * * error);
    GType (*ptr_g_remote_action_group_get_type)(void);
    void (*ptr_g_remote_action_group_activate_action_full)(GRemoteActionGroup * remote, const gchar * action_name, GVariant * parameter, GVariant * platform_data);
    void (*ptr_g_remote_action_group_change_action_state_full)(GRemoteActionGroup * remote, const gchar * action_name, GVariant * value, GVariant * platform_data);
    GType (*ptr_g_resolver_get_type)(void);
    GResolver * (*ptr_g_resolver_get_default)(void);
    void (*ptr_g_resolver_set_default)(GResolver * resolver);
    GList * (*ptr_g_resolver_lookup_by_name)(GResolver * resolver, const gchar * hostname, GCancellable * cancellable, GError * * error);
    void (*ptr_g_resolver_lookup_by_name_async)(GResolver * resolver, const gchar * hostname, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data);
    GList * (*ptr_g_resolver_lookup_by_name_finish)(GResolver * resolver, GAsyncResult * result, GError * * error);
    void (*ptr_g_resolver_lookup_by_name_with_flags_async)(GResolver * resolver, const gchar * hostname, GResolverNameLookupFlags flags, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data);
    GList * (*ptr_g_resolver_lookup_by_name_with_flags_finish)(GResolver * resolver, GAsyncResult * result, GError * * error);
    GList * (*ptr_g_resolver_lookup_by_name_with_flags)(GResolver * resolver, const gchar * hostname, GResolverNameLookupFlags flags, GCancellable * cancellable, GError * * error);
    void (*ptr_g_resolver_free_addresses)(GList * addresses);
    gchar * (*ptr_g_resolver_lookup_by_address)(GResolver * resolver, GInetAddress * address, GCancellable * cancellable, GError * * error);
    void (*ptr_g_resolver_lookup_by_address_async)(GResolver * resolver, GInetAddress * address, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data);
    gchar * (*ptr_g_resolver_lookup_by_address_finish)(GResolver * resolver, GAsyncResult * result, GError * * error);
    GList * (*ptr_g_resolver_lookup_service)(GResolver * resolver, const gchar * service, const gchar * protocol, const gchar * domain, GCancellable * cancellable, GError * * error);
    void (*ptr_g_resolver_lookup_service_async)(GResolver * resolver, const gchar * service, const gchar * protocol, const gchar * domain, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data);
    GList * (*ptr_g_resolver_lookup_service_finish)(GResolver * resolver, GAsyncResult * result, GError * * error);
    GList * (*ptr_g_resolver_lookup_records)(GResolver * resolver, const gchar * rrname, GResolverRecordType record_type, GCancellable * cancellable, GError * * error);
    void (*ptr_g_resolver_lookup_records_async)(GResolver * resolver, const gchar * rrname, GResolverRecordType record_type, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data);
    GList * (*ptr_g_resolver_lookup_records_finish)(GResolver * resolver, GAsyncResult * result, GError * * error);
    void (*ptr_g_resolver_free_targets)(GList * targets);
    unsigned int (*ptr_g_resolver_get_timeout)(GResolver * resolver);
    void (*ptr_g_resolver_set_timeout)(GResolver * resolver, unsigned int timeout_ms);
    GQuark (*ptr_g_resolver_error_quark)(void);
    GQuark (*ptr_g_resource_error_quark)(void);
    GType (*ptr_g_resource_get_type)(void);
    GResource * (*ptr_g_resource_new_from_data)(GBytes * data, GError * * error);
    GResource * (*ptr_g_resource_ref)(GResource * resource);
    void (*ptr_g_resource_unref)(GResource * resource);
    GResource * (*ptr_g_resource_load)(const gchar * filename, GError * * error);
    GInputStream * (*ptr_g_resource_open_stream)(GResource * resource, const char * path, GResourceLookupFlags lookup_flags, GError * * error);
    GBytes * (*ptr_g_resource_lookup_data)(GResource * resource, const char * path, GResourceLookupFlags lookup_flags, GError * * error);
    char * * (*ptr_g_resource_enumerate_children)(GResource * resource, const char * path, GResourceLookupFlags lookup_flags, GError * * error);
    gboolean (*ptr_g_resource_get_info)(GResource * resource, const char * path, GResourceLookupFlags lookup_flags, gsize * size, guint32 * flags, GError * * error);
    void (*ptr_g_resources_register)(GResource * resource);
    void (*ptr_g_resources_unregister)(GResource * resource);
    GInputStream * (*ptr_g_resources_open_stream)(const char * path, GResourceLookupFlags lookup_flags, GError * * error);
    GBytes * (*ptr_g_resources_lookup_data)(const char * path, GResourceLookupFlags lookup_flags, GError * * error);
    char * * (*ptr_g_resources_enumerate_children)(const char * path, GResourceLookupFlags lookup_flags, GError * * error);
    gboolean (*ptr_g_resources_get_info)(const char * path, GResourceLookupFlags lookup_flags, gsize * size, guint32 * flags, GError * * error);
    void (*ptr_g_static_resource_init)(GStaticResource * static_resource);
    void (*ptr_g_static_resource_fini)(GStaticResource * static_resource);
    GResource * (*ptr_g_static_resource_get_resource)(GStaticResource * static_resource);
    GType (*ptr_g_seekable_get_type)(void);
    goffset (*ptr_g_seekable_tell)(GSeekable * seekable);
    gboolean (*ptr_g_seekable_can_seek)(GSeekable * seekable);
    gboolean (*ptr_g_seekable_seek)(GSeekable * seekable, goffset offset, GSeekType type, GCancellable * cancellable, GError * * error);
    gboolean (*ptr_g_seekable_can_truncate)(GSeekable * seekable);
    gboolean (*ptr_g_seekable_truncate)(GSeekable * seekable, goffset offset, GCancellable * cancellable, GError * * error);
    GType (*ptr_g_settings_schema_source_get_type)(void);
    GSettingsSchemaSource * (*ptr_g_settings_schema_source_get_default)(void);
    GSettingsSchemaSource * (*ptr_g_settings_schema_source_ref)(GSettingsSchemaSource * source);
    void (*ptr_g_settings_schema_source_unref)(GSettingsSchemaSource * source);
    GSettingsSchemaSource * (*ptr_g_settings_schema_source_new_from_directory)(const gchar * directory, GSettingsSchemaSource * parent, gboolean trusted, GError * * error);
    GSettingsSchema * (*ptr_g_settings_schema_source_lookup)(GSettingsSchemaSource * source, const gchar * schema_id, gboolean recursive);
    void (*ptr_g_settings_schema_source_list_schemas)(GSettingsSchemaSource * source, gboolean recursive, gchar * * * non_relocatable, gchar * * * relocatable);
    GType (*ptr_g_settings_schema_get_type)(void);
    GSettingsSchema * (*ptr_g_settings_schema_ref)(GSettingsSchema * schema);
    void (*ptr_g_settings_schema_unref)(GSettingsSchema * schema);
    const gchar * (*ptr_g_settings_schema_get_id)(GSettingsSchema * schema);
    const gchar * (*ptr_g_settings_schema_get_path)(GSettingsSchema * schema);
    GSettingsSchemaKey * (*ptr_g_settings_schema_get_key)(GSettingsSchema * schema, const gchar * name);
    gboolean (*ptr_g_settings_schema_has_key)(GSettingsSchema * schema, const gchar * name);
    gchar * * (*ptr_g_settings_schema_list_keys)(GSettingsSchema * schema);
    gchar * * (*ptr_g_settings_schema_list_children)(GSettingsSchema * schema);
    GType (*ptr_g_settings_schema_key_get_type)(void);
    GSettingsSchemaKey * (*ptr_g_settings_schema_key_ref)(GSettingsSchemaKey * key);
    void (*ptr_g_settings_schema_key_unref)(GSettingsSchemaKey * key);
    const GVariantType * (*ptr_g_settings_schema_key_get_value_type)(GSettingsSchemaKey * key);
    GVariant * (*ptr_g_settings_schema_key_get_default_value)(GSettingsSchemaKey * key);
    GVariant * (*ptr_g_settings_schema_key_get_range)(GSettingsSchemaKey * key);
    gboolean (*ptr_g_settings_schema_key_range_check)(GSettingsSchemaKey * key, GVariant * value);
    const gchar * (*ptr_g_settings_schema_key_get_name)(GSettingsSchemaKey * key);
    const gchar * (*ptr_g_settings_schema_key_get_summary)(GSettingsSchemaKey * key);
    const gchar * (*ptr_g_settings_schema_key_get_description)(GSettingsSchemaKey * key);
    GType (*ptr_g_settings_get_type)(void);
    const gchar * const * (*ptr_g_settings_list_schemas)(void);
    const gchar * const * (*ptr_g_settings_list_relocatable_schemas)(void);
    GSettings * (*ptr_g_settings_new)(const gchar * schema_id);
    GSettings * (*ptr_g_settings_new_with_path)(const gchar * schema_id, const gchar * path);
    GSettings * (*ptr_g_settings_new_with_backend)(const gchar * schema_id, GSettingsBackend * backend);
    GSettings * (*ptr_g_settings_new_with_backend_and_path)(const gchar * schema_id, GSettingsBackend * backend, const gchar * path);
    GSettings * (*ptr_g_settings_new_full)(GSettingsSchema * schema, GSettingsBackend * backend, const gchar * path);
    gchar * * (*ptr_g_settings_list_children)(GSettings * settings);
    gchar * * (*ptr_g_settings_list_keys)(GSettings * settings);
    GVariant * (*ptr_g_settings_get_range)(GSettings * settings, const gchar * key);
    gboolean (*ptr_g_settings_range_check)(GSettings * settings, const gchar * key, GVariant * value);
    gboolean (*ptr_g_settings_set_value)(GSettings * settings, const gchar * key, GVariant * value);
    GVariant * (*ptr_g_settings_get_value)(GSettings * settings, const gchar * key);
    GVariant * (*ptr_g_settings_get_user_value)(GSettings * settings, const gchar * key);
    GVariant * (*ptr_g_settings_get_default_value)(GSettings * settings, const gchar * key);
    void (*ptr_g_settings_reset)(GSettings * settings, const gchar * key);
    gint (*ptr_g_settings_get_int)(GSettings * settings, const gchar * key);
    gboolean (*ptr_g_settings_set_int)(GSettings * settings, const gchar * key, gint value);
    gint64 (*ptr_g_settings_get_int64)(GSettings * settings, const gchar * key);
    gboolean (*ptr_g_settings_set_int64)(GSettings * settings, const gchar * key, gint64 value);
    guint (*ptr_g_settings_get_uint)(GSettings * settings, const gchar * key);
    gboolean (*ptr_g_settings_set_uint)(GSettings * settings, const gchar * key, guint value);
    guint64 (*ptr_g_settings_get_uint64)(GSettings * settings, const gchar * key);
    gboolean (*ptr_g_settings_set_uint64)(GSettings * settings, const gchar * key, guint64 value);
    gchar * (*ptr_g_settings_get_string)(GSettings * settings, const gchar * key);
    gboolean (*ptr_g_settings_set_string)(GSettings * settings, const gchar * key, const gchar * value);
    gboolean (*ptr_g_settings_get_boolean)(GSettings * settings, const gchar * key);
    gboolean (*ptr_g_settings_set_boolean)(GSettings * settings, const gchar * key, gboolean value);
    gdouble (*ptr_g_settings_get_double)(GSettings * settings, const gchar * key);
    gboolean (*ptr_g_settings_set_double)(GSettings * settings, const gchar * key, gdouble value);
    gchar * * (*ptr_g_settings_get_strv)(GSettings * settings, const gchar * key);
    gboolean (*ptr_g_settings_set_strv)(GSettings * settings, const gchar * key, const gchar * const * value);
    gint (*ptr_g_settings_get_enum)(GSettings * settings, const gchar * key);
    gboolean (*ptr_g_settings_set_enum)(GSettings * settings, const gchar * key, gint value);
    guint (*ptr_g_settings_get_flags)(GSettings * settings, const gchar * key);
    gboolean (*ptr_g_settings_set_flags)(GSettings * settings, const gchar * key, guint value);
    GSettings * (*ptr_g_settings_get_child)(GSettings * settings, const gchar * name);
    gboolean (*ptr_g_settings_is_writable)(GSettings * settings, const gchar * name);
    void (*ptr_g_settings_delay)(GSettings * settings);
    void (*ptr_g_settings_apply)(GSettings * settings);
    void (*ptr_g_settings_revert)(GSettings * settings);
    gboolean (*ptr_g_settings_get_has_unapplied)(GSettings * settings);
    void (*ptr_g_settings_sync)(void);
    void (*ptr_g_settings_bind)(GSettings * settings, const gchar * key, gpointer object, const gchar * property, GSettingsBindFlags flags);
    void (*ptr_g_settings_bind_with_mapping)(GSettings * settings, const gchar * key, gpointer object, const gchar * property, GSettingsBindFlags flags, GSettingsBindGetMapping get_mapping, GSettingsBindSetMapping set_mapping, gpointer user_data, GDestroyNotify destroy);
    void (*ptr_g_settings_bind_with_mapping_closures)(GSettings * settings, const char * key, GObject * object, const char * property, GSettingsBindFlags flags, GClosure * get_mapping, GClosure * set_mapping);
    void (*ptr_g_settings_bind_writable)(GSettings * settings, const gchar * key, gpointer object, const gchar * property, gboolean inverted);
    void (*ptr_g_settings_unbind)(gpointer object, const gchar * property);
    GAction * (*ptr_g_settings_create_action)(GSettings * settings, const gchar * key);
    gpointer (*ptr_g_settings_get_mapped)(GSettings * settings, const gchar * key, GSettingsGetMapping mapping, gpointer user_data);
    GType (*ptr_g_simple_action_get_type)(void);
    GSimpleAction * (*ptr_g_simple_action_new)(const gchar * name, const GVariantType * parameter_type);
    GSimpleAction * (*ptr_g_simple_action_new_stateful)(const gchar * name, const GVariantType * parameter_type, GVariant * state);
    void (*ptr_g_simple_action_set_enabled)(GSimpleAction * simple, gboolean enabled);
    void (*ptr_g_simple_action_set_state)(GSimpleAction * simple, GVariant * value);
    void (*ptr_g_simple_action_set_state_hint)(GSimpleAction * simple, GVariant * state_hint);
    GType (*ptr_g_simple_action_group_get_type)(void);
    GSimpleActionGroup * (*ptr_g_simple_action_group_new)(void);
    GAction * (*ptr_g_simple_action_group_lookup)(GSimpleActionGroup * simple, const gchar * action_name);
    void (*ptr_g_simple_action_group_insert)(GSimpleActionGroup * simple, GAction * action);
    void (*ptr_g_simple_action_group_remove)(GSimpleActionGroup * simple, const gchar * action_name);
    void (*ptr_g_simple_action_group_add_entries)(GSimpleActionGroup * simple, const GActionEntry * entries, gint n_entries, gpointer user_data);
    GType (*ptr_g_simple_async_result_get_type)(void);
    GSimpleAsyncResult * (*ptr_g_simple_async_result_new)(GObject * source_object, GAsyncReadyCallback callback, gpointer user_data, gpointer source_tag);
    GSimpleAsyncResult * (*ptr_g_simple_async_result_new_from_error)(GObject * source_object, GAsyncReadyCallback callback, gpointer user_data, const GError * error);
    GSimpleAsyncResult * (*ptr_g_simple_async_result_new_take_error)(GObject * source_object, GAsyncReadyCallback callback, gpointer user_data, GError * error);
    void (*ptr_g_simple_async_result_set_op_res_gpointer)(GSimpleAsyncResult * simple, gpointer op_res, GDestroyNotify destroy_op_res);
    gpointer (*ptr_g_simple_async_result_get_op_res_gpointer)(GSimpleAsyncResult * simple);
    void (*ptr_g_simple_async_result_set_op_res_gssize)(GSimpleAsyncResult * simple, gssize op_res);
    gssize (*ptr_g_simple_async_result_get_op_res_gssize)(GSimpleAsyncResult * simple);
    void (*ptr_g_simple_async_result_set_op_res_gboolean)(GSimpleAsyncResult * simple, gboolean op_res);
    gboolean (*ptr_g_simple_async_result_get_op_res_gboolean)(GSimpleAsyncResult * simple);
    void (*ptr_g_simple_async_result_set_check_cancellable)(GSimpleAsyncResult * simple, GCancellable * check_cancellable);
    gpointer (*ptr_g_simple_async_result_get_source_tag)(GSimpleAsyncResult * simple);
    void (*ptr_g_simple_async_result_set_handle_cancellation)(GSimpleAsyncResult * simple, gboolean handle_cancellation);
    void (*ptr_g_simple_async_result_complete)(GSimpleAsyncResult * simple);
    void (*ptr_g_simple_async_result_complete_in_idle)(GSimpleAsyncResult * simple);
    void (*ptr_g_simple_async_result_run_in_thread)(GSimpleAsyncResult * simple, GSimpleAsyncThreadFunc func, int io_priority, GCancellable * cancellable);
    void (*ptr_g_simple_async_result_set_from_error)(GSimpleAsyncResult * simple, const GError * error);
    void (*ptr_g_simple_async_result_take_error)(GSimpleAsyncResult * simple, GError * error);
    gboolean (*ptr_g_simple_async_result_propagate_error)(GSimpleAsyncResult * simple, GError * * dest);
    void (*ptr_g_simple_async_result_set_error)(GSimpleAsyncResult * simple, GQuark domain, gint code, const char * format, ...);
    void (*ptr_g_simple_async_result_set_error_va)(GSimpleAsyncResult * simple, GQuark domain, gint code, const char * format, va_list args);
    gboolean (*ptr_g_simple_async_result_is_valid)(GAsyncResult * result, GObject * source, gpointer source_tag);
    void (*ptr_g_simple_async_report_gerror_in_idle)(GObject * object, GAsyncReadyCallback callback, gpointer user_data, const GError * error);
    void (*ptr_g_simple_async_report_take_gerror_in_idle)(GObject * object, GAsyncReadyCallback callback, gpointer user_data, GError * error);
    GType (*ptr_g_simple_io_stream_get_type)(void);
    GIOStream * (*ptr_g_simple_io_stream_new)(GInputStream * input_stream, GOutputStream * output_stream);
    GType (*ptr_g_simple_permission_get_type)(void);
    GPermission * (*ptr_g_simple_permission_new)(gboolean allowed);
    GType (*ptr_g_simple_proxy_resolver_get_type)(void);
    GProxyResolver * (*ptr_g_simple_proxy_resolver_new)(const gchar * default_proxy, gchar * * ignore_hosts);
    void (*ptr_g_simple_proxy_resolver_set_default_proxy)(GSimpleProxyResolver * resolver, const gchar * default_proxy);
    void (*ptr_g_simple_proxy_resolver_set_ignore_hosts)(GSimpleProxyResolver * resolver, gchar * * ignore_hosts);
    void (*ptr_g_simple_proxy_resolver_set_uri_proxy)(GSimpleProxyResolver * resolver, const gchar * uri_scheme, const gchar * proxy);
    GType (*ptr_g_socket_get_type)(void);
    GSocket * (*ptr_g_socket_new)(GSocketFamily family, GSocketType type, GSocketProtocol protocol, GError * * error);
    GSocket * (*ptr_g_socket_new_from_fd)(gint fd, GError * * error);
    int (*ptr_g_socket_get_fd)(GSocket * socket);
    GSocketFamily (*ptr_g_socket_get_family)(GSocket * socket);
    GSocketType (*ptr_g_socket_get_socket_type)(GSocket * socket);
    GSocketProtocol (*ptr_g_socket_get_protocol)(GSocket * socket);
    GSocketAddress * (*ptr_g_socket_get_local_address)(GSocket * socket, GError * * error);
    GSocketAddress * (*ptr_g_socket_get_remote_address)(GSocket * socket, GError * * error);
    void (*ptr_g_socket_set_blocking)(GSocket * socket, gboolean blocking);
    gboolean (*ptr_g_socket_get_blocking)(GSocket * socket);
    void (*ptr_g_socket_set_keepalive)(GSocket * socket, gboolean keepalive);
    gboolean (*ptr_g_socket_get_keepalive)(GSocket * socket);
    gint (*ptr_g_socket_get_listen_backlog)(GSocket * socket);
    void (*ptr_g_socket_set_listen_backlog)(GSocket * socket, gint backlog);
    guint (*ptr_g_socket_get_timeout)(GSocket * socket);
    void (*ptr_g_socket_set_timeout)(GSocket * socket, guint timeout);
    guint (*ptr_g_socket_get_ttl)(GSocket * socket);
    void (*ptr_g_socket_set_ttl)(GSocket * socket, guint ttl);
    gboolean (*ptr_g_socket_get_broadcast)(GSocket * socket);
    void (*ptr_g_socket_set_broadcast)(GSocket * socket, gboolean broadcast);
    gboolean (*ptr_g_socket_get_multicast_loopback)(GSocket * socket);
    void (*ptr_g_socket_set_multicast_loopback)(GSocket * socket, gboolean loopback);
    guint (*ptr_g_socket_get_multicast_ttl)(GSocket * socket);
    void (*ptr_g_socket_set_multicast_ttl)(GSocket * socket, guint ttl);
    gboolean (*ptr_g_socket_is_connected)(GSocket * socket);
    gboolean (*ptr_g_socket_bind)(GSocket * socket, GSocketAddress * address, gboolean allow_reuse, GError * * error);
    gboolean (*ptr_g_socket_join_multicast_group)(GSocket * socket, GInetAddress * group, gboolean source_specific, const gchar * iface, GError * * error);
    gboolean (*ptr_g_socket_leave_multicast_group)(GSocket * socket, GInetAddress * group, gboolean source_specific, const gchar * iface, GError * * error);
    gboolean (*ptr_g_socket_join_multicast_group_ssm)(GSocket * socket, GInetAddress * group, GInetAddress * source_specific, const gchar * iface, GError * * error);
    gboolean (*ptr_g_socket_leave_multicast_group_ssm)(GSocket * socket, GInetAddress * group, GInetAddress * source_specific, const gchar * iface, GError * * error);
    gboolean (*ptr_g_socket_connect)(GSocket * socket, GSocketAddress * address, GCancellable * cancellable, GError * * error);
    gboolean (*ptr_g_socket_check_connect_result)(GSocket * socket, GError * * error);
    gssize (*ptr_g_socket_get_available_bytes)(GSocket * socket);
    GIOCondition (*ptr_g_socket_condition_check)(GSocket * socket, GIOCondition condition);
    gboolean (*ptr_g_socket_condition_wait)(GSocket * socket, GIOCondition condition, GCancellable * cancellable, GError * * error);
    gboolean (*ptr_g_socket_condition_timed_wait)(GSocket * socket, GIOCondition condition, gint64 timeout_us, GCancellable * cancellable, GError * * error);
    GSocket * (*ptr_g_socket_accept)(GSocket * socket, GCancellable * cancellable, GError * * error);
    gboolean (*ptr_g_socket_listen)(GSocket * socket, GError * * error);
    gssize (*ptr_g_socket_receive)(GSocket * socket, gchar * buffer, gsize size, GCancellable * cancellable, GError * * error);
    GBytes * (*ptr_g_socket_receive_bytes)(GSocket * socket, gsize size, gint64 timeout_us, GCancellable * cancellable, GError * * error);
    gssize (*ptr_g_socket_receive_from)(GSocket * socket, GSocketAddress * * address, gchar * buffer, gsize size, GCancellable * cancellable, GError * * error);
    GBytes * (*ptr_g_socket_receive_bytes_from)(GSocket * socket, GSocketAddress * * address, gsize size, gint64 timeout_us, GCancellable * cancellable, GError * * error);
    gssize (*ptr_g_socket_send)(GSocket * socket, const gchar * buffer, gsize size, GCancellable * cancellable, GError * * error);
    gssize (*ptr_g_socket_send_to)(GSocket * socket, GSocketAddress * address, const gchar * buffer, gsize size, GCancellable * cancellable, GError * * error);
    gssize (*ptr_g_socket_receive_message)(GSocket * socket, GSocketAddress * * address, GInputVector * vectors, gint num_vectors, GSocketControlMessage * * * messages, gint * num_messages, gint * flags, GCancellable * cancellable, GError * * error);
    gssize (*ptr_g_socket_send_message)(GSocket * socket, GSocketAddress * address, GOutputVector * vectors, gint num_vectors, GSocketControlMessage * * messages, gint num_messages, gint flags, GCancellable * cancellable, GError * * error);
    gint (*ptr_g_socket_receive_messages)(GSocket * socket, GInputMessage * messages, guint num_messages, gint flags, GCancellable * cancellable, GError * * error);
    gint (*ptr_g_socket_send_messages)(GSocket * socket, GOutputMessage * messages, guint num_messages, gint flags, GCancellable * cancellable, GError * * error);
    gboolean (*ptr_g_socket_close)(GSocket * socket, GError * * error);
    gboolean (*ptr_g_socket_shutdown)(GSocket * socket, gboolean shutdown_read, gboolean shutdown_write, GError * * error);
    gboolean (*ptr_g_socket_is_closed)(GSocket * socket);
    GSource * (*ptr_g_socket_create_source)(GSocket * socket, GIOCondition condition, GCancellable * cancellable);
    gboolean (*ptr_g_socket_speaks_ipv4)(GSocket * socket);
    GCredentials * (*ptr_g_socket_get_credentials)(GSocket * socket, GError * * error);
    gssize (*ptr_g_socket_receive_with_blocking)(GSocket * socket, gchar * buffer, gsize size, gboolean blocking, GCancellable * cancellable, GError * * error);
    gssize (*ptr_g_socket_send_with_blocking)(GSocket * socket, const gchar * buffer, gsize size, gboolean blocking, GCancellable * cancellable, GError * * error);
    GPollableReturn (*ptr_g_socket_send_message_with_timeout)(GSocket * socket, GSocketAddress * address, const GOutputVector * vectors, gint num_vectors, GSocketControlMessage * * messages, gint num_messages, gint flags, gint64 timeout_us, gsize * bytes_written, GCancellable * cancellable, GError * * error);
    gboolean (*ptr_g_socket_get_option)(GSocket * socket, gint level, gint optname, gint * value, GError * * error);
    gboolean (*ptr_g_socket_set_option)(GSocket * socket, gint level, gint optname, gint value, GError * * error);
    GType (*ptr_g_socket_client_get_type)(void);
    GSocketClient * (*ptr_g_socket_client_new)(void);
    GSocketFamily (*ptr_g_socket_client_get_family)(GSocketClient * client);
    void (*ptr_g_socket_client_set_family)(GSocketClient * client, GSocketFamily family);
    GSocketType (*ptr_g_socket_client_get_socket_type)(GSocketClient * client);
    void (*ptr_g_socket_client_set_socket_type)(GSocketClient * client, GSocketType type);
    GSocketProtocol (*ptr_g_socket_client_get_protocol)(GSocketClient * client);
    void (*ptr_g_socket_client_set_protocol)(GSocketClient * client, GSocketProtocol protocol);
    GSocketAddress * (*ptr_g_socket_client_get_local_address)(GSocketClient * client);
    void (*ptr_g_socket_client_set_local_address)(GSocketClient * client, GSocketAddress * address);
    guint (*ptr_g_socket_client_get_timeout)(GSocketClient * client);
    void (*ptr_g_socket_client_set_timeout)(GSocketClient * client, guint timeout);
    gboolean (*ptr_g_socket_client_get_enable_proxy)(GSocketClient * client);
    void (*ptr_g_socket_client_set_enable_proxy)(GSocketClient * client, gboolean enable);
    gboolean (*ptr_g_socket_client_get_tls)(GSocketClient * client);
    void (*ptr_g_socket_client_set_tls)(GSocketClient * client, gboolean tls);
    GTlsCertificateFlags (*ptr_g_socket_client_get_tls_validation_flags)(GSocketClient * client);
    void (*ptr_g_socket_client_set_tls_validation_flags)(GSocketClient * client, GTlsCertificateFlags flags);
    GProxyResolver * (*ptr_g_socket_client_get_proxy_resolver)(GSocketClient * client);
    void (*ptr_g_socket_client_set_proxy_resolver)(GSocketClient * client, GProxyResolver * proxy_resolver);
    GSocketConnection * (*ptr_g_socket_client_connect)(GSocketClient * client, GSocketConnectable * connectable, GCancellable * cancellable, GError * * error);
    GSocketConnection * (*ptr_g_socket_client_connect_to_host)(GSocketClient * client, const gchar * host_and_port, guint16 default_port, GCancellable * cancellable, GError * * error);
    GSocketConnection * (*ptr_g_socket_client_connect_to_service)(GSocketClient * client, const gchar * domain, const gchar * service, GCancellable * cancellable, GError * * error);
    GSocketConnection * (*ptr_g_socket_client_connect_to_uri)(GSocketClient * client, const gchar * uri, guint16 default_port, GCancellable * cancellable, GError * * error);
    void (*ptr_g_socket_client_connect_async)(GSocketClient * client, GSocketConnectable * connectable, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data);
    GSocketConnection * (*ptr_g_socket_client_connect_finish)(GSocketClient * client, GAsyncResult * result, GError * * error);
    void (*ptr_g_socket_client_connect_to_host_async)(GSocketClient * client, const gchar * host_and_port, guint16 default_port, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data);
    GSocketConnection * (*ptr_g_socket_client_connect_to_host_finish)(GSocketClient * client, GAsyncResult * result, GError * * error);
    void (*ptr_g_socket_client_connect_to_service_async)(GSocketClient * client, const gchar * domain, const gchar * service, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data);
    GSocketConnection * (*ptr_g_socket_client_connect_to_service_finish)(GSocketClient * client, GAsyncResult * result, GError * * error);
    void (*ptr_g_socket_client_connect_to_uri_async)(GSocketClient * client, const gchar * uri, guint16 default_port, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data);
    GSocketConnection * (*ptr_g_socket_client_connect_to_uri_finish)(GSocketClient * client, GAsyncResult * result, GError * * error);
    void (*ptr_g_socket_client_add_application_proxy)(GSocketClient * client, const gchar * protocol);
    GType (*ptr_g_socket_connectable_get_type)(void);
    GSocketAddressEnumerator * (*ptr_g_socket_connectable_enumerate)(GSocketConnectable * connectable);
    GSocketAddressEnumerator * (*ptr_g_socket_connectable_proxy_enumerate)(GSocketConnectable * connectable);
    gchar * (*ptr_g_socket_connectable_to_string)(GSocketConnectable * connectable);
    GType (*ptr_g_socket_connection_get_type)(void);
    gboolean (*ptr_g_socket_connection_is_connected)(GSocketConnection * connection);
    gboolean (*ptr_g_socket_connection_connect)(GSocketConnection * connection, GSocketAddress * address, GCancellable * cancellable, GError * * error);
    void (*ptr_g_socket_connection_connect_async)(GSocketConnection * connection, GSocketAddress * address, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data);
    gboolean (*ptr_g_socket_connection_connect_finish)(GSocketConnection * connection, GAsyncResult * result, GError * * error);
    GSocket * (*ptr_g_socket_connection_get_socket)(GSocketConnection * connection);
    GSocketAddress * (*ptr_g_socket_connection_get_local_address)(GSocketConnection * connection, GError * * error);
    GSocketAddress * (*ptr_g_socket_connection_get_remote_address)(GSocketConnection * connection, GError * * error);
    void (*ptr_g_socket_connection_factory_register_type)(GType g_type, GSocketFamily family, GSocketType type, gint protocol);
    GType (*ptr_g_socket_connection_factory_lookup_type)(GSocketFamily family, GSocketType type, gint protocol_id);
    GSocketConnection * (*ptr_g_socket_connection_factory_create_connection)(GSocket * socket);
    GType (*ptr_g_socket_control_message_get_type)(void);
    gsize (*ptr_g_socket_control_message_get_size)(GSocketControlMessage * message);
    int (*ptr_g_socket_control_message_get_level)(GSocketControlMessage * message);
    int (*ptr_g_socket_control_message_get_msg_type)(GSocketControlMessage * message);
    void (*ptr_g_socket_control_message_serialize)(GSocketControlMessage * message, gpointer data);
    GSocketControlMessage * (*ptr_g_socket_control_message_deserialize)(int level, int type, gsize size, gpointer data);
    GType (*ptr_g_socket_listener_get_type)(void);
    GSocketListener * (*ptr_g_socket_listener_new)(void);
    void (*ptr_g_socket_listener_set_backlog)(GSocketListener * listener, int listen_backlog);
    gboolean (*ptr_g_socket_listener_add_socket)(GSocketListener * listener, GSocket * socket, GObject * source_object, GError * * error);
    gboolean (*ptr_g_socket_listener_add_address)(GSocketListener * listener, GSocketAddress * address, GSocketType type, GSocketProtocol protocol, GObject * source_object, GSocketAddress * * effective_address, GError * * error);
    gboolean (*ptr_g_socket_listener_add_inet_port)(GSocketListener * listener, guint16 port, GObject * source_object, GError * * error);
    guint16 (*ptr_g_socket_listener_add_any_inet_port)(GSocketListener * listener, GObject * source_object, GError * * error);
    GSocket * (*ptr_g_socket_listener_accept_socket)(GSocketListener * listener, GObject * * source_object, GCancellable * cancellable, GError * * error);
    void (*ptr_g_socket_listener_accept_socket_async)(GSocketListener * listener, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data);
    GSocket * (*ptr_g_socket_listener_accept_socket_finish)(GSocketListener * listener, GAsyncResult * result, GObject * * source_object, GError * * error);
    GSocketConnection * (*ptr_g_socket_listener_accept)(GSocketListener * listener, GObject * * source_object, GCancellable * cancellable, GError * * error);
    void (*ptr_g_socket_listener_accept_async)(GSocketListener * listener, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data);
    GSocketConnection * (*ptr_g_socket_listener_accept_finish)(GSocketListener * listener, GAsyncResult * result, GObject * * source_object, GError * * error);
    void (*ptr_g_socket_listener_close)(GSocketListener * listener);
    GType (*ptr_g_socket_service_get_type)(void);
    GSocketService * (*ptr_g_socket_service_new)(void);
    void (*ptr_g_socket_service_start)(GSocketService * service);
    void (*ptr_g_socket_service_stop)(GSocketService * service);
    gboolean (*ptr_g_socket_service_is_active)(GSocketService * service);
    GType (*ptr_g_srv_target_get_type)(void);
    GSrvTarget * (*ptr_g_srv_target_new)(const gchar * hostname, guint16 port, guint16 priority, guint16 weight);
    GSrvTarget * (*ptr_g_srv_target_copy)(GSrvTarget * target);
    void (*ptr_g_srv_target_free)(GSrvTarget * target);
    const gchar * (*ptr_g_srv_target_get_hostname)(GSrvTarget * target);
    guint16 (*ptr_g_srv_target_get_port)(GSrvTarget * target);
    guint16 (*ptr_g_srv_target_get_priority)(GSrvTarget * target);
    guint16 (*ptr_g_srv_target_get_weight)(GSrvTarget * target);
    GList * (*ptr_g_srv_target_list_sort)(GList * targets);
    GType (*ptr_g_subprocess_get_type)(void);
    GSubprocess * (*ptr_g_subprocess_newv)(const gchar * const * argv, GSubprocessFlags flags, GError * * error);
    GOutputStream * (*ptr_g_subprocess_get_stdin_pipe)(GSubprocess * subprocess);
    GInputStream * (*ptr_g_subprocess_get_stdout_pipe)(GSubprocess * subprocess);
    GInputStream * (*ptr_g_subprocess_get_stderr_pipe)(GSubprocess * subprocess);
    const gchar * (*ptr_g_subprocess_get_identifier)(GSubprocess * subprocess);
    void (*ptr_g_subprocess_send_signal)(GSubprocess * subprocess, gint signal_num);
    void (*ptr_g_subprocess_force_exit)(GSubprocess * subprocess);
    gboolean (*ptr_g_subprocess_wait)(GSubprocess * subprocess, GCancellable * cancellable, GError * * error);
    void (*ptr_g_subprocess_wait_async)(GSubprocess * subprocess, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data);
    gboolean (*ptr_g_subprocess_wait_finish)(GSubprocess * subprocess, GAsyncResult * result, GError * * error);
    gboolean (*ptr_g_subprocess_wait_check)(GSubprocess * subprocess, GCancellable * cancellable, GError * * error);
    void (*ptr_g_subprocess_wait_check_async)(GSubprocess * subprocess, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data);
    gboolean (*ptr_g_subprocess_wait_check_finish)(GSubprocess * subprocess, GAsyncResult * result, GError * * error);
    gint (*ptr_g_subprocess_get_status)(GSubprocess * subprocess);
    gboolean (*ptr_g_subprocess_get_successful)(GSubprocess * subprocess);
    gboolean (*ptr_g_subprocess_get_if_exited)(GSubprocess * subprocess);
    gint (*ptr_g_subprocess_get_exit_status)(GSubprocess * subprocess);
    gboolean (*ptr_g_subprocess_get_if_signaled)(GSubprocess * subprocess);
    gint (*ptr_g_subprocess_get_term_sig)(GSubprocess * subprocess);
    gboolean (*ptr_g_subprocess_communicate)(GSubprocess * subprocess, GBytes * stdin_buf, GCancellable * cancellable, GBytes * * stdout_buf, GBytes * * stderr_buf, GError * * error);
    void (*ptr_g_subprocess_communicate_async)(GSubprocess * subprocess, GBytes * stdin_buf, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data);
    gboolean (*ptr_g_subprocess_communicate_finish)(GSubprocess * subprocess, GAsyncResult * result, GBytes * * stdout_buf, GBytes * * stderr_buf, GError * * error);
    gboolean (*ptr_g_subprocess_communicate_utf8)(GSubprocess * subprocess, const char * stdin_buf, GCancellable * cancellable, char * * stdout_buf, char * * stderr_buf, GError * * error);
    void (*ptr_g_subprocess_communicate_utf8_async)(GSubprocess * subprocess, const char * stdin_buf, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data);
    gboolean (*ptr_g_subprocess_communicate_utf8_finish)(GSubprocess * subprocess, GAsyncResult * result, char * * stdout_buf, char * * stderr_buf, GError * * error);
    GType (*ptr_g_subprocess_launcher_get_type)(void);
    GSubprocessLauncher * (*ptr_g_subprocess_launcher_new)(GSubprocessFlags flags);
    GSubprocess * (*ptr_g_subprocess_launcher_spawnv)(GSubprocessLauncher * self, const gchar * const * argv, GError * * error);
    void (*ptr_g_subprocess_launcher_set_environ)(GSubprocessLauncher * self, gchar * * env);
    void (*ptr_g_subprocess_launcher_setenv)(GSubprocessLauncher * self, const gchar * variable, const gchar * value, gboolean overwrite);
    void (*ptr_g_subprocess_launcher_unsetenv)(GSubprocessLauncher * self, const gchar * variable);
    const gchar * (*ptr_g_subprocess_launcher_getenv)(GSubprocessLauncher * self, const gchar * variable);
    void (*ptr_g_subprocess_launcher_set_cwd)(GSubprocessLauncher * self, const gchar * cwd);
    void (*ptr_g_subprocess_launcher_set_flags)(GSubprocessLauncher * self, GSubprocessFlags flags);
    void (*ptr_g_subprocess_launcher_set_stdin_file_path)(GSubprocessLauncher * self, const gchar * path);
    void (*ptr_g_subprocess_launcher_take_stdin_fd)(GSubprocessLauncher * self, gint fd);
    void (*ptr_g_subprocess_launcher_set_stdout_file_path)(GSubprocessLauncher * self, const gchar * path);
    void (*ptr_g_subprocess_launcher_take_stdout_fd)(GSubprocessLauncher * self, gint fd);
    void (*ptr_g_subprocess_launcher_set_stderr_file_path)(GSubprocessLauncher * self, const gchar * path);
    void (*ptr_g_subprocess_launcher_take_stderr_fd)(GSubprocessLauncher * self, gint fd);
    void (*ptr_g_subprocess_launcher_take_fd)(GSubprocessLauncher * self, gint source_fd, gint target_fd);
    void (*ptr_g_subprocess_launcher_close)(GSubprocessLauncher * self);
    void (*ptr_g_subprocess_launcher_set_child_setup)(GSubprocessLauncher * self, GSpawnChildSetupFunc child_setup, gpointer user_data, GDestroyNotify destroy_notify);
    GType (*ptr_g_task_get_type)(void);
    GTask * (*ptr_g_task_new)(gpointer source_object, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer callback_data);
    void (*ptr_g_task_report_error)(gpointer source_object, GAsyncReadyCallback callback, gpointer callback_data, gpointer source_tag, GError * error);
    void (*ptr_g_task_set_task_data)(GTask * task, gpointer task_data, GDestroyNotify task_data_destroy);
    void (*ptr_g_task_set_priority)(GTask * task, gint priority);
    void (*ptr_g_task_set_check_cancellable)(GTask * task, gboolean check_cancellable);
    void (*ptr_g_task_set_source_tag)(GTask * task, gpointer source_tag);
    void (*ptr_g_task_set_name)(GTask * task, const gchar * name);
    void (*ptr_g_task_set_static_name)(GTask * task, const gchar * name);
    gpointer (*ptr_g_task_get_source_object)(GTask * task);
    gpointer (*ptr_g_task_get_task_data)(GTask * task);
    gint (*ptr_g_task_get_priority)(GTask * task);
    GMainContext * (*ptr_g_task_get_context)(GTask * task);
    GCancellable * (*ptr_g_task_get_cancellable)(GTask * task);
    gboolean (*ptr_g_task_get_check_cancellable)(GTask * task);
    gpointer (*ptr_g_task_get_source_tag)(GTask * task);
    const gchar * (*ptr_g_task_get_name)(GTask * task);
    gboolean (*ptr_g_task_is_valid)(gpointer result, gpointer source_object);
    void (*ptr_g_task_run_in_thread)(GTask * task, GTaskThreadFunc task_func);
    void (*ptr_g_task_run_in_thread_sync)(GTask * task, GTaskThreadFunc task_func);
    gboolean (*ptr_g_task_set_return_on_cancel)(GTask * task, gboolean return_on_cancel);
    gboolean (*ptr_g_task_get_return_on_cancel)(GTask * task);
    void (*ptr_g_task_attach_source)(GTask * task, GSource * source, GSourceFunc callback);
    void (*ptr_g_task_return_pointer)(GTask * task, gpointer result, GDestroyNotify result_destroy);
    void (*ptr_g_task_return_boolean)(GTask * task, gboolean result);
    void (*ptr_g_task_return_int)(GTask * task, gssize result);
    void (*ptr_g_task_return_error)(GTask * task, GError * error);
    void (*ptr_g_task_return_new_error_literal)(GTask * task, GQuark domain, gint code, const char * message);
    void (*ptr_g_task_return_value)(GTask * task, GValue * result);
    gboolean (*ptr_g_task_return_error_if_cancelled)(GTask * task);
    gpointer (*ptr_g_task_propagate_pointer)(GTask * task, GError * * error);
    gboolean (*ptr_g_task_propagate_boolean)(GTask * task, GError * * error);
    gssize (*ptr_g_task_propagate_int)(GTask * task, GError * * error);
    gboolean (*ptr_g_task_propagate_value)(GTask * task, GValue * value, GError * * error);
    gboolean (*ptr_g_task_had_error)(GTask * task);
    gboolean (*ptr_g_task_get_completed)(GTask * task);
    void (*ptr_g_task_print_alive_tasks)(void);
    GType (*ptr_g_tcp_connection_get_type)(void);
    void (*ptr_g_tcp_connection_set_graceful_disconnect)(GTcpConnection * connection, gboolean graceful_disconnect);
    gboolean (*ptr_g_tcp_connection_get_graceful_disconnect)(GTcpConnection * connection);
    GType (*ptr_g_tcp_wrapper_connection_get_type)(void);
    GSocketConnection * (*ptr_g_tcp_wrapper_connection_new)(GIOStream * base_io_stream, GSocket * socket);
    GIOStream * (*ptr_g_tcp_wrapper_connection_get_base_io_stream)(GTcpWrapperConnection * conn);
    GType (*ptr_g_test_dbus_get_type)(void);
    GTestDBus * (*ptr_g_test_dbus_new)(GTestDBusFlags flags);
    GTestDBusFlags (*ptr_g_test_dbus_get_flags)(GTestDBus * self);
    const gchar * (*ptr_g_test_dbus_get_bus_address)(GTestDBus * self);
    void (*ptr_g_test_dbus_add_service_dir)(GTestDBus * self, const gchar * path);
    void (*ptr_g_test_dbus_up)(GTestDBus * self);
    void (*ptr_g_test_dbus_stop)(GTestDBus * self);
    void (*ptr_g_test_dbus_down)(GTestDBus * self);
    void (*ptr_g_test_dbus_unset)(void);
    GType (*ptr_g_themed_icon_get_type)(void);
    GIcon * (*ptr_g_themed_icon_new)(const char * iconname);
    GIcon * (*ptr_g_themed_icon_new_with_default_fallbacks)(const char * iconname);
    GIcon * (*ptr_g_themed_icon_new_from_names)(char * * iconnames, int len);
    void (*ptr_g_themed_icon_prepend_name)(GThemedIcon * icon, const char * iconname);
    void (*ptr_g_themed_icon_append_name)(GThemedIcon * icon, const char * iconname);
    const gchar * const * (*ptr_g_themed_icon_get_names)(GThemedIcon * icon);
    GType (*ptr_g_threaded_socket_service_get_type)(void);
    GSocketService * (*ptr_g_threaded_socket_service_new)(int max_threads);
    GType (*ptr_g_tls_backend_get_type)(void);
    GTlsBackend * (*ptr_g_tls_backend_get_default)(void);
    GTlsDatabase * (*ptr_g_tls_backend_get_default_database)(GTlsBackend * backend);
    void (*ptr_g_tls_backend_set_default_database)(GTlsBackend * backend, GTlsDatabase * database);
    gboolean (*ptr_g_tls_backend_supports_tls)(GTlsBackend * backend);
    gboolean (*ptr_g_tls_backend_supports_dtls)(GTlsBackend * backend);
    GType (*ptr_g_tls_backend_get_certificate_type)(GTlsBackend * backend);
    GType (*ptr_g_tls_backend_get_client_connection_type)(GTlsBackend * backend);
    GType (*ptr_g_tls_backend_get_server_connection_type)(GTlsBackend * backend);
    GType (*ptr_g_tls_backend_get_file_database_type)(GTlsBackend * backend);
    GType (*ptr_g_tls_backend_get_dtls_client_connection_type)(GTlsBackend * backend);
    GType (*ptr_g_tls_backend_get_dtls_server_connection_type)(GTlsBackend * backend);
    GType (*ptr_g_tls_certificate_get_type)(void);
    GTlsCertificate * (*ptr_g_tls_certificate_new_from_pem)(const gchar * data, gssize length, GError * * error);
    GTlsCertificate * (*ptr_g_tls_certificate_new_from_pkcs12)(const guint8 * data, gsize length, const gchar * password, GError * * error);
    GTlsCertificate * (*ptr_g_tls_certificate_new_from_file_with_password)(const gchar * file, const gchar * password, GError * * error);
    GTlsCertificate * (*ptr_g_tls_certificate_new_from_file)(const gchar * file, GError * * error);
    GTlsCertificate * (*ptr_g_tls_certificate_new_from_files)(const gchar * cert_file, const gchar * key_file, GError * * error);
    GTlsCertificate * (*ptr_g_tls_certificate_new_from_pkcs11_uris)(const gchar * pkcs11_uri, const gchar * private_key_pkcs11_uri, GError * * error);
    GList * (*ptr_g_tls_certificate_list_new_from_file)(const gchar * file, GError * * error);
    GTlsCertificate * (*ptr_g_tls_certificate_get_issuer)(GTlsCertificate * cert);
    GTlsCertificateFlags (*ptr_g_tls_certificate_verify)(GTlsCertificate * cert, GSocketConnectable * identity, GTlsCertificate * trusted_ca);
    gboolean (*ptr_g_tls_certificate_is_same)(GTlsCertificate * cert_one, GTlsCertificate * cert_two);
    GDateTime * (*ptr_g_tls_certificate_get_not_valid_before)(GTlsCertificate * cert);
    GDateTime * (*ptr_g_tls_certificate_get_not_valid_after)(GTlsCertificate * cert);
    gchar * (*ptr_g_tls_certificate_get_subject_name)(GTlsCertificate * cert);
    gchar * (*ptr_g_tls_certificate_get_issuer_name)(GTlsCertificate * cert);
    GPtrArray * (*ptr_g_tls_certificate_get_dns_names)(GTlsCertificate * cert);
    GPtrArray * (*ptr_g_tls_certificate_get_ip_addresses)(GTlsCertificate * cert);
    GType (*ptr_g_tls_connection_get_type)(void);
    void (*ptr_g_tls_connection_set_use_system_certdb)(GTlsConnection * conn, gboolean use_system_certdb);
    gboolean (*ptr_g_tls_connection_get_use_system_certdb)(GTlsConnection * conn);
    void (*ptr_g_tls_connection_set_database)(GTlsConnection * conn, GTlsDatabase * database);
    GTlsDatabase * (*ptr_g_tls_connection_get_database)(GTlsConnection * conn);
    void (*ptr_g_tls_connection_set_certificate)(GTlsConnection * conn, GTlsCertificate * certificate);
    GTlsCertificate * (*ptr_g_tls_connection_get_certificate)(GTlsConnection * conn);
    void (*ptr_g_tls_connection_set_interaction)(GTlsConnection * conn, GTlsInteraction * interaction);
    GTlsInteraction * (*ptr_g_tls_connection_get_interaction)(GTlsConnection * conn);
    GTlsCertificate * (*ptr_g_tls_connection_get_peer_certificate)(GTlsConnection * conn);
    GTlsCertificateFlags (*ptr_g_tls_connection_get_peer_certificate_errors)(GTlsConnection * conn);
    void (*ptr_g_tls_connection_set_require_close_notify)(GTlsConnection * conn, gboolean require_close_notify);
    gboolean (*ptr_g_tls_connection_get_require_close_notify)(GTlsConnection * conn);
    void (*ptr_g_tls_connection_set_rehandshake_mode)(GTlsConnection * conn, GTlsRehandshakeMode mode);
    GTlsRehandshakeMode (*ptr_g_tls_connection_get_rehandshake_mode)(GTlsConnection * conn);
    void (*ptr_g_tls_connection_set_advertised_protocols)(GTlsConnection * conn, const gchar * const * protocols);
    const gchar * (*ptr_g_tls_connection_get_negotiated_protocol)(GTlsConnection * conn);
    gboolean (*ptr_g_tls_connection_get_channel_binding_data)(GTlsConnection * conn, GTlsChannelBindingType type, GByteArray * data, GError * * error);
    gboolean (*ptr_g_tls_connection_handshake)(GTlsConnection * conn, GCancellable * cancellable, GError * * error);
    void (*ptr_g_tls_connection_handshake_async)(GTlsConnection * conn, int io_priority, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data);
    gboolean (*ptr_g_tls_connection_handshake_finish)(GTlsConnection * conn, GAsyncResult * result, GError * * error);
    GTlsProtocolVersion (*ptr_g_tls_connection_get_protocol_version)(GTlsConnection * conn);
    gchar * (*ptr_g_tls_connection_get_ciphersuite_name)(GTlsConnection * conn);
    GQuark (*ptr_g_tls_error_quark)(void);
    GQuark (*ptr_g_tls_channel_binding_error_quark)(void);
    gboolean (*ptr_g_tls_connection_emit_accept_certificate)(GTlsConnection * conn, GTlsCertificate * peer_cert, GTlsCertificateFlags errors);
    GType (*ptr_g_tls_client_connection_get_type)(void);
    GIOStream * (*ptr_g_tls_client_connection_new)(GIOStream * base_io_stream, GSocketConnectable * server_identity, GError * * error);
    GTlsCertificateFlags (*ptr_g_tls_client_connection_get_validation_flags)(GTlsClientConnection * conn);
    void (*ptr_g_tls_client_connection_set_validation_flags)(GTlsClientConnection * conn, GTlsCertificateFlags flags);
    GSocketConnectable * (*ptr_g_tls_client_connection_get_server_identity)(GTlsClientConnection * conn);
    void (*ptr_g_tls_client_connection_set_server_identity)(GTlsClientConnection * conn, GSocketConnectable * identity);
    gboolean (*ptr_g_tls_client_connection_get_use_ssl3)(GTlsClientConnection * conn);
    void (*ptr_g_tls_client_connection_set_use_ssl3)(GTlsClientConnection * conn, gboolean use_ssl3);
    GList * (*ptr_g_tls_client_connection_get_accepted_cas)(GTlsClientConnection * conn);
    void (*ptr_g_tls_client_connection_copy_session_state)(GTlsClientConnection * conn, GTlsClientConnection * source);
    GType (*ptr_g_tls_database_get_type)(void);
    GTlsCertificateFlags (*ptr_g_tls_database_verify_chain)(GTlsDatabase * self, GTlsCertificate * chain, const gchar * purpose, GSocketConnectable * identity, GTlsInteraction * interaction, GTlsDatabaseVerifyFlags flags, GCancellable * cancellable, GError * * error);
    void (*ptr_g_tls_database_verify_chain_async)(GTlsDatabase * self, GTlsCertificate * chain, const gchar * purpose, GSocketConnectable * identity, GTlsInteraction * interaction, GTlsDatabaseVerifyFlags flags, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data);
    GTlsCertificateFlags (*ptr_g_tls_database_verify_chain_finish)(GTlsDatabase * self, GAsyncResult * result, GError * * error);
    gchar * (*ptr_g_tls_database_create_certificate_handle)(GTlsDatabase * self, GTlsCertificate * certificate);
    GTlsCertificate * (*ptr_g_tls_database_lookup_certificate_for_handle)(GTlsDatabase * self, const gchar * handle, GTlsInteraction * interaction, GTlsDatabaseLookupFlags flags, GCancellable * cancellable, GError * * error);
    void (*ptr_g_tls_database_lookup_certificate_for_handle_async)(GTlsDatabase * self, const gchar * handle, GTlsInteraction * interaction, GTlsDatabaseLookupFlags flags, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data);
    GTlsCertificate * (*ptr_g_tls_database_lookup_certificate_for_handle_finish)(GTlsDatabase * self, GAsyncResult * result, GError * * error);
    GTlsCertificate * (*ptr_g_tls_database_lookup_certificate_issuer)(GTlsDatabase * self, GTlsCertificate * certificate, GTlsInteraction * interaction, GTlsDatabaseLookupFlags flags, GCancellable * cancellable, GError * * error);
    void (*ptr_g_tls_database_lookup_certificate_issuer_async)(GTlsDatabase * self, GTlsCertificate * certificate, GTlsInteraction * interaction, GTlsDatabaseLookupFlags flags, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data);
    GTlsCertificate * (*ptr_g_tls_database_lookup_certificate_issuer_finish)(GTlsDatabase * self, GAsyncResult * result, GError * * error);
    GList * (*ptr_g_tls_database_lookup_certificates_issued_by)(GTlsDatabase * self, GByteArray * issuer_raw_dn, GTlsInteraction * interaction, GTlsDatabaseLookupFlags flags, GCancellable * cancellable, GError * * error);
    void (*ptr_g_tls_database_lookup_certificates_issued_by_async)(GTlsDatabase * self, GByteArray * issuer_raw_dn, GTlsInteraction * interaction, GTlsDatabaseLookupFlags flags, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data);
    GList * (*ptr_g_tls_database_lookup_certificates_issued_by_finish)(GTlsDatabase * self, GAsyncResult * result, GError * * error);
    GType (*ptr_g_tls_file_database_get_type)(void);
    GTlsDatabase * (*ptr_g_tls_file_database_new)(const gchar * anchors, GError * * error);
    GType (*ptr_g_tls_interaction_get_type)(void);
    GTlsInteractionResult (*ptr_g_tls_interaction_invoke_ask_password)(GTlsInteraction * interaction, GTlsPassword * password, GCancellable * cancellable, GError * * error);
    GTlsInteractionResult (*ptr_g_tls_interaction_ask_password)(GTlsInteraction * interaction, GTlsPassword * password, GCancellable * cancellable, GError * * error);
    void (*ptr_g_tls_interaction_ask_password_async)(GTlsInteraction * interaction, GTlsPassword * password, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data);
    GTlsInteractionResult (*ptr_g_tls_interaction_ask_password_finish)(GTlsInteraction * interaction, GAsyncResult * result, GError * * error);
    GTlsInteractionResult (*ptr_g_tls_interaction_invoke_request_certificate)(GTlsInteraction * interaction, GTlsConnection * connection, GTlsCertificateRequestFlags flags, GCancellable * cancellable, GError * * error);
    GTlsInteractionResult (*ptr_g_tls_interaction_request_certificate)(GTlsInteraction * interaction, GTlsConnection * connection, GTlsCertificateRequestFlags flags, GCancellable * cancellable, GError * * error);
    void (*ptr_g_tls_interaction_request_certificate_async)(GTlsInteraction * interaction, GTlsConnection * connection, GTlsCertificateRequestFlags flags, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data);
    GTlsInteractionResult (*ptr_g_tls_interaction_request_certificate_finish)(GTlsInteraction * interaction, GAsyncResult * result, GError * * error);
    GType (*ptr_g_tls_password_get_type)(void);
    GTlsPassword * (*ptr_g_tls_password_new)(GTlsPasswordFlags flags, const gchar * description);
    const guchar * (*ptr_g_tls_password_get_value)(GTlsPassword * password, gsize * length);
    void (*ptr_g_tls_password_set_value)(GTlsPassword * password, const guchar * value, gssize length);
    void (*ptr_g_tls_password_set_value_full)(GTlsPassword * password, guchar * value, gssize length, GDestroyNotify destroy);
    GTlsPasswordFlags (*ptr_g_tls_password_get_flags)(GTlsPassword * password);
    void (*ptr_g_tls_password_set_flags)(GTlsPassword * password, GTlsPasswordFlags flags);
    const gchar * (*ptr_g_tls_password_get_description)(GTlsPassword * password);
    void (*ptr_g_tls_password_set_description)(GTlsPassword * password, const gchar * description);
    const gchar * (*ptr_g_tls_password_get_warning)(GTlsPassword * password);
    void (*ptr_g_tls_password_set_warning)(GTlsPassword * password, const gchar * warning);
    GType (*ptr_g_tls_server_connection_get_type)(void);
    GIOStream * (*ptr_g_tls_server_connection_new)(GIOStream * base_io_stream, GTlsCertificate * certificate, GError * * error);
    GType (*ptr_g_unix_connection_get_type)(void);
    gboolean (*ptr_g_unix_connection_send_fd)(GUnixConnection * connection, gint fd, GCancellable * cancellable, GError * * error);
    gint (*ptr_g_unix_connection_receive_fd)(GUnixConnection * connection, GCancellable * cancellable, GError * * error);
    gboolean (*ptr_g_unix_connection_send_credentials)(GUnixConnection * connection, GCancellable * cancellable, GError * * error);
    void (*ptr_g_unix_connection_send_credentials_async)(GUnixConnection * connection, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data);
    gboolean (*ptr_g_unix_connection_send_credentials_finish)(GUnixConnection * connection, GAsyncResult * result, GError * * error);
    GCredentials * (*ptr_g_unix_connection_receive_credentials)(GUnixConnection * connection, GCancellable * cancellable, GError * * error);
    void (*ptr_g_unix_connection_receive_credentials_async)(GUnixConnection * connection, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data);
    GCredentials * (*ptr_g_unix_connection_receive_credentials_finish)(GUnixConnection * connection, GAsyncResult * result, GError * * error);
    GType (*ptr_g_unix_credentials_message_get_type)(void);
    GSocketControlMessage * (*ptr_g_unix_credentials_message_new)(void);
    GSocketControlMessage * (*ptr_g_unix_credentials_message_new_with_credentials)(GCredentials * credentials);
    GCredentials * (*ptr_g_unix_credentials_message_get_credentials)(GUnixCredentialsMessage * message);
    gboolean (*ptr_g_unix_credentials_message_is_supported)(void);
    GType (*ptr_g_unix_fd_list_get_type)(void);
    GUnixFDList * (*ptr_g_unix_fd_list_new)(void);
    GUnixFDList * (*ptr_g_unix_fd_list_new_from_array)(const gint * fds, gint n_fds);
    gint (*ptr_g_unix_fd_list_append)(GUnixFDList * list, gint fd, GError * * error);
    gint (*ptr_g_unix_fd_list_get_length)(GUnixFDList * list);
    gint (*ptr_g_unix_fd_list_get)(GUnixFDList * list, gint index_, GError * * error);
    const gint * (*ptr_g_unix_fd_list_peek_fds)(GUnixFDList * list, gint * length);
    gint * (*ptr_g_unix_fd_list_steal_fds)(GUnixFDList * list, gint * length);
    GType (*ptr_g_unix_socket_address_get_type)(void);
    GSocketAddress * (*ptr_g_unix_socket_address_new)(const gchar * path);
    GSocketAddress * (*ptr_g_unix_socket_address_new_abstract)(const gchar * path, gint path_len);
    GSocketAddress * (*ptr_g_unix_socket_address_new_with_type)(const gchar * path, gint path_len, GUnixSocketAddressType type);
    const char * (*ptr_g_unix_socket_address_get_path)(GUnixSocketAddress * address);
    gsize (*ptr_g_unix_socket_address_get_path_len)(GUnixSocketAddress * address);
    GUnixSocketAddressType (*ptr_g_unix_socket_address_get_address_type)(GUnixSocketAddress * address);
    gboolean (*ptr_g_unix_socket_address_get_is_abstract)(GUnixSocketAddress * address);
    gboolean (*ptr_g_unix_socket_address_abstract_names_supported)(void);
    GType (*ptr_g_vfs_get_type)(void);
    gboolean (*ptr_g_vfs_is_active)(GVfs * vfs);
    GFile * (*ptr_g_vfs_get_file_for_path)(GVfs * vfs, const char * path);
    GFile * (*ptr_g_vfs_get_file_for_uri)(GVfs * vfs, const char * uri);
    const gchar * const * (*ptr_g_vfs_get_supported_uri_schemes)(GVfs * vfs);
    GFile * (*ptr_g_vfs_parse_name)(GVfs * vfs, const char * parse_name);
    GVfs * (*ptr_g_vfs_get_default)(void);
    GVfs * (*ptr_g_vfs_get_local)(void);
    gboolean (*ptr_g_vfs_register_uri_scheme)(GVfs * vfs, const char * scheme, GVfsFileLookupFunc uri_func, gpointer uri_data, GDestroyNotify uri_destroy, GVfsFileLookupFunc parse_name_func, gpointer parse_name_data, GDestroyNotify parse_name_destroy);
    gboolean (*ptr_g_vfs_unregister_uri_scheme)(GVfs * vfs, const char * scheme);
    GType (*ptr_g_volume_get_type)(void);
    char * (*ptr_g_volume_get_name)(GVolume * volume);
    GIcon * (*ptr_g_volume_get_icon)(GVolume * volume);
    GIcon * (*ptr_g_volume_get_symbolic_icon)(GVolume * volume);
    char * (*ptr_g_volume_get_uuid)(GVolume * volume);
    GDrive * (*ptr_g_volume_get_drive)(GVolume * volume);
    GMount * (*ptr_g_volume_get_mount)(GVolume * volume);
    gboolean (*ptr_g_volume_can_mount)(GVolume * volume);
    gboolean (*ptr_g_volume_can_eject)(GVolume * volume);
    gboolean (*ptr_g_volume_should_automount)(GVolume * volume);
    void (*ptr_g_volume_mount)(GVolume * volume, GMountMountFlags flags, GMountOperation * mount_operation, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data);
    gboolean (*ptr_g_volume_mount_finish)(GVolume * volume, GAsyncResult * result, GError * * error);
    void (*ptr_g_volume_eject)(GVolume * volume, GMountUnmountFlags flags, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data);
    gboolean (*ptr_g_volume_eject_finish)(GVolume * volume, GAsyncResult * result, GError * * error);
    char * (*ptr_g_volume_get_identifier)(GVolume * volume, const char * kind);
    char * * (*ptr_g_volume_enumerate_identifiers)(GVolume * volume);
    GFile * (*ptr_g_volume_get_activation_root)(GVolume * volume);
    void (*ptr_g_volume_eject_with_operation)(GVolume * volume, GMountUnmountFlags flags, GMountOperation * mount_operation, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data);
    gboolean (*ptr_g_volume_eject_with_operation_finish)(GVolume * volume, GAsyncResult * result, GError * * error);
    const gchar * (*ptr_g_volume_get_sort_key)(GVolume * volume);
    GType (*ptr_g_zlib_compressor_get_type)(void);
    GZlibCompressor * (*ptr_g_zlib_compressor_new)(GZlibCompressorFormat format, int level);
    GFileInfo * (*ptr_g_zlib_compressor_get_file_info)(GZlibCompressor * compressor);
    void (*ptr_g_zlib_compressor_set_file_info)(GZlibCompressor * compressor, GFileInfo * file_info);
    GType (*ptr_g_zlib_decompressor_get_type)(void);
    GZlibDecompressor * (*ptr_g_zlib_decompressor_new)(GZlibCompressorFormat format);
    GFileInfo * (*ptr_g_zlib_decompressor_get_file_info)(GZlibDecompressor * decompressor);
} stub_funcs;

void *gio;

void initialize_gio(void) {
    char *candidates_gio[] = { "libgio-2.0.so", "libgio-2.0-0.dll" };
    gio = try_find_lib(candidates_gio, 2);

    if (!gio) {
        fprintf(stderr, "Unable to locate gio, exiting!");
        exit(1);
    }

    stub_funcs.ptr_g_action_get_type = try_find_sym(gio, "g_action_get_type");
    stub_funcs.ptr_g_action_get_name = try_find_sym(gio, "g_action_get_name");
    stub_funcs.ptr_g_action_get_parameter_type = try_find_sym(gio, "g_action_get_parameter_type");
    stub_funcs.ptr_g_action_get_state_type = try_find_sym(gio, "g_action_get_state_type");
    stub_funcs.ptr_g_action_get_state_hint = try_find_sym(gio, "g_action_get_state_hint");
    stub_funcs.ptr_g_action_get_enabled = try_find_sym(gio, "g_action_get_enabled");
    stub_funcs.ptr_g_action_get_state = try_find_sym(gio, "g_action_get_state");
    stub_funcs.ptr_g_action_change_state = try_find_sym(gio, "g_action_change_state");
    stub_funcs.ptr_g_action_activate = try_find_sym(gio, "g_action_activate");
    stub_funcs.ptr_g_action_name_is_valid = try_find_sym(gio, "g_action_name_is_valid");
    stub_funcs.ptr_g_action_parse_detailed_name = try_find_sym(gio, "g_action_parse_detailed_name");
    stub_funcs.ptr_g_action_print_detailed_name = try_find_sym(gio, "g_action_print_detailed_name");
    stub_funcs.ptr_g_action_group_get_type = try_find_sym(gio, "g_action_group_get_type");
    stub_funcs.ptr_g_action_group_has_action = try_find_sym(gio, "g_action_group_has_action");
    stub_funcs.ptr_g_action_group_list_actions = try_find_sym(gio, "g_action_group_list_actions");
    stub_funcs.ptr_g_action_group_get_action_parameter_type = try_find_sym(gio, "g_action_group_get_action_parameter_type");
    stub_funcs.ptr_g_action_group_get_action_state_type = try_find_sym(gio, "g_action_group_get_action_state_type");
    stub_funcs.ptr_g_action_group_get_action_state_hint = try_find_sym(gio, "g_action_group_get_action_state_hint");
    stub_funcs.ptr_g_action_group_get_action_enabled = try_find_sym(gio, "g_action_group_get_action_enabled");
    stub_funcs.ptr_g_action_group_get_action_state = try_find_sym(gio, "g_action_group_get_action_state");
    stub_funcs.ptr_g_action_group_change_action_state = try_find_sym(gio, "g_action_group_change_action_state");
    stub_funcs.ptr_g_action_group_activate_action = try_find_sym(gio, "g_action_group_activate_action");
    stub_funcs.ptr_g_action_group_action_added = try_find_sym(gio, "g_action_group_action_added");
    stub_funcs.ptr_g_action_group_action_removed = try_find_sym(gio, "g_action_group_action_removed");
    stub_funcs.ptr_g_action_group_action_enabled_changed = try_find_sym(gio, "g_action_group_action_enabled_changed");
    stub_funcs.ptr_g_action_group_action_state_changed = try_find_sym(gio, "g_action_group_action_state_changed");
    stub_funcs.ptr_g_action_group_query_action = try_find_sym(gio, "g_action_group_query_action");
    stub_funcs.ptr_g_dbus_connection_export_action_group = try_find_sym(gio, "g_dbus_connection_export_action_group");
    stub_funcs.ptr_g_dbus_connection_unexport_action_group = try_find_sym(gio, "g_dbus_connection_unexport_action_group");
    stub_funcs.ptr_g_action_map_get_type = try_find_sym(gio, "g_action_map_get_type");
    stub_funcs.ptr_g_action_map_lookup_action = try_find_sym(gio, "g_action_map_lookup_action");
    stub_funcs.ptr_g_action_map_add_action = try_find_sym(gio, "g_action_map_add_action");
    stub_funcs.ptr_g_action_map_remove_action = try_find_sym(gio, "g_action_map_remove_action");
    stub_funcs.ptr_g_action_map_add_action_entries = try_find_sym(gio, "g_action_map_add_action_entries");
    stub_funcs.ptr_g_action_map_remove_action_entries = try_find_sym(gio, "g_action_map_remove_action_entries");
    stub_funcs.ptr_g_app_info_get_type = try_find_sym(gio, "g_app_info_get_type");
    stub_funcs.ptr_g_app_info_create_from_commandline = try_find_sym(gio, "g_app_info_create_from_commandline");
    stub_funcs.ptr_g_app_info_dup = try_find_sym(gio, "g_app_info_dup");
    stub_funcs.ptr_g_app_info_equal = try_find_sym(gio, "g_app_info_equal");
    stub_funcs.ptr_g_app_info_get_id = try_find_sym(gio, "g_app_info_get_id");
    stub_funcs.ptr_g_app_info_get_name = try_find_sym(gio, "g_app_info_get_name");
    stub_funcs.ptr_g_app_info_get_display_name = try_find_sym(gio, "g_app_info_get_display_name");
    stub_funcs.ptr_g_app_info_get_description = try_find_sym(gio, "g_app_info_get_description");
    stub_funcs.ptr_g_app_info_get_executable = try_find_sym(gio, "g_app_info_get_executable");
    stub_funcs.ptr_g_app_info_get_commandline = try_find_sym(gio, "g_app_info_get_commandline");
    stub_funcs.ptr_g_app_info_get_icon = try_find_sym(gio, "g_app_info_get_icon");
    stub_funcs.ptr_g_app_info_launch = try_find_sym(gio, "g_app_info_launch");
    stub_funcs.ptr_g_app_info_supports_uris = try_find_sym(gio, "g_app_info_supports_uris");
    stub_funcs.ptr_g_app_info_supports_files = try_find_sym(gio, "g_app_info_supports_files");
    stub_funcs.ptr_g_app_info_launch_uris = try_find_sym(gio, "g_app_info_launch_uris");
    stub_funcs.ptr_g_app_info_launch_uris_async = try_find_sym(gio, "g_app_info_launch_uris_async");
    stub_funcs.ptr_g_app_info_launch_uris_finish = try_find_sym(gio, "g_app_info_launch_uris_finish");
    stub_funcs.ptr_g_app_info_should_show = try_find_sym(gio, "g_app_info_should_show");
    stub_funcs.ptr_g_app_info_set_as_default_for_type = try_find_sym(gio, "g_app_info_set_as_default_for_type");
    stub_funcs.ptr_g_app_info_set_as_default_for_extension = try_find_sym(gio, "g_app_info_set_as_default_for_extension");
    stub_funcs.ptr_g_app_info_add_supports_type = try_find_sym(gio, "g_app_info_add_supports_type");
    stub_funcs.ptr_g_app_info_can_remove_supports_type = try_find_sym(gio, "g_app_info_can_remove_supports_type");
    stub_funcs.ptr_g_app_info_remove_supports_type = try_find_sym(gio, "g_app_info_remove_supports_type");
    stub_funcs.ptr_g_app_info_get_supported_types = try_find_sym(gio, "g_app_info_get_supported_types");
    stub_funcs.ptr_g_app_info_can_delete = try_find_sym(gio, "g_app_info_can_delete");
    stub_funcs.ptr_g_app_info_delete = try_find_sym(gio, "g_app_info_delete");
    stub_funcs.ptr_g_app_info_set_as_last_used_for_type = try_find_sym(gio, "g_app_info_set_as_last_used_for_type");
    stub_funcs.ptr_g_app_info_get_all = try_find_sym(gio, "g_app_info_get_all");
    stub_funcs.ptr_g_app_info_get_all_for_type = try_find_sym(gio, "g_app_info_get_all_for_type");
    stub_funcs.ptr_g_app_info_get_recommended_for_type = try_find_sym(gio, "g_app_info_get_recommended_for_type");
    stub_funcs.ptr_g_app_info_get_fallback_for_type = try_find_sym(gio, "g_app_info_get_fallback_for_type");
    stub_funcs.ptr_g_app_info_reset_type_associations = try_find_sym(gio, "g_app_info_reset_type_associations");
    stub_funcs.ptr_g_app_info_get_default_for_type = try_find_sym(gio, "g_app_info_get_default_for_type");
    stub_funcs.ptr_g_app_info_get_default_for_type_async = try_find_sym(gio, "g_app_info_get_default_for_type_async");
    stub_funcs.ptr_g_app_info_get_default_for_type_finish = try_find_sym(gio, "g_app_info_get_default_for_type_finish");
    stub_funcs.ptr_g_app_info_get_default_for_uri_scheme = try_find_sym(gio, "g_app_info_get_default_for_uri_scheme");
    stub_funcs.ptr_g_app_info_get_default_for_uri_scheme_async = try_find_sym(gio, "g_app_info_get_default_for_uri_scheme_async");
    stub_funcs.ptr_g_app_info_get_default_for_uri_scheme_finish = try_find_sym(gio, "g_app_info_get_default_for_uri_scheme_finish");
    stub_funcs.ptr_g_app_info_launch_default_for_uri = try_find_sym(gio, "g_app_info_launch_default_for_uri");
    stub_funcs.ptr_g_app_info_launch_default_for_uri_async = try_find_sym(gio, "g_app_info_launch_default_for_uri_async");
    stub_funcs.ptr_g_app_info_launch_default_for_uri_finish = try_find_sym(gio, "g_app_info_launch_default_for_uri_finish");
    stub_funcs.ptr_g_app_launch_context_get_type = try_find_sym(gio, "g_app_launch_context_get_type");
    stub_funcs.ptr_g_app_launch_context_new = try_find_sym(gio, "g_app_launch_context_new");
    stub_funcs.ptr_g_app_launch_context_setenv = try_find_sym(gio, "g_app_launch_context_setenv");
    stub_funcs.ptr_g_app_launch_context_unsetenv = try_find_sym(gio, "g_app_launch_context_unsetenv");
    stub_funcs.ptr_g_app_launch_context_get_environment = try_find_sym(gio, "g_app_launch_context_get_environment");
    stub_funcs.ptr_g_app_launch_context_get_display = try_find_sym(gio, "g_app_launch_context_get_display");
    stub_funcs.ptr_g_app_launch_context_get_startup_notify_id = try_find_sym(gio, "g_app_launch_context_get_startup_notify_id");
    stub_funcs.ptr_g_app_launch_context_launch_failed = try_find_sym(gio, "g_app_launch_context_launch_failed");
    stub_funcs.ptr_g_app_info_monitor_get_type = try_find_sym(gio, "g_app_info_monitor_get_type");
    stub_funcs.ptr_g_app_info_monitor_get = try_find_sym(gio, "g_app_info_monitor_get");
    stub_funcs.ptr_g_application_get_type = try_find_sym(gio, "g_application_get_type");
    stub_funcs.ptr_g_application_id_is_valid = try_find_sym(gio, "g_application_id_is_valid");
    stub_funcs.ptr_g_application_new = try_find_sym(gio, "g_application_new");
    stub_funcs.ptr_g_application_get_application_id = try_find_sym(gio, "g_application_get_application_id");
    stub_funcs.ptr_g_application_set_application_id = try_find_sym(gio, "g_application_set_application_id");
    stub_funcs.ptr_g_application_get_version = try_find_sym(gio, "g_application_get_version");
    stub_funcs.ptr_g_application_set_version = try_find_sym(gio, "g_application_set_version");
    stub_funcs.ptr_g_application_get_dbus_connection = try_find_sym(gio, "g_application_get_dbus_connection");
    stub_funcs.ptr_g_application_get_dbus_object_path = try_find_sym(gio, "g_application_get_dbus_object_path");
    stub_funcs.ptr_g_application_get_inactivity_timeout = try_find_sym(gio, "g_application_get_inactivity_timeout");
    stub_funcs.ptr_g_application_set_inactivity_timeout = try_find_sym(gio, "g_application_set_inactivity_timeout");
    stub_funcs.ptr_g_application_get_flags = try_find_sym(gio, "g_application_get_flags");
    stub_funcs.ptr_g_application_set_flags = try_find_sym(gio, "g_application_set_flags");
    stub_funcs.ptr_g_application_get_resource_base_path = try_find_sym(gio, "g_application_get_resource_base_path");
    stub_funcs.ptr_g_application_set_resource_base_path = try_find_sym(gio, "g_application_set_resource_base_path");
    stub_funcs.ptr_g_application_set_action_group = try_find_sym(gio, "g_application_set_action_group");
    stub_funcs.ptr_g_application_add_main_option_entries = try_find_sym(gio, "g_application_add_main_option_entries");
    stub_funcs.ptr_g_application_add_main_option = try_find_sym(gio, "g_application_add_main_option");
    stub_funcs.ptr_g_application_add_option_group = try_find_sym(gio, "g_application_add_option_group");
    stub_funcs.ptr_g_application_set_option_context_parameter_string = try_find_sym(gio, "g_application_set_option_context_parameter_string");
    stub_funcs.ptr_g_application_set_option_context_summary = try_find_sym(gio, "g_application_set_option_context_summary");
    stub_funcs.ptr_g_application_set_option_context_description = try_find_sym(gio, "g_application_set_option_context_description");
    stub_funcs.ptr_g_application_get_is_registered = try_find_sym(gio, "g_application_get_is_registered");
    stub_funcs.ptr_g_application_get_is_remote = try_find_sym(gio, "g_application_get_is_remote");
    stub_funcs.ptr_g_application_register = try_find_sym(gio, "g_application_register");
    stub_funcs.ptr_g_application_hold = try_find_sym(gio, "g_application_hold");
    stub_funcs.ptr_g_application_release = try_find_sym(gio, "g_application_release");
    stub_funcs.ptr_g_application_activate = try_find_sym(gio, "g_application_activate");
    stub_funcs.ptr_g_application_open = try_find_sym(gio, "g_application_open");
    stub_funcs.ptr_g_application_run = try_find_sym(gio, "g_application_run");
    stub_funcs.ptr_g_application_quit = try_find_sym(gio, "g_application_quit");
    stub_funcs.ptr_g_application_get_default = try_find_sym(gio, "g_application_get_default");
    stub_funcs.ptr_g_application_set_default = try_find_sym(gio, "g_application_set_default");
    stub_funcs.ptr_g_application_mark_busy = try_find_sym(gio, "g_application_mark_busy");
    stub_funcs.ptr_g_application_unmark_busy = try_find_sym(gio, "g_application_unmark_busy");
    stub_funcs.ptr_g_application_get_is_busy = try_find_sym(gio, "g_application_get_is_busy");
    stub_funcs.ptr_g_application_send_notification = try_find_sym(gio, "g_application_send_notification");
    stub_funcs.ptr_g_application_withdraw_notification = try_find_sym(gio, "g_application_withdraw_notification");
    stub_funcs.ptr_g_application_bind_busy_property = try_find_sym(gio, "g_application_bind_busy_property");
    stub_funcs.ptr_g_application_unbind_busy_property = try_find_sym(gio, "g_application_unbind_busy_property");
    stub_funcs.ptr_g_application_command_line_get_type = try_find_sym(gio, "g_application_command_line_get_type");
    stub_funcs.ptr_g_application_command_line_get_arguments = try_find_sym(gio, "g_application_command_line_get_arguments");
    stub_funcs.ptr_g_application_command_line_get_options_dict = try_find_sym(gio, "g_application_command_line_get_options_dict");
    stub_funcs.ptr_g_application_command_line_get_stdin = try_find_sym(gio, "g_application_command_line_get_stdin");
    stub_funcs.ptr_g_application_command_line_get_environ = try_find_sym(gio, "g_application_command_line_get_environ");
    stub_funcs.ptr_g_application_command_line_getenv = try_find_sym(gio, "g_application_command_line_getenv");
    stub_funcs.ptr_g_application_command_line_get_cwd = try_find_sym(gio, "g_application_command_line_get_cwd");
    stub_funcs.ptr_g_application_command_line_get_is_remote = try_find_sym(gio, "g_application_command_line_get_is_remote");
    stub_funcs.ptr_g_application_command_line_print_literal = try_find_sym(gio, "g_application_command_line_print_literal");
    stub_funcs.ptr_g_application_command_line_printerr_literal = try_find_sym(gio, "g_application_command_line_printerr_literal");
    stub_funcs.ptr_g_application_command_line_get_exit_status = try_find_sym(gio, "g_application_command_line_get_exit_status");
    stub_funcs.ptr_g_application_command_line_set_exit_status = try_find_sym(gio, "g_application_command_line_set_exit_status");
    stub_funcs.ptr_g_application_command_line_get_platform_data = try_find_sym(gio, "g_application_command_line_get_platform_data");
    stub_funcs.ptr_g_application_command_line_create_file_for_arg = try_find_sym(gio, "g_application_command_line_create_file_for_arg");
    stub_funcs.ptr_g_application_command_line_done = try_find_sym(gio, "g_application_command_line_done");
    stub_funcs.ptr_g_initable_get_type = try_find_sym(gio, "g_initable_get_type");
    stub_funcs.ptr_g_initable_init = try_find_sym(gio, "g_initable_init");
    stub_funcs.ptr_g_initable_new = try_find_sym(gio, "g_initable_new");
    stub_funcs.ptr_g_initable_newv = try_find_sym(gio, "g_initable_newv");
    stub_funcs.ptr_g_initable_new_valist = try_find_sym(gio, "g_initable_new_valist");
    stub_funcs.ptr_g_async_initable_get_type = try_find_sym(gio, "g_async_initable_get_type");
    stub_funcs.ptr_g_async_initable_init_async = try_find_sym(gio, "g_async_initable_init_async");
    stub_funcs.ptr_g_async_initable_init_finish = try_find_sym(gio, "g_async_initable_init_finish");
    stub_funcs.ptr_g_async_initable_newv_async = try_find_sym(gio, "g_async_initable_newv_async");
    stub_funcs.ptr_g_async_initable_new_valist_async = try_find_sym(gio, "g_async_initable_new_valist_async");
    stub_funcs.ptr_g_async_initable_new_finish = try_find_sym(gio, "g_async_initable_new_finish");
    stub_funcs.ptr_g_async_result_get_type = try_find_sym(gio, "g_async_result_get_type");
    stub_funcs.ptr_g_async_result_get_user_data = try_find_sym(gio, "g_async_result_get_user_data");
    stub_funcs.ptr_g_async_result_get_source_object = try_find_sym(gio, "g_async_result_get_source_object");
    stub_funcs.ptr_g_async_result_legacy_propagate_error = try_find_sym(gio, "g_async_result_legacy_propagate_error");
    stub_funcs.ptr_g_async_result_is_tagged = try_find_sym(gio, "g_async_result_is_tagged");
    stub_funcs.ptr_g_input_stream_get_type = try_find_sym(gio, "g_input_stream_get_type");
    stub_funcs.ptr_g_input_stream_read = try_find_sym(gio, "g_input_stream_read");
    stub_funcs.ptr_g_input_stream_read_all = try_find_sym(gio, "g_input_stream_read_all");
    stub_funcs.ptr_g_input_stream_read_bytes = try_find_sym(gio, "g_input_stream_read_bytes");
    stub_funcs.ptr_g_input_stream_skip = try_find_sym(gio, "g_input_stream_skip");
    stub_funcs.ptr_g_input_stream_close = try_find_sym(gio, "g_input_stream_close");
    stub_funcs.ptr_g_input_stream_read_async = try_find_sym(gio, "g_input_stream_read_async");
    stub_funcs.ptr_g_input_stream_read_finish = try_find_sym(gio, "g_input_stream_read_finish");
    stub_funcs.ptr_g_input_stream_read_all_async = try_find_sym(gio, "g_input_stream_read_all_async");
    stub_funcs.ptr_g_input_stream_read_all_finish = try_find_sym(gio, "g_input_stream_read_all_finish");
    stub_funcs.ptr_g_input_stream_read_bytes_async = try_find_sym(gio, "g_input_stream_read_bytes_async");
    stub_funcs.ptr_g_input_stream_read_bytes_finish = try_find_sym(gio, "g_input_stream_read_bytes_finish");
    stub_funcs.ptr_g_input_stream_skip_async = try_find_sym(gio, "g_input_stream_skip_async");
    stub_funcs.ptr_g_input_stream_skip_finish = try_find_sym(gio, "g_input_stream_skip_finish");
    stub_funcs.ptr_g_input_stream_close_async = try_find_sym(gio, "g_input_stream_close_async");
    stub_funcs.ptr_g_input_stream_close_finish = try_find_sym(gio, "g_input_stream_close_finish");
    stub_funcs.ptr_g_input_stream_is_closed = try_find_sym(gio, "g_input_stream_is_closed");
    stub_funcs.ptr_g_input_stream_has_pending = try_find_sym(gio, "g_input_stream_has_pending");
    stub_funcs.ptr_g_input_stream_set_pending = try_find_sym(gio, "g_input_stream_set_pending");
    stub_funcs.ptr_g_input_stream_clear_pending = try_find_sym(gio, "g_input_stream_clear_pending");
    stub_funcs.ptr_g_filter_input_stream_get_type = try_find_sym(gio, "g_filter_input_stream_get_type");
    stub_funcs.ptr_g_filter_input_stream_get_base_stream = try_find_sym(gio, "g_filter_input_stream_get_base_stream");
    stub_funcs.ptr_g_filter_input_stream_get_close_base_stream = try_find_sym(gio, "g_filter_input_stream_get_close_base_stream");
    stub_funcs.ptr_g_filter_input_stream_set_close_base_stream = try_find_sym(gio, "g_filter_input_stream_set_close_base_stream");
    stub_funcs.ptr_g_buffered_input_stream_get_type = try_find_sym(gio, "g_buffered_input_stream_get_type");
    stub_funcs.ptr_g_buffered_input_stream_new = try_find_sym(gio, "g_buffered_input_stream_new");
    stub_funcs.ptr_g_buffered_input_stream_new_sized = try_find_sym(gio, "g_buffered_input_stream_new_sized");
    stub_funcs.ptr_g_buffered_input_stream_get_buffer_size = try_find_sym(gio, "g_buffered_input_stream_get_buffer_size");
    stub_funcs.ptr_g_buffered_input_stream_set_buffer_size = try_find_sym(gio, "g_buffered_input_stream_set_buffer_size");
    stub_funcs.ptr_g_buffered_input_stream_get_available = try_find_sym(gio, "g_buffered_input_stream_get_available");
    stub_funcs.ptr_g_buffered_input_stream_peek = try_find_sym(gio, "g_buffered_input_stream_peek");
    stub_funcs.ptr_g_buffered_input_stream_peek_buffer = try_find_sym(gio, "g_buffered_input_stream_peek_buffer");
    stub_funcs.ptr_g_buffered_input_stream_fill = try_find_sym(gio, "g_buffered_input_stream_fill");
    stub_funcs.ptr_g_buffered_input_stream_fill_async = try_find_sym(gio, "g_buffered_input_stream_fill_async");
    stub_funcs.ptr_g_buffered_input_stream_fill_finish = try_find_sym(gio, "g_buffered_input_stream_fill_finish");
    stub_funcs.ptr_g_buffered_input_stream_read_byte = try_find_sym(gio, "g_buffered_input_stream_read_byte");
    stub_funcs.ptr_g_output_stream_get_type = try_find_sym(gio, "g_output_stream_get_type");
    stub_funcs.ptr_g_output_stream_write = try_find_sym(gio, "g_output_stream_write");
    stub_funcs.ptr_g_output_stream_write_all = try_find_sym(gio, "g_output_stream_write_all");
    stub_funcs.ptr_g_output_stream_writev = try_find_sym(gio, "g_output_stream_writev");
    stub_funcs.ptr_g_output_stream_writev_all = try_find_sym(gio, "g_output_stream_writev_all");
    stub_funcs.ptr_g_output_stream_printf = try_find_sym(gio, "g_output_stream_printf");
    stub_funcs.ptr_g_output_stream_vprintf = try_find_sym(gio, "g_output_stream_vprintf");
    stub_funcs.ptr_g_output_stream_write_bytes = try_find_sym(gio, "g_output_stream_write_bytes");
    stub_funcs.ptr_g_output_stream_splice = try_find_sym(gio, "g_output_stream_splice");
    stub_funcs.ptr_g_output_stream_flush = try_find_sym(gio, "g_output_stream_flush");
    stub_funcs.ptr_g_output_stream_close = try_find_sym(gio, "g_output_stream_close");
    stub_funcs.ptr_g_output_stream_write_async = try_find_sym(gio, "g_output_stream_write_async");
    stub_funcs.ptr_g_output_stream_write_finish = try_find_sym(gio, "g_output_stream_write_finish");
    stub_funcs.ptr_g_output_stream_write_all_async = try_find_sym(gio, "g_output_stream_write_all_async");
    stub_funcs.ptr_g_output_stream_write_all_finish = try_find_sym(gio, "g_output_stream_write_all_finish");
    stub_funcs.ptr_g_output_stream_writev_async = try_find_sym(gio, "g_output_stream_writev_async");
    stub_funcs.ptr_g_output_stream_writev_finish = try_find_sym(gio, "g_output_stream_writev_finish");
    stub_funcs.ptr_g_output_stream_writev_all_async = try_find_sym(gio, "g_output_stream_writev_all_async");
    stub_funcs.ptr_g_output_stream_writev_all_finish = try_find_sym(gio, "g_output_stream_writev_all_finish");
    stub_funcs.ptr_g_output_stream_write_bytes_async = try_find_sym(gio, "g_output_stream_write_bytes_async");
    stub_funcs.ptr_g_output_stream_write_bytes_finish = try_find_sym(gio, "g_output_stream_write_bytes_finish");
    stub_funcs.ptr_g_output_stream_splice_async = try_find_sym(gio, "g_output_stream_splice_async");
    stub_funcs.ptr_g_output_stream_splice_finish = try_find_sym(gio, "g_output_stream_splice_finish");
    stub_funcs.ptr_g_output_stream_flush_async = try_find_sym(gio, "g_output_stream_flush_async");
    stub_funcs.ptr_g_output_stream_flush_finish = try_find_sym(gio, "g_output_stream_flush_finish");
    stub_funcs.ptr_g_output_stream_close_async = try_find_sym(gio, "g_output_stream_close_async");
    stub_funcs.ptr_g_output_stream_close_finish = try_find_sym(gio, "g_output_stream_close_finish");
    stub_funcs.ptr_g_output_stream_is_closed = try_find_sym(gio, "g_output_stream_is_closed");
    stub_funcs.ptr_g_output_stream_is_closing = try_find_sym(gio, "g_output_stream_is_closing");
    stub_funcs.ptr_g_output_stream_has_pending = try_find_sym(gio, "g_output_stream_has_pending");
    stub_funcs.ptr_g_output_stream_set_pending = try_find_sym(gio, "g_output_stream_set_pending");
    stub_funcs.ptr_g_output_stream_clear_pending = try_find_sym(gio, "g_output_stream_clear_pending");
    stub_funcs.ptr_g_filter_output_stream_get_type = try_find_sym(gio, "g_filter_output_stream_get_type");
    stub_funcs.ptr_g_filter_output_stream_get_base_stream = try_find_sym(gio, "g_filter_output_stream_get_base_stream");
    stub_funcs.ptr_g_filter_output_stream_get_close_base_stream = try_find_sym(gio, "g_filter_output_stream_get_close_base_stream");
    stub_funcs.ptr_g_filter_output_stream_set_close_base_stream = try_find_sym(gio, "g_filter_output_stream_set_close_base_stream");
    stub_funcs.ptr_g_buffered_output_stream_get_type = try_find_sym(gio, "g_buffered_output_stream_get_type");
    stub_funcs.ptr_g_buffered_output_stream_new = try_find_sym(gio, "g_buffered_output_stream_new");
    stub_funcs.ptr_g_buffered_output_stream_new_sized = try_find_sym(gio, "g_buffered_output_stream_new_sized");
    stub_funcs.ptr_g_buffered_output_stream_get_buffer_size = try_find_sym(gio, "g_buffered_output_stream_get_buffer_size");
    stub_funcs.ptr_g_buffered_output_stream_set_buffer_size = try_find_sym(gio, "g_buffered_output_stream_set_buffer_size");
    stub_funcs.ptr_g_buffered_output_stream_get_auto_grow = try_find_sym(gio, "g_buffered_output_stream_get_auto_grow");
    stub_funcs.ptr_g_buffered_output_stream_set_auto_grow = try_find_sym(gio, "g_buffered_output_stream_set_auto_grow");
    stub_funcs.ptr_g_bytes_icon_get_type = try_find_sym(gio, "g_bytes_icon_get_type");
    stub_funcs.ptr_g_bytes_icon_new = try_find_sym(gio, "g_bytes_icon_new");
    stub_funcs.ptr_g_bytes_icon_get_bytes = try_find_sym(gio, "g_bytes_icon_get_bytes");
    stub_funcs.ptr_g_cancellable_get_type = try_find_sym(gio, "g_cancellable_get_type");
    stub_funcs.ptr_g_cancellable_new = try_find_sym(gio, "g_cancellable_new");
    stub_funcs.ptr_g_cancellable_is_cancelled = try_find_sym(gio, "g_cancellable_is_cancelled");
    stub_funcs.ptr_g_cancellable_set_error_if_cancelled = try_find_sym(gio, "g_cancellable_set_error_if_cancelled");
    stub_funcs.ptr_g_cancellable_get_fd = try_find_sym(gio, "g_cancellable_get_fd");
    stub_funcs.ptr_g_cancellable_make_pollfd = try_find_sym(gio, "g_cancellable_make_pollfd");
    stub_funcs.ptr_g_cancellable_release_fd = try_find_sym(gio, "g_cancellable_release_fd");
    stub_funcs.ptr_g_cancellable_source_new = try_find_sym(gio, "g_cancellable_source_new");
    stub_funcs.ptr_g_cancellable_get_current = try_find_sym(gio, "g_cancellable_get_current");
    stub_funcs.ptr_g_cancellable_push_current = try_find_sym(gio, "g_cancellable_push_current");
    stub_funcs.ptr_g_cancellable_pop_current = try_find_sym(gio, "g_cancellable_pop_current");
    stub_funcs.ptr_g_cancellable_reset = try_find_sym(gio, "g_cancellable_reset");
    stub_funcs.ptr_g_cancellable_connect = try_find_sym(gio, "g_cancellable_connect");
    stub_funcs.ptr_g_cancellable_disconnect = try_find_sym(gio, "g_cancellable_disconnect");
    stub_funcs.ptr_g_cancellable_cancel = try_find_sym(gio, "g_cancellable_cancel");
    stub_funcs.ptr_g_converter_get_type = try_find_sym(gio, "g_converter_get_type");
    stub_funcs.ptr_g_converter_convert = try_find_sym(gio, "g_converter_convert");
    stub_funcs.ptr_g_converter_reset = try_find_sym(gio, "g_converter_reset");
    stub_funcs.ptr_g_converter_convert_bytes = try_find_sym(gio, "g_converter_convert_bytes");
    stub_funcs.ptr_g_charset_converter_get_type = try_find_sym(gio, "g_charset_converter_get_type");
    stub_funcs.ptr_g_charset_converter_new = try_find_sym(gio, "g_charset_converter_new");
    stub_funcs.ptr_g_charset_converter_set_use_fallback = try_find_sym(gio, "g_charset_converter_set_use_fallback");
    stub_funcs.ptr_g_charset_converter_get_use_fallback = try_find_sym(gio, "g_charset_converter_get_use_fallback");
    stub_funcs.ptr_g_charset_converter_get_num_fallbacks = try_find_sym(gio, "g_charset_converter_get_num_fallbacks");
    stub_funcs.ptr_g_content_type_equals = try_find_sym(gio, "g_content_type_equals");
    stub_funcs.ptr_g_content_type_is_a = try_find_sym(gio, "g_content_type_is_a");
    stub_funcs.ptr_g_content_type_is_mime_type = try_find_sym(gio, "g_content_type_is_mime_type");
    stub_funcs.ptr_g_content_type_is_unknown = try_find_sym(gio, "g_content_type_is_unknown");
    stub_funcs.ptr_g_content_type_get_description = try_find_sym(gio, "g_content_type_get_description");
    stub_funcs.ptr_g_content_type_get_mime_type = try_find_sym(gio, "g_content_type_get_mime_type");
    stub_funcs.ptr_g_content_type_get_icon = try_find_sym(gio, "g_content_type_get_icon");
    stub_funcs.ptr_g_content_type_get_symbolic_icon = try_find_sym(gio, "g_content_type_get_symbolic_icon");
    stub_funcs.ptr_g_content_type_get_generic_icon_name = try_find_sym(gio, "g_content_type_get_generic_icon_name");
    stub_funcs.ptr_g_content_type_can_be_executable = try_find_sym(gio, "g_content_type_can_be_executable");
    stub_funcs.ptr_g_content_type_from_mime_type = try_find_sym(gio, "g_content_type_from_mime_type");
    stub_funcs.ptr_g_content_type_guess = try_find_sym(gio, "g_content_type_guess");
    stub_funcs.ptr_g_content_type_guess_for_tree = try_find_sym(gio, "g_content_type_guess_for_tree");
    stub_funcs.ptr_g_content_types_get_registered = try_find_sym(gio, "g_content_types_get_registered");
    stub_funcs.ptr_g_content_type_get_mime_dirs = try_find_sym(gio, "g_content_type_get_mime_dirs");
    stub_funcs.ptr_g_content_type_set_mime_dirs = try_find_sym(gio, "g_content_type_set_mime_dirs");
    stub_funcs.ptr_g_converter_input_stream_get_type = try_find_sym(gio, "g_converter_input_stream_get_type");
    stub_funcs.ptr_g_converter_input_stream_new = try_find_sym(gio, "g_converter_input_stream_new");
    stub_funcs.ptr_g_converter_input_stream_get_converter = try_find_sym(gio, "g_converter_input_stream_get_converter");
    stub_funcs.ptr_g_converter_output_stream_get_type = try_find_sym(gio, "g_converter_output_stream_get_type");
    stub_funcs.ptr_g_converter_output_stream_new = try_find_sym(gio, "g_converter_output_stream_new");
    stub_funcs.ptr_g_converter_output_stream_get_converter = try_find_sym(gio, "g_converter_output_stream_get_converter");
    stub_funcs.ptr_g_credentials_get_type = try_find_sym(gio, "g_credentials_get_type");
    stub_funcs.ptr_g_credentials_new = try_find_sym(gio, "g_credentials_new");
    stub_funcs.ptr_g_credentials_to_string = try_find_sym(gio, "g_credentials_to_string");
    stub_funcs.ptr_g_credentials_get_native = try_find_sym(gio, "g_credentials_get_native");
    stub_funcs.ptr_g_credentials_set_native = try_find_sym(gio, "g_credentials_set_native");
    stub_funcs.ptr_g_credentials_is_same_user = try_find_sym(gio, "g_credentials_is_same_user");
    stub_funcs.ptr_g_credentials_get_unix_pid = try_find_sym(gio, "g_credentials_get_unix_pid");
    stub_funcs.ptr_g_credentials_get_unix_user = try_find_sym(gio, "g_credentials_get_unix_user");
    stub_funcs.ptr_g_credentials_set_unix_user = try_find_sym(gio, "g_credentials_set_unix_user");
    stub_funcs.ptr_g_datagram_based_get_type = try_find_sym(gio, "g_datagram_based_get_type");
    stub_funcs.ptr_g_datagram_based_receive_messages = try_find_sym(gio, "g_datagram_based_receive_messages");
    stub_funcs.ptr_g_datagram_based_send_messages = try_find_sym(gio, "g_datagram_based_send_messages");
    stub_funcs.ptr_g_datagram_based_create_source = try_find_sym(gio, "g_datagram_based_create_source");
    stub_funcs.ptr_g_datagram_based_condition_check = try_find_sym(gio, "g_datagram_based_condition_check");
    stub_funcs.ptr_g_datagram_based_condition_wait = try_find_sym(gio, "g_datagram_based_condition_wait");
    stub_funcs.ptr_g_data_input_stream_get_type = try_find_sym(gio, "g_data_input_stream_get_type");
    stub_funcs.ptr_g_data_input_stream_new = try_find_sym(gio, "g_data_input_stream_new");
    stub_funcs.ptr_g_data_input_stream_set_byte_order = try_find_sym(gio, "g_data_input_stream_set_byte_order");
    stub_funcs.ptr_g_data_input_stream_get_byte_order = try_find_sym(gio, "g_data_input_stream_get_byte_order");
    stub_funcs.ptr_g_data_input_stream_set_newline_type = try_find_sym(gio, "g_data_input_stream_set_newline_type");
    stub_funcs.ptr_g_data_input_stream_get_newline_type = try_find_sym(gio, "g_data_input_stream_get_newline_type");
    stub_funcs.ptr_g_data_input_stream_read_byte = try_find_sym(gio, "g_data_input_stream_read_byte");
    stub_funcs.ptr_g_data_input_stream_read_int16 = try_find_sym(gio, "g_data_input_stream_read_int16");
    stub_funcs.ptr_g_data_input_stream_read_uint16 = try_find_sym(gio, "g_data_input_stream_read_uint16");
    stub_funcs.ptr_g_data_input_stream_read_int32 = try_find_sym(gio, "g_data_input_stream_read_int32");
    stub_funcs.ptr_g_data_input_stream_read_uint32 = try_find_sym(gio, "g_data_input_stream_read_uint32");
    stub_funcs.ptr_g_data_input_stream_read_int64 = try_find_sym(gio, "g_data_input_stream_read_int64");
    stub_funcs.ptr_g_data_input_stream_read_uint64 = try_find_sym(gio, "g_data_input_stream_read_uint64");
    stub_funcs.ptr_g_data_input_stream_read_line = try_find_sym(gio, "g_data_input_stream_read_line");
    stub_funcs.ptr_g_data_input_stream_read_line_utf8 = try_find_sym(gio, "g_data_input_stream_read_line_utf8");
    stub_funcs.ptr_g_data_input_stream_read_line_async = try_find_sym(gio, "g_data_input_stream_read_line_async");
    stub_funcs.ptr_g_data_input_stream_read_line_finish = try_find_sym(gio, "g_data_input_stream_read_line_finish");
    stub_funcs.ptr_g_data_input_stream_read_line_finish_utf8 = try_find_sym(gio, "g_data_input_stream_read_line_finish_utf8");
    stub_funcs.ptr_g_data_input_stream_read_until = try_find_sym(gio, "g_data_input_stream_read_until");
    stub_funcs.ptr_g_data_input_stream_read_until_async = try_find_sym(gio, "g_data_input_stream_read_until_async");
    stub_funcs.ptr_g_data_input_stream_read_until_finish = try_find_sym(gio, "g_data_input_stream_read_until_finish");
    stub_funcs.ptr_g_data_input_stream_read_upto = try_find_sym(gio, "g_data_input_stream_read_upto");
    stub_funcs.ptr_g_data_input_stream_read_upto_async = try_find_sym(gio, "g_data_input_stream_read_upto_async");
    stub_funcs.ptr_g_data_input_stream_read_upto_finish = try_find_sym(gio, "g_data_input_stream_read_upto_finish");
    stub_funcs.ptr_g_data_output_stream_get_type = try_find_sym(gio, "g_data_output_stream_get_type");
    stub_funcs.ptr_g_data_output_stream_new = try_find_sym(gio, "g_data_output_stream_new");
    stub_funcs.ptr_g_data_output_stream_set_byte_order = try_find_sym(gio, "g_data_output_stream_set_byte_order");
    stub_funcs.ptr_g_data_output_stream_get_byte_order = try_find_sym(gio, "g_data_output_stream_get_byte_order");
    stub_funcs.ptr_g_data_output_stream_put_byte = try_find_sym(gio, "g_data_output_stream_put_byte");
    stub_funcs.ptr_g_data_output_stream_put_int16 = try_find_sym(gio, "g_data_output_stream_put_int16");
    stub_funcs.ptr_g_data_output_stream_put_uint16 = try_find_sym(gio, "g_data_output_stream_put_uint16");
    stub_funcs.ptr_g_data_output_stream_put_int32 = try_find_sym(gio, "g_data_output_stream_put_int32");
    stub_funcs.ptr_g_data_output_stream_put_uint32 = try_find_sym(gio, "g_data_output_stream_put_uint32");
    stub_funcs.ptr_g_data_output_stream_put_int64 = try_find_sym(gio, "g_data_output_stream_put_int64");
    stub_funcs.ptr_g_data_output_stream_put_uint64 = try_find_sym(gio, "g_data_output_stream_put_uint64");
    stub_funcs.ptr_g_data_output_stream_put_string = try_find_sym(gio, "g_data_output_stream_put_string");
    stub_funcs.ptr_g_dbus_action_group_get_type = try_find_sym(gio, "g_dbus_action_group_get_type");
    stub_funcs.ptr_g_dbus_action_group_get = try_find_sym(gio, "g_dbus_action_group_get");
    stub_funcs.ptr_g_dbus_address_escape_value = try_find_sym(gio, "g_dbus_address_escape_value");
    stub_funcs.ptr_g_dbus_is_address = try_find_sym(gio, "g_dbus_is_address");
    stub_funcs.ptr_g_dbus_is_supported_address = try_find_sym(gio, "g_dbus_is_supported_address");
    stub_funcs.ptr_g_dbus_address_get_stream = try_find_sym(gio, "g_dbus_address_get_stream");
    stub_funcs.ptr_g_dbus_address_get_stream_finish = try_find_sym(gio, "g_dbus_address_get_stream_finish");
    stub_funcs.ptr_g_dbus_address_get_stream_sync = try_find_sym(gio, "g_dbus_address_get_stream_sync");
    stub_funcs.ptr_g_dbus_address_get_for_bus_sync = try_find_sym(gio, "g_dbus_address_get_for_bus_sync");
    stub_funcs.ptr_g_dbus_auth_observer_get_type = try_find_sym(gio, "g_dbus_auth_observer_get_type");
    stub_funcs.ptr_g_dbus_auth_observer_new = try_find_sym(gio, "g_dbus_auth_observer_new");
    stub_funcs.ptr_g_dbus_auth_observer_authorize_authenticated_peer = try_find_sym(gio, "g_dbus_auth_observer_authorize_authenticated_peer");
    stub_funcs.ptr_g_dbus_auth_observer_allow_mechanism = try_find_sym(gio, "g_dbus_auth_observer_allow_mechanism");
    stub_funcs.ptr_g_dbus_connection_get_type = try_find_sym(gio, "g_dbus_connection_get_type");
    stub_funcs.ptr_g_bus_get = try_find_sym(gio, "g_bus_get");
    stub_funcs.ptr_g_bus_get_finish = try_find_sym(gio, "g_bus_get_finish");
    stub_funcs.ptr_g_bus_get_sync = try_find_sym(gio, "g_bus_get_sync");
    stub_funcs.ptr_g_dbus_connection_new = try_find_sym(gio, "g_dbus_connection_new");
    stub_funcs.ptr_g_dbus_connection_new_finish = try_find_sym(gio, "g_dbus_connection_new_finish");
    stub_funcs.ptr_g_dbus_connection_new_sync = try_find_sym(gio, "g_dbus_connection_new_sync");
    stub_funcs.ptr_g_dbus_connection_new_for_address = try_find_sym(gio, "g_dbus_connection_new_for_address");
    stub_funcs.ptr_g_dbus_connection_new_for_address_finish = try_find_sym(gio, "g_dbus_connection_new_for_address_finish");
    stub_funcs.ptr_g_dbus_connection_new_for_address_sync = try_find_sym(gio, "g_dbus_connection_new_for_address_sync");
    stub_funcs.ptr_g_dbus_connection_start_message_processing = try_find_sym(gio, "g_dbus_connection_start_message_processing");
    stub_funcs.ptr_g_dbus_connection_is_closed = try_find_sym(gio, "g_dbus_connection_is_closed");
    stub_funcs.ptr_g_dbus_connection_get_stream = try_find_sym(gio, "g_dbus_connection_get_stream");
    stub_funcs.ptr_g_dbus_connection_get_guid = try_find_sym(gio, "g_dbus_connection_get_guid");
    stub_funcs.ptr_g_dbus_connection_get_unique_name = try_find_sym(gio, "g_dbus_connection_get_unique_name");
    stub_funcs.ptr_g_dbus_connection_get_peer_credentials = try_find_sym(gio, "g_dbus_connection_get_peer_credentials");
    stub_funcs.ptr_g_dbus_connection_get_last_serial = try_find_sym(gio, "g_dbus_connection_get_last_serial");
    stub_funcs.ptr_g_dbus_connection_get_exit_on_close = try_find_sym(gio, "g_dbus_connection_get_exit_on_close");
    stub_funcs.ptr_g_dbus_connection_set_exit_on_close = try_find_sym(gio, "g_dbus_connection_set_exit_on_close");
    stub_funcs.ptr_g_dbus_connection_get_capabilities = try_find_sym(gio, "g_dbus_connection_get_capabilities");
    stub_funcs.ptr_g_dbus_connection_get_flags = try_find_sym(gio, "g_dbus_connection_get_flags");
    stub_funcs.ptr_g_dbus_connection_close = try_find_sym(gio, "g_dbus_connection_close");
    stub_funcs.ptr_g_dbus_connection_close_finish = try_find_sym(gio, "g_dbus_connection_close_finish");
    stub_funcs.ptr_g_dbus_connection_close_sync = try_find_sym(gio, "g_dbus_connection_close_sync");
    stub_funcs.ptr_g_dbus_connection_flush = try_find_sym(gio, "g_dbus_connection_flush");
    stub_funcs.ptr_g_dbus_connection_flush_finish = try_find_sym(gio, "g_dbus_connection_flush_finish");
    stub_funcs.ptr_g_dbus_connection_flush_sync = try_find_sym(gio, "g_dbus_connection_flush_sync");
    stub_funcs.ptr_g_dbus_connection_send_message = try_find_sym(gio, "g_dbus_connection_send_message");
    stub_funcs.ptr_g_dbus_connection_send_message_with_reply = try_find_sym(gio, "g_dbus_connection_send_message_with_reply");
    stub_funcs.ptr_g_dbus_connection_send_message_with_reply_finish = try_find_sym(gio, "g_dbus_connection_send_message_with_reply_finish");
    stub_funcs.ptr_g_dbus_connection_send_message_with_reply_sync = try_find_sym(gio, "g_dbus_connection_send_message_with_reply_sync");
    stub_funcs.ptr_g_dbus_connection_emit_signal = try_find_sym(gio, "g_dbus_connection_emit_signal");
    stub_funcs.ptr_g_dbus_connection_call = try_find_sym(gio, "g_dbus_connection_call");
    stub_funcs.ptr_g_dbus_connection_call_finish = try_find_sym(gio, "g_dbus_connection_call_finish");
    stub_funcs.ptr_g_dbus_connection_call_sync = try_find_sym(gio, "g_dbus_connection_call_sync");
    stub_funcs.ptr_g_dbus_connection_call_with_unix_fd_list = try_find_sym(gio, "g_dbus_connection_call_with_unix_fd_list");
    stub_funcs.ptr_g_dbus_connection_call_with_unix_fd_list_finish = try_find_sym(gio, "g_dbus_connection_call_with_unix_fd_list_finish");
    stub_funcs.ptr_g_dbus_connection_call_with_unix_fd_list_sync = try_find_sym(gio, "g_dbus_connection_call_with_unix_fd_list_sync");
    stub_funcs.ptr_g_dbus_connection_register_object = try_find_sym(gio, "g_dbus_connection_register_object");
    stub_funcs.ptr_g_dbus_connection_register_object_with_closures = try_find_sym(gio, "g_dbus_connection_register_object_with_closures");
    stub_funcs.ptr_g_dbus_connection_unregister_object = try_find_sym(gio, "g_dbus_connection_unregister_object");
    stub_funcs.ptr_g_dbus_connection_register_subtree = try_find_sym(gio, "g_dbus_connection_register_subtree");
    stub_funcs.ptr_g_dbus_connection_unregister_subtree = try_find_sym(gio, "g_dbus_connection_unregister_subtree");
    stub_funcs.ptr_g_dbus_connection_signal_subscribe = try_find_sym(gio, "g_dbus_connection_signal_subscribe");
    stub_funcs.ptr_g_dbus_connection_signal_unsubscribe = try_find_sym(gio, "g_dbus_connection_signal_unsubscribe");
    stub_funcs.ptr_g_dbus_connection_add_filter = try_find_sym(gio, "g_dbus_connection_add_filter");
    stub_funcs.ptr_g_dbus_connection_remove_filter = try_find_sym(gio, "g_dbus_connection_remove_filter");
    stub_funcs.ptr_g_dbus_error_quark = try_find_sym(gio, "g_dbus_error_quark");
    stub_funcs.ptr_g_dbus_error_is_remote_error = try_find_sym(gio, "g_dbus_error_is_remote_error");
    stub_funcs.ptr_g_dbus_error_get_remote_error = try_find_sym(gio, "g_dbus_error_get_remote_error");
    stub_funcs.ptr_g_dbus_error_strip_remote_error = try_find_sym(gio, "g_dbus_error_strip_remote_error");
    stub_funcs.ptr_g_dbus_error_register_error = try_find_sym(gio, "g_dbus_error_register_error");
    stub_funcs.ptr_g_dbus_error_unregister_error = try_find_sym(gio, "g_dbus_error_unregister_error");
    stub_funcs.ptr_g_dbus_error_register_error_domain = try_find_sym(gio, "g_dbus_error_register_error_domain");
    stub_funcs.ptr_g_dbus_error_new_for_dbus_error = try_find_sym(gio, "g_dbus_error_new_for_dbus_error");
    stub_funcs.ptr_g_dbus_error_set_dbus_error = try_find_sym(gio, "g_dbus_error_set_dbus_error");
    stub_funcs.ptr_g_dbus_error_set_dbus_error_valist = try_find_sym(gio, "g_dbus_error_set_dbus_error_valist");
    stub_funcs.ptr_g_dbus_error_encode_gerror = try_find_sym(gio, "g_dbus_error_encode_gerror");
    stub_funcs.ptr_g_dbus_interface_get_type = try_find_sym(gio, "g_dbus_interface_get_type");
    stub_funcs.ptr_g_dbus_interface_get_info = try_find_sym(gio, "g_dbus_interface_get_info");
    stub_funcs.ptr_g_dbus_interface_get_object = try_find_sym(gio, "g_dbus_interface_get_object");
    stub_funcs.ptr_g_dbus_interface_set_object = try_find_sym(gio, "g_dbus_interface_set_object");
    stub_funcs.ptr_g_dbus_interface_dup_object = try_find_sym(gio, "g_dbus_interface_dup_object");
    stub_funcs.ptr_g_dbus_interface_skeleton_get_type = try_find_sym(gio, "g_dbus_interface_skeleton_get_type");
    stub_funcs.ptr_g_dbus_interface_skeleton_get_flags = try_find_sym(gio, "g_dbus_interface_skeleton_get_flags");
    stub_funcs.ptr_g_dbus_interface_skeleton_set_flags = try_find_sym(gio, "g_dbus_interface_skeleton_set_flags");
    stub_funcs.ptr_g_dbus_interface_skeleton_get_info = try_find_sym(gio, "g_dbus_interface_skeleton_get_info");
    stub_funcs.ptr_g_dbus_interface_skeleton_get_vtable = try_find_sym(gio, "g_dbus_interface_skeleton_get_vtable");
    stub_funcs.ptr_g_dbus_interface_skeleton_get_properties = try_find_sym(gio, "g_dbus_interface_skeleton_get_properties");
    stub_funcs.ptr_g_dbus_interface_skeleton_flush = try_find_sym(gio, "g_dbus_interface_skeleton_flush");
    stub_funcs.ptr_g_dbus_interface_skeleton_export = try_find_sym(gio, "g_dbus_interface_skeleton_export");
    stub_funcs.ptr_g_dbus_interface_skeleton_unexport = try_find_sym(gio, "g_dbus_interface_skeleton_unexport");
    stub_funcs.ptr_g_dbus_interface_skeleton_unexport_from_connection = try_find_sym(gio, "g_dbus_interface_skeleton_unexport_from_connection");
    stub_funcs.ptr_g_dbus_interface_skeleton_get_connection = try_find_sym(gio, "g_dbus_interface_skeleton_get_connection");
    stub_funcs.ptr_g_dbus_interface_skeleton_get_connections = try_find_sym(gio, "g_dbus_interface_skeleton_get_connections");
    stub_funcs.ptr_g_dbus_interface_skeleton_has_connection = try_find_sym(gio, "g_dbus_interface_skeleton_has_connection");
    stub_funcs.ptr_g_dbus_interface_skeleton_get_object_path = try_find_sym(gio, "g_dbus_interface_skeleton_get_object_path");
    stub_funcs.ptr_g_dbus_annotation_info_lookup = try_find_sym(gio, "g_dbus_annotation_info_lookup");
    stub_funcs.ptr_g_dbus_interface_info_lookup_method = try_find_sym(gio, "g_dbus_interface_info_lookup_method");
    stub_funcs.ptr_g_dbus_interface_info_lookup_signal = try_find_sym(gio, "g_dbus_interface_info_lookup_signal");
    stub_funcs.ptr_g_dbus_interface_info_lookup_property = try_find_sym(gio, "g_dbus_interface_info_lookup_property");
    stub_funcs.ptr_g_dbus_interface_info_cache_build = try_find_sym(gio, "g_dbus_interface_info_cache_build");
    stub_funcs.ptr_g_dbus_interface_info_cache_release = try_find_sym(gio, "g_dbus_interface_info_cache_release");
    stub_funcs.ptr_g_dbus_interface_info_generate_xml = try_find_sym(gio, "g_dbus_interface_info_generate_xml");
    stub_funcs.ptr_g_dbus_node_info_new_for_xml = try_find_sym(gio, "g_dbus_node_info_new_for_xml");
    stub_funcs.ptr_g_dbus_node_info_lookup_interface = try_find_sym(gio, "g_dbus_node_info_lookup_interface");
    stub_funcs.ptr_g_dbus_node_info_generate_xml = try_find_sym(gio, "g_dbus_node_info_generate_xml");
    stub_funcs.ptr_g_dbus_node_info_ref = try_find_sym(gio, "g_dbus_node_info_ref");
    stub_funcs.ptr_g_dbus_interface_info_ref = try_find_sym(gio, "g_dbus_interface_info_ref");
    stub_funcs.ptr_g_dbus_method_info_ref = try_find_sym(gio, "g_dbus_method_info_ref");
    stub_funcs.ptr_g_dbus_signal_info_ref = try_find_sym(gio, "g_dbus_signal_info_ref");
    stub_funcs.ptr_g_dbus_property_info_ref = try_find_sym(gio, "g_dbus_property_info_ref");
    stub_funcs.ptr_g_dbus_arg_info_ref = try_find_sym(gio, "g_dbus_arg_info_ref");
    stub_funcs.ptr_g_dbus_annotation_info_ref = try_find_sym(gio, "g_dbus_annotation_info_ref");
    stub_funcs.ptr_g_dbus_node_info_unref = try_find_sym(gio, "g_dbus_node_info_unref");
    stub_funcs.ptr_g_dbus_interface_info_unref = try_find_sym(gio, "g_dbus_interface_info_unref");
    stub_funcs.ptr_g_dbus_method_info_unref = try_find_sym(gio, "g_dbus_method_info_unref");
    stub_funcs.ptr_g_dbus_signal_info_unref = try_find_sym(gio, "g_dbus_signal_info_unref");
    stub_funcs.ptr_g_dbus_property_info_unref = try_find_sym(gio, "g_dbus_property_info_unref");
    stub_funcs.ptr_g_dbus_arg_info_unref = try_find_sym(gio, "g_dbus_arg_info_unref");
    stub_funcs.ptr_g_dbus_annotation_info_unref = try_find_sym(gio, "g_dbus_annotation_info_unref");
    stub_funcs.ptr_g_dbus_node_info_get_type = try_find_sym(gio, "g_dbus_node_info_get_type");
    stub_funcs.ptr_g_dbus_interface_info_get_type = try_find_sym(gio, "g_dbus_interface_info_get_type");
    stub_funcs.ptr_g_dbus_method_info_get_type = try_find_sym(gio, "g_dbus_method_info_get_type");
    stub_funcs.ptr_g_dbus_signal_info_get_type = try_find_sym(gio, "g_dbus_signal_info_get_type");
    stub_funcs.ptr_g_dbus_property_info_get_type = try_find_sym(gio, "g_dbus_property_info_get_type");
    stub_funcs.ptr_g_dbus_arg_info_get_type = try_find_sym(gio, "g_dbus_arg_info_get_type");
    stub_funcs.ptr_g_dbus_annotation_info_get_type = try_find_sym(gio, "g_dbus_annotation_info_get_type");
    stub_funcs.ptr_g_dbus_menu_model_get_type = try_find_sym(gio, "g_dbus_menu_model_get_type");
    stub_funcs.ptr_g_dbus_menu_model_get = try_find_sym(gio, "g_dbus_menu_model_get");
    stub_funcs.ptr_g_dbus_message_get_type = try_find_sym(gio, "g_dbus_message_get_type");
    stub_funcs.ptr_g_dbus_message_new = try_find_sym(gio, "g_dbus_message_new");
    stub_funcs.ptr_g_dbus_message_new_signal = try_find_sym(gio, "g_dbus_message_new_signal");
    stub_funcs.ptr_g_dbus_message_new_method_call = try_find_sym(gio, "g_dbus_message_new_method_call");
    stub_funcs.ptr_g_dbus_message_new_method_reply = try_find_sym(gio, "g_dbus_message_new_method_reply");
    stub_funcs.ptr_g_dbus_message_new_method_error = try_find_sym(gio, "g_dbus_message_new_method_error");
    stub_funcs.ptr_g_dbus_message_new_method_error_valist = try_find_sym(gio, "g_dbus_message_new_method_error_valist");
    stub_funcs.ptr_g_dbus_message_new_method_error_literal = try_find_sym(gio, "g_dbus_message_new_method_error_literal");
    stub_funcs.ptr_g_dbus_message_print = try_find_sym(gio, "g_dbus_message_print");
    stub_funcs.ptr_g_dbus_message_get_locked = try_find_sym(gio, "g_dbus_message_get_locked");
    stub_funcs.ptr_g_dbus_message_lock = try_find_sym(gio, "g_dbus_message_lock");
    stub_funcs.ptr_g_dbus_message_copy = try_find_sym(gio, "g_dbus_message_copy");
    stub_funcs.ptr_g_dbus_message_get_byte_order = try_find_sym(gio, "g_dbus_message_get_byte_order");
    stub_funcs.ptr_g_dbus_message_set_byte_order = try_find_sym(gio, "g_dbus_message_set_byte_order");
    stub_funcs.ptr_g_dbus_message_get_message_type = try_find_sym(gio, "g_dbus_message_get_message_type");
    stub_funcs.ptr_g_dbus_message_set_message_type = try_find_sym(gio, "g_dbus_message_set_message_type");
    stub_funcs.ptr_g_dbus_message_get_flags = try_find_sym(gio, "g_dbus_message_get_flags");
    stub_funcs.ptr_g_dbus_message_set_flags = try_find_sym(gio, "g_dbus_message_set_flags");
    stub_funcs.ptr_g_dbus_message_get_serial = try_find_sym(gio, "g_dbus_message_get_serial");
    stub_funcs.ptr_g_dbus_message_set_serial = try_find_sym(gio, "g_dbus_message_set_serial");
    stub_funcs.ptr_g_dbus_message_get_header = try_find_sym(gio, "g_dbus_message_get_header");
    stub_funcs.ptr_g_dbus_message_set_header = try_find_sym(gio, "g_dbus_message_set_header");
    stub_funcs.ptr_g_dbus_message_get_header_fields = try_find_sym(gio, "g_dbus_message_get_header_fields");
    stub_funcs.ptr_g_dbus_message_get_body = try_find_sym(gio, "g_dbus_message_get_body");
    stub_funcs.ptr_g_dbus_message_set_body = try_find_sym(gio, "g_dbus_message_set_body");
    stub_funcs.ptr_g_dbus_message_get_unix_fd_list = try_find_sym(gio, "g_dbus_message_get_unix_fd_list");
    stub_funcs.ptr_g_dbus_message_set_unix_fd_list = try_find_sym(gio, "g_dbus_message_set_unix_fd_list");
    stub_funcs.ptr_g_dbus_message_get_reply_serial = try_find_sym(gio, "g_dbus_message_get_reply_serial");
    stub_funcs.ptr_g_dbus_message_set_reply_serial = try_find_sym(gio, "g_dbus_message_set_reply_serial");
    stub_funcs.ptr_g_dbus_message_get_interface = try_find_sym(gio, "g_dbus_message_get_interface");
    stub_funcs.ptr_g_dbus_message_set_interface = try_find_sym(gio, "g_dbus_message_set_interface");
    stub_funcs.ptr_g_dbus_message_get_member = try_find_sym(gio, "g_dbus_message_get_member");
    stub_funcs.ptr_g_dbus_message_set_member = try_find_sym(gio, "g_dbus_message_set_member");
    stub_funcs.ptr_g_dbus_message_get_path = try_find_sym(gio, "g_dbus_message_get_path");
    stub_funcs.ptr_g_dbus_message_set_path = try_find_sym(gio, "g_dbus_message_set_path");
    stub_funcs.ptr_g_dbus_message_get_sender = try_find_sym(gio, "g_dbus_message_get_sender");
    stub_funcs.ptr_g_dbus_message_set_sender = try_find_sym(gio, "g_dbus_message_set_sender");
    stub_funcs.ptr_g_dbus_message_get_destination = try_find_sym(gio, "g_dbus_message_get_destination");
    stub_funcs.ptr_g_dbus_message_set_destination = try_find_sym(gio, "g_dbus_message_set_destination");
    stub_funcs.ptr_g_dbus_message_get_error_name = try_find_sym(gio, "g_dbus_message_get_error_name");
    stub_funcs.ptr_g_dbus_message_set_error_name = try_find_sym(gio, "g_dbus_message_set_error_name");
    stub_funcs.ptr_g_dbus_message_get_signature = try_find_sym(gio, "g_dbus_message_get_signature");
    stub_funcs.ptr_g_dbus_message_set_signature = try_find_sym(gio, "g_dbus_message_set_signature");
    stub_funcs.ptr_g_dbus_message_get_num_unix_fds = try_find_sym(gio, "g_dbus_message_get_num_unix_fds");
    stub_funcs.ptr_g_dbus_message_set_num_unix_fds = try_find_sym(gio, "g_dbus_message_set_num_unix_fds");
    stub_funcs.ptr_g_dbus_message_get_arg0 = try_find_sym(gio, "g_dbus_message_get_arg0");
    stub_funcs.ptr_g_dbus_message_get_arg0_path = try_find_sym(gio, "g_dbus_message_get_arg0_path");
    stub_funcs.ptr_g_dbus_message_new_from_blob = try_find_sym(gio, "g_dbus_message_new_from_blob");
    stub_funcs.ptr_g_dbus_message_bytes_needed = try_find_sym(gio, "g_dbus_message_bytes_needed");
    stub_funcs.ptr_g_dbus_message_to_blob = try_find_sym(gio, "g_dbus_message_to_blob");
    stub_funcs.ptr_g_dbus_message_to_gerror = try_find_sym(gio, "g_dbus_message_to_gerror");
    stub_funcs.ptr_g_dbus_method_invocation_get_type = try_find_sym(gio, "g_dbus_method_invocation_get_type");
    stub_funcs.ptr_g_dbus_method_invocation_get_sender = try_find_sym(gio, "g_dbus_method_invocation_get_sender");
    stub_funcs.ptr_g_dbus_method_invocation_get_object_path = try_find_sym(gio, "g_dbus_method_invocation_get_object_path");
    stub_funcs.ptr_g_dbus_method_invocation_get_interface_name = try_find_sym(gio, "g_dbus_method_invocation_get_interface_name");
    stub_funcs.ptr_g_dbus_method_invocation_get_method_name = try_find_sym(gio, "g_dbus_method_invocation_get_method_name");
    stub_funcs.ptr_g_dbus_method_invocation_get_method_info = try_find_sym(gio, "g_dbus_method_invocation_get_method_info");
    stub_funcs.ptr_g_dbus_method_invocation_get_property_info = try_find_sym(gio, "g_dbus_method_invocation_get_property_info");
    stub_funcs.ptr_g_dbus_method_invocation_get_connection = try_find_sym(gio, "g_dbus_method_invocation_get_connection");
    stub_funcs.ptr_g_dbus_method_invocation_get_message = try_find_sym(gio, "g_dbus_method_invocation_get_message");
    stub_funcs.ptr_g_dbus_method_invocation_get_parameters = try_find_sym(gio, "g_dbus_method_invocation_get_parameters");
    stub_funcs.ptr_g_dbus_method_invocation_get_user_data = try_find_sym(gio, "g_dbus_method_invocation_get_user_data");
    stub_funcs.ptr_g_dbus_method_invocation_return_value = try_find_sym(gio, "g_dbus_method_invocation_return_value");
    stub_funcs.ptr_g_dbus_method_invocation_return_value_with_unix_fd_list = try_find_sym(gio, "g_dbus_method_invocation_return_value_with_unix_fd_list");
    stub_funcs.ptr_g_dbus_method_invocation_return_error = try_find_sym(gio, "g_dbus_method_invocation_return_error");
    stub_funcs.ptr_g_dbus_method_invocation_return_error_valist = try_find_sym(gio, "g_dbus_method_invocation_return_error_valist");
    stub_funcs.ptr_g_dbus_method_invocation_return_error_literal = try_find_sym(gio, "g_dbus_method_invocation_return_error_literal");
    stub_funcs.ptr_g_dbus_method_invocation_return_gerror = try_find_sym(gio, "g_dbus_method_invocation_return_gerror");
    stub_funcs.ptr_g_dbus_method_invocation_take_error = try_find_sym(gio, "g_dbus_method_invocation_take_error");
    stub_funcs.ptr_g_dbus_method_invocation_return_dbus_error = try_find_sym(gio, "g_dbus_method_invocation_return_dbus_error");
    stub_funcs.ptr_g_bus_own_name = try_find_sym(gio, "g_bus_own_name");
    stub_funcs.ptr_g_bus_own_name_on_connection = try_find_sym(gio, "g_bus_own_name_on_connection");
    stub_funcs.ptr_g_bus_own_name_with_closures = try_find_sym(gio, "g_bus_own_name_with_closures");
    stub_funcs.ptr_g_bus_own_name_on_connection_with_closures = try_find_sym(gio, "g_bus_own_name_on_connection_with_closures");
    stub_funcs.ptr_g_bus_unown_name = try_find_sym(gio, "g_bus_unown_name");
    stub_funcs.ptr_g_bus_watch_name = try_find_sym(gio, "g_bus_watch_name");
    stub_funcs.ptr_g_bus_watch_name_on_connection = try_find_sym(gio, "g_bus_watch_name_on_connection");
    stub_funcs.ptr_g_bus_watch_name_with_closures = try_find_sym(gio, "g_bus_watch_name_with_closures");
    stub_funcs.ptr_g_bus_watch_name_on_connection_with_closures = try_find_sym(gio, "g_bus_watch_name_on_connection_with_closures");
    stub_funcs.ptr_g_bus_unwatch_name = try_find_sym(gio, "g_bus_unwatch_name");
    stub_funcs.ptr_g_dbus_object_get_type = try_find_sym(gio, "g_dbus_object_get_type");
    stub_funcs.ptr_g_dbus_object_get_object_path = try_find_sym(gio, "g_dbus_object_get_object_path");
    stub_funcs.ptr_g_dbus_object_get_interfaces = try_find_sym(gio, "g_dbus_object_get_interfaces");
    stub_funcs.ptr_g_dbus_object_get_interface = try_find_sym(gio, "g_dbus_object_get_interface");
    stub_funcs.ptr_g_dbus_object_manager_get_type = try_find_sym(gio, "g_dbus_object_manager_get_type");
    stub_funcs.ptr_g_dbus_object_manager_get_object_path = try_find_sym(gio, "g_dbus_object_manager_get_object_path");
    stub_funcs.ptr_g_dbus_object_manager_get_objects = try_find_sym(gio, "g_dbus_object_manager_get_objects");
    stub_funcs.ptr_g_dbus_object_manager_get_object = try_find_sym(gio, "g_dbus_object_manager_get_object");
    stub_funcs.ptr_g_dbus_object_manager_get_interface = try_find_sym(gio, "g_dbus_object_manager_get_interface");
    stub_funcs.ptr_g_dbus_object_manager_client_get_type = try_find_sym(gio, "g_dbus_object_manager_client_get_type");
    stub_funcs.ptr_g_dbus_object_manager_client_new = try_find_sym(gio, "g_dbus_object_manager_client_new");
    stub_funcs.ptr_g_dbus_object_manager_client_new_finish = try_find_sym(gio, "g_dbus_object_manager_client_new_finish");
    stub_funcs.ptr_g_dbus_object_manager_client_new_sync = try_find_sym(gio, "g_dbus_object_manager_client_new_sync");
    stub_funcs.ptr_g_dbus_object_manager_client_new_for_bus = try_find_sym(gio, "g_dbus_object_manager_client_new_for_bus");
    stub_funcs.ptr_g_dbus_object_manager_client_new_for_bus_finish = try_find_sym(gio, "g_dbus_object_manager_client_new_for_bus_finish");
    stub_funcs.ptr_g_dbus_object_manager_client_new_for_bus_sync = try_find_sym(gio, "g_dbus_object_manager_client_new_for_bus_sync");
    stub_funcs.ptr_g_dbus_object_manager_client_get_connection = try_find_sym(gio, "g_dbus_object_manager_client_get_connection");
    stub_funcs.ptr_g_dbus_object_manager_client_get_flags = try_find_sym(gio, "g_dbus_object_manager_client_get_flags");
    stub_funcs.ptr_g_dbus_object_manager_client_get_name = try_find_sym(gio, "g_dbus_object_manager_client_get_name");
    stub_funcs.ptr_g_dbus_object_manager_client_get_name_owner = try_find_sym(gio, "g_dbus_object_manager_client_get_name_owner");
    stub_funcs.ptr_g_dbus_object_manager_server_get_type = try_find_sym(gio, "g_dbus_object_manager_server_get_type");
    stub_funcs.ptr_g_dbus_object_manager_server_new = try_find_sym(gio, "g_dbus_object_manager_server_new");
    stub_funcs.ptr_g_dbus_object_manager_server_get_connection = try_find_sym(gio, "g_dbus_object_manager_server_get_connection");
    stub_funcs.ptr_g_dbus_object_manager_server_set_connection = try_find_sym(gio, "g_dbus_object_manager_server_set_connection");
    stub_funcs.ptr_g_dbus_object_manager_server_export = try_find_sym(gio, "g_dbus_object_manager_server_export");
    stub_funcs.ptr_g_dbus_object_manager_server_export_uniquely = try_find_sym(gio, "g_dbus_object_manager_server_export_uniquely");
    stub_funcs.ptr_g_dbus_object_manager_server_is_exported = try_find_sym(gio, "g_dbus_object_manager_server_is_exported");
    stub_funcs.ptr_g_dbus_object_manager_server_unexport = try_find_sym(gio, "g_dbus_object_manager_server_unexport");
    stub_funcs.ptr_g_dbus_object_proxy_get_type = try_find_sym(gio, "g_dbus_object_proxy_get_type");
    stub_funcs.ptr_g_dbus_object_proxy_new = try_find_sym(gio, "g_dbus_object_proxy_new");
    stub_funcs.ptr_g_dbus_object_proxy_get_connection = try_find_sym(gio, "g_dbus_object_proxy_get_connection");
    stub_funcs.ptr_g_dbus_object_skeleton_get_type = try_find_sym(gio, "g_dbus_object_skeleton_get_type");
    stub_funcs.ptr_g_dbus_object_skeleton_new = try_find_sym(gio, "g_dbus_object_skeleton_new");
    stub_funcs.ptr_g_dbus_object_skeleton_flush = try_find_sym(gio, "g_dbus_object_skeleton_flush");
    stub_funcs.ptr_g_dbus_object_skeleton_add_interface = try_find_sym(gio, "g_dbus_object_skeleton_add_interface");
    stub_funcs.ptr_g_dbus_object_skeleton_remove_interface = try_find_sym(gio, "g_dbus_object_skeleton_remove_interface");
    stub_funcs.ptr_g_dbus_object_skeleton_remove_interface_by_name = try_find_sym(gio, "g_dbus_object_skeleton_remove_interface_by_name");
    stub_funcs.ptr_g_dbus_object_skeleton_set_object_path = try_find_sym(gio, "g_dbus_object_skeleton_set_object_path");
    stub_funcs.ptr_g_dbus_proxy_get_type = try_find_sym(gio, "g_dbus_proxy_get_type");
    stub_funcs.ptr_g_dbus_proxy_new = try_find_sym(gio, "g_dbus_proxy_new");
    stub_funcs.ptr_g_dbus_proxy_new_finish = try_find_sym(gio, "g_dbus_proxy_new_finish");
    stub_funcs.ptr_g_dbus_proxy_new_sync = try_find_sym(gio, "g_dbus_proxy_new_sync");
    stub_funcs.ptr_g_dbus_proxy_new_for_bus = try_find_sym(gio, "g_dbus_proxy_new_for_bus");
    stub_funcs.ptr_g_dbus_proxy_new_for_bus_finish = try_find_sym(gio, "g_dbus_proxy_new_for_bus_finish");
    stub_funcs.ptr_g_dbus_proxy_new_for_bus_sync = try_find_sym(gio, "g_dbus_proxy_new_for_bus_sync");
    stub_funcs.ptr_g_dbus_proxy_get_connection = try_find_sym(gio, "g_dbus_proxy_get_connection");
    stub_funcs.ptr_g_dbus_proxy_get_flags = try_find_sym(gio, "g_dbus_proxy_get_flags");
    stub_funcs.ptr_g_dbus_proxy_get_name = try_find_sym(gio, "g_dbus_proxy_get_name");
    stub_funcs.ptr_g_dbus_proxy_get_name_owner = try_find_sym(gio, "g_dbus_proxy_get_name_owner");
    stub_funcs.ptr_g_dbus_proxy_get_object_path = try_find_sym(gio, "g_dbus_proxy_get_object_path");
    stub_funcs.ptr_g_dbus_proxy_get_interface_name = try_find_sym(gio, "g_dbus_proxy_get_interface_name");
    stub_funcs.ptr_g_dbus_proxy_get_default_timeout = try_find_sym(gio, "g_dbus_proxy_get_default_timeout");
    stub_funcs.ptr_g_dbus_proxy_set_default_timeout = try_find_sym(gio, "g_dbus_proxy_set_default_timeout");
    stub_funcs.ptr_g_dbus_proxy_get_interface_info = try_find_sym(gio, "g_dbus_proxy_get_interface_info");
    stub_funcs.ptr_g_dbus_proxy_set_interface_info = try_find_sym(gio, "g_dbus_proxy_set_interface_info");
    stub_funcs.ptr_g_dbus_proxy_get_cached_property = try_find_sym(gio, "g_dbus_proxy_get_cached_property");
    stub_funcs.ptr_g_dbus_proxy_set_cached_property = try_find_sym(gio, "g_dbus_proxy_set_cached_property");
    stub_funcs.ptr_g_dbus_proxy_get_cached_property_names = try_find_sym(gio, "g_dbus_proxy_get_cached_property_names");
    stub_funcs.ptr_g_dbus_proxy_call = try_find_sym(gio, "g_dbus_proxy_call");
    stub_funcs.ptr_g_dbus_proxy_call_finish = try_find_sym(gio, "g_dbus_proxy_call_finish");
    stub_funcs.ptr_g_dbus_proxy_call_sync = try_find_sym(gio, "g_dbus_proxy_call_sync");
    stub_funcs.ptr_g_dbus_proxy_call_with_unix_fd_list = try_find_sym(gio, "g_dbus_proxy_call_with_unix_fd_list");
    stub_funcs.ptr_g_dbus_proxy_call_with_unix_fd_list_finish = try_find_sym(gio, "g_dbus_proxy_call_with_unix_fd_list_finish");
    stub_funcs.ptr_g_dbus_proxy_call_with_unix_fd_list_sync = try_find_sym(gio, "g_dbus_proxy_call_with_unix_fd_list_sync");
    stub_funcs.ptr_g_dbus_server_get_type = try_find_sym(gio, "g_dbus_server_get_type");
    stub_funcs.ptr_g_dbus_server_new_sync = try_find_sym(gio, "g_dbus_server_new_sync");
    stub_funcs.ptr_g_dbus_server_get_client_address = try_find_sym(gio, "g_dbus_server_get_client_address");
    stub_funcs.ptr_g_dbus_server_get_guid = try_find_sym(gio, "g_dbus_server_get_guid");
    stub_funcs.ptr_g_dbus_server_get_flags = try_find_sym(gio, "g_dbus_server_get_flags");
    stub_funcs.ptr_g_dbus_server_start = try_find_sym(gio, "g_dbus_server_start");
    stub_funcs.ptr_g_dbus_server_stop = try_find_sym(gio, "g_dbus_server_stop");
    stub_funcs.ptr_g_dbus_server_is_active = try_find_sym(gio, "g_dbus_server_is_active");
    stub_funcs.ptr_g_dbus_is_guid = try_find_sym(gio, "g_dbus_is_guid");
    stub_funcs.ptr_g_dbus_generate_guid = try_find_sym(gio, "g_dbus_generate_guid");
    stub_funcs.ptr_g_dbus_is_name = try_find_sym(gio, "g_dbus_is_name");
    stub_funcs.ptr_g_dbus_is_unique_name = try_find_sym(gio, "g_dbus_is_unique_name");
    stub_funcs.ptr_g_dbus_is_member_name = try_find_sym(gio, "g_dbus_is_member_name");
    stub_funcs.ptr_g_dbus_is_interface_name = try_find_sym(gio, "g_dbus_is_interface_name");
    stub_funcs.ptr_g_dbus_is_error_name = try_find_sym(gio, "g_dbus_is_error_name");
    stub_funcs.ptr_g_dbus_gvariant_to_gvalue = try_find_sym(gio, "g_dbus_gvariant_to_gvalue");
    stub_funcs.ptr_g_dbus_gvalue_to_gvariant = try_find_sym(gio, "g_dbus_gvalue_to_gvariant");
    stub_funcs.ptr_g_dbus_escape_object_path_bytestring = try_find_sym(gio, "g_dbus_escape_object_path_bytestring");
    stub_funcs.ptr_g_dbus_escape_object_path = try_find_sym(gio, "g_dbus_escape_object_path");
    stub_funcs.ptr_g_dbus_unescape_object_path = try_find_sym(gio, "g_dbus_unescape_object_path");
    stub_funcs.ptr_g_debug_controller_get_type = try_find_sym(gio, "g_debug_controller_get_type");
    stub_funcs.ptr_g_debug_controller_get_debug_enabled = try_find_sym(gio, "g_debug_controller_get_debug_enabled");
    stub_funcs.ptr_g_debug_controller_set_debug_enabled = try_find_sym(gio, "g_debug_controller_set_debug_enabled");
    stub_funcs.ptr_g_debug_controller_dbus_get_type = try_find_sym(gio, "g_debug_controller_dbus_get_type");
    stub_funcs.ptr_g_debug_controller_dbus_new = try_find_sym(gio, "g_debug_controller_dbus_new");
    stub_funcs.ptr_g_debug_controller_dbus_stop = try_find_sym(gio, "g_debug_controller_dbus_stop");
    stub_funcs.ptr_g_drive_get_type = try_find_sym(gio, "g_drive_get_type");
    stub_funcs.ptr_g_drive_get_name = try_find_sym(gio, "g_drive_get_name");
    stub_funcs.ptr_g_drive_get_icon = try_find_sym(gio, "g_drive_get_icon");
    stub_funcs.ptr_g_drive_get_symbolic_icon = try_find_sym(gio, "g_drive_get_symbolic_icon");
    stub_funcs.ptr_g_drive_has_volumes = try_find_sym(gio, "g_drive_has_volumes");
    stub_funcs.ptr_g_drive_get_volumes = try_find_sym(gio, "g_drive_get_volumes");
    stub_funcs.ptr_g_drive_is_removable = try_find_sym(gio, "g_drive_is_removable");
    stub_funcs.ptr_g_drive_is_media_removable = try_find_sym(gio, "g_drive_is_media_removable");
    stub_funcs.ptr_g_drive_has_media = try_find_sym(gio, "g_drive_has_media");
    stub_funcs.ptr_g_drive_is_media_check_automatic = try_find_sym(gio, "g_drive_is_media_check_automatic");
    stub_funcs.ptr_g_drive_can_poll_for_media = try_find_sym(gio, "g_drive_can_poll_for_media");
    stub_funcs.ptr_g_drive_can_eject = try_find_sym(gio, "g_drive_can_eject");
    stub_funcs.ptr_g_drive_eject = try_find_sym(gio, "g_drive_eject");
    stub_funcs.ptr_g_drive_eject_finish = try_find_sym(gio, "g_drive_eject_finish");
    stub_funcs.ptr_g_drive_poll_for_media = try_find_sym(gio, "g_drive_poll_for_media");
    stub_funcs.ptr_g_drive_poll_for_media_finish = try_find_sym(gio, "g_drive_poll_for_media_finish");
    stub_funcs.ptr_g_drive_get_identifier = try_find_sym(gio, "g_drive_get_identifier");
    stub_funcs.ptr_g_drive_enumerate_identifiers = try_find_sym(gio, "g_drive_enumerate_identifiers");
    stub_funcs.ptr_g_drive_get_start_stop_type = try_find_sym(gio, "g_drive_get_start_stop_type");
    stub_funcs.ptr_g_drive_can_start = try_find_sym(gio, "g_drive_can_start");
    stub_funcs.ptr_g_drive_can_start_degraded = try_find_sym(gio, "g_drive_can_start_degraded");
    stub_funcs.ptr_g_drive_start = try_find_sym(gio, "g_drive_start");
    stub_funcs.ptr_g_drive_start_finish = try_find_sym(gio, "g_drive_start_finish");
    stub_funcs.ptr_g_drive_can_stop = try_find_sym(gio, "g_drive_can_stop");
    stub_funcs.ptr_g_drive_stop = try_find_sym(gio, "g_drive_stop");
    stub_funcs.ptr_g_drive_stop_finish = try_find_sym(gio, "g_drive_stop_finish");
    stub_funcs.ptr_g_drive_eject_with_operation = try_find_sym(gio, "g_drive_eject_with_operation");
    stub_funcs.ptr_g_drive_eject_with_operation_finish = try_find_sym(gio, "g_drive_eject_with_operation_finish");
    stub_funcs.ptr_g_drive_get_sort_key = try_find_sym(gio, "g_drive_get_sort_key");
    stub_funcs.ptr_g_dtls_connection_get_type = try_find_sym(gio, "g_dtls_connection_get_type");
    stub_funcs.ptr_g_dtls_connection_set_database = try_find_sym(gio, "g_dtls_connection_set_database");
    stub_funcs.ptr_g_dtls_connection_get_database = try_find_sym(gio, "g_dtls_connection_get_database");
    stub_funcs.ptr_g_dtls_connection_set_certificate = try_find_sym(gio, "g_dtls_connection_set_certificate");
    stub_funcs.ptr_g_dtls_connection_get_certificate = try_find_sym(gio, "g_dtls_connection_get_certificate");
    stub_funcs.ptr_g_dtls_connection_set_interaction = try_find_sym(gio, "g_dtls_connection_set_interaction");
    stub_funcs.ptr_g_dtls_connection_get_interaction = try_find_sym(gio, "g_dtls_connection_get_interaction");
    stub_funcs.ptr_g_dtls_connection_get_peer_certificate = try_find_sym(gio, "g_dtls_connection_get_peer_certificate");
    stub_funcs.ptr_g_dtls_connection_get_peer_certificate_errors = try_find_sym(gio, "g_dtls_connection_get_peer_certificate_errors");
    stub_funcs.ptr_g_dtls_connection_set_require_close_notify = try_find_sym(gio, "g_dtls_connection_set_require_close_notify");
    stub_funcs.ptr_g_dtls_connection_get_require_close_notify = try_find_sym(gio, "g_dtls_connection_get_require_close_notify");
    stub_funcs.ptr_g_dtls_connection_set_rehandshake_mode = try_find_sym(gio, "g_dtls_connection_set_rehandshake_mode");
    stub_funcs.ptr_g_dtls_connection_get_rehandshake_mode = try_find_sym(gio, "g_dtls_connection_get_rehandshake_mode");
    stub_funcs.ptr_g_dtls_connection_handshake = try_find_sym(gio, "g_dtls_connection_handshake");
    stub_funcs.ptr_g_dtls_connection_handshake_async = try_find_sym(gio, "g_dtls_connection_handshake_async");
    stub_funcs.ptr_g_dtls_connection_handshake_finish = try_find_sym(gio, "g_dtls_connection_handshake_finish");
    stub_funcs.ptr_g_dtls_connection_shutdown = try_find_sym(gio, "g_dtls_connection_shutdown");
    stub_funcs.ptr_g_dtls_connection_shutdown_async = try_find_sym(gio, "g_dtls_connection_shutdown_async");
    stub_funcs.ptr_g_dtls_connection_shutdown_finish = try_find_sym(gio, "g_dtls_connection_shutdown_finish");
    stub_funcs.ptr_g_dtls_connection_close = try_find_sym(gio, "g_dtls_connection_close");
    stub_funcs.ptr_g_dtls_connection_close_async = try_find_sym(gio, "g_dtls_connection_close_async");
    stub_funcs.ptr_g_dtls_connection_close_finish = try_find_sym(gio, "g_dtls_connection_close_finish");
    stub_funcs.ptr_g_dtls_connection_emit_accept_certificate = try_find_sym(gio, "g_dtls_connection_emit_accept_certificate");
    stub_funcs.ptr_g_dtls_connection_set_advertised_protocols = try_find_sym(gio, "g_dtls_connection_set_advertised_protocols");
    stub_funcs.ptr_g_dtls_connection_get_negotiated_protocol = try_find_sym(gio, "g_dtls_connection_get_negotiated_protocol");
    stub_funcs.ptr_g_dtls_connection_get_channel_binding_data = try_find_sym(gio, "g_dtls_connection_get_channel_binding_data");
    stub_funcs.ptr_g_dtls_connection_get_protocol_version = try_find_sym(gio, "g_dtls_connection_get_protocol_version");
    stub_funcs.ptr_g_dtls_connection_get_ciphersuite_name = try_find_sym(gio, "g_dtls_connection_get_ciphersuite_name");
    stub_funcs.ptr_g_dtls_client_connection_get_type = try_find_sym(gio, "g_dtls_client_connection_get_type");
    stub_funcs.ptr_g_dtls_client_connection_new = try_find_sym(gio, "g_dtls_client_connection_new");
    stub_funcs.ptr_g_dtls_client_connection_get_validation_flags = try_find_sym(gio, "g_dtls_client_connection_get_validation_flags");
    stub_funcs.ptr_g_dtls_client_connection_set_validation_flags = try_find_sym(gio, "g_dtls_client_connection_set_validation_flags");
    stub_funcs.ptr_g_dtls_client_connection_get_server_identity = try_find_sym(gio, "g_dtls_client_connection_get_server_identity");
    stub_funcs.ptr_g_dtls_client_connection_set_server_identity = try_find_sym(gio, "g_dtls_client_connection_set_server_identity");
    stub_funcs.ptr_g_dtls_client_connection_get_accepted_cas = try_find_sym(gio, "g_dtls_client_connection_get_accepted_cas");
    stub_funcs.ptr_g_dtls_server_connection_get_type = try_find_sym(gio, "g_dtls_server_connection_get_type");
    stub_funcs.ptr_g_dtls_server_connection_new = try_find_sym(gio, "g_dtls_server_connection_new");
    stub_funcs.ptr_g_icon_get_type = try_find_sym(gio, "g_icon_get_type");
    stub_funcs.ptr_g_icon_hash = try_find_sym(gio, "g_icon_hash");
    stub_funcs.ptr_g_icon_equal = try_find_sym(gio, "g_icon_equal");
    stub_funcs.ptr_g_icon_to_string = try_find_sym(gio, "g_icon_to_string");
    stub_funcs.ptr_g_icon_new_for_string = try_find_sym(gio, "g_icon_new_for_string");
    stub_funcs.ptr_g_icon_serialize = try_find_sym(gio, "g_icon_serialize");
    stub_funcs.ptr_g_icon_deserialize = try_find_sym(gio, "g_icon_deserialize");
    stub_funcs.ptr_g_emblem_get_type = try_find_sym(gio, "g_emblem_get_type");
    stub_funcs.ptr_g_emblem_new = try_find_sym(gio, "g_emblem_new");
    stub_funcs.ptr_g_emblem_new_with_origin = try_find_sym(gio, "g_emblem_new_with_origin");
    stub_funcs.ptr_g_emblem_get_icon = try_find_sym(gio, "g_emblem_get_icon");
    stub_funcs.ptr_g_emblem_get_origin = try_find_sym(gio, "g_emblem_get_origin");
    stub_funcs.ptr_g_emblemed_icon_get_type = try_find_sym(gio, "g_emblemed_icon_get_type");
    stub_funcs.ptr_g_emblemed_icon_new = try_find_sym(gio, "g_emblemed_icon_new");
    stub_funcs.ptr_g_emblemed_icon_get_icon = try_find_sym(gio, "g_emblemed_icon_get_icon");
    stub_funcs.ptr_g_emblemed_icon_get_emblems = try_find_sym(gio, "g_emblemed_icon_get_emblems");
    stub_funcs.ptr_g_emblemed_icon_add_emblem = try_find_sym(gio, "g_emblemed_icon_add_emblem");
    stub_funcs.ptr_g_emblemed_icon_clear_emblems = try_find_sym(gio, "g_emblemed_icon_clear_emblems");
    stub_funcs.ptr_g_file_get_type = try_find_sym(gio, "g_file_get_type");
    stub_funcs.ptr_g_file_new_for_path = try_find_sym(gio, "g_file_new_for_path");
    stub_funcs.ptr_g_file_new_for_uri = try_find_sym(gio, "g_file_new_for_uri");
    stub_funcs.ptr_g_file_new_for_commandline_arg = try_find_sym(gio, "g_file_new_for_commandline_arg");
    stub_funcs.ptr_g_file_new_for_commandline_arg_and_cwd = try_find_sym(gio, "g_file_new_for_commandline_arg_and_cwd");
    stub_funcs.ptr_g_file_new_tmp = try_find_sym(gio, "g_file_new_tmp");
    stub_funcs.ptr_g_file_new_tmp_async = try_find_sym(gio, "g_file_new_tmp_async");
    stub_funcs.ptr_g_file_new_tmp_finish = try_find_sym(gio, "g_file_new_tmp_finish");
    stub_funcs.ptr_g_file_new_tmp_dir_async = try_find_sym(gio, "g_file_new_tmp_dir_async");
    stub_funcs.ptr_g_file_new_tmp_dir_finish = try_find_sym(gio, "g_file_new_tmp_dir_finish");
    stub_funcs.ptr_g_file_parse_name = try_find_sym(gio, "g_file_parse_name");
    stub_funcs.ptr_g_file_new_build_filenamev = try_find_sym(gio, "g_file_new_build_filenamev");
    stub_funcs.ptr_g_file_dup = try_find_sym(gio, "g_file_dup");
    stub_funcs.ptr_g_file_hash = try_find_sym(gio, "g_file_hash");
    stub_funcs.ptr_g_file_equal = try_find_sym(gio, "g_file_equal");
    stub_funcs.ptr_g_file_get_basename = try_find_sym(gio, "g_file_get_basename");
    stub_funcs.ptr_g_file_get_path = try_find_sym(gio, "g_file_get_path");
    stub_funcs.ptr_g_file_peek_path = try_find_sym(gio, "g_file_peek_path");
    stub_funcs.ptr_g_file_get_uri = try_find_sym(gio, "g_file_get_uri");
    stub_funcs.ptr_g_file_get_parse_name = try_find_sym(gio, "g_file_get_parse_name");
    stub_funcs.ptr_g_file_get_parent = try_find_sym(gio, "g_file_get_parent");
    stub_funcs.ptr_g_file_has_parent = try_find_sym(gio, "g_file_has_parent");
    stub_funcs.ptr_g_file_get_child = try_find_sym(gio, "g_file_get_child");
    stub_funcs.ptr_g_file_get_child_for_display_name = try_find_sym(gio, "g_file_get_child_for_display_name");
    stub_funcs.ptr_g_file_has_prefix = try_find_sym(gio, "g_file_has_prefix");
    stub_funcs.ptr_g_file_get_relative_path = try_find_sym(gio, "g_file_get_relative_path");
    stub_funcs.ptr_g_file_resolve_relative_path = try_find_sym(gio, "g_file_resolve_relative_path");
    stub_funcs.ptr_g_file_is_native = try_find_sym(gio, "g_file_is_native");
    stub_funcs.ptr_g_file_has_uri_scheme = try_find_sym(gio, "g_file_has_uri_scheme");
    stub_funcs.ptr_g_file_get_uri_scheme = try_find_sym(gio, "g_file_get_uri_scheme");
    stub_funcs.ptr_g_file_read = try_find_sym(gio, "g_file_read");
    stub_funcs.ptr_g_file_read_async = try_find_sym(gio, "g_file_read_async");
    stub_funcs.ptr_g_file_read_finish = try_find_sym(gio, "g_file_read_finish");
    stub_funcs.ptr_g_file_append_to = try_find_sym(gio, "g_file_append_to");
    stub_funcs.ptr_g_file_create = try_find_sym(gio, "g_file_create");
    stub_funcs.ptr_g_file_replace = try_find_sym(gio, "g_file_replace");
    stub_funcs.ptr_g_file_append_to_async = try_find_sym(gio, "g_file_append_to_async");
    stub_funcs.ptr_g_file_append_to_finish = try_find_sym(gio, "g_file_append_to_finish");
    stub_funcs.ptr_g_file_create_async = try_find_sym(gio, "g_file_create_async");
    stub_funcs.ptr_g_file_create_finish = try_find_sym(gio, "g_file_create_finish");
    stub_funcs.ptr_g_file_replace_async = try_find_sym(gio, "g_file_replace_async");
    stub_funcs.ptr_g_file_replace_finish = try_find_sym(gio, "g_file_replace_finish");
    stub_funcs.ptr_g_file_open_readwrite = try_find_sym(gio, "g_file_open_readwrite");
    stub_funcs.ptr_g_file_open_readwrite_async = try_find_sym(gio, "g_file_open_readwrite_async");
    stub_funcs.ptr_g_file_open_readwrite_finish = try_find_sym(gio, "g_file_open_readwrite_finish");
    stub_funcs.ptr_g_file_create_readwrite = try_find_sym(gio, "g_file_create_readwrite");
    stub_funcs.ptr_g_file_create_readwrite_async = try_find_sym(gio, "g_file_create_readwrite_async");
    stub_funcs.ptr_g_file_create_readwrite_finish = try_find_sym(gio, "g_file_create_readwrite_finish");
    stub_funcs.ptr_g_file_replace_readwrite = try_find_sym(gio, "g_file_replace_readwrite");
    stub_funcs.ptr_g_file_replace_readwrite_async = try_find_sym(gio, "g_file_replace_readwrite_async");
    stub_funcs.ptr_g_file_replace_readwrite_finish = try_find_sym(gio, "g_file_replace_readwrite_finish");
    stub_funcs.ptr_g_file_query_exists = try_find_sym(gio, "g_file_query_exists");
    stub_funcs.ptr_g_file_query_file_type = try_find_sym(gio, "g_file_query_file_type");
    stub_funcs.ptr_g_file_query_info = try_find_sym(gio, "g_file_query_info");
    stub_funcs.ptr_g_file_query_info_async = try_find_sym(gio, "g_file_query_info_async");
    stub_funcs.ptr_g_file_query_info_finish = try_find_sym(gio, "g_file_query_info_finish");
    stub_funcs.ptr_g_file_query_filesystem_info = try_find_sym(gio, "g_file_query_filesystem_info");
    stub_funcs.ptr_g_file_query_filesystem_info_async = try_find_sym(gio, "g_file_query_filesystem_info_async");
    stub_funcs.ptr_g_file_query_filesystem_info_finish = try_find_sym(gio, "g_file_query_filesystem_info_finish");
    stub_funcs.ptr_g_file_find_enclosing_mount = try_find_sym(gio, "g_file_find_enclosing_mount");
    stub_funcs.ptr_g_file_find_enclosing_mount_async = try_find_sym(gio, "g_file_find_enclosing_mount_async");
    stub_funcs.ptr_g_file_find_enclosing_mount_finish = try_find_sym(gio, "g_file_find_enclosing_mount_finish");
    stub_funcs.ptr_g_file_enumerate_children = try_find_sym(gio, "g_file_enumerate_children");
    stub_funcs.ptr_g_file_enumerate_children_async = try_find_sym(gio, "g_file_enumerate_children_async");
    stub_funcs.ptr_g_file_enumerate_children_finish = try_find_sym(gio, "g_file_enumerate_children_finish");
    stub_funcs.ptr_g_file_set_display_name = try_find_sym(gio, "g_file_set_display_name");
    stub_funcs.ptr_g_file_set_display_name_async = try_find_sym(gio, "g_file_set_display_name_async");
    stub_funcs.ptr_g_file_set_display_name_finish = try_find_sym(gio, "g_file_set_display_name_finish");
    stub_funcs.ptr_g_file_delete = try_find_sym(gio, "g_file_delete");
    stub_funcs.ptr_g_file_delete_async = try_find_sym(gio, "g_file_delete_async");
    stub_funcs.ptr_g_file_delete_finish = try_find_sym(gio, "g_file_delete_finish");
    stub_funcs.ptr_g_file_trash = try_find_sym(gio, "g_file_trash");
    stub_funcs.ptr_g_file_trash_async = try_find_sym(gio, "g_file_trash_async");
    stub_funcs.ptr_g_file_trash_finish = try_find_sym(gio, "g_file_trash_finish");
    stub_funcs.ptr_g_file_copy = try_find_sym(gio, "g_file_copy");
    stub_funcs.ptr_g_file_copy_async = try_find_sym(gio, "g_file_copy_async");
    stub_funcs.ptr_g_file_copy_async_with_closures = try_find_sym(gio, "g_file_copy_async_with_closures");
    stub_funcs.ptr_g_file_copy_finish = try_find_sym(gio, "g_file_copy_finish");
    stub_funcs.ptr_g_file_move = try_find_sym(gio, "g_file_move");
    stub_funcs.ptr_g_file_move_async = try_find_sym(gio, "g_file_move_async");
    stub_funcs.ptr_g_file_move_async_with_closures = try_find_sym(gio, "g_file_move_async_with_closures");
    stub_funcs.ptr_g_file_move_finish = try_find_sym(gio, "g_file_move_finish");
    stub_funcs.ptr_g_file_make_directory = try_find_sym(gio, "g_file_make_directory");
    stub_funcs.ptr_g_file_make_directory_async = try_find_sym(gio, "g_file_make_directory_async");
    stub_funcs.ptr_g_file_make_directory_finish = try_find_sym(gio, "g_file_make_directory_finish");
    stub_funcs.ptr_g_file_make_directory_with_parents = try_find_sym(gio, "g_file_make_directory_with_parents");
    stub_funcs.ptr_g_file_make_symbolic_link = try_find_sym(gio, "g_file_make_symbolic_link");
    stub_funcs.ptr_g_file_make_symbolic_link_async = try_find_sym(gio, "g_file_make_symbolic_link_async");
    stub_funcs.ptr_g_file_make_symbolic_link_finish = try_find_sym(gio, "g_file_make_symbolic_link_finish");
    stub_funcs.ptr_g_file_query_settable_attributes = try_find_sym(gio, "g_file_query_settable_attributes");
    stub_funcs.ptr_g_file_query_writable_namespaces = try_find_sym(gio, "g_file_query_writable_namespaces");
    stub_funcs.ptr_g_file_set_attribute = try_find_sym(gio, "g_file_set_attribute");
    stub_funcs.ptr_g_file_set_attributes_from_info = try_find_sym(gio, "g_file_set_attributes_from_info");
    stub_funcs.ptr_g_file_set_attributes_async = try_find_sym(gio, "g_file_set_attributes_async");
    stub_funcs.ptr_g_file_set_attributes_finish = try_find_sym(gio, "g_file_set_attributes_finish");
    stub_funcs.ptr_g_file_set_attribute_string = try_find_sym(gio, "g_file_set_attribute_string");
    stub_funcs.ptr_g_file_set_attribute_byte_string = try_find_sym(gio, "g_file_set_attribute_byte_string");
    stub_funcs.ptr_g_file_set_attribute_uint32 = try_find_sym(gio, "g_file_set_attribute_uint32");
    stub_funcs.ptr_g_file_set_attribute_int32 = try_find_sym(gio, "g_file_set_attribute_int32");
    stub_funcs.ptr_g_file_set_attribute_uint64 = try_find_sym(gio, "g_file_set_attribute_uint64");
    stub_funcs.ptr_g_file_set_attribute_int64 = try_find_sym(gio, "g_file_set_attribute_int64");
    stub_funcs.ptr_g_file_mount_enclosing_volume = try_find_sym(gio, "g_file_mount_enclosing_volume");
    stub_funcs.ptr_g_file_mount_enclosing_volume_finish = try_find_sym(gio, "g_file_mount_enclosing_volume_finish");
    stub_funcs.ptr_g_file_mount_mountable = try_find_sym(gio, "g_file_mount_mountable");
    stub_funcs.ptr_g_file_mount_mountable_finish = try_find_sym(gio, "g_file_mount_mountable_finish");
    stub_funcs.ptr_g_file_unmount_mountable = try_find_sym(gio, "g_file_unmount_mountable");
    stub_funcs.ptr_g_file_unmount_mountable_finish = try_find_sym(gio, "g_file_unmount_mountable_finish");
    stub_funcs.ptr_g_file_unmount_mountable_with_operation = try_find_sym(gio, "g_file_unmount_mountable_with_operation");
    stub_funcs.ptr_g_file_unmount_mountable_with_operation_finish = try_find_sym(gio, "g_file_unmount_mountable_with_operation_finish");
    stub_funcs.ptr_g_file_eject_mountable = try_find_sym(gio, "g_file_eject_mountable");
    stub_funcs.ptr_g_file_eject_mountable_finish = try_find_sym(gio, "g_file_eject_mountable_finish");
    stub_funcs.ptr_g_file_eject_mountable_with_operation = try_find_sym(gio, "g_file_eject_mountable_with_operation");
    stub_funcs.ptr_g_file_eject_mountable_with_operation_finish = try_find_sym(gio, "g_file_eject_mountable_with_operation_finish");
    stub_funcs.ptr_g_file_build_attribute_list_for_copy = try_find_sym(gio, "g_file_build_attribute_list_for_copy");
    stub_funcs.ptr_g_file_copy_attributes = try_find_sym(gio, "g_file_copy_attributes");
    stub_funcs.ptr_g_file_monitor_directory = try_find_sym(gio, "g_file_monitor_directory");
    stub_funcs.ptr_g_file_monitor_file = try_find_sym(gio, "g_file_monitor_file");
    stub_funcs.ptr_g_file_monitor = try_find_sym(gio, "g_file_monitor");
    stub_funcs.ptr_g_file_measure_disk_usage = try_find_sym(gio, "g_file_measure_disk_usage");
    stub_funcs.ptr_g_file_measure_disk_usage_async = try_find_sym(gio, "g_file_measure_disk_usage_async");
    stub_funcs.ptr_g_file_measure_disk_usage_finish = try_find_sym(gio, "g_file_measure_disk_usage_finish");
    stub_funcs.ptr_g_file_start_mountable = try_find_sym(gio, "g_file_start_mountable");
    stub_funcs.ptr_g_file_start_mountable_finish = try_find_sym(gio, "g_file_start_mountable_finish");
    stub_funcs.ptr_g_file_stop_mountable = try_find_sym(gio, "g_file_stop_mountable");
    stub_funcs.ptr_g_file_stop_mountable_finish = try_find_sym(gio, "g_file_stop_mountable_finish");
    stub_funcs.ptr_g_file_poll_mountable = try_find_sym(gio, "g_file_poll_mountable");
    stub_funcs.ptr_g_file_poll_mountable_finish = try_find_sym(gio, "g_file_poll_mountable_finish");
    stub_funcs.ptr_g_file_query_default_handler = try_find_sym(gio, "g_file_query_default_handler");
    stub_funcs.ptr_g_file_query_default_handler_async = try_find_sym(gio, "g_file_query_default_handler_async");
    stub_funcs.ptr_g_file_query_default_handler_finish = try_find_sym(gio, "g_file_query_default_handler_finish");
    stub_funcs.ptr_g_file_load_contents = try_find_sym(gio, "g_file_load_contents");
    stub_funcs.ptr_g_file_load_contents_async = try_find_sym(gio, "g_file_load_contents_async");
    stub_funcs.ptr_g_file_load_contents_finish = try_find_sym(gio, "g_file_load_contents_finish");
    stub_funcs.ptr_g_file_load_partial_contents_async = try_find_sym(gio, "g_file_load_partial_contents_async");
    stub_funcs.ptr_g_file_load_partial_contents_finish = try_find_sym(gio, "g_file_load_partial_contents_finish");
    stub_funcs.ptr_g_file_replace_contents = try_find_sym(gio, "g_file_replace_contents");
    stub_funcs.ptr_g_file_replace_contents_async = try_find_sym(gio, "g_file_replace_contents_async");
    stub_funcs.ptr_g_file_replace_contents_bytes_async = try_find_sym(gio, "g_file_replace_contents_bytes_async");
    stub_funcs.ptr_g_file_replace_contents_finish = try_find_sym(gio, "g_file_replace_contents_finish");
    stub_funcs.ptr_g_file_supports_thread_contexts = try_find_sym(gio, "g_file_supports_thread_contexts");
    stub_funcs.ptr_g_file_load_bytes = try_find_sym(gio, "g_file_load_bytes");
    stub_funcs.ptr_g_file_load_bytes_async = try_find_sym(gio, "g_file_load_bytes_async");
    stub_funcs.ptr_g_file_load_bytes_finish = try_find_sym(gio, "g_file_load_bytes_finish");
    stub_funcs.ptr_g_file_attribute_info_list_get_type = try_find_sym(gio, "g_file_attribute_info_list_get_type");
    stub_funcs.ptr_g_file_attribute_info_list_new = try_find_sym(gio, "g_file_attribute_info_list_new");
    stub_funcs.ptr_g_file_attribute_info_list_ref = try_find_sym(gio, "g_file_attribute_info_list_ref");
    stub_funcs.ptr_g_file_attribute_info_list_unref = try_find_sym(gio, "g_file_attribute_info_list_unref");
    stub_funcs.ptr_g_file_attribute_info_list_dup = try_find_sym(gio, "g_file_attribute_info_list_dup");
    stub_funcs.ptr_g_file_attribute_info_list_lookup = try_find_sym(gio, "g_file_attribute_info_list_lookup");
    stub_funcs.ptr_g_file_attribute_info_list_add = try_find_sym(gio, "g_file_attribute_info_list_add");
    stub_funcs.ptr_g_file_enumerator_get_type = try_find_sym(gio, "g_file_enumerator_get_type");
    stub_funcs.ptr_g_file_enumerator_next_file = try_find_sym(gio, "g_file_enumerator_next_file");
    stub_funcs.ptr_g_file_enumerator_close = try_find_sym(gio, "g_file_enumerator_close");
    stub_funcs.ptr_g_file_enumerator_next_files_async = try_find_sym(gio, "g_file_enumerator_next_files_async");
    stub_funcs.ptr_g_file_enumerator_next_files_finish = try_find_sym(gio, "g_file_enumerator_next_files_finish");
    stub_funcs.ptr_g_file_enumerator_close_async = try_find_sym(gio, "g_file_enumerator_close_async");
    stub_funcs.ptr_g_file_enumerator_close_finish = try_find_sym(gio, "g_file_enumerator_close_finish");
    stub_funcs.ptr_g_file_enumerator_is_closed = try_find_sym(gio, "g_file_enumerator_is_closed");
    stub_funcs.ptr_g_file_enumerator_has_pending = try_find_sym(gio, "g_file_enumerator_has_pending");
    stub_funcs.ptr_g_file_enumerator_set_pending = try_find_sym(gio, "g_file_enumerator_set_pending");
    stub_funcs.ptr_g_file_enumerator_get_container = try_find_sym(gio, "g_file_enumerator_get_container");
    stub_funcs.ptr_g_file_enumerator_get_child = try_find_sym(gio, "g_file_enumerator_get_child");
    stub_funcs.ptr_g_file_enumerator_iterate = try_find_sym(gio, "g_file_enumerator_iterate");
    stub_funcs.ptr_g_file_icon_get_type = try_find_sym(gio, "g_file_icon_get_type");
    stub_funcs.ptr_g_file_icon_new = try_find_sym(gio, "g_file_icon_new");
    stub_funcs.ptr_g_file_icon_get_file = try_find_sym(gio, "g_file_icon_get_file");
    stub_funcs.ptr_g_file_info_get_type = try_find_sym(gio, "g_file_info_get_type");
    stub_funcs.ptr_g_file_info_new = try_find_sym(gio, "g_file_info_new");
    stub_funcs.ptr_g_file_info_dup = try_find_sym(gio, "g_file_info_dup");
    stub_funcs.ptr_g_file_info_copy_into = try_find_sym(gio, "g_file_info_copy_into");
    stub_funcs.ptr_g_file_info_has_attribute = try_find_sym(gio, "g_file_info_has_attribute");
    stub_funcs.ptr_g_file_info_has_namespace = try_find_sym(gio, "g_file_info_has_namespace");
    stub_funcs.ptr_g_file_info_list_attributes = try_find_sym(gio, "g_file_info_list_attributes");
    stub_funcs.ptr_g_file_info_get_attribute_data = try_find_sym(gio, "g_file_info_get_attribute_data");
    stub_funcs.ptr_g_file_info_get_attribute_type = try_find_sym(gio, "g_file_info_get_attribute_type");
    stub_funcs.ptr_g_file_info_remove_attribute = try_find_sym(gio, "g_file_info_remove_attribute");
    stub_funcs.ptr_g_file_info_get_attribute_status = try_find_sym(gio, "g_file_info_get_attribute_status");
    stub_funcs.ptr_g_file_info_set_attribute_status = try_find_sym(gio, "g_file_info_set_attribute_status");
    stub_funcs.ptr_g_file_info_get_attribute_as_string = try_find_sym(gio, "g_file_info_get_attribute_as_string");
    stub_funcs.ptr_g_file_info_get_attribute_string = try_find_sym(gio, "g_file_info_get_attribute_string");
    stub_funcs.ptr_g_file_info_get_attribute_byte_string = try_find_sym(gio, "g_file_info_get_attribute_byte_string");
    stub_funcs.ptr_g_file_info_get_attribute_boolean = try_find_sym(gio, "g_file_info_get_attribute_boolean");
    stub_funcs.ptr_g_file_info_get_attribute_uint32 = try_find_sym(gio, "g_file_info_get_attribute_uint32");
    stub_funcs.ptr_g_file_info_get_attribute_int32 = try_find_sym(gio, "g_file_info_get_attribute_int32");
    stub_funcs.ptr_g_file_info_get_attribute_uint64 = try_find_sym(gio, "g_file_info_get_attribute_uint64");
    stub_funcs.ptr_g_file_info_get_attribute_int64 = try_find_sym(gio, "g_file_info_get_attribute_int64");
    stub_funcs.ptr_g_file_info_get_attribute_object = try_find_sym(gio, "g_file_info_get_attribute_object");
    stub_funcs.ptr_g_file_info_get_attribute_stringv = try_find_sym(gio, "g_file_info_get_attribute_stringv");
    stub_funcs.ptr_g_file_info_get_attribute_file_path = try_find_sym(gio, "g_file_info_get_attribute_file_path");
    stub_funcs.ptr_g_file_info_set_attribute = try_find_sym(gio, "g_file_info_set_attribute");
    stub_funcs.ptr_g_file_info_set_attribute_string = try_find_sym(gio, "g_file_info_set_attribute_string");
    stub_funcs.ptr_g_file_info_set_attribute_byte_string = try_find_sym(gio, "g_file_info_set_attribute_byte_string");
    stub_funcs.ptr_g_file_info_set_attribute_boolean = try_find_sym(gio, "g_file_info_set_attribute_boolean");
    stub_funcs.ptr_g_file_info_set_attribute_uint32 = try_find_sym(gio, "g_file_info_set_attribute_uint32");
    stub_funcs.ptr_g_file_info_set_attribute_int32 = try_find_sym(gio, "g_file_info_set_attribute_int32");
    stub_funcs.ptr_g_file_info_set_attribute_uint64 = try_find_sym(gio, "g_file_info_set_attribute_uint64");
    stub_funcs.ptr_g_file_info_set_attribute_int64 = try_find_sym(gio, "g_file_info_set_attribute_int64");
    stub_funcs.ptr_g_file_info_set_attribute_object = try_find_sym(gio, "g_file_info_set_attribute_object");
    stub_funcs.ptr_g_file_info_set_attribute_stringv = try_find_sym(gio, "g_file_info_set_attribute_stringv");
    stub_funcs.ptr_g_file_info_set_attribute_file_path = try_find_sym(gio, "g_file_info_set_attribute_file_path");
    stub_funcs.ptr_g_file_info_clear_status = try_find_sym(gio, "g_file_info_clear_status");
    stub_funcs.ptr_g_file_info_get_deletion_date = try_find_sym(gio, "g_file_info_get_deletion_date");
    stub_funcs.ptr_g_file_info_get_file_type = try_find_sym(gio, "g_file_info_get_file_type");
    stub_funcs.ptr_g_file_info_get_is_hidden = try_find_sym(gio, "g_file_info_get_is_hidden");
    stub_funcs.ptr_g_file_info_get_is_backup = try_find_sym(gio, "g_file_info_get_is_backup");
    stub_funcs.ptr_g_file_info_get_is_symlink = try_find_sym(gio, "g_file_info_get_is_symlink");
    stub_funcs.ptr_g_file_info_get_name = try_find_sym(gio, "g_file_info_get_name");
    stub_funcs.ptr_g_file_info_get_display_name = try_find_sym(gio, "g_file_info_get_display_name");
    stub_funcs.ptr_g_file_info_get_edit_name = try_find_sym(gio, "g_file_info_get_edit_name");
    stub_funcs.ptr_g_file_info_get_icon = try_find_sym(gio, "g_file_info_get_icon");
    stub_funcs.ptr_g_file_info_get_symbolic_icon = try_find_sym(gio, "g_file_info_get_symbolic_icon");
    stub_funcs.ptr_g_file_info_get_content_type = try_find_sym(gio, "g_file_info_get_content_type");
    stub_funcs.ptr_g_file_info_get_size = try_find_sym(gio, "g_file_info_get_size");
    stub_funcs.ptr_g_file_info_get_modification_time = try_find_sym(gio, "g_file_info_get_modification_time");
    stub_funcs.ptr_g_file_info_get_modification_date_time = try_find_sym(gio, "g_file_info_get_modification_date_time");
    stub_funcs.ptr_g_file_info_get_access_date_time = try_find_sym(gio, "g_file_info_get_access_date_time");
    stub_funcs.ptr_g_file_info_get_creation_date_time = try_find_sym(gio, "g_file_info_get_creation_date_time");
    stub_funcs.ptr_g_file_info_get_symlink_target = try_find_sym(gio, "g_file_info_get_symlink_target");
    stub_funcs.ptr_g_file_info_get_etag = try_find_sym(gio, "g_file_info_get_etag");
    stub_funcs.ptr_g_file_info_get_sort_order = try_find_sym(gio, "g_file_info_get_sort_order");
    stub_funcs.ptr_g_file_info_set_attribute_mask = try_find_sym(gio, "g_file_info_set_attribute_mask");
    stub_funcs.ptr_g_file_info_unset_attribute_mask = try_find_sym(gio, "g_file_info_unset_attribute_mask");
    stub_funcs.ptr_g_file_info_set_file_type = try_find_sym(gio, "g_file_info_set_file_type");
    stub_funcs.ptr_g_file_info_set_is_hidden = try_find_sym(gio, "g_file_info_set_is_hidden");
    stub_funcs.ptr_g_file_info_set_is_symlink = try_find_sym(gio, "g_file_info_set_is_symlink");
    stub_funcs.ptr_g_file_info_set_name = try_find_sym(gio, "g_file_info_set_name");
    stub_funcs.ptr_g_file_info_set_display_name = try_find_sym(gio, "g_file_info_set_display_name");
    stub_funcs.ptr_g_file_info_set_edit_name = try_find_sym(gio, "g_file_info_set_edit_name");
    stub_funcs.ptr_g_file_info_set_icon = try_find_sym(gio, "g_file_info_set_icon");
    stub_funcs.ptr_g_file_info_set_symbolic_icon = try_find_sym(gio, "g_file_info_set_symbolic_icon");
    stub_funcs.ptr_g_file_info_set_content_type = try_find_sym(gio, "g_file_info_set_content_type");
    stub_funcs.ptr_g_file_info_set_size = try_find_sym(gio, "g_file_info_set_size");
    stub_funcs.ptr_g_file_info_set_modification_time = try_find_sym(gio, "g_file_info_set_modification_time");
    stub_funcs.ptr_g_file_info_set_modification_date_time = try_find_sym(gio, "g_file_info_set_modification_date_time");
    stub_funcs.ptr_g_file_info_set_access_date_time = try_find_sym(gio, "g_file_info_set_access_date_time");
    stub_funcs.ptr_g_file_info_set_creation_date_time = try_find_sym(gio, "g_file_info_set_creation_date_time");
    stub_funcs.ptr_g_file_info_set_symlink_target = try_find_sym(gio, "g_file_info_set_symlink_target");
    stub_funcs.ptr_g_file_info_set_sort_order = try_find_sym(gio, "g_file_info_set_sort_order");
    stub_funcs.ptr_g_file_attribute_matcher_get_type = try_find_sym(gio, "g_file_attribute_matcher_get_type");
    stub_funcs.ptr_g_file_attribute_matcher_new = try_find_sym(gio, "g_file_attribute_matcher_new");
    stub_funcs.ptr_g_file_attribute_matcher_ref = try_find_sym(gio, "g_file_attribute_matcher_ref");
    stub_funcs.ptr_g_file_attribute_matcher_unref = try_find_sym(gio, "g_file_attribute_matcher_unref");
    stub_funcs.ptr_g_file_attribute_matcher_subtract = try_find_sym(gio, "g_file_attribute_matcher_subtract");
    stub_funcs.ptr_g_file_attribute_matcher_matches = try_find_sym(gio, "g_file_attribute_matcher_matches");
    stub_funcs.ptr_g_file_attribute_matcher_matches_only = try_find_sym(gio, "g_file_attribute_matcher_matches_only");
    stub_funcs.ptr_g_file_attribute_matcher_enumerate_namespace = try_find_sym(gio, "g_file_attribute_matcher_enumerate_namespace");
    stub_funcs.ptr_g_file_attribute_matcher_enumerate_next = try_find_sym(gio, "g_file_attribute_matcher_enumerate_next");
    stub_funcs.ptr_g_file_attribute_matcher_to_string = try_find_sym(gio, "g_file_attribute_matcher_to_string");
    stub_funcs.ptr_g_file_input_stream_get_type = try_find_sym(gio, "g_file_input_stream_get_type");
    stub_funcs.ptr_g_file_input_stream_query_info = try_find_sym(gio, "g_file_input_stream_query_info");
    stub_funcs.ptr_g_file_input_stream_query_info_async = try_find_sym(gio, "g_file_input_stream_query_info_async");
    stub_funcs.ptr_g_file_input_stream_query_info_finish = try_find_sym(gio, "g_file_input_stream_query_info_finish");
    stub_funcs.ptr_g_io_error_quark = try_find_sym(gio, "g_io_error_quark");
    stub_funcs.ptr_g_io_error_from_errno = try_find_sym(gio, "g_io_error_from_errno");
    stub_funcs.ptr_g_io_error_from_file_error = try_find_sym(gio, "g_io_error_from_file_error");
    stub_funcs.ptr_g_io_stream_get_type = try_find_sym(gio, "g_io_stream_get_type");
    stub_funcs.ptr_g_io_stream_get_input_stream = try_find_sym(gio, "g_io_stream_get_input_stream");
    stub_funcs.ptr_g_io_stream_get_output_stream = try_find_sym(gio, "g_io_stream_get_output_stream");
    stub_funcs.ptr_g_io_stream_splice_async = try_find_sym(gio, "g_io_stream_splice_async");
    stub_funcs.ptr_g_io_stream_splice_finish = try_find_sym(gio, "g_io_stream_splice_finish");
    stub_funcs.ptr_g_io_stream_close = try_find_sym(gio, "g_io_stream_close");
    stub_funcs.ptr_g_io_stream_close_async = try_find_sym(gio, "g_io_stream_close_async");
    stub_funcs.ptr_g_io_stream_close_finish = try_find_sym(gio, "g_io_stream_close_finish");
    stub_funcs.ptr_g_io_stream_is_closed = try_find_sym(gio, "g_io_stream_is_closed");
    stub_funcs.ptr_g_io_stream_has_pending = try_find_sym(gio, "g_io_stream_has_pending");
    stub_funcs.ptr_g_io_stream_set_pending = try_find_sym(gio, "g_io_stream_set_pending");
    stub_funcs.ptr_g_io_stream_clear_pending = try_find_sym(gio, "g_io_stream_clear_pending");
    stub_funcs.ptr_g_file_io_stream_get_type = try_find_sym(gio, "g_file_io_stream_get_type");
    stub_funcs.ptr_g_file_io_stream_query_info = try_find_sym(gio, "g_file_io_stream_query_info");
    stub_funcs.ptr_g_file_io_stream_query_info_async = try_find_sym(gio, "g_file_io_stream_query_info_async");
    stub_funcs.ptr_g_file_io_stream_query_info_finish = try_find_sym(gio, "g_file_io_stream_query_info_finish");
    stub_funcs.ptr_g_file_io_stream_get_etag = try_find_sym(gio, "g_file_io_stream_get_etag");
    stub_funcs.ptr_g_file_monitor_get_type = try_find_sym(gio, "g_file_monitor_get_type");
    stub_funcs.ptr_g_file_monitor_cancel = try_find_sym(gio, "g_file_monitor_cancel");
    stub_funcs.ptr_g_file_monitor_is_cancelled = try_find_sym(gio, "g_file_monitor_is_cancelled");
    stub_funcs.ptr_g_file_monitor_set_rate_limit = try_find_sym(gio, "g_file_monitor_set_rate_limit");
    stub_funcs.ptr_g_file_monitor_emit_event = try_find_sym(gio, "g_file_monitor_emit_event");
    stub_funcs.ptr_g_filename_completer_get_type = try_find_sym(gio, "g_filename_completer_get_type");
    stub_funcs.ptr_g_filename_completer_new = try_find_sym(gio, "g_filename_completer_new");
    stub_funcs.ptr_g_filename_completer_get_completion_suffix = try_find_sym(gio, "g_filename_completer_get_completion_suffix");
    stub_funcs.ptr_g_filename_completer_get_completions = try_find_sym(gio, "g_filename_completer_get_completions");
    stub_funcs.ptr_g_filename_completer_set_dirs_only = try_find_sym(gio, "g_filename_completer_set_dirs_only");
    stub_funcs.ptr_g_file_output_stream_get_type = try_find_sym(gio, "g_file_output_stream_get_type");
    stub_funcs.ptr_g_file_output_stream_query_info = try_find_sym(gio, "g_file_output_stream_query_info");
    stub_funcs.ptr_g_file_output_stream_query_info_async = try_find_sym(gio, "g_file_output_stream_query_info_async");
    stub_funcs.ptr_g_file_output_stream_query_info_finish = try_find_sym(gio, "g_file_output_stream_query_info_finish");
    stub_funcs.ptr_g_file_output_stream_get_etag = try_find_sym(gio, "g_file_output_stream_get_etag");
    stub_funcs.ptr_g_inet_address_get_type = try_find_sym(gio, "g_inet_address_get_type");
    stub_funcs.ptr_g_inet_address_new_from_string = try_find_sym(gio, "g_inet_address_new_from_string");
    stub_funcs.ptr_g_inet_address_new_from_bytes = try_find_sym(gio, "g_inet_address_new_from_bytes");
    stub_funcs.ptr_g_inet_address_new_loopback = try_find_sym(gio, "g_inet_address_new_loopback");
    stub_funcs.ptr_g_inet_address_new_any = try_find_sym(gio, "g_inet_address_new_any");
    stub_funcs.ptr_g_inet_address_equal = try_find_sym(gio, "g_inet_address_equal");
    stub_funcs.ptr_g_inet_address_to_string = try_find_sym(gio, "g_inet_address_to_string");
    stub_funcs.ptr_g_inet_address_to_bytes = try_find_sym(gio, "g_inet_address_to_bytes");
    stub_funcs.ptr_g_inet_address_get_native_size = try_find_sym(gio, "g_inet_address_get_native_size");
    stub_funcs.ptr_g_inet_address_get_family = try_find_sym(gio, "g_inet_address_get_family");
    stub_funcs.ptr_g_inet_address_get_is_any = try_find_sym(gio, "g_inet_address_get_is_any");
    stub_funcs.ptr_g_inet_address_get_is_loopback = try_find_sym(gio, "g_inet_address_get_is_loopback");
    stub_funcs.ptr_g_inet_address_get_is_link_local = try_find_sym(gio, "g_inet_address_get_is_link_local");
    stub_funcs.ptr_g_inet_address_get_is_site_local = try_find_sym(gio, "g_inet_address_get_is_site_local");
    stub_funcs.ptr_g_inet_address_get_is_multicast = try_find_sym(gio, "g_inet_address_get_is_multicast");
    stub_funcs.ptr_g_inet_address_get_is_mc_global = try_find_sym(gio, "g_inet_address_get_is_mc_global");
    stub_funcs.ptr_g_inet_address_get_is_mc_link_local = try_find_sym(gio, "g_inet_address_get_is_mc_link_local");
    stub_funcs.ptr_g_inet_address_get_is_mc_node_local = try_find_sym(gio, "g_inet_address_get_is_mc_node_local");
    stub_funcs.ptr_g_inet_address_get_is_mc_org_local = try_find_sym(gio, "g_inet_address_get_is_mc_org_local");
    stub_funcs.ptr_g_inet_address_get_is_mc_site_local = try_find_sym(gio, "g_inet_address_get_is_mc_site_local");
    stub_funcs.ptr_g_inet_address_mask_get_type = try_find_sym(gio, "g_inet_address_mask_get_type");
    stub_funcs.ptr_g_inet_address_mask_new = try_find_sym(gio, "g_inet_address_mask_new");
    stub_funcs.ptr_g_inet_address_mask_new_from_string = try_find_sym(gio, "g_inet_address_mask_new_from_string");
    stub_funcs.ptr_g_inet_address_mask_to_string = try_find_sym(gio, "g_inet_address_mask_to_string");
    stub_funcs.ptr_g_inet_address_mask_get_family = try_find_sym(gio, "g_inet_address_mask_get_family");
    stub_funcs.ptr_g_inet_address_mask_get_address = try_find_sym(gio, "g_inet_address_mask_get_address");
    stub_funcs.ptr_g_inet_address_mask_get_length = try_find_sym(gio, "g_inet_address_mask_get_length");
    stub_funcs.ptr_g_inet_address_mask_matches = try_find_sym(gio, "g_inet_address_mask_matches");
    stub_funcs.ptr_g_inet_address_mask_equal = try_find_sym(gio, "g_inet_address_mask_equal");
    stub_funcs.ptr_g_socket_address_get_type = try_find_sym(gio, "g_socket_address_get_type");
    stub_funcs.ptr_g_socket_address_get_family = try_find_sym(gio, "g_socket_address_get_family");
    stub_funcs.ptr_g_socket_address_new_from_native = try_find_sym(gio, "g_socket_address_new_from_native");
    stub_funcs.ptr_g_socket_address_to_native = try_find_sym(gio, "g_socket_address_to_native");
    stub_funcs.ptr_g_socket_address_get_native_size = try_find_sym(gio, "g_socket_address_get_native_size");
    stub_funcs.ptr_g_inet_socket_address_get_type = try_find_sym(gio, "g_inet_socket_address_get_type");
    stub_funcs.ptr_g_inet_socket_address_new = try_find_sym(gio, "g_inet_socket_address_new");
    stub_funcs.ptr_g_inet_socket_address_new_from_string = try_find_sym(gio, "g_inet_socket_address_new_from_string");
    stub_funcs.ptr_g_inet_socket_address_get_address = try_find_sym(gio, "g_inet_socket_address_get_address");
    stub_funcs.ptr_g_inet_socket_address_get_port = try_find_sym(gio, "g_inet_socket_address_get_port");
    stub_funcs.ptr_g_inet_socket_address_get_flowinfo = try_find_sym(gio, "g_inet_socket_address_get_flowinfo");
    stub_funcs.ptr_g_inet_socket_address_get_scope_id = try_find_sym(gio, "g_inet_socket_address_get_scope_id");
    stub_funcs.ptr_g_app_info_create_flags_get_type = try_find_sym(gio, "g_app_info_create_flags_get_type");
    stub_funcs.ptr_g_converter_flags_get_type = try_find_sym(gio, "g_converter_flags_get_type");
    stub_funcs.ptr_g_converter_result_get_type = try_find_sym(gio, "g_converter_result_get_type");
    stub_funcs.ptr_g_data_stream_byte_order_get_type = try_find_sym(gio, "g_data_stream_byte_order_get_type");
    stub_funcs.ptr_g_data_stream_newline_type_get_type = try_find_sym(gio, "g_data_stream_newline_type_get_type");
    stub_funcs.ptr_g_file_attribute_type_get_type = try_find_sym(gio, "g_file_attribute_type_get_type");
    stub_funcs.ptr_g_file_attribute_info_flags_get_type = try_find_sym(gio, "g_file_attribute_info_flags_get_type");
    stub_funcs.ptr_g_file_attribute_status_get_type = try_find_sym(gio, "g_file_attribute_status_get_type");
    stub_funcs.ptr_g_file_query_info_flags_get_type = try_find_sym(gio, "g_file_query_info_flags_get_type");
    stub_funcs.ptr_g_file_create_flags_get_type = try_find_sym(gio, "g_file_create_flags_get_type");
    stub_funcs.ptr_g_file_measure_flags_get_type = try_find_sym(gio, "g_file_measure_flags_get_type");
    stub_funcs.ptr_g_mount_mount_flags_get_type = try_find_sym(gio, "g_mount_mount_flags_get_type");
    stub_funcs.ptr_g_mount_unmount_flags_get_type = try_find_sym(gio, "g_mount_unmount_flags_get_type");
    stub_funcs.ptr_g_drive_start_flags_get_type = try_find_sym(gio, "g_drive_start_flags_get_type");
    stub_funcs.ptr_g_drive_start_stop_type_get_type = try_find_sym(gio, "g_drive_start_stop_type_get_type");
    stub_funcs.ptr_g_file_copy_flags_get_type = try_find_sym(gio, "g_file_copy_flags_get_type");
    stub_funcs.ptr_g_file_monitor_flags_get_type = try_find_sym(gio, "g_file_monitor_flags_get_type");
    stub_funcs.ptr_g_file_type_get_type = try_find_sym(gio, "g_file_type_get_type");
    stub_funcs.ptr_g_filesystem_preview_type_get_type = try_find_sym(gio, "g_filesystem_preview_type_get_type");
    stub_funcs.ptr_g_file_monitor_event_get_type = try_find_sym(gio, "g_file_monitor_event_get_type");
    stub_funcs.ptr_g_io_error_enum_get_type = try_find_sym(gio, "g_io_error_enum_get_type");
    stub_funcs.ptr_g_ask_password_flags_get_type = try_find_sym(gio, "g_ask_password_flags_get_type");
    stub_funcs.ptr_g_password_save_get_type = try_find_sym(gio, "g_password_save_get_type");
    stub_funcs.ptr_g_mount_operation_result_get_type = try_find_sym(gio, "g_mount_operation_result_get_type");
    stub_funcs.ptr_g_output_stream_splice_flags_get_type = try_find_sym(gio, "g_output_stream_splice_flags_get_type");
    stub_funcs.ptr_g_io_stream_splice_flags_get_type = try_find_sym(gio, "g_io_stream_splice_flags_get_type");
    stub_funcs.ptr_g_emblem_origin_get_type = try_find_sym(gio, "g_emblem_origin_get_type");
    stub_funcs.ptr_g_resolver_error_get_type = try_find_sym(gio, "g_resolver_error_get_type");
    stub_funcs.ptr_g_resolver_record_type_get_type = try_find_sym(gio, "g_resolver_record_type_get_type");
    stub_funcs.ptr_g_resource_error_get_type = try_find_sym(gio, "g_resource_error_get_type");
    stub_funcs.ptr_g_resource_flags_get_type = try_find_sym(gio, "g_resource_flags_get_type");
    stub_funcs.ptr_g_resource_lookup_flags_get_type = try_find_sym(gio, "g_resource_lookup_flags_get_type");
    stub_funcs.ptr_g_socket_family_get_type = try_find_sym(gio, "g_socket_family_get_type");
    stub_funcs.ptr_g_socket_type_get_type = try_find_sym(gio, "g_socket_type_get_type");
    stub_funcs.ptr_g_socket_msg_flags_get_type = try_find_sym(gio, "g_socket_msg_flags_get_type");
    stub_funcs.ptr_g_socket_protocol_get_type = try_find_sym(gio, "g_socket_protocol_get_type");
    stub_funcs.ptr_g_zlib_compressor_format_get_type = try_find_sym(gio, "g_zlib_compressor_format_get_type");
    stub_funcs.ptr_g_unix_socket_address_type_get_type = try_find_sym(gio, "g_unix_socket_address_type_get_type");
    stub_funcs.ptr_g_bus_type_get_type = try_find_sym(gio, "g_bus_type_get_type");
    stub_funcs.ptr_g_bus_name_owner_flags_get_type = try_find_sym(gio, "g_bus_name_owner_flags_get_type");
    stub_funcs.ptr_g_bus_name_watcher_flags_get_type = try_find_sym(gio, "g_bus_name_watcher_flags_get_type");
    stub_funcs.ptr_g_dbus_proxy_flags_get_type = try_find_sym(gio, "g_dbus_proxy_flags_get_type");
    stub_funcs.ptr_g_dbus_error_get_type = try_find_sym(gio, "g_dbus_error_get_type");
    stub_funcs.ptr_g_dbus_connection_flags_get_type = try_find_sym(gio, "g_dbus_connection_flags_get_type");
    stub_funcs.ptr_g_dbus_capability_flags_get_type = try_find_sym(gio, "g_dbus_capability_flags_get_type");
    stub_funcs.ptr_g_dbus_call_flags_get_type = try_find_sym(gio, "g_dbus_call_flags_get_type");
    stub_funcs.ptr_g_dbus_message_type_get_type = try_find_sym(gio, "g_dbus_message_type_get_type");
    stub_funcs.ptr_g_dbus_message_flags_get_type = try_find_sym(gio, "g_dbus_message_flags_get_type");
    stub_funcs.ptr_g_dbus_message_header_field_get_type = try_find_sym(gio, "g_dbus_message_header_field_get_type");
    stub_funcs.ptr_g_dbus_property_info_flags_get_type = try_find_sym(gio, "g_dbus_property_info_flags_get_type");
    stub_funcs.ptr_g_dbus_subtree_flags_get_type = try_find_sym(gio, "g_dbus_subtree_flags_get_type");
    stub_funcs.ptr_g_dbus_server_flags_get_type = try_find_sym(gio, "g_dbus_server_flags_get_type");
    stub_funcs.ptr_g_dbus_signal_flags_get_type = try_find_sym(gio, "g_dbus_signal_flags_get_type");
    stub_funcs.ptr_g_dbus_send_message_flags_get_type = try_find_sym(gio, "g_dbus_send_message_flags_get_type");
    stub_funcs.ptr_g_credentials_type_get_type = try_find_sym(gio, "g_credentials_type_get_type");
    stub_funcs.ptr_g_dbus_message_byte_order_get_type = try_find_sym(gio, "g_dbus_message_byte_order_get_type");
    stub_funcs.ptr_g_application_flags_get_type = try_find_sym(gio, "g_application_flags_get_type");
    stub_funcs.ptr_g_tls_error_get_type = try_find_sym(gio, "g_tls_error_get_type");
    stub_funcs.ptr_g_tls_certificate_flags_get_type = try_find_sym(gio, "g_tls_certificate_flags_get_type");
    stub_funcs.ptr_g_tls_authentication_mode_get_type = try_find_sym(gio, "g_tls_authentication_mode_get_type");
    stub_funcs.ptr_g_tls_channel_binding_type_get_type = try_find_sym(gio, "g_tls_channel_binding_type_get_type");
    stub_funcs.ptr_g_tls_channel_binding_error_get_type = try_find_sym(gio, "g_tls_channel_binding_error_get_type");
    stub_funcs.ptr_g_tls_rehandshake_mode_get_type = try_find_sym(gio, "g_tls_rehandshake_mode_get_type");
    stub_funcs.ptr_g_tls_password_flags_get_type = try_find_sym(gio, "g_tls_password_flags_get_type");
    stub_funcs.ptr_g_tls_interaction_result_get_type = try_find_sym(gio, "g_tls_interaction_result_get_type");
    stub_funcs.ptr_g_dbus_interface_skeleton_flags_get_type = try_find_sym(gio, "g_dbus_interface_skeleton_flags_get_type");
    stub_funcs.ptr_g_dbus_object_manager_client_flags_get_type = try_find_sym(gio, "g_dbus_object_manager_client_flags_get_type");
    stub_funcs.ptr_g_tls_database_verify_flags_get_type = try_find_sym(gio, "g_tls_database_verify_flags_get_type");
    stub_funcs.ptr_g_tls_database_lookup_flags_get_type = try_find_sym(gio, "g_tls_database_lookup_flags_get_type");
    stub_funcs.ptr_g_tls_certificate_request_flags_get_type = try_find_sym(gio, "g_tls_certificate_request_flags_get_type");
    stub_funcs.ptr_g_tls_protocol_version_get_type = try_find_sym(gio, "g_tls_protocol_version_get_type");
    stub_funcs.ptr_g_io_module_scope_flags_get_type = try_find_sym(gio, "g_io_module_scope_flags_get_type");
    stub_funcs.ptr_g_socket_client_event_get_type = try_find_sym(gio, "g_socket_client_event_get_type");
    stub_funcs.ptr_g_socket_listener_event_get_type = try_find_sym(gio, "g_socket_listener_event_get_type");
    stub_funcs.ptr_g_test_dbus_flags_get_type = try_find_sym(gio, "g_test_dbus_flags_get_type");
    stub_funcs.ptr_g_subprocess_flags_get_type = try_find_sym(gio, "g_subprocess_flags_get_type");
    stub_funcs.ptr_g_notification_priority_get_type = try_find_sym(gio, "g_notification_priority_get_type");
    stub_funcs.ptr_g_network_connectivity_get_type = try_find_sym(gio, "g_network_connectivity_get_type");
    stub_funcs.ptr_g_pollable_return_get_type = try_find_sym(gio, "g_pollable_return_get_type");
    stub_funcs.ptr_g_memory_monitor_warning_level_get_type = try_find_sym(gio, "g_memory_monitor_warning_level_get_type");
    stub_funcs.ptr_g_resolver_name_lookup_flags_get_type = try_find_sym(gio, "g_resolver_name_lookup_flags_get_type");
    stub_funcs.ptr_g_settings_bind_flags_get_type = try_find_sym(gio, "g_settings_bind_flags_get_type");
    stub_funcs.ptr_g_io_module_scope_new = try_find_sym(gio, "g_io_module_scope_new");
    stub_funcs.ptr_g_io_module_scope_free = try_find_sym(gio, "g_io_module_scope_free");
    stub_funcs.ptr_g_io_module_scope_block = try_find_sym(gio, "g_io_module_scope_block");
    stub_funcs.ptr_g_io_module_get_type = try_find_sym(gio, "g_io_module_get_type");
    stub_funcs.ptr_g_io_module_new = try_find_sym(gio, "g_io_module_new");
    stub_funcs.ptr_g_io_modules_scan_all_in_directory = try_find_sym(gio, "g_io_modules_scan_all_in_directory");
    stub_funcs.ptr_g_io_modules_load_all_in_directory = try_find_sym(gio, "g_io_modules_load_all_in_directory");
    stub_funcs.ptr_g_io_modules_scan_all_in_directory_with_scope = try_find_sym(gio, "g_io_modules_scan_all_in_directory_with_scope");
    stub_funcs.ptr_g_io_modules_load_all_in_directory_with_scope = try_find_sym(gio, "g_io_modules_load_all_in_directory_with_scope");
    stub_funcs.ptr_g_io_extension_point_register = try_find_sym(gio, "g_io_extension_point_register");
    stub_funcs.ptr_g_io_extension_point_lookup = try_find_sym(gio, "g_io_extension_point_lookup");
    stub_funcs.ptr_g_io_extension_point_set_required_type = try_find_sym(gio, "g_io_extension_point_set_required_type");
    stub_funcs.ptr_g_io_extension_point_get_required_type = try_find_sym(gio, "g_io_extension_point_get_required_type");
    stub_funcs.ptr_g_io_extension_point_get_extensions = try_find_sym(gio, "g_io_extension_point_get_extensions");
    stub_funcs.ptr_g_io_extension_point_get_extension_by_name = try_find_sym(gio, "g_io_extension_point_get_extension_by_name");
    stub_funcs.ptr_g_io_extension_point_implement = try_find_sym(gio, "g_io_extension_point_implement");
    stub_funcs.ptr_g_io_extension_get_type = try_find_sym(gio, "g_io_extension_get_type");
    stub_funcs.ptr_g_io_extension_get_name = try_find_sym(gio, "g_io_extension_get_name");
    stub_funcs.ptr_g_io_extension_get_priority = try_find_sym(gio, "g_io_extension_get_priority");
    stub_funcs.ptr_g_io_extension_ref_class = try_find_sym(gio, "g_io_extension_ref_class");
    stub_funcs.ptr_g_io_module_load = try_find_sym(gio, "g_io_module_load");
    stub_funcs.ptr_g_io_module_unload = try_find_sym(gio, "g_io_module_unload");
    stub_funcs.ptr_g_io_module_query = try_find_sym(gio, "g_io_module_query");
    stub_funcs.ptr_g_io_scheduler_push_job = try_find_sym(gio, "g_io_scheduler_push_job");
    stub_funcs.ptr_g_io_scheduler_cancel_all_jobs = try_find_sym(gio, "g_io_scheduler_cancel_all_jobs");
    stub_funcs.ptr_g_io_scheduler_job_send_to_mainloop = try_find_sym(gio, "g_io_scheduler_job_send_to_mainloop");
    stub_funcs.ptr_g_io_scheduler_job_send_to_mainloop_async = try_find_sym(gio, "g_io_scheduler_job_send_to_mainloop_async");
    stub_funcs.ptr_g_list_model_get_type = try_find_sym(gio, "g_list_model_get_type");
    stub_funcs.ptr_g_list_model_get_item_type = try_find_sym(gio, "g_list_model_get_item_type");
    stub_funcs.ptr_g_list_model_get_n_items = try_find_sym(gio, "g_list_model_get_n_items");
    stub_funcs.ptr_g_list_model_get_item = try_find_sym(gio, "g_list_model_get_item");
    stub_funcs.ptr_g_list_model_get_object = try_find_sym(gio, "g_list_model_get_object");
    stub_funcs.ptr_g_list_model_items_changed = try_find_sym(gio, "g_list_model_items_changed");
    stub_funcs.ptr_g_list_store_get_type = try_find_sym(gio, "g_list_store_get_type");
    stub_funcs.ptr_g_list_store_new = try_find_sym(gio, "g_list_store_new");
    stub_funcs.ptr_g_list_store_insert = try_find_sym(gio, "g_list_store_insert");
    stub_funcs.ptr_g_list_store_insert_sorted = try_find_sym(gio, "g_list_store_insert_sorted");
    stub_funcs.ptr_g_list_store_sort = try_find_sym(gio, "g_list_store_sort");
    stub_funcs.ptr_g_list_store_append = try_find_sym(gio, "g_list_store_append");
    stub_funcs.ptr_g_list_store_remove = try_find_sym(gio, "g_list_store_remove");
    stub_funcs.ptr_g_list_store_remove_all = try_find_sym(gio, "g_list_store_remove_all");
    stub_funcs.ptr_g_list_store_splice = try_find_sym(gio, "g_list_store_splice");
    stub_funcs.ptr_g_list_store_find = try_find_sym(gio, "g_list_store_find");
    stub_funcs.ptr_g_list_store_find_with_equal_func = try_find_sym(gio, "g_list_store_find_with_equal_func");
    stub_funcs.ptr_g_list_store_find_with_equal_func_full = try_find_sym(gio, "g_list_store_find_with_equal_func_full");
    stub_funcs.ptr_g_loadable_icon_get_type = try_find_sym(gio, "g_loadable_icon_get_type");
    stub_funcs.ptr_g_loadable_icon_load = try_find_sym(gio, "g_loadable_icon_load");
    stub_funcs.ptr_g_loadable_icon_load_async = try_find_sym(gio, "g_loadable_icon_load_async");
    stub_funcs.ptr_g_loadable_icon_load_finish = try_find_sym(gio, "g_loadable_icon_load_finish");
    stub_funcs.ptr_g_memory_input_stream_get_type = try_find_sym(gio, "g_memory_input_stream_get_type");
    stub_funcs.ptr_g_memory_input_stream_new = try_find_sym(gio, "g_memory_input_stream_new");
    stub_funcs.ptr_g_memory_input_stream_new_from_data = try_find_sym(gio, "g_memory_input_stream_new_from_data");
    stub_funcs.ptr_g_memory_input_stream_new_from_bytes = try_find_sym(gio, "g_memory_input_stream_new_from_bytes");
    stub_funcs.ptr_g_memory_input_stream_add_data = try_find_sym(gio, "g_memory_input_stream_add_data");
    stub_funcs.ptr_g_memory_input_stream_add_bytes = try_find_sym(gio, "g_memory_input_stream_add_bytes");
    stub_funcs.ptr_g_memory_monitor_get_type = try_find_sym(gio, "g_memory_monitor_get_type");
    stub_funcs.ptr_g_memory_monitor_dup_default = try_find_sym(gio, "g_memory_monitor_dup_default");
    stub_funcs.ptr_g_memory_output_stream_get_type = try_find_sym(gio, "g_memory_output_stream_get_type");
    stub_funcs.ptr_g_memory_output_stream_new = try_find_sym(gio, "g_memory_output_stream_new");
    stub_funcs.ptr_g_memory_output_stream_new_resizable = try_find_sym(gio, "g_memory_output_stream_new_resizable");
    stub_funcs.ptr_g_memory_output_stream_get_data = try_find_sym(gio, "g_memory_output_stream_get_data");
    stub_funcs.ptr_g_memory_output_stream_get_size = try_find_sym(gio, "g_memory_output_stream_get_size");
    stub_funcs.ptr_g_memory_output_stream_get_data_size = try_find_sym(gio, "g_memory_output_stream_get_data_size");
    stub_funcs.ptr_g_memory_output_stream_steal_data = try_find_sym(gio, "g_memory_output_stream_steal_data");
    stub_funcs.ptr_g_memory_output_stream_steal_as_bytes = try_find_sym(gio, "g_memory_output_stream_steal_as_bytes");
    stub_funcs.ptr_g_menu_model_get_type = try_find_sym(gio, "g_menu_model_get_type");
    stub_funcs.ptr_g_menu_model_is_mutable = try_find_sym(gio, "g_menu_model_is_mutable");
    stub_funcs.ptr_g_menu_model_get_n_items = try_find_sym(gio, "g_menu_model_get_n_items");
    stub_funcs.ptr_g_menu_model_iterate_item_attributes = try_find_sym(gio, "g_menu_model_iterate_item_attributes");
    stub_funcs.ptr_g_menu_model_get_item_attribute_value = try_find_sym(gio, "g_menu_model_get_item_attribute_value");
    stub_funcs.ptr_g_menu_model_iterate_item_links = try_find_sym(gio, "g_menu_model_iterate_item_links");
    stub_funcs.ptr_g_menu_model_get_item_link = try_find_sym(gio, "g_menu_model_get_item_link");
    stub_funcs.ptr_g_menu_model_items_changed = try_find_sym(gio, "g_menu_model_items_changed");
    stub_funcs.ptr_g_menu_attribute_iter_get_type = try_find_sym(gio, "g_menu_attribute_iter_get_type");
    stub_funcs.ptr_g_menu_attribute_iter_get_next = try_find_sym(gio, "g_menu_attribute_iter_get_next");
    stub_funcs.ptr_g_menu_attribute_iter_next = try_find_sym(gio, "g_menu_attribute_iter_next");
    stub_funcs.ptr_g_menu_attribute_iter_get_name = try_find_sym(gio, "g_menu_attribute_iter_get_name");
    stub_funcs.ptr_g_menu_attribute_iter_get_value = try_find_sym(gio, "g_menu_attribute_iter_get_value");
    stub_funcs.ptr_g_menu_link_iter_get_type = try_find_sym(gio, "g_menu_link_iter_get_type");
    stub_funcs.ptr_g_menu_link_iter_get_next = try_find_sym(gio, "g_menu_link_iter_get_next");
    stub_funcs.ptr_g_menu_link_iter_next = try_find_sym(gio, "g_menu_link_iter_next");
    stub_funcs.ptr_g_menu_link_iter_get_name = try_find_sym(gio, "g_menu_link_iter_get_name");
    stub_funcs.ptr_g_menu_link_iter_get_value = try_find_sym(gio, "g_menu_link_iter_get_value");
    stub_funcs.ptr_g_menu_get_type = try_find_sym(gio, "g_menu_get_type");
    stub_funcs.ptr_g_menu_new = try_find_sym(gio, "g_menu_new");
    stub_funcs.ptr_g_menu_freeze = try_find_sym(gio, "g_menu_freeze");
    stub_funcs.ptr_g_menu_insert_item = try_find_sym(gio, "g_menu_insert_item");
    stub_funcs.ptr_g_menu_prepend_item = try_find_sym(gio, "g_menu_prepend_item");
    stub_funcs.ptr_g_menu_append_item = try_find_sym(gio, "g_menu_append_item");
    stub_funcs.ptr_g_menu_remove = try_find_sym(gio, "g_menu_remove");
    stub_funcs.ptr_g_menu_remove_all = try_find_sym(gio, "g_menu_remove_all");
    stub_funcs.ptr_g_menu_insert = try_find_sym(gio, "g_menu_insert");
    stub_funcs.ptr_g_menu_prepend = try_find_sym(gio, "g_menu_prepend");
    stub_funcs.ptr_g_menu_append = try_find_sym(gio, "g_menu_append");
    stub_funcs.ptr_g_menu_insert_section = try_find_sym(gio, "g_menu_insert_section");
    stub_funcs.ptr_g_menu_prepend_section = try_find_sym(gio, "g_menu_prepend_section");
    stub_funcs.ptr_g_menu_append_section = try_find_sym(gio, "g_menu_append_section");
    stub_funcs.ptr_g_menu_insert_submenu = try_find_sym(gio, "g_menu_insert_submenu");
    stub_funcs.ptr_g_menu_prepend_submenu = try_find_sym(gio, "g_menu_prepend_submenu");
    stub_funcs.ptr_g_menu_append_submenu = try_find_sym(gio, "g_menu_append_submenu");
    stub_funcs.ptr_g_menu_item_get_type = try_find_sym(gio, "g_menu_item_get_type");
    stub_funcs.ptr_g_menu_item_new = try_find_sym(gio, "g_menu_item_new");
    stub_funcs.ptr_g_menu_item_new_from_model = try_find_sym(gio, "g_menu_item_new_from_model");
    stub_funcs.ptr_g_menu_item_new_submenu = try_find_sym(gio, "g_menu_item_new_submenu");
    stub_funcs.ptr_g_menu_item_new_section = try_find_sym(gio, "g_menu_item_new_section");
    stub_funcs.ptr_g_menu_item_get_attribute_value = try_find_sym(gio, "g_menu_item_get_attribute_value");
    stub_funcs.ptr_g_menu_item_get_link = try_find_sym(gio, "g_menu_item_get_link");
    stub_funcs.ptr_g_menu_item_set_attribute_value = try_find_sym(gio, "g_menu_item_set_attribute_value");
    stub_funcs.ptr_g_menu_item_set_link = try_find_sym(gio, "g_menu_item_set_link");
    stub_funcs.ptr_g_menu_item_set_label = try_find_sym(gio, "g_menu_item_set_label");
    stub_funcs.ptr_g_menu_item_set_submenu = try_find_sym(gio, "g_menu_item_set_submenu");
    stub_funcs.ptr_g_menu_item_set_section = try_find_sym(gio, "g_menu_item_set_section");
    stub_funcs.ptr_g_menu_item_set_action_and_target_value = try_find_sym(gio, "g_menu_item_set_action_and_target_value");
    stub_funcs.ptr_g_menu_item_set_detailed_action = try_find_sym(gio, "g_menu_item_set_detailed_action");
    stub_funcs.ptr_g_menu_item_set_icon = try_find_sym(gio, "g_menu_item_set_icon");
    stub_funcs.ptr_g_dbus_connection_export_menu_model = try_find_sym(gio, "g_dbus_connection_export_menu_model");
    stub_funcs.ptr_g_dbus_connection_unexport_menu_model = try_find_sym(gio, "g_dbus_connection_unexport_menu_model");
    stub_funcs.ptr_g_mount_get_type = try_find_sym(gio, "g_mount_get_type");
    stub_funcs.ptr_g_mount_get_root = try_find_sym(gio, "g_mount_get_root");
    stub_funcs.ptr_g_mount_get_default_location = try_find_sym(gio, "g_mount_get_default_location");
    stub_funcs.ptr_g_mount_get_name = try_find_sym(gio, "g_mount_get_name");
    stub_funcs.ptr_g_mount_get_icon = try_find_sym(gio, "g_mount_get_icon");
    stub_funcs.ptr_g_mount_get_symbolic_icon = try_find_sym(gio, "g_mount_get_symbolic_icon");
    stub_funcs.ptr_g_mount_get_uuid = try_find_sym(gio, "g_mount_get_uuid");
    stub_funcs.ptr_g_mount_get_volume = try_find_sym(gio, "g_mount_get_volume");
    stub_funcs.ptr_g_mount_get_drive = try_find_sym(gio, "g_mount_get_drive");
    stub_funcs.ptr_g_mount_can_unmount = try_find_sym(gio, "g_mount_can_unmount");
    stub_funcs.ptr_g_mount_can_eject = try_find_sym(gio, "g_mount_can_eject");
    stub_funcs.ptr_g_mount_unmount = try_find_sym(gio, "g_mount_unmount");
    stub_funcs.ptr_g_mount_unmount_finish = try_find_sym(gio, "g_mount_unmount_finish");
    stub_funcs.ptr_g_mount_eject = try_find_sym(gio, "g_mount_eject");
    stub_funcs.ptr_g_mount_eject_finish = try_find_sym(gio, "g_mount_eject_finish");
    stub_funcs.ptr_g_mount_remount = try_find_sym(gio, "g_mount_remount");
    stub_funcs.ptr_g_mount_remount_finish = try_find_sym(gio, "g_mount_remount_finish");
    stub_funcs.ptr_g_mount_guess_content_type = try_find_sym(gio, "g_mount_guess_content_type");
    stub_funcs.ptr_g_mount_guess_content_type_finish = try_find_sym(gio, "g_mount_guess_content_type_finish");
    stub_funcs.ptr_g_mount_guess_content_type_sync = try_find_sym(gio, "g_mount_guess_content_type_sync");
    stub_funcs.ptr_g_mount_is_shadowed = try_find_sym(gio, "g_mount_is_shadowed");
    stub_funcs.ptr_g_mount_shadow = try_find_sym(gio, "g_mount_shadow");
    stub_funcs.ptr_g_mount_unshadow = try_find_sym(gio, "g_mount_unshadow");
    stub_funcs.ptr_g_mount_unmount_with_operation = try_find_sym(gio, "g_mount_unmount_with_operation");
    stub_funcs.ptr_g_mount_unmount_with_operation_finish = try_find_sym(gio, "g_mount_unmount_with_operation_finish");
    stub_funcs.ptr_g_mount_eject_with_operation = try_find_sym(gio, "g_mount_eject_with_operation");
    stub_funcs.ptr_g_mount_eject_with_operation_finish = try_find_sym(gio, "g_mount_eject_with_operation_finish");
    stub_funcs.ptr_g_mount_get_sort_key = try_find_sym(gio, "g_mount_get_sort_key");
    stub_funcs.ptr_g_mount_operation_get_type = try_find_sym(gio, "g_mount_operation_get_type");
    stub_funcs.ptr_g_mount_operation_new = try_find_sym(gio, "g_mount_operation_new");
    stub_funcs.ptr_g_mount_operation_get_username = try_find_sym(gio, "g_mount_operation_get_username");
    stub_funcs.ptr_g_mount_operation_set_username = try_find_sym(gio, "g_mount_operation_set_username");
    stub_funcs.ptr_g_mount_operation_get_password = try_find_sym(gio, "g_mount_operation_get_password");
    stub_funcs.ptr_g_mount_operation_set_password = try_find_sym(gio, "g_mount_operation_set_password");
    stub_funcs.ptr_g_mount_operation_get_anonymous = try_find_sym(gio, "g_mount_operation_get_anonymous");
    stub_funcs.ptr_g_mount_operation_set_anonymous = try_find_sym(gio, "g_mount_operation_set_anonymous");
    stub_funcs.ptr_g_mount_operation_get_domain = try_find_sym(gio, "g_mount_operation_get_domain");
    stub_funcs.ptr_g_mount_operation_set_domain = try_find_sym(gio, "g_mount_operation_set_domain");
    stub_funcs.ptr_g_mount_operation_get_password_save = try_find_sym(gio, "g_mount_operation_get_password_save");
    stub_funcs.ptr_g_mount_operation_set_password_save = try_find_sym(gio, "g_mount_operation_set_password_save");
    stub_funcs.ptr_g_mount_operation_get_choice = try_find_sym(gio, "g_mount_operation_get_choice");
    stub_funcs.ptr_g_mount_operation_set_choice = try_find_sym(gio, "g_mount_operation_set_choice");
    stub_funcs.ptr_g_mount_operation_reply = try_find_sym(gio, "g_mount_operation_reply");
    stub_funcs.ptr_g_mount_operation_get_is_tcrypt_hidden_volume = try_find_sym(gio, "g_mount_operation_get_is_tcrypt_hidden_volume");
    stub_funcs.ptr_g_mount_operation_set_is_tcrypt_hidden_volume = try_find_sym(gio, "g_mount_operation_set_is_tcrypt_hidden_volume");
    stub_funcs.ptr_g_mount_operation_get_is_tcrypt_system_volume = try_find_sym(gio, "g_mount_operation_get_is_tcrypt_system_volume");
    stub_funcs.ptr_g_mount_operation_set_is_tcrypt_system_volume = try_find_sym(gio, "g_mount_operation_set_is_tcrypt_system_volume");
    stub_funcs.ptr_g_mount_operation_get_pim = try_find_sym(gio, "g_mount_operation_get_pim");
    stub_funcs.ptr_g_mount_operation_set_pim = try_find_sym(gio, "g_mount_operation_set_pim");
    stub_funcs.ptr_g_native_socket_address_get_type = try_find_sym(gio, "g_native_socket_address_get_type");
    stub_funcs.ptr_g_native_socket_address_new = try_find_sym(gio, "g_native_socket_address_new");
    stub_funcs.ptr_g_volume_monitor_get_type = try_find_sym(gio, "g_volume_monitor_get_type");
    stub_funcs.ptr_g_volume_monitor_get = try_find_sym(gio, "g_volume_monitor_get");
    stub_funcs.ptr_g_volume_monitor_get_connected_drives = try_find_sym(gio, "g_volume_monitor_get_connected_drives");
    stub_funcs.ptr_g_volume_monitor_get_volumes = try_find_sym(gio, "g_volume_monitor_get_volumes");
    stub_funcs.ptr_g_volume_monitor_get_mounts = try_find_sym(gio, "g_volume_monitor_get_mounts");
    stub_funcs.ptr_g_volume_monitor_get_volume_for_uuid = try_find_sym(gio, "g_volume_monitor_get_volume_for_uuid");
    stub_funcs.ptr_g_volume_monitor_get_mount_for_uuid = try_find_sym(gio, "g_volume_monitor_get_mount_for_uuid");
    stub_funcs.ptr_g_volume_monitor_adopt_orphan_mount = try_find_sym(gio, "g_volume_monitor_adopt_orphan_mount");
    stub_funcs.ptr_g_native_volume_monitor_get_type = try_find_sym(gio, "g_native_volume_monitor_get_type");
    stub_funcs.ptr_g_network_address_get_type = try_find_sym(gio, "g_network_address_get_type");
    stub_funcs.ptr_g_network_address_new = try_find_sym(gio, "g_network_address_new");
    stub_funcs.ptr_g_network_address_new_loopback = try_find_sym(gio, "g_network_address_new_loopback");
    stub_funcs.ptr_g_network_address_parse = try_find_sym(gio, "g_network_address_parse");
    stub_funcs.ptr_g_network_address_parse_uri = try_find_sym(gio, "g_network_address_parse_uri");
    stub_funcs.ptr_g_network_address_get_hostname = try_find_sym(gio, "g_network_address_get_hostname");
    stub_funcs.ptr_g_network_address_get_port = try_find_sym(gio, "g_network_address_get_port");
    stub_funcs.ptr_g_network_address_get_scheme = try_find_sym(gio, "g_network_address_get_scheme");
    stub_funcs.ptr_g_network_monitor_get_type = try_find_sym(gio, "g_network_monitor_get_type");
    stub_funcs.ptr_g_network_monitor_get_default = try_find_sym(gio, "g_network_monitor_get_default");
    stub_funcs.ptr_g_network_monitor_get_network_available = try_find_sym(gio, "g_network_monitor_get_network_available");
    stub_funcs.ptr_g_network_monitor_get_network_metered = try_find_sym(gio, "g_network_monitor_get_network_metered");
    stub_funcs.ptr_g_network_monitor_get_connectivity = try_find_sym(gio, "g_network_monitor_get_connectivity");
    stub_funcs.ptr_g_network_monitor_can_reach = try_find_sym(gio, "g_network_monitor_can_reach");
    stub_funcs.ptr_g_network_monitor_can_reach_async = try_find_sym(gio, "g_network_monitor_can_reach_async");
    stub_funcs.ptr_g_network_monitor_can_reach_finish = try_find_sym(gio, "g_network_monitor_can_reach_finish");
    stub_funcs.ptr_g_network_service_get_type = try_find_sym(gio, "g_network_service_get_type");
    stub_funcs.ptr_g_network_service_new = try_find_sym(gio, "g_network_service_new");
    stub_funcs.ptr_g_network_service_get_service = try_find_sym(gio, "g_network_service_get_service");
    stub_funcs.ptr_g_network_service_get_protocol = try_find_sym(gio, "g_network_service_get_protocol");
    stub_funcs.ptr_g_network_service_get_domain = try_find_sym(gio, "g_network_service_get_domain");
    stub_funcs.ptr_g_network_service_get_scheme = try_find_sym(gio, "g_network_service_get_scheme");
    stub_funcs.ptr_g_network_service_set_scheme = try_find_sym(gio, "g_network_service_set_scheme");
    stub_funcs.ptr_g_notification_get_type = try_find_sym(gio, "g_notification_get_type");
    stub_funcs.ptr_g_notification_new = try_find_sym(gio, "g_notification_new");
    stub_funcs.ptr_g_notification_set_title = try_find_sym(gio, "g_notification_set_title");
    stub_funcs.ptr_g_notification_set_body = try_find_sym(gio, "g_notification_set_body");
    stub_funcs.ptr_g_notification_set_icon = try_find_sym(gio, "g_notification_set_icon");
    stub_funcs.ptr_g_notification_set_urgent = try_find_sym(gio, "g_notification_set_urgent");
    stub_funcs.ptr_g_notification_set_priority = try_find_sym(gio, "g_notification_set_priority");
    stub_funcs.ptr_g_notification_set_category = try_find_sym(gio, "g_notification_set_category");
    stub_funcs.ptr_g_notification_add_button = try_find_sym(gio, "g_notification_add_button");
    stub_funcs.ptr_g_notification_add_button_with_target_value = try_find_sym(gio, "g_notification_add_button_with_target_value");
    stub_funcs.ptr_g_notification_set_default_action = try_find_sym(gio, "g_notification_set_default_action");
    stub_funcs.ptr_g_notification_set_default_action_and_target_value = try_find_sym(gio, "g_notification_set_default_action_and_target_value");
    stub_funcs.ptr_g_permission_get_type = try_find_sym(gio, "g_permission_get_type");
    stub_funcs.ptr_g_permission_acquire = try_find_sym(gio, "g_permission_acquire");
    stub_funcs.ptr_g_permission_acquire_async = try_find_sym(gio, "g_permission_acquire_async");
    stub_funcs.ptr_g_permission_acquire_finish = try_find_sym(gio, "g_permission_acquire_finish");
    stub_funcs.ptr_g_permission_release = try_find_sym(gio, "g_permission_release");
    stub_funcs.ptr_g_permission_release_async = try_find_sym(gio, "g_permission_release_async");
    stub_funcs.ptr_g_permission_release_finish = try_find_sym(gio, "g_permission_release_finish");
    stub_funcs.ptr_g_permission_get_allowed = try_find_sym(gio, "g_permission_get_allowed");
    stub_funcs.ptr_g_permission_get_can_acquire = try_find_sym(gio, "g_permission_get_can_acquire");
    stub_funcs.ptr_g_permission_get_can_release = try_find_sym(gio, "g_permission_get_can_release");
    stub_funcs.ptr_g_permission_impl_update = try_find_sym(gio, "g_permission_impl_update");
    stub_funcs.ptr_g_pollable_input_stream_get_type = try_find_sym(gio, "g_pollable_input_stream_get_type");
    stub_funcs.ptr_g_pollable_input_stream_can_poll = try_find_sym(gio, "g_pollable_input_stream_can_poll");
    stub_funcs.ptr_g_pollable_input_stream_is_readable = try_find_sym(gio, "g_pollable_input_stream_is_readable");
    stub_funcs.ptr_g_pollable_input_stream_create_source = try_find_sym(gio, "g_pollable_input_stream_create_source");
    stub_funcs.ptr_g_pollable_input_stream_read_nonblocking = try_find_sym(gio, "g_pollable_input_stream_read_nonblocking");
    stub_funcs.ptr_g_pollable_output_stream_get_type = try_find_sym(gio, "g_pollable_output_stream_get_type");
    stub_funcs.ptr_g_pollable_output_stream_can_poll = try_find_sym(gio, "g_pollable_output_stream_can_poll");
    stub_funcs.ptr_g_pollable_output_stream_is_writable = try_find_sym(gio, "g_pollable_output_stream_is_writable");
    stub_funcs.ptr_g_pollable_output_stream_create_source = try_find_sym(gio, "g_pollable_output_stream_create_source");
    stub_funcs.ptr_g_pollable_output_stream_write_nonblocking = try_find_sym(gio, "g_pollable_output_stream_write_nonblocking");
    stub_funcs.ptr_g_pollable_output_stream_writev_nonblocking = try_find_sym(gio, "g_pollable_output_stream_writev_nonblocking");
    stub_funcs.ptr_g_pollable_source_new = try_find_sym(gio, "g_pollable_source_new");
    stub_funcs.ptr_g_pollable_source_new_full = try_find_sym(gio, "g_pollable_source_new_full");
    stub_funcs.ptr_g_pollable_stream_read = try_find_sym(gio, "g_pollable_stream_read");
    stub_funcs.ptr_g_pollable_stream_write = try_find_sym(gio, "g_pollable_stream_write");
    stub_funcs.ptr_g_pollable_stream_write_all = try_find_sym(gio, "g_pollable_stream_write_all");
    stub_funcs.ptr_g_power_profile_monitor_get_type = try_find_sym(gio, "g_power_profile_monitor_get_type");
    stub_funcs.ptr_g_power_profile_monitor_dup_default = try_find_sym(gio, "g_power_profile_monitor_dup_default");
    stub_funcs.ptr_g_power_profile_monitor_get_power_saver_enabled = try_find_sym(gio, "g_power_profile_monitor_get_power_saver_enabled");
    stub_funcs.ptr_g_property_action_get_type = try_find_sym(gio, "g_property_action_get_type");
    stub_funcs.ptr_g_property_action_new = try_find_sym(gio, "g_property_action_new");
    stub_funcs.ptr_g_proxy_get_type = try_find_sym(gio, "g_proxy_get_type");
    stub_funcs.ptr_g_proxy_get_default_for_protocol = try_find_sym(gio, "g_proxy_get_default_for_protocol");
    stub_funcs.ptr_g_proxy_connect = try_find_sym(gio, "g_proxy_connect");
    stub_funcs.ptr_g_proxy_connect_async = try_find_sym(gio, "g_proxy_connect_async");
    stub_funcs.ptr_g_proxy_connect_finish = try_find_sym(gio, "g_proxy_connect_finish");
    stub_funcs.ptr_g_proxy_supports_hostname = try_find_sym(gio, "g_proxy_supports_hostname");
    stub_funcs.ptr_g_proxy_address_get_type = try_find_sym(gio, "g_proxy_address_get_type");
    stub_funcs.ptr_g_proxy_address_new = try_find_sym(gio, "g_proxy_address_new");
    stub_funcs.ptr_g_proxy_address_get_protocol = try_find_sym(gio, "g_proxy_address_get_protocol");
    stub_funcs.ptr_g_proxy_address_get_destination_protocol = try_find_sym(gio, "g_proxy_address_get_destination_protocol");
    stub_funcs.ptr_g_proxy_address_get_destination_hostname = try_find_sym(gio, "g_proxy_address_get_destination_hostname");
    stub_funcs.ptr_g_proxy_address_get_destination_port = try_find_sym(gio, "g_proxy_address_get_destination_port");
    stub_funcs.ptr_g_proxy_address_get_username = try_find_sym(gio, "g_proxy_address_get_username");
    stub_funcs.ptr_g_proxy_address_get_password = try_find_sym(gio, "g_proxy_address_get_password");
    stub_funcs.ptr_g_proxy_address_get_uri = try_find_sym(gio, "g_proxy_address_get_uri");
    stub_funcs.ptr_g_socket_address_enumerator_get_type = try_find_sym(gio, "g_socket_address_enumerator_get_type");
    stub_funcs.ptr_g_socket_address_enumerator_next = try_find_sym(gio, "g_socket_address_enumerator_next");
    stub_funcs.ptr_g_socket_address_enumerator_next_async = try_find_sym(gio, "g_socket_address_enumerator_next_async");
    stub_funcs.ptr_g_socket_address_enumerator_next_finish = try_find_sym(gio, "g_socket_address_enumerator_next_finish");
    stub_funcs.ptr_g_proxy_address_enumerator_get_type = try_find_sym(gio, "g_proxy_address_enumerator_get_type");
    stub_funcs.ptr_g_proxy_resolver_get_type = try_find_sym(gio, "g_proxy_resolver_get_type");
    stub_funcs.ptr_g_proxy_resolver_get_default = try_find_sym(gio, "g_proxy_resolver_get_default");
    stub_funcs.ptr_g_proxy_resolver_is_supported = try_find_sym(gio, "g_proxy_resolver_is_supported");
    stub_funcs.ptr_g_proxy_resolver_lookup = try_find_sym(gio, "g_proxy_resolver_lookup");
    stub_funcs.ptr_g_proxy_resolver_lookup_async = try_find_sym(gio, "g_proxy_resolver_lookup_async");
    stub_funcs.ptr_g_proxy_resolver_lookup_finish = try_find_sym(gio, "g_proxy_resolver_lookup_finish");
    stub_funcs.ptr_g_remote_action_group_get_type = try_find_sym(gio, "g_remote_action_group_get_type");
    stub_funcs.ptr_g_remote_action_group_activate_action_full = try_find_sym(gio, "g_remote_action_group_activate_action_full");
    stub_funcs.ptr_g_remote_action_group_change_action_state_full = try_find_sym(gio, "g_remote_action_group_change_action_state_full");
    stub_funcs.ptr_g_resolver_get_type = try_find_sym(gio, "g_resolver_get_type");
    stub_funcs.ptr_g_resolver_get_default = try_find_sym(gio, "g_resolver_get_default");
    stub_funcs.ptr_g_resolver_set_default = try_find_sym(gio, "g_resolver_set_default");
    stub_funcs.ptr_g_resolver_lookup_by_name = try_find_sym(gio, "g_resolver_lookup_by_name");
    stub_funcs.ptr_g_resolver_lookup_by_name_async = try_find_sym(gio, "g_resolver_lookup_by_name_async");
    stub_funcs.ptr_g_resolver_lookup_by_name_finish = try_find_sym(gio, "g_resolver_lookup_by_name_finish");
    stub_funcs.ptr_g_resolver_lookup_by_name_with_flags_async = try_find_sym(gio, "g_resolver_lookup_by_name_with_flags_async");
    stub_funcs.ptr_g_resolver_lookup_by_name_with_flags_finish = try_find_sym(gio, "g_resolver_lookup_by_name_with_flags_finish");
    stub_funcs.ptr_g_resolver_lookup_by_name_with_flags = try_find_sym(gio, "g_resolver_lookup_by_name_with_flags");
    stub_funcs.ptr_g_resolver_free_addresses = try_find_sym(gio, "g_resolver_free_addresses");
    stub_funcs.ptr_g_resolver_lookup_by_address = try_find_sym(gio, "g_resolver_lookup_by_address");
    stub_funcs.ptr_g_resolver_lookup_by_address_async = try_find_sym(gio, "g_resolver_lookup_by_address_async");
    stub_funcs.ptr_g_resolver_lookup_by_address_finish = try_find_sym(gio, "g_resolver_lookup_by_address_finish");
    stub_funcs.ptr_g_resolver_lookup_service = try_find_sym(gio, "g_resolver_lookup_service");
    stub_funcs.ptr_g_resolver_lookup_service_async = try_find_sym(gio, "g_resolver_lookup_service_async");
    stub_funcs.ptr_g_resolver_lookup_service_finish = try_find_sym(gio, "g_resolver_lookup_service_finish");
    stub_funcs.ptr_g_resolver_lookup_records = try_find_sym(gio, "g_resolver_lookup_records");
    stub_funcs.ptr_g_resolver_lookup_records_async = try_find_sym(gio, "g_resolver_lookup_records_async");
    stub_funcs.ptr_g_resolver_lookup_records_finish = try_find_sym(gio, "g_resolver_lookup_records_finish");
    stub_funcs.ptr_g_resolver_free_targets = try_find_sym(gio, "g_resolver_free_targets");
    stub_funcs.ptr_g_resolver_get_timeout = try_find_sym(gio, "g_resolver_get_timeout");
    stub_funcs.ptr_g_resolver_set_timeout = try_find_sym(gio, "g_resolver_set_timeout");
    stub_funcs.ptr_g_resolver_error_quark = try_find_sym(gio, "g_resolver_error_quark");
    stub_funcs.ptr_g_resource_error_quark = try_find_sym(gio, "g_resource_error_quark");
    stub_funcs.ptr_g_resource_get_type = try_find_sym(gio, "g_resource_get_type");
    stub_funcs.ptr_g_resource_new_from_data = try_find_sym(gio, "g_resource_new_from_data");
    stub_funcs.ptr_g_resource_ref = try_find_sym(gio, "g_resource_ref");
    stub_funcs.ptr_g_resource_unref = try_find_sym(gio, "g_resource_unref");
    stub_funcs.ptr_g_resource_load = try_find_sym(gio, "g_resource_load");
    stub_funcs.ptr_g_resource_open_stream = try_find_sym(gio, "g_resource_open_stream");
    stub_funcs.ptr_g_resource_lookup_data = try_find_sym(gio, "g_resource_lookup_data");
    stub_funcs.ptr_g_resource_enumerate_children = try_find_sym(gio, "g_resource_enumerate_children");
    stub_funcs.ptr_g_resource_get_info = try_find_sym(gio, "g_resource_get_info");
    stub_funcs.ptr_g_resources_register = try_find_sym(gio, "g_resources_register");
    stub_funcs.ptr_g_resources_unregister = try_find_sym(gio, "g_resources_unregister");
    stub_funcs.ptr_g_resources_open_stream = try_find_sym(gio, "g_resources_open_stream");
    stub_funcs.ptr_g_resources_lookup_data = try_find_sym(gio, "g_resources_lookup_data");
    stub_funcs.ptr_g_resources_enumerate_children = try_find_sym(gio, "g_resources_enumerate_children");
    stub_funcs.ptr_g_resources_get_info = try_find_sym(gio, "g_resources_get_info");
    stub_funcs.ptr_g_static_resource_init = try_find_sym(gio, "g_static_resource_init");
    stub_funcs.ptr_g_static_resource_fini = try_find_sym(gio, "g_static_resource_fini");
    stub_funcs.ptr_g_static_resource_get_resource = try_find_sym(gio, "g_static_resource_get_resource");
    stub_funcs.ptr_g_seekable_get_type = try_find_sym(gio, "g_seekable_get_type");
    stub_funcs.ptr_g_seekable_tell = try_find_sym(gio, "g_seekable_tell");
    stub_funcs.ptr_g_seekable_can_seek = try_find_sym(gio, "g_seekable_can_seek");
    stub_funcs.ptr_g_seekable_seek = try_find_sym(gio, "g_seekable_seek");
    stub_funcs.ptr_g_seekable_can_truncate = try_find_sym(gio, "g_seekable_can_truncate");
    stub_funcs.ptr_g_seekable_truncate = try_find_sym(gio, "g_seekable_truncate");
    stub_funcs.ptr_g_settings_schema_source_get_type = try_find_sym(gio, "g_settings_schema_source_get_type");
    stub_funcs.ptr_g_settings_schema_source_get_default = try_find_sym(gio, "g_settings_schema_source_get_default");
    stub_funcs.ptr_g_settings_schema_source_ref = try_find_sym(gio, "g_settings_schema_source_ref");
    stub_funcs.ptr_g_settings_schema_source_unref = try_find_sym(gio, "g_settings_schema_source_unref");
    stub_funcs.ptr_g_settings_schema_source_new_from_directory = try_find_sym(gio, "g_settings_schema_source_new_from_directory");
    stub_funcs.ptr_g_settings_schema_source_lookup = try_find_sym(gio, "g_settings_schema_source_lookup");
    stub_funcs.ptr_g_settings_schema_source_list_schemas = try_find_sym(gio, "g_settings_schema_source_list_schemas");
    stub_funcs.ptr_g_settings_schema_get_type = try_find_sym(gio, "g_settings_schema_get_type");
    stub_funcs.ptr_g_settings_schema_ref = try_find_sym(gio, "g_settings_schema_ref");
    stub_funcs.ptr_g_settings_schema_unref = try_find_sym(gio, "g_settings_schema_unref");
    stub_funcs.ptr_g_settings_schema_get_id = try_find_sym(gio, "g_settings_schema_get_id");
    stub_funcs.ptr_g_settings_schema_get_path = try_find_sym(gio, "g_settings_schema_get_path");
    stub_funcs.ptr_g_settings_schema_get_key = try_find_sym(gio, "g_settings_schema_get_key");
    stub_funcs.ptr_g_settings_schema_has_key = try_find_sym(gio, "g_settings_schema_has_key");
    stub_funcs.ptr_g_settings_schema_list_keys = try_find_sym(gio, "g_settings_schema_list_keys");
    stub_funcs.ptr_g_settings_schema_list_children = try_find_sym(gio, "g_settings_schema_list_children");
    stub_funcs.ptr_g_settings_schema_key_get_type = try_find_sym(gio, "g_settings_schema_key_get_type");
    stub_funcs.ptr_g_settings_schema_key_ref = try_find_sym(gio, "g_settings_schema_key_ref");
    stub_funcs.ptr_g_settings_schema_key_unref = try_find_sym(gio, "g_settings_schema_key_unref");
    stub_funcs.ptr_g_settings_schema_key_get_value_type = try_find_sym(gio, "g_settings_schema_key_get_value_type");
    stub_funcs.ptr_g_settings_schema_key_get_default_value = try_find_sym(gio, "g_settings_schema_key_get_default_value");
    stub_funcs.ptr_g_settings_schema_key_get_range = try_find_sym(gio, "g_settings_schema_key_get_range");
    stub_funcs.ptr_g_settings_schema_key_range_check = try_find_sym(gio, "g_settings_schema_key_range_check");
    stub_funcs.ptr_g_settings_schema_key_get_name = try_find_sym(gio, "g_settings_schema_key_get_name");
    stub_funcs.ptr_g_settings_schema_key_get_summary = try_find_sym(gio, "g_settings_schema_key_get_summary");
    stub_funcs.ptr_g_settings_schema_key_get_description = try_find_sym(gio, "g_settings_schema_key_get_description");
    stub_funcs.ptr_g_settings_get_type = try_find_sym(gio, "g_settings_get_type");
    stub_funcs.ptr_g_settings_list_schemas = try_find_sym(gio, "g_settings_list_schemas");
    stub_funcs.ptr_g_settings_list_relocatable_schemas = try_find_sym(gio, "g_settings_list_relocatable_schemas");
    stub_funcs.ptr_g_settings_new = try_find_sym(gio, "g_settings_new");
    stub_funcs.ptr_g_settings_new_with_path = try_find_sym(gio, "g_settings_new_with_path");
    stub_funcs.ptr_g_settings_new_with_backend = try_find_sym(gio, "g_settings_new_with_backend");
    stub_funcs.ptr_g_settings_new_with_backend_and_path = try_find_sym(gio, "g_settings_new_with_backend_and_path");
    stub_funcs.ptr_g_settings_new_full = try_find_sym(gio, "g_settings_new_full");
    stub_funcs.ptr_g_settings_list_children = try_find_sym(gio, "g_settings_list_children");
    stub_funcs.ptr_g_settings_list_keys = try_find_sym(gio, "g_settings_list_keys");
    stub_funcs.ptr_g_settings_get_range = try_find_sym(gio, "g_settings_get_range");
    stub_funcs.ptr_g_settings_range_check = try_find_sym(gio, "g_settings_range_check");
    stub_funcs.ptr_g_settings_set_value = try_find_sym(gio, "g_settings_set_value");
    stub_funcs.ptr_g_settings_get_value = try_find_sym(gio, "g_settings_get_value");
    stub_funcs.ptr_g_settings_get_user_value = try_find_sym(gio, "g_settings_get_user_value");
    stub_funcs.ptr_g_settings_get_default_value = try_find_sym(gio, "g_settings_get_default_value");
    stub_funcs.ptr_g_settings_reset = try_find_sym(gio, "g_settings_reset");
    stub_funcs.ptr_g_settings_get_int = try_find_sym(gio, "g_settings_get_int");
    stub_funcs.ptr_g_settings_set_int = try_find_sym(gio, "g_settings_set_int");
    stub_funcs.ptr_g_settings_get_int64 = try_find_sym(gio, "g_settings_get_int64");
    stub_funcs.ptr_g_settings_set_int64 = try_find_sym(gio, "g_settings_set_int64");
    stub_funcs.ptr_g_settings_get_uint = try_find_sym(gio, "g_settings_get_uint");
    stub_funcs.ptr_g_settings_set_uint = try_find_sym(gio, "g_settings_set_uint");
    stub_funcs.ptr_g_settings_get_uint64 = try_find_sym(gio, "g_settings_get_uint64");
    stub_funcs.ptr_g_settings_set_uint64 = try_find_sym(gio, "g_settings_set_uint64");
    stub_funcs.ptr_g_settings_get_string = try_find_sym(gio, "g_settings_get_string");
    stub_funcs.ptr_g_settings_set_string = try_find_sym(gio, "g_settings_set_string");
    stub_funcs.ptr_g_settings_get_boolean = try_find_sym(gio, "g_settings_get_boolean");
    stub_funcs.ptr_g_settings_set_boolean = try_find_sym(gio, "g_settings_set_boolean");
    stub_funcs.ptr_g_settings_get_double = try_find_sym(gio, "g_settings_get_double");
    stub_funcs.ptr_g_settings_set_double = try_find_sym(gio, "g_settings_set_double");
    stub_funcs.ptr_g_settings_get_strv = try_find_sym(gio, "g_settings_get_strv");
    stub_funcs.ptr_g_settings_set_strv = try_find_sym(gio, "g_settings_set_strv");
    stub_funcs.ptr_g_settings_get_enum = try_find_sym(gio, "g_settings_get_enum");
    stub_funcs.ptr_g_settings_set_enum = try_find_sym(gio, "g_settings_set_enum");
    stub_funcs.ptr_g_settings_get_flags = try_find_sym(gio, "g_settings_get_flags");
    stub_funcs.ptr_g_settings_set_flags = try_find_sym(gio, "g_settings_set_flags");
    stub_funcs.ptr_g_settings_get_child = try_find_sym(gio, "g_settings_get_child");
    stub_funcs.ptr_g_settings_is_writable = try_find_sym(gio, "g_settings_is_writable");
    stub_funcs.ptr_g_settings_delay = try_find_sym(gio, "g_settings_delay");
    stub_funcs.ptr_g_settings_apply = try_find_sym(gio, "g_settings_apply");
    stub_funcs.ptr_g_settings_revert = try_find_sym(gio, "g_settings_revert");
    stub_funcs.ptr_g_settings_get_has_unapplied = try_find_sym(gio, "g_settings_get_has_unapplied");
    stub_funcs.ptr_g_settings_sync = try_find_sym(gio, "g_settings_sync");
    stub_funcs.ptr_g_settings_bind = try_find_sym(gio, "g_settings_bind");
    stub_funcs.ptr_g_settings_bind_with_mapping = try_find_sym(gio, "g_settings_bind_with_mapping");
    stub_funcs.ptr_g_settings_bind_with_mapping_closures = try_find_sym(gio, "g_settings_bind_with_mapping_closures");
    stub_funcs.ptr_g_settings_bind_writable = try_find_sym(gio, "g_settings_bind_writable");
    stub_funcs.ptr_g_settings_unbind = try_find_sym(gio, "g_settings_unbind");
    stub_funcs.ptr_g_settings_create_action = try_find_sym(gio, "g_settings_create_action");
    stub_funcs.ptr_g_settings_get_mapped = try_find_sym(gio, "g_settings_get_mapped");
    stub_funcs.ptr_g_simple_action_get_type = try_find_sym(gio, "g_simple_action_get_type");
    stub_funcs.ptr_g_simple_action_new = try_find_sym(gio, "g_simple_action_new");
    stub_funcs.ptr_g_simple_action_new_stateful = try_find_sym(gio, "g_simple_action_new_stateful");
    stub_funcs.ptr_g_simple_action_set_enabled = try_find_sym(gio, "g_simple_action_set_enabled");
    stub_funcs.ptr_g_simple_action_set_state = try_find_sym(gio, "g_simple_action_set_state");
    stub_funcs.ptr_g_simple_action_set_state_hint = try_find_sym(gio, "g_simple_action_set_state_hint");
    stub_funcs.ptr_g_simple_action_group_get_type = try_find_sym(gio, "g_simple_action_group_get_type");
    stub_funcs.ptr_g_simple_action_group_new = try_find_sym(gio, "g_simple_action_group_new");
    stub_funcs.ptr_g_simple_action_group_lookup = try_find_sym(gio, "g_simple_action_group_lookup");
    stub_funcs.ptr_g_simple_action_group_insert = try_find_sym(gio, "g_simple_action_group_insert");
    stub_funcs.ptr_g_simple_action_group_remove = try_find_sym(gio, "g_simple_action_group_remove");
    stub_funcs.ptr_g_simple_action_group_add_entries = try_find_sym(gio, "g_simple_action_group_add_entries");
    stub_funcs.ptr_g_simple_async_result_get_type = try_find_sym(gio, "g_simple_async_result_get_type");
    stub_funcs.ptr_g_simple_async_result_new = try_find_sym(gio, "g_simple_async_result_new");
    stub_funcs.ptr_g_simple_async_result_new_from_error = try_find_sym(gio, "g_simple_async_result_new_from_error");
    stub_funcs.ptr_g_simple_async_result_new_take_error = try_find_sym(gio, "g_simple_async_result_new_take_error");
    stub_funcs.ptr_g_simple_async_result_set_op_res_gpointer = try_find_sym(gio, "g_simple_async_result_set_op_res_gpointer");
    stub_funcs.ptr_g_simple_async_result_get_op_res_gpointer = try_find_sym(gio, "g_simple_async_result_get_op_res_gpointer");
    stub_funcs.ptr_g_simple_async_result_set_op_res_gssize = try_find_sym(gio, "g_simple_async_result_set_op_res_gssize");
    stub_funcs.ptr_g_simple_async_result_get_op_res_gssize = try_find_sym(gio, "g_simple_async_result_get_op_res_gssize");
    stub_funcs.ptr_g_simple_async_result_set_op_res_gboolean = try_find_sym(gio, "g_simple_async_result_set_op_res_gboolean");
    stub_funcs.ptr_g_simple_async_result_get_op_res_gboolean = try_find_sym(gio, "g_simple_async_result_get_op_res_gboolean");
    stub_funcs.ptr_g_simple_async_result_set_check_cancellable = try_find_sym(gio, "g_simple_async_result_set_check_cancellable");
    stub_funcs.ptr_g_simple_async_result_get_source_tag = try_find_sym(gio, "g_simple_async_result_get_source_tag");
    stub_funcs.ptr_g_simple_async_result_set_handle_cancellation = try_find_sym(gio, "g_simple_async_result_set_handle_cancellation");
    stub_funcs.ptr_g_simple_async_result_complete = try_find_sym(gio, "g_simple_async_result_complete");
    stub_funcs.ptr_g_simple_async_result_complete_in_idle = try_find_sym(gio, "g_simple_async_result_complete_in_idle");
    stub_funcs.ptr_g_simple_async_result_run_in_thread = try_find_sym(gio, "g_simple_async_result_run_in_thread");
    stub_funcs.ptr_g_simple_async_result_set_from_error = try_find_sym(gio, "g_simple_async_result_set_from_error");
    stub_funcs.ptr_g_simple_async_result_take_error = try_find_sym(gio, "g_simple_async_result_take_error");
    stub_funcs.ptr_g_simple_async_result_propagate_error = try_find_sym(gio, "g_simple_async_result_propagate_error");
    stub_funcs.ptr_g_simple_async_result_set_error = try_find_sym(gio, "g_simple_async_result_set_error");
    stub_funcs.ptr_g_simple_async_result_set_error_va = try_find_sym(gio, "g_simple_async_result_set_error_va");
    stub_funcs.ptr_g_simple_async_result_is_valid = try_find_sym(gio, "g_simple_async_result_is_valid");
    stub_funcs.ptr_g_simple_async_report_gerror_in_idle = try_find_sym(gio, "g_simple_async_report_gerror_in_idle");
    stub_funcs.ptr_g_simple_async_report_take_gerror_in_idle = try_find_sym(gio, "g_simple_async_report_take_gerror_in_idle");
    stub_funcs.ptr_g_simple_io_stream_get_type = try_find_sym(gio, "g_simple_io_stream_get_type");
    stub_funcs.ptr_g_simple_io_stream_new = try_find_sym(gio, "g_simple_io_stream_new");
    stub_funcs.ptr_g_simple_permission_get_type = try_find_sym(gio, "g_simple_permission_get_type");
    stub_funcs.ptr_g_simple_permission_new = try_find_sym(gio, "g_simple_permission_new");
    stub_funcs.ptr_g_simple_proxy_resolver_get_type = try_find_sym(gio, "g_simple_proxy_resolver_get_type");
    stub_funcs.ptr_g_simple_proxy_resolver_new = try_find_sym(gio, "g_simple_proxy_resolver_new");
    stub_funcs.ptr_g_simple_proxy_resolver_set_default_proxy = try_find_sym(gio, "g_simple_proxy_resolver_set_default_proxy");
    stub_funcs.ptr_g_simple_proxy_resolver_set_ignore_hosts = try_find_sym(gio, "g_simple_proxy_resolver_set_ignore_hosts");
    stub_funcs.ptr_g_simple_proxy_resolver_set_uri_proxy = try_find_sym(gio, "g_simple_proxy_resolver_set_uri_proxy");
    stub_funcs.ptr_g_socket_get_type = try_find_sym(gio, "g_socket_get_type");
    stub_funcs.ptr_g_socket_new = try_find_sym(gio, "g_socket_new");
    stub_funcs.ptr_g_socket_new_from_fd = try_find_sym(gio, "g_socket_new_from_fd");
    stub_funcs.ptr_g_socket_get_fd = try_find_sym(gio, "g_socket_get_fd");
    stub_funcs.ptr_g_socket_get_family = try_find_sym(gio, "g_socket_get_family");
    stub_funcs.ptr_g_socket_get_socket_type = try_find_sym(gio, "g_socket_get_socket_type");
    stub_funcs.ptr_g_socket_get_protocol = try_find_sym(gio, "g_socket_get_protocol");
    stub_funcs.ptr_g_socket_get_local_address = try_find_sym(gio, "g_socket_get_local_address");
    stub_funcs.ptr_g_socket_get_remote_address = try_find_sym(gio, "g_socket_get_remote_address");
    stub_funcs.ptr_g_socket_set_blocking = try_find_sym(gio, "g_socket_set_blocking");
    stub_funcs.ptr_g_socket_get_blocking = try_find_sym(gio, "g_socket_get_blocking");
    stub_funcs.ptr_g_socket_set_keepalive = try_find_sym(gio, "g_socket_set_keepalive");
    stub_funcs.ptr_g_socket_get_keepalive = try_find_sym(gio, "g_socket_get_keepalive");
    stub_funcs.ptr_g_socket_get_listen_backlog = try_find_sym(gio, "g_socket_get_listen_backlog");
    stub_funcs.ptr_g_socket_set_listen_backlog = try_find_sym(gio, "g_socket_set_listen_backlog");
    stub_funcs.ptr_g_socket_get_timeout = try_find_sym(gio, "g_socket_get_timeout");
    stub_funcs.ptr_g_socket_set_timeout = try_find_sym(gio, "g_socket_set_timeout");
    stub_funcs.ptr_g_socket_get_ttl = try_find_sym(gio, "g_socket_get_ttl");
    stub_funcs.ptr_g_socket_set_ttl = try_find_sym(gio, "g_socket_set_ttl");
    stub_funcs.ptr_g_socket_get_broadcast = try_find_sym(gio, "g_socket_get_broadcast");
    stub_funcs.ptr_g_socket_set_broadcast = try_find_sym(gio, "g_socket_set_broadcast");
    stub_funcs.ptr_g_socket_get_multicast_loopback = try_find_sym(gio, "g_socket_get_multicast_loopback");
    stub_funcs.ptr_g_socket_set_multicast_loopback = try_find_sym(gio, "g_socket_set_multicast_loopback");
    stub_funcs.ptr_g_socket_get_multicast_ttl = try_find_sym(gio, "g_socket_get_multicast_ttl");
    stub_funcs.ptr_g_socket_set_multicast_ttl = try_find_sym(gio, "g_socket_set_multicast_ttl");
    stub_funcs.ptr_g_socket_is_connected = try_find_sym(gio, "g_socket_is_connected");
    stub_funcs.ptr_g_socket_bind = try_find_sym(gio, "g_socket_bind");
    stub_funcs.ptr_g_socket_join_multicast_group = try_find_sym(gio, "g_socket_join_multicast_group");
    stub_funcs.ptr_g_socket_leave_multicast_group = try_find_sym(gio, "g_socket_leave_multicast_group");
    stub_funcs.ptr_g_socket_join_multicast_group_ssm = try_find_sym(gio, "g_socket_join_multicast_group_ssm");
    stub_funcs.ptr_g_socket_leave_multicast_group_ssm = try_find_sym(gio, "g_socket_leave_multicast_group_ssm");
    stub_funcs.ptr_g_socket_connect = try_find_sym(gio, "g_socket_connect");
    stub_funcs.ptr_g_socket_check_connect_result = try_find_sym(gio, "g_socket_check_connect_result");
    stub_funcs.ptr_g_socket_get_available_bytes = try_find_sym(gio, "g_socket_get_available_bytes");
    stub_funcs.ptr_g_socket_condition_check = try_find_sym(gio, "g_socket_condition_check");
    stub_funcs.ptr_g_socket_condition_wait = try_find_sym(gio, "g_socket_condition_wait");
    stub_funcs.ptr_g_socket_condition_timed_wait = try_find_sym(gio, "g_socket_condition_timed_wait");
    stub_funcs.ptr_g_socket_accept = try_find_sym(gio, "g_socket_accept");
    stub_funcs.ptr_g_socket_listen = try_find_sym(gio, "g_socket_listen");
    stub_funcs.ptr_g_socket_receive = try_find_sym(gio, "g_socket_receive");
    stub_funcs.ptr_g_socket_receive_bytes = try_find_sym(gio, "g_socket_receive_bytes");
    stub_funcs.ptr_g_socket_receive_from = try_find_sym(gio, "g_socket_receive_from");
    stub_funcs.ptr_g_socket_receive_bytes_from = try_find_sym(gio, "g_socket_receive_bytes_from");
    stub_funcs.ptr_g_socket_send = try_find_sym(gio, "g_socket_send");
    stub_funcs.ptr_g_socket_send_to = try_find_sym(gio, "g_socket_send_to");
    stub_funcs.ptr_g_socket_receive_message = try_find_sym(gio, "g_socket_receive_message");
    stub_funcs.ptr_g_socket_send_message = try_find_sym(gio, "g_socket_send_message");
    stub_funcs.ptr_g_socket_receive_messages = try_find_sym(gio, "g_socket_receive_messages");
    stub_funcs.ptr_g_socket_send_messages = try_find_sym(gio, "g_socket_send_messages");
    stub_funcs.ptr_g_socket_close = try_find_sym(gio, "g_socket_close");
    stub_funcs.ptr_g_socket_shutdown = try_find_sym(gio, "g_socket_shutdown");
    stub_funcs.ptr_g_socket_is_closed = try_find_sym(gio, "g_socket_is_closed");
    stub_funcs.ptr_g_socket_create_source = try_find_sym(gio, "g_socket_create_source");
    stub_funcs.ptr_g_socket_speaks_ipv4 = try_find_sym(gio, "g_socket_speaks_ipv4");
    stub_funcs.ptr_g_socket_get_credentials = try_find_sym(gio, "g_socket_get_credentials");
    stub_funcs.ptr_g_socket_receive_with_blocking = try_find_sym(gio, "g_socket_receive_with_blocking");
    stub_funcs.ptr_g_socket_send_with_blocking = try_find_sym(gio, "g_socket_send_with_blocking");
    stub_funcs.ptr_g_socket_send_message_with_timeout = try_find_sym(gio, "g_socket_send_message_with_timeout");
    stub_funcs.ptr_g_socket_get_option = try_find_sym(gio, "g_socket_get_option");
    stub_funcs.ptr_g_socket_set_option = try_find_sym(gio, "g_socket_set_option");
    stub_funcs.ptr_g_socket_client_get_type = try_find_sym(gio, "g_socket_client_get_type");
    stub_funcs.ptr_g_socket_client_new = try_find_sym(gio, "g_socket_client_new");
    stub_funcs.ptr_g_socket_client_get_family = try_find_sym(gio, "g_socket_client_get_family");
    stub_funcs.ptr_g_socket_client_set_family = try_find_sym(gio, "g_socket_client_set_family");
    stub_funcs.ptr_g_socket_client_get_socket_type = try_find_sym(gio, "g_socket_client_get_socket_type");
    stub_funcs.ptr_g_socket_client_set_socket_type = try_find_sym(gio, "g_socket_client_set_socket_type");
    stub_funcs.ptr_g_socket_client_get_protocol = try_find_sym(gio, "g_socket_client_get_protocol");
    stub_funcs.ptr_g_socket_client_set_protocol = try_find_sym(gio, "g_socket_client_set_protocol");
    stub_funcs.ptr_g_socket_client_get_local_address = try_find_sym(gio, "g_socket_client_get_local_address");
    stub_funcs.ptr_g_socket_client_set_local_address = try_find_sym(gio, "g_socket_client_set_local_address");
    stub_funcs.ptr_g_socket_client_get_timeout = try_find_sym(gio, "g_socket_client_get_timeout");
    stub_funcs.ptr_g_socket_client_set_timeout = try_find_sym(gio, "g_socket_client_set_timeout");
    stub_funcs.ptr_g_socket_client_get_enable_proxy = try_find_sym(gio, "g_socket_client_get_enable_proxy");
    stub_funcs.ptr_g_socket_client_set_enable_proxy = try_find_sym(gio, "g_socket_client_set_enable_proxy");
    stub_funcs.ptr_g_socket_client_get_tls = try_find_sym(gio, "g_socket_client_get_tls");
    stub_funcs.ptr_g_socket_client_set_tls = try_find_sym(gio, "g_socket_client_set_tls");
    stub_funcs.ptr_g_socket_client_get_tls_validation_flags = try_find_sym(gio, "g_socket_client_get_tls_validation_flags");
    stub_funcs.ptr_g_socket_client_set_tls_validation_flags = try_find_sym(gio, "g_socket_client_set_tls_validation_flags");
    stub_funcs.ptr_g_socket_client_get_proxy_resolver = try_find_sym(gio, "g_socket_client_get_proxy_resolver");
    stub_funcs.ptr_g_socket_client_set_proxy_resolver = try_find_sym(gio, "g_socket_client_set_proxy_resolver");
    stub_funcs.ptr_g_socket_client_connect = try_find_sym(gio, "g_socket_client_connect");
    stub_funcs.ptr_g_socket_client_connect_to_host = try_find_sym(gio, "g_socket_client_connect_to_host");
    stub_funcs.ptr_g_socket_client_connect_to_service = try_find_sym(gio, "g_socket_client_connect_to_service");
    stub_funcs.ptr_g_socket_client_connect_to_uri = try_find_sym(gio, "g_socket_client_connect_to_uri");
    stub_funcs.ptr_g_socket_client_connect_async = try_find_sym(gio, "g_socket_client_connect_async");
    stub_funcs.ptr_g_socket_client_connect_finish = try_find_sym(gio, "g_socket_client_connect_finish");
    stub_funcs.ptr_g_socket_client_connect_to_host_async = try_find_sym(gio, "g_socket_client_connect_to_host_async");
    stub_funcs.ptr_g_socket_client_connect_to_host_finish = try_find_sym(gio, "g_socket_client_connect_to_host_finish");
    stub_funcs.ptr_g_socket_client_connect_to_service_async = try_find_sym(gio, "g_socket_client_connect_to_service_async");
    stub_funcs.ptr_g_socket_client_connect_to_service_finish = try_find_sym(gio, "g_socket_client_connect_to_service_finish");
    stub_funcs.ptr_g_socket_client_connect_to_uri_async = try_find_sym(gio, "g_socket_client_connect_to_uri_async");
    stub_funcs.ptr_g_socket_client_connect_to_uri_finish = try_find_sym(gio, "g_socket_client_connect_to_uri_finish");
    stub_funcs.ptr_g_socket_client_add_application_proxy = try_find_sym(gio, "g_socket_client_add_application_proxy");
    stub_funcs.ptr_g_socket_connectable_get_type = try_find_sym(gio, "g_socket_connectable_get_type");
    stub_funcs.ptr_g_socket_connectable_enumerate = try_find_sym(gio, "g_socket_connectable_enumerate");
    stub_funcs.ptr_g_socket_connectable_proxy_enumerate = try_find_sym(gio, "g_socket_connectable_proxy_enumerate");
    stub_funcs.ptr_g_socket_connectable_to_string = try_find_sym(gio, "g_socket_connectable_to_string");
    stub_funcs.ptr_g_socket_connection_get_type = try_find_sym(gio, "g_socket_connection_get_type");
    stub_funcs.ptr_g_socket_connection_is_connected = try_find_sym(gio, "g_socket_connection_is_connected");
    stub_funcs.ptr_g_socket_connection_connect = try_find_sym(gio, "g_socket_connection_connect");
    stub_funcs.ptr_g_socket_connection_connect_async = try_find_sym(gio, "g_socket_connection_connect_async");
    stub_funcs.ptr_g_socket_connection_connect_finish = try_find_sym(gio, "g_socket_connection_connect_finish");
    stub_funcs.ptr_g_socket_connection_get_socket = try_find_sym(gio, "g_socket_connection_get_socket");
    stub_funcs.ptr_g_socket_connection_get_local_address = try_find_sym(gio, "g_socket_connection_get_local_address");
    stub_funcs.ptr_g_socket_connection_get_remote_address = try_find_sym(gio, "g_socket_connection_get_remote_address");
    stub_funcs.ptr_g_socket_connection_factory_register_type = try_find_sym(gio, "g_socket_connection_factory_register_type");
    stub_funcs.ptr_g_socket_connection_factory_lookup_type = try_find_sym(gio, "g_socket_connection_factory_lookup_type");
    stub_funcs.ptr_g_socket_connection_factory_create_connection = try_find_sym(gio, "g_socket_connection_factory_create_connection");
    stub_funcs.ptr_g_socket_control_message_get_type = try_find_sym(gio, "g_socket_control_message_get_type");
    stub_funcs.ptr_g_socket_control_message_get_size = try_find_sym(gio, "g_socket_control_message_get_size");
    stub_funcs.ptr_g_socket_control_message_get_level = try_find_sym(gio, "g_socket_control_message_get_level");
    stub_funcs.ptr_g_socket_control_message_get_msg_type = try_find_sym(gio, "g_socket_control_message_get_msg_type");
    stub_funcs.ptr_g_socket_control_message_serialize = try_find_sym(gio, "g_socket_control_message_serialize");
    stub_funcs.ptr_g_socket_control_message_deserialize = try_find_sym(gio, "g_socket_control_message_deserialize");
    stub_funcs.ptr_g_socket_listener_get_type = try_find_sym(gio, "g_socket_listener_get_type");
    stub_funcs.ptr_g_socket_listener_new = try_find_sym(gio, "g_socket_listener_new");
    stub_funcs.ptr_g_socket_listener_set_backlog = try_find_sym(gio, "g_socket_listener_set_backlog");
    stub_funcs.ptr_g_socket_listener_add_socket = try_find_sym(gio, "g_socket_listener_add_socket");
    stub_funcs.ptr_g_socket_listener_add_address = try_find_sym(gio, "g_socket_listener_add_address");
    stub_funcs.ptr_g_socket_listener_add_inet_port = try_find_sym(gio, "g_socket_listener_add_inet_port");
    stub_funcs.ptr_g_socket_listener_add_any_inet_port = try_find_sym(gio, "g_socket_listener_add_any_inet_port");
    stub_funcs.ptr_g_socket_listener_accept_socket = try_find_sym(gio, "g_socket_listener_accept_socket");
    stub_funcs.ptr_g_socket_listener_accept_socket_async = try_find_sym(gio, "g_socket_listener_accept_socket_async");
    stub_funcs.ptr_g_socket_listener_accept_socket_finish = try_find_sym(gio, "g_socket_listener_accept_socket_finish");
    stub_funcs.ptr_g_socket_listener_accept = try_find_sym(gio, "g_socket_listener_accept");
    stub_funcs.ptr_g_socket_listener_accept_async = try_find_sym(gio, "g_socket_listener_accept_async");
    stub_funcs.ptr_g_socket_listener_accept_finish = try_find_sym(gio, "g_socket_listener_accept_finish");
    stub_funcs.ptr_g_socket_listener_close = try_find_sym(gio, "g_socket_listener_close");
    stub_funcs.ptr_g_socket_service_get_type = try_find_sym(gio, "g_socket_service_get_type");
    stub_funcs.ptr_g_socket_service_new = try_find_sym(gio, "g_socket_service_new");
    stub_funcs.ptr_g_socket_service_start = try_find_sym(gio, "g_socket_service_start");
    stub_funcs.ptr_g_socket_service_stop = try_find_sym(gio, "g_socket_service_stop");
    stub_funcs.ptr_g_socket_service_is_active = try_find_sym(gio, "g_socket_service_is_active");
    stub_funcs.ptr_g_srv_target_get_type = try_find_sym(gio, "g_srv_target_get_type");
    stub_funcs.ptr_g_srv_target_new = try_find_sym(gio, "g_srv_target_new");
    stub_funcs.ptr_g_srv_target_copy = try_find_sym(gio, "g_srv_target_copy");
    stub_funcs.ptr_g_srv_target_free = try_find_sym(gio, "g_srv_target_free");
    stub_funcs.ptr_g_srv_target_get_hostname = try_find_sym(gio, "g_srv_target_get_hostname");
    stub_funcs.ptr_g_srv_target_get_port = try_find_sym(gio, "g_srv_target_get_port");
    stub_funcs.ptr_g_srv_target_get_priority = try_find_sym(gio, "g_srv_target_get_priority");
    stub_funcs.ptr_g_srv_target_get_weight = try_find_sym(gio, "g_srv_target_get_weight");
    stub_funcs.ptr_g_srv_target_list_sort = try_find_sym(gio, "g_srv_target_list_sort");
    stub_funcs.ptr_g_subprocess_get_type = try_find_sym(gio, "g_subprocess_get_type");
    stub_funcs.ptr_g_subprocess_newv = try_find_sym(gio, "g_subprocess_newv");
    stub_funcs.ptr_g_subprocess_get_stdin_pipe = try_find_sym(gio, "g_subprocess_get_stdin_pipe");
    stub_funcs.ptr_g_subprocess_get_stdout_pipe = try_find_sym(gio, "g_subprocess_get_stdout_pipe");
    stub_funcs.ptr_g_subprocess_get_stderr_pipe = try_find_sym(gio, "g_subprocess_get_stderr_pipe");
    stub_funcs.ptr_g_subprocess_get_identifier = try_find_sym(gio, "g_subprocess_get_identifier");
    stub_funcs.ptr_g_subprocess_send_signal = try_find_sym(gio, "g_subprocess_send_signal");
    stub_funcs.ptr_g_subprocess_force_exit = try_find_sym(gio, "g_subprocess_force_exit");
    stub_funcs.ptr_g_subprocess_wait = try_find_sym(gio, "g_subprocess_wait");
    stub_funcs.ptr_g_subprocess_wait_async = try_find_sym(gio, "g_subprocess_wait_async");
    stub_funcs.ptr_g_subprocess_wait_finish = try_find_sym(gio, "g_subprocess_wait_finish");
    stub_funcs.ptr_g_subprocess_wait_check = try_find_sym(gio, "g_subprocess_wait_check");
    stub_funcs.ptr_g_subprocess_wait_check_async = try_find_sym(gio, "g_subprocess_wait_check_async");
    stub_funcs.ptr_g_subprocess_wait_check_finish = try_find_sym(gio, "g_subprocess_wait_check_finish");
    stub_funcs.ptr_g_subprocess_get_status = try_find_sym(gio, "g_subprocess_get_status");
    stub_funcs.ptr_g_subprocess_get_successful = try_find_sym(gio, "g_subprocess_get_successful");
    stub_funcs.ptr_g_subprocess_get_if_exited = try_find_sym(gio, "g_subprocess_get_if_exited");
    stub_funcs.ptr_g_subprocess_get_exit_status = try_find_sym(gio, "g_subprocess_get_exit_status");
    stub_funcs.ptr_g_subprocess_get_if_signaled = try_find_sym(gio, "g_subprocess_get_if_signaled");
    stub_funcs.ptr_g_subprocess_get_term_sig = try_find_sym(gio, "g_subprocess_get_term_sig");
    stub_funcs.ptr_g_subprocess_communicate = try_find_sym(gio, "g_subprocess_communicate");
    stub_funcs.ptr_g_subprocess_communicate_async = try_find_sym(gio, "g_subprocess_communicate_async");
    stub_funcs.ptr_g_subprocess_communicate_finish = try_find_sym(gio, "g_subprocess_communicate_finish");
    stub_funcs.ptr_g_subprocess_communicate_utf8 = try_find_sym(gio, "g_subprocess_communicate_utf8");
    stub_funcs.ptr_g_subprocess_communicate_utf8_async = try_find_sym(gio, "g_subprocess_communicate_utf8_async");
    stub_funcs.ptr_g_subprocess_communicate_utf8_finish = try_find_sym(gio, "g_subprocess_communicate_utf8_finish");
    stub_funcs.ptr_g_subprocess_launcher_get_type = try_find_sym(gio, "g_subprocess_launcher_get_type");
    stub_funcs.ptr_g_subprocess_launcher_new = try_find_sym(gio, "g_subprocess_launcher_new");
    stub_funcs.ptr_g_subprocess_launcher_spawnv = try_find_sym(gio, "g_subprocess_launcher_spawnv");
    stub_funcs.ptr_g_subprocess_launcher_set_environ = try_find_sym(gio, "g_subprocess_launcher_set_environ");
    stub_funcs.ptr_g_subprocess_launcher_setenv = try_find_sym(gio, "g_subprocess_launcher_setenv");
    stub_funcs.ptr_g_subprocess_launcher_unsetenv = try_find_sym(gio, "g_subprocess_launcher_unsetenv");
    stub_funcs.ptr_g_subprocess_launcher_getenv = try_find_sym(gio, "g_subprocess_launcher_getenv");
    stub_funcs.ptr_g_subprocess_launcher_set_cwd = try_find_sym(gio, "g_subprocess_launcher_set_cwd");
    stub_funcs.ptr_g_subprocess_launcher_set_flags = try_find_sym(gio, "g_subprocess_launcher_set_flags");
    stub_funcs.ptr_g_subprocess_launcher_set_stdin_file_path = try_find_sym(gio, "g_subprocess_launcher_set_stdin_file_path");
    stub_funcs.ptr_g_subprocess_launcher_take_stdin_fd = try_find_sym(gio, "g_subprocess_launcher_take_stdin_fd");
    stub_funcs.ptr_g_subprocess_launcher_set_stdout_file_path = try_find_sym(gio, "g_subprocess_launcher_set_stdout_file_path");
    stub_funcs.ptr_g_subprocess_launcher_take_stdout_fd = try_find_sym(gio, "g_subprocess_launcher_take_stdout_fd");
    stub_funcs.ptr_g_subprocess_launcher_set_stderr_file_path = try_find_sym(gio, "g_subprocess_launcher_set_stderr_file_path");
    stub_funcs.ptr_g_subprocess_launcher_take_stderr_fd = try_find_sym(gio, "g_subprocess_launcher_take_stderr_fd");
    stub_funcs.ptr_g_subprocess_launcher_take_fd = try_find_sym(gio, "g_subprocess_launcher_take_fd");
    stub_funcs.ptr_g_subprocess_launcher_close = try_find_sym(gio, "g_subprocess_launcher_close");
    stub_funcs.ptr_g_subprocess_launcher_set_child_setup = try_find_sym(gio, "g_subprocess_launcher_set_child_setup");
    stub_funcs.ptr_g_task_get_type = try_find_sym(gio, "g_task_get_type");
    stub_funcs.ptr_g_task_new = try_find_sym(gio, "g_task_new");
    stub_funcs.ptr_g_task_report_error = try_find_sym(gio, "g_task_report_error");
    stub_funcs.ptr_g_task_set_task_data = try_find_sym(gio, "g_task_set_task_data");
    stub_funcs.ptr_g_task_set_priority = try_find_sym(gio, "g_task_set_priority");
    stub_funcs.ptr_g_task_set_check_cancellable = try_find_sym(gio, "g_task_set_check_cancellable");
    stub_funcs.ptr_g_task_set_source_tag = try_find_sym(gio, "g_task_set_source_tag");
    stub_funcs.ptr_g_task_set_name = try_find_sym(gio, "g_task_set_name");
    stub_funcs.ptr_g_task_set_static_name = try_find_sym(gio, "g_task_set_static_name");
    stub_funcs.ptr_g_task_get_source_object = try_find_sym(gio, "g_task_get_source_object");
    stub_funcs.ptr_g_task_get_task_data = try_find_sym(gio, "g_task_get_task_data");
    stub_funcs.ptr_g_task_get_priority = try_find_sym(gio, "g_task_get_priority");
    stub_funcs.ptr_g_task_get_context = try_find_sym(gio, "g_task_get_context");
    stub_funcs.ptr_g_task_get_cancellable = try_find_sym(gio, "g_task_get_cancellable");
    stub_funcs.ptr_g_task_get_check_cancellable = try_find_sym(gio, "g_task_get_check_cancellable");
    stub_funcs.ptr_g_task_get_source_tag = try_find_sym(gio, "g_task_get_source_tag");
    stub_funcs.ptr_g_task_get_name = try_find_sym(gio, "g_task_get_name");
    stub_funcs.ptr_g_task_is_valid = try_find_sym(gio, "g_task_is_valid");
    stub_funcs.ptr_g_task_run_in_thread = try_find_sym(gio, "g_task_run_in_thread");
    stub_funcs.ptr_g_task_run_in_thread_sync = try_find_sym(gio, "g_task_run_in_thread_sync");
    stub_funcs.ptr_g_task_set_return_on_cancel = try_find_sym(gio, "g_task_set_return_on_cancel");
    stub_funcs.ptr_g_task_get_return_on_cancel = try_find_sym(gio, "g_task_get_return_on_cancel");
    stub_funcs.ptr_g_task_attach_source = try_find_sym(gio, "g_task_attach_source");
    stub_funcs.ptr_g_task_return_pointer = try_find_sym(gio, "g_task_return_pointer");
    stub_funcs.ptr_g_task_return_boolean = try_find_sym(gio, "g_task_return_boolean");
    stub_funcs.ptr_g_task_return_int = try_find_sym(gio, "g_task_return_int");
    stub_funcs.ptr_g_task_return_error = try_find_sym(gio, "g_task_return_error");
    stub_funcs.ptr_g_task_return_new_error_literal = try_find_sym(gio, "g_task_return_new_error_literal");
    stub_funcs.ptr_g_task_return_value = try_find_sym(gio, "g_task_return_value");
    stub_funcs.ptr_g_task_return_error_if_cancelled = try_find_sym(gio, "g_task_return_error_if_cancelled");
    stub_funcs.ptr_g_task_propagate_pointer = try_find_sym(gio, "g_task_propagate_pointer");
    stub_funcs.ptr_g_task_propagate_boolean = try_find_sym(gio, "g_task_propagate_boolean");
    stub_funcs.ptr_g_task_propagate_int = try_find_sym(gio, "g_task_propagate_int");
    stub_funcs.ptr_g_task_propagate_value = try_find_sym(gio, "g_task_propagate_value");
    stub_funcs.ptr_g_task_had_error = try_find_sym(gio, "g_task_had_error");
    stub_funcs.ptr_g_task_get_completed = try_find_sym(gio, "g_task_get_completed");
    stub_funcs.ptr_g_task_print_alive_tasks = try_find_sym(gio, "g_task_print_alive_tasks");
    stub_funcs.ptr_g_tcp_connection_get_type = try_find_sym(gio, "g_tcp_connection_get_type");
    stub_funcs.ptr_g_tcp_connection_set_graceful_disconnect = try_find_sym(gio, "g_tcp_connection_set_graceful_disconnect");
    stub_funcs.ptr_g_tcp_connection_get_graceful_disconnect = try_find_sym(gio, "g_tcp_connection_get_graceful_disconnect");
    stub_funcs.ptr_g_tcp_wrapper_connection_get_type = try_find_sym(gio, "g_tcp_wrapper_connection_get_type");
    stub_funcs.ptr_g_tcp_wrapper_connection_new = try_find_sym(gio, "g_tcp_wrapper_connection_new");
    stub_funcs.ptr_g_tcp_wrapper_connection_get_base_io_stream = try_find_sym(gio, "g_tcp_wrapper_connection_get_base_io_stream");
    stub_funcs.ptr_g_test_dbus_get_type = try_find_sym(gio, "g_test_dbus_get_type");
    stub_funcs.ptr_g_test_dbus_new = try_find_sym(gio, "g_test_dbus_new");
    stub_funcs.ptr_g_test_dbus_get_flags = try_find_sym(gio, "g_test_dbus_get_flags");
    stub_funcs.ptr_g_test_dbus_get_bus_address = try_find_sym(gio, "g_test_dbus_get_bus_address");
    stub_funcs.ptr_g_test_dbus_add_service_dir = try_find_sym(gio, "g_test_dbus_add_service_dir");
    stub_funcs.ptr_g_test_dbus_up = try_find_sym(gio, "g_test_dbus_up");
    stub_funcs.ptr_g_test_dbus_stop = try_find_sym(gio, "g_test_dbus_stop");
    stub_funcs.ptr_g_test_dbus_down = try_find_sym(gio, "g_test_dbus_down");
    stub_funcs.ptr_g_test_dbus_unset = try_find_sym(gio, "g_test_dbus_unset");
    stub_funcs.ptr_g_themed_icon_get_type = try_find_sym(gio, "g_themed_icon_get_type");
    stub_funcs.ptr_g_themed_icon_new = try_find_sym(gio, "g_themed_icon_new");
    stub_funcs.ptr_g_themed_icon_new_with_default_fallbacks = try_find_sym(gio, "g_themed_icon_new_with_default_fallbacks");
    stub_funcs.ptr_g_themed_icon_new_from_names = try_find_sym(gio, "g_themed_icon_new_from_names");
    stub_funcs.ptr_g_themed_icon_prepend_name = try_find_sym(gio, "g_themed_icon_prepend_name");
    stub_funcs.ptr_g_themed_icon_append_name = try_find_sym(gio, "g_themed_icon_append_name");
    stub_funcs.ptr_g_themed_icon_get_names = try_find_sym(gio, "g_themed_icon_get_names");
    stub_funcs.ptr_g_threaded_socket_service_get_type = try_find_sym(gio, "g_threaded_socket_service_get_type");
    stub_funcs.ptr_g_threaded_socket_service_new = try_find_sym(gio, "g_threaded_socket_service_new");
    stub_funcs.ptr_g_tls_backend_get_type = try_find_sym(gio, "g_tls_backend_get_type");
    stub_funcs.ptr_g_tls_backend_get_default = try_find_sym(gio, "g_tls_backend_get_default");
    stub_funcs.ptr_g_tls_backend_get_default_database = try_find_sym(gio, "g_tls_backend_get_default_database");
    stub_funcs.ptr_g_tls_backend_set_default_database = try_find_sym(gio, "g_tls_backend_set_default_database");
    stub_funcs.ptr_g_tls_backend_supports_tls = try_find_sym(gio, "g_tls_backend_supports_tls");
    stub_funcs.ptr_g_tls_backend_supports_dtls = try_find_sym(gio, "g_tls_backend_supports_dtls");
    stub_funcs.ptr_g_tls_backend_get_certificate_type = try_find_sym(gio, "g_tls_backend_get_certificate_type");
    stub_funcs.ptr_g_tls_backend_get_client_connection_type = try_find_sym(gio, "g_tls_backend_get_client_connection_type");
    stub_funcs.ptr_g_tls_backend_get_server_connection_type = try_find_sym(gio, "g_tls_backend_get_server_connection_type");
    stub_funcs.ptr_g_tls_backend_get_file_database_type = try_find_sym(gio, "g_tls_backend_get_file_database_type");
    stub_funcs.ptr_g_tls_backend_get_dtls_client_connection_type = try_find_sym(gio, "g_tls_backend_get_dtls_client_connection_type");
    stub_funcs.ptr_g_tls_backend_get_dtls_server_connection_type = try_find_sym(gio, "g_tls_backend_get_dtls_server_connection_type");
    stub_funcs.ptr_g_tls_certificate_get_type = try_find_sym(gio, "g_tls_certificate_get_type");
    stub_funcs.ptr_g_tls_certificate_new_from_pem = try_find_sym(gio, "g_tls_certificate_new_from_pem");
    stub_funcs.ptr_g_tls_certificate_new_from_pkcs12 = try_find_sym(gio, "g_tls_certificate_new_from_pkcs12");
    stub_funcs.ptr_g_tls_certificate_new_from_file_with_password = try_find_sym(gio, "g_tls_certificate_new_from_file_with_password");
    stub_funcs.ptr_g_tls_certificate_new_from_file = try_find_sym(gio, "g_tls_certificate_new_from_file");
    stub_funcs.ptr_g_tls_certificate_new_from_files = try_find_sym(gio, "g_tls_certificate_new_from_files");
    stub_funcs.ptr_g_tls_certificate_new_from_pkcs11_uris = try_find_sym(gio, "g_tls_certificate_new_from_pkcs11_uris");
    stub_funcs.ptr_g_tls_certificate_list_new_from_file = try_find_sym(gio, "g_tls_certificate_list_new_from_file");
    stub_funcs.ptr_g_tls_certificate_get_issuer = try_find_sym(gio, "g_tls_certificate_get_issuer");
    stub_funcs.ptr_g_tls_certificate_verify = try_find_sym(gio, "g_tls_certificate_verify");
    stub_funcs.ptr_g_tls_certificate_is_same = try_find_sym(gio, "g_tls_certificate_is_same");
    stub_funcs.ptr_g_tls_certificate_get_not_valid_before = try_find_sym(gio, "g_tls_certificate_get_not_valid_before");
    stub_funcs.ptr_g_tls_certificate_get_not_valid_after = try_find_sym(gio, "g_tls_certificate_get_not_valid_after");
    stub_funcs.ptr_g_tls_certificate_get_subject_name = try_find_sym(gio, "g_tls_certificate_get_subject_name");
    stub_funcs.ptr_g_tls_certificate_get_issuer_name = try_find_sym(gio, "g_tls_certificate_get_issuer_name");
    stub_funcs.ptr_g_tls_certificate_get_dns_names = try_find_sym(gio, "g_tls_certificate_get_dns_names");
    stub_funcs.ptr_g_tls_certificate_get_ip_addresses = try_find_sym(gio, "g_tls_certificate_get_ip_addresses");
    stub_funcs.ptr_g_tls_connection_get_type = try_find_sym(gio, "g_tls_connection_get_type");
    stub_funcs.ptr_g_tls_connection_set_use_system_certdb = try_find_sym(gio, "g_tls_connection_set_use_system_certdb");
    stub_funcs.ptr_g_tls_connection_get_use_system_certdb = try_find_sym(gio, "g_tls_connection_get_use_system_certdb");
    stub_funcs.ptr_g_tls_connection_set_database = try_find_sym(gio, "g_tls_connection_set_database");
    stub_funcs.ptr_g_tls_connection_get_database = try_find_sym(gio, "g_tls_connection_get_database");
    stub_funcs.ptr_g_tls_connection_set_certificate = try_find_sym(gio, "g_tls_connection_set_certificate");
    stub_funcs.ptr_g_tls_connection_get_certificate = try_find_sym(gio, "g_tls_connection_get_certificate");
    stub_funcs.ptr_g_tls_connection_set_interaction = try_find_sym(gio, "g_tls_connection_set_interaction");
    stub_funcs.ptr_g_tls_connection_get_interaction = try_find_sym(gio, "g_tls_connection_get_interaction");
    stub_funcs.ptr_g_tls_connection_get_peer_certificate = try_find_sym(gio, "g_tls_connection_get_peer_certificate");
    stub_funcs.ptr_g_tls_connection_get_peer_certificate_errors = try_find_sym(gio, "g_tls_connection_get_peer_certificate_errors");
    stub_funcs.ptr_g_tls_connection_set_require_close_notify = try_find_sym(gio, "g_tls_connection_set_require_close_notify");
    stub_funcs.ptr_g_tls_connection_get_require_close_notify = try_find_sym(gio, "g_tls_connection_get_require_close_notify");
    stub_funcs.ptr_g_tls_connection_set_rehandshake_mode = try_find_sym(gio, "g_tls_connection_set_rehandshake_mode");
    stub_funcs.ptr_g_tls_connection_get_rehandshake_mode = try_find_sym(gio, "g_tls_connection_get_rehandshake_mode");
    stub_funcs.ptr_g_tls_connection_set_advertised_protocols = try_find_sym(gio, "g_tls_connection_set_advertised_protocols");
    stub_funcs.ptr_g_tls_connection_get_negotiated_protocol = try_find_sym(gio, "g_tls_connection_get_negotiated_protocol");
    stub_funcs.ptr_g_tls_connection_get_channel_binding_data = try_find_sym(gio, "g_tls_connection_get_channel_binding_data");
    stub_funcs.ptr_g_tls_connection_handshake = try_find_sym(gio, "g_tls_connection_handshake");
    stub_funcs.ptr_g_tls_connection_handshake_async = try_find_sym(gio, "g_tls_connection_handshake_async");
    stub_funcs.ptr_g_tls_connection_handshake_finish = try_find_sym(gio, "g_tls_connection_handshake_finish");
    stub_funcs.ptr_g_tls_connection_get_protocol_version = try_find_sym(gio, "g_tls_connection_get_protocol_version");
    stub_funcs.ptr_g_tls_connection_get_ciphersuite_name = try_find_sym(gio, "g_tls_connection_get_ciphersuite_name");
    stub_funcs.ptr_g_tls_error_quark = try_find_sym(gio, "g_tls_error_quark");
    stub_funcs.ptr_g_tls_channel_binding_error_quark = try_find_sym(gio, "g_tls_channel_binding_error_quark");
    stub_funcs.ptr_g_tls_connection_emit_accept_certificate = try_find_sym(gio, "g_tls_connection_emit_accept_certificate");
    stub_funcs.ptr_g_tls_client_connection_get_type = try_find_sym(gio, "g_tls_client_connection_get_type");
    stub_funcs.ptr_g_tls_client_connection_new = try_find_sym(gio, "g_tls_client_connection_new");
    stub_funcs.ptr_g_tls_client_connection_get_validation_flags = try_find_sym(gio, "g_tls_client_connection_get_validation_flags");
    stub_funcs.ptr_g_tls_client_connection_set_validation_flags = try_find_sym(gio, "g_tls_client_connection_set_validation_flags");
    stub_funcs.ptr_g_tls_client_connection_get_server_identity = try_find_sym(gio, "g_tls_client_connection_get_server_identity");
    stub_funcs.ptr_g_tls_client_connection_set_server_identity = try_find_sym(gio, "g_tls_client_connection_set_server_identity");
    stub_funcs.ptr_g_tls_client_connection_get_use_ssl3 = try_find_sym(gio, "g_tls_client_connection_get_use_ssl3");
    stub_funcs.ptr_g_tls_client_connection_set_use_ssl3 = try_find_sym(gio, "g_tls_client_connection_set_use_ssl3");
    stub_funcs.ptr_g_tls_client_connection_get_accepted_cas = try_find_sym(gio, "g_tls_client_connection_get_accepted_cas");
    stub_funcs.ptr_g_tls_client_connection_copy_session_state = try_find_sym(gio, "g_tls_client_connection_copy_session_state");
    stub_funcs.ptr_g_tls_database_get_type = try_find_sym(gio, "g_tls_database_get_type");
    stub_funcs.ptr_g_tls_database_verify_chain = try_find_sym(gio, "g_tls_database_verify_chain");
    stub_funcs.ptr_g_tls_database_verify_chain_async = try_find_sym(gio, "g_tls_database_verify_chain_async");
    stub_funcs.ptr_g_tls_database_verify_chain_finish = try_find_sym(gio, "g_tls_database_verify_chain_finish");
    stub_funcs.ptr_g_tls_database_create_certificate_handle = try_find_sym(gio, "g_tls_database_create_certificate_handle");
    stub_funcs.ptr_g_tls_database_lookup_certificate_for_handle = try_find_sym(gio, "g_tls_database_lookup_certificate_for_handle");
    stub_funcs.ptr_g_tls_database_lookup_certificate_for_handle_async = try_find_sym(gio, "g_tls_database_lookup_certificate_for_handle_async");
    stub_funcs.ptr_g_tls_database_lookup_certificate_for_handle_finish = try_find_sym(gio, "g_tls_database_lookup_certificate_for_handle_finish");
    stub_funcs.ptr_g_tls_database_lookup_certificate_issuer = try_find_sym(gio, "g_tls_database_lookup_certificate_issuer");
    stub_funcs.ptr_g_tls_database_lookup_certificate_issuer_async = try_find_sym(gio, "g_tls_database_lookup_certificate_issuer_async");
    stub_funcs.ptr_g_tls_database_lookup_certificate_issuer_finish = try_find_sym(gio, "g_tls_database_lookup_certificate_issuer_finish");
    stub_funcs.ptr_g_tls_database_lookup_certificates_issued_by = try_find_sym(gio, "g_tls_database_lookup_certificates_issued_by");
    stub_funcs.ptr_g_tls_database_lookup_certificates_issued_by_async = try_find_sym(gio, "g_tls_database_lookup_certificates_issued_by_async");
    stub_funcs.ptr_g_tls_database_lookup_certificates_issued_by_finish = try_find_sym(gio, "g_tls_database_lookup_certificates_issued_by_finish");
    stub_funcs.ptr_g_tls_file_database_get_type = try_find_sym(gio, "g_tls_file_database_get_type");
    stub_funcs.ptr_g_tls_file_database_new = try_find_sym(gio, "g_tls_file_database_new");
    stub_funcs.ptr_g_tls_interaction_get_type = try_find_sym(gio, "g_tls_interaction_get_type");
    stub_funcs.ptr_g_tls_interaction_invoke_ask_password = try_find_sym(gio, "g_tls_interaction_invoke_ask_password");
    stub_funcs.ptr_g_tls_interaction_ask_password = try_find_sym(gio, "g_tls_interaction_ask_password");
    stub_funcs.ptr_g_tls_interaction_ask_password_async = try_find_sym(gio, "g_tls_interaction_ask_password_async");
    stub_funcs.ptr_g_tls_interaction_ask_password_finish = try_find_sym(gio, "g_tls_interaction_ask_password_finish");
    stub_funcs.ptr_g_tls_interaction_invoke_request_certificate = try_find_sym(gio, "g_tls_interaction_invoke_request_certificate");
    stub_funcs.ptr_g_tls_interaction_request_certificate = try_find_sym(gio, "g_tls_interaction_request_certificate");
    stub_funcs.ptr_g_tls_interaction_request_certificate_async = try_find_sym(gio, "g_tls_interaction_request_certificate_async");
    stub_funcs.ptr_g_tls_interaction_request_certificate_finish = try_find_sym(gio, "g_tls_interaction_request_certificate_finish");
    stub_funcs.ptr_g_tls_password_get_type = try_find_sym(gio, "g_tls_password_get_type");
    stub_funcs.ptr_g_tls_password_new = try_find_sym(gio, "g_tls_password_new");
    stub_funcs.ptr_g_tls_password_get_value = try_find_sym(gio, "g_tls_password_get_value");
    stub_funcs.ptr_g_tls_password_set_value = try_find_sym(gio, "g_tls_password_set_value");
    stub_funcs.ptr_g_tls_password_set_value_full = try_find_sym(gio, "g_tls_password_set_value_full");
    stub_funcs.ptr_g_tls_password_get_flags = try_find_sym(gio, "g_tls_password_get_flags");
    stub_funcs.ptr_g_tls_password_set_flags = try_find_sym(gio, "g_tls_password_set_flags");
    stub_funcs.ptr_g_tls_password_get_description = try_find_sym(gio, "g_tls_password_get_description");
    stub_funcs.ptr_g_tls_password_set_description = try_find_sym(gio, "g_tls_password_set_description");
    stub_funcs.ptr_g_tls_password_get_warning = try_find_sym(gio, "g_tls_password_get_warning");
    stub_funcs.ptr_g_tls_password_set_warning = try_find_sym(gio, "g_tls_password_set_warning");
    stub_funcs.ptr_g_tls_server_connection_get_type = try_find_sym(gio, "g_tls_server_connection_get_type");
    stub_funcs.ptr_g_tls_server_connection_new = try_find_sym(gio, "g_tls_server_connection_new");
    stub_funcs.ptr_g_unix_connection_get_type = try_find_sym(gio, "g_unix_connection_get_type");
    stub_funcs.ptr_g_unix_connection_send_fd = try_find_sym(gio, "g_unix_connection_send_fd");
    stub_funcs.ptr_g_unix_connection_receive_fd = try_find_sym(gio, "g_unix_connection_receive_fd");
    stub_funcs.ptr_g_unix_connection_send_credentials = try_find_sym(gio, "g_unix_connection_send_credentials");
    stub_funcs.ptr_g_unix_connection_send_credentials_async = try_find_sym(gio, "g_unix_connection_send_credentials_async");
    stub_funcs.ptr_g_unix_connection_send_credentials_finish = try_find_sym(gio, "g_unix_connection_send_credentials_finish");
    stub_funcs.ptr_g_unix_connection_receive_credentials = try_find_sym(gio, "g_unix_connection_receive_credentials");
    stub_funcs.ptr_g_unix_connection_receive_credentials_async = try_find_sym(gio, "g_unix_connection_receive_credentials_async");
    stub_funcs.ptr_g_unix_connection_receive_credentials_finish = try_find_sym(gio, "g_unix_connection_receive_credentials_finish");
    stub_funcs.ptr_g_unix_credentials_message_get_type = try_find_sym(gio, "g_unix_credentials_message_get_type");
    stub_funcs.ptr_g_unix_credentials_message_new = try_find_sym(gio, "g_unix_credentials_message_new");
    stub_funcs.ptr_g_unix_credentials_message_new_with_credentials = try_find_sym(gio, "g_unix_credentials_message_new_with_credentials");
    stub_funcs.ptr_g_unix_credentials_message_get_credentials = try_find_sym(gio, "g_unix_credentials_message_get_credentials");
    stub_funcs.ptr_g_unix_credentials_message_is_supported = try_find_sym(gio, "g_unix_credentials_message_is_supported");
    stub_funcs.ptr_g_unix_fd_list_get_type = try_find_sym(gio, "g_unix_fd_list_get_type");
    stub_funcs.ptr_g_unix_fd_list_new = try_find_sym(gio, "g_unix_fd_list_new");
    stub_funcs.ptr_g_unix_fd_list_new_from_array = try_find_sym(gio, "g_unix_fd_list_new_from_array");
    stub_funcs.ptr_g_unix_fd_list_append = try_find_sym(gio, "g_unix_fd_list_append");
    stub_funcs.ptr_g_unix_fd_list_get_length = try_find_sym(gio, "g_unix_fd_list_get_length");
    stub_funcs.ptr_g_unix_fd_list_get = try_find_sym(gio, "g_unix_fd_list_get");
    stub_funcs.ptr_g_unix_fd_list_peek_fds = try_find_sym(gio, "g_unix_fd_list_peek_fds");
    stub_funcs.ptr_g_unix_fd_list_steal_fds = try_find_sym(gio, "g_unix_fd_list_steal_fds");
    stub_funcs.ptr_g_unix_socket_address_get_type = try_find_sym(gio, "g_unix_socket_address_get_type");
    stub_funcs.ptr_g_unix_socket_address_new = try_find_sym(gio, "g_unix_socket_address_new");
    stub_funcs.ptr_g_unix_socket_address_new_abstract = try_find_sym(gio, "g_unix_socket_address_new_abstract");
    stub_funcs.ptr_g_unix_socket_address_new_with_type = try_find_sym(gio, "g_unix_socket_address_new_with_type");
    stub_funcs.ptr_g_unix_socket_address_get_path = try_find_sym(gio, "g_unix_socket_address_get_path");
    stub_funcs.ptr_g_unix_socket_address_get_path_len = try_find_sym(gio, "g_unix_socket_address_get_path_len");
    stub_funcs.ptr_g_unix_socket_address_get_address_type = try_find_sym(gio, "g_unix_socket_address_get_address_type");
    stub_funcs.ptr_g_unix_socket_address_get_is_abstract = try_find_sym(gio, "g_unix_socket_address_get_is_abstract");
    stub_funcs.ptr_g_unix_socket_address_abstract_names_supported = try_find_sym(gio, "g_unix_socket_address_abstract_names_supported");
    stub_funcs.ptr_g_vfs_get_type = try_find_sym(gio, "g_vfs_get_type");
    stub_funcs.ptr_g_vfs_is_active = try_find_sym(gio, "g_vfs_is_active");
    stub_funcs.ptr_g_vfs_get_file_for_path = try_find_sym(gio, "g_vfs_get_file_for_path");
    stub_funcs.ptr_g_vfs_get_file_for_uri = try_find_sym(gio, "g_vfs_get_file_for_uri");
    stub_funcs.ptr_g_vfs_get_supported_uri_schemes = try_find_sym(gio, "g_vfs_get_supported_uri_schemes");
    stub_funcs.ptr_g_vfs_parse_name = try_find_sym(gio, "g_vfs_parse_name");
    stub_funcs.ptr_g_vfs_get_default = try_find_sym(gio, "g_vfs_get_default");
    stub_funcs.ptr_g_vfs_get_local = try_find_sym(gio, "g_vfs_get_local");
    stub_funcs.ptr_g_vfs_register_uri_scheme = try_find_sym(gio, "g_vfs_register_uri_scheme");
    stub_funcs.ptr_g_vfs_unregister_uri_scheme = try_find_sym(gio, "g_vfs_unregister_uri_scheme");
    stub_funcs.ptr_g_volume_get_type = try_find_sym(gio, "g_volume_get_type");
    stub_funcs.ptr_g_volume_get_name = try_find_sym(gio, "g_volume_get_name");
    stub_funcs.ptr_g_volume_get_icon = try_find_sym(gio, "g_volume_get_icon");
    stub_funcs.ptr_g_volume_get_symbolic_icon = try_find_sym(gio, "g_volume_get_symbolic_icon");
    stub_funcs.ptr_g_volume_get_uuid = try_find_sym(gio, "g_volume_get_uuid");
    stub_funcs.ptr_g_volume_get_drive = try_find_sym(gio, "g_volume_get_drive");
    stub_funcs.ptr_g_volume_get_mount = try_find_sym(gio, "g_volume_get_mount");
    stub_funcs.ptr_g_volume_can_mount = try_find_sym(gio, "g_volume_can_mount");
    stub_funcs.ptr_g_volume_can_eject = try_find_sym(gio, "g_volume_can_eject");
    stub_funcs.ptr_g_volume_should_automount = try_find_sym(gio, "g_volume_should_automount");
    stub_funcs.ptr_g_volume_mount = try_find_sym(gio, "g_volume_mount");
    stub_funcs.ptr_g_volume_mount_finish = try_find_sym(gio, "g_volume_mount_finish");
    stub_funcs.ptr_g_volume_eject = try_find_sym(gio, "g_volume_eject");
    stub_funcs.ptr_g_volume_eject_finish = try_find_sym(gio, "g_volume_eject_finish");
    stub_funcs.ptr_g_volume_get_identifier = try_find_sym(gio, "g_volume_get_identifier");
    stub_funcs.ptr_g_volume_enumerate_identifiers = try_find_sym(gio, "g_volume_enumerate_identifiers");
    stub_funcs.ptr_g_volume_get_activation_root = try_find_sym(gio, "g_volume_get_activation_root");
    stub_funcs.ptr_g_volume_eject_with_operation = try_find_sym(gio, "g_volume_eject_with_operation");
    stub_funcs.ptr_g_volume_eject_with_operation_finish = try_find_sym(gio, "g_volume_eject_with_operation_finish");
    stub_funcs.ptr_g_volume_get_sort_key = try_find_sym(gio, "g_volume_get_sort_key");
    stub_funcs.ptr_g_zlib_compressor_get_type = try_find_sym(gio, "g_zlib_compressor_get_type");
    stub_funcs.ptr_g_zlib_compressor_new = try_find_sym(gio, "g_zlib_compressor_new");
    stub_funcs.ptr_g_zlib_compressor_get_file_info = try_find_sym(gio, "g_zlib_compressor_get_file_info");
    stub_funcs.ptr_g_zlib_compressor_set_file_info = try_find_sym(gio, "g_zlib_compressor_set_file_info");
    stub_funcs.ptr_g_zlib_decompressor_get_type = try_find_sym(gio, "g_zlib_decompressor_get_type");
    stub_funcs.ptr_g_zlib_decompressor_new = try_find_sym(gio, "g_zlib_decompressor_new");
    stub_funcs.ptr_g_zlib_decompressor_get_file_info = try_find_sym(gio, "g_zlib_decompressor_get_file_info");
}

GType (g_action_get_type)(void) { return stub_funcs.ptr_g_action_get_type(); }
const gchar * (g_action_get_name)(GAction * action) { return stub_funcs.ptr_g_action_get_name(action); }
const GVariantType * (g_action_get_parameter_type)(GAction * action) { return stub_funcs.ptr_g_action_get_parameter_type(action); }
const GVariantType * (g_action_get_state_type)(GAction * action) { return stub_funcs.ptr_g_action_get_state_type(action); }
GVariant * (g_action_get_state_hint)(GAction * action) { return stub_funcs.ptr_g_action_get_state_hint(action); }
gboolean (g_action_get_enabled)(GAction * action) { return stub_funcs.ptr_g_action_get_enabled(action); }
GVariant * (g_action_get_state)(GAction * action) { return stub_funcs.ptr_g_action_get_state(action); }
void (g_action_change_state)(GAction * action, GVariant * value) { stub_funcs.ptr_g_action_change_state(action, value); }
void (g_action_activate)(GAction * action, GVariant * parameter) { stub_funcs.ptr_g_action_activate(action, parameter); }
gboolean (g_action_name_is_valid)(const gchar * action_name) { return stub_funcs.ptr_g_action_name_is_valid(action_name); }
gboolean (g_action_parse_detailed_name)(const gchar * detailed_name, gchar * * action_name, GVariant * * target_value, GError * * error) { return stub_funcs.ptr_g_action_parse_detailed_name(detailed_name, action_name, target_value, error); }
gchar * (g_action_print_detailed_name)(const gchar * action_name, GVariant * target_value) { return stub_funcs.ptr_g_action_print_detailed_name(action_name, target_value); }
GType (g_action_group_get_type)(void) { return stub_funcs.ptr_g_action_group_get_type(); }
gboolean (g_action_group_has_action)(GActionGroup * action_group, const gchar * action_name) { return stub_funcs.ptr_g_action_group_has_action(action_group, action_name); }
gchar * * (g_action_group_list_actions)(GActionGroup * action_group) { return stub_funcs.ptr_g_action_group_list_actions(action_group); }
const GVariantType * (g_action_group_get_action_parameter_type)(GActionGroup * action_group, const gchar * action_name) { return stub_funcs.ptr_g_action_group_get_action_parameter_type(action_group, action_name); }
const GVariantType * (g_action_group_get_action_state_type)(GActionGroup * action_group, const gchar * action_name) { return stub_funcs.ptr_g_action_group_get_action_state_type(action_group, action_name); }
GVariant * (g_action_group_get_action_state_hint)(GActionGroup * action_group, const gchar * action_name) { return stub_funcs.ptr_g_action_group_get_action_state_hint(action_group, action_name); }
gboolean (g_action_group_get_action_enabled)(GActionGroup * action_group, const gchar * action_name) { return stub_funcs.ptr_g_action_group_get_action_enabled(action_group, action_name); }
GVariant * (g_action_group_get_action_state)(GActionGroup * action_group, const gchar * action_name) { return stub_funcs.ptr_g_action_group_get_action_state(action_group, action_name); }
void (g_action_group_change_action_state)(GActionGroup * action_group, const gchar * action_name, GVariant * value) { stub_funcs.ptr_g_action_group_change_action_state(action_group, action_name, value); }
void (g_action_group_activate_action)(GActionGroup * action_group, const gchar * action_name, GVariant * parameter) { stub_funcs.ptr_g_action_group_activate_action(action_group, action_name, parameter); }
void (g_action_group_action_added)(GActionGroup * action_group, const gchar * action_name) { stub_funcs.ptr_g_action_group_action_added(action_group, action_name); }
void (g_action_group_action_removed)(GActionGroup * action_group, const gchar * action_name) { stub_funcs.ptr_g_action_group_action_removed(action_group, action_name); }
void (g_action_group_action_enabled_changed)(GActionGroup * action_group, const gchar * action_name, gboolean enabled) { stub_funcs.ptr_g_action_group_action_enabled_changed(action_group, action_name, enabled); }
void (g_action_group_action_state_changed)(GActionGroup * action_group, const gchar * action_name, GVariant * state) { stub_funcs.ptr_g_action_group_action_state_changed(action_group, action_name, state); }
gboolean (g_action_group_query_action)(GActionGroup * action_group, const gchar * action_name, gboolean * enabled, const GVariantType * * parameter_type, const GVariantType * * state_type, GVariant * * state_hint, GVariant * * state) { return stub_funcs.ptr_g_action_group_query_action(action_group, action_name, enabled, parameter_type, state_type, state_hint, state); }
guint (g_dbus_connection_export_action_group)(GDBusConnection * connection, const gchar * object_path, GActionGroup * action_group, GError * * error) { return stub_funcs.ptr_g_dbus_connection_export_action_group(connection, object_path, action_group, error); }
void (g_dbus_connection_unexport_action_group)(GDBusConnection * connection, guint export_id) { stub_funcs.ptr_g_dbus_connection_unexport_action_group(connection, export_id); }
GType (g_action_map_get_type)(void) { return stub_funcs.ptr_g_action_map_get_type(); }
GAction * (g_action_map_lookup_action)(GActionMap * action_map, const gchar * action_name) { return stub_funcs.ptr_g_action_map_lookup_action(action_map, action_name); }
void (g_action_map_add_action)(GActionMap * action_map, GAction * action) { stub_funcs.ptr_g_action_map_add_action(action_map, action); }
void (g_action_map_remove_action)(GActionMap * action_map, const gchar * action_name) { stub_funcs.ptr_g_action_map_remove_action(action_map, action_name); }
void (g_action_map_add_action_entries)(GActionMap * action_map, const GActionEntry * entries, gint n_entries, gpointer user_data) { stub_funcs.ptr_g_action_map_add_action_entries(action_map, entries, n_entries, user_data); }
void (g_action_map_remove_action_entries)(GActionMap * action_map, const GActionEntry * entries, gint n_entries) { stub_funcs.ptr_g_action_map_remove_action_entries(action_map, entries, n_entries); }
GType (g_app_info_get_type)(void) { return stub_funcs.ptr_g_app_info_get_type(); }
GAppInfo * (g_app_info_create_from_commandline)(const char * commandline, const char * application_name, GAppInfoCreateFlags flags, GError * * error) { return stub_funcs.ptr_g_app_info_create_from_commandline(commandline, application_name, flags, error); }
GAppInfo * (g_app_info_dup)(GAppInfo * appinfo) { return stub_funcs.ptr_g_app_info_dup(appinfo); }
gboolean (g_app_info_equal)(GAppInfo * appinfo1, GAppInfo * appinfo2) { return stub_funcs.ptr_g_app_info_equal(appinfo1, appinfo2); }
const char * (g_app_info_get_id)(GAppInfo * appinfo) { return stub_funcs.ptr_g_app_info_get_id(appinfo); }
const char * (g_app_info_get_name)(GAppInfo * appinfo) { return stub_funcs.ptr_g_app_info_get_name(appinfo); }
const char * (g_app_info_get_display_name)(GAppInfo * appinfo) { return stub_funcs.ptr_g_app_info_get_display_name(appinfo); }
const char * (g_app_info_get_description)(GAppInfo * appinfo) { return stub_funcs.ptr_g_app_info_get_description(appinfo); }
const char * (g_app_info_get_executable)(GAppInfo * appinfo) { return stub_funcs.ptr_g_app_info_get_executable(appinfo); }
const char * (g_app_info_get_commandline)(GAppInfo * appinfo) { return stub_funcs.ptr_g_app_info_get_commandline(appinfo); }
GIcon * (g_app_info_get_icon)(GAppInfo * appinfo) { return stub_funcs.ptr_g_app_info_get_icon(appinfo); }
gboolean (g_app_info_launch)(GAppInfo * appinfo, GList * files, GAppLaunchContext * context, GError * * error) { return stub_funcs.ptr_g_app_info_launch(appinfo, files, context, error); }
gboolean (g_app_info_supports_uris)(GAppInfo * appinfo) { return stub_funcs.ptr_g_app_info_supports_uris(appinfo); }
gboolean (g_app_info_supports_files)(GAppInfo * appinfo) { return stub_funcs.ptr_g_app_info_supports_files(appinfo); }
gboolean (g_app_info_launch_uris)(GAppInfo * appinfo, GList * uris, GAppLaunchContext * context, GError * * error) { return stub_funcs.ptr_g_app_info_launch_uris(appinfo, uris, context, error); }
void (g_app_info_launch_uris_async)(GAppInfo * appinfo, GList * uris, GAppLaunchContext * context, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data) { stub_funcs.ptr_g_app_info_launch_uris_async(appinfo, uris, context, cancellable, callback, user_data); }
gboolean (g_app_info_launch_uris_finish)(GAppInfo * appinfo, GAsyncResult * result, GError * * error) { return stub_funcs.ptr_g_app_info_launch_uris_finish(appinfo, result, error); }
gboolean (g_app_info_should_show)(GAppInfo * appinfo) { return stub_funcs.ptr_g_app_info_should_show(appinfo); }
gboolean (g_app_info_set_as_default_for_type)(GAppInfo * appinfo, const char * content_type, GError * * error) { return stub_funcs.ptr_g_app_info_set_as_default_for_type(appinfo, content_type, error); }
gboolean (g_app_info_set_as_default_for_extension)(GAppInfo * appinfo, const char * extension, GError * * error) { return stub_funcs.ptr_g_app_info_set_as_default_for_extension(appinfo, extension, error); }
gboolean (g_app_info_add_supports_type)(GAppInfo * appinfo, const char * content_type, GError * * error) { return stub_funcs.ptr_g_app_info_add_supports_type(appinfo, content_type, error); }
gboolean (g_app_info_can_remove_supports_type)(GAppInfo * appinfo) { return stub_funcs.ptr_g_app_info_can_remove_supports_type(appinfo); }
gboolean (g_app_info_remove_supports_type)(GAppInfo * appinfo, const char * content_type, GError * * error) { return stub_funcs.ptr_g_app_info_remove_supports_type(appinfo, content_type, error); }
const char * * (g_app_info_get_supported_types)(GAppInfo * appinfo) { return stub_funcs.ptr_g_app_info_get_supported_types(appinfo); }
gboolean (g_app_info_can_delete)(GAppInfo * appinfo) { return stub_funcs.ptr_g_app_info_can_delete(appinfo); }
gboolean (g_app_info_delete)(GAppInfo * appinfo) { return stub_funcs.ptr_g_app_info_delete(appinfo); }
gboolean (g_app_info_set_as_last_used_for_type)(GAppInfo * appinfo, const char * content_type, GError * * error) { return stub_funcs.ptr_g_app_info_set_as_last_used_for_type(appinfo, content_type, error); }
GList * (g_app_info_get_all)(void) { return stub_funcs.ptr_g_app_info_get_all(); }
GList * (g_app_info_get_all_for_type)(const char * content_type) { return stub_funcs.ptr_g_app_info_get_all_for_type(content_type); }
GList * (g_app_info_get_recommended_for_type)(const gchar * content_type) { return stub_funcs.ptr_g_app_info_get_recommended_for_type(content_type); }
GList * (g_app_info_get_fallback_for_type)(const gchar * content_type) { return stub_funcs.ptr_g_app_info_get_fallback_for_type(content_type); }
void (g_app_info_reset_type_associations)(const char * content_type) { stub_funcs.ptr_g_app_info_reset_type_associations(content_type); }
GAppInfo * (g_app_info_get_default_for_type)(const char * content_type, gboolean must_support_uris) { return stub_funcs.ptr_g_app_info_get_default_for_type(content_type, must_support_uris); }
void (g_app_info_get_default_for_type_async)(const char * content_type, gboolean must_support_uris, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data) { stub_funcs.ptr_g_app_info_get_default_for_type_async(content_type, must_support_uris, cancellable, callback, user_data); }
GAppInfo * (g_app_info_get_default_for_type_finish)(GAsyncResult * result, GError * * error) { return stub_funcs.ptr_g_app_info_get_default_for_type_finish(result, error); }
GAppInfo * (g_app_info_get_default_for_uri_scheme)(const char * uri_scheme) { return stub_funcs.ptr_g_app_info_get_default_for_uri_scheme(uri_scheme); }
void (g_app_info_get_default_for_uri_scheme_async)(const char * uri_scheme, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data) { stub_funcs.ptr_g_app_info_get_default_for_uri_scheme_async(uri_scheme, cancellable, callback, user_data); }
GAppInfo * (g_app_info_get_default_for_uri_scheme_finish)(GAsyncResult * result, GError * * error) { return stub_funcs.ptr_g_app_info_get_default_for_uri_scheme_finish(result, error); }
gboolean (g_app_info_launch_default_for_uri)(const char * uri, GAppLaunchContext * context, GError * * error) { return stub_funcs.ptr_g_app_info_launch_default_for_uri(uri, context, error); }
void (g_app_info_launch_default_for_uri_async)(const char * uri, GAppLaunchContext * context, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data) { stub_funcs.ptr_g_app_info_launch_default_for_uri_async(uri, context, cancellable, callback, user_data); }
gboolean (g_app_info_launch_default_for_uri_finish)(GAsyncResult * result, GError * * error) { return stub_funcs.ptr_g_app_info_launch_default_for_uri_finish(result, error); }
GType (g_app_launch_context_get_type)(void) { return stub_funcs.ptr_g_app_launch_context_get_type(); }
GAppLaunchContext * (g_app_launch_context_new)(void) { return stub_funcs.ptr_g_app_launch_context_new(); }
void (g_app_launch_context_setenv)(GAppLaunchContext * context, const char * variable, const char * value) { stub_funcs.ptr_g_app_launch_context_setenv(context, variable, value); }
void (g_app_launch_context_unsetenv)(GAppLaunchContext * context, const char * variable) { stub_funcs.ptr_g_app_launch_context_unsetenv(context, variable); }
char * * (g_app_launch_context_get_environment)(GAppLaunchContext * context) { return stub_funcs.ptr_g_app_launch_context_get_environment(context); }
char * (g_app_launch_context_get_display)(GAppLaunchContext * context, GAppInfo * info, GList * files) { return stub_funcs.ptr_g_app_launch_context_get_display(context, info, files); }
char * (g_app_launch_context_get_startup_notify_id)(GAppLaunchContext * context, GAppInfo * info, GList * files) { return stub_funcs.ptr_g_app_launch_context_get_startup_notify_id(context, info, files); }
void (g_app_launch_context_launch_failed)(GAppLaunchContext * context, const char * startup_notify_id) { stub_funcs.ptr_g_app_launch_context_launch_failed(context, startup_notify_id); }
GType (g_app_info_monitor_get_type)(void) { return stub_funcs.ptr_g_app_info_monitor_get_type(); }
GAppInfoMonitor * (g_app_info_monitor_get)(void) { return stub_funcs.ptr_g_app_info_monitor_get(); }
GType (g_application_get_type)(void) { return stub_funcs.ptr_g_application_get_type(); }
gboolean (g_application_id_is_valid)(const gchar * application_id) { return stub_funcs.ptr_g_application_id_is_valid(application_id); }
GApplication * (g_application_new)(const gchar * application_id, GApplicationFlags flags) { return stub_funcs.ptr_g_application_new(application_id, flags); }
const gchar * (g_application_get_application_id)(GApplication * application) { return stub_funcs.ptr_g_application_get_application_id(application); }
void (g_application_set_application_id)(GApplication * application, const gchar * application_id) { stub_funcs.ptr_g_application_set_application_id(application, application_id); }
const gchar * (g_application_get_version)(GApplication * application) { return stub_funcs.ptr_g_application_get_version(application); }
void (g_application_set_version)(GApplication * application, const gchar * version) { stub_funcs.ptr_g_application_set_version(application, version); }
GDBusConnection * (g_application_get_dbus_connection)(GApplication * application) { return stub_funcs.ptr_g_application_get_dbus_connection(application); }
const gchar * (g_application_get_dbus_object_path)(GApplication * application) { return stub_funcs.ptr_g_application_get_dbus_object_path(application); }
guint (g_application_get_inactivity_timeout)(GApplication * application) { return stub_funcs.ptr_g_application_get_inactivity_timeout(application); }
void (g_application_set_inactivity_timeout)(GApplication * application, guint inactivity_timeout) { stub_funcs.ptr_g_application_set_inactivity_timeout(application, inactivity_timeout); }
GApplicationFlags (g_application_get_flags)(GApplication * application) { return stub_funcs.ptr_g_application_get_flags(application); }
void (g_application_set_flags)(GApplication * application, GApplicationFlags flags) { stub_funcs.ptr_g_application_set_flags(application, flags); }
const gchar * (g_application_get_resource_base_path)(GApplication * application) { return stub_funcs.ptr_g_application_get_resource_base_path(application); }
void (g_application_set_resource_base_path)(GApplication * application, const gchar * resource_path) { stub_funcs.ptr_g_application_set_resource_base_path(application, resource_path); }
void (g_application_set_action_group)(GApplication * application, GActionGroup * action_group) { stub_funcs.ptr_g_application_set_action_group(application, action_group); }
void (g_application_add_main_option_entries)(GApplication * application, const GOptionEntry * entries) { stub_funcs.ptr_g_application_add_main_option_entries(application, entries); }
void (g_application_add_main_option)(GApplication * application, const char * long_name, char short_name, GOptionFlags flags, GOptionArg arg, const char * description, const char * arg_description) { stub_funcs.ptr_g_application_add_main_option(application, long_name, short_name, flags, arg, description, arg_description); }
void (g_application_add_option_group)(GApplication * application, GOptionGroup * group) { stub_funcs.ptr_g_application_add_option_group(application, group); }
void (g_application_set_option_context_parameter_string)(GApplication * application, const gchar * parameter_string) { stub_funcs.ptr_g_application_set_option_context_parameter_string(application, parameter_string); }
void (g_application_set_option_context_summary)(GApplication * application, const gchar * summary) { stub_funcs.ptr_g_application_set_option_context_summary(application, summary); }
void (g_application_set_option_context_description)(GApplication * application, const gchar * description) { stub_funcs.ptr_g_application_set_option_context_description(application, description); }
gboolean (g_application_get_is_registered)(GApplication * application) { return stub_funcs.ptr_g_application_get_is_registered(application); }
gboolean (g_application_get_is_remote)(GApplication * application) { return stub_funcs.ptr_g_application_get_is_remote(application); }
gboolean (g_application_register)(GApplication * application, GCancellable * cancellable, GError * * error) { return stub_funcs.ptr_g_application_register(application, cancellable, error); }
void (g_application_hold)(GApplication * application) { stub_funcs.ptr_g_application_hold(application); }
void (g_application_release)(GApplication * application) { stub_funcs.ptr_g_application_release(application); }
void (g_application_activate)(GApplication * application) { stub_funcs.ptr_g_application_activate(application); }
void (g_application_open)(GApplication * application, GFile * * files, gint n_files, const gchar * hint) { stub_funcs.ptr_g_application_open(application, files, n_files, hint); }
int (g_application_run)(GApplication * application, int argc, char * * argv) { return stub_funcs.ptr_g_application_run(application, argc, argv); }
void (g_application_quit)(GApplication * application) { stub_funcs.ptr_g_application_quit(application); }
GApplication * (g_application_get_default)(void) { return stub_funcs.ptr_g_application_get_default(); }
void (g_application_set_default)(GApplication * application) { stub_funcs.ptr_g_application_set_default(application); }
void (g_application_mark_busy)(GApplication * application) { stub_funcs.ptr_g_application_mark_busy(application); }
void (g_application_unmark_busy)(GApplication * application) { stub_funcs.ptr_g_application_unmark_busy(application); }
gboolean (g_application_get_is_busy)(GApplication * application) { return stub_funcs.ptr_g_application_get_is_busy(application); }
void (g_application_send_notification)(GApplication * application, const gchar * id, GNotification * notification) { stub_funcs.ptr_g_application_send_notification(application, id, notification); }
void (g_application_withdraw_notification)(GApplication * application, const gchar * id) { stub_funcs.ptr_g_application_withdraw_notification(application, id); }
void (g_application_bind_busy_property)(GApplication * application, gpointer object, const gchar * property) { stub_funcs.ptr_g_application_bind_busy_property(application, object, property); }
void (g_application_unbind_busy_property)(GApplication * application, gpointer object, const gchar * property) { stub_funcs.ptr_g_application_unbind_busy_property(application, object, property); }
GType (g_application_command_line_get_type)(void) { return stub_funcs.ptr_g_application_command_line_get_type(); }
gchar * * (g_application_command_line_get_arguments)(GApplicationCommandLine * cmdline, int * argc) { return stub_funcs.ptr_g_application_command_line_get_arguments(cmdline, argc); }
GVariantDict * (g_application_command_line_get_options_dict)(GApplicationCommandLine * cmdline) { return stub_funcs.ptr_g_application_command_line_get_options_dict(cmdline); }
GInputStream * (g_application_command_line_get_stdin)(GApplicationCommandLine * cmdline) { return stub_funcs.ptr_g_application_command_line_get_stdin(cmdline); }
const gchar * const * (g_application_command_line_get_environ)(GApplicationCommandLine * cmdline) { return stub_funcs.ptr_g_application_command_line_get_environ(cmdline); }
const gchar * (g_application_command_line_getenv)(GApplicationCommandLine * cmdline, const gchar * name) { return stub_funcs.ptr_g_application_command_line_getenv(cmdline, name); }
const gchar * (g_application_command_line_get_cwd)(GApplicationCommandLine * cmdline) { return stub_funcs.ptr_g_application_command_line_get_cwd(cmdline); }
gboolean (g_application_command_line_get_is_remote)(GApplicationCommandLine * cmdline) { return stub_funcs.ptr_g_application_command_line_get_is_remote(cmdline); }
void (g_application_command_line_print_literal)(GApplicationCommandLine * cmdline, const gchar * message) { stub_funcs.ptr_g_application_command_line_print_literal(cmdline, message); }
void (g_application_command_line_printerr_literal)(GApplicationCommandLine * cmdline, const gchar * message) { stub_funcs.ptr_g_application_command_line_printerr_literal(cmdline, message); }
int (g_application_command_line_get_exit_status)(GApplicationCommandLine * cmdline) { return stub_funcs.ptr_g_application_command_line_get_exit_status(cmdline); }
void (g_application_command_line_set_exit_status)(GApplicationCommandLine * cmdline, int exit_status) { stub_funcs.ptr_g_application_command_line_set_exit_status(cmdline, exit_status); }
GVariant * (g_application_command_line_get_platform_data)(GApplicationCommandLine * cmdline) { return stub_funcs.ptr_g_application_command_line_get_platform_data(cmdline); }
GFile * (g_application_command_line_create_file_for_arg)(GApplicationCommandLine * cmdline, const gchar * arg) { return stub_funcs.ptr_g_application_command_line_create_file_for_arg(cmdline, arg); }
void (g_application_command_line_done)(GApplicationCommandLine * cmdline) { stub_funcs.ptr_g_application_command_line_done(cmdline); }
GType (g_initable_get_type)(void) { return stub_funcs.ptr_g_initable_get_type(); }
gboolean (g_initable_init)(GInitable * initable, GCancellable * cancellable, GError * * error) { return stub_funcs.ptr_g_initable_init(initable, cancellable, error); }
gpointer g_initable_new(GType object_type, GCancellable *cancellable, GError **error, const gchar *first_property_name, ...) {
    GObject *object;
    va_list var_args;

    va_start(var_args, first_property_name);
    object = stub_funcs.ptr_g_initable_new_valist(object_type, first_property_name, var_args, cancellable, error);

    va_end(var_args);
    return object;
}
gpointer (g_initable_newv)(GType object_type, guint n_parameters, GParameter * parameters, GCancellable * cancellable, GError * * error) { return stub_funcs.ptr_g_initable_newv(object_type, n_parameters, parameters, cancellable, error); }
GObject * (g_initable_new_valist)(GType object_type, const gchar * first_property_name, va_list var_args, GCancellable * cancellable, GError * * error) { return stub_funcs.ptr_g_initable_new_valist(object_type, first_property_name, var_args, cancellable, error); }
GType (g_async_initable_get_type)(void) { return stub_funcs.ptr_g_async_initable_get_type(); }
void (g_async_initable_init_async)(GAsyncInitable * initable, int io_priority, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data) { stub_funcs.ptr_g_async_initable_init_async(initable, io_priority, cancellable, callback, user_data); }
gboolean (g_async_initable_init_finish)(GAsyncInitable * initable, GAsyncResult * res, GError * * error) { return stub_funcs.ptr_g_async_initable_init_finish(initable, res, error); }
void (g_async_initable_newv_async)(GType object_type, guint n_parameters, GParameter * parameters, int io_priority, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data) { stub_funcs.ptr_g_async_initable_newv_async(object_type, n_parameters, parameters, io_priority, cancellable, callback, user_data); }
void (g_async_initable_new_valist_async)(GType object_type, const gchar * first_property_name, va_list var_args, int io_priority, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data) { stub_funcs.ptr_g_async_initable_new_valist_async(object_type, first_property_name, var_args, io_priority, cancellable, callback, user_data); }
GObject * (g_async_initable_new_finish)(GAsyncInitable * initable, GAsyncResult * res, GError * * error) { return stub_funcs.ptr_g_async_initable_new_finish(initable, res, error); }
GType (g_async_result_get_type)(void) { return stub_funcs.ptr_g_async_result_get_type(); }
gpointer (g_async_result_get_user_data)(GAsyncResult * res) { return stub_funcs.ptr_g_async_result_get_user_data(res); }
GObject * (g_async_result_get_source_object)(GAsyncResult * res) { return stub_funcs.ptr_g_async_result_get_source_object(res); }
gboolean (g_async_result_legacy_propagate_error)(GAsyncResult * res, GError * * error) { return stub_funcs.ptr_g_async_result_legacy_propagate_error(res, error); }
gboolean (g_async_result_is_tagged)(GAsyncResult * res, gpointer source_tag) { return stub_funcs.ptr_g_async_result_is_tagged(res, source_tag); }
GType (g_input_stream_get_type)(void) { return stub_funcs.ptr_g_input_stream_get_type(); }
gssize (g_input_stream_read)(GInputStream * stream, void * buffer, gsize count, GCancellable * cancellable, GError * * error) { return stub_funcs.ptr_g_input_stream_read(stream, buffer, count, cancellable, error); }
gboolean (g_input_stream_read_all)(GInputStream * stream, void * buffer, gsize count, gsize * bytes_read, GCancellable * cancellable, GError * * error) { return stub_funcs.ptr_g_input_stream_read_all(stream, buffer, count, bytes_read, cancellable, error); }
GBytes * (g_input_stream_read_bytes)(GInputStream * stream, gsize count, GCancellable * cancellable, GError * * error) { return stub_funcs.ptr_g_input_stream_read_bytes(stream, count, cancellable, error); }
gssize (g_input_stream_skip)(GInputStream * stream, gsize count, GCancellable * cancellable, GError * * error) { return stub_funcs.ptr_g_input_stream_skip(stream, count, cancellable, error); }
gboolean (g_input_stream_close)(GInputStream * stream, GCancellable * cancellable, GError * * error) { return stub_funcs.ptr_g_input_stream_close(stream, cancellable, error); }
void (g_input_stream_read_async)(GInputStream * stream, void * buffer, gsize count, int io_priority, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data) { stub_funcs.ptr_g_input_stream_read_async(stream, buffer, count, io_priority, cancellable, callback, user_data); }
gssize (g_input_stream_read_finish)(GInputStream * stream, GAsyncResult * result, GError * * error) { return stub_funcs.ptr_g_input_stream_read_finish(stream, result, error); }
void (g_input_stream_read_all_async)(GInputStream * stream, void * buffer, gsize count, int io_priority, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data) { stub_funcs.ptr_g_input_stream_read_all_async(stream, buffer, count, io_priority, cancellable, callback, user_data); }
gboolean (g_input_stream_read_all_finish)(GInputStream * stream, GAsyncResult * result, gsize * bytes_read, GError * * error) { return stub_funcs.ptr_g_input_stream_read_all_finish(stream, result, bytes_read, error); }
void (g_input_stream_read_bytes_async)(GInputStream * stream, gsize count, int io_priority, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data) { stub_funcs.ptr_g_input_stream_read_bytes_async(stream, count, io_priority, cancellable, callback, user_data); }
GBytes * (g_input_stream_read_bytes_finish)(GInputStream * stream, GAsyncResult * result, GError * * error) { return stub_funcs.ptr_g_input_stream_read_bytes_finish(stream, result, error); }
void (g_input_stream_skip_async)(GInputStream * stream, gsize count, int io_priority, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data) { stub_funcs.ptr_g_input_stream_skip_async(stream, count, io_priority, cancellable, callback, user_data); }
gssize (g_input_stream_skip_finish)(GInputStream * stream, GAsyncResult * result, GError * * error) { return stub_funcs.ptr_g_input_stream_skip_finish(stream, result, error); }
void (g_input_stream_close_async)(GInputStream * stream, int io_priority, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data) { stub_funcs.ptr_g_input_stream_close_async(stream, io_priority, cancellable, callback, user_data); }
gboolean (g_input_stream_close_finish)(GInputStream * stream, GAsyncResult * result, GError * * error) { return stub_funcs.ptr_g_input_stream_close_finish(stream, result, error); }
gboolean (g_input_stream_is_closed)(GInputStream * stream) { return stub_funcs.ptr_g_input_stream_is_closed(stream); }
gboolean (g_input_stream_has_pending)(GInputStream * stream) { return stub_funcs.ptr_g_input_stream_has_pending(stream); }
gboolean (g_input_stream_set_pending)(GInputStream * stream, GError * * error) { return stub_funcs.ptr_g_input_stream_set_pending(stream, error); }
void (g_input_stream_clear_pending)(GInputStream * stream) { stub_funcs.ptr_g_input_stream_clear_pending(stream); }
GType (g_filter_input_stream_get_type)(void) { return stub_funcs.ptr_g_filter_input_stream_get_type(); }
GInputStream * (g_filter_input_stream_get_base_stream)(GFilterInputStream * stream) { return stub_funcs.ptr_g_filter_input_stream_get_base_stream(stream); }
gboolean (g_filter_input_stream_get_close_base_stream)(GFilterInputStream * stream) { return stub_funcs.ptr_g_filter_input_stream_get_close_base_stream(stream); }
void (g_filter_input_stream_set_close_base_stream)(GFilterInputStream * stream, gboolean close_base) { stub_funcs.ptr_g_filter_input_stream_set_close_base_stream(stream, close_base); }
GType (g_buffered_input_stream_get_type)(void) { return stub_funcs.ptr_g_buffered_input_stream_get_type(); }
GInputStream * (g_buffered_input_stream_new)(GInputStream * base_stream) { return stub_funcs.ptr_g_buffered_input_stream_new(base_stream); }
GInputStream * (g_buffered_input_stream_new_sized)(GInputStream * base_stream, gsize size) { return stub_funcs.ptr_g_buffered_input_stream_new_sized(base_stream, size); }
gsize (g_buffered_input_stream_get_buffer_size)(GBufferedInputStream * stream) { return stub_funcs.ptr_g_buffered_input_stream_get_buffer_size(stream); }
void (g_buffered_input_stream_set_buffer_size)(GBufferedInputStream * stream, gsize size) { stub_funcs.ptr_g_buffered_input_stream_set_buffer_size(stream, size); }
gsize (g_buffered_input_stream_get_available)(GBufferedInputStream * stream) { return stub_funcs.ptr_g_buffered_input_stream_get_available(stream); }
gsize (g_buffered_input_stream_peek)(GBufferedInputStream * stream, void * buffer, gsize offset, gsize count) { return stub_funcs.ptr_g_buffered_input_stream_peek(stream, buffer, offset, count); }
const void * (g_buffered_input_stream_peek_buffer)(GBufferedInputStream * stream, gsize * count) { return stub_funcs.ptr_g_buffered_input_stream_peek_buffer(stream, count); }
gssize (g_buffered_input_stream_fill)(GBufferedInputStream * stream, gssize count, GCancellable * cancellable, GError * * error) { return stub_funcs.ptr_g_buffered_input_stream_fill(stream, count, cancellable, error); }
void (g_buffered_input_stream_fill_async)(GBufferedInputStream * stream, gssize count, int io_priority, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data) { stub_funcs.ptr_g_buffered_input_stream_fill_async(stream, count, io_priority, cancellable, callback, user_data); }
gssize (g_buffered_input_stream_fill_finish)(GBufferedInputStream * stream, GAsyncResult * result, GError * * error) { return stub_funcs.ptr_g_buffered_input_stream_fill_finish(stream, result, error); }
int (g_buffered_input_stream_read_byte)(GBufferedInputStream * stream, GCancellable * cancellable, GError * * error) { return stub_funcs.ptr_g_buffered_input_stream_read_byte(stream, cancellable, error); }
GType (g_output_stream_get_type)(void) { return stub_funcs.ptr_g_output_stream_get_type(); }
gssize (g_output_stream_write)(GOutputStream * stream, const void * buffer, gsize count, GCancellable * cancellable, GError * * error) { return stub_funcs.ptr_g_output_stream_write(stream, buffer, count, cancellable, error); }
gboolean (g_output_stream_write_all)(GOutputStream * stream, const void * buffer, gsize count, gsize * bytes_written, GCancellable * cancellable, GError * * error) { return stub_funcs.ptr_g_output_stream_write_all(stream, buffer, count, bytes_written, cancellable, error); }
gboolean (g_output_stream_writev)(GOutputStream * stream, const GOutputVector * vectors, gsize n_vectors, gsize * bytes_written, GCancellable * cancellable, GError * * error) { return stub_funcs.ptr_g_output_stream_writev(stream, vectors, n_vectors, bytes_written, cancellable, error); }
gboolean (g_output_stream_writev_all)(GOutputStream * stream, GOutputVector * vectors, gsize n_vectors, gsize * bytes_written, GCancellable * cancellable, GError * * error) { return stub_funcs.ptr_g_output_stream_writev_all(stream, vectors, n_vectors, bytes_written, cancellable, error); }
gboolean (g_output_stream_printf)(GOutputStream * stream, gsize * bytes_written, GCancellable * cancellable, GError * * error, const gchar * format, ...) { gboolean ret; va_list vaargs; va_start(vaargs, format); ret = stub_funcs.ptr_g_output_stream_vprintf(stream, bytes_written, cancellable, error, format, vaargs); va_end(vaargs); return ret; }
gboolean (g_output_stream_vprintf)(GOutputStream * stream, gsize * bytes_written, GCancellable * cancellable, GError * * error, const gchar * format, va_list args) { return stub_funcs.ptr_g_output_stream_vprintf(stream, bytes_written, cancellable, error, format, args); }
gssize (g_output_stream_write_bytes)(GOutputStream * stream, GBytes * bytes, GCancellable * cancellable, GError * * error) { return stub_funcs.ptr_g_output_stream_write_bytes(stream, bytes, cancellable, error); }
gssize (g_output_stream_splice)(GOutputStream * stream, GInputStream * source, GOutputStreamSpliceFlags flags, GCancellable * cancellable, GError * * error) { return stub_funcs.ptr_g_output_stream_splice(stream, source, flags, cancellable, error); }
gboolean (g_output_stream_flush)(GOutputStream * stream, GCancellable * cancellable, GError * * error) { return stub_funcs.ptr_g_output_stream_flush(stream, cancellable, error); }
gboolean (g_output_stream_close)(GOutputStream * stream, GCancellable * cancellable, GError * * error) { return stub_funcs.ptr_g_output_stream_close(stream, cancellable, error); }
void (g_output_stream_write_async)(GOutputStream * stream, const void * buffer, gsize count, int io_priority, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data) { stub_funcs.ptr_g_output_stream_write_async(stream, buffer, count, io_priority, cancellable, callback, user_data); }
gssize (g_output_stream_write_finish)(GOutputStream * stream, GAsyncResult * result, GError * * error) { return stub_funcs.ptr_g_output_stream_write_finish(stream, result, error); }
void (g_output_stream_write_all_async)(GOutputStream * stream, const void * buffer, gsize count, int io_priority, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data) { stub_funcs.ptr_g_output_stream_write_all_async(stream, buffer, count, io_priority, cancellable, callback, user_data); }
gboolean (g_output_stream_write_all_finish)(GOutputStream * stream, GAsyncResult * result, gsize * bytes_written, GError * * error) { return stub_funcs.ptr_g_output_stream_write_all_finish(stream, result, bytes_written, error); }
void (g_output_stream_writev_async)(GOutputStream * stream, const GOutputVector * vectors, gsize n_vectors, int io_priority, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data) { stub_funcs.ptr_g_output_stream_writev_async(stream, vectors, n_vectors, io_priority, cancellable, callback, user_data); }
gboolean (g_output_stream_writev_finish)(GOutputStream * stream, GAsyncResult * result, gsize * bytes_written, GError * * error) { return stub_funcs.ptr_g_output_stream_writev_finish(stream, result, bytes_written, error); }
void (g_output_stream_writev_all_async)(GOutputStream * stream, GOutputVector * vectors, gsize n_vectors, int io_priority, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data) { stub_funcs.ptr_g_output_stream_writev_all_async(stream, vectors, n_vectors, io_priority, cancellable, callback, user_data); }
gboolean (g_output_stream_writev_all_finish)(GOutputStream * stream, GAsyncResult * result, gsize * bytes_written, GError * * error) { return stub_funcs.ptr_g_output_stream_writev_all_finish(stream, result, bytes_written, error); }
void (g_output_stream_write_bytes_async)(GOutputStream * stream, GBytes * bytes, int io_priority, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data) { stub_funcs.ptr_g_output_stream_write_bytes_async(stream, bytes, io_priority, cancellable, callback, user_data); }
gssize (g_output_stream_write_bytes_finish)(GOutputStream * stream, GAsyncResult * result, GError * * error) { return stub_funcs.ptr_g_output_stream_write_bytes_finish(stream, result, error); }
void (g_output_stream_splice_async)(GOutputStream * stream, GInputStream * source, GOutputStreamSpliceFlags flags, int io_priority, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data) { stub_funcs.ptr_g_output_stream_splice_async(stream, source, flags, io_priority, cancellable, callback, user_data); }
gssize (g_output_stream_splice_finish)(GOutputStream * stream, GAsyncResult * result, GError * * error) { return stub_funcs.ptr_g_output_stream_splice_finish(stream, result, error); }
void (g_output_stream_flush_async)(GOutputStream * stream, int io_priority, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data) { stub_funcs.ptr_g_output_stream_flush_async(stream, io_priority, cancellable, callback, user_data); }
gboolean (g_output_stream_flush_finish)(GOutputStream * stream, GAsyncResult * result, GError * * error) { return stub_funcs.ptr_g_output_stream_flush_finish(stream, result, error); }
void (g_output_stream_close_async)(GOutputStream * stream, int io_priority, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data) { stub_funcs.ptr_g_output_stream_close_async(stream, io_priority, cancellable, callback, user_data); }
gboolean (g_output_stream_close_finish)(GOutputStream * stream, GAsyncResult * result, GError * * error) { return stub_funcs.ptr_g_output_stream_close_finish(stream, result, error); }
gboolean (g_output_stream_is_closed)(GOutputStream * stream) { return stub_funcs.ptr_g_output_stream_is_closed(stream); }
gboolean (g_output_stream_is_closing)(GOutputStream * stream) { return stub_funcs.ptr_g_output_stream_is_closing(stream); }
gboolean (g_output_stream_has_pending)(GOutputStream * stream) { return stub_funcs.ptr_g_output_stream_has_pending(stream); }
gboolean (g_output_stream_set_pending)(GOutputStream * stream, GError * * error) { return stub_funcs.ptr_g_output_stream_set_pending(stream, error); }
void (g_output_stream_clear_pending)(GOutputStream * stream) { stub_funcs.ptr_g_output_stream_clear_pending(stream); }
GType (g_filter_output_stream_get_type)(void) { return stub_funcs.ptr_g_filter_output_stream_get_type(); }
GOutputStream * (g_filter_output_stream_get_base_stream)(GFilterOutputStream * stream) { return stub_funcs.ptr_g_filter_output_stream_get_base_stream(stream); }
gboolean (g_filter_output_stream_get_close_base_stream)(GFilterOutputStream * stream) { return stub_funcs.ptr_g_filter_output_stream_get_close_base_stream(stream); }
void (g_filter_output_stream_set_close_base_stream)(GFilterOutputStream * stream, gboolean close_base) { stub_funcs.ptr_g_filter_output_stream_set_close_base_stream(stream, close_base); }
GType (g_buffered_output_stream_get_type)(void) { return stub_funcs.ptr_g_buffered_output_stream_get_type(); }
GOutputStream * (g_buffered_output_stream_new)(GOutputStream * base_stream) { return stub_funcs.ptr_g_buffered_output_stream_new(base_stream); }
GOutputStream * (g_buffered_output_stream_new_sized)(GOutputStream * base_stream, gsize size) { return stub_funcs.ptr_g_buffered_output_stream_new_sized(base_stream, size); }
gsize (g_buffered_output_stream_get_buffer_size)(GBufferedOutputStream * stream) { return stub_funcs.ptr_g_buffered_output_stream_get_buffer_size(stream); }
void (g_buffered_output_stream_set_buffer_size)(GBufferedOutputStream * stream, gsize size) { stub_funcs.ptr_g_buffered_output_stream_set_buffer_size(stream, size); }
gboolean (g_buffered_output_stream_get_auto_grow)(GBufferedOutputStream * stream) { return stub_funcs.ptr_g_buffered_output_stream_get_auto_grow(stream); }
void (g_buffered_output_stream_set_auto_grow)(GBufferedOutputStream * stream, gboolean auto_grow) { stub_funcs.ptr_g_buffered_output_stream_set_auto_grow(stream, auto_grow); }
GType (g_bytes_icon_get_type)(void) { return stub_funcs.ptr_g_bytes_icon_get_type(); }
GIcon * (g_bytes_icon_new)(GBytes * bytes) { return stub_funcs.ptr_g_bytes_icon_new(bytes); }
GBytes * (g_bytes_icon_get_bytes)(GBytesIcon * icon) { return stub_funcs.ptr_g_bytes_icon_get_bytes(icon); }
GType (g_cancellable_get_type)(void) { return stub_funcs.ptr_g_cancellable_get_type(); }
GCancellable * (g_cancellable_new)(void) { return stub_funcs.ptr_g_cancellable_new(); }
gboolean (g_cancellable_is_cancelled)(GCancellable * cancellable) { return stub_funcs.ptr_g_cancellable_is_cancelled(cancellable); }
gboolean (g_cancellable_set_error_if_cancelled)(GCancellable * cancellable, GError * * error) { return stub_funcs.ptr_g_cancellable_set_error_if_cancelled(cancellable, error); }
int (g_cancellable_get_fd)(GCancellable * cancellable) { return stub_funcs.ptr_g_cancellable_get_fd(cancellable); }
gboolean (g_cancellable_make_pollfd)(GCancellable * cancellable, GPollFD * pollfd) { return stub_funcs.ptr_g_cancellable_make_pollfd(cancellable, pollfd); }
void (g_cancellable_release_fd)(GCancellable * cancellable) { stub_funcs.ptr_g_cancellable_release_fd(cancellable); }
GSource * (g_cancellable_source_new)(GCancellable * cancellable) { return stub_funcs.ptr_g_cancellable_source_new(cancellable); }
GCancellable * (g_cancellable_get_current)(void) { return stub_funcs.ptr_g_cancellable_get_current(); }
void (g_cancellable_push_current)(GCancellable * cancellable) { stub_funcs.ptr_g_cancellable_push_current(cancellable); }
void (g_cancellable_pop_current)(GCancellable * cancellable) { stub_funcs.ptr_g_cancellable_pop_current(cancellable); }
void (g_cancellable_reset)(GCancellable * cancellable) { stub_funcs.ptr_g_cancellable_reset(cancellable); }
gulong (g_cancellable_connect)(GCancellable * cancellable, GCallback callback, gpointer data, GDestroyNotify data_destroy_func) { return stub_funcs.ptr_g_cancellable_connect(cancellable, callback, data, data_destroy_func); }
void (g_cancellable_disconnect)(GCancellable * cancellable, gulong handler_id) { stub_funcs.ptr_g_cancellable_disconnect(cancellable, handler_id); }
void (g_cancellable_cancel)(GCancellable * cancellable) { stub_funcs.ptr_g_cancellable_cancel(cancellable); }
GType (g_converter_get_type)(void) { return stub_funcs.ptr_g_converter_get_type(); }
GConverterResult (g_converter_convert)(GConverter * converter, const void * inbuf, gsize inbuf_size, void * outbuf, gsize outbuf_size, GConverterFlags flags, gsize * bytes_read, gsize * bytes_written, GError * * error) { return stub_funcs.ptr_g_converter_convert(converter, inbuf, inbuf_size, outbuf, outbuf_size, flags, bytes_read, bytes_written, error); }
void (g_converter_reset)(GConverter * converter) { stub_funcs.ptr_g_converter_reset(converter); }
GBytes * (g_converter_convert_bytes)(GConverter * converter, GBytes * bytes, GError * * error) { return stub_funcs.ptr_g_converter_convert_bytes(converter, bytes, error); }
GType (g_charset_converter_get_type)(void) { return stub_funcs.ptr_g_charset_converter_get_type(); }
GCharsetConverter * (g_charset_converter_new)(const gchar * to_charset, const gchar * from_charset, GError * * error) { return stub_funcs.ptr_g_charset_converter_new(to_charset, from_charset, error); }
void (g_charset_converter_set_use_fallback)(GCharsetConverter * converter, gboolean use_fallback) { stub_funcs.ptr_g_charset_converter_set_use_fallback(converter, use_fallback); }
gboolean (g_charset_converter_get_use_fallback)(GCharsetConverter * converter) { return stub_funcs.ptr_g_charset_converter_get_use_fallback(converter); }
guint (g_charset_converter_get_num_fallbacks)(GCharsetConverter * converter) { return stub_funcs.ptr_g_charset_converter_get_num_fallbacks(converter); }
gboolean (g_content_type_equals)(const gchar * type1, const gchar * type2) { return stub_funcs.ptr_g_content_type_equals(type1, type2); }
gboolean (g_content_type_is_a)(const gchar * type, const gchar * supertype) { return stub_funcs.ptr_g_content_type_is_a(type, supertype); }
gboolean (g_content_type_is_mime_type)(const gchar * type, const gchar * mime_type) { return stub_funcs.ptr_g_content_type_is_mime_type(type, mime_type); }
gboolean (g_content_type_is_unknown)(const gchar * type) { return stub_funcs.ptr_g_content_type_is_unknown(type); }
gchar * (g_content_type_get_description)(const gchar * type) { return stub_funcs.ptr_g_content_type_get_description(type); }
gchar * (g_content_type_get_mime_type)(const gchar * type) { return stub_funcs.ptr_g_content_type_get_mime_type(type); }
GIcon * (g_content_type_get_icon)(const gchar * type) { return stub_funcs.ptr_g_content_type_get_icon(type); }
GIcon * (g_content_type_get_symbolic_icon)(const gchar * type) { return stub_funcs.ptr_g_content_type_get_symbolic_icon(type); }
gchar * (g_content_type_get_generic_icon_name)(const gchar * type) { return stub_funcs.ptr_g_content_type_get_generic_icon_name(type); }
gboolean (g_content_type_can_be_executable)(const gchar * type) { return stub_funcs.ptr_g_content_type_can_be_executable(type); }
gchar * (g_content_type_from_mime_type)(const gchar * mime_type) { return stub_funcs.ptr_g_content_type_from_mime_type(mime_type); }
gchar * (g_content_type_guess)(const gchar * filename, const guchar * data, gsize data_size, gboolean * result_uncertain) { return stub_funcs.ptr_g_content_type_guess(filename, data, data_size, result_uncertain); }
gchar * * (g_content_type_guess_for_tree)(GFile * root) { return stub_funcs.ptr_g_content_type_guess_for_tree(root); }
GList * (g_content_types_get_registered)(void) { return stub_funcs.ptr_g_content_types_get_registered(); }
const gchar * const * (g_content_type_get_mime_dirs)(void) { return stub_funcs.ptr_g_content_type_get_mime_dirs(); }
void (g_content_type_set_mime_dirs)(const gchar * const * dirs) { stub_funcs.ptr_g_content_type_set_mime_dirs(dirs); }
GType (g_converter_input_stream_get_type)(void) { return stub_funcs.ptr_g_converter_input_stream_get_type(); }
GInputStream * (g_converter_input_stream_new)(GInputStream * base_stream, GConverter * converter) { return stub_funcs.ptr_g_converter_input_stream_new(base_stream, converter); }
GConverter * (g_converter_input_stream_get_converter)(GConverterInputStream * converter_stream) { return stub_funcs.ptr_g_converter_input_stream_get_converter(converter_stream); }
GType (g_converter_output_stream_get_type)(void) { return stub_funcs.ptr_g_converter_output_stream_get_type(); }
GOutputStream * (g_converter_output_stream_new)(GOutputStream * base_stream, GConverter * converter) { return stub_funcs.ptr_g_converter_output_stream_new(base_stream, converter); }
GConverter * (g_converter_output_stream_get_converter)(GConverterOutputStream * converter_stream) { return stub_funcs.ptr_g_converter_output_stream_get_converter(converter_stream); }
GType (g_credentials_get_type)(void) { return stub_funcs.ptr_g_credentials_get_type(); }
GCredentials * (g_credentials_new)(void) { return stub_funcs.ptr_g_credentials_new(); }
gchar * (g_credentials_to_string)(GCredentials * credentials) { return stub_funcs.ptr_g_credentials_to_string(credentials); }
gpointer (g_credentials_get_native)(GCredentials * credentials, GCredentialsType native_type) { return stub_funcs.ptr_g_credentials_get_native(credentials, native_type); }
void (g_credentials_set_native)(GCredentials * credentials, GCredentialsType native_type, gpointer native) { stub_funcs.ptr_g_credentials_set_native(credentials, native_type, native); }
gboolean (g_credentials_is_same_user)(GCredentials * credentials, GCredentials * other_credentials, GError * * error) { return stub_funcs.ptr_g_credentials_is_same_user(credentials, other_credentials, error); }
pid_t (g_credentials_get_unix_pid)(GCredentials * credentials, GError * * error) { return stub_funcs.ptr_g_credentials_get_unix_pid(credentials, error); }
uid_t (g_credentials_get_unix_user)(GCredentials * credentials, GError * * error) { return stub_funcs.ptr_g_credentials_get_unix_user(credentials, error); }
gboolean (g_credentials_set_unix_user)(GCredentials * credentials, uid_t uid, GError * * error) { return stub_funcs.ptr_g_credentials_set_unix_user(credentials, uid, error); }
GType (g_datagram_based_get_type)(void) { return stub_funcs.ptr_g_datagram_based_get_type(); }
gint (g_datagram_based_receive_messages)(GDatagramBased * datagram_based, GInputMessage * messages, guint num_messages, gint flags, gint64 timeout, GCancellable * cancellable, GError * * error) { return stub_funcs.ptr_g_datagram_based_receive_messages(datagram_based, messages, num_messages, flags, timeout, cancellable, error); }
gint (g_datagram_based_send_messages)(GDatagramBased * datagram_based, GOutputMessage * messages, guint num_messages, gint flags, gint64 timeout, GCancellable * cancellable, GError * * error) { return stub_funcs.ptr_g_datagram_based_send_messages(datagram_based, messages, num_messages, flags, timeout, cancellable, error); }
GSource * (g_datagram_based_create_source)(GDatagramBased * datagram_based, GIOCondition condition, GCancellable * cancellable) { return stub_funcs.ptr_g_datagram_based_create_source(datagram_based, condition, cancellable); }
GIOCondition (g_datagram_based_condition_check)(GDatagramBased * datagram_based, GIOCondition condition) { return stub_funcs.ptr_g_datagram_based_condition_check(datagram_based, condition); }
gboolean (g_datagram_based_condition_wait)(GDatagramBased * datagram_based, GIOCondition condition, gint64 timeout, GCancellable * cancellable, GError * * error) { return stub_funcs.ptr_g_datagram_based_condition_wait(datagram_based, condition, timeout, cancellable, error); }
GType (g_data_input_stream_get_type)(void) { return stub_funcs.ptr_g_data_input_stream_get_type(); }
GDataInputStream * (g_data_input_stream_new)(GInputStream * base_stream) { return stub_funcs.ptr_g_data_input_stream_new(base_stream); }
void (g_data_input_stream_set_byte_order)(GDataInputStream * stream, GDataStreamByteOrder order) { stub_funcs.ptr_g_data_input_stream_set_byte_order(stream, order); }
GDataStreamByteOrder (g_data_input_stream_get_byte_order)(GDataInputStream * stream) { return stub_funcs.ptr_g_data_input_stream_get_byte_order(stream); }
void (g_data_input_stream_set_newline_type)(GDataInputStream * stream, GDataStreamNewlineType type) { stub_funcs.ptr_g_data_input_stream_set_newline_type(stream, type); }
GDataStreamNewlineType (g_data_input_stream_get_newline_type)(GDataInputStream * stream) { return stub_funcs.ptr_g_data_input_stream_get_newline_type(stream); }
guchar (g_data_input_stream_read_byte)(GDataInputStream * stream, GCancellable * cancellable, GError * * error) { return stub_funcs.ptr_g_data_input_stream_read_byte(stream, cancellable, error); }
gint16 (g_data_input_stream_read_int16)(GDataInputStream * stream, GCancellable * cancellable, GError * * error) { return stub_funcs.ptr_g_data_input_stream_read_int16(stream, cancellable, error); }
guint16 (g_data_input_stream_read_uint16)(GDataInputStream * stream, GCancellable * cancellable, GError * * error) { return stub_funcs.ptr_g_data_input_stream_read_uint16(stream, cancellable, error); }
gint32 (g_data_input_stream_read_int32)(GDataInputStream * stream, GCancellable * cancellable, GError * * error) { return stub_funcs.ptr_g_data_input_stream_read_int32(stream, cancellable, error); }
guint32 (g_data_input_stream_read_uint32)(GDataInputStream * stream, GCancellable * cancellable, GError * * error) { return stub_funcs.ptr_g_data_input_stream_read_uint32(stream, cancellable, error); }
gint64 (g_data_input_stream_read_int64)(GDataInputStream * stream, GCancellable * cancellable, GError * * error) { return stub_funcs.ptr_g_data_input_stream_read_int64(stream, cancellable, error); }
guint64 (g_data_input_stream_read_uint64)(GDataInputStream * stream, GCancellable * cancellable, GError * * error) { return stub_funcs.ptr_g_data_input_stream_read_uint64(stream, cancellable, error); }
char * (g_data_input_stream_read_line)(GDataInputStream * stream, gsize * length, GCancellable * cancellable, GError * * error) { return stub_funcs.ptr_g_data_input_stream_read_line(stream, length, cancellable, error); }
char * (g_data_input_stream_read_line_utf8)(GDataInputStream * stream, gsize * length, GCancellable * cancellable, GError * * error) { return stub_funcs.ptr_g_data_input_stream_read_line_utf8(stream, length, cancellable, error); }
void (g_data_input_stream_read_line_async)(GDataInputStream * stream, gint io_priority, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data) { stub_funcs.ptr_g_data_input_stream_read_line_async(stream, io_priority, cancellable, callback, user_data); }
char * (g_data_input_stream_read_line_finish)(GDataInputStream * stream, GAsyncResult * result, gsize * length, GError * * error) { return stub_funcs.ptr_g_data_input_stream_read_line_finish(stream, result, length, error); }
char * (g_data_input_stream_read_line_finish_utf8)(GDataInputStream * stream, GAsyncResult * result, gsize * length, GError * * error) { return stub_funcs.ptr_g_data_input_stream_read_line_finish_utf8(stream, result, length, error); }
char * (g_data_input_stream_read_until)(GDataInputStream * stream, const gchar * stop_chars, gsize * length, GCancellable * cancellable, GError * * error) { return stub_funcs.ptr_g_data_input_stream_read_until(stream, stop_chars, length, cancellable, error); }
void (g_data_input_stream_read_until_async)(GDataInputStream * stream, const gchar * stop_chars, gint io_priority, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data) { stub_funcs.ptr_g_data_input_stream_read_until_async(stream, stop_chars, io_priority, cancellable, callback, user_data); }
char * (g_data_input_stream_read_until_finish)(GDataInputStream * stream, GAsyncResult * result, gsize * length, GError * * error) { return stub_funcs.ptr_g_data_input_stream_read_until_finish(stream, result, length, error); }
char * (g_data_input_stream_read_upto)(GDataInputStream * stream, const gchar * stop_chars, gssize stop_chars_len, gsize * length, GCancellable * cancellable, GError * * error) { return stub_funcs.ptr_g_data_input_stream_read_upto(stream, stop_chars, stop_chars_len, length, cancellable, error); }
void (g_data_input_stream_read_upto_async)(GDataInputStream * stream, const gchar * stop_chars, gssize stop_chars_len, gint io_priority, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data) { stub_funcs.ptr_g_data_input_stream_read_upto_async(stream, stop_chars, stop_chars_len, io_priority, cancellable, callback, user_data); }
char * (g_data_input_stream_read_upto_finish)(GDataInputStream * stream, GAsyncResult * result, gsize * length, GError * * error) { return stub_funcs.ptr_g_data_input_stream_read_upto_finish(stream, result, length, error); }
GType (g_data_output_stream_get_type)(void) { return stub_funcs.ptr_g_data_output_stream_get_type(); }
GDataOutputStream * (g_data_output_stream_new)(GOutputStream * base_stream) { return stub_funcs.ptr_g_data_output_stream_new(base_stream); }
void (g_data_output_stream_set_byte_order)(GDataOutputStream * stream, GDataStreamByteOrder order) { stub_funcs.ptr_g_data_output_stream_set_byte_order(stream, order); }
GDataStreamByteOrder (g_data_output_stream_get_byte_order)(GDataOutputStream * stream) { return stub_funcs.ptr_g_data_output_stream_get_byte_order(stream); }
gboolean (g_data_output_stream_put_byte)(GDataOutputStream * stream, guchar data, GCancellable * cancellable, GError * * error) { return stub_funcs.ptr_g_data_output_stream_put_byte(stream, data, cancellable, error); }
gboolean (g_data_output_stream_put_int16)(GDataOutputStream * stream, gint16 data, GCancellable * cancellable, GError * * error) { return stub_funcs.ptr_g_data_output_stream_put_int16(stream, data, cancellable, error); }
gboolean (g_data_output_stream_put_uint16)(GDataOutputStream * stream, guint16 data, GCancellable * cancellable, GError * * error) { return stub_funcs.ptr_g_data_output_stream_put_uint16(stream, data, cancellable, error); }
gboolean (g_data_output_stream_put_int32)(GDataOutputStream * stream, gint32 data, GCancellable * cancellable, GError * * error) { return stub_funcs.ptr_g_data_output_stream_put_int32(stream, data, cancellable, error); }
gboolean (g_data_output_stream_put_uint32)(GDataOutputStream * stream, guint32 data, GCancellable * cancellable, GError * * error) { return stub_funcs.ptr_g_data_output_stream_put_uint32(stream, data, cancellable, error); }
gboolean (g_data_output_stream_put_int64)(GDataOutputStream * stream, gint64 data, GCancellable * cancellable, GError * * error) { return stub_funcs.ptr_g_data_output_stream_put_int64(stream, data, cancellable, error); }
gboolean (g_data_output_stream_put_uint64)(GDataOutputStream * stream, guint64 data, GCancellable * cancellable, GError * * error) { return stub_funcs.ptr_g_data_output_stream_put_uint64(stream, data, cancellable, error); }
gboolean (g_data_output_stream_put_string)(GDataOutputStream * stream, const char * str, GCancellable * cancellable, GError * * error) { return stub_funcs.ptr_g_data_output_stream_put_string(stream, str, cancellable, error); }
GType (g_dbus_action_group_get_type)(void) { return stub_funcs.ptr_g_dbus_action_group_get_type(); }
GDBusActionGroup * (g_dbus_action_group_get)(GDBusConnection * connection, const gchar * bus_name, const gchar * object_path) { return stub_funcs.ptr_g_dbus_action_group_get(connection, bus_name, object_path); }
gchar * (g_dbus_address_escape_value)(const gchar * string) { return stub_funcs.ptr_g_dbus_address_escape_value(string); }
gboolean (g_dbus_is_address)(const gchar * string) { return stub_funcs.ptr_g_dbus_is_address(string); }
gboolean (g_dbus_is_supported_address)(const gchar * string, GError * * error) { return stub_funcs.ptr_g_dbus_is_supported_address(string, error); }
void (g_dbus_address_get_stream)(const gchar * address, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data) { stub_funcs.ptr_g_dbus_address_get_stream(address, cancellable, callback, user_data); }
GIOStream * (g_dbus_address_get_stream_finish)(GAsyncResult * res, gchar * * out_guid, GError * * error) { return stub_funcs.ptr_g_dbus_address_get_stream_finish(res, out_guid, error); }
GIOStream * (g_dbus_address_get_stream_sync)(const gchar * address, gchar * * out_guid, GCancellable * cancellable, GError * * error) { return stub_funcs.ptr_g_dbus_address_get_stream_sync(address, out_guid, cancellable, error); }
gchar * (g_dbus_address_get_for_bus_sync)(GBusType bus_type, GCancellable * cancellable, GError * * error) { return stub_funcs.ptr_g_dbus_address_get_for_bus_sync(bus_type, cancellable, error); }
GType (g_dbus_auth_observer_get_type)(void) { return stub_funcs.ptr_g_dbus_auth_observer_get_type(); }
GDBusAuthObserver * (g_dbus_auth_observer_new)(void) { return stub_funcs.ptr_g_dbus_auth_observer_new(); }
gboolean (g_dbus_auth_observer_authorize_authenticated_peer)(GDBusAuthObserver * observer, GIOStream * stream, GCredentials * credentials) { return stub_funcs.ptr_g_dbus_auth_observer_authorize_authenticated_peer(observer, stream, credentials); }
gboolean (g_dbus_auth_observer_allow_mechanism)(GDBusAuthObserver * observer, const gchar * mechanism) { return stub_funcs.ptr_g_dbus_auth_observer_allow_mechanism(observer, mechanism); }
GType (g_dbus_connection_get_type)(void) { return stub_funcs.ptr_g_dbus_connection_get_type(); }
void (g_bus_get)(GBusType bus_type, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data) { stub_funcs.ptr_g_bus_get(bus_type, cancellable, callback, user_data); }
GDBusConnection * (g_bus_get_finish)(GAsyncResult * res, GError * * error) { return stub_funcs.ptr_g_bus_get_finish(res, error); }
GDBusConnection * (g_bus_get_sync)(GBusType bus_type, GCancellable * cancellable, GError * * error) { return stub_funcs.ptr_g_bus_get_sync(bus_type, cancellable, error); }
void (g_dbus_connection_new)(GIOStream * stream, const gchar * guid, GDBusConnectionFlags flags, GDBusAuthObserver * observer, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data) { stub_funcs.ptr_g_dbus_connection_new(stream, guid, flags, observer, cancellable, callback, user_data); }
GDBusConnection * (g_dbus_connection_new_finish)(GAsyncResult * res, GError * * error) { return stub_funcs.ptr_g_dbus_connection_new_finish(res, error); }
GDBusConnection * (g_dbus_connection_new_sync)(GIOStream * stream, const gchar * guid, GDBusConnectionFlags flags, GDBusAuthObserver * observer, GCancellable * cancellable, GError * * error) { return stub_funcs.ptr_g_dbus_connection_new_sync(stream, guid, flags, observer, cancellable, error); }
void (g_dbus_connection_new_for_address)(const gchar * address, GDBusConnectionFlags flags, GDBusAuthObserver * observer, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data) { stub_funcs.ptr_g_dbus_connection_new_for_address(address, flags, observer, cancellable, callback, user_data); }
GDBusConnection * (g_dbus_connection_new_for_address_finish)(GAsyncResult * res, GError * * error) { return stub_funcs.ptr_g_dbus_connection_new_for_address_finish(res, error); }
GDBusConnection * (g_dbus_connection_new_for_address_sync)(const gchar * address, GDBusConnectionFlags flags, GDBusAuthObserver * observer, GCancellable * cancellable, GError * * error) { return stub_funcs.ptr_g_dbus_connection_new_for_address_sync(address, flags, observer, cancellable, error); }
void (g_dbus_connection_start_message_processing)(GDBusConnection * connection) { stub_funcs.ptr_g_dbus_connection_start_message_processing(connection); }
gboolean (g_dbus_connection_is_closed)(GDBusConnection * connection) { return stub_funcs.ptr_g_dbus_connection_is_closed(connection); }
GIOStream * (g_dbus_connection_get_stream)(GDBusConnection * connection) { return stub_funcs.ptr_g_dbus_connection_get_stream(connection); }
const gchar * (g_dbus_connection_get_guid)(GDBusConnection * connection) { return stub_funcs.ptr_g_dbus_connection_get_guid(connection); }
const gchar * (g_dbus_connection_get_unique_name)(GDBusConnection * connection) { return stub_funcs.ptr_g_dbus_connection_get_unique_name(connection); }
GCredentials * (g_dbus_connection_get_peer_credentials)(GDBusConnection * connection) { return stub_funcs.ptr_g_dbus_connection_get_peer_credentials(connection); }
guint32 (g_dbus_connection_get_last_serial)(GDBusConnection * connection) { return stub_funcs.ptr_g_dbus_connection_get_last_serial(connection); }
gboolean (g_dbus_connection_get_exit_on_close)(GDBusConnection * connection) { return stub_funcs.ptr_g_dbus_connection_get_exit_on_close(connection); }
void (g_dbus_connection_set_exit_on_close)(GDBusConnection * connection, gboolean exit_on_close) { stub_funcs.ptr_g_dbus_connection_set_exit_on_close(connection, exit_on_close); }
GDBusCapabilityFlags (g_dbus_connection_get_capabilities)(GDBusConnection * connection) { return stub_funcs.ptr_g_dbus_connection_get_capabilities(connection); }
GDBusConnectionFlags (g_dbus_connection_get_flags)(GDBusConnection * connection) { return stub_funcs.ptr_g_dbus_connection_get_flags(connection); }
void (g_dbus_connection_close)(GDBusConnection * connection, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data) { stub_funcs.ptr_g_dbus_connection_close(connection, cancellable, callback, user_data); }
gboolean (g_dbus_connection_close_finish)(GDBusConnection * connection, GAsyncResult * res, GError * * error) { return stub_funcs.ptr_g_dbus_connection_close_finish(connection, res, error); }
gboolean (g_dbus_connection_close_sync)(GDBusConnection * connection, GCancellable * cancellable, GError * * error) { return stub_funcs.ptr_g_dbus_connection_close_sync(connection, cancellable, error); }
void (g_dbus_connection_flush)(GDBusConnection * connection, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data) { stub_funcs.ptr_g_dbus_connection_flush(connection, cancellable, callback, user_data); }
gboolean (g_dbus_connection_flush_finish)(GDBusConnection * connection, GAsyncResult * res, GError * * error) { return stub_funcs.ptr_g_dbus_connection_flush_finish(connection, res, error); }
gboolean (g_dbus_connection_flush_sync)(GDBusConnection * connection, GCancellable * cancellable, GError * * error) { return stub_funcs.ptr_g_dbus_connection_flush_sync(connection, cancellable, error); }
gboolean (g_dbus_connection_send_message)(GDBusConnection * connection, GDBusMessage * message, GDBusSendMessageFlags flags, volatile guint32 * out_serial, GError * * error) { return stub_funcs.ptr_g_dbus_connection_send_message(connection, message, flags, out_serial, error); }
void (g_dbus_connection_send_message_with_reply)(GDBusConnection * connection, GDBusMessage * message, GDBusSendMessageFlags flags, gint timeout_msec, volatile guint32 * out_serial, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data) { stub_funcs.ptr_g_dbus_connection_send_message_with_reply(connection, message, flags, timeout_msec, out_serial, cancellable, callback, user_data); }
GDBusMessage * (g_dbus_connection_send_message_with_reply_finish)(GDBusConnection * connection, GAsyncResult * res, GError * * error) { return stub_funcs.ptr_g_dbus_connection_send_message_with_reply_finish(connection, res, error); }
GDBusMessage * (g_dbus_connection_send_message_with_reply_sync)(GDBusConnection * connection, GDBusMessage * message, GDBusSendMessageFlags flags, gint timeout_msec, volatile guint32 * out_serial, GCancellable * cancellable, GError * * error) { return stub_funcs.ptr_g_dbus_connection_send_message_with_reply_sync(connection, message, flags, timeout_msec, out_serial, cancellable, error); }
gboolean (g_dbus_connection_emit_signal)(GDBusConnection * connection, const gchar * destination_bus_name, const gchar * object_path, const gchar * interface_name, const gchar * signal_name, GVariant * parameters, GError * * error) { return stub_funcs.ptr_g_dbus_connection_emit_signal(connection, destination_bus_name, object_path, interface_name, signal_name, parameters, error); }
void (g_dbus_connection_call)(GDBusConnection * connection, const gchar * bus_name, const gchar * object_path, const gchar * interface_name, const gchar * method_name, GVariant * parameters, const GVariantType * reply_type, GDBusCallFlags flags, gint timeout_msec, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data) { stub_funcs.ptr_g_dbus_connection_call(connection, bus_name, object_path, interface_name, method_name, parameters, reply_type, flags, timeout_msec, cancellable, callback, user_data); }
GVariant * (g_dbus_connection_call_finish)(GDBusConnection * connection, GAsyncResult * res, GError * * error) { return stub_funcs.ptr_g_dbus_connection_call_finish(connection, res, error); }
GVariant * (g_dbus_connection_call_sync)(GDBusConnection * connection, const gchar * bus_name, const gchar * object_path, const gchar * interface_name, const gchar * method_name, GVariant * parameters, const GVariantType * reply_type, GDBusCallFlags flags, gint timeout_msec, GCancellable * cancellable, GError * * error) { return stub_funcs.ptr_g_dbus_connection_call_sync(connection, bus_name, object_path, interface_name, method_name, parameters, reply_type, flags, timeout_msec, cancellable, error); }
void (g_dbus_connection_call_with_unix_fd_list)(GDBusConnection * connection, const gchar * bus_name, const gchar * object_path, const gchar * interface_name, const gchar * method_name, GVariant * parameters, const GVariantType * reply_type, GDBusCallFlags flags, gint timeout_msec, GUnixFDList * fd_list, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data) { stub_funcs.ptr_g_dbus_connection_call_with_unix_fd_list(connection, bus_name, object_path, interface_name, method_name, parameters, reply_type, flags, timeout_msec, fd_list, cancellable, callback, user_data); }
GVariant * (g_dbus_connection_call_with_unix_fd_list_finish)(GDBusConnection * connection, GUnixFDList * * out_fd_list, GAsyncResult * res, GError * * error) { return stub_funcs.ptr_g_dbus_connection_call_with_unix_fd_list_finish(connection, out_fd_list, res, error); }
GVariant * (g_dbus_connection_call_with_unix_fd_list_sync)(GDBusConnection * connection, const gchar * bus_name, const gchar * object_path, const gchar * interface_name, const gchar * method_name, GVariant * parameters, const GVariantType * reply_type, GDBusCallFlags flags, gint timeout_msec, GUnixFDList * fd_list, GUnixFDList * * out_fd_list, GCancellable * cancellable, GError * * error) { return stub_funcs.ptr_g_dbus_connection_call_with_unix_fd_list_sync(connection, bus_name, object_path, interface_name, method_name, parameters, reply_type, flags, timeout_msec, fd_list, out_fd_list, cancellable, error); }
guint (g_dbus_connection_register_object)(GDBusConnection * connection, const gchar * object_path, GDBusInterfaceInfo * interface_info, const GDBusInterfaceVTable * vtable, gpointer user_data, GDestroyNotify user_data_free_func, GError * * error) { return stub_funcs.ptr_g_dbus_connection_register_object(connection, object_path, interface_info, vtable, user_data, user_data_free_func, error); }
guint (g_dbus_connection_register_object_with_closures)(GDBusConnection * connection, const gchar * object_path, GDBusInterfaceInfo * interface_info, GClosure * method_call_closure, GClosure * get_property_closure, GClosure * set_property_closure, GError * * error) { return stub_funcs.ptr_g_dbus_connection_register_object_with_closures(connection, object_path, interface_info, method_call_closure, get_property_closure, set_property_closure, error); }
gboolean (g_dbus_connection_unregister_object)(GDBusConnection * connection, guint registration_id) { return stub_funcs.ptr_g_dbus_connection_unregister_object(connection, registration_id); }
guint (g_dbus_connection_register_subtree)(GDBusConnection * connection, const gchar * object_path, const GDBusSubtreeVTable * vtable, GDBusSubtreeFlags flags, gpointer user_data, GDestroyNotify user_data_free_func, GError * * error) { return stub_funcs.ptr_g_dbus_connection_register_subtree(connection, object_path, vtable, flags, user_data, user_data_free_func, error); }
gboolean (g_dbus_connection_unregister_subtree)(GDBusConnection * connection, guint registration_id) { return stub_funcs.ptr_g_dbus_connection_unregister_subtree(connection, registration_id); }
guint (g_dbus_connection_signal_subscribe)(GDBusConnection * connection, const gchar * sender, const gchar * interface_name, const gchar * member, const gchar * object_path, const gchar * arg0, GDBusSignalFlags flags, GDBusSignalCallback callback, gpointer user_data, GDestroyNotify user_data_free_func) { return stub_funcs.ptr_g_dbus_connection_signal_subscribe(connection, sender, interface_name, member, object_path, arg0, flags, callback, user_data, user_data_free_func); }
void (g_dbus_connection_signal_unsubscribe)(GDBusConnection * connection, guint subscription_id) { stub_funcs.ptr_g_dbus_connection_signal_unsubscribe(connection, subscription_id); }
guint (g_dbus_connection_add_filter)(GDBusConnection * connection, GDBusMessageFilterFunction filter_function, gpointer user_data, GDestroyNotify user_data_free_func) { return stub_funcs.ptr_g_dbus_connection_add_filter(connection, filter_function, user_data, user_data_free_func); }
void (g_dbus_connection_remove_filter)(GDBusConnection * connection, guint filter_id) { stub_funcs.ptr_g_dbus_connection_remove_filter(connection, filter_id); }
GQuark (g_dbus_error_quark)(void) { return stub_funcs.ptr_g_dbus_error_quark(); }
gboolean (g_dbus_error_is_remote_error)(const GError * error) { return stub_funcs.ptr_g_dbus_error_is_remote_error(error); }
gchar * (g_dbus_error_get_remote_error)(const GError * error) { return stub_funcs.ptr_g_dbus_error_get_remote_error(error); }
gboolean (g_dbus_error_strip_remote_error)(GError * error) { return stub_funcs.ptr_g_dbus_error_strip_remote_error(error); }
gboolean (g_dbus_error_register_error)(GQuark error_domain, gint error_code, const gchar * dbus_error_name) { return stub_funcs.ptr_g_dbus_error_register_error(error_domain, error_code, dbus_error_name); }
gboolean (g_dbus_error_unregister_error)(GQuark error_domain, gint error_code, const gchar * dbus_error_name) { return stub_funcs.ptr_g_dbus_error_unregister_error(error_domain, error_code, dbus_error_name); }
void (g_dbus_error_register_error_domain)(const gchar * error_domain_quark_name, volatile gsize * quark_volatile, const GDBusErrorEntry * entries, guint num_entries) { stub_funcs.ptr_g_dbus_error_register_error_domain(error_domain_quark_name, quark_volatile, entries, num_entries); }
GError * (g_dbus_error_new_for_dbus_error)(const gchar * dbus_error_name, const gchar * dbus_error_message) { return stub_funcs.ptr_g_dbus_error_new_for_dbus_error(dbus_error_name, dbus_error_message); }
void (g_dbus_error_set_dbus_error)(GError * * error, const gchar * dbus_error_name, const gchar * dbus_error_message, const gchar * format, ...) { va_list vaargs; va_start(vaargs, format); stub_funcs.ptr_g_dbus_error_set_dbus_error_valist(error, dbus_error_name, dbus_error_message, format, vaargs); va_end(vaargs); }
void (g_dbus_error_set_dbus_error_valist)(GError * * error, const gchar * dbus_error_name, const gchar * dbus_error_message, const gchar * format, va_list var_args) { stub_funcs.ptr_g_dbus_error_set_dbus_error_valist(error, dbus_error_name, dbus_error_message, format, var_args); }
gchar * (g_dbus_error_encode_gerror)(const GError * error) { return stub_funcs.ptr_g_dbus_error_encode_gerror(error); }
GType (g_dbus_interface_get_type)(void) { return stub_funcs.ptr_g_dbus_interface_get_type(); }
GDBusInterfaceInfo * (g_dbus_interface_get_info)(GDBusInterface * interface_) { return stub_funcs.ptr_g_dbus_interface_get_info(interface_); }
GDBusObject * (g_dbus_interface_get_object)(GDBusInterface * interface_) { return stub_funcs.ptr_g_dbus_interface_get_object(interface_); }
void (g_dbus_interface_set_object)(GDBusInterface * interface_, GDBusObject * object) { stub_funcs.ptr_g_dbus_interface_set_object(interface_, object); }
GDBusObject * (g_dbus_interface_dup_object)(GDBusInterface * interface_) { return stub_funcs.ptr_g_dbus_interface_dup_object(interface_); }
GType (g_dbus_interface_skeleton_get_type)(void) { return stub_funcs.ptr_g_dbus_interface_skeleton_get_type(); }
GDBusInterfaceSkeletonFlags (g_dbus_interface_skeleton_get_flags)(GDBusInterfaceSkeleton * interface_) { return stub_funcs.ptr_g_dbus_interface_skeleton_get_flags(interface_); }
void (g_dbus_interface_skeleton_set_flags)(GDBusInterfaceSkeleton * interface_, GDBusInterfaceSkeletonFlags flags) { stub_funcs.ptr_g_dbus_interface_skeleton_set_flags(interface_, flags); }
GDBusInterfaceInfo * (g_dbus_interface_skeleton_get_info)(GDBusInterfaceSkeleton * interface_) { return stub_funcs.ptr_g_dbus_interface_skeleton_get_info(interface_); }
GDBusInterfaceVTable * (g_dbus_interface_skeleton_get_vtable)(GDBusInterfaceSkeleton * interface_) { return stub_funcs.ptr_g_dbus_interface_skeleton_get_vtable(interface_); }
GVariant * (g_dbus_interface_skeleton_get_properties)(GDBusInterfaceSkeleton * interface_) { return stub_funcs.ptr_g_dbus_interface_skeleton_get_properties(interface_); }
void (g_dbus_interface_skeleton_flush)(GDBusInterfaceSkeleton * interface_) { stub_funcs.ptr_g_dbus_interface_skeleton_flush(interface_); }
gboolean (g_dbus_interface_skeleton_export)(GDBusInterfaceSkeleton * interface_, GDBusConnection * connection, const gchar * object_path, GError * * error) { return stub_funcs.ptr_g_dbus_interface_skeleton_export(interface_, connection, object_path, error); }
void (g_dbus_interface_skeleton_unexport)(GDBusInterfaceSkeleton * interface_) { stub_funcs.ptr_g_dbus_interface_skeleton_unexport(interface_); }
void (g_dbus_interface_skeleton_unexport_from_connection)(GDBusInterfaceSkeleton * interface_, GDBusConnection * connection) { stub_funcs.ptr_g_dbus_interface_skeleton_unexport_from_connection(interface_, connection); }
GDBusConnection * (g_dbus_interface_skeleton_get_connection)(GDBusInterfaceSkeleton * interface_) { return stub_funcs.ptr_g_dbus_interface_skeleton_get_connection(interface_); }
GList * (g_dbus_interface_skeleton_get_connections)(GDBusInterfaceSkeleton * interface_) { return stub_funcs.ptr_g_dbus_interface_skeleton_get_connections(interface_); }
gboolean (g_dbus_interface_skeleton_has_connection)(GDBusInterfaceSkeleton * interface_, GDBusConnection * connection) { return stub_funcs.ptr_g_dbus_interface_skeleton_has_connection(interface_, connection); }
const gchar * (g_dbus_interface_skeleton_get_object_path)(GDBusInterfaceSkeleton * interface_) { return stub_funcs.ptr_g_dbus_interface_skeleton_get_object_path(interface_); }
const gchar * (g_dbus_annotation_info_lookup)(GDBusAnnotationInfo * * annotations, const gchar * name) { return stub_funcs.ptr_g_dbus_annotation_info_lookup(annotations, name); }
GDBusMethodInfo * (g_dbus_interface_info_lookup_method)(GDBusInterfaceInfo * info, const gchar * name) { return stub_funcs.ptr_g_dbus_interface_info_lookup_method(info, name); }
GDBusSignalInfo * (g_dbus_interface_info_lookup_signal)(GDBusInterfaceInfo * info, const gchar * name) { return stub_funcs.ptr_g_dbus_interface_info_lookup_signal(info, name); }
GDBusPropertyInfo * (g_dbus_interface_info_lookup_property)(GDBusInterfaceInfo * info, const gchar * name) { return stub_funcs.ptr_g_dbus_interface_info_lookup_property(info, name); }
void (g_dbus_interface_info_cache_build)(GDBusInterfaceInfo * info) { stub_funcs.ptr_g_dbus_interface_info_cache_build(info); }
void (g_dbus_interface_info_cache_release)(GDBusInterfaceInfo * info) { stub_funcs.ptr_g_dbus_interface_info_cache_release(info); }
void (g_dbus_interface_info_generate_xml)(GDBusInterfaceInfo * info, guint indent, GString * string_builder) { stub_funcs.ptr_g_dbus_interface_info_generate_xml(info, indent, string_builder); }
GDBusNodeInfo * (g_dbus_node_info_new_for_xml)(const gchar * xml_data, GError * * error) { return stub_funcs.ptr_g_dbus_node_info_new_for_xml(xml_data, error); }
GDBusInterfaceInfo * (g_dbus_node_info_lookup_interface)(GDBusNodeInfo * info, const gchar * name) { return stub_funcs.ptr_g_dbus_node_info_lookup_interface(info, name); }
void (g_dbus_node_info_generate_xml)(GDBusNodeInfo * info, guint indent, GString * string_builder) { stub_funcs.ptr_g_dbus_node_info_generate_xml(info, indent, string_builder); }
GDBusNodeInfo * (g_dbus_node_info_ref)(GDBusNodeInfo * info) { return stub_funcs.ptr_g_dbus_node_info_ref(info); }
GDBusInterfaceInfo * (g_dbus_interface_info_ref)(GDBusInterfaceInfo * info) { return stub_funcs.ptr_g_dbus_interface_info_ref(info); }
GDBusMethodInfo * (g_dbus_method_info_ref)(GDBusMethodInfo * info) { return stub_funcs.ptr_g_dbus_method_info_ref(info); }
GDBusSignalInfo * (g_dbus_signal_info_ref)(GDBusSignalInfo * info) { return stub_funcs.ptr_g_dbus_signal_info_ref(info); }
GDBusPropertyInfo * (g_dbus_property_info_ref)(GDBusPropertyInfo * info) { return stub_funcs.ptr_g_dbus_property_info_ref(info); }
GDBusArgInfo * (g_dbus_arg_info_ref)(GDBusArgInfo * info) { return stub_funcs.ptr_g_dbus_arg_info_ref(info); }
GDBusAnnotationInfo * (g_dbus_annotation_info_ref)(GDBusAnnotationInfo * info) { return stub_funcs.ptr_g_dbus_annotation_info_ref(info); }
void (g_dbus_node_info_unref)(GDBusNodeInfo * info) { stub_funcs.ptr_g_dbus_node_info_unref(info); }
void (g_dbus_interface_info_unref)(GDBusInterfaceInfo * info) { stub_funcs.ptr_g_dbus_interface_info_unref(info); }
void (g_dbus_method_info_unref)(GDBusMethodInfo * info) { stub_funcs.ptr_g_dbus_method_info_unref(info); }
void (g_dbus_signal_info_unref)(GDBusSignalInfo * info) { stub_funcs.ptr_g_dbus_signal_info_unref(info); }
void (g_dbus_property_info_unref)(GDBusPropertyInfo * info) { stub_funcs.ptr_g_dbus_property_info_unref(info); }
void (g_dbus_arg_info_unref)(GDBusArgInfo * info) { stub_funcs.ptr_g_dbus_arg_info_unref(info); }
void (g_dbus_annotation_info_unref)(GDBusAnnotationInfo * info) { stub_funcs.ptr_g_dbus_annotation_info_unref(info); }
GType (g_dbus_node_info_get_type)(void) { return stub_funcs.ptr_g_dbus_node_info_get_type(); }
GType (g_dbus_interface_info_get_type)(void) { return stub_funcs.ptr_g_dbus_interface_info_get_type(); }
GType (g_dbus_method_info_get_type)(void) { return stub_funcs.ptr_g_dbus_method_info_get_type(); }
GType (g_dbus_signal_info_get_type)(void) { return stub_funcs.ptr_g_dbus_signal_info_get_type(); }
GType (g_dbus_property_info_get_type)(void) { return stub_funcs.ptr_g_dbus_property_info_get_type(); }
GType (g_dbus_arg_info_get_type)(void) { return stub_funcs.ptr_g_dbus_arg_info_get_type(); }
GType (g_dbus_annotation_info_get_type)(void) { return stub_funcs.ptr_g_dbus_annotation_info_get_type(); }
GType (g_dbus_menu_model_get_type)(void) { return stub_funcs.ptr_g_dbus_menu_model_get_type(); }
GDBusMenuModel * (g_dbus_menu_model_get)(GDBusConnection * connection, const gchar * bus_name, const gchar * object_path) { return stub_funcs.ptr_g_dbus_menu_model_get(connection, bus_name, object_path); }
GType (g_dbus_message_get_type)(void) { return stub_funcs.ptr_g_dbus_message_get_type(); }
GDBusMessage * (g_dbus_message_new)(void) { return stub_funcs.ptr_g_dbus_message_new(); }
GDBusMessage * (g_dbus_message_new_signal)(const gchar * path, const gchar * interface_, const gchar * signal) { return stub_funcs.ptr_g_dbus_message_new_signal(path, interface_, signal); }
GDBusMessage * (g_dbus_message_new_method_call)(const gchar * name, const gchar * path, const gchar * interface_, const gchar * method) { return stub_funcs.ptr_g_dbus_message_new_method_call(name, path, interface_, method); }
GDBusMessage * (g_dbus_message_new_method_reply)(GDBusMessage * method_call_message) { return stub_funcs.ptr_g_dbus_message_new_method_reply(method_call_message); }
GDBusMessage * (g_dbus_message_new_method_error)(GDBusMessage * method_call_message, const gchar * error_name, const gchar * error_message_format, ...) { GDBusMessage * ret; va_list vaargs; va_start(vaargs, error_message_format); ret = stub_funcs.ptr_g_dbus_message_new_method_error_valist(method_call_message, error_name, error_message_format, vaargs); va_end(vaargs); return ret; }
GDBusMessage * (g_dbus_message_new_method_error_valist)(GDBusMessage * method_call_message, const gchar * error_name, const gchar * error_message_format, va_list var_args) { return stub_funcs.ptr_g_dbus_message_new_method_error_valist(method_call_message, error_name, error_message_format, var_args); }
GDBusMessage * (g_dbus_message_new_method_error_literal)(GDBusMessage * method_call_message, const gchar * error_name, const gchar * error_message) { return stub_funcs.ptr_g_dbus_message_new_method_error_literal(method_call_message, error_name, error_message); }
gchar * (g_dbus_message_print)(GDBusMessage * message, guint indent) { return stub_funcs.ptr_g_dbus_message_print(message, indent); }
gboolean (g_dbus_message_get_locked)(GDBusMessage * message) { return stub_funcs.ptr_g_dbus_message_get_locked(message); }
void (g_dbus_message_lock)(GDBusMessage * message) { stub_funcs.ptr_g_dbus_message_lock(message); }
GDBusMessage * (g_dbus_message_copy)(GDBusMessage * message, GError * * error) { return stub_funcs.ptr_g_dbus_message_copy(message, error); }
GDBusMessageByteOrder (g_dbus_message_get_byte_order)(GDBusMessage * message) { return stub_funcs.ptr_g_dbus_message_get_byte_order(message); }
void (g_dbus_message_set_byte_order)(GDBusMessage * message, GDBusMessageByteOrder byte_order) { stub_funcs.ptr_g_dbus_message_set_byte_order(message, byte_order); }
GDBusMessageType (g_dbus_message_get_message_type)(GDBusMessage * message) { return stub_funcs.ptr_g_dbus_message_get_message_type(message); }
void (g_dbus_message_set_message_type)(GDBusMessage * message, GDBusMessageType type) { stub_funcs.ptr_g_dbus_message_set_message_type(message, type); }
GDBusMessageFlags (g_dbus_message_get_flags)(GDBusMessage * message) { return stub_funcs.ptr_g_dbus_message_get_flags(message); }
void (g_dbus_message_set_flags)(GDBusMessage * message, GDBusMessageFlags flags) { stub_funcs.ptr_g_dbus_message_set_flags(message, flags); }
guint32 (g_dbus_message_get_serial)(GDBusMessage * message) { return stub_funcs.ptr_g_dbus_message_get_serial(message); }
void (g_dbus_message_set_serial)(GDBusMessage * message, guint32 serial) { stub_funcs.ptr_g_dbus_message_set_serial(message, serial); }
GVariant * (g_dbus_message_get_header)(GDBusMessage * message, GDBusMessageHeaderField header_field) { return stub_funcs.ptr_g_dbus_message_get_header(message, header_field); }
void (g_dbus_message_set_header)(GDBusMessage * message, GDBusMessageHeaderField header_field, GVariant * value) { stub_funcs.ptr_g_dbus_message_set_header(message, header_field, value); }
guchar * (g_dbus_message_get_header_fields)(GDBusMessage * message) { return stub_funcs.ptr_g_dbus_message_get_header_fields(message); }
GVariant * (g_dbus_message_get_body)(GDBusMessage * message) { return stub_funcs.ptr_g_dbus_message_get_body(message); }
void (g_dbus_message_set_body)(GDBusMessage * message, GVariant * body) { stub_funcs.ptr_g_dbus_message_set_body(message, body); }
GUnixFDList * (g_dbus_message_get_unix_fd_list)(GDBusMessage * message) { return stub_funcs.ptr_g_dbus_message_get_unix_fd_list(message); }
void (g_dbus_message_set_unix_fd_list)(GDBusMessage * message, GUnixFDList * fd_list) { stub_funcs.ptr_g_dbus_message_set_unix_fd_list(message, fd_list); }
guint32 (g_dbus_message_get_reply_serial)(GDBusMessage * message) { return stub_funcs.ptr_g_dbus_message_get_reply_serial(message); }
void (g_dbus_message_set_reply_serial)(GDBusMessage * message, guint32 value) { stub_funcs.ptr_g_dbus_message_set_reply_serial(message, value); }
const gchar * (g_dbus_message_get_interface)(GDBusMessage * message) { return stub_funcs.ptr_g_dbus_message_get_interface(message); }
void (g_dbus_message_set_interface)(GDBusMessage * message, const gchar * value) { stub_funcs.ptr_g_dbus_message_set_interface(message, value); }
const gchar * (g_dbus_message_get_member)(GDBusMessage * message) { return stub_funcs.ptr_g_dbus_message_get_member(message); }
void (g_dbus_message_set_member)(GDBusMessage * message, const gchar * value) { stub_funcs.ptr_g_dbus_message_set_member(message, value); }
const gchar * (g_dbus_message_get_path)(GDBusMessage * message) { return stub_funcs.ptr_g_dbus_message_get_path(message); }
void (g_dbus_message_set_path)(GDBusMessage * message, const gchar * value) { stub_funcs.ptr_g_dbus_message_set_path(message, value); }
const gchar * (g_dbus_message_get_sender)(GDBusMessage * message) { return stub_funcs.ptr_g_dbus_message_get_sender(message); }
void (g_dbus_message_set_sender)(GDBusMessage * message, const gchar * value) { stub_funcs.ptr_g_dbus_message_set_sender(message, value); }
const gchar * (g_dbus_message_get_destination)(GDBusMessage * message) { return stub_funcs.ptr_g_dbus_message_get_destination(message); }
void (g_dbus_message_set_destination)(GDBusMessage * message, const gchar * value) { stub_funcs.ptr_g_dbus_message_set_destination(message, value); }
const gchar * (g_dbus_message_get_error_name)(GDBusMessage * message) { return stub_funcs.ptr_g_dbus_message_get_error_name(message); }
void (g_dbus_message_set_error_name)(GDBusMessage * message, const gchar * value) { stub_funcs.ptr_g_dbus_message_set_error_name(message, value); }
const gchar * (g_dbus_message_get_signature)(GDBusMessage * message) { return stub_funcs.ptr_g_dbus_message_get_signature(message); }
void (g_dbus_message_set_signature)(GDBusMessage * message, const gchar * value) { stub_funcs.ptr_g_dbus_message_set_signature(message, value); }
guint32 (g_dbus_message_get_num_unix_fds)(GDBusMessage * message) { return stub_funcs.ptr_g_dbus_message_get_num_unix_fds(message); }
void (g_dbus_message_set_num_unix_fds)(GDBusMessage * message, guint32 value) { stub_funcs.ptr_g_dbus_message_set_num_unix_fds(message, value); }
const gchar * (g_dbus_message_get_arg0)(GDBusMessage * message) { return stub_funcs.ptr_g_dbus_message_get_arg0(message); }
const gchar * (g_dbus_message_get_arg0_path)(GDBusMessage * message) { return stub_funcs.ptr_g_dbus_message_get_arg0_path(message); }
GDBusMessage * (g_dbus_message_new_from_blob)(guchar * blob, gsize blob_len, GDBusCapabilityFlags capabilities, GError * * error) { return stub_funcs.ptr_g_dbus_message_new_from_blob(blob, blob_len, capabilities, error); }
gssize (g_dbus_message_bytes_needed)(guchar * blob, gsize blob_len, GError * * error) { return stub_funcs.ptr_g_dbus_message_bytes_needed(blob, blob_len, error); }
guchar * (g_dbus_message_to_blob)(GDBusMessage * message, gsize * out_size, GDBusCapabilityFlags capabilities, GError * * error) { return stub_funcs.ptr_g_dbus_message_to_blob(message, out_size, capabilities, error); }
gboolean (g_dbus_message_to_gerror)(GDBusMessage * message, GError * * error) { return stub_funcs.ptr_g_dbus_message_to_gerror(message, error); }
GType (g_dbus_method_invocation_get_type)(void) { return stub_funcs.ptr_g_dbus_method_invocation_get_type(); }
const gchar * (g_dbus_method_invocation_get_sender)(GDBusMethodInvocation * invocation) { return stub_funcs.ptr_g_dbus_method_invocation_get_sender(invocation); }
const gchar * (g_dbus_method_invocation_get_object_path)(GDBusMethodInvocation * invocation) { return stub_funcs.ptr_g_dbus_method_invocation_get_object_path(invocation); }
const gchar * (g_dbus_method_invocation_get_interface_name)(GDBusMethodInvocation * invocation) { return stub_funcs.ptr_g_dbus_method_invocation_get_interface_name(invocation); }
const gchar * (g_dbus_method_invocation_get_method_name)(GDBusMethodInvocation * invocation) { return stub_funcs.ptr_g_dbus_method_invocation_get_method_name(invocation); }
const GDBusMethodInfo * (g_dbus_method_invocation_get_method_info)(GDBusMethodInvocation * invocation) { return stub_funcs.ptr_g_dbus_method_invocation_get_method_info(invocation); }
const GDBusPropertyInfo * (g_dbus_method_invocation_get_property_info)(GDBusMethodInvocation * invocation) { return stub_funcs.ptr_g_dbus_method_invocation_get_property_info(invocation); }
GDBusConnection * (g_dbus_method_invocation_get_connection)(GDBusMethodInvocation * invocation) { return stub_funcs.ptr_g_dbus_method_invocation_get_connection(invocation); }
GDBusMessage * (g_dbus_method_invocation_get_message)(GDBusMethodInvocation * invocation) { return stub_funcs.ptr_g_dbus_method_invocation_get_message(invocation); }
GVariant * (g_dbus_method_invocation_get_parameters)(GDBusMethodInvocation * invocation) { return stub_funcs.ptr_g_dbus_method_invocation_get_parameters(invocation); }
gpointer (g_dbus_method_invocation_get_user_data)(GDBusMethodInvocation * invocation) { return stub_funcs.ptr_g_dbus_method_invocation_get_user_data(invocation); }
void (g_dbus_method_invocation_return_value)(GDBusMethodInvocation * invocation, GVariant * parameters) { stub_funcs.ptr_g_dbus_method_invocation_return_value(invocation, parameters); }
void (g_dbus_method_invocation_return_value_with_unix_fd_list)(GDBusMethodInvocation * invocation, GVariant * parameters, GUnixFDList * fd_list) { stub_funcs.ptr_g_dbus_method_invocation_return_value_with_unix_fd_list(invocation, parameters, fd_list); }
void (g_dbus_method_invocation_return_error)(GDBusMethodInvocation * invocation, GQuark domain, gint code, const gchar * format, ...) { va_list vaargs; va_start(vaargs, format); stub_funcs.ptr_g_dbus_method_invocation_return_error_valist(invocation, domain, code, format, vaargs); va_end(vaargs); }
void (g_dbus_method_invocation_return_error_valist)(GDBusMethodInvocation * invocation, GQuark domain, gint code, const gchar * format, va_list var_args) { stub_funcs.ptr_g_dbus_method_invocation_return_error_valist(invocation, domain, code, format, var_args); }
void (g_dbus_method_invocation_return_error_literal)(GDBusMethodInvocation * invocation, GQuark domain, gint code, const gchar * message) { stub_funcs.ptr_g_dbus_method_invocation_return_error_literal(invocation, domain, code, message); }
void (g_dbus_method_invocation_return_gerror)(GDBusMethodInvocation * invocation, const GError * error) { stub_funcs.ptr_g_dbus_method_invocation_return_gerror(invocation, error); }
void (g_dbus_method_invocation_take_error)(GDBusMethodInvocation * invocation, GError * error) { stub_funcs.ptr_g_dbus_method_invocation_take_error(invocation, error); }
void (g_dbus_method_invocation_return_dbus_error)(GDBusMethodInvocation * invocation, const gchar * error_name, const gchar * error_message) { stub_funcs.ptr_g_dbus_method_invocation_return_dbus_error(invocation, error_name, error_message); }
guint (g_bus_own_name)(GBusType bus_type, const gchar * name, GBusNameOwnerFlags flags, GBusAcquiredCallback bus_acquired_handler, GBusNameAcquiredCallback name_acquired_handler, GBusNameLostCallback name_lost_handler, gpointer user_data, GDestroyNotify user_data_free_func) { return stub_funcs.ptr_g_bus_own_name(bus_type, name, flags, bus_acquired_handler, name_acquired_handler, name_lost_handler, user_data, user_data_free_func); }
guint (g_bus_own_name_on_connection)(GDBusConnection * connection, const gchar * name, GBusNameOwnerFlags flags, GBusNameAcquiredCallback name_acquired_handler, GBusNameLostCallback name_lost_handler, gpointer user_data, GDestroyNotify user_data_free_func) { return stub_funcs.ptr_g_bus_own_name_on_connection(connection, name, flags, name_acquired_handler, name_lost_handler, user_data, user_data_free_func); }
guint (g_bus_own_name_with_closures)(GBusType bus_type, const gchar * name, GBusNameOwnerFlags flags, GClosure * bus_acquired_closure, GClosure * name_acquired_closure, GClosure * name_lost_closure) { return stub_funcs.ptr_g_bus_own_name_with_closures(bus_type, name, flags, bus_acquired_closure, name_acquired_closure, name_lost_closure); }
guint (g_bus_own_name_on_connection_with_closures)(GDBusConnection * connection, const gchar * name, GBusNameOwnerFlags flags, GClosure * name_acquired_closure, GClosure * name_lost_closure) { return stub_funcs.ptr_g_bus_own_name_on_connection_with_closures(connection, name, flags, name_acquired_closure, name_lost_closure); }
void (g_bus_unown_name)(guint owner_id) { stub_funcs.ptr_g_bus_unown_name(owner_id); }
guint (g_bus_watch_name)(GBusType bus_type, const gchar * name, GBusNameWatcherFlags flags, GBusNameAppearedCallback name_appeared_handler, GBusNameVanishedCallback name_vanished_handler, gpointer user_data, GDestroyNotify user_data_free_func) { return stub_funcs.ptr_g_bus_watch_name(bus_type, name, flags, name_appeared_handler, name_vanished_handler, user_data, user_data_free_func); }
guint (g_bus_watch_name_on_connection)(GDBusConnection * connection, const gchar * name, GBusNameWatcherFlags flags, GBusNameAppearedCallback name_appeared_handler, GBusNameVanishedCallback name_vanished_handler, gpointer user_data, GDestroyNotify user_data_free_func) { return stub_funcs.ptr_g_bus_watch_name_on_connection(connection, name, flags, name_appeared_handler, name_vanished_handler, user_data, user_data_free_func); }
guint (g_bus_watch_name_with_closures)(GBusType bus_type, const gchar * name, GBusNameWatcherFlags flags, GClosure * name_appeared_closure, GClosure * name_vanished_closure) { return stub_funcs.ptr_g_bus_watch_name_with_closures(bus_type, name, flags, name_appeared_closure, name_vanished_closure); }
guint (g_bus_watch_name_on_connection_with_closures)(GDBusConnection * connection, const gchar * name, GBusNameWatcherFlags flags, GClosure * name_appeared_closure, GClosure * name_vanished_closure) { return stub_funcs.ptr_g_bus_watch_name_on_connection_with_closures(connection, name, flags, name_appeared_closure, name_vanished_closure); }
void (g_bus_unwatch_name)(guint watcher_id) { stub_funcs.ptr_g_bus_unwatch_name(watcher_id); }
GType (g_dbus_object_get_type)(void) { return stub_funcs.ptr_g_dbus_object_get_type(); }
const gchar * (g_dbus_object_get_object_path)(GDBusObject * object) { return stub_funcs.ptr_g_dbus_object_get_object_path(object); }
GList * (g_dbus_object_get_interfaces)(GDBusObject * object) { return stub_funcs.ptr_g_dbus_object_get_interfaces(object); }
GDBusInterface * (g_dbus_object_get_interface)(GDBusObject * object, const gchar * interface_name) { return stub_funcs.ptr_g_dbus_object_get_interface(object, interface_name); }
GType (g_dbus_object_manager_get_type)(void) { return stub_funcs.ptr_g_dbus_object_manager_get_type(); }
const gchar * (g_dbus_object_manager_get_object_path)(GDBusObjectManager * manager) { return stub_funcs.ptr_g_dbus_object_manager_get_object_path(manager); }
GList * (g_dbus_object_manager_get_objects)(GDBusObjectManager * manager) { return stub_funcs.ptr_g_dbus_object_manager_get_objects(manager); }
GDBusObject * (g_dbus_object_manager_get_object)(GDBusObjectManager * manager, const gchar * object_path) { return stub_funcs.ptr_g_dbus_object_manager_get_object(manager, object_path); }
GDBusInterface * (g_dbus_object_manager_get_interface)(GDBusObjectManager * manager, const gchar * object_path, const gchar * interface_name) { return stub_funcs.ptr_g_dbus_object_manager_get_interface(manager, object_path, interface_name); }
GType (g_dbus_object_manager_client_get_type)(void) { return stub_funcs.ptr_g_dbus_object_manager_client_get_type(); }
void (g_dbus_object_manager_client_new)(GDBusConnection * connection, GDBusObjectManagerClientFlags flags, const gchar * name, const gchar * object_path, GDBusProxyTypeFunc get_proxy_type_func, gpointer get_proxy_type_user_data, GDestroyNotify get_proxy_type_destroy_notify, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data) { stub_funcs.ptr_g_dbus_object_manager_client_new(connection, flags, name, object_path, get_proxy_type_func, get_proxy_type_user_data, get_proxy_type_destroy_notify, cancellable, callback, user_data); }
GDBusObjectManager * (g_dbus_object_manager_client_new_finish)(GAsyncResult * res, GError * * error) { return stub_funcs.ptr_g_dbus_object_manager_client_new_finish(res, error); }
GDBusObjectManager * (g_dbus_object_manager_client_new_sync)(GDBusConnection * connection, GDBusObjectManagerClientFlags flags, const gchar * name, const gchar * object_path, GDBusProxyTypeFunc get_proxy_type_func, gpointer get_proxy_type_user_data, GDestroyNotify get_proxy_type_destroy_notify, GCancellable * cancellable, GError * * error) { return stub_funcs.ptr_g_dbus_object_manager_client_new_sync(connection, flags, name, object_path, get_proxy_type_func, get_proxy_type_user_data, get_proxy_type_destroy_notify, cancellable, error); }
void (g_dbus_object_manager_client_new_for_bus)(GBusType bus_type, GDBusObjectManagerClientFlags flags, const gchar * name, const gchar * object_path, GDBusProxyTypeFunc get_proxy_type_func, gpointer get_proxy_type_user_data, GDestroyNotify get_proxy_type_destroy_notify, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data) { stub_funcs.ptr_g_dbus_object_manager_client_new_for_bus(bus_type, flags, name, object_path, get_proxy_type_func, get_proxy_type_user_data, get_proxy_type_destroy_notify, cancellable, callback, user_data); }
GDBusObjectManager * (g_dbus_object_manager_client_new_for_bus_finish)(GAsyncResult * res, GError * * error) { return stub_funcs.ptr_g_dbus_object_manager_client_new_for_bus_finish(res, error); }
GDBusObjectManager * (g_dbus_object_manager_client_new_for_bus_sync)(GBusType bus_type, GDBusObjectManagerClientFlags flags, const gchar * name, const gchar * object_path, GDBusProxyTypeFunc get_proxy_type_func, gpointer get_proxy_type_user_data, GDestroyNotify get_proxy_type_destroy_notify, GCancellable * cancellable, GError * * error) { return stub_funcs.ptr_g_dbus_object_manager_client_new_for_bus_sync(bus_type, flags, name, object_path, get_proxy_type_func, get_proxy_type_user_data, get_proxy_type_destroy_notify, cancellable, error); }
GDBusConnection * (g_dbus_object_manager_client_get_connection)(GDBusObjectManagerClient * manager) { return stub_funcs.ptr_g_dbus_object_manager_client_get_connection(manager); }
GDBusObjectManagerClientFlags (g_dbus_object_manager_client_get_flags)(GDBusObjectManagerClient * manager) { return stub_funcs.ptr_g_dbus_object_manager_client_get_flags(manager); }
const gchar * (g_dbus_object_manager_client_get_name)(GDBusObjectManagerClient * manager) { return stub_funcs.ptr_g_dbus_object_manager_client_get_name(manager); }
gchar * (g_dbus_object_manager_client_get_name_owner)(GDBusObjectManagerClient * manager) { return stub_funcs.ptr_g_dbus_object_manager_client_get_name_owner(manager); }
GType (g_dbus_object_manager_server_get_type)(void) { return stub_funcs.ptr_g_dbus_object_manager_server_get_type(); }
GDBusObjectManagerServer * (g_dbus_object_manager_server_new)(const gchar * object_path) { return stub_funcs.ptr_g_dbus_object_manager_server_new(object_path); }
GDBusConnection * (g_dbus_object_manager_server_get_connection)(GDBusObjectManagerServer * manager) { return stub_funcs.ptr_g_dbus_object_manager_server_get_connection(manager); }
void (g_dbus_object_manager_server_set_connection)(GDBusObjectManagerServer * manager, GDBusConnection * connection) { stub_funcs.ptr_g_dbus_object_manager_server_set_connection(manager, connection); }
void (g_dbus_object_manager_server_export)(GDBusObjectManagerServer * manager, GDBusObjectSkeleton * object) { stub_funcs.ptr_g_dbus_object_manager_server_export(manager, object); }
void (g_dbus_object_manager_server_export_uniquely)(GDBusObjectManagerServer * manager, GDBusObjectSkeleton * object) { stub_funcs.ptr_g_dbus_object_manager_server_export_uniquely(manager, object); }
gboolean (g_dbus_object_manager_server_is_exported)(GDBusObjectManagerServer * manager, GDBusObjectSkeleton * object) { return stub_funcs.ptr_g_dbus_object_manager_server_is_exported(manager, object); }
gboolean (g_dbus_object_manager_server_unexport)(GDBusObjectManagerServer * manager, const gchar * object_path) { return stub_funcs.ptr_g_dbus_object_manager_server_unexport(manager, object_path); }
GType (g_dbus_object_proxy_get_type)(void) { return stub_funcs.ptr_g_dbus_object_proxy_get_type(); }
GDBusObjectProxy * (g_dbus_object_proxy_new)(GDBusConnection * connection, const gchar * object_path) { return stub_funcs.ptr_g_dbus_object_proxy_new(connection, object_path); }
GDBusConnection * (g_dbus_object_proxy_get_connection)(GDBusObjectProxy * proxy) { return stub_funcs.ptr_g_dbus_object_proxy_get_connection(proxy); }
GType (g_dbus_object_skeleton_get_type)(void) { return stub_funcs.ptr_g_dbus_object_skeleton_get_type(); }
GDBusObjectSkeleton * (g_dbus_object_skeleton_new)(const gchar * object_path) { return stub_funcs.ptr_g_dbus_object_skeleton_new(object_path); }
void (g_dbus_object_skeleton_flush)(GDBusObjectSkeleton * object) { stub_funcs.ptr_g_dbus_object_skeleton_flush(object); }
void (g_dbus_object_skeleton_add_interface)(GDBusObjectSkeleton * object, GDBusInterfaceSkeleton * interface_) { stub_funcs.ptr_g_dbus_object_skeleton_add_interface(object, interface_); }
void (g_dbus_object_skeleton_remove_interface)(GDBusObjectSkeleton * object, GDBusInterfaceSkeleton * interface_) { stub_funcs.ptr_g_dbus_object_skeleton_remove_interface(object, interface_); }
void (g_dbus_object_skeleton_remove_interface_by_name)(GDBusObjectSkeleton * object, const gchar * interface_name) { stub_funcs.ptr_g_dbus_object_skeleton_remove_interface_by_name(object, interface_name); }
void (g_dbus_object_skeleton_set_object_path)(GDBusObjectSkeleton * object, const gchar * object_path) { stub_funcs.ptr_g_dbus_object_skeleton_set_object_path(object, object_path); }
GType (g_dbus_proxy_get_type)(void) { return stub_funcs.ptr_g_dbus_proxy_get_type(); }
void (g_dbus_proxy_new)(GDBusConnection * connection, GDBusProxyFlags flags, GDBusInterfaceInfo * info, const gchar * name, const gchar * object_path, const gchar * interface_name, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data) { stub_funcs.ptr_g_dbus_proxy_new(connection, flags, info, name, object_path, interface_name, cancellable, callback, user_data); }
GDBusProxy * (g_dbus_proxy_new_finish)(GAsyncResult * res, GError * * error) { return stub_funcs.ptr_g_dbus_proxy_new_finish(res, error); }
GDBusProxy * (g_dbus_proxy_new_sync)(GDBusConnection * connection, GDBusProxyFlags flags, GDBusInterfaceInfo * info, const gchar * name, const gchar * object_path, const gchar * interface_name, GCancellable * cancellable, GError * * error) { return stub_funcs.ptr_g_dbus_proxy_new_sync(connection, flags, info, name, object_path, interface_name, cancellable, error); }
void (g_dbus_proxy_new_for_bus)(GBusType bus_type, GDBusProxyFlags flags, GDBusInterfaceInfo * info, const gchar * name, const gchar * object_path, const gchar * interface_name, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data) { stub_funcs.ptr_g_dbus_proxy_new_for_bus(bus_type, flags, info, name, object_path, interface_name, cancellable, callback, user_data); }
GDBusProxy * (g_dbus_proxy_new_for_bus_finish)(GAsyncResult * res, GError * * error) { return stub_funcs.ptr_g_dbus_proxy_new_for_bus_finish(res, error); }
GDBusProxy * (g_dbus_proxy_new_for_bus_sync)(GBusType bus_type, GDBusProxyFlags flags, GDBusInterfaceInfo * info, const gchar * name, const gchar * object_path, const gchar * interface_name, GCancellable * cancellable, GError * * error) { return stub_funcs.ptr_g_dbus_proxy_new_for_bus_sync(bus_type, flags, info, name, object_path, interface_name, cancellable, error); }
GDBusConnection * (g_dbus_proxy_get_connection)(GDBusProxy * proxy) { return stub_funcs.ptr_g_dbus_proxy_get_connection(proxy); }
GDBusProxyFlags (g_dbus_proxy_get_flags)(GDBusProxy * proxy) { return stub_funcs.ptr_g_dbus_proxy_get_flags(proxy); }
const gchar * (g_dbus_proxy_get_name)(GDBusProxy * proxy) { return stub_funcs.ptr_g_dbus_proxy_get_name(proxy); }
gchar * (g_dbus_proxy_get_name_owner)(GDBusProxy * proxy) { return stub_funcs.ptr_g_dbus_proxy_get_name_owner(proxy); }
const gchar * (g_dbus_proxy_get_object_path)(GDBusProxy * proxy) { return stub_funcs.ptr_g_dbus_proxy_get_object_path(proxy); }
const gchar * (g_dbus_proxy_get_interface_name)(GDBusProxy * proxy) { return stub_funcs.ptr_g_dbus_proxy_get_interface_name(proxy); }
gint (g_dbus_proxy_get_default_timeout)(GDBusProxy * proxy) { return stub_funcs.ptr_g_dbus_proxy_get_default_timeout(proxy); }
void (g_dbus_proxy_set_default_timeout)(GDBusProxy * proxy, gint timeout_msec) { stub_funcs.ptr_g_dbus_proxy_set_default_timeout(proxy, timeout_msec); }
GDBusInterfaceInfo * (g_dbus_proxy_get_interface_info)(GDBusProxy * proxy) { return stub_funcs.ptr_g_dbus_proxy_get_interface_info(proxy); }
void (g_dbus_proxy_set_interface_info)(GDBusProxy * proxy, GDBusInterfaceInfo * info) { stub_funcs.ptr_g_dbus_proxy_set_interface_info(proxy, info); }
GVariant * (g_dbus_proxy_get_cached_property)(GDBusProxy * proxy, const gchar * property_name) { return stub_funcs.ptr_g_dbus_proxy_get_cached_property(proxy, property_name); }
void (g_dbus_proxy_set_cached_property)(GDBusProxy * proxy, const gchar * property_name, GVariant * value) { stub_funcs.ptr_g_dbus_proxy_set_cached_property(proxy, property_name, value); }
gchar * * (g_dbus_proxy_get_cached_property_names)(GDBusProxy * proxy) { return stub_funcs.ptr_g_dbus_proxy_get_cached_property_names(proxy); }
void (g_dbus_proxy_call)(GDBusProxy * proxy, const gchar * method_name, GVariant * parameters, GDBusCallFlags flags, gint timeout_msec, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data) { stub_funcs.ptr_g_dbus_proxy_call(proxy, method_name, parameters, flags, timeout_msec, cancellable, callback, user_data); }
GVariant * (g_dbus_proxy_call_finish)(GDBusProxy * proxy, GAsyncResult * res, GError * * error) { return stub_funcs.ptr_g_dbus_proxy_call_finish(proxy, res, error); }
GVariant * (g_dbus_proxy_call_sync)(GDBusProxy * proxy, const gchar * method_name, GVariant * parameters, GDBusCallFlags flags, gint timeout_msec, GCancellable * cancellable, GError * * error) { return stub_funcs.ptr_g_dbus_proxy_call_sync(proxy, method_name, parameters, flags, timeout_msec, cancellable, error); }
void (g_dbus_proxy_call_with_unix_fd_list)(GDBusProxy * proxy, const gchar * method_name, GVariant * parameters, GDBusCallFlags flags, gint timeout_msec, GUnixFDList * fd_list, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data) { stub_funcs.ptr_g_dbus_proxy_call_with_unix_fd_list(proxy, method_name, parameters, flags, timeout_msec, fd_list, cancellable, callback, user_data); }
GVariant * (g_dbus_proxy_call_with_unix_fd_list_finish)(GDBusProxy * proxy, GUnixFDList * * out_fd_list, GAsyncResult * res, GError * * error) { return stub_funcs.ptr_g_dbus_proxy_call_with_unix_fd_list_finish(proxy, out_fd_list, res, error); }
GVariant * (g_dbus_proxy_call_with_unix_fd_list_sync)(GDBusProxy * proxy, const gchar * method_name, GVariant * parameters, GDBusCallFlags flags, gint timeout_msec, GUnixFDList * fd_list, GUnixFDList * * out_fd_list, GCancellable * cancellable, GError * * error) { return stub_funcs.ptr_g_dbus_proxy_call_with_unix_fd_list_sync(proxy, method_name, parameters, flags, timeout_msec, fd_list, out_fd_list, cancellable, error); }
GType (g_dbus_server_get_type)(void) { return stub_funcs.ptr_g_dbus_server_get_type(); }
GDBusServer * (g_dbus_server_new_sync)(const gchar * address, GDBusServerFlags flags, const gchar * guid, GDBusAuthObserver * observer, GCancellable * cancellable, GError * * error) { return stub_funcs.ptr_g_dbus_server_new_sync(address, flags, guid, observer, cancellable, error); }
const gchar * (g_dbus_server_get_client_address)(GDBusServer * server) { return stub_funcs.ptr_g_dbus_server_get_client_address(server); }
const gchar * (g_dbus_server_get_guid)(GDBusServer * server) { return stub_funcs.ptr_g_dbus_server_get_guid(server); }
GDBusServerFlags (g_dbus_server_get_flags)(GDBusServer * server) { return stub_funcs.ptr_g_dbus_server_get_flags(server); }
void (g_dbus_server_start)(GDBusServer * server) { stub_funcs.ptr_g_dbus_server_start(server); }
void (g_dbus_server_stop)(GDBusServer * server) { stub_funcs.ptr_g_dbus_server_stop(server); }
gboolean (g_dbus_server_is_active)(GDBusServer * server) { return stub_funcs.ptr_g_dbus_server_is_active(server); }
gboolean (g_dbus_is_guid)(const gchar * string) { return stub_funcs.ptr_g_dbus_is_guid(string); }
gchar * (g_dbus_generate_guid)(void) { return stub_funcs.ptr_g_dbus_generate_guid(); }
gboolean (g_dbus_is_name)(const gchar * string) { return stub_funcs.ptr_g_dbus_is_name(string); }
gboolean (g_dbus_is_unique_name)(const gchar * string) { return stub_funcs.ptr_g_dbus_is_unique_name(string); }
gboolean (g_dbus_is_member_name)(const gchar * string) { return stub_funcs.ptr_g_dbus_is_member_name(string); }
gboolean (g_dbus_is_interface_name)(const gchar * string) { return stub_funcs.ptr_g_dbus_is_interface_name(string); }
gboolean (g_dbus_is_error_name)(const gchar * string) { return stub_funcs.ptr_g_dbus_is_error_name(string); }
void (g_dbus_gvariant_to_gvalue)(GVariant * value, GValue * out_gvalue) { stub_funcs.ptr_g_dbus_gvariant_to_gvalue(value, out_gvalue); }
GVariant * (g_dbus_gvalue_to_gvariant)(const GValue * gvalue, const GVariantType * type) { return stub_funcs.ptr_g_dbus_gvalue_to_gvariant(gvalue, type); }
gchar * (g_dbus_escape_object_path_bytestring)(const guint8 * bytes) { return stub_funcs.ptr_g_dbus_escape_object_path_bytestring(bytes); }
gchar * (g_dbus_escape_object_path)(const gchar * s) { return stub_funcs.ptr_g_dbus_escape_object_path(s); }
guint8 * (g_dbus_unescape_object_path)(const gchar * s) { return stub_funcs.ptr_g_dbus_unescape_object_path(s); }
GType (g_debug_controller_get_type)(void) { return stub_funcs.ptr_g_debug_controller_get_type(); }
gboolean (g_debug_controller_get_debug_enabled)(GDebugController * self) { return stub_funcs.ptr_g_debug_controller_get_debug_enabled(self); }
void (g_debug_controller_set_debug_enabled)(GDebugController * self, gboolean debug_enabled) { stub_funcs.ptr_g_debug_controller_set_debug_enabled(self, debug_enabled); }
GType (g_debug_controller_dbus_get_type)(void) { return stub_funcs.ptr_g_debug_controller_dbus_get_type(); }
GDebugControllerDBus * (g_debug_controller_dbus_new)(GDBusConnection * connection, GCancellable * cancellable, GError * * error) { return stub_funcs.ptr_g_debug_controller_dbus_new(connection, cancellable, error); }
void (g_debug_controller_dbus_stop)(GDebugControllerDBus * self) { stub_funcs.ptr_g_debug_controller_dbus_stop(self); }
GType (g_drive_get_type)(void) { return stub_funcs.ptr_g_drive_get_type(); }
char * (g_drive_get_name)(GDrive * drive) { return stub_funcs.ptr_g_drive_get_name(drive); }
GIcon * (g_drive_get_icon)(GDrive * drive) { return stub_funcs.ptr_g_drive_get_icon(drive); }
GIcon * (g_drive_get_symbolic_icon)(GDrive * drive) { return stub_funcs.ptr_g_drive_get_symbolic_icon(drive); }
gboolean (g_drive_has_volumes)(GDrive * drive) { return stub_funcs.ptr_g_drive_has_volumes(drive); }
GList * (g_drive_get_volumes)(GDrive * drive) { return stub_funcs.ptr_g_drive_get_volumes(drive); }
gboolean (g_drive_is_removable)(GDrive * drive) { return stub_funcs.ptr_g_drive_is_removable(drive); }
gboolean (g_drive_is_media_removable)(GDrive * drive) { return stub_funcs.ptr_g_drive_is_media_removable(drive); }
gboolean (g_drive_has_media)(GDrive * drive) { return stub_funcs.ptr_g_drive_has_media(drive); }
gboolean (g_drive_is_media_check_automatic)(GDrive * drive) { return stub_funcs.ptr_g_drive_is_media_check_automatic(drive); }
gboolean (g_drive_can_poll_for_media)(GDrive * drive) { return stub_funcs.ptr_g_drive_can_poll_for_media(drive); }
gboolean (g_drive_can_eject)(GDrive * drive) { return stub_funcs.ptr_g_drive_can_eject(drive); }
void (g_drive_eject)(GDrive * drive, GMountUnmountFlags flags, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data) { stub_funcs.ptr_g_drive_eject(drive, flags, cancellable, callback, user_data); }
gboolean (g_drive_eject_finish)(GDrive * drive, GAsyncResult * result, GError * * error) { return stub_funcs.ptr_g_drive_eject_finish(drive, result, error); }
void (g_drive_poll_for_media)(GDrive * drive, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data) { stub_funcs.ptr_g_drive_poll_for_media(drive, cancellable, callback, user_data); }
gboolean (g_drive_poll_for_media_finish)(GDrive * drive, GAsyncResult * result, GError * * error) { return stub_funcs.ptr_g_drive_poll_for_media_finish(drive, result, error); }
char * (g_drive_get_identifier)(GDrive * drive, const char * kind) { return stub_funcs.ptr_g_drive_get_identifier(drive, kind); }
char * * (g_drive_enumerate_identifiers)(GDrive * drive) { return stub_funcs.ptr_g_drive_enumerate_identifiers(drive); }
GDriveStartStopType (g_drive_get_start_stop_type)(GDrive * drive) { return stub_funcs.ptr_g_drive_get_start_stop_type(drive); }
gboolean (g_drive_can_start)(GDrive * drive) { return stub_funcs.ptr_g_drive_can_start(drive); }
gboolean (g_drive_can_start_degraded)(GDrive * drive) { return stub_funcs.ptr_g_drive_can_start_degraded(drive); }
void (g_drive_start)(GDrive * drive, GDriveStartFlags flags, GMountOperation * mount_operation, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data) { stub_funcs.ptr_g_drive_start(drive, flags, mount_operation, cancellable, callback, user_data); }
gboolean (g_drive_start_finish)(GDrive * drive, GAsyncResult * result, GError * * error) { return stub_funcs.ptr_g_drive_start_finish(drive, result, error); }
gboolean (g_drive_can_stop)(GDrive * drive) { return stub_funcs.ptr_g_drive_can_stop(drive); }
void (g_drive_stop)(GDrive * drive, GMountUnmountFlags flags, GMountOperation * mount_operation, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data) { stub_funcs.ptr_g_drive_stop(drive, flags, mount_operation, cancellable, callback, user_data); }
gboolean (g_drive_stop_finish)(GDrive * drive, GAsyncResult * result, GError * * error) { return stub_funcs.ptr_g_drive_stop_finish(drive, result, error); }
void (g_drive_eject_with_operation)(GDrive * drive, GMountUnmountFlags flags, GMountOperation * mount_operation, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data) { stub_funcs.ptr_g_drive_eject_with_operation(drive, flags, mount_operation, cancellable, callback, user_data); }
gboolean (g_drive_eject_with_operation_finish)(GDrive * drive, GAsyncResult * result, GError * * error) { return stub_funcs.ptr_g_drive_eject_with_operation_finish(drive, result, error); }
const gchar * (g_drive_get_sort_key)(GDrive * drive) { return stub_funcs.ptr_g_drive_get_sort_key(drive); }
GType (g_dtls_connection_get_type)(void) { return stub_funcs.ptr_g_dtls_connection_get_type(); }
void (g_dtls_connection_set_database)(GDtlsConnection * conn, GTlsDatabase * database) { stub_funcs.ptr_g_dtls_connection_set_database(conn, database); }
GTlsDatabase * (g_dtls_connection_get_database)(GDtlsConnection * conn) { return stub_funcs.ptr_g_dtls_connection_get_database(conn); }
void (g_dtls_connection_set_certificate)(GDtlsConnection * conn, GTlsCertificate * certificate) { stub_funcs.ptr_g_dtls_connection_set_certificate(conn, certificate); }
GTlsCertificate * (g_dtls_connection_get_certificate)(GDtlsConnection * conn) { return stub_funcs.ptr_g_dtls_connection_get_certificate(conn); }
void (g_dtls_connection_set_interaction)(GDtlsConnection * conn, GTlsInteraction * interaction) { stub_funcs.ptr_g_dtls_connection_set_interaction(conn, interaction); }
GTlsInteraction * (g_dtls_connection_get_interaction)(GDtlsConnection * conn) { return stub_funcs.ptr_g_dtls_connection_get_interaction(conn); }
GTlsCertificate * (g_dtls_connection_get_peer_certificate)(GDtlsConnection * conn) { return stub_funcs.ptr_g_dtls_connection_get_peer_certificate(conn); }
GTlsCertificateFlags (g_dtls_connection_get_peer_certificate_errors)(GDtlsConnection * conn) { return stub_funcs.ptr_g_dtls_connection_get_peer_certificate_errors(conn); }
void (g_dtls_connection_set_require_close_notify)(GDtlsConnection * conn, gboolean require_close_notify) { stub_funcs.ptr_g_dtls_connection_set_require_close_notify(conn, require_close_notify); }
gboolean (g_dtls_connection_get_require_close_notify)(GDtlsConnection * conn) { return stub_funcs.ptr_g_dtls_connection_get_require_close_notify(conn); }
void (g_dtls_connection_set_rehandshake_mode)(GDtlsConnection * conn, GTlsRehandshakeMode mode) { stub_funcs.ptr_g_dtls_connection_set_rehandshake_mode(conn, mode); }
GTlsRehandshakeMode (g_dtls_connection_get_rehandshake_mode)(GDtlsConnection * conn) { return stub_funcs.ptr_g_dtls_connection_get_rehandshake_mode(conn); }
gboolean (g_dtls_connection_handshake)(GDtlsConnection * conn, GCancellable * cancellable, GError * * error) { return stub_funcs.ptr_g_dtls_connection_handshake(conn, cancellable, error); }
void (g_dtls_connection_handshake_async)(GDtlsConnection * conn, int io_priority, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data) { stub_funcs.ptr_g_dtls_connection_handshake_async(conn, io_priority, cancellable, callback, user_data); }
gboolean (g_dtls_connection_handshake_finish)(GDtlsConnection * conn, GAsyncResult * result, GError * * error) { return stub_funcs.ptr_g_dtls_connection_handshake_finish(conn, result, error); }
gboolean (g_dtls_connection_shutdown)(GDtlsConnection * conn, gboolean shutdown_read, gboolean shutdown_write, GCancellable * cancellable, GError * * error) { return stub_funcs.ptr_g_dtls_connection_shutdown(conn, shutdown_read, shutdown_write, cancellable, error); }
void (g_dtls_connection_shutdown_async)(GDtlsConnection * conn, gboolean shutdown_read, gboolean shutdown_write, int io_priority, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data) { stub_funcs.ptr_g_dtls_connection_shutdown_async(conn, shutdown_read, shutdown_write, io_priority, cancellable, callback, user_data); }
gboolean (g_dtls_connection_shutdown_finish)(GDtlsConnection * conn, GAsyncResult * result, GError * * error) { return stub_funcs.ptr_g_dtls_connection_shutdown_finish(conn, result, error); }
gboolean (g_dtls_connection_close)(GDtlsConnection * conn, GCancellable * cancellable, GError * * error) { return stub_funcs.ptr_g_dtls_connection_close(conn, cancellable, error); }
void (g_dtls_connection_close_async)(GDtlsConnection * conn, int io_priority, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data) { stub_funcs.ptr_g_dtls_connection_close_async(conn, io_priority, cancellable, callback, user_data); }
gboolean (g_dtls_connection_close_finish)(GDtlsConnection * conn, GAsyncResult * result, GError * * error) { return stub_funcs.ptr_g_dtls_connection_close_finish(conn, result, error); }
gboolean (g_dtls_connection_emit_accept_certificate)(GDtlsConnection * conn, GTlsCertificate * peer_cert, GTlsCertificateFlags errors) { return stub_funcs.ptr_g_dtls_connection_emit_accept_certificate(conn, peer_cert, errors); }
void (g_dtls_connection_set_advertised_protocols)(GDtlsConnection * conn, const gchar * const * protocols) { stub_funcs.ptr_g_dtls_connection_set_advertised_protocols(conn, protocols); }
const gchar * (g_dtls_connection_get_negotiated_protocol)(GDtlsConnection * conn) { return stub_funcs.ptr_g_dtls_connection_get_negotiated_protocol(conn); }
gboolean (g_dtls_connection_get_channel_binding_data)(GDtlsConnection * conn, GTlsChannelBindingType type, GByteArray * data, GError * * error) { return stub_funcs.ptr_g_dtls_connection_get_channel_binding_data(conn, type, data, error); }
GTlsProtocolVersion (g_dtls_connection_get_protocol_version)(GDtlsConnection * conn) { return stub_funcs.ptr_g_dtls_connection_get_protocol_version(conn); }
gchar * (g_dtls_connection_get_ciphersuite_name)(GDtlsConnection * conn) { return stub_funcs.ptr_g_dtls_connection_get_ciphersuite_name(conn); }
GType (g_dtls_client_connection_get_type)(void) { return stub_funcs.ptr_g_dtls_client_connection_get_type(); }
GDatagramBased * (g_dtls_client_connection_new)(GDatagramBased * base_socket, GSocketConnectable * server_identity, GError * * error) { return stub_funcs.ptr_g_dtls_client_connection_new(base_socket, server_identity, error); }
GTlsCertificateFlags (g_dtls_client_connection_get_validation_flags)(GDtlsClientConnection * conn) { return stub_funcs.ptr_g_dtls_client_connection_get_validation_flags(conn); }
void (g_dtls_client_connection_set_validation_flags)(GDtlsClientConnection * conn, GTlsCertificateFlags flags) { stub_funcs.ptr_g_dtls_client_connection_set_validation_flags(conn, flags); }
GSocketConnectable * (g_dtls_client_connection_get_server_identity)(GDtlsClientConnection * conn) { return stub_funcs.ptr_g_dtls_client_connection_get_server_identity(conn); }
void (g_dtls_client_connection_set_server_identity)(GDtlsClientConnection * conn, GSocketConnectable * identity) { stub_funcs.ptr_g_dtls_client_connection_set_server_identity(conn, identity); }
GList * (g_dtls_client_connection_get_accepted_cas)(GDtlsClientConnection * conn) { return stub_funcs.ptr_g_dtls_client_connection_get_accepted_cas(conn); }
GType (g_dtls_server_connection_get_type)(void) { return stub_funcs.ptr_g_dtls_server_connection_get_type(); }
GDatagramBased * (g_dtls_server_connection_new)(GDatagramBased * base_socket, GTlsCertificate * certificate, GError * * error) { return stub_funcs.ptr_g_dtls_server_connection_new(base_socket, certificate, error); }
GType (g_icon_get_type)(void) { return stub_funcs.ptr_g_icon_get_type(); }
guint (g_icon_hash)(gconstpointer icon) { return stub_funcs.ptr_g_icon_hash(icon); }
gboolean (g_icon_equal)(GIcon * icon1, GIcon * icon2) { return stub_funcs.ptr_g_icon_equal(icon1, icon2); }
gchar * (g_icon_to_string)(GIcon * icon) { return stub_funcs.ptr_g_icon_to_string(icon); }
GIcon * (g_icon_new_for_string)(const gchar * str, GError * * error) { return stub_funcs.ptr_g_icon_new_for_string(str, error); }
GVariant * (g_icon_serialize)(GIcon * icon) { return stub_funcs.ptr_g_icon_serialize(icon); }
GIcon * (g_icon_deserialize)(GVariant * value) { return stub_funcs.ptr_g_icon_deserialize(value); }
GType (g_emblem_get_type)(void) { return stub_funcs.ptr_g_emblem_get_type(); }
GEmblem * (g_emblem_new)(GIcon * icon) { return stub_funcs.ptr_g_emblem_new(icon); }
GEmblem * (g_emblem_new_with_origin)(GIcon * icon, GEmblemOrigin origin) { return stub_funcs.ptr_g_emblem_new_with_origin(icon, origin); }
GIcon * (g_emblem_get_icon)(GEmblem * emblem) { return stub_funcs.ptr_g_emblem_get_icon(emblem); }
GEmblemOrigin (g_emblem_get_origin)(GEmblem * emblem) { return stub_funcs.ptr_g_emblem_get_origin(emblem); }
GType (g_emblemed_icon_get_type)(void) { return stub_funcs.ptr_g_emblemed_icon_get_type(); }
GIcon * (g_emblemed_icon_new)(GIcon * icon, GEmblem * emblem) { return stub_funcs.ptr_g_emblemed_icon_new(icon, emblem); }
GIcon * (g_emblemed_icon_get_icon)(GEmblemedIcon * emblemed) { return stub_funcs.ptr_g_emblemed_icon_get_icon(emblemed); }
GList * (g_emblemed_icon_get_emblems)(GEmblemedIcon * emblemed) { return stub_funcs.ptr_g_emblemed_icon_get_emblems(emblemed); }
void (g_emblemed_icon_add_emblem)(GEmblemedIcon * emblemed, GEmblem * emblem) { stub_funcs.ptr_g_emblemed_icon_add_emblem(emblemed, emblem); }
void (g_emblemed_icon_clear_emblems)(GEmblemedIcon * emblemed) { stub_funcs.ptr_g_emblemed_icon_clear_emblems(emblemed); }
GType (g_file_get_type)(void) { return stub_funcs.ptr_g_file_get_type(); }
GFile * (g_file_new_for_path)(const char * path) { return stub_funcs.ptr_g_file_new_for_path(path); }
GFile * (g_file_new_for_uri)(const char * uri) { return stub_funcs.ptr_g_file_new_for_uri(uri); }
GFile * (g_file_new_for_commandline_arg)(const char * arg) { return stub_funcs.ptr_g_file_new_for_commandline_arg(arg); }
GFile * (g_file_new_for_commandline_arg_and_cwd)(const gchar * arg, const gchar * cwd) { return stub_funcs.ptr_g_file_new_for_commandline_arg_and_cwd(arg, cwd); }
GFile * (g_file_new_tmp)(const char * tmpl, GFileIOStream * * iostream, GError * * error) { return stub_funcs.ptr_g_file_new_tmp(tmpl, iostream, error); }
void (g_file_new_tmp_async)(const char * tmpl, int io_priority, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data) { stub_funcs.ptr_g_file_new_tmp_async(tmpl, io_priority, cancellable, callback, user_data); }
GFile * (g_file_new_tmp_finish)(GAsyncResult * result, GFileIOStream * * iostream, GError * * error) { return stub_funcs.ptr_g_file_new_tmp_finish(result, iostream, error); }
void (g_file_new_tmp_dir_async)(const char * tmpl, int io_priority, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data) { stub_funcs.ptr_g_file_new_tmp_dir_async(tmpl, io_priority, cancellable, callback, user_data); }
GFile * (g_file_new_tmp_dir_finish)(GAsyncResult * result, GError * * error) { return stub_funcs.ptr_g_file_new_tmp_dir_finish(result, error); }
GFile * (g_file_parse_name)(const char * parse_name) { return stub_funcs.ptr_g_file_parse_name(parse_name); }
GFile * (g_file_new_build_filenamev)(const gchar * const * args) { return stub_funcs.ptr_g_file_new_build_filenamev(args); }
GFile * (g_file_dup)(GFile * file) { return stub_funcs.ptr_g_file_dup(file); }
guint (g_file_hash)(gconstpointer file) { return stub_funcs.ptr_g_file_hash(file); }
gboolean (g_file_equal)(GFile * file1, GFile * file2) { return stub_funcs.ptr_g_file_equal(file1, file2); }
char * (g_file_get_basename)(GFile * file) { return stub_funcs.ptr_g_file_get_basename(file); }
char * (g_file_get_path)(GFile * file) { return stub_funcs.ptr_g_file_get_path(file); }
const char * (g_file_peek_path)(GFile * file) { return stub_funcs.ptr_g_file_peek_path(file); }
char * (g_file_get_uri)(GFile * file) { return stub_funcs.ptr_g_file_get_uri(file); }
char * (g_file_get_parse_name)(GFile * file) { return stub_funcs.ptr_g_file_get_parse_name(file); }
GFile * (g_file_get_parent)(GFile * file) { return stub_funcs.ptr_g_file_get_parent(file); }
gboolean (g_file_has_parent)(GFile * file, GFile * parent) { return stub_funcs.ptr_g_file_has_parent(file, parent); }
GFile * (g_file_get_child)(GFile * file, const char * name) { return stub_funcs.ptr_g_file_get_child(file, name); }
GFile * (g_file_get_child_for_display_name)(GFile * file, const char * display_name, GError * * error) { return stub_funcs.ptr_g_file_get_child_for_display_name(file, display_name, error); }
gboolean (g_file_has_prefix)(GFile * file, GFile * prefix) { return stub_funcs.ptr_g_file_has_prefix(file, prefix); }
char * (g_file_get_relative_path)(GFile * parent, GFile * descendant) { return stub_funcs.ptr_g_file_get_relative_path(parent, descendant); }
GFile * (g_file_resolve_relative_path)(GFile * file, const char * relative_path) { return stub_funcs.ptr_g_file_resolve_relative_path(file, relative_path); }
gboolean (g_file_is_native)(GFile * file) { return stub_funcs.ptr_g_file_is_native(file); }
gboolean (g_file_has_uri_scheme)(GFile * file, const char * uri_scheme) { return stub_funcs.ptr_g_file_has_uri_scheme(file, uri_scheme); }
char * (g_file_get_uri_scheme)(GFile * file) { return stub_funcs.ptr_g_file_get_uri_scheme(file); }
GFileInputStream * (g_file_read)(GFile * file, GCancellable * cancellable, GError * * error) { return stub_funcs.ptr_g_file_read(file, cancellable, error); }
void (g_file_read_async)(GFile * file, int io_priority, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data) { stub_funcs.ptr_g_file_read_async(file, io_priority, cancellable, callback, user_data); }
GFileInputStream * (g_file_read_finish)(GFile * file, GAsyncResult * res, GError * * error) { return stub_funcs.ptr_g_file_read_finish(file, res, error); }
GFileOutputStream * (g_file_append_to)(GFile * file, GFileCreateFlags flags, GCancellable * cancellable, GError * * error) { return stub_funcs.ptr_g_file_append_to(file, flags, cancellable, error); }
GFileOutputStream * (g_file_create)(GFile * file, GFileCreateFlags flags, GCancellable * cancellable, GError * * error) { return stub_funcs.ptr_g_file_create(file, flags, cancellable, error); }
GFileOutputStream * (g_file_replace)(GFile * file, const char * etag, gboolean make_backup, GFileCreateFlags flags, GCancellable * cancellable, GError * * error) { return stub_funcs.ptr_g_file_replace(file, etag, make_backup, flags, cancellable, error); }
void (g_file_append_to_async)(GFile * file, GFileCreateFlags flags, int io_priority, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data) { stub_funcs.ptr_g_file_append_to_async(file, flags, io_priority, cancellable, callback, user_data); }
GFileOutputStream * (g_file_append_to_finish)(GFile * file, GAsyncResult * res, GError * * error) { return stub_funcs.ptr_g_file_append_to_finish(file, res, error); }
void (g_file_create_async)(GFile * file, GFileCreateFlags flags, int io_priority, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data) { stub_funcs.ptr_g_file_create_async(file, flags, io_priority, cancellable, callback, user_data); }
GFileOutputStream * (g_file_create_finish)(GFile * file, GAsyncResult * res, GError * * error) { return stub_funcs.ptr_g_file_create_finish(file, res, error); }
void (g_file_replace_async)(GFile * file, const char * etag, gboolean make_backup, GFileCreateFlags flags, int io_priority, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data) { stub_funcs.ptr_g_file_replace_async(file, etag, make_backup, flags, io_priority, cancellable, callback, user_data); }
GFileOutputStream * (g_file_replace_finish)(GFile * file, GAsyncResult * res, GError * * error) { return stub_funcs.ptr_g_file_replace_finish(file, res, error); }
GFileIOStream * (g_file_open_readwrite)(GFile * file, GCancellable * cancellable, GError * * error) { return stub_funcs.ptr_g_file_open_readwrite(file, cancellable, error); }
void (g_file_open_readwrite_async)(GFile * file, int io_priority, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data) { stub_funcs.ptr_g_file_open_readwrite_async(file, io_priority, cancellable, callback, user_data); }
GFileIOStream * (g_file_open_readwrite_finish)(GFile * file, GAsyncResult * res, GError * * error) { return stub_funcs.ptr_g_file_open_readwrite_finish(file, res, error); }
GFileIOStream * (g_file_create_readwrite)(GFile * file, GFileCreateFlags flags, GCancellable * cancellable, GError * * error) { return stub_funcs.ptr_g_file_create_readwrite(file, flags, cancellable, error); }
void (g_file_create_readwrite_async)(GFile * file, GFileCreateFlags flags, int io_priority, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data) { stub_funcs.ptr_g_file_create_readwrite_async(file, flags, io_priority, cancellable, callback, user_data); }
GFileIOStream * (g_file_create_readwrite_finish)(GFile * file, GAsyncResult * res, GError * * error) { return stub_funcs.ptr_g_file_create_readwrite_finish(file, res, error); }
GFileIOStream * (g_file_replace_readwrite)(GFile * file, const char * etag, gboolean make_backup, GFileCreateFlags flags, GCancellable * cancellable, GError * * error) { return stub_funcs.ptr_g_file_replace_readwrite(file, etag, make_backup, flags, cancellable, error); }
void (g_file_replace_readwrite_async)(GFile * file, const char * etag, gboolean make_backup, GFileCreateFlags flags, int io_priority, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data) { stub_funcs.ptr_g_file_replace_readwrite_async(file, etag, make_backup, flags, io_priority, cancellable, callback, user_data); }
GFileIOStream * (g_file_replace_readwrite_finish)(GFile * file, GAsyncResult * res, GError * * error) { return stub_funcs.ptr_g_file_replace_readwrite_finish(file, res, error); }
gboolean (g_file_query_exists)(GFile * file, GCancellable * cancellable) { return stub_funcs.ptr_g_file_query_exists(file, cancellable); }
GFileType (g_file_query_file_type)(GFile * file, GFileQueryInfoFlags flags, GCancellable * cancellable) { return stub_funcs.ptr_g_file_query_file_type(file, flags, cancellable); }
GFileInfo * (g_file_query_info)(GFile * file, const char * attributes, GFileQueryInfoFlags flags, GCancellable * cancellable, GError * * error) { return stub_funcs.ptr_g_file_query_info(file, attributes, flags, cancellable, error); }
void (g_file_query_info_async)(GFile * file, const char * attributes, GFileQueryInfoFlags flags, int io_priority, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data) { stub_funcs.ptr_g_file_query_info_async(file, attributes, flags, io_priority, cancellable, callback, user_data); }
GFileInfo * (g_file_query_info_finish)(GFile * file, GAsyncResult * res, GError * * error) { return stub_funcs.ptr_g_file_query_info_finish(file, res, error); }
GFileInfo * (g_file_query_filesystem_info)(GFile * file, const char * attributes, GCancellable * cancellable, GError * * error) { return stub_funcs.ptr_g_file_query_filesystem_info(file, attributes, cancellable, error); }
void (g_file_query_filesystem_info_async)(GFile * file, const char * attributes, int io_priority, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data) { stub_funcs.ptr_g_file_query_filesystem_info_async(file, attributes, io_priority, cancellable, callback, user_data); }
GFileInfo * (g_file_query_filesystem_info_finish)(GFile * file, GAsyncResult * res, GError * * error) { return stub_funcs.ptr_g_file_query_filesystem_info_finish(file, res, error); }
GMount * (g_file_find_enclosing_mount)(GFile * file, GCancellable * cancellable, GError * * error) { return stub_funcs.ptr_g_file_find_enclosing_mount(file, cancellable, error); }
void (g_file_find_enclosing_mount_async)(GFile * file, int io_priority, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data) { stub_funcs.ptr_g_file_find_enclosing_mount_async(file, io_priority, cancellable, callback, user_data); }
GMount * (g_file_find_enclosing_mount_finish)(GFile * file, GAsyncResult * res, GError * * error) { return stub_funcs.ptr_g_file_find_enclosing_mount_finish(file, res, error); }
GFileEnumerator * (g_file_enumerate_children)(GFile * file, const char * attributes, GFileQueryInfoFlags flags, GCancellable * cancellable, GError * * error) { return stub_funcs.ptr_g_file_enumerate_children(file, attributes, flags, cancellable, error); }
void (g_file_enumerate_children_async)(GFile * file, const char * attributes, GFileQueryInfoFlags flags, int io_priority, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data) { stub_funcs.ptr_g_file_enumerate_children_async(file, attributes, flags, io_priority, cancellable, callback, user_data); }
GFileEnumerator * (g_file_enumerate_children_finish)(GFile * file, GAsyncResult * res, GError * * error) { return stub_funcs.ptr_g_file_enumerate_children_finish(file, res, error); }
GFile * (g_file_set_display_name)(GFile * file, const char * display_name, GCancellable * cancellable, GError * * error) { return stub_funcs.ptr_g_file_set_display_name(file, display_name, cancellable, error); }
void (g_file_set_display_name_async)(GFile * file, const char * display_name, int io_priority, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data) { stub_funcs.ptr_g_file_set_display_name_async(file, display_name, io_priority, cancellable, callback, user_data); }
GFile * (g_file_set_display_name_finish)(GFile * file, GAsyncResult * res, GError * * error) { return stub_funcs.ptr_g_file_set_display_name_finish(file, res, error); }
gboolean (g_file_delete)(GFile * file, GCancellable * cancellable, GError * * error) { return stub_funcs.ptr_g_file_delete(file, cancellable, error); }
void (g_file_delete_async)(GFile * file, int io_priority, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data) { stub_funcs.ptr_g_file_delete_async(file, io_priority, cancellable, callback, user_data); }
gboolean (g_file_delete_finish)(GFile * file, GAsyncResult * result, GError * * error) { return stub_funcs.ptr_g_file_delete_finish(file, result, error); }
gboolean (g_file_trash)(GFile * file, GCancellable * cancellable, GError * * error) { return stub_funcs.ptr_g_file_trash(file, cancellable, error); }
void (g_file_trash_async)(GFile * file, int io_priority, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data) { stub_funcs.ptr_g_file_trash_async(file, io_priority, cancellable, callback, user_data); }
gboolean (g_file_trash_finish)(GFile * file, GAsyncResult * result, GError * * error) { return stub_funcs.ptr_g_file_trash_finish(file, result, error); }
gboolean (g_file_copy)(GFile * source, GFile * destination, GFileCopyFlags flags, GCancellable * cancellable, GFileProgressCallback progress_callback, gpointer progress_callback_data, GError * * error) { return stub_funcs.ptr_g_file_copy(source, destination, flags, cancellable, progress_callback, progress_callback_data, error); }
void (g_file_copy_async)(GFile * source, GFile * destination, GFileCopyFlags flags, int io_priority, GCancellable * cancellable, GFileProgressCallback progress_callback, gpointer progress_callback_data, GAsyncReadyCallback callback, gpointer user_data) { stub_funcs.ptr_g_file_copy_async(source, destination, flags, io_priority, cancellable, progress_callback, progress_callback_data, callback, user_data); }
void (g_file_copy_async_with_closures)(GFile * source, GFile * destination, GFileCopyFlags flags, int io_priority, GCancellable * cancellable, GClosure * progress_callback_closure, GClosure * ready_callback_closure) { stub_funcs.ptr_g_file_copy_async_with_closures(source, destination, flags, io_priority, cancellable, progress_callback_closure, ready_callback_closure); }
gboolean (g_file_copy_finish)(GFile * file, GAsyncResult * res, GError * * error) { return stub_funcs.ptr_g_file_copy_finish(file, res, error); }
gboolean (g_file_move)(GFile * source, GFile * destination, GFileCopyFlags flags, GCancellable * cancellable, GFileProgressCallback progress_callback, gpointer progress_callback_data, GError * * error) { return stub_funcs.ptr_g_file_move(source, destination, flags, cancellable, progress_callback, progress_callback_data, error); }
void (g_file_move_async)(GFile * source, GFile * destination, GFileCopyFlags flags, int io_priority, GCancellable * cancellable, GFileProgressCallback progress_callback, gpointer progress_callback_data, GAsyncReadyCallback callback, gpointer user_data) { stub_funcs.ptr_g_file_move_async(source, destination, flags, io_priority, cancellable, progress_callback, progress_callback_data, callback, user_data); }
void (g_file_move_async_with_closures)(GFile * source, GFile * destination, GFileCopyFlags flags, int io_priority, GCancellable * cancellable, GClosure * progress_callback_closure, GClosure * ready_callback_closure) { stub_funcs.ptr_g_file_move_async_with_closures(source, destination, flags, io_priority, cancellable, progress_callback_closure, ready_callback_closure); }
gboolean (g_file_move_finish)(GFile * file, GAsyncResult * result, GError * * error) { return stub_funcs.ptr_g_file_move_finish(file, result, error); }
gboolean (g_file_make_directory)(GFile * file, GCancellable * cancellable, GError * * error) { return stub_funcs.ptr_g_file_make_directory(file, cancellable, error); }
void (g_file_make_directory_async)(GFile * file, int io_priority, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data) { stub_funcs.ptr_g_file_make_directory_async(file, io_priority, cancellable, callback, user_data); }
gboolean (g_file_make_directory_finish)(GFile * file, GAsyncResult * result, GError * * error) { return stub_funcs.ptr_g_file_make_directory_finish(file, result, error); }
gboolean (g_file_make_directory_with_parents)(GFile * file, GCancellable * cancellable, GError * * error) { return stub_funcs.ptr_g_file_make_directory_with_parents(file, cancellable, error); }
gboolean (g_file_make_symbolic_link)(GFile * file, const char * symlink_value, GCancellable * cancellable, GError * * error) { return stub_funcs.ptr_g_file_make_symbolic_link(file, symlink_value, cancellable, error); }
void (g_file_make_symbolic_link_async)(GFile * file, const char * symlink_value, int io_priority, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data) { stub_funcs.ptr_g_file_make_symbolic_link_async(file, symlink_value, io_priority, cancellable, callback, user_data); }
gboolean (g_file_make_symbolic_link_finish)(GFile * file, GAsyncResult * result, GError * * error) { return stub_funcs.ptr_g_file_make_symbolic_link_finish(file, result, error); }
GFileAttributeInfoList * (g_file_query_settable_attributes)(GFile * file, GCancellable * cancellable, GError * * error) { return stub_funcs.ptr_g_file_query_settable_attributes(file, cancellable, error); }
GFileAttributeInfoList * (g_file_query_writable_namespaces)(GFile * file, GCancellable * cancellable, GError * * error) { return stub_funcs.ptr_g_file_query_writable_namespaces(file, cancellable, error); }
gboolean (g_file_set_attribute)(GFile * file, const char * attribute, GFileAttributeType type, gpointer value_p, GFileQueryInfoFlags flags, GCancellable * cancellable, GError * * error) { return stub_funcs.ptr_g_file_set_attribute(file, attribute, type, value_p, flags, cancellable, error); }
gboolean (g_file_set_attributes_from_info)(GFile * file, GFileInfo * info, GFileQueryInfoFlags flags, GCancellable * cancellable, GError * * error) { return stub_funcs.ptr_g_file_set_attributes_from_info(file, info, flags, cancellable, error); }
void (g_file_set_attributes_async)(GFile * file, GFileInfo * info, GFileQueryInfoFlags flags, int io_priority, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data) { stub_funcs.ptr_g_file_set_attributes_async(file, info, flags, io_priority, cancellable, callback, user_data); }
gboolean (g_file_set_attributes_finish)(GFile * file, GAsyncResult * result, GFileInfo * * info, GError * * error) { return stub_funcs.ptr_g_file_set_attributes_finish(file, result, info, error); }
gboolean (g_file_set_attribute_string)(GFile * file, const char * attribute, const char * value, GFileQueryInfoFlags flags, GCancellable * cancellable, GError * * error) { return stub_funcs.ptr_g_file_set_attribute_string(file, attribute, value, flags, cancellable, error); }
gboolean (g_file_set_attribute_byte_string)(GFile * file, const char * attribute, const char * value, GFileQueryInfoFlags flags, GCancellable * cancellable, GError * * error) { return stub_funcs.ptr_g_file_set_attribute_byte_string(file, attribute, value, flags, cancellable, error); }
gboolean (g_file_set_attribute_uint32)(GFile * file, const char * attribute, guint32 value, GFileQueryInfoFlags flags, GCancellable * cancellable, GError * * error) { return stub_funcs.ptr_g_file_set_attribute_uint32(file, attribute, value, flags, cancellable, error); }
gboolean (g_file_set_attribute_int32)(GFile * file, const char * attribute, gint32 value, GFileQueryInfoFlags flags, GCancellable * cancellable, GError * * error) { return stub_funcs.ptr_g_file_set_attribute_int32(file, attribute, value, flags, cancellable, error); }
gboolean (g_file_set_attribute_uint64)(GFile * file, const char * attribute, guint64 value, GFileQueryInfoFlags flags, GCancellable * cancellable, GError * * error) { return stub_funcs.ptr_g_file_set_attribute_uint64(file, attribute, value, flags, cancellable, error); }
gboolean (g_file_set_attribute_int64)(GFile * file, const char * attribute, gint64 value, GFileQueryInfoFlags flags, GCancellable * cancellable, GError * * error) { return stub_funcs.ptr_g_file_set_attribute_int64(file, attribute, value, flags, cancellable, error); }
void (g_file_mount_enclosing_volume)(GFile * location, GMountMountFlags flags, GMountOperation * mount_operation, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data) { stub_funcs.ptr_g_file_mount_enclosing_volume(location, flags, mount_operation, cancellable, callback, user_data); }
gboolean (g_file_mount_enclosing_volume_finish)(GFile * location, GAsyncResult * result, GError * * error) { return stub_funcs.ptr_g_file_mount_enclosing_volume_finish(location, result, error); }
void (g_file_mount_mountable)(GFile * file, GMountMountFlags flags, GMountOperation * mount_operation, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data) { stub_funcs.ptr_g_file_mount_mountable(file, flags, mount_operation, cancellable, callback, user_data); }
GFile * (g_file_mount_mountable_finish)(GFile * file, GAsyncResult * result, GError * * error) { return stub_funcs.ptr_g_file_mount_mountable_finish(file, result, error); }
void (g_file_unmount_mountable)(GFile * file, GMountUnmountFlags flags, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data) { stub_funcs.ptr_g_file_unmount_mountable(file, flags, cancellable, callback, user_data); }
gboolean (g_file_unmount_mountable_finish)(GFile * file, GAsyncResult * result, GError * * error) { return stub_funcs.ptr_g_file_unmount_mountable_finish(file, result, error); }
void (g_file_unmount_mountable_with_operation)(GFile * file, GMountUnmountFlags flags, GMountOperation * mount_operation, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data) { stub_funcs.ptr_g_file_unmount_mountable_with_operation(file, flags, mount_operation, cancellable, callback, user_data); }
gboolean (g_file_unmount_mountable_with_operation_finish)(GFile * file, GAsyncResult * result, GError * * error) { return stub_funcs.ptr_g_file_unmount_mountable_with_operation_finish(file, result, error); }
void (g_file_eject_mountable)(GFile * file, GMountUnmountFlags flags, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data) { stub_funcs.ptr_g_file_eject_mountable(file, flags, cancellable, callback, user_data); }
gboolean (g_file_eject_mountable_finish)(GFile * file, GAsyncResult * result, GError * * error) { return stub_funcs.ptr_g_file_eject_mountable_finish(file, result, error); }
void (g_file_eject_mountable_with_operation)(GFile * file, GMountUnmountFlags flags, GMountOperation * mount_operation, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data) { stub_funcs.ptr_g_file_eject_mountable_with_operation(file, flags, mount_operation, cancellable, callback, user_data); }
gboolean (g_file_eject_mountable_with_operation_finish)(GFile * file, GAsyncResult * result, GError * * error) { return stub_funcs.ptr_g_file_eject_mountable_with_operation_finish(file, result, error); }
char * (g_file_build_attribute_list_for_copy)(GFile * file, GFileCopyFlags flags, GCancellable * cancellable, GError * * error) { return stub_funcs.ptr_g_file_build_attribute_list_for_copy(file, flags, cancellable, error); }
gboolean (g_file_copy_attributes)(GFile * source, GFile * destination, GFileCopyFlags flags, GCancellable * cancellable, GError * * error) { return stub_funcs.ptr_g_file_copy_attributes(source, destination, flags, cancellable, error); }
GFileMonitor * (g_file_monitor_directory)(GFile * file, GFileMonitorFlags flags, GCancellable * cancellable, GError * * error) { return stub_funcs.ptr_g_file_monitor_directory(file, flags, cancellable, error); }
GFileMonitor * (g_file_monitor_file)(GFile * file, GFileMonitorFlags flags, GCancellable * cancellable, GError * * error) { return stub_funcs.ptr_g_file_monitor_file(file, flags, cancellable, error); }
GFileMonitor * (g_file_monitor)(GFile * file, GFileMonitorFlags flags, GCancellable * cancellable, GError * * error) { return stub_funcs.ptr_g_file_monitor(file, flags, cancellable, error); }
gboolean (g_file_measure_disk_usage)(GFile * file, GFileMeasureFlags flags, GCancellable * cancellable, GFileMeasureProgressCallback progress_callback, gpointer progress_data, guint64 * disk_usage, guint64 * num_dirs, guint64 * num_files, GError * * error) { return stub_funcs.ptr_g_file_measure_disk_usage(file, flags, cancellable, progress_callback, progress_data, disk_usage, num_dirs, num_files, error); }
void (g_file_measure_disk_usage_async)(GFile * file, GFileMeasureFlags flags, gint io_priority, GCancellable * cancellable, GFileMeasureProgressCallback progress_callback, gpointer progress_data, GAsyncReadyCallback callback, gpointer user_data) { stub_funcs.ptr_g_file_measure_disk_usage_async(file, flags, io_priority, cancellable, progress_callback, progress_data, callback, user_data); }
gboolean (g_file_measure_disk_usage_finish)(GFile * file, GAsyncResult * result, guint64 * disk_usage, guint64 * num_dirs, guint64 * num_files, GError * * error) { return stub_funcs.ptr_g_file_measure_disk_usage_finish(file, result, disk_usage, num_dirs, num_files, error); }
void (g_file_start_mountable)(GFile * file, GDriveStartFlags flags, GMountOperation * start_operation, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data) { stub_funcs.ptr_g_file_start_mountable(file, flags, start_operation, cancellable, callback, user_data); }
gboolean (g_file_start_mountable_finish)(GFile * file, GAsyncResult * result, GError * * error) { return stub_funcs.ptr_g_file_start_mountable_finish(file, result, error); }
void (g_file_stop_mountable)(GFile * file, GMountUnmountFlags flags, GMountOperation * mount_operation, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data) { stub_funcs.ptr_g_file_stop_mountable(file, flags, mount_operation, cancellable, callback, user_data); }
gboolean (g_file_stop_mountable_finish)(GFile * file, GAsyncResult * result, GError * * error) { return stub_funcs.ptr_g_file_stop_mountable_finish(file, result, error); }
void (g_file_poll_mountable)(GFile * file, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data) { stub_funcs.ptr_g_file_poll_mountable(file, cancellable, callback, user_data); }
gboolean (g_file_poll_mountable_finish)(GFile * file, GAsyncResult * result, GError * * error) { return stub_funcs.ptr_g_file_poll_mountable_finish(file, result, error); }
GAppInfo * (g_file_query_default_handler)(GFile * file, GCancellable * cancellable, GError * * error) { return stub_funcs.ptr_g_file_query_default_handler(file, cancellable, error); }
void (g_file_query_default_handler_async)(GFile * file, int io_priority, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data) { stub_funcs.ptr_g_file_query_default_handler_async(file, io_priority, cancellable, callback, user_data); }
GAppInfo * (g_file_query_default_handler_finish)(GFile * file, GAsyncResult * result, GError * * error) { return stub_funcs.ptr_g_file_query_default_handler_finish(file, result, error); }
gboolean (g_file_load_contents)(GFile * file, GCancellable * cancellable, char * * contents, gsize * length, char * * etag_out, GError * * error) { return stub_funcs.ptr_g_file_load_contents(file, cancellable, contents, length, etag_out, error); }
void (g_file_load_contents_async)(GFile * file, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data) { stub_funcs.ptr_g_file_load_contents_async(file, cancellable, callback, user_data); }
gboolean (g_file_load_contents_finish)(GFile * file, GAsyncResult * res, char * * contents, gsize * length, char * * etag_out, GError * * error) { return stub_funcs.ptr_g_file_load_contents_finish(file, res, contents, length, etag_out, error); }
void (g_file_load_partial_contents_async)(GFile * file, GCancellable * cancellable, GFileReadMoreCallback read_more_callback, GAsyncReadyCallback callback, gpointer user_data) { stub_funcs.ptr_g_file_load_partial_contents_async(file, cancellable, read_more_callback, callback, user_data); }
gboolean (g_file_load_partial_contents_finish)(GFile * file, GAsyncResult * res, char * * contents, gsize * length, char * * etag_out, GError * * error) { return stub_funcs.ptr_g_file_load_partial_contents_finish(file, res, contents, length, etag_out, error); }
gboolean (g_file_replace_contents)(GFile * file, const char * contents, gsize length, const char * etag, gboolean make_backup, GFileCreateFlags flags, char * * new_etag, GCancellable * cancellable, GError * * error) { return stub_funcs.ptr_g_file_replace_contents(file, contents, length, etag, make_backup, flags, new_etag, cancellable, error); }
void (g_file_replace_contents_async)(GFile * file, const char * contents, gsize length, const char * etag, gboolean make_backup, GFileCreateFlags flags, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data) { stub_funcs.ptr_g_file_replace_contents_async(file, contents, length, etag, make_backup, flags, cancellable, callback, user_data); }
void (g_file_replace_contents_bytes_async)(GFile * file, GBytes * contents, const char * etag, gboolean make_backup, GFileCreateFlags flags, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data) { stub_funcs.ptr_g_file_replace_contents_bytes_async(file, contents, etag, make_backup, flags, cancellable, callback, user_data); }
gboolean (g_file_replace_contents_finish)(GFile * file, GAsyncResult * res, char * * new_etag, GError * * error) { return stub_funcs.ptr_g_file_replace_contents_finish(file, res, new_etag, error); }
gboolean (g_file_supports_thread_contexts)(GFile * file) { return stub_funcs.ptr_g_file_supports_thread_contexts(file); }
GBytes * (g_file_load_bytes)(GFile * file, GCancellable * cancellable, gchar * * etag_out, GError * * error) { return stub_funcs.ptr_g_file_load_bytes(file, cancellable, etag_out, error); }
void (g_file_load_bytes_async)(GFile * file, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data) { stub_funcs.ptr_g_file_load_bytes_async(file, cancellable, callback, user_data); }
GBytes * (g_file_load_bytes_finish)(GFile * file, GAsyncResult * result, gchar * * etag_out, GError * * error) { return stub_funcs.ptr_g_file_load_bytes_finish(file, result, etag_out, error); }
GType (g_file_attribute_info_list_get_type)(void) { return stub_funcs.ptr_g_file_attribute_info_list_get_type(); }
GFileAttributeInfoList * (g_file_attribute_info_list_new)(void) { return stub_funcs.ptr_g_file_attribute_info_list_new(); }
GFileAttributeInfoList * (g_file_attribute_info_list_ref)(GFileAttributeInfoList * list) { return stub_funcs.ptr_g_file_attribute_info_list_ref(list); }
void (g_file_attribute_info_list_unref)(GFileAttributeInfoList * list) { stub_funcs.ptr_g_file_attribute_info_list_unref(list); }
GFileAttributeInfoList * (g_file_attribute_info_list_dup)(GFileAttributeInfoList * list) { return stub_funcs.ptr_g_file_attribute_info_list_dup(list); }
const GFileAttributeInfo * (g_file_attribute_info_list_lookup)(GFileAttributeInfoList * list, const char * name) { return stub_funcs.ptr_g_file_attribute_info_list_lookup(list, name); }
void (g_file_attribute_info_list_add)(GFileAttributeInfoList * list, const char * name, GFileAttributeType type, GFileAttributeInfoFlags flags) { stub_funcs.ptr_g_file_attribute_info_list_add(list, name, type, flags); }
GType (g_file_enumerator_get_type)(void) { return stub_funcs.ptr_g_file_enumerator_get_type(); }
GFileInfo * (g_file_enumerator_next_file)(GFileEnumerator * enumerator, GCancellable * cancellable, GError * * error) { return stub_funcs.ptr_g_file_enumerator_next_file(enumerator, cancellable, error); }
gboolean (g_file_enumerator_close)(GFileEnumerator * enumerator, GCancellable * cancellable, GError * * error) { return stub_funcs.ptr_g_file_enumerator_close(enumerator, cancellable, error); }
void (g_file_enumerator_next_files_async)(GFileEnumerator * enumerator, int num_files, int io_priority, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data) { stub_funcs.ptr_g_file_enumerator_next_files_async(enumerator, num_files, io_priority, cancellable, callback, user_data); }
GList * (g_file_enumerator_next_files_finish)(GFileEnumerator * enumerator, GAsyncResult * result, GError * * error) { return stub_funcs.ptr_g_file_enumerator_next_files_finish(enumerator, result, error); }
void (g_file_enumerator_close_async)(GFileEnumerator * enumerator, int io_priority, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data) { stub_funcs.ptr_g_file_enumerator_close_async(enumerator, io_priority, cancellable, callback, user_data); }
gboolean (g_file_enumerator_close_finish)(GFileEnumerator * enumerator, GAsyncResult * result, GError * * error) { return stub_funcs.ptr_g_file_enumerator_close_finish(enumerator, result, error); }
gboolean (g_file_enumerator_is_closed)(GFileEnumerator * enumerator) { return stub_funcs.ptr_g_file_enumerator_is_closed(enumerator); }
gboolean (g_file_enumerator_has_pending)(GFileEnumerator * enumerator) { return stub_funcs.ptr_g_file_enumerator_has_pending(enumerator); }
void (g_file_enumerator_set_pending)(GFileEnumerator * enumerator, gboolean pending) { stub_funcs.ptr_g_file_enumerator_set_pending(enumerator, pending); }
GFile * (g_file_enumerator_get_container)(GFileEnumerator * enumerator) { return stub_funcs.ptr_g_file_enumerator_get_container(enumerator); }
GFile * (g_file_enumerator_get_child)(GFileEnumerator * enumerator, GFileInfo * info) { return stub_funcs.ptr_g_file_enumerator_get_child(enumerator, info); }
gboolean (g_file_enumerator_iterate)(GFileEnumerator * direnum, GFileInfo * * out_info, GFile * * out_child, GCancellable * cancellable, GError * * error) { return stub_funcs.ptr_g_file_enumerator_iterate(direnum, out_info, out_child, cancellable, error); }
GType (g_file_icon_get_type)(void) { return stub_funcs.ptr_g_file_icon_get_type(); }
GIcon * (g_file_icon_new)(GFile * file) { return stub_funcs.ptr_g_file_icon_new(file); }
GFile * (g_file_icon_get_file)(GFileIcon * icon) { return stub_funcs.ptr_g_file_icon_get_file(icon); }
GType (g_file_info_get_type)(void) { return stub_funcs.ptr_g_file_info_get_type(); }
GFileInfo * (g_file_info_new)(void) { return stub_funcs.ptr_g_file_info_new(); }
GFileInfo * (g_file_info_dup)(GFileInfo * other) { return stub_funcs.ptr_g_file_info_dup(other); }
void (g_file_info_copy_into)(GFileInfo * src_info, GFileInfo * dest_info) { stub_funcs.ptr_g_file_info_copy_into(src_info, dest_info); }
gboolean (g_file_info_has_attribute)(GFileInfo * info, const char * attribute) { return stub_funcs.ptr_g_file_info_has_attribute(info, attribute); }
gboolean (g_file_info_has_namespace)(GFileInfo * info, const char * name_space) { return stub_funcs.ptr_g_file_info_has_namespace(info, name_space); }
char * * (g_file_info_list_attributes)(GFileInfo * info, const char * name_space) { return stub_funcs.ptr_g_file_info_list_attributes(info, name_space); }
gboolean (g_file_info_get_attribute_data)(GFileInfo * info, const char * attribute, GFileAttributeType * type, gpointer * value_pp, GFileAttributeStatus * status) { return stub_funcs.ptr_g_file_info_get_attribute_data(info, attribute, type, value_pp, status); }
GFileAttributeType (g_file_info_get_attribute_type)(GFileInfo * info, const char * attribute) { return stub_funcs.ptr_g_file_info_get_attribute_type(info, attribute); }
void (g_file_info_remove_attribute)(GFileInfo * info, const char * attribute) { stub_funcs.ptr_g_file_info_remove_attribute(info, attribute); }
GFileAttributeStatus (g_file_info_get_attribute_status)(GFileInfo * info, const char * attribute) { return stub_funcs.ptr_g_file_info_get_attribute_status(info, attribute); }
gboolean (g_file_info_set_attribute_status)(GFileInfo * info, const char * attribute, GFileAttributeStatus status) { return stub_funcs.ptr_g_file_info_set_attribute_status(info, attribute, status); }
char * (g_file_info_get_attribute_as_string)(GFileInfo * info, const char * attribute) { return stub_funcs.ptr_g_file_info_get_attribute_as_string(info, attribute); }
const char * (g_file_info_get_attribute_string)(GFileInfo * info, const char * attribute) { return stub_funcs.ptr_g_file_info_get_attribute_string(info, attribute); }
const char * (g_file_info_get_attribute_byte_string)(GFileInfo * info, const char * attribute) { return stub_funcs.ptr_g_file_info_get_attribute_byte_string(info, attribute); }
gboolean (g_file_info_get_attribute_boolean)(GFileInfo * info, const char * attribute) { return stub_funcs.ptr_g_file_info_get_attribute_boolean(info, attribute); }
guint32 (g_file_info_get_attribute_uint32)(GFileInfo * info, const char * attribute) { return stub_funcs.ptr_g_file_info_get_attribute_uint32(info, attribute); }
gint32 (g_file_info_get_attribute_int32)(GFileInfo * info, const char * attribute) { return stub_funcs.ptr_g_file_info_get_attribute_int32(info, attribute); }
guint64 (g_file_info_get_attribute_uint64)(GFileInfo * info, const char * attribute) { return stub_funcs.ptr_g_file_info_get_attribute_uint64(info, attribute); }
gint64 (g_file_info_get_attribute_int64)(GFileInfo * info, const char * attribute) { return stub_funcs.ptr_g_file_info_get_attribute_int64(info, attribute); }
GObject * (g_file_info_get_attribute_object)(GFileInfo * info, const char * attribute) { return stub_funcs.ptr_g_file_info_get_attribute_object(info, attribute); }
char * * (g_file_info_get_attribute_stringv)(GFileInfo * info, const char * attribute) { return stub_funcs.ptr_g_file_info_get_attribute_stringv(info, attribute); }
const char * (g_file_info_get_attribute_file_path)(GFileInfo * info, const char * attribute) { return stub_funcs.ptr_g_file_info_get_attribute_file_path(info, attribute); }
void (g_file_info_set_attribute)(GFileInfo * info, const char * attribute, GFileAttributeType type, gpointer value_p) { stub_funcs.ptr_g_file_info_set_attribute(info, attribute, type, value_p); }
void (g_file_info_set_attribute_string)(GFileInfo * info, const char * attribute, const char * attr_value) { stub_funcs.ptr_g_file_info_set_attribute_string(info, attribute, attr_value); }
void (g_file_info_set_attribute_byte_string)(GFileInfo * info, const char * attribute, const char * attr_value) { stub_funcs.ptr_g_file_info_set_attribute_byte_string(info, attribute, attr_value); }
void (g_file_info_set_attribute_boolean)(GFileInfo * info, const char * attribute, gboolean attr_value) { stub_funcs.ptr_g_file_info_set_attribute_boolean(info, attribute, attr_value); }
void (g_file_info_set_attribute_uint32)(GFileInfo * info, const char * attribute, guint32 attr_value) { stub_funcs.ptr_g_file_info_set_attribute_uint32(info, attribute, attr_value); }
void (g_file_info_set_attribute_int32)(GFileInfo * info, const char * attribute, gint32 attr_value) { stub_funcs.ptr_g_file_info_set_attribute_int32(info, attribute, attr_value); }
void (g_file_info_set_attribute_uint64)(GFileInfo * info, const char * attribute, guint64 attr_value) { stub_funcs.ptr_g_file_info_set_attribute_uint64(info, attribute, attr_value); }
void (g_file_info_set_attribute_int64)(GFileInfo * info, const char * attribute, gint64 attr_value) { stub_funcs.ptr_g_file_info_set_attribute_int64(info, attribute, attr_value); }
void (g_file_info_set_attribute_object)(GFileInfo * info, const char * attribute, GObject * attr_value) { stub_funcs.ptr_g_file_info_set_attribute_object(info, attribute, attr_value); }
void (g_file_info_set_attribute_stringv)(GFileInfo * info, const char * attribute, char * * attr_value) { stub_funcs.ptr_g_file_info_set_attribute_stringv(info, attribute, attr_value); }
void (g_file_info_set_attribute_file_path)(GFileInfo * info, const char * attribute, const char * attr_value) { stub_funcs.ptr_g_file_info_set_attribute_file_path(info, attribute, attr_value); }
void (g_file_info_clear_status)(GFileInfo * info) { stub_funcs.ptr_g_file_info_clear_status(info); }
GDateTime * (g_file_info_get_deletion_date)(GFileInfo * info) { return stub_funcs.ptr_g_file_info_get_deletion_date(info); }
GFileType (g_file_info_get_file_type)(GFileInfo * info) { return stub_funcs.ptr_g_file_info_get_file_type(info); }
gboolean (g_file_info_get_is_hidden)(GFileInfo * info) { return stub_funcs.ptr_g_file_info_get_is_hidden(info); }
gboolean (g_file_info_get_is_backup)(GFileInfo * info) { return stub_funcs.ptr_g_file_info_get_is_backup(info); }
gboolean (g_file_info_get_is_symlink)(GFileInfo * info) { return stub_funcs.ptr_g_file_info_get_is_symlink(info); }
const char * (g_file_info_get_name)(GFileInfo * info) { return stub_funcs.ptr_g_file_info_get_name(info); }
const char * (g_file_info_get_display_name)(GFileInfo * info) { return stub_funcs.ptr_g_file_info_get_display_name(info); }
const char * (g_file_info_get_edit_name)(GFileInfo * info) { return stub_funcs.ptr_g_file_info_get_edit_name(info); }
GIcon * (g_file_info_get_icon)(GFileInfo * info) { return stub_funcs.ptr_g_file_info_get_icon(info); }
GIcon * (g_file_info_get_symbolic_icon)(GFileInfo * info) { return stub_funcs.ptr_g_file_info_get_symbolic_icon(info); }
const char * (g_file_info_get_content_type)(GFileInfo * info) { return stub_funcs.ptr_g_file_info_get_content_type(info); }
goffset (g_file_info_get_size)(GFileInfo * info) { return stub_funcs.ptr_g_file_info_get_size(info); }
void (g_file_info_get_modification_time)(GFileInfo * info, GTimeVal * result) { stub_funcs.ptr_g_file_info_get_modification_time(info, result); }
GDateTime * (g_file_info_get_modification_date_time)(GFileInfo * info) { return stub_funcs.ptr_g_file_info_get_modification_date_time(info); }
GDateTime * (g_file_info_get_access_date_time)(GFileInfo * info) { return stub_funcs.ptr_g_file_info_get_access_date_time(info); }
GDateTime * (g_file_info_get_creation_date_time)(GFileInfo * info) { return stub_funcs.ptr_g_file_info_get_creation_date_time(info); }
const char * (g_file_info_get_symlink_target)(GFileInfo * info) { return stub_funcs.ptr_g_file_info_get_symlink_target(info); }
const char * (g_file_info_get_etag)(GFileInfo * info) { return stub_funcs.ptr_g_file_info_get_etag(info); }
gint32 (g_file_info_get_sort_order)(GFileInfo * info) { return stub_funcs.ptr_g_file_info_get_sort_order(info); }
void (g_file_info_set_attribute_mask)(GFileInfo * info, GFileAttributeMatcher * mask) { stub_funcs.ptr_g_file_info_set_attribute_mask(info, mask); }
void (g_file_info_unset_attribute_mask)(GFileInfo * info) { stub_funcs.ptr_g_file_info_unset_attribute_mask(info); }
void (g_file_info_set_file_type)(GFileInfo * info, GFileType type) { stub_funcs.ptr_g_file_info_set_file_type(info, type); }
void (g_file_info_set_is_hidden)(GFileInfo * info, gboolean is_hidden) { stub_funcs.ptr_g_file_info_set_is_hidden(info, is_hidden); }
void (g_file_info_set_is_symlink)(GFileInfo * info, gboolean is_symlink) { stub_funcs.ptr_g_file_info_set_is_symlink(info, is_symlink); }
void (g_file_info_set_name)(GFileInfo * info, const char * name) { stub_funcs.ptr_g_file_info_set_name(info, name); }
void (g_file_info_set_display_name)(GFileInfo * info, const char * display_name) { stub_funcs.ptr_g_file_info_set_display_name(info, display_name); }
void (g_file_info_set_edit_name)(GFileInfo * info, const char * edit_name) { stub_funcs.ptr_g_file_info_set_edit_name(info, edit_name); }
void (g_file_info_set_icon)(GFileInfo * info, GIcon * icon) { stub_funcs.ptr_g_file_info_set_icon(info, icon); }
void (g_file_info_set_symbolic_icon)(GFileInfo * info, GIcon * icon) { stub_funcs.ptr_g_file_info_set_symbolic_icon(info, icon); }
void (g_file_info_set_content_type)(GFileInfo * info, const char * content_type) { stub_funcs.ptr_g_file_info_set_content_type(info, content_type); }
void (g_file_info_set_size)(GFileInfo * info, goffset size) { stub_funcs.ptr_g_file_info_set_size(info, size); }
void (g_file_info_set_modification_time)(GFileInfo * info, GTimeVal * mtime) { stub_funcs.ptr_g_file_info_set_modification_time(info, mtime); }
void (g_file_info_set_modification_date_time)(GFileInfo * info, GDateTime * mtime) { stub_funcs.ptr_g_file_info_set_modification_date_time(info, mtime); }
void (g_file_info_set_access_date_time)(GFileInfo * info, GDateTime * atime) { stub_funcs.ptr_g_file_info_set_access_date_time(info, atime); }
void (g_file_info_set_creation_date_time)(GFileInfo * info, GDateTime * creation_time) { stub_funcs.ptr_g_file_info_set_creation_date_time(info, creation_time); }
void (g_file_info_set_symlink_target)(GFileInfo * info, const char * symlink_target) { stub_funcs.ptr_g_file_info_set_symlink_target(info, symlink_target); }
void (g_file_info_set_sort_order)(GFileInfo * info, gint32 sort_order) { stub_funcs.ptr_g_file_info_set_sort_order(info, sort_order); }
GType (g_file_attribute_matcher_get_type)(void) { return stub_funcs.ptr_g_file_attribute_matcher_get_type(); }
GFileAttributeMatcher * (g_file_attribute_matcher_new)(const char * attributes) { return stub_funcs.ptr_g_file_attribute_matcher_new(attributes); }
GFileAttributeMatcher * (g_file_attribute_matcher_ref)(GFileAttributeMatcher * matcher) { return stub_funcs.ptr_g_file_attribute_matcher_ref(matcher); }
void (g_file_attribute_matcher_unref)(GFileAttributeMatcher * matcher) { stub_funcs.ptr_g_file_attribute_matcher_unref(matcher); }
GFileAttributeMatcher * (g_file_attribute_matcher_subtract)(GFileAttributeMatcher * matcher, GFileAttributeMatcher * subtract) { return stub_funcs.ptr_g_file_attribute_matcher_subtract(matcher, subtract); }
gboolean (g_file_attribute_matcher_matches)(GFileAttributeMatcher * matcher, const char * attribute) { return stub_funcs.ptr_g_file_attribute_matcher_matches(matcher, attribute); }
gboolean (g_file_attribute_matcher_matches_only)(GFileAttributeMatcher * matcher, const char * attribute) { return stub_funcs.ptr_g_file_attribute_matcher_matches_only(matcher, attribute); }
gboolean (g_file_attribute_matcher_enumerate_namespace)(GFileAttributeMatcher * matcher, const char * ns) { return stub_funcs.ptr_g_file_attribute_matcher_enumerate_namespace(matcher, ns); }
const char * (g_file_attribute_matcher_enumerate_next)(GFileAttributeMatcher * matcher) { return stub_funcs.ptr_g_file_attribute_matcher_enumerate_next(matcher); }
char * (g_file_attribute_matcher_to_string)(GFileAttributeMatcher * matcher) { return stub_funcs.ptr_g_file_attribute_matcher_to_string(matcher); }
GType (g_file_input_stream_get_type)(void) { return stub_funcs.ptr_g_file_input_stream_get_type(); }
GFileInfo * (g_file_input_stream_query_info)(GFileInputStream * stream, const char * attributes, GCancellable * cancellable, GError * * error) { return stub_funcs.ptr_g_file_input_stream_query_info(stream, attributes, cancellable, error); }
void (g_file_input_stream_query_info_async)(GFileInputStream * stream, const char * attributes, int io_priority, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data) { stub_funcs.ptr_g_file_input_stream_query_info_async(stream, attributes, io_priority, cancellable, callback, user_data); }
GFileInfo * (g_file_input_stream_query_info_finish)(GFileInputStream * stream, GAsyncResult * result, GError * * error) { return stub_funcs.ptr_g_file_input_stream_query_info_finish(stream, result, error); }
GQuark (g_io_error_quark)(void) { return stub_funcs.ptr_g_io_error_quark(); }
GIOErrorEnum (g_io_error_from_errno)(gint err_no) { return stub_funcs.ptr_g_io_error_from_errno(err_no); }
GIOErrorEnum (g_io_error_from_file_error)(GFileError file_error) { return stub_funcs.ptr_g_io_error_from_file_error(file_error); }
GType (g_io_stream_get_type)(void) { return stub_funcs.ptr_g_io_stream_get_type(); }
GInputStream * (g_io_stream_get_input_stream)(GIOStream * stream) { return stub_funcs.ptr_g_io_stream_get_input_stream(stream); }
GOutputStream * (g_io_stream_get_output_stream)(GIOStream * stream) { return stub_funcs.ptr_g_io_stream_get_output_stream(stream); }
void (g_io_stream_splice_async)(GIOStream * stream1, GIOStream * stream2, GIOStreamSpliceFlags flags, int io_priority, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data) { stub_funcs.ptr_g_io_stream_splice_async(stream1, stream2, flags, io_priority, cancellable, callback, user_data); }
gboolean (g_io_stream_splice_finish)(GAsyncResult * result, GError * * error) { return stub_funcs.ptr_g_io_stream_splice_finish(result, error); }
gboolean (g_io_stream_close)(GIOStream * stream, GCancellable * cancellable, GError * * error) { return stub_funcs.ptr_g_io_stream_close(stream, cancellable, error); }
void (g_io_stream_close_async)(GIOStream * stream, int io_priority, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data) { stub_funcs.ptr_g_io_stream_close_async(stream, io_priority, cancellable, callback, user_data); }
gboolean (g_io_stream_close_finish)(GIOStream * stream, GAsyncResult * result, GError * * error) { return stub_funcs.ptr_g_io_stream_close_finish(stream, result, error); }
gboolean (g_io_stream_is_closed)(GIOStream * stream) { return stub_funcs.ptr_g_io_stream_is_closed(stream); }
gboolean (g_io_stream_has_pending)(GIOStream * stream) { return stub_funcs.ptr_g_io_stream_has_pending(stream); }
gboolean (g_io_stream_set_pending)(GIOStream * stream, GError * * error) { return stub_funcs.ptr_g_io_stream_set_pending(stream, error); }
void (g_io_stream_clear_pending)(GIOStream * stream) { stub_funcs.ptr_g_io_stream_clear_pending(stream); }
GType (g_file_io_stream_get_type)(void) { return stub_funcs.ptr_g_file_io_stream_get_type(); }
GFileInfo * (g_file_io_stream_query_info)(GFileIOStream * stream, const char * attributes, GCancellable * cancellable, GError * * error) { return stub_funcs.ptr_g_file_io_stream_query_info(stream, attributes, cancellable, error); }
void (g_file_io_stream_query_info_async)(GFileIOStream * stream, const char * attributes, int io_priority, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data) { stub_funcs.ptr_g_file_io_stream_query_info_async(stream, attributes, io_priority, cancellable, callback, user_data); }
GFileInfo * (g_file_io_stream_query_info_finish)(GFileIOStream * stream, GAsyncResult * result, GError * * error) { return stub_funcs.ptr_g_file_io_stream_query_info_finish(stream, result, error); }
char * (g_file_io_stream_get_etag)(GFileIOStream * stream) { return stub_funcs.ptr_g_file_io_stream_get_etag(stream); }
GType (g_file_monitor_get_type)(void) { return stub_funcs.ptr_g_file_monitor_get_type(); }
gboolean (g_file_monitor_cancel)(GFileMonitor * monitor) { return stub_funcs.ptr_g_file_monitor_cancel(monitor); }
gboolean (g_file_monitor_is_cancelled)(GFileMonitor * monitor) { return stub_funcs.ptr_g_file_monitor_is_cancelled(monitor); }
void (g_file_monitor_set_rate_limit)(GFileMonitor * monitor, gint limit_msecs) { stub_funcs.ptr_g_file_monitor_set_rate_limit(monitor, limit_msecs); }
void (g_file_monitor_emit_event)(GFileMonitor * monitor, GFile * child, GFile * other_file, GFileMonitorEvent event_type) { stub_funcs.ptr_g_file_monitor_emit_event(monitor, child, other_file, event_type); }
GType (g_filename_completer_get_type)(void) { return stub_funcs.ptr_g_filename_completer_get_type(); }
GFilenameCompleter * (g_filename_completer_new)(void) { return stub_funcs.ptr_g_filename_completer_new(); }
char * (g_filename_completer_get_completion_suffix)(GFilenameCompleter * completer, const char * initial_text) { return stub_funcs.ptr_g_filename_completer_get_completion_suffix(completer, initial_text); }
char * * (g_filename_completer_get_completions)(GFilenameCompleter * completer, const char * initial_text) { return stub_funcs.ptr_g_filename_completer_get_completions(completer, initial_text); }
void (g_filename_completer_set_dirs_only)(GFilenameCompleter * completer, gboolean dirs_only) { stub_funcs.ptr_g_filename_completer_set_dirs_only(completer, dirs_only); }
GType (g_file_output_stream_get_type)(void) { return stub_funcs.ptr_g_file_output_stream_get_type(); }
GFileInfo * (g_file_output_stream_query_info)(GFileOutputStream * stream, const char * attributes, GCancellable * cancellable, GError * * error) { return stub_funcs.ptr_g_file_output_stream_query_info(stream, attributes, cancellable, error); }
void (g_file_output_stream_query_info_async)(GFileOutputStream * stream, const char * attributes, int io_priority, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data) { stub_funcs.ptr_g_file_output_stream_query_info_async(stream, attributes, io_priority, cancellable, callback, user_data); }
GFileInfo * (g_file_output_stream_query_info_finish)(GFileOutputStream * stream, GAsyncResult * result, GError * * error) { return stub_funcs.ptr_g_file_output_stream_query_info_finish(stream, result, error); }
char * (g_file_output_stream_get_etag)(GFileOutputStream * stream) { return stub_funcs.ptr_g_file_output_stream_get_etag(stream); }
GType (g_inet_address_get_type)(void) { return stub_funcs.ptr_g_inet_address_get_type(); }
GInetAddress * (g_inet_address_new_from_string)(const gchar * string) { return stub_funcs.ptr_g_inet_address_new_from_string(string); }
GInetAddress * (g_inet_address_new_from_bytes)(const guint8 * bytes, GSocketFamily family) { return stub_funcs.ptr_g_inet_address_new_from_bytes(bytes, family); }
GInetAddress * (g_inet_address_new_loopback)(GSocketFamily family) { return stub_funcs.ptr_g_inet_address_new_loopback(family); }
GInetAddress * (g_inet_address_new_any)(GSocketFamily family) { return stub_funcs.ptr_g_inet_address_new_any(family); }
gboolean (g_inet_address_equal)(GInetAddress * address, GInetAddress * other_address) { return stub_funcs.ptr_g_inet_address_equal(address, other_address); }
gchar * (g_inet_address_to_string)(GInetAddress * address) { return stub_funcs.ptr_g_inet_address_to_string(address); }
const guint8 * (g_inet_address_to_bytes)(GInetAddress * address) { return stub_funcs.ptr_g_inet_address_to_bytes(address); }
gsize (g_inet_address_get_native_size)(GInetAddress * address) { return stub_funcs.ptr_g_inet_address_get_native_size(address); }
GSocketFamily (g_inet_address_get_family)(GInetAddress * address) { return stub_funcs.ptr_g_inet_address_get_family(address); }
gboolean (g_inet_address_get_is_any)(GInetAddress * address) { return stub_funcs.ptr_g_inet_address_get_is_any(address); }
gboolean (g_inet_address_get_is_loopback)(GInetAddress * address) { return stub_funcs.ptr_g_inet_address_get_is_loopback(address); }
gboolean (g_inet_address_get_is_link_local)(GInetAddress * address) { return stub_funcs.ptr_g_inet_address_get_is_link_local(address); }
gboolean (g_inet_address_get_is_site_local)(GInetAddress * address) { return stub_funcs.ptr_g_inet_address_get_is_site_local(address); }
gboolean (g_inet_address_get_is_multicast)(GInetAddress * address) { return stub_funcs.ptr_g_inet_address_get_is_multicast(address); }
gboolean (g_inet_address_get_is_mc_global)(GInetAddress * address) { return stub_funcs.ptr_g_inet_address_get_is_mc_global(address); }
gboolean (g_inet_address_get_is_mc_link_local)(GInetAddress * address) { return stub_funcs.ptr_g_inet_address_get_is_mc_link_local(address); }
gboolean (g_inet_address_get_is_mc_node_local)(GInetAddress * address) { return stub_funcs.ptr_g_inet_address_get_is_mc_node_local(address); }
gboolean (g_inet_address_get_is_mc_org_local)(GInetAddress * address) { return stub_funcs.ptr_g_inet_address_get_is_mc_org_local(address); }
gboolean (g_inet_address_get_is_mc_site_local)(GInetAddress * address) { return stub_funcs.ptr_g_inet_address_get_is_mc_site_local(address); }
GType (g_inet_address_mask_get_type)(void) { return stub_funcs.ptr_g_inet_address_mask_get_type(); }
GInetAddressMask * (g_inet_address_mask_new)(GInetAddress * addr, guint length, GError * * error) { return stub_funcs.ptr_g_inet_address_mask_new(addr, length, error); }
GInetAddressMask * (g_inet_address_mask_new_from_string)(const gchar * mask_string, GError * * error) { return stub_funcs.ptr_g_inet_address_mask_new_from_string(mask_string, error); }
gchar * (g_inet_address_mask_to_string)(GInetAddressMask * mask) { return stub_funcs.ptr_g_inet_address_mask_to_string(mask); }
GSocketFamily (g_inet_address_mask_get_family)(GInetAddressMask * mask) { return stub_funcs.ptr_g_inet_address_mask_get_family(mask); }
GInetAddress * (g_inet_address_mask_get_address)(GInetAddressMask * mask) { return stub_funcs.ptr_g_inet_address_mask_get_address(mask); }
guint (g_inet_address_mask_get_length)(GInetAddressMask * mask) { return stub_funcs.ptr_g_inet_address_mask_get_length(mask); }
gboolean (g_inet_address_mask_matches)(GInetAddressMask * mask, GInetAddress * address) { return stub_funcs.ptr_g_inet_address_mask_matches(mask, address); }
gboolean (g_inet_address_mask_equal)(GInetAddressMask * mask, GInetAddressMask * mask2) { return stub_funcs.ptr_g_inet_address_mask_equal(mask, mask2); }
GType (g_socket_address_get_type)(void) { return stub_funcs.ptr_g_socket_address_get_type(); }
GSocketFamily (g_socket_address_get_family)(GSocketAddress * address) { return stub_funcs.ptr_g_socket_address_get_family(address); }
GSocketAddress * (g_socket_address_new_from_native)(gpointer native, gsize len) { return stub_funcs.ptr_g_socket_address_new_from_native(native, len); }
gboolean (g_socket_address_to_native)(GSocketAddress * address, gpointer dest, gsize destlen, GError * * error) { return stub_funcs.ptr_g_socket_address_to_native(address, dest, destlen, error); }
gssize (g_socket_address_get_native_size)(GSocketAddress * address) { return stub_funcs.ptr_g_socket_address_get_native_size(address); }
GType (g_inet_socket_address_get_type)(void) { return stub_funcs.ptr_g_inet_socket_address_get_type(); }
GSocketAddress * (g_inet_socket_address_new)(GInetAddress * address, guint16 port) { return stub_funcs.ptr_g_inet_socket_address_new(address, port); }
GSocketAddress * (g_inet_socket_address_new_from_string)(const char * address, guint port) { return stub_funcs.ptr_g_inet_socket_address_new_from_string(address, port); }
GInetAddress * (g_inet_socket_address_get_address)(GInetSocketAddress * address) { return stub_funcs.ptr_g_inet_socket_address_get_address(address); }
guint16 (g_inet_socket_address_get_port)(GInetSocketAddress * address) { return stub_funcs.ptr_g_inet_socket_address_get_port(address); }
guint32 (g_inet_socket_address_get_flowinfo)(GInetSocketAddress * address) { return stub_funcs.ptr_g_inet_socket_address_get_flowinfo(address); }
guint32 (g_inet_socket_address_get_scope_id)(GInetSocketAddress * address) { return stub_funcs.ptr_g_inet_socket_address_get_scope_id(address); }
GType (g_app_info_create_flags_get_type)(void) { return stub_funcs.ptr_g_app_info_create_flags_get_type(); }
GType (g_converter_flags_get_type)(void) { return stub_funcs.ptr_g_converter_flags_get_type(); }
GType (g_converter_result_get_type)(void) { return stub_funcs.ptr_g_converter_result_get_type(); }
GType (g_data_stream_byte_order_get_type)(void) { return stub_funcs.ptr_g_data_stream_byte_order_get_type(); }
GType (g_data_stream_newline_type_get_type)(void) { return stub_funcs.ptr_g_data_stream_newline_type_get_type(); }
GType (g_file_attribute_type_get_type)(void) { return stub_funcs.ptr_g_file_attribute_type_get_type(); }
GType (g_file_attribute_info_flags_get_type)(void) { return stub_funcs.ptr_g_file_attribute_info_flags_get_type(); }
GType (g_file_attribute_status_get_type)(void) { return stub_funcs.ptr_g_file_attribute_status_get_type(); }
GType (g_file_query_info_flags_get_type)(void) { return stub_funcs.ptr_g_file_query_info_flags_get_type(); }
GType (g_file_create_flags_get_type)(void) { return stub_funcs.ptr_g_file_create_flags_get_type(); }
GType (g_file_measure_flags_get_type)(void) { return stub_funcs.ptr_g_file_measure_flags_get_type(); }
GType (g_mount_mount_flags_get_type)(void) { return stub_funcs.ptr_g_mount_mount_flags_get_type(); }
GType (g_mount_unmount_flags_get_type)(void) { return stub_funcs.ptr_g_mount_unmount_flags_get_type(); }
GType (g_drive_start_flags_get_type)(void) { return stub_funcs.ptr_g_drive_start_flags_get_type(); }
GType (g_drive_start_stop_type_get_type)(void) { return stub_funcs.ptr_g_drive_start_stop_type_get_type(); }
GType (g_file_copy_flags_get_type)(void) { return stub_funcs.ptr_g_file_copy_flags_get_type(); }
GType (g_file_monitor_flags_get_type)(void) { return stub_funcs.ptr_g_file_monitor_flags_get_type(); }
GType (g_file_type_get_type)(void) { return stub_funcs.ptr_g_file_type_get_type(); }
GType (g_filesystem_preview_type_get_type)(void) { return stub_funcs.ptr_g_filesystem_preview_type_get_type(); }
GType (g_file_monitor_event_get_type)(void) { return stub_funcs.ptr_g_file_monitor_event_get_type(); }
GType (g_io_error_enum_get_type)(void) { return stub_funcs.ptr_g_io_error_enum_get_type(); }
GType (g_ask_password_flags_get_type)(void) { return stub_funcs.ptr_g_ask_password_flags_get_type(); }
GType (g_password_save_get_type)(void) { return stub_funcs.ptr_g_password_save_get_type(); }
GType (g_mount_operation_result_get_type)(void) { return stub_funcs.ptr_g_mount_operation_result_get_type(); }
GType (g_output_stream_splice_flags_get_type)(void) { return stub_funcs.ptr_g_output_stream_splice_flags_get_type(); }
GType (g_io_stream_splice_flags_get_type)(void) { return stub_funcs.ptr_g_io_stream_splice_flags_get_type(); }
GType (g_emblem_origin_get_type)(void) { return stub_funcs.ptr_g_emblem_origin_get_type(); }
GType (g_resolver_error_get_type)(void) { return stub_funcs.ptr_g_resolver_error_get_type(); }
GType (g_resolver_record_type_get_type)(void) { return stub_funcs.ptr_g_resolver_record_type_get_type(); }
GType (g_resource_error_get_type)(void) { return stub_funcs.ptr_g_resource_error_get_type(); }
GType (g_resource_flags_get_type)(void) { return stub_funcs.ptr_g_resource_flags_get_type(); }
GType (g_resource_lookup_flags_get_type)(void) { return stub_funcs.ptr_g_resource_lookup_flags_get_type(); }
GType (g_socket_family_get_type)(void) { return stub_funcs.ptr_g_socket_family_get_type(); }
GType (g_socket_type_get_type)(void) { return stub_funcs.ptr_g_socket_type_get_type(); }
GType (g_socket_msg_flags_get_type)(void) { return stub_funcs.ptr_g_socket_msg_flags_get_type(); }
GType (g_socket_protocol_get_type)(void) { return stub_funcs.ptr_g_socket_protocol_get_type(); }
GType (g_zlib_compressor_format_get_type)(void) { return stub_funcs.ptr_g_zlib_compressor_format_get_type(); }
GType (g_unix_socket_address_type_get_type)(void) { return stub_funcs.ptr_g_unix_socket_address_type_get_type(); }
GType (g_bus_type_get_type)(void) { return stub_funcs.ptr_g_bus_type_get_type(); }
GType (g_bus_name_owner_flags_get_type)(void) { return stub_funcs.ptr_g_bus_name_owner_flags_get_type(); }
GType (g_bus_name_watcher_flags_get_type)(void) { return stub_funcs.ptr_g_bus_name_watcher_flags_get_type(); }
GType (g_dbus_proxy_flags_get_type)(void) { return stub_funcs.ptr_g_dbus_proxy_flags_get_type(); }
GType (g_dbus_error_get_type)(void) { return stub_funcs.ptr_g_dbus_error_get_type(); }
GType (g_dbus_connection_flags_get_type)(void) { return stub_funcs.ptr_g_dbus_connection_flags_get_type(); }
GType (g_dbus_capability_flags_get_type)(void) { return stub_funcs.ptr_g_dbus_capability_flags_get_type(); }
GType (g_dbus_call_flags_get_type)(void) { return stub_funcs.ptr_g_dbus_call_flags_get_type(); }
GType (g_dbus_message_type_get_type)(void) { return stub_funcs.ptr_g_dbus_message_type_get_type(); }
GType (g_dbus_message_flags_get_type)(void) { return stub_funcs.ptr_g_dbus_message_flags_get_type(); }
GType (g_dbus_message_header_field_get_type)(void) { return stub_funcs.ptr_g_dbus_message_header_field_get_type(); }
GType (g_dbus_property_info_flags_get_type)(void) { return stub_funcs.ptr_g_dbus_property_info_flags_get_type(); }
GType (g_dbus_subtree_flags_get_type)(void) { return stub_funcs.ptr_g_dbus_subtree_flags_get_type(); }
GType (g_dbus_server_flags_get_type)(void) { return stub_funcs.ptr_g_dbus_server_flags_get_type(); }
GType (g_dbus_signal_flags_get_type)(void) { return stub_funcs.ptr_g_dbus_signal_flags_get_type(); }
GType (g_dbus_send_message_flags_get_type)(void) { return stub_funcs.ptr_g_dbus_send_message_flags_get_type(); }
GType (g_credentials_type_get_type)(void) { return stub_funcs.ptr_g_credentials_type_get_type(); }
GType (g_dbus_message_byte_order_get_type)(void) { return stub_funcs.ptr_g_dbus_message_byte_order_get_type(); }
GType (g_application_flags_get_type)(void) { return stub_funcs.ptr_g_application_flags_get_type(); }
GType (g_tls_error_get_type)(void) { return stub_funcs.ptr_g_tls_error_get_type(); }
GType (g_tls_certificate_flags_get_type)(void) { return stub_funcs.ptr_g_tls_certificate_flags_get_type(); }
GType (g_tls_authentication_mode_get_type)(void) { return stub_funcs.ptr_g_tls_authentication_mode_get_type(); }
GType (g_tls_channel_binding_type_get_type)(void) { return stub_funcs.ptr_g_tls_channel_binding_type_get_type(); }
GType (g_tls_channel_binding_error_get_type)(void) { return stub_funcs.ptr_g_tls_channel_binding_error_get_type(); }
GType (g_tls_rehandshake_mode_get_type)(void) { return stub_funcs.ptr_g_tls_rehandshake_mode_get_type(); }
GType (g_tls_password_flags_get_type)(void) { return stub_funcs.ptr_g_tls_password_flags_get_type(); }
GType (g_tls_interaction_result_get_type)(void) { return stub_funcs.ptr_g_tls_interaction_result_get_type(); }
GType (g_dbus_interface_skeleton_flags_get_type)(void) { return stub_funcs.ptr_g_dbus_interface_skeleton_flags_get_type(); }
GType (g_dbus_object_manager_client_flags_get_type)(void) { return stub_funcs.ptr_g_dbus_object_manager_client_flags_get_type(); }
GType (g_tls_database_verify_flags_get_type)(void) { return stub_funcs.ptr_g_tls_database_verify_flags_get_type(); }
GType (g_tls_database_lookup_flags_get_type)(void) { return stub_funcs.ptr_g_tls_database_lookup_flags_get_type(); }
GType (g_tls_certificate_request_flags_get_type)(void) { return stub_funcs.ptr_g_tls_certificate_request_flags_get_type(); }
GType (g_tls_protocol_version_get_type)(void) { return stub_funcs.ptr_g_tls_protocol_version_get_type(); }
GType (g_io_module_scope_flags_get_type)(void) { return stub_funcs.ptr_g_io_module_scope_flags_get_type(); }
GType (g_socket_client_event_get_type)(void) { return stub_funcs.ptr_g_socket_client_event_get_type(); }
GType (g_socket_listener_event_get_type)(void) { return stub_funcs.ptr_g_socket_listener_event_get_type(); }
GType (g_test_dbus_flags_get_type)(void) { return stub_funcs.ptr_g_test_dbus_flags_get_type(); }
GType (g_subprocess_flags_get_type)(void) { return stub_funcs.ptr_g_subprocess_flags_get_type(); }
GType (g_notification_priority_get_type)(void) { return stub_funcs.ptr_g_notification_priority_get_type(); }
GType (g_network_connectivity_get_type)(void) { return stub_funcs.ptr_g_network_connectivity_get_type(); }
GType (g_pollable_return_get_type)(void) { return stub_funcs.ptr_g_pollable_return_get_type(); }
GType (g_memory_monitor_warning_level_get_type)(void) { return stub_funcs.ptr_g_memory_monitor_warning_level_get_type(); }
GType (g_resolver_name_lookup_flags_get_type)(void) { return stub_funcs.ptr_g_resolver_name_lookup_flags_get_type(); }
GType (g_settings_bind_flags_get_type)(void) { return stub_funcs.ptr_g_settings_bind_flags_get_type(); }
GIOModuleScope * (g_io_module_scope_new)(GIOModuleScopeFlags flags) { return stub_funcs.ptr_g_io_module_scope_new(flags); }
void (g_io_module_scope_free)(GIOModuleScope * scope) { stub_funcs.ptr_g_io_module_scope_free(scope); }
void (g_io_module_scope_block)(GIOModuleScope * scope, const gchar * basename) { stub_funcs.ptr_g_io_module_scope_block(scope, basename); }
GType (g_io_module_get_type)(void) { return stub_funcs.ptr_g_io_module_get_type(); }
GIOModule * (g_io_module_new)(const gchar * filename) { return stub_funcs.ptr_g_io_module_new(filename); }
void (g_io_modules_scan_all_in_directory)(const char * dirname) { stub_funcs.ptr_g_io_modules_scan_all_in_directory(dirname); }
GList * (g_io_modules_load_all_in_directory)(const gchar * dirname) { return stub_funcs.ptr_g_io_modules_load_all_in_directory(dirname); }
void (g_io_modules_scan_all_in_directory_with_scope)(const gchar * dirname, GIOModuleScope * scope) { stub_funcs.ptr_g_io_modules_scan_all_in_directory_with_scope(dirname, scope); }
GList * (g_io_modules_load_all_in_directory_with_scope)(const gchar * dirname, GIOModuleScope * scope) { return stub_funcs.ptr_g_io_modules_load_all_in_directory_with_scope(dirname, scope); }
GIOExtensionPoint * (g_io_extension_point_register)(const char * name) { return stub_funcs.ptr_g_io_extension_point_register(name); }
GIOExtensionPoint * (g_io_extension_point_lookup)(const char * name) { return stub_funcs.ptr_g_io_extension_point_lookup(name); }
void (g_io_extension_point_set_required_type)(GIOExtensionPoint * extension_point, GType type) { stub_funcs.ptr_g_io_extension_point_set_required_type(extension_point, type); }
GType (g_io_extension_point_get_required_type)(GIOExtensionPoint * extension_point) { return stub_funcs.ptr_g_io_extension_point_get_required_type(extension_point); }
GList * (g_io_extension_point_get_extensions)(GIOExtensionPoint * extension_point) { return stub_funcs.ptr_g_io_extension_point_get_extensions(extension_point); }
GIOExtension * (g_io_extension_point_get_extension_by_name)(GIOExtensionPoint * extension_point, const char * name) { return stub_funcs.ptr_g_io_extension_point_get_extension_by_name(extension_point, name); }
GIOExtension * (g_io_extension_point_implement)(const char * extension_point_name, GType type, const char * extension_name, gint priority) { return stub_funcs.ptr_g_io_extension_point_implement(extension_point_name, type, extension_name, priority); }
GType (g_io_extension_get_type)(GIOExtension * extension) { return stub_funcs.ptr_g_io_extension_get_type(extension); }
const char * (g_io_extension_get_name)(GIOExtension * extension) { return stub_funcs.ptr_g_io_extension_get_name(extension); }
gint (g_io_extension_get_priority)(GIOExtension * extension) { return stub_funcs.ptr_g_io_extension_get_priority(extension); }
GTypeClass * (g_io_extension_ref_class)(GIOExtension * extension) { return stub_funcs.ptr_g_io_extension_ref_class(extension); }
void (g_io_module_load)(GIOModule * module) { stub_funcs.ptr_g_io_module_load(module); }
void (g_io_module_unload)(GIOModule * module) { stub_funcs.ptr_g_io_module_unload(module); }
char * * (g_io_module_query)(void) { return stub_funcs.ptr_g_io_module_query(); }
void (g_io_scheduler_push_job)(GIOSchedulerJobFunc job_func, gpointer user_data, GDestroyNotify notify, gint io_priority, GCancellable * cancellable) { stub_funcs.ptr_g_io_scheduler_push_job(job_func, user_data, notify, io_priority, cancellable); }
void (g_io_scheduler_cancel_all_jobs)(void) { stub_funcs.ptr_g_io_scheduler_cancel_all_jobs(); }
gboolean (g_io_scheduler_job_send_to_mainloop)(GIOSchedulerJob * job, GSourceFunc func, gpointer user_data, GDestroyNotify notify) { return stub_funcs.ptr_g_io_scheduler_job_send_to_mainloop(job, func, user_data, notify); }
void (g_io_scheduler_job_send_to_mainloop_async)(GIOSchedulerJob * job, GSourceFunc func, gpointer user_data, GDestroyNotify notify) { stub_funcs.ptr_g_io_scheduler_job_send_to_mainloop_async(job, func, user_data, notify); }
GType (g_list_model_get_type)(void) { return stub_funcs.ptr_g_list_model_get_type(); }
GType (g_list_model_get_item_type)(GListModel * list) { return stub_funcs.ptr_g_list_model_get_item_type(list); }
guint (g_list_model_get_n_items)(GListModel * list) { return stub_funcs.ptr_g_list_model_get_n_items(list); }
gpointer (g_list_model_get_item)(GListModel * list, guint position) { return stub_funcs.ptr_g_list_model_get_item(list, position); }
GObject * (g_list_model_get_object)(GListModel * list, guint position) { return stub_funcs.ptr_g_list_model_get_object(list, position); }
void (g_list_model_items_changed)(GListModel * list, guint position, guint removed, guint added) { stub_funcs.ptr_g_list_model_items_changed(list, position, removed, added); }
GType (g_list_store_get_type)(void) { return stub_funcs.ptr_g_list_store_get_type(); }
GListStore * (g_list_store_new)(GType item_type) { return stub_funcs.ptr_g_list_store_new(item_type); }
void (g_list_store_insert)(GListStore * store, guint position, gpointer item) { stub_funcs.ptr_g_list_store_insert(store, position, item); }
guint (g_list_store_insert_sorted)(GListStore * store, gpointer item, GCompareDataFunc compare_func, gpointer user_data) { return stub_funcs.ptr_g_list_store_insert_sorted(store, item, compare_func, user_data); }
void (g_list_store_sort)(GListStore * store, GCompareDataFunc compare_func, gpointer user_data) { stub_funcs.ptr_g_list_store_sort(store, compare_func, user_data); }
void (g_list_store_append)(GListStore * store, gpointer item) { stub_funcs.ptr_g_list_store_append(store, item); }
void (g_list_store_remove)(GListStore * store, guint position) { stub_funcs.ptr_g_list_store_remove(store, position); }
void (g_list_store_remove_all)(GListStore * store) { stub_funcs.ptr_g_list_store_remove_all(store); }
void (g_list_store_splice)(GListStore * store, guint position, guint n_removals, gpointer * additions, guint n_additions) { stub_funcs.ptr_g_list_store_splice(store, position, n_removals, additions, n_additions); }
gboolean (g_list_store_find)(GListStore * store, gpointer item, guint * position) { return stub_funcs.ptr_g_list_store_find(store, item, position); }
gboolean (g_list_store_find_with_equal_func)(GListStore * store, gpointer item, GEqualFunc equal_func, guint * position) { return stub_funcs.ptr_g_list_store_find_with_equal_func(store, item, equal_func, position); }
gboolean (g_list_store_find_with_equal_func_full)(GListStore * store, gpointer item, GEqualFuncFull equal_func, gpointer user_data, guint * position) { return stub_funcs.ptr_g_list_store_find_with_equal_func_full(store, item, equal_func, user_data, position); }
GType (g_loadable_icon_get_type)(void) { return stub_funcs.ptr_g_loadable_icon_get_type(); }
GInputStream * (g_loadable_icon_load)(GLoadableIcon * icon, int size, char * * type, GCancellable * cancellable, GError * * error) { return stub_funcs.ptr_g_loadable_icon_load(icon, size, type, cancellable, error); }
void (g_loadable_icon_load_async)(GLoadableIcon * icon, int size, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data) { stub_funcs.ptr_g_loadable_icon_load_async(icon, size, cancellable, callback, user_data); }
GInputStream * (g_loadable_icon_load_finish)(GLoadableIcon * icon, GAsyncResult * res, char * * type, GError * * error) { return stub_funcs.ptr_g_loadable_icon_load_finish(icon, res, type, error); }
GType (g_memory_input_stream_get_type)(void) { return stub_funcs.ptr_g_memory_input_stream_get_type(); }
GInputStream * (g_memory_input_stream_new)(void) { return stub_funcs.ptr_g_memory_input_stream_new(); }
GInputStream * (g_memory_input_stream_new_from_data)(const void * data, gssize len, GDestroyNotify destroy) { return stub_funcs.ptr_g_memory_input_stream_new_from_data(data, len, destroy); }
GInputStream * (g_memory_input_stream_new_from_bytes)(GBytes * bytes) { return stub_funcs.ptr_g_memory_input_stream_new_from_bytes(bytes); }
void (g_memory_input_stream_add_data)(GMemoryInputStream * stream, const void * data, gssize len, GDestroyNotify destroy) { stub_funcs.ptr_g_memory_input_stream_add_data(stream, data, len, destroy); }
void (g_memory_input_stream_add_bytes)(GMemoryInputStream * stream, GBytes * bytes) { stub_funcs.ptr_g_memory_input_stream_add_bytes(stream, bytes); }
GType (g_memory_monitor_get_type)(void) { return stub_funcs.ptr_g_memory_monitor_get_type(); }
GMemoryMonitor * (g_memory_monitor_dup_default)(void) { return stub_funcs.ptr_g_memory_monitor_dup_default(); }
GType (g_memory_output_stream_get_type)(void) { return stub_funcs.ptr_g_memory_output_stream_get_type(); }
GOutputStream * (g_memory_output_stream_new)(gpointer data, gsize size, GReallocFunc realloc_function, GDestroyNotify destroy_function) { return stub_funcs.ptr_g_memory_output_stream_new(data, size, realloc_function, destroy_function); }
GOutputStream * (g_memory_output_stream_new_resizable)(void) { return stub_funcs.ptr_g_memory_output_stream_new_resizable(); }
gpointer (g_memory_output_stream_get_data)(GMemoryOutputStream * ostream) { return stub_funcs.ptr_g_memory_output_stream_get_data(ostream); }
gsize (g_memory_output_stream_get_size)(GMemoryOutputStream * ostream) { return stub_funcs.ptr_g_memory_output_stream_get_size(ostream); }
gsize (g_memory_output_stream_get_data_size)(GMemoryOutputStream * ostream) { return stub_funcs.ptr_g_memory_output_stream_get_data_size(ostream); }
gpointer (g_memory_output_stream_steal_data)(GMemoryOutputStream * ostream) { return stub_funcs.ptr_g_memory_output_stream_steal_data(ostream); }
GBytes * (g_memory_output_stream_steal_as_bytes)(GMemoryOutputStream * ostream) { return stub_funcs.ptr_g_memory_output_stream_steal_as_bytes(ostream); }
GType (g_menu_model_get_type)(void) { return stub_funcs.ptr_g_menu_model_get_type(); }
gboolean (g_menu_model_is_mutable)(GMenuModel * model) { return stub_funcs.ptr_g_menu_model_is_mutable(model); }
gint (g_menu_model_get_n_items)(GMenuModel * model) { return stub_funcs.ptr_g_menu_model_get_n_items(model); }
GMenuAttributeIter * (g_menu_model_iterate_item_attributes)(GMenuModel * model, gint item_index) { return stub_funcs.ptr_g_menu_model_iterate_item_attributes(model, item_index); }
GVariant * (g_menu_model_get_item_attribute_value)(GMenuModel * model, gint item_index, const gchar * attribute, const GVariantType * expected_type) { return stub_funcs.ptr_g_menu_model_get_item_attribute_value(model, item_index, attribute, expected_type); }
GMenuLinkIter * (g_menu_model_iterate_item_links)(GMenuModel * model, gint item_index) { return stub_funcs.ptr_g_menu_model_iterate_item_links(model, item_index); }
GMenuModel * (g_menu_model_get_item_link)(GMenuModel * model, gint item_index, const gchar * link) { return stub_funcs.ptr_g_menu_model_get_item_link(model, item_index, link); }
void (g_menu_model_items_changed)(GMenuModel * model, gint position, gint removed, gint added) { stub_funcs.ptr_g_menu_model_items_changed(model, position, removed, added); }
GType (g_menu_attribute_iter_get_type)(void) { return stub_funcs.ptr_g_menu_attribute_iter_get_type(); }
gboolean (g_menu_attribute_iter_get_next)(GMenuAttributeIter * iter, const gchar * * out_name, GVariant * * value) { return stub_funcs.ptr_g_menu_attribute_iter_get_next(iter, out_name, value); }
gboolean (g_menu_attribute_iter_next)(GMenuAttributeIter * iter) { return stub_funcs.ptr_g_menu_attribute_iter_next(iter); }
const gchar * (g_menu_attribute_iter_get_name)(GMenuAttributeIter * iter) { return stub_funcs.ptr_g_menu_attribute_iter_get_name(iter); }
GVariant * (g_menu_attribute_iter_get_value)(GMenuAttributeIter * iter) { return stub_funcs.ptr_g_menu_attribute_iter_get_value(iter); }
GType (g_menu_link_iter_get_type)(void) { return stub_funcs.ptr_g_menu_link_iter_get_type(); }
gboolean (g_menu_link_iter_get_next)(GMenuLinkIter * iter, const gchar * * out_link, GMenuModel * * value) { return stub_funcs.ptr_g_menu_link_iter_get_next(iter, out_link, value); }
gboolean (g_menu_link_iter_next)(GMenuLinkIter * iter) { return stub_funcs.ptr_g_menu_link_iter_next(iter); }
const gchar * (g_menu_link_iter_get_name)(GMenuLinkIter * iter) { return stub_funcs.ptr_g_menu_link_iter_get_name(iter); }
GMenuModel * (g_menu_link_iter_get_value)(GMenuLinkIter * iter) { return stub_funcs.ptr_g_menu_link_iter_get_value(iter); }
GType (g_menu_get_type)(void) { return stub_funcs.ptr_g_menu_get_type(); }
GMenu * (g_menu_new)(void) { return stub_funcs.ptr_g_menu_new(); }
void (g_menu_freeze)(GMenu * menu) { stub_funcs.ptr_g_menu_freeze(menu); }
void (g_menu_insert_item)(GMenu * menu, gint position, GMenuItem * item) { stub_funcs.ptr_g_menu_insert_item(menu, position, item); }
void (g_menu_prepend_item)(GMenu * menu, GMenuItem * item) { stub_funcs.ptr_g_menu_prepend_item(menu, item); }
void (g_menu_append_item)(GMenu * menu, GMenuItem * item) { stub_funcs.ptr_g_menu_append_item(menu, item); }
void (g_menu_remove)(GMenu * menu, gint position) { stub_funcs.ptr_g_menu_remove(menu, position); }
void (g_menu_remove_all)(GMenu * menu) { stub_funcs.ptr_g_menu_remove_all(menu); }
void (g_menu_insert)(GMenu * menu, gint position, const gchar * label, const gchar * detailed_action) { stub_funcs.ptr_g_menu_insert(menu, position, label, detailed_action); }
void (g_menu_prepend)(GMenu * menu, const gchar * label, const gchar * detailed_action) { stub_funcs.ptr_g_menu_prepend(menu, label, detailed_action); }
void (g_menu_append)(GMenu * menu, const gchar * label, const gchar * detailed_action) { stub_funcs.ptr_g_menu_append(menu, label, detailed_action); }
void (g_menu_insert_section)(GMenu * menu, gint position, const gchar * label, GMenuModel * section) { stub_funcs.ptr_g_menu_insert_section(menu, position, label, section); }
void (g_menu_prepend_section)(GMenu * menu, const gchar * label, GMenuModel * section) { stub_funcs.ptr_g_menu_prepend_section(menu, label, section); }
void (g_menu_append_section)(GMenu * menu, const gchar * label, GMenuModel * section) { stub_funcs.ptr_g_menu_append_section(menu, label, section); }
void (g_menu_insert_submenu)(GMenu * menu, gint position, const gchar * label, GMenuModel * submenu) { stub_funcs.ptr_g_menu_insert_submenu(menu, position, label, submenu); }
void (g_menu_prepend_submenu)(GMenu * menu, const gchar * label, GMenuModel * submenu) { stub_funcs.ptr_g_menu_prepend_submenu(menu, label, submenu); }
void (g_menu_append_submenu)(GMenu * menu, const gchar * label, GMenuModel * submenu) { stub_funcs.ptr_g_menu_append_submenu(menu, label, submenu); }
GType (g_menu_item_get_type)(void) { return stub_funcs.ptr_g_menu_item_get_type(); }
GMenuItem * (g_menu_item_new)(const gchar * label, const gchar * detailed_action) { return stub_funcs.ptr_g_menu_item_new(label, detailed_action); }
GMenuItem * (g_menu_item_new_from_model)(GMenuModel * model, gint item_index) { return stub_funcs.ptr_g_menu_item_new_from_model(model, item_index); }
GMenuItem * (g_menu_item_new_submenu)(const gchar * label, GMenuModel * submenu) { return stub_funcs.ptr_g_menu_item_new_submenu(label, submenu); }
GMenuItem * (g_menu_item_new_section)(const gchar * label, GMenuModel * section) { return stub_funcs.ptr_g_menu_item_new_section(label, section); }
GVariant * (g_menu_item_get_attribute_value)(GMenuItem * menu_item, const gchar * attribute, const GVariantType * expected_type) { return stub_funcs.ptr_g_menu_item_get_attribute_value(menu_item, attribute, expected_type); }
GMenuModel * (g_menu_item_get_link)(GMenuItem * menu_item, const gchar * link) { return stub_funcs.ptr_g_menu_item_get_link(menu_item, link); }
void (g_menu_item_set_attribute_value)(GMenuItem * menu_item, const gchar * attribute, GVariant * value) { stub_funcs.ptr_g_menu_item_set_attribute_value(menu_item, attribute, value); }
void (g_menu_item_set_link)(GMenuItem * menu_item, const gchar * link, GMenuModel * model) { stub_funcs.ptr_g_menu_item_set_link(menu_item, link, model); }
void (g_menu_item_set_label)(GMenuItem * menu_item, const gchar * label) { stub_funcs.ptr_g_menu_item_set_label(menu_item, label); }
void (g_menu_item_set_submenu)(GMenuItem * menu_item, GMenuModel * submenu) { stub_funcs.ptr_g_menu_item_set_submenu(menu_item, submenu); }
void (g_menu_item_set_section)(GMenuItem * menu_item, GMenuModel * section) { stub_funcs.ptr_g_menu_item_set_section(menu_item, section); }
void (g_menu_item_set_action_and_target_value)(GMenuItem * menu_item, const gchar * action, GVariant * target_value) { stub_funcs.ptr_g_menu_item_set_action_and_target_value(menu_item, action, target_value); }
void (g_menu_item_set_detailed_action)(GMenuItem * menu_item, const gchar * detailed_action) { stub_funcs.ptr_g_menu_item_set_detailed_action(menu_item, detailed_action); }
void (g_menu_item_set_icon)(GMenuItem * menu_item, GIcon * icon) { stub_funcs.ptr_g_menu_item_set_icon(menu_item, icon); }
guint (g_dbus_connection_export_menu_model)(GDBusConnection * connection, const gchar * object_path, GMenuModel * menu, GError * * error) { return stub_funcs.ptr_g_dbus_connection_export_menu_model(connection, object_path, menu, error); }
void (g_dbus_connection_unexport_menu_model)(GDBusConnection * connection, guint export_id) { stub_funcs.ptr_g_dbus_connection_unexport_menu_model(connection, export_id); }
GType (g_mount_get_type)(void) { return stub_funcs.ptr_g_mount_get_type(); }
GFile * (g_mount_get_root)(GMount * mount) { return stub_funcs.ptr_g_mount_get_root(mount); }
GFile * (g_mount_get_default_location)(GMount * mount) { return stub_funcs.ptr_g_mount_get_default_location(mount); }
char * (g_mount_get_name)(GMount * mount) { return stub_funcs.ptr_g_mount_get_name(mount); }
GIcon * (g_mount_get_icon)(GMount * mount) { return stub_funcs.ptr_g_mount_get_icon(mount); }
GIcon * (g_mount_get_symbolic_icon)(GMount * mount) { return stub_funcs.ptr_g_mount_get_symbolic_icon(mount); }
char * (g_mount_get_uuid)(GMount * mount) { return stub_funcs.ptr_g_mount_get_uuid(mount); }
GVolume * (g_mount_get_volume)(GMount * mount) { return stub_funcs.ptr_g_mount_get_volume(mount); }
GDrive * (g_mount_get_drive)(GMount * mount) { return stub_funcs.ptr_g_mount_get_drive(mount); }
gboolean (g_mount_can_unmount)(GMount * mount) { return stub_funcs.ptr_g_mount_can_unmount(mount); }
gboolean (g_mount_can_eject)(GMount * mount) { return stub_funcs.ptr_g_mount_can_eject(mount); }
void (g_mount_unmount)(GMount * mount, GMountUnmountFlags flags, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data) { stub_funcs.ptr_g_mount_unmount(mount, flags, cancellable, callback, user_data); }
gboolean (g_mount_unmount_finish)(GMount * mount, GAsyncResult * result, GError * * error) { return stub_funcs.ptr_g_mount_unmount_finish(mount, result, error); }
void (g_mount_eject)(GMount * mount, GMountUnmountFlags flags, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data) { stub_funcs.ptr_g_mount_eject(mount, flags, cancellable, callback, user_data); }
gboolean (g_mount_eject_finish)(GMount * mount, GAsyncResult * result, GError * * error) { return stub_funcs.ptr_g_mount_eject_finish(mount, result, error); }
void (g_mount_remount)(GMount * mount, GMountMountFlags flags, GMountOperation * mount_operation, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data) { stub_funcs.ptr_g_mount_remount(mount, flags, mount_operation, cancellable, callback, user_data); }
gboolean (g_mount_remount_finish)(GMount * mount, GAsyncResult * result, GError * * error) { return stub_funcs.ptr_g_mount_remount_finish(mount, result, error); }
void (g_mount_guess_content_type)(GMount * mount, gboolean force_rescan, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data) { stub_funcs.ptr_g_mount_guess_content_type(mount, force_rescan, cancellable, callback, user_data); }
gchar * * (g_mount_guess_content_type_finish)(GMount * mount, GAsyncResult * result, GError * * error) { return stub_funcs.ptr_g_mount_guess_content_type_finish(mount, result, error); }
gchar * * (g_mount_guess_content_type_sync)(GMount * mount, gboolean force_rescan, GCancellable * cancellable, GError * * error) { return stub_funcs.ptr_g_mount_guess_content_type_sync(mount, force_rescan, cancellable, error); }
gboolean (g_mount_is_shadowed)(GMount * mount) { return stub_funcs.ptr_g_mount_is_shadowed(mount); }
void (g_mount_shadow)(GMount * mount) { stub_funcs.ptr_g_mount_shadow(mount); }
void (g_mount_unshadow)(GMount * mount) { stub_funcs.ptr_g_mount_unshadow(mount); }
void (g_mount_unmount_with_operation)(GMount * mount, GMountUnmountFlags flags, GMountOperation * mount_operation, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data) { stub_funcs.ptr_g_mount_unmount_with_operation(mount, flags, mount_operation, cancellable, callback, user_data); }
gboolean (g_mount_unmount_with_operation_finish)(GMount * mount, GAsyncResult * result, GError * * error) { return stub_funcs.ptr_g_mount_unmount_with_operation_finish(mount, result, error); }
void (g_mount_eject_with_operation)(GMount * mount, GMountUnmountFlags flags, GMountOperation * mount_operation, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data) { stub_funcs.ptr_g_mount_eject_with_operation(mount, flags, mount_operation, cancellable, callback, user_data); }
gboolean (g_mount_eject_with_operation_finish)(GMount * mount, GAsyncResult * result, GError * * error) { return stub_funcs.ptr_g_mount_eject_with_operation_finish(mount, result, error); }
const gchar * (g_mount_get_sort_key)(GMount * mount) { return stub_funcs.ptr_g_mount_get_sort_key(mount); }
GType (g_mount_operation_get_type)(void) { return stub_funcs.ptr_g_mount_operation_get_type(); }
GMountOperation * (g_mount_operation_new)(void) { return stub_funcs.ptr_g_mount_operation_new(); }
const char * (g_mount_operation_get_username)(GMountOperation * op) { return stub_funcs.ptr_g_mount_operation_get_username(op); }
void (g_mount_operation_set_username)(GMountOperation * op, const char * username) { stub_funcs.ptr_g_mount_operation_set_username(op, username); }
const char * (g_mount_operation_get_password)(GMountOperation * op) { return stub_funcs.ptr_g_mount_operation_get_password(op); }
void (g_mount_operation_set_password)(GMountOperation * op, const char * password) { stub_funcs.ptr_g_mount_operation_set_password(op, password); }
gboolean (g_mount_operation_get_anonymous)(GMountOperation * op) { return stub_funcs.ptr_g_mount_operation_get_anonymous(op); }
void (g_mount_operation_set_anonymous)(GMountOperation * op, gboolean anonymous) { stub_funcs.ptr_g_mount_operation_set_anonymous(op, anonymous); }
const char * (g_mount_operation_get_domain)(GMountOperation * op) { return stub_funcs.ptr_g_mount_operation_get_domain(op); }
void (g_mount_operation_set_domain)(GMountOperation * op, const char * domain) { stub_funcs.ptr_g_mount_operation_set_domain(op, domain); }
GPasswordSave (g_mount_operation_get_password_save)(GMountOperation * op) { return stub_funcs.ptr_g_mount_operation_get_password_save(op); }
void (g_mount_operation_set_password_save)(GMountOperation * op, GPasswordSave save) { stub_funcs.ptr_g_mount_operation_set_password_save(op, save); }
int (g_mount_operation_get_choice)(GMountOperation * op) { return stub_funcs.ptr_g_mount_operation_get_choice(op); }
void (g_mount_operation_set_choice)(GMountOperation * op, int choice) { stub_funcs.ptr_g_mount_operation_set_choice(op, choice); }
void (g_mount_operation_reply)(GMountOperation * op, GMountOperationResult result) { stub_funcs.ptr_g_mount_operation_reply(op, result); }
gboolean (g_mount_operation_get_is_tcrypt_hidden_volume)(GMountOperation * op) { return stub_funcs.ptr_g_mount_operation_get_is_tcrypt_hidden_volume(op); }
void (g_mount_operation_set_is_tcrypt_hidden_volume)(GMountOperation * op, gboolean hidden_volume) { stub_funcs.ptr_g_mount_operation_set_is_tcrypt_hidden_volume(op, hidden_volume); }
gboolean (g_mount_operation_get_is_tcrypt_system_volume)(GMountOperation * op) { return stub_funcs.ptr_g_mount_operation_get_is_tcrypt_system_volume(op); }
void (g_mount_operation_set_is_tcrypt_system_volume)(GMountOperation * op, gboolean system_volume) { stub_funcs.ptr_g_mount_operation_set_is_tcrypt_system_volume(op, system_volume); }
guint (g_mount_operation_get_pim)(GMountOperation * op) { return stub_funcs.ptr_g_mount_operation_get_pim(op); }
void (g_mount_operation_set_pim)(GMountOperation * op, guint pim) { stub_funcs.ptr_g_mount_operation_set_pim(op, pim); }
GType (g_native_socket_address_get_type)(void) { return stub_funcs.ptr_g_native_socket_address_get_type(); }
GSocketAddress * (g_native_socket_address_new)(gpointer native, gsize len) { return stub_funcs.ptr_g_native_socket_address_new(native, len); }
GType (g_volume_monitor_get_type)(void) { return stub_funcs.ptr_g_volume_monitor_get_type(); }
GVolumeMonitor * (g_volume_monitor_get)(void) { return stub_funcs.ptr_g_volume_monitor_get(); }
GList * (g_volume_monitor_get_connected_drives)(GVolumeMonitor * volume_monitor) { return stub_funcs.ptr_g_volume_monitor_get_connected_drives(volume_monitor); }
GList * (g_volume_monitor_get_volumes)(GVolumeMonitor * volume_monitor) { return stub_funcs.ptr_g_volume_monitor_get_volumes(volume_monitor); }
GList * (g_volume_monitor_get_mounts)(GVolumeMonitor * volume_monitor) { return stub_funcs.ptr_g_volume_monitor_get_mounts(volume_monitor); }
GVolume * (g_volume_monitor_get_volume_for_uuid)(GVolumeMonitor * volume_monitor, const char * uuid) { return stub_funcs.ptr_g_volume_monitor_get_volume_for_uuid(volume_monitor, uuid); }
GMount * (g_volume_monitor_get_mount_for_uuid)(GVolumeMonitor * volume_monitor, const char * uuid) { return stub_funcs.ptr_g_volume_monitor_get_mount_for_uuid(volume_monitor, uuid); }
GVolume * (g_volume_monitor_adopt_orphan_mount)(GMount * mount) { return stub_funcs.ptr_g_volume_monitor_adopt_orphan_mount(mount); }
GType (g_native_volume_monitor_get_type)(void) { return stub_funcs.ptr_g_native_volume_monitor_get_type(); }
GType (g_network_address_get_type)(void) { return stub_funcs.ptr_g_network_address_get_type(); }
GSocketConnectable * (g_network_address_new)(const gchar * hostname, guint16 port) { return stub_funcs.ptr_g_network_address_new(hostname, port); }
GSocketConnectable * (g_network_address_new_loopback)(guint16 port) { return stub_funcs.ptr_g_network_address_new_loopback(port); }
GSocketConnectable * (g_network_address_parse)(const gchar * host_and_port, guint16 default_port, GError * * error) { return stub_funcs.ptr_g_network_address_parse(host_and_port, default_port, error); }
GSocketConnectable * (g_network_address_parse_uri)(const gchar * uri, guint16 default_port, GError * * error) { return stub_funcs.ptr_g_network_address_parse_uri(uri, default_port, error); }
const gchar * (g_network_address_get_hostname)(GNetworkAddress * addr) { return stub_funcs.ptr_g_network_address_get_hostname(addr); }
guint16 (g_network_address_get_port)(GNetworkAddress * addr) { return stub_funcs.ptr_g_network_address_get_port(addr); }
const gchar * (g_network_address_get_scheme)(GNetworkAddress * addr) { return stub_funcs.ptr_g_network_address_get_scheme(addr); }
GType (g_network_monitor_get_type)(void) { return stub_funcs.ptr_g_network_monitor_get_type(); }
GNetworkMonitor * (g_network_monitor_get_default)(void) { return stub_funcs.ptr_g_network_monitor_get_default(); }
gboolean (g_network_monitor_get_network_available)(GNetworkMonitor * monitor) { return stub_funcs.ptr_g_network_monitor_get_network_available(monitor); }
gboolean (g_network_monitor_get_network_metered)(GNetworkMonitor * monitor) { return stub_funcs.ptr_g_network_monitor_get_network_metered(monitor); }
GNetworkConnectivity (g_network_monitor_get_connectivity)(GNetworkMonitor * monitor) { return stub_funcs.ptr_g_network_monitor_get_connectivity(monitor); }
gboolean (g_network_monitor_can_reach)(GNetworkMonitor * monitor, GSocketConnectable * connectable, GCancellable * cancellable, GError * * error) { return stub_funcs.ptr_g_network_monitor_can_reach(monitor, connectable, cancellable, error); }
void (g_network_monitor_can_reach_async)(GNetworkMonitor * monitor, GSocketConnectable * connectable, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data) { stub_funcs.ptr_g_network_monitor_can_reach_async(monitor, connectable, cancellable, callback, user_data); }
gboolean (g_network_monitor_can_reach_finish)(GNetworkMonitor * monitor, GAsyncResult * result, GError * * error) { return stub_funcs.ptr_g_network_monitor_can_reach_finish(monitor, result, error); }
GType (g_network_service_get_type)(void) { return stub_funcs.ptr_g_network_service_get_type(); }
GSocketConnectable * (g_network_service_new)(const gchar * service, const gchar * protocol, const gchar * domain) { return stub_funcs.ptr_g_network_service_new(service, protocol, domain); }
const gchar * (g_network_service_get_service)(GNetworkService * srv) { return stub_funcs.ptr_g_network_service_get_service(srv); }
const gchar * (g_network_service_get_protocol)(GNetworkService * srv) { return stub_funcs.ptr_g_network_service_get_protocol(srv); }
const gchar * (g_network_service_get_domain)(GNetworkService * srv) { return stub_funcs.ptr_g_network_service_get_domain(srv); }
const gchar * (g_network_service_get_scheme)(GNetworkService * srv) { return stub_funcs.ptr_g_network_service_get_scheme(srv); }
void (g_network_service_set_scheme)(GNetworkService * srv, const gchar * scheme) { stub_funcs.ptr_g_network_service_set_scheme(srv, scheme); }
GType (g_notification_get_type)(void) { return stub_funcs.ptr_g_notification_get_type(); }
GNotification * (g_notification_new)(const gchar * title) { return stub_funcs.ptr_g_notification_new(title); }
void (g_notification_set_title)(GNotification * notification, const gchar * title) { stub_funcs.ptr_g_notification_set_title(notification, title); }
void (g_notification_set_body)(GNotification * notification, const gchar * body) { stub_funcs.ptr_g_notification_set_body(notification, body); }
void (g_notification_set_icon)(GNotification * notification, GIcon * icon) { stub_funcs.ptr_g_notification_set_icon(notification, icon); }
void (g_notification_set_urgent)(GNotification * notification, gboolean urgent) { stub_funcs.ptr_g_notification_set_urgent(notification, urgent); }
void (g_notification_set_priority)(GNotification * notification, GNotificationPriority priority) { stub_funcs.ptr_g_notification_set_priority(notification, priority); }
void (g_notification_set_category)(GNotification * notification, const gchar * category) { stub_funcs.ptr_g_notification_set_category(notification, category); }
void (g_notification_add_button)(GNotification * notification, const gchar * label, const gchar * detailed_action) { stub_funcs.ptr_g_notification_add_button(notification, label, detailed_action); }
void (g_notification_add_button_with_target_value)(GNotification * notification, const gchar * label, const gchar * action, GVariant * target) { stub_funcs.ptr_g_notification_add_button_with_target_value(notification, label, action, target); }
void (g_notification_set_default_action)(GNotification * notification, const gchar * detailed_action) { stub_funcs.ptr_g_notification_set_default_action(notification, detailed_action); }
void (g_notification_set_default_action_and_target_value)(GNotification * notification, const gchar * action, GVariant * target) { stub_funcs.ptr_g_notification_set_default_action_and_target_value(notification, action, target); }
GType (g_permission_get_type)(void) { return stub_funcs.ptr_g_permission_get_type(); }
gboolean (g_permission_acquire)(GPermission * permission, GCancellable * cancellable, GError * * error) { return stub_funcs.ptr_g_permission_acquire(permission, cancellable, error); }
void (g_permission_acquire_async)(GPermission * permission, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data) { stub_funcs.ptr_g_permission_acquire_async(permission, cancellable, callback, user_data); }
gboolean (g_permission_acquire_finish)(GPermission * permission, GAsyncResult * result, GError * * error) { return stub_funcs.ptr_g_permission_acquire_finish(permission, result, error); }
gboolean (g_permission_release)(GPermission * permission, GCancellable * cancellable, GError * * error) { return stub_funcs.ptr_g_permission_release(permission, cancellable, error); }
void (g_permission_release_async)(GPermission * permission, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data) { stub_funcs.ptr_g_permission_release_async(permission, cancellable, callback, user_data); }
gboolean (g_permission_release_finish)(GPermission * permission, GAsyncResult * result, GError * * error) { return stub_funcs.ptr_g_permission_release_finish(permission, result, error); }
gboolean (g_permission_get_allowed)(GPermission * permission) { return stub_funcs.ptr_g_permission_get_allowed(permission); }
gboolean (g_permission_get_can_acquire)(GPermission * permission) { return stub_funcs.ptr_g_permission_get_can_acquire(permission); }
gboolean (g_permission_get_can_release)(GPermission * permission) { return stub_funcs.ptr_g_permission_get_can_release(permission); }
void (g_permission_impl_update)(GPermission * permission, gboolean allowed, gboolean can_acquire, gboolean can_release) { stub_funcs.ptr_g_permission_impl_update(permission, allowed, can_acquire, can_release); }
GType (g_pollable_input_stream_get_type)(void) { return stub_funcs.ptr_g_pollable_input_stream_get_type(); }
gboolean (g_pollable_input_stream_can_poll)(GPollableInputStream * stream) { return stub_funcs.ptr_g_pollable_input_stream_can_poll(stream); }
gboolean (g_pollable_input_stream_is_readable)(GPollableInputStream * stream) { return stub_funcs.ptr_g_pollable_input_stream_is_readable(stream); }
GSource * (g_pollable_input_stream_create_source)(GPollableInputStream * stream, GCancellable * cancellable) { return stub_funcs.ptr_g_pollable_input_stream_create_source(stream, cancellable); }
gssize (g_pollable_input_stream_read_nonblocking)(GPollableInputStream * stream, void * buffer, gsize count, GCancellable * cancellable, GError * * error) { return stub_funcs.ptr_g_pollable_input_stream_read_nonblocking(stream, buffer, count, cancellable, error); }
GType (g_pollable_output_stream_get_type)(void) { return stub_funcs.ptr_g_pollable_output_stream_get_type(); }
gboolean (g_pollable_output_stream_can_poll)(GPollableOutputStream * stream) { return stub_funcs.ptr_g_pollable_output_stream_can_poll(stream); }
gboolean (g_pollable_output_stream_is_writable)(GPollableOutputStream * stream) { return stub_funcs.ptr_g_pollable_output_stream_is_writable(stream); }
GSource * (g_pollable_output_stream_create_source)(GPollableOutputStream * stream, GCancellable * cancellable) { return stub_funcs.ptr_g_pollable_output_stream_create_source(stream, cancellable); }
gssize (g_pollable_output_stream_write_nonblocking)(GPollableOutputStream * stream, const void * buffer, gsize count, GCancellable * cancellable, GError * * error) { return stub_funcs.ptr_g_pollable_output_stream_write_nonblocking(stream, buffer, count, cancellable, error); }
GPollableReturn (g_pollable_output_stream_writev_nonblocking)(GPollableOutputStream * stream, const GOutputVector * vectors, gsize n_vectors, gsize * bytes_written, GCancellable * cancellable, GError * * error) { return stub_funcs.ptr_g_pollable_output_stream_writev_nonblocking(stream, vectors, n_vectors, bytes_written, cancellable, error); }
GSource * (g_pollable_source_new)(GObject * pollable_stream) { return stub_funcs.ptr_g_pollable_source_new(pollable_stream); }
GSource * (g_pollable_source_new_full)(gpointer pollable_stream, GSource * child_source, GCancellable * cancellable) { return stub_funcs.ptr_g_pollable_source_new_full(pollable_stream, child_source, cancellable); }
gssize (g_pollable_stream_read)(GInputStream * stream, void * buffer, gsize count, gboolean blocking, GCancellable * cancellable, GError * * error) { return stub_funcs.ptr_g_pollable_stream_read(stream, buffer, count, blocking, cancellable, error); }
gssize (g_pollable_stream_write)(GOutputStream * stream, const void * buffer, gsize count, gboolean blocking, GCancellable * cancellable, GError * * error) { return stub_funcs.ptr_g_pollable_stream_write(stream, buffer, count, blocking, cancellable, error); }
gboolean (g_pollable_stream_write_all)(GOutputStream * stream, const void * buffer, gsize count, gboolean blocking, gsize * bytes_written, GCancellable * cancellable, GError * * error) { return stub_funcs.ptr_g_pollable_stream_write_all(stream, buffer, count, blocking, bytes_written, cancellable, error); }
GType (g_power_profile_monitor_get_type)(void) { return stub_funcs.ptr_g_power_profile_monitor_get_type(); }
GPowerProfileMonitor * (g_power_profile_monitor_dup_default)(void) { return stub_funcs.ptr_g_power_profile_monitor_dup_default(); }
gboolean (g_power_profile_monitor_get_power_saver_enabled)(GPowerProfileMonitor * monitor) { return stub_funcs.ptr_g_power_profile_monitor_get_power_saver_enabled(monitor); }
GType (g_property_action_get_type)(void) { return stub_funcs.ptr_g_property_action_get_type(); }
GPropertyAction * (g_property_action_new)(const gchar * name, gpointer object, const gchar * property_name) { return stub_funcs.ptr_g_property_action_new(name, object, property_name); }
GType (g_proxy_get_type)(void) { return stub_funcs.ptr_g_proxy_get_type(); }
GProxy * (g_proxy_get_default_for_protocol)(const gchar * protocol) { return stub_funcs.ptr_g_proxy_get_default_for_protocol(protocol); }
GIOStream * (g_proxy_connect)(GProxy * proxy, GIOStream * connection, GProxyAddress * proxy_address, GCancellable * cancellable, GError * * error) { return stub_funcs.ptr_g_proxy_connect(proxy, connection, proxy_address, cancellable, error); }
void (g_proxy_connect_async)(GProxy * proxy, GIOStream * connection, GProxyAddress * proxy_address, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data) { stub_funcs.ptr_g_proxy_connect_async(proxy, connection, proxy_address, cancellable, callback, user_data); }
GIOStream * (g_proxy_connect_finish)(GProxy * proxy, GAsyncResult * result, GError * * error) { return stub_funcs.ptr_g_proxy_connect_finish(proxy, result, error); }
gboolean (g_proxy_supports_hostname)(GProxy * proxy) { return stub_funcs.ptr_g_proxy_supports_hostname(proxy); }
GType (g_proxy_address_get_type)(void) { return stub_funcs.ptr_g_proxy_address_get_type(); }
GSocketAddress * (g_proxy_address_new)(GInetAddress * inetaddr, guint16 port, const gchar * protocol, const gchar * dest_hostname, guint16 dest_port, const gchar * username, const gchar * password) { return stub_funcs.ptr_g_proxy_address_new(inetaddr, port, protocol, dest_hostname, dest_port, username, password); }
const gchar * (g_proxy_address_get_protocol)(GProxyAddress * proxy) { return stub_funcs.ptr_g_proxy_address_get_protocol(proxy); }
const gchar * (g_proxy_address_get_destination_protocol)(GProxyAddress * proxy) { return stub_funcs.ptr_g_proxy_address_get_destination_protocol(proxy); }
const gchar * (g_proxy_address_get_destination_hostname)(GProxyAddress * proxy) { return stub_funcs.ptr_g_proxy_address_get_destination_hostname(proxy); }
guint16 (g_proxy_address_get_destination_port)(GProxyAddress * proxy) { return stub_funcs.ptr_g_proxy_address_get_destination_port(proxy); }
const gchar * (g_proxy_address_get_username)(GProxyAddress * proxy) { return stub_funcs.ptr_g_proxy_address_get_username(proxy); }
const gchar * (g_proxy_address_get_password)(GProxyAddress * proxy) { return stub_funcs.ptr_g_proxy_address_get_password(proxy); }
const gchar * (g_proxy_address_get_uri)(GProxyAddress * proxy) { return stub_funcs.ptr_g_proxy_address_get_uri(proxy); }
GType (g_socket_address_enumerator_get_type)(void) { return stub_funcs.ptr_g_socket_address_enumerator_get_type(); }
GSocketAddress * (g_socket_address_enumerator_next)(GSocketAddressEnumerator * enumerator, GCancellable * cancellable, GError * * error) { return stub_funcs.ptr_g_socket_address_enumerator_next(enumerator, cancellable, error); }
void (g_socket_address_enumerator_next_async)(GSocketAddressEnumerator * enumerator, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data) { stub_funcs.ptr_g_socket_address_enumerator_next_async(enumerator, cancellable, callback, user_data); }
GSocketAddress * (g_socket_address_enumerator_next_finish)(GSocketAddressEnumerator * enumerator, GAsyncResult * result, GError * * error) { return stub_funcs.ptr_g_socket_address_enumerator_next_finish(enumerator, result, error); }
GType (g_proxy_address_enumerator_get_type)(void) { return stub_funcs.ptr_g_proxy_address_enumerator_get_type(); }
GType (g_proxy_resolver_get_type)(void) { return stub_funcs.ptr_g_proxy_resolver_get_type(); }
GProxyResolver * (g_proxy_resolver_get_default)(void) { return stub_funcs.ptr_g_proxy_resolver_get_default(); }
gboolean (g_proxy_resolver_is_supported)(GProxyResolver * resolver) { return stub_funcs.ptr_g_proxy_resolver_is_supported(resolver); }
gchar * * (g_proxy_resolver_lookup)(GProxyResolver * resolver, const gchar * uri, GCancellable * cancellable, GError * * error) { return stub_funcs.ptr_g_proxy_resolver_lookup(resolver, uri, cancellable, error); }
void (g_proxy_resolver_lookup_async)(GProxyResolver * resolver, const gchar * uri, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data) { stub_funcs.ptr_g_proxy_resolver_lookup_async(resolver, uri, cancellable, callback, user_data); }
gchar * * (g_proxy_resolver_lookup_finish)(GProxyResolver * resolver, GAsyncResult * result, GError * * error) { return stub_funcs.ptr_g_proxy_resolver_lookup_finish(resolver, result, error); }
GType (g_remote_action_group_get_type)(void) { return stub_funcs.ptr_g_remote_action_group_get_type(); }
void (g_remote_action_group_activate_action_full)(GRemoteActionGroup * remote, const gchar * action_name, GVariant * parameter, GVariant * platform_data) { stub_funcs.ptr_g_remote_action_group_activate_action_full(remote, action_name, parameter, platform_data); }
void (g_remote_action_group_change_action_state_full)(GRemoteActionGroup * remote, const gchar * action_name, GVariant * value, GVariant * platform_data) { stub_funcs.ptr_g_remote_action_group_change_action_state_full(remote, action_name, value, platform_data); }
GType (g_resolver_get_type)(void) { return stub_funcs.ptr_g_resolver_get_type(); }
GResolver * (g_resolver_get_default)(void) { return stub_funcs.ptr_g_resolver_get_default(); }
void (g_resolver_set_default)(GResolver * resolver) { stub_funcs.ptr_g_resolver_set_default(resolver); }
GList * (g_resolver_lookup_by_name)(GResolver * resolver, const gchar * hostname, GCancellable * cancellable, GError * * error) { return stub_funcs.ptr_g_resolver_lookup_by_name(resolver, hostname, cancellable, error); }
void (g_resolver_lookup_by_name_async)(GResolver * resolver, const gchar * hostname, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data) { stub_funcs.ptr_g_resolver_lookup_by_name_async(resolver, hostname, cancellable, callback, user_data); }
GList * (g_resolver_lookup_by_name_finish)(GResolver * resolver, GAsyncResult * result, GError * * error) { return stub_funcs.ptr_g_resolver_lookup_by_name_finish(resolver, result, error); }
void (g_resolver_lookup_by_name_with_flags_async)(GResolver * resolver, const gchar * hostname, GResolverNameLookupFlags flags, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data) { stub_funcs.ptr_g_resolver_lookup_by_name_with_flags_async(resolver, hostname, flags, cancellable, callback, user_data); }
GList * (g_resolver_lookup_by_name_with_flags_finish)(GResolver * resolver, GAsyncResult * result, GError * * error) { return stub_funcs.ptr_g_resolver_lookup_by_name_with_flags_finish(resolver, result, error); }
GList * (g_resolver_lookup_by_name_with_flags)(GResolver * resolver, const gchar * hostname, GResolverNameLookupFlags flags, GCancellable * cancellable, GError * * error) { return stub_funcs.ptr_g_resolver_lookup_by_name_with_flags(resolver, hostname, flags, cancellable, error); }
void (g_resolver_free_addresses)(GList * addresses) { stub_funcs.ptr_g_resolver_free_addresses(addresses); }
gchar * (g_resolver_lookup_by_address)(GResolver * resolver, GInetAddress * address, GCancellable * cancellable, GError * * error) { return stub_funcs.ptr_g_resolver_lookup_by_address(resolver, address, cancellable, error); }
void (g_resolver_lookup_by_address_async)(GResolver * resolver, GInetAddress * address, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data) { stub_funcs.ptr_g_resolver_lookup_by_address_async(resolver, address, cancellable, callback, user_data); }
gchar * (g_resolver_lookup_by_address_finish)(GResolver * resolver, GAsyncResult * result, GError * * error) { return stub_funcs.ptr_g_resolver_lookup_by_address_finish(resolver, result, error); }
GList * (g_resolver_lookup_service)(GResolver * resolver, const gchar * service, const gchar * protocol, const gchar * domain, GCancellable * cancellable, GError * * error) { return stub_funcs.ptr_g_resolver_lookup_service(resolver, service, protocol, domain, cancellable, error); }
void (g_resolver_lookup_service_async)(GResolver * resolver, const gchar * service, const gchar * protocol, const gchar * domain, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data) { stub_funcs.ptr_g_resolver_lookup_service_async(resolver, service, protocol, domain, cancellable, callback, user_data); }
GList * (g_resolver_lookup_service_finish)(GResolver * resolver, GAsyncResult * result, GError * * error) { return stub_funcs.ptr_g_resolver_lookup_service_finish(resolver, result, error); }
GList * (g_resolver_lookup_records)(GResolver * resolver, const gchar * rrname, GResolverRecordType record_type, GCancellable * cancellable, GError * * error) { return stub_funcs.ptr_g_resolver_lookup_records(resolver, rrname, record_type, cancellable, error); }
void (g_resolver_lookup_records_async)(GResolver * resolver, const gchar * rrname, GResolverRecordType record_type, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data) { stub_funcs.ptr_g_resolver_lookup_records_async(resolver, rrname, record_type, cancellable, callback, user_data); }
GList * (g_resolver_lookup_records_finish)(GResolver * resolver, GAsyncResult * result, GError * * error) { return stub_funcs.ptr_g_resolver_lookup_records_finish(resolver, result, error); }
void (g_resolver_free_targets)(GList * targets) { stub_funcs.ptr_g_resolver_free_targets(targets); }
unsigned int (g_resolver_get_timeout)(GResolver * resolver) { return stub_funcs.ptr_g_resolver_get_timeout(resolver); }
void (g_resolver_set_timeout)(GResolver * resolver, unsigned int timeout_ms) { stub_funcs.ptr_g_resolver_set_timeout(resolver, timeout_ms); }
GQuark (g_resolver_error_quark)(void) { return stub_funcs.ptr_g_resolver_error_quark(); }
GQuark (g_resource_error_quark)(void) { return stub_funcs.ptr_g_resource_error_quark(); }
GType (g_resource_get_type)(void) { return stub_funcs.ptr_g_resource_get_type(); }
GResource * (g_resource_new_from_data)(GBytes * data, GError * * error) { return stub_funcs.ptr_g_resource_new_from_data(data, error); }
GResource * (g_resource_ref)(GResource * resource) { return stub_funcs.ptr_g_resource_ref(resource); }
void (g_resource_unref)(GResource * resource) { stub_funcs.ptr_g_resource_unref(resource); }
GResource * (g_resource_load)(const gchar * filename, GError * * error) { return stub_funcs.ptr_g_resource_load(filename, error); }
GInputStream * (g_resource_open_stream)(GResource * resource, const char * path, GResourceLookupFlags lookup_flags, GError * * error) { return stub_funcs.ptr_g_resource_open_stream(resource, path, lookup_flags, error); }
GBytes * (g_resource_lookup_data)(GResource * resource, const char * path, GResourceLookupFlags lookup_flags, GError * * error) { return stub_funcs.ptr_g_resource_lookup_data(resource, path, lookup_flags, error); }
char * * (g_resource_enumerate_children)(GResource * resource, const char * path, GResourceLookupFlags lookup_flags, GError * * error) { return stub_funcs.ptr_g_resource_enumerate_children(resource, path, lookup_flags, error); }
gboolean (g_resource_get_info)(GResource * resource, const char * path, GResourceLookupFlags lookup_flags, gsize * size, guint32 * flags, GError * * error) { return stub_funcs.ptr_g_resource_get_info(resource, path, lookup_flags, size, flags, error); }
void (g_resources_register)(GResource * resource) { stub_funcs.ptr_g_resources_register(resource); }
void (g_resources_unregister)(GResource * resource) { stub_funcs.ptr_g_resources_unregister(resource); }
GInputStream * (g_resources_open_stream)(const char * path, GResourceLookupFlags lookup_flags, GError * * error) { return stub_funcs.ptr_g_resources_open_stream(path, lookup_flags, error); }
GBytes * (g_resources_lookup_data)(const char * path, GResourceLookupFlags lookup_flags, GError * * error) { return stub_funcs.ptr_g_resources_lookup_data(path, lookup_flags, error); }
char * * (g_resources_enumerate_children)(const char * path, GResourceLookupFlags lookup_flags, GError * * error) { return stub_funcs.ptr_g_resources_enumerate_children(path, lookup_flags, error); }
gboolean (g_resources_get_info)(const char * path, GResourceLookupFlags lookup_flags, gsize * size, guint32 * flags, GError * * error) { return stub_funcs.ptr_g_resources_get_info(path, lookup_flags, size, flags, error); }
void (g_static_resource_init)(GStaticResource * static_resource) { stub_funcs.ptr_g_static_resource_init(static_resource); }
void (g_static_resource_fini)(GStaticResource * static_resource) { stub_funcs.ptr_g_static_resource_fini(static_resource); }
GResource * (g_static_resource_get_resource)(GStaticResource * static_resource) { return stub_funcs.ptr_g_static_resource_get_resource(static_resource); }
GType (g_seekable_get_type)(void) { return stub_funcs.ptr_g_seekable_get_type(); }
goffset (g_seekable_tell)(GSeekable * seekable) { return stub_funcs.ptr_g_seekable_tell(seekable); }
gboolean (g_seekable_can_seek)(GSeekable * seekable) { return stub_funcs.ptr_g_seekable_can_seek(seekable); }
gboolean (g_seekable_seek)(GSeekable * seekable, goffset offset, GSeekType type, GCancellable * cancellable, GError * * error) { return stub_funcs.ptr_g_seekable_seek(seekable, offset, type, cancellable, error); }
gboolean (g_seekable_can_truncate)(GSeekable * seekable) { return stub_funcs.ptr_g_seekable_can_truncate(seekable); }
gboolean (g_seekable_truncate)(GSeekable * seekable, goffset offset, GCancellable * cancellable, GError * * error) { return stub_funcs.ptr_g_seekable_truncate(seekable, offset, cancellable, error); }
GType (g_settings_schema_source_get_type)(void) { return stub_funcs.ptr_g_settings_schema_source_get_type(); }
GSettingsSchemaSource * (g_settings_schema_source_get_default)(void) { return stub_funcs.ptr_g_settings_schema_source_get_default(); }
GSettingsSchemaSource * (g_settings_schema_source_ref)(GSettingsSchemaSource * source) { return stub_funcs.ptr_g_settings_schema_source_ref(source); }
void (g_settings_schema_source_unref)(GSettingsSchemaSource * source) { stub_funcs.ptr_g_settings_schema_source_unref(source); }
GSettingsSchemaSource * (g_settings_schema_source_new_from_directory)(const gchar * directory, GSettingsSchemaSource * parent, gboolean trusted, GError * * error) { return stub_funcs.ptr_g_settings_schema_source_new_from_directory(directory, parent, trusted, error); }
GSettingsSchema * (g_settings_schema_source_lookup)(GSettingsSchemaSource * source, const gchar * schema_id, gboolean recursive) { return stub_funcs.ptr_g_settings_schema_source_lookup(source, schema_id, recursive); }
void (g_settings_schema_source_list_schemas)(GSettingsSchemaSource * source, gboolean recursive, gchar * * * non_relocatable, gchar * * * relocatable) { stub_funcs.ptr_g_settings_schema_source_list_schemas(source, recursive, non_relocatable, relocatable); }
GType (g_settings_schema_get_type)(void) { return stub_funcs.ptr_g_settings_schema_get_type(); }
GSettingsSchema * (g_settings_schema_ref)(GSettingsSchema * schema) { return stub_funcs.ptr_g_settings_schema_ref(schema); }
void (g_settings_schema_unref)(GSettingsSchema * schema) { stub_funcs.ptr_g_settings_schema_unref(schema); }
const gchar * (g_settings_schema_get_id)(GSettingsSchema * schema) { return stub_funcs.ptr_g_settings_schema_get_id(schema); }
const gchar * (g_settings_schema_get_path)(GSettingsSchema * schema) { return stub_funcs.ptr_g_settings_schema_get_path(schema); }
GSettingsSchemaKey * (g_settings_schema_get_key)(GSettingsSchema * schema, const gchar * name) { return stub_funcs.ptr_g_settings_schema_get_key(schema, name); }
gboolean (g_settings_schema_has_key)(GSettingsSchema * schema, const gchar * name) { return stub_funcs.ptr_g_settings_schema_has_key(schema, name); }
gchar * * (g_settings_schema_list_keys)(GSettingsSchema * schema) { return stub_funcs.ptr_g_settings_schema_list_keys(schema); }
gchar * * (g_settings_schema_list_children)(GSettingsSchema * schema) { return stub_funcs.ptr_g_settings_schema_list_children(schema); }
GType (g_settings_schema_key_get_type)(void) { return stub_funcs.ptr_g_settings_schema_key_get_type(); }
GSettingsSchemaKey * (g_settings_schema_key_ref)(GSettingsSchemaKey * key) { return stub_funcs.ptr_g_settings_schema_key_ref(key); }
void (g_settings_schema_key_unref)(GSettingsSchemaKey * key) { stub_funcs.ptr_g_settings_schema_key_unref(key); }
const GVariantType * (g_settings_schema_key_get_value_type)(GSettingsSchemaKey * key) { return stub_funcs.ptr_g_settings_schema_key_get_value_type(key); }
GVariant * (g_settings_schema_key_get_default_value)(GSettingsSchemaKey * key) { return stub_funcs.ptr_g_settings_schema_key_get_default_value(key); }
GVariant * (g_settings_schema_key_get_range)(GSettingsSchemaKey * key) { return stub_funcs.ptr_g_settings_schema_key_get_range(key); }
gboolean (g_settings_schema_key_range_check)(GSettingsSchemaKey * key, GVariant * value) { return stub_funcs.ptr_g_settings_schema_key_range_check(key, value); }
const gchar * (g_settings_schema_key_get_name)(GSettingsSchemaKey * key) { return stub_funcs.ptr_g_settings_schema_key_get_name(key); }
const gchar * (g_settings_schema_key_get_summary)(GSettingsSchemaKey * key) { return stub_funcs.ptr_g_settings_schema_key_get_summary(key); }
const gchar * (g_settings_schema_key_get_description)(GSettingsSchemaKey * key) { return stub_funcs.ptr_g_settings_schema_key_get_description(key); }
GType (g_settings_get_type)(void) { return stub_funcs.ptr_g_settings_get_type(); }
const gchar * const * (g_settings_list_schemas)(void) { return stub_funcs.ptr_g_settings_list_schemas(); }
const gchar * const * (g_settings_list_relocatable_schemas)(void) { return stub_funcs.ptr_g_settings_list_relocatable_schemas(); }
GSettings * (g_settings_new)(const gchar * schema_id) { return stub_funcs.ptr_g_settings_new(schema_id); }
GSettings * (g_settings_new_with_path)(const gchar * schema_id, const gchar * path) { return stub_funcs.ptr_g_settings_new_with_path(schema_id, path); }
GSettings * (g_settings_new_with_backend)(const gchar * schema_id, GSettingsBackend * backend) { return stub_funcs.ptr_g_settings_new_with_backend(schema_id, backend); }
GSettings * (g_settings_new_with_backend_and_path)(const gchar * schema_id, GSettingsBackend * backend, const gchar * path) { return stub_funcs.ptr_g_settings_new_with_backend_and_path(schema_id, backend, path); }
GSettings * (g_settings_new_full)(GSettingsSchema * schema, GSettingsBackend * backend, const gchar * path) { return stub_funcs.ptr_g_settings_new_full(schema, backend, path); }
gchar * * (g_settings_list_children)(GSettings * settings) { return stub_funcs.ptr_g_settings_list_children(settings); }
gchar * * (g_settings_list_keys)(GSettings * settings) { return stub_funcs.ptr_g_settings_list_keys(settings); }
GVariant * (g_settings_get_range)(GSettings * settings, const gchar * key) { return stub_funcs.ptr_g_settings_get_range(settings, key); }
gboolean (g_settings_range_check)(GSettings * settings, const gchar * key, GVariant * value) { return stub_funcs.ptr_g_settings_range_check(settings, key, value); }
gboolean (g_settings_set_value)(GSettings * settings, const gchar * key, GVariant * value) { return stub_funcs.ptr_g_settings_set_value(settings, key, value); }
GVariant * (g_settings_get_value)(GSettings * settings, const gchar * key) { return stub_funcs.ptr_g_settings_get_value(settings, key); }
GVariant * (g_settings_get_user_value)(GSettings * settings, const gchar * key) { return stub_funcs.ptr_g_settings_get_user_value(settings, key); }
GVariant * (g_settings_get_default_value)(GSettings * settings, const gchar * key) { return stub_funcs.ptr_g_settings_get_default_value(settings, key); }
void (g_settings_reset)(GSettings * settings, const gchar * key) { stub_funcs.ptr_g_settings_reset(settings, key); }
gint (g_settings_get_int)(GSettings * settings, const gchar * key) { return stub_funcs.ptr_g_settings_get_int(settings, key); }
gboolean (g_settings_set_int)(GSettings * settings, const gchar * key, gint value) { return stub_funcs.ptr_g_settings_set_int(settings, key, value); }
gint64 (g_settings_get_int64)(GSettings * settings, const gchar * key) { return stub_funcs.ptr_g_settings_get_int64(settings, key); }
gboolean (g_settings_set_int64)(GSettings * settings, const gchar * key, gint64 value) { return stub_funcs.ptr_g_settings_set_int64(settings, key, value); }
guint (g_settings_get_uint)(GSettings * settings, const gchar * key) { return stub_funcs.ptr_g_settings_get_uint(settings, key); }
gboolean (g_settings_set_uint)(GSettings * settings, const gchar * key, guint value) { return stub_funcs.ptr_g_settings_set_uint(settings, key, value); }
guint64 (g_settings_get_uint64)(GSettings * settings, const gchar * key) { return stub_funcs.ptr_g_settings_get_uint64(settings, key); }
gboolean (g_settings_set_uint64)(GSettings * settings, const gchar * key, guint64 value) { return stub_funcs.ptr_g_settings_set_uint64(settings, key, value); }
gchar * (g_settings_get_string)(GSettings * settings, const gchar * key) { return stub_funcs.ptr_g_settings_get_string(settings, key); }
gboolean (g_settings_set_string)(GSettings * settings, const gchar * key, const gchar * value) { return stub_funcs.ptr_g_settings_set_string(settings, key, value); }
gboolean (g_settings_get_boolean)(GSettings * settings, const gchar * key) { return stub_funcs.ptr_g_settings_get_boolean(settings, key); }
gboolean (g_settings_set_boolean)(GSettings * settings, const gchar * key, gboolean value) { return stub_funcs.ptr_g_settings_set_boolean(settings, key, value); }
gdouble (g_settings_get_double)(GSettings * settings, const gchar * key) { return stub_funcs.ptr_g_settings_get_double(settings, key); }
gboolean (g_settings_set_double)(GSettings * settings, const gchar * key, gdouble value) { return stub_funcs.ptr_g_settings_set_double(settings, key, value); }
gchar * * (g_settings_get_strv)(GSettings * settings, const gchar * key) { return stub_funcs.ptr_g_settings_get_strv(settings, key); }
gboolean (g_settings_set_strv)(GSettings * settings, const gchar * key, const gchar * const * value) { return stub_funcs.ptr_g_settings_set_strv(settings, key, value); }
gint (g_settings_get_enum)(GSettings * settings, const gchar * key) { return stub_funcs.ptr_g_settings_get_enum(settings, key); }
gboolean (g_settings_set_enum)(GSettings * settings, const gchar * key, gint value) { return stub_funcs.ptr_g_settings_set_enum(settings, key, value); }
guint (g_settings_get_flags)(GSettings * settings, const gchar * key) { return stub_funcs.ptr_g_settings_get_flags(settings, key); }
gboolean (g_settings_set_flags)(GSettings * settings, const gchar * key, guint value) { return stub_funcs.ptr_g_settings_set_flags(settings, key, value); }
GSettings * (g_settings_get_child)(GSettings * settings, const gchar * name) { return stub_funcs.ptr_g_settings_get_child(settings, name); }
gboolean (g_settings_is_writable)(GSettings * settings, const gchar * name) { return stub_funcs.ptr_g_settings_is_writable(settings, name); }
void (g_settings_delay)(GSettings * settings) { stub_funcs.ptr_g_settings_delay(settings); }
void (g_settings_apply)(GSettings * settings) { stub_funcs.ptr_g_settings_apply(settings); }
void (g_settings_revert)(GSettings * settings) { stub_funcs.ptr_g_settings_revert(settings); }
gboolean (g_settings_get_has_unapplied)(GSettings * settings) { return stub_funcs.ptr_g_settings_get_has_unapplied(settings); }
void (g_settings_sync)(void) { stub_funcs.ptr_g_settings_sync(); }
void (g_settings_bind)(GSettings * settings, const gchar * key, gpointer object, const gchar * property, GSettingsBindFlags flags) { stub_funcs.ptr_g_settings_bind(settings, key, object, property, flags); }
void (g_settings_bind_with_mapping)(GSettings * settings, const gchar * key, gpointer object, const gchar * property, GSettingsBindFlags flags, GSettingsBindGetMapping get_mapping, GSettingsBindSetMapping set_mapping, gpointer user_data, GDestroyNotify destroy) { stub_funcs.ptr_g_settings_bind_with_mapping(settings, key, object, property, flags, get_mapping, set_mapping, user_data, destroy); }
void (g_settings_bind_with_mapping_closures)(GSettings * settings, const char * key, GObject * object, const char * property, GSettingsBindFlags flags, GClosure * get_mapping, GClosure * set_mapping) { stub_funcs.ptr_g_settings_bind_with_mapping_closures(settings, key, object, property, flags, get_mapping, set_mapping); }
void (g_settings_bind_writable)(GSettings * settings, const gchar * key, gpointer object, const gchar * property, gboolean inverted) { stub_funcs.ptr_g_settings_bind_writable(settings, key, object, property, inverted); }
void (g_settings_unbind)(gpointer object, const gchar * property) { stub_funcs.ptr_g_settings_unbind(object, property); }
GAction * (g_settings_create_action)(GSettings * settings, const gchar * key) { return stub_funcs.ptr_g_settings_create_action(settings, key); }
gpointer (g_settings_get_mapped)(GSettings * settings, const gchar * key, GSettingsGetMapping mapping, gpointer user_data) { return stub_funcs.ptr_g_settings_get_mapped(settings, key, mapping, user_data); }
GType (g_simple_action_get_type)(void) { return stub_funcs.ptr_g_simple_action_get_type(); }
GSimpleAction * (g_simple_action_new)(const gchar * name, const GVariantType * parameter_type) { return stub_funcs.ptr_g_simple_action_new(name, parameter_type); }
GSimpleAction * (g_simple_action_new_stateful)(const gchar * name, const GVariantType * parameter_type, GVariant * state) { return stub_funcs.ptr_g_simple_action_new_stateful(name, parameter_type, state); }
void (g_simple_action_set_enabled)(GSimpleAction * simple, gboolean enabled) { stub_funcs.ptr_g_simple_action_set_enabled(simple, enabled); }
void (g_simple_action_set_state)(GSimpleAction * simple, GVariant * value) { stub_funcs.ptr_g_simple_action_set_state(simple, value); }
void (g_simple_action_set_state_hint)(GSimpleAction * simple, GVariant * state_hint) { stub_funcs.ptr_g_simple_action_set_state_hint(simple, state_hint); }
GType (g_simple_action_group_get_type)(void) { return stub_funcs.ptr_g_simple_action_group_get_type(); }
GSimpleActionGroup * (g_simple_action_group_new)(void) { return stub_funcs.ptr_g_simple_action_group_new(); }
GAction * (g_simple_action_group_lookup)(GSimpleActionGroup * simple, const gchar * action_name) { return stub_funcs.ptr_g_simple_action_group_lookup(simple, action_name); }
void (g_simple_action_group_insert)(GSimpleActionGroup * simple, GAction * action) { stub_funcs.ptr_g_simple_action_group_insert(simple, action); }
void (g_simple_action_group_remove)(GSimpleActionGroup * simple, const gchar * action_name) { stub_funcs.ptr_g_simple_action_group_remove(simple, action_name); }
void (g_simple_action_group_add_entries)(GSimpleActionGroup * simple, const GActionEntry * entries, gint n_entries, gpointer user_data) { stub_funcs.ptr_g_simple_action_group_add_entries(simple, entries, n_entries, user_data); }
GType (g_simple_async_result_get_type)(void) { return stub_funcs.ptr_g_simple_async_result_get_type(); }
GSimpleAsyncResult * (g_simple_async_result_new)(GObject * source_object, GAsyncReadyCallback callback, gpointer user_data, gpointer source_tag) { return stub_funcs.ptr_g_simple_async_result_new(source_object, callback, user_data, source_tag); }
GSimpleAsyncResult * (g_simple_async_result_new_from_error)(GObject * source_object, GAsyncReadyCallback callback, gpointer user_data, const GError * error) { return stub_funcs.ptr_g_simple_async_result_new_from_error(source_object, callback, user_data, error); }
GSimpleAsyncResult * (g_simple_async_result_new_take_error)(GObject * source_object, GAsyncReadyCallback callback, gpointer user_data, GError * error) { return stub_funcs.ptr_g_simple_async_result_new_take_error(source_object, callback, user_data, error); }
void (g_simple_async_result_set_op_res_gpointer)(GSimpleAsyncResult * simple, gpointer op_res, GDestroyNotify destroy_op_res) { stub_funcs.ptr_g_simple_async_result_set_op_res_gpointer(simple, op_res, destroy_op_res); }
gpointer (g_simple_async_result_get_op_res_gpointer)(GSimpleAsyncResult * simple) { return stub_funcs.ptr_g_simple_async_result_get_op_res_gpointer(simple); }
void (g_simple_async_result_set_op_res_gssize)(GSimpleAsyncResult * simple, gssize op_res) { stub_funcs.ptr_g_simple_async_result_set_op_res_gssize(simple, op_res); }
gssize (g_simple_async_result_get_op_res_gssize)(GSimpleAsyncResult * simple) { return stub_funcs.ptr_g_simple_async_result_get_op_res_gssize(simple); }
void (g_simple_async_result_set_op_res_gboolean)(GSimpleAsyncResult * simple, gboolean op_res) { stub_funcs.ptr_g_simple_async_result_set_op_res_gboolean(simple, op_res); }
gboolean (g_simple_async_result_get_op_res_gboolean)(GSimpleAsyncResult * simple) { return stub_funcs.ptr_g_simple_async_result_get_op_res_gboolean(simple); }
void (g_simple_async_result_set_check_cancellable)(GSimpleAsyncResult * simple, GCancellable * check_cancellable) { stub_funcs.ptr_g_simple_async_result_set_check_cancellable(simple, check_cancellable); }
gpointer (g_simple_async_result_get_source_tag)(GSimpleAsyncResult * simple) { return stub_funcs.ptr_g_simple_async_result_get_source_tag(simple); }
void (g_simple_async_result_set_handle_cancellation)(GSimpleAsyncResult * simple, gboolean handle_cancellation) { stub_funcs.ptr_g_simple_async_result_set_handle_cancellation(simple, handle_cancellation); }
void (g_simple_async_result_complete)(GSimpleAsyncResult * simple) { stub_funcs.ptr_g_simple_async_result_complete(simple); }
void (g_simple_async_result_complete_in_idle)(GSimpleAsyncResult * simple) { stub_funcs.ptr_g_simple_async_result_complete_in_idle(simple); }
void (g_simple_async_result_run_in_thread)(GSimpleAsyncResult * simple, GSimpleAsyncThreadFunc func, int io_priority, GCancellable * cancellable) { stub_funcs.ptr_g_simple_async_result_run_in_thread(simple, func, io_priority, cancellable); }
void (g_simple_async_result_set_from_error)(GSimpleAsyncResult * simple, const GError * error) { stub_funcs.ptr_g_simple_async_result_set_from_error(simple, error); }
void (g_simple_async_result_take_error)(GSimpleAsyncResult * simple, GError * error) { stub_funcs.ptr_g_simple_async_result_take_error(simple, error); }
gboolean (g_simple_async_result_propagate_error)(GSimpleAsyncResult * simple, GError * * dest) { return stub_funcs.ptr_g_simple_async_result_propagate_error(simple, dest); }
void (g_simple_async_result_set_error)(GSimpleAsyncResult * simple, GQuark domain, gint code, const char * format, ...) { va_list vaargs; va_start(vaargs, format); stub_funcs.ptr_g_simple_async_result_set_error_va(simple, domain, code, format, vaargs); va_end(vaargs); }
void (g_simple_async_result_set_error_va)(GSimpleAsyncResult * simple, GQuark domain, gint code, const char * format, va_list args) { stub_funcs.ptr_g_simple_async_result_set_error_va(simple, domain, code, format, args); }
gboolean (g_simple_async_result_is_valid)(GAsyncResult * result, GObject * source, gpointer source_tag) { return stub_funcs.ptr_g_simple_async_result_is_valid(result, source, source_tag); }
void (g_simple_async_report_gerror_in_idle)(GObject * object, GAsyncReadyCallback callback, gpointer user_data, const GError * error) { stub_funcs.ptr_g_simple_async_report_gerror_in_idle(object, callback, user_data, error); }
void (g_simple_async_report_take_gerror_in_idle)(GObject * object, GAsyncReadyCallback callback, gpointer user_data, GError * error) { stub_funcs.ptr_g_simple_async_report_take_gerror_in_idle(object, callback, user_data, error); }
GType (g_simple_io_stream_get_type)(void) { return stub_funcs.ptr_g_simple_io_stream_get_type(); }
GIOStream * (g_simple_io_stream_new)(GInputStream * input_stream, GOutputStream * output_stream) { return stub_funcs.ptr_g_simple_io_stream_new(input_stream, output_stream); }
GType (g_simple_permission_get_type)(void) { return stub_funcs.ptr_g_simple_permission_get_type(); }
GPermission * (g_simple_permission_new)(gboolean allowed) { return stub_funcs.ptr_g_simple_permission_new(allowed); }
GType (g_simple_proxy_resolver_get_type)(void) { return stub_funcs.ptr_g_simple_proxy_resolver_get_type(); }
GProxyResolver * (g_simple_proxy_resolver_new)(const gchar * default_proxy, gchar * * ignore_hosts) { return stub_funcs.ptr_g_simple_proxy_resolver_new(default_proxy, ignore_hosts); }
void (g_simple_proxy_resolver_set_default_proxy)(GSimpleProxyResolver * resolver, const gchar * default_proxy) { stub_funcs.ptr_g_simple_proxy_resolver_set_default_proxy(resolver, default_proxy); }
void (g_simple_proxy_resolver_set_ignore_hosts)(GSimpleProxyResolver * resolver, gchar * * ignore_hosts) { stub_funcs.ptr_g_simple_proxy_resolver_set_ignore_hosts(resolver, ignore_hosts); }
void (g_simple_proxy_resolver_set_uri_proxy)(GSimpleProxyResolver * resolver, const gchar * uri_scheme, const gchar * proxy) { stub_funcs.ptr_g_simple_proxy_resolver_set_uri_proxy(resolver, uri_scheme, proxy); }
GType (g_socket_get_type)(void) { return stub_funcs.ptr_g_socket_get_type(); }
GSocket * (g_socket_new)(GSocketFamily family, GSocketType type, GSocketProtocol protocol, GError * * error) { return stub_funcs.ptr_g_socket_new(family, type, protocol, error); }
GSocket * (g_socket_new_from_fd)(gint fd, GError * * error) { return stub_funcs.ptr_g_socket_new_from_fd(fd, error); }
int (g_socket_get_fd)(GSocket * socket) { return stub_funcs.ptr_g_socket_get_fd(socket); }
GSocketFamily (g_socket_get_family)(GSocket * socket) { return stub_funcs.ptr_g_socket_get_family(socket); }
GSocketType (g_socket_get_socket_type)(GSocket * socket) { return stub_funcs.ptr_g_socket_get_socket_type(socket); }
GSocketProtocol (g_socket_get_protocol)(GSocket * socket) { return stub_funcs.ptr_g_socket_get_protocol(socket); }
GSocketAddress * (g_socket_get_local_address)(GSocket * socket, GError * * error) { return stub_funcs.ptr_g_socket_get_local_address(socket, error); }
GSocketAddress * (g_socket_get_remote_address)(GSocket * socket, GError * * error) { return stub_funcs.ptr_g_socket_get_remote_address(socket, error); }
void (g_socket_set_blocking)(GSocket * socket, gboolean blocking) { stub_funcs.ptr_g_socket_set_blocking(socket, blocking); }
gboolean (g_socket_get_blocking)(GSocket * socket) { return stub_funcs.ptr_g_socket_get_blocking(socket); }
void (g_socket_set_keepalive)(GSocket * socket, gboolean keepalive) { stub_funcs.ptr_g_socket_set_keepalive(socket, keepalive); }
gboolean (g_socket_get_keepalive)(GSocket * socket) { return stub_funcs.ptr_g_socket_get_keepalive(socket); }
gint (g_socket_get_listen_backlog)(GSocket * socket) { return stub_funcs.ptr_g_socket_get_listen_backlog(socket); }
void (g_socket_set_listen_backlog)(GSocket * socket, gint backlog) { stub_funcs.ptr_g_socket_set_listen_backlog(socket, backlog); }
guint (g_socket_get_timeout)(GSocket * socket) { return stub_funcs.ptr_g_socket_get_timeout(socket); }
void (g_socket_set_timeout)(GSocket * socket, guint timeout) { stub_funcs.ptr_g_socket_set_timeout(socket, timeout); }
guint (g_socket_get_ttl)(GSocket * socket) { return stub_funcs.ptr_g_socket_get_ttl(socket); }
void (g_socket_set_ttl)(GSocket * socket, guint ttl) { stub_funcs.ptr_g_socket_set_ttl(socket, ttl); }
gboolean (g_socket_get_broadcast)(GSocket * socket) { return stub_funcs.ptr_g_socket_get_broadcast(socket); }
void (g_socket_set_broadcast)(GSocket * socket, gboolean broadcast) { stub_funcs.ptr_g_socket_set_broadcast(socket, broadcast); }
gboolean (g_socket_get_multicast_loopback)(GSocket * socket) { return stub_funcs.ptr_g_socket_get_multicast_loopback(socket); }
void (g_socket_set_multicast_loopback)(GSocket * socket, gboolean loopback) { stub_funcs.ptr_g_socket_set_multicast_loopback(socket, loopback); }
guint (g_socket_get_multicast_ttl)(GSocket * socket) { return stub_funcs.ptr_g_socket_get_multicast_ttl(socket); }
void (g_socket_set_multicast_ttl)(GSocket * socket, guint ttl) { stub_funcs.ptr_g_socket_set_multicast_ttl(socket, ttl); }
gboolean (g_socket_is_connected)(GSocket * socket) { return stub_funcs.ptr_g_socket_is_connected(socket); }
gboolean (g_socket_bind)(GSocket * socket, GSocketAddress * address, gboolean allow_reuse, GError * * error) { return stub_funcs.ptr_g_socket_bind(socket, address, allow_reuse, error); }
gboolean (g_socket_join_multicast_group)(GSocket * socket, GInetAddress * group, gboolean source_specific, const gchar * iface, GError * * error) { return stub_funcs.ptr_g_socket_join_multicast_group(socket, group, source_specific, iface, error); }
gboolean (g_socket_leave_multicast_group)(GSocket * socket, GInetAddress * group, gboolean source_specific, const gchar * iface, GError * * error) { return stub_funcs.ptr_g_socket_leave_multicast_group(socket, group, source_specific, iface, error); }
gboolean (g_socket_join_multicast_group_ssm)(GSocket * socket, GInetAddress * group, GInetAddress * source_specific, const gchar * iface, GError * * error) { return stub_funcs.ptr_g_socket_join_multicast_group_ssm(socket, group, source_specific, iface, error); }
gboolean (g_socket_leave_multicast_group_ssm)(GSocket * socket, GInetAddress * group, GInetAddress * source_specific, const gchar * iface, GError * * error) { return stub_funcs.ptr_g_socket_leave_multicast_group_ssm(socket, group, source_specific, iface, error); }
gboolean (g_socket_connect)(GSocket * socket, GSocketAddress * address, GCancellable * cancellable, GError * * error) { return stub_funcs.ptr_g_socket_connect(socket, address, cancellable, error); }
gboolean (g_socket_check_connect_result)(GSocket * socket, GError * * error) { return stub_funcs.ptr_g_socket_check_connect_result(socket, error); }
gssize (g_socket_get_available_bytes)(GSocket * socket) { return stub_funcs.ptr_g_socket_get_available_bytes(socket); }
GIOCondition (g_socket_condition_check)(GSocket * socket, GIOCondition condition) { return stub_funcs.ptr_g_socket_condition_check(socket, condition); }
gboolean (g_socket_condition_wait)(GSocket * socket, GIOCondition condition, GCancellable * cancellable, GError * * error) { return stub_funcs.ptr_g_socket_condition_wait(socket, condition, cancellable, error); }
gboolean (g_socket_condition_timed_wait)(GSocket * socket, GIOCondition condition, gint64 timeout_us, GCancellable * cancellable, GError * * error) { return stub_funcs.ptr_g_socket_condition_timed_wait(socket, condition, timeout_us, cancellable, error); }
GSocket * (g_socket_accept)(GSocket * socket, GCancellable * cancellable, GError * * error) { return stub_funcs.ptr_g_socket_accept(socket, cancellable, error); }
gboolean (g_socket_listen)(GSocket * socket, GError * * error) { return stub_funcs.ptr_g_socket_listen(socket, error); }
gssize (g_socket_receive)(GSocket * socket, gchar * buffer, gsize size, GCancellable * cancellable, GError * * error) { return stub_funcs.ptr_g_socket_receive(socket, buffer, size, cancellable, error); }
GBytes * (g_socket_receive_bytes)(GSocket * socket, gsize size, gint64 timeout_us, GCancellable * cancellable, GError * * error) { return stub_funcs.ptr_g_socket_receive_bytes(socket, size, timeout_us, cancellable, error); }
gssize (g_socket_receive_from)(GSocket * socket, GSocketAddress * * address, gchar * buffer, gsize size, GCancellable * cancellable, GError * * error) { return stub_funcs.ptr_g_socket_receive_from(socket, address, buffer, size, cancellable, error); }
GBytes * (g_socket_receive_bytes_from)(GSocket * socket, GSocketAddress * * address, gsize size, gint64 timeout_us, GCancellable * cancellable, GError * * error) { return stub_funcs.ptr_g_socket_receive_bytes_from(socket, address, size, timeout_us, cancellable, error); }
gssize (g_socket_send)(GSocket * socket, const gchar * buffer, gsize size, GCancellable * cancellable, GError * * error) { return stub_funcs.ptr_g_socket_send(socket, buffer, size, cancellable, error); }
gssize (g_socket_send_to)(GSocket * socket, GSocketAddress * address, const gchar * buffer, gsize size, GCancellable * cancellable, GError * * error) { return stub_funcs.ptr_g_socket_send_to(socket, address, buffer, size, cancellable, error); }
gssize (g_socket_receive_message)(GSocket * socket, GSocketAddress * * address, GInputVector * vectors, gint num_vectors, GSocketControlMessage * * * messages, gint * num_messages, gint * flags, GCancellable * cancellable, GError * * error) { return stub_funcs.ptr_g_socket_receive_message(socket, address, vectors, num_vectors, messages, num_messages, flags, cancellable, error); }
gssize (g_socket_send_message)(GSocket * socket, GSocketAddress * address, GOutputVector * vectors, gint num_vectors, GSocketControlMessage * * messages, gint num_messages, gint flags, GCancellable * cancellable, GError * * error) { return stub_funcs.ptr_g_socket_send_message(socket, address, vectors, num_vectors, messages, num_messages, flags, cancellable, error); }
gint (g_socket_receive_messages)(GSocket * socket, GInputMessage * messages, guint num_messages, gint flags, GCancellable * cancellable, GError * * error) { return stub_funcs.ptr_g_socket_receive_messages(socket, messages, num_messages, flags, cancellable, error); }
gint (g_socket_send_messages)(GSocket * socket, GOutputMessage * messages, guint num_messages, gint flags, GCancellable * cancellable, GError * * error) { return stub_funcs.ptr_g_socket_send_messages(socket, messages, num_messages, flags, cancellable, error); }
gboolean (g_socket_close)(GSocket * socket, GError * * error) { return stub_funcs.ptr_g_socket_close(socket, error); }
gboolean (g_socket_shutdown)(GSocket * socket, gboolean shutdown_read, gboolean shutdown_write, GError * * error) { return stub_funcs.ptr_g_socket_shutdown(socket, shutdown_read, shutdown_write, error); }
gboolean (g_socket_is_closed)(GSocket * socket) { return stub_funcs.ptr_g_socket_is_closed(socket); }
GSource * (g_socket_create_source)(GSocket * socket, GIOCondition condition, GCancellable * cancellable) { return stub_funcs.ptr_g_socket_create_source(socket, condition, cancellable); }
gboolean (g_socket_speaks_ipv4)(GSocket * socket) { return stub_funcs.ptr_g_socket_speaks_ipv4(socket); }
GCredentials * (g_socket_get_credentials)(GSocket * socket, GError * * error) { return stub_funcs.ptr_g_socket_get_credentials(socket, error); }
gssize (g_socket_receive_with_blocking)(GSocket * socket, gchar * buffer, gsize size, gboolean blocking, GCancellable * cancellable, GError * * error) { return stub_funcs.ptr_g_socket_receive_with_blocking(socket, buffer, size, blocking, cancellable, error); }
gssize (g_socket_send_with_blocking)(GSocket * socket, const gchar * buffer, gsize size, gboolean blocking, GCancellable * cancellable, GError * * error) { return stub_funcs.ptr_g_socket_send_with_blocking(socket, buffer, size, blocking, cancellable, error); }
GPollableReturn (g_socket_send_message_with_timeout)(GSocket * socket, GSocketAddress * address, const GOutputVector * vectors, gint num_vectors, GSocketControlMessage * * messages, gint num_messages, gint flags, gint64 timeout_us, gsize * bytes_written, GCancellable * cancellable, GError * * error) { return stub_funcs.ptr_g_socket_send_message_with_timeout(socket, address, vectors, num_vectors, messages, num_messages, flags, timeout_us, bytes_written, cancellable, error); }
gboolean (g_socket_get_option)(GSocket * socket, gint level, gint optname, gint * value, GError * * error) { return stub_funcs.ptr_g_socket_get_option(socket, level, optname, value, error); }
gboolean (g_socket_set_option)(GSocket * socket, gint level, gint optname, gint value, GError * * error) { return stub_funcs.ptr_g_socket_set_option(socket, level, optname, value, error); }
GType (g_socket_client_get_type)(void) { return stub_funcs.ptr_g_socket_client_get_type(); }
GSocketClient * (g_socket_client_new)(void) { return stub_funcs.ptr_g_socket_client_new(); }
GSocketFamily (g_socket_client_get_family)(GSocketClient * client) { return stub_funcs.ptr_g_socket_client_get_family(client); }
void (g_socket_client_set_family)(GSocketClient * client, GSocketFamily family) { stub_funcs.ptr_g_socket_client_set_family(client, family); }
GSocketType (g_socket_client_get_socket_type)(GSocketClient * client) { return stub_funcs.ptr_g_socket_client_get_socket_type(client); }
void (g_socket_client_set_socket_type)(GSocketClient * client, GSocketType type) { stub_funcs.ptr_g_socket_client_set_socket_type(client, type); }
GSocketProtocol (g_socket_client_get_protocol)(GSocketClient * client) { return stub_funcs.ptr_g_socket_client_get_protocol(client); }
void (g_socket_client_set_protocol)(GSocketClient * client, GSocketProtocol protocol) { stub_funcs.ptr_g_socket_client_set_protocol(client, protocol); }
GSocketAddress * (g_socket_client_get_local_address)(GSocketClient * client) { return stub_funcs.ptr_g_socket_client_get_local_address(client); }
void (g_socket_client_set_local_address)(GSocketClient * client, GSocketAddress * address) { stub_funcs.ptr_g_socket_client_set_local_address(client, address); }
guint (g_socket_client_get_timeout)(GSocketClient * client) { return stub_funcs.ptr_g_socket_client_get_timeout(client); }
void (g_socket_client_set_timeout)(GSocketClient * client, guint timeout) { stub_funcs.ptr_g_socket_client_set_timeout(client, timeout); }
gboolean (g_socket_client_get_enable_proxy)(GSocketClient * client) { return stub_funcs.ptr_g_socket_client_get_enable_proxy(client); }
void (g_socket_client_set_enable_proxy)(GSocketClient * client, gboolean enable) { stub_funcs.ptr_g_socket_client_set_enable_proxy(client, enable); }
gboolean (g_socket_client_get_tls)(GSocketClient * client) { return stub_funcs.ptr_g_socket_client_get_tls(client); }
void (g_socket_client_set_tls)(GSocketClient * client, gboolean tls) { stub_funcs.ptr_g_socket_client_set_tls(client, tls); }
GTlsCertificateFlags (g_socket_client_get_tls_validation_flags)(GSocketClient * client) { return stub_funcs.ptr_g_socket_client_get_tls_validation_flags(client); }
void (g_socket_client_set_tls_validation_flags)(GSocketClient * client, GTlsCertificateFlags flags) { stub_funcs.ptr_g_socket_client_set_tls_validation_flags(client, flags); }
GProxyResolver * (g_socket_client_get_proxy_resolver)(GSocketClient * client) { return stub_funcs.ptr_g_socket_client_get_proxy_resolver(client); }
void (g_socket_client_set_proxy_resolver)(GSocketClient * client, GProxyResolver * proxy_resolver) { stub_funcs.ptr_g_socket_client_set_proxy_resolver(client, proxy_resolver); }
GSocketConnection * (g_socket_client_connect)(GSocketClient * client, GSocketConnectable * connectable, GCancellable * cancellable, GError * * error) { return stub_funcs.ptr_g_socket_client_connect(client, connectable, cancellable, error); }
GSocketConnection * (g_socket_client_connect_to_host)(GSocketClient * client, const gchar * host_and_port, guint16 default_port, GCancellable * cancellable, GError * * error) { return stub_funcs.ptr_g_socket_client_connect_to_host(client, host_and_port, default_port, cancellable, error); }
GSocketConnection * (g_socket_client_connect_to_service)(GSocketClient * client, const gchar * domain, const gchar * service, GCancellable * cancellable, GError * * error) { return stub_funcs.ptr_g_socket_client_connect_to_service(client, domain, service, cancellable, error); }
GSocketConnection * (g_socket_client_connect_to_uri)(GSocketClient * client, const gchar * uri, guint16 default_port, GCancellable * cancellable, GError * * error) { return stub_funcs.ptr_g_socket_client_connect_to_uri(client, uri, default_port, cancellable, error); }
void (g_socket_client_connect_async)(GSocketClient * client, GSocketConnectable * connectable, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data) { stub_funcs.ptr_g_socket_client_connect_async(client, connectable, cancellable, callback, user_data); }
GSocketConnection * (g_socket_client_connect_finish)(GSocketClient * client, GAsyncResult * result, GError * * error) { return stub_funcs.ptr_g_socket_client_connect_finish(client, result, error); }
void (g_socket_client_connect_to_host_async)(GSocketClient * client, const gchar * host_and_port, guint16 default_port, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data) { stub_funcs.ptr_g_socket_client_connect_to_host_async(client, host_and_port, default_port, cancellable, callback, user_data); }
GSocketConnection * (g_socket_client_connect_to_host_finish)(GSocketClient * client, GAsyncResult * result, GError * * error) { return stub_funcs.ptr_g_socket_client_connect_to_host_finish(client, result, error); }
void (g_socket_client_connect_to_service_async)(GSocketClient * client, const gchar * domain, const gchar * service, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data) { stub_funcs.ptr_g_socket_client_connect_to_service_async(client, domain, service, cancellable, callback, user_data); }
GSocketConnection * (g_socket_client_connect_to_service_finish)(GSocketClient * client, GAsyncResult * result, GError * * error) { return stub_funcs.ptr_g_socket_client_connect_to_service_finish(client, result, error); }
void (g_socket_client_connect_to_uri_async)(GSocketClient * client, const gchar * uri, guint16 default_port, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data) { stub_funcs.ptr_g_socket_client_connect_to_uri_async(client, uri, default_port, cancellable, callback, user_data); }
GSocketConnection * (g_socket_client_connect_to_uri_finish)(GSocketClient * client, GAsyncResult * result, GError * * error) { return stub_funcs.ptr_g_socket_client_connect_to_uri_finish(client, result, error); }
void (g_socket_client_add_application_proxy)(GSocketClient * client, const gchar * protocol) { stub_funcs.ptr_g_socket_client_add_application_proxy(client, protocol); }
GType (g_socket_connectable_get_type)(void) { return stub_funcs.ptr_g_socket_connectable_get_type(); }
GSocketAddressEnumerator * (g_socket_connectable_enumerate)(GSocketConnectable * connectable) { return stub_funcs.ptr_g_socket_connectable_enumerate(connectable); }
GSocketAddressEnumerator * (g_socket_connectable_proxy_enumerate)(GSocketConnectable * connectable) { return stub_funcs.ptr_g_socket_connectable_proxy_enumerate(connectable); }
gchar * (g_socket_connectable_to_string)(GSocketConnectable * connectable) { return stub_funcs.ptr_g_socket_connectable_to_string(connectable); }
GType (g_socket_connection_get_type)(void) { return stub_funcs.ptr_g_socket_connection_get_type(); }
gboolean (g_socket_connection_is_connected)(GSocketConnection * connection) { return stub_funcs.ptr_g_socket_connection_is_connected(connection); }
gboolean (g_socket_connection_connect)(GSocketConnection * connection, GSocketAddress * address, GCancellable * cancellable, GError * * error) { return stub_funcs.ptr_g_socket_connection_connect(connection, address, cancellable, error); }
void (g_socket_connection_connect_async)(GSocketConnection * connection, GSocketAddress * address, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data) { stub_funcs.ptr_g_socket_connection_connect_async(connection, address, cancellable, callback, user_data); }
gboolean (g_socket_connection_connect_finish)(GSocketConnection * connection, GAsyncResult * result, GError * * error) { return stub_funcs.ptr_g_socket_connection_connect_finish(connection, result, error); }
GSocket * (g_socket_connection_get_socket)(GSocketConnection * connection) { return stub_funcs.ptr_g_socket_connection_get_socket(connection); }
GSocketAddress * (g_socket_connection_get_local_address)(GSocketConnection * connection, GError * * error) { return stub_funcs.ptr_g_socket_connection_get_local_address(connection, error); }
GSocketAddress * (g_socket_connection_get_remote_address)(GSocketConnection * connection, GError * * error) { return stub_funcs.ptr_g_socket_connection_get_remote_address(connection, error); }
void (g_socket_connection_factory_register_type)(GType g_type, GSocketFamily family, GSocketType type, gint protocol) { stub_funcs.ptr_g_socket_connection_factory_register_type(g_type, family, type, protocol); }
GType (g_socket_connection_factory_lookup_type)(GSocketFamily family, GSocketType type, gint protocol_id) { return stub_funcs.ptr_g_socket_connection_factory_lookup_type(family, type, protocol_id); }
GSocketConnection * (g_socket_connection_factory_create_connection)(GSocket * socket) { return stub_funcs.ptr_g_socket_connection_factory_create_connection(socket); }
GType (g_socket_control_message_get_type)(void) { return stub_funcs.ptr_g_socket_control_message_get_type(); }
gsize (g_socket_control_message_get_size)(GSocketControlMessage * message) { return stub_funcs.ptr_g_socket_control_message_get_size(message); }
int (g_socket_control_message_get_level)(GSocketControlMessage * message) { return stub_funcs.ptr_g_socket_control_message_get_level(message); }
int (g_socket_control_message_get_msg_type)(GSocketControlMessage * message) { return stub_funcs.ptr_g_socket_control_message_get_msg_type(message); }
void (g_socket_control_message_serialize)(GSocketControlMessage * message, gpointer data) { stub_funcs.ptr_g_socket_control_message_serialize(message, data); }
GSocketControlMessage * (g_socket_control_message_deserialize)(int level, int type, gsize size, gpointer data) { return stub_funcs.ptr_g_socket_control_message_deserialize(level, type, size, data); }
GType (g_socket_listener_get_type)(void) { return stub_funcs.ptr_g_socket_listener_get_type(); }
GSocketListener * (g_socket_listener_new)(void) { return stub_funcs.ptr_g_socket_listener_new(); }
void (g_socket_listener_set_backlog)(GSocketListener * listener, int listen_backlog) { stub_funcs.ptr_g_socket_listener_set_backlog(listener, listen_backlog); }
gboolean (g_socket_listener_add_socket)(GSocketListener * listener, GSocket * socket, GObject * source_object, GError * * error) { return stub_funcs.ptr_g_socket_listener_add_socket(listener, socket, source_object, error); }
gboolean (g_socket_listener_add_address)(GSocketListener * listener, GSocketAddress * address, GSocketType type, GSocketProtocol protocol, GObject * source_object, GSocketAddress * * effective_address, GError * * error) { return stub_funcs.ptr_g_socket_listener_add_address(listener, address, type, protocol, source_object, effective_address, error); }
gboolean (g_socket_listener_add_inet_port)(GSocketListener * listener, guint16 port, GObject * source_object, GError * * error) { return stub_funcs.ptr_g_socket_listener_add_inet_port(listener, port, source_object, error); }
guint16 (g_socket_listener_add_any_inet_port)(GSocketListener * listener, GObject * source_object, GError * * error) { return stub_funcs.ptr_g_socket_listener_add_any_inet_port(listener, source_object, error); }
GSocket * (g_socket_listener_accept_socket)(GSocketListener * listener, GObject * * source_object, GCancellable * cancellable, GError * * error) { return stub_funcs.ptr_g_socket_listener_accept_socket(listener, source_object, cancellable, error); }
void (g_socket_listener_accept_socket_async)(GSocketListener * listener, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data) { stub_funcs.ptr_g_socket_listener_accept_socket_async(listener, cancellable, callback, user_data); }
GSocket * (g_socket_listener_accept_socket_finish)(GSocketListener * listener, GAsyncResult * result, GObject * * source_object, GError * * error) { return stub_funcs.ptr_g_socket_listener_accept_socket_finish(listener, result, source_object, error); }
GSocketConnection * (g_socket_listener_accept)(GSocketListener * listener, GObject * * source_object, GCancellable * cancellable, GError * * error) { return stub_funcs.ptr_g_socket_listener_accept(listener, source_object, cancellable, error); }
void (g_socket_listener_accept_async)(GSocketListener * listener, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data) { stub_funcs.ptr_g_socket_listener_accept_async(listener, cancellable, callback, user_data); }
GSocketConnection * (g_socket_listener_accept_finish)(GSocketListener * listener, GAsyncResult * result, GObject * * source_object, GError * * error) { return stub_funcs.ptr_g_socket_listener_accept_finish(listener, result, source_object, error); }
void (g_socket_listener_close)(GSocketListener * listener) { stub_funcs.ptr_g_socket_listener_close(listener); }
GType (g_socket_service_get_type)(void) { return stub_funcs.ptr_g_socket_service_get_type(); }
GSocketService * (g_socket_service_new)(void) { return stub_funcs.ptr_g_socket_service_new(); }
void (g_socket_service_start)(GSocketService * service) { stub_funcs.ptr_g_socket_service_start(service); }
void (g_socket_service_stop)(GSocketService * service) { stub_funcs.ptr_g_socket_service_stop(service); }
gboolean (g_socket_service_is_active)(GSocketService * service) { return stub_funcs.ptr_g_socket_service_is_active(service); }
GType (g_srv_target_get_type)(void) { return stub_funcs.ptr_g_srv_target_get_type(); }
GSrvTarget * (g_srv_target_new)(const gchar * hostname, guint16 port, guint16 priority, guint16 weight) { return stub_funcs.ptr_g_srv_target_new(hostname, port, priority, weight); }
GSrvTarget * (g_srv_target_copy)(GSrvTarget * target) { return stub_funcs.ptr_g_srv_target_copy(target); }
void (g_srv_target_free)(GSrvTarget * target) { stub_funcs.ptr_g_srv_target_free(target); }
const gchar * (g_srv_target_get_hostname)(GSrvTarget * target) { return stub_funcs.ptr_g_srv_target_get_hostname(target); }
guint16 (g_srv_target_get_port)(GSrvTarget * target) { return stub_funcs.ptr_g_srv_target_get_port(target); }
guint16 (g_srv_target_get_priority)(GSrvTarget * target) { return stub_funcs.ptr_g_srv_target_get_priority(target); }
guint16 (g_srv_target_get_weight)(GSrvTarget * target) { return stub_funcs.ptr_g_srv_target_get_weight(target); }
GList * (g_srv_target_list_sort)(GList * targets) { return stub_funcs.ptr_g_srv_target_list_sort(targets); }
GType (g_subprocess_get_type)(void) { return stub_funcs.ptr_g_subprocess_get_type(); }
GSubprocess * (g_subprocess_newv)(const gchar * const * argv, GSubprocessFlags flags, GError * * error) { return stub_funcs.ptr_g_subprocess_newv(argv, flags, error); }
GOutputStream * (g_subprocess_get_stdin_pipe)(GSubprocess * subprocess) { return stub_funcs.ptr_g_subprocess_get_stdin_pipe(subprocess); }
GInputStream * (g_subprocess_get_stdout_pipe)(GSubprocess * subprocess) { return stub_funcs.ptr_g_subprocess_get_stdout_pipe(subprocess); }
GInputStream * (g_subprocess_get_stderr_pipe)(GSubprocess * subprocess) { return stub_funcs.ptr_g_subprocess_get_stderr_pipe(subprocess); }
const gchar * (g_subprocess_get_identifier)(GSubprocess * subprocess) { return stub_funcs.ptr_g_subprocess_get_identifier(subprocess); }
void (g_subprocess_send_signal)(GSubprocess * subprocess, gint signal_num) { stub_funcs.ptr_g_subprocess_send_signal(subprocess, signal_num); }
void (g_subprocess_force_exit)(GSubprocess * subprocess) { stub_funcs.ptr_g_subprocess_force_exit(subprocess); }
gboolean (g_subprocess_wait)(GSubprocess * subprocess, GCancellable * cancellable, GError * * error) { return stub_funcs.ptr_g_subprocess_wait(subprocess, cancellable, error); }
void (g_subprocess_wait_async)(GSubprocess * subprocess, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data) { stub_funcs.ptr_g_subprocess_wait_async(subprocess, cancellable, callback, user_data); }
gboolean (g_subprocess_wait_finish)(GSubprocess * subprocess, GAsyncResult * result, GError * * error) { return stub_funcs.ptr_g_subprocess_wait_finish(subprocess, result, error); }
gboolean (g_subprocess_wait_check)(GSubprocess * subprocess, GCancellable * cancellable, GError * * error) { return stub_funcs.ptr_g_subprocess_wait_check(subprocess, cancellable, error); }
void (g_subprocess_wait_check_async)(GSubprocess * subprocess, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data) { stub_funcs.ptr_g_subprocess_wait_check_async(subprocess, cancellable, callback, user_data); }
gboolean (g_subprocess_wait_check_finish)(GSubprocess * subprocess, GAsyncResult * result, GError * * error) { return stub_funcs.ptr_g_subprocess_wait_check_finish(subprocess, result, error); }
gint (g_subprocess_get_status)(GSubprocess * subprocess) { return stub_funcs.ptr_g_subprocess_get_status(subprocess); }
gboolean (g_subprocess_get_successful)(GSubprocess * subprocess) { return stub_funcs.ptr_g_subprocess_get_successful(subprocess); }
gboolean (g_subprocess_get_if_exited)(GSubprocess * subprocess) { return stub_funcs.ptr_g_subprocess_get_if_exited(subprocess); }
gint (g_subprocess_get_exit_status)(GSubprocess * subprocess) { return stub_funcs.ptr_g_subprocess_get_exit_status(subprocess); }
gboolean (g_subprocess_get_if_signaled)(GSubprocess * subprocess) { return stub_funcs.ptr_g_subprocess_get_if_signaled(subprocess); }
gint (g_subprocess_get_term_sig)(GSubprocess * subprocess) { return stub_funcs.ptr_g_subprocess_get_term_sig(subprocess); }
gboolean (g_subprocess_communicate)(GSubprocess * subprocess, GBytes * stdin_buf, GCancellable * cancellable, GBytes * * stdout_buf, GBytes * * stderr_buf, GError * * error) { return stub_funcs.ptr_g_subprocess_communicate(subprocess, stdin_buf, cancellable, stdout_buf, stderr_buf, error); }
void (g_subprocess_communicate_async)(GSubprocess * subprocess, GBytes * stdin_buf, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data) { stub_funcs.ptr_g_subprocess_communicate_async(subprocess, stdin_buf, cancellable, callback, user_data); }
gboolean (g_subprocess_communicate_finish)(GSubprocess * subprocess, GAsyncResult * result, GBytes * * stdout_buf, GBytes * * stderr_buf, GError * * error) { return stub_funcs.ptr_g_subprocess_communicate_finish(subprocess, result, stdout_buf, stderr_buf, error); }
gboolean (g_subprocess_communicate_utf8)(GSubprocess * subprocess, const char * stdin_buf, GCancellable * cancellable, char * * stdout_buf, char * * stderr_buf, GError * * error) { return stub_funcs.ptr_g_subprocess_communicate_utf8(subprocess, stdin_buf, cancellable, stdout_buf, stderr_buf, error); }
void (g_subprocess_communicate_utf8_async)(GSubprocess * subprocess, const char * stdin_buf, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data) { stub_funcs.ptr_g_subprocess_communicate_utf8_async(subprocess, stdin_buf, cancellable, callback, user_data); }
gboolean (g_subprocess_communicate_utf8_finish)(GSubprocess * subprocess, GAsyncResult * result, char * * stdout_buf, char * * stderr_buf, GError * * error) { return stub_funcs.ptr_g_subprocess_communicate_utf8_finish(subprocess, result, stdout_buf, stderr_buf, error); }
GType (g_subprocess_launcher_get_type)(void) { return stub_funcs.ptr_g_subprocess_launcher_get_type(); }
GSubprocessLauncher * (g_subprocess_launcher_new)(GSubprocessFlags flags) { return stub_funcs.ptr_g_subprocess_launcher_new(flags); }
GSubprocess * (g_subprocess_launcher_spawnv)(GSubprocessLauncher * self, const gchar * const * argv, GError * * error) { return stub_funcs.ptr_g_subprocess_launcher_spawnv(self, argv, error); }
void (g_subprocess_launcher_set_environ)(GSubprocessLauncher * self, gchar * * env) { stub_funcs.ptr_g_subprocess_launcher_set_environ(self, env); }
void (g_subprocess_launcher_setenv)(GSubprocessLauncher * self, const gchar * variable, const gchar * value, gboolean overwrite) { stub_funcs.ptr_g_subprocess_launcher_setenv(self, variable, value, overwrite); }
void (g_subprocess_launcher_unsetenv)(GSubprocessLauncher * self, const gchar * variable) { stub_funcs.ptr_g_subprocess_launcher_unsetenv(self, variable); }
const gchar * (g_subprocess_launcher_getenv)(GSubprocessLauncher * self, const gchar * variable) { return stub_funcs.ptr_g_subprocess_launcher_getenv(self, variable); }
void (g_subprocess_launcher_set_cwd)(GSubprocessLauncher * self, const gchar * cwd) { stub_funcs.ptr_g_subprocess_launcher_set_cwd(self, cwd); }
void (g_subprocess_launcher_set_flags)(GSubprocessLauncher * self, GSubprocessFlags flags) { stub_funcs.ptr_g_subprocess_launcher_set_flags(self, flags); }
void (g_subprocess_launcher_set_stdin_file_path)(GSubprocessLauncher * self, const gchar * path) { stub_funcs.ptr_g_subprocess_launcher_set_stdin_file_path(self, path); }
void (g_subprocess_launcher_take_stdin_fd)(GSubprocessLauncher * self, gint fd) { stub_funcs.ptr_g_subprocess_launcher_take_stdin_fd(self, fd); }
void (g_subprocess_launcher_set_stdout_file_path)(GSubprocessLauncher * self, const gchar * path) { stub_funcs.ptr_g_subprocess_launcher_set_stdout_file_path(self, path); }
void (g_subprocess_launcher_take_stdout_fd)(GSubprocessLauncher * self, gint fd) { stub_funcs.ptr_g_subprocess_launcher_take_stdout_fd(self, fd); }
void (g_subprocess_launcher_set_stderr_file_path)(GSubprocessLauncher * self, const gchar * path) { stub_funcs.ptr_g_subprocess_launcher_set_stderr_file_path(self, path); }
void (g_subprocess_launcher_take_stderr_fd)(GSubprocessLauncher * self, gint fd) { stub_funcs.ptr_g_subprocess_launcher_take_stderr_fd(self, fd); }
void (g_subprocess_launcher_take_fd)(GSubprocessLauncher * self, gint source_fd, gint target_fd) { stub_funcs.ptr_g_subprocess_launcher_take_fd(self, source_fd, target_fd); }
void (g_subprocess_launcher_close)(GSubprocessLauncher * self) { stub_funcs.ptr_g_subprocess_launcher_close(self); }
void (g_subprocess_launcher_set_child_setup)(GSubprocessLauncher * self, GSpawnChildSetupFunc child_setup, gpointer user_data, GDestroyNotify destroy_notify) { stub_funcs.ptr_g_subprocess_launcher_set_child_setup(self, child_setup, user_data, destroy_notify); }
GType (g_task_get_type)(void) { return stub_funcs.ptr_g_task_get_type(); }
GTask * (g_task_new)(gpointer source_object, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer callback_data) { return stub_funcs.ptr_g_task_new(source_object, cancellable, callback, callback_data); }
void (g_task_report_error)(gpointer source_object, GAsyncReadyCallback callback, gpointer callback_data, gpointer source_tag, GError * error) { stub_funcs.ptr_g_task_report_error(source_object, callback, callback_data, source_tag, error); }
void (g_task_set_task_data)(GTask * task, gpointer task_data, GDestroyNotify task_data_destroy) { stub_funcs.ptr_g_task_set_task_data(task, task_data, task_data_destroy); }
void (g_task_set_priority)(GTask * task, gint priority) { stub_funcs.ptr_g_task_set_priority(task, priority); }
void (g_task_set_check_cancellable)(GTask * task, gboolean check_cancellable) { stub_funcs.ptr_g_task_set_check_cancellable(task, check_cancellable); }
void (g_task_set_source_tag)(GTask * task, gpointer source_tag) { stub_funcs.ptr_g_task_set_source_tag(task, source_tag); }
void (g_task_set_name)(GTask * task, const gchar * name) { stub_funcs.ptr_g_task_set_name(task, name); }
void (g_task_set_static_name)(GTask * task, const gchar * name) { stub_funcs.ptr_g_task_set_static_name(task, name); }
gpointer (g_task_get_source_object)(GTask * task) { return stub_funcs.ptr_g_task_get_source_object(task); }
gpointer (g_task_get_task_data)(GTask * task) { return stub_funcs.ptr_g_task_get_task_data(task); }
gint (g_task_get_priority)(GTask * task) { return stub_funcs.ptr_g_task_get_priority(task); }
GMainContext * (g_task_get_context)(GTask * task) { return stub_funcs.ptr_g_task_get_context(task); }
GCancellable * (g_task_get_cancellable)(GTask * task) { return stub_funcs.ptr_g_task_get_cancellable(task); }
gboolean (g_task_get_check_cancellable)(GTask * task) { return stub_funcs.ptr_g_task_get_check_cancellable(task); }
gpointer (g_task_get_source_tag)(GTask * task) { return stub_funcs.ptr_g_task_get_source_tag(task); }
const gchar * (g_task_get_name)(GTask * task) { return stub_funcs.ptr_g_task_get_name(task); }
gboolean (g_task_is_valid)(gpointer result, gpointer source_object) { return stub_funcs.ptr_g_task_is_valid(result, source_object); }
void (g_task_run_in_thread)(GTask * task, GTaskThreadFunc task_func) { stub_funcs.ptr_g_task_run_in_thread(task, task_func); }
void (g_task_run_in_thread_sync)(GTask * task, GTaskThreadFunc task_func) { stub_funcs.ptr_g_task_run_in_thread_sync(task, task_func); }
gboolean (g_task_set_return_on_cancel)(GTask * task, gboolean return_on_cancel) { return stub_funcs.ptr_g_task_set_return_on_cancel(task, return_on_cancel); }
gboolean (g_task_get_return_on_cancel)(GTask * task) { return stub_funcs.ptr_g_task_get_return_on_cancel(task); }
void (g_task_attach_source)(GTask * task, GSource * source, GSourceFunc callback) { stub_funcs.ptr_g_task_attach_source(task, source, callback); }
void (g_task_return_pointer)(GTask * task, gpointer result, GDestroyNotify result_destroy) { stub_funcs.ptr_g_task_return_pointer(task, result, result_destroy); }
void (g_task_return_boolean)(GTask * task, gboolean result) { stub_funcs.ptr_g_task_return_boolean(task, result); }
void (g_task_return_int)(GTask * task, gssize result) { stub_funcs.ptr_g_task_return_int(task, result); }
void (g_task_return_error)(GTask * task, GError * error) { stub_funcs.ptr_g_task_return_error(task, error); }
void (g_task_return_new_error_literal)(GTask * task, GQuark domain, gint code, const char * message) { stub_funcs.ptr_g_task_return_new_error_literal(task, domain, code, message); }
void (g_task_return_value)(GTask * task, GValue * result) { stub_funcs.ptr_g_task_return_value(task, result); }
gboolean (g_task_return_error_if_cancelled)(GTask * task) { return stub_funcs.ptr_g_task_return_error_if_cancelled(task); }
gpointer (g_task_propagate_pointer)(GTask * task, GError * * error) { return stub_funcs.ptr_g_task_propagate_pointer(task, error); }
gboolean (g_task_propagate_boolean)(GTask * task, GError * * error) { return stub_funcs.ptr_g_task_propagate_boolean(task, error); }
gssize (g_task_propagate_int)(GTask * task, GError * * error) { return stub_funcs.ptr_g_task_propagate_int(task, error); }
gboolean (g_task_propagate_value)(GTask * task, GValue * value, GError * * error) { return stub_funcs.ptr_g_task_propagate_value(task, value, error); }
gboolean (g_task_had_error)(GTask * task) { return stub_funcs.ptr_g_task_had_error(task); }
gboolean (g_task_get_completed)(GTask * task) { return stub_funcs.ptr_g_task_get_completed(task); }
void (g_task_print_alive_tasks)(void) { stub_funcs.ptr_g_task_print_alive_tasks(); }
GType (g_tcp_connection_get_type)(void) { return stub_funcs.ptr_g_tcp_connection_get_type(); }
void (g_tcp_connection_set_graceful_disconnect)(GTcpConnection * connection, gboolean graceful_disconnect) { stub_funcs.ptr_g_tcp_connection_set_graceful_disconnect(connection, graceful_disconnect); }
gboolean (g_tcp_connection_get_graceful_disconnect)(GTcpConnection * connection) { return stub_funcs.ptr_g_tcp_connection_get_graceful_disconnect(connection); }
GType (g_tcp_wrapper_connection_get_type)(void) { return stub_funcs.ptr_g_tcp_wrapper_connection_get_type(); }
GSocketConnection * (g_tcp_wrapper_connection_new)(GIOStream * base_io_stream, GSocket * socket) { return stub_funcs.ptr_g_tcp_wrapper_connection_new(base_io_stream, socket); }
GIOStream * (g_tcp_wrapper_connection_get_base_io_stream)(GTcpWrapperConnection * conn) { return stub_funcs.ptr_g_tcp_wrapper_connection_get_base_io_stream(conn); }
GType (g_test_dbus_get_type)(void) { return stub_funcs.ptr_g_test_dbus_get_type(); }
GTestDBus * (g_test_dbus_new)(GTestDBusFlags flags) { return stub_funcs.ptr_g_test_dbus_new(flags); }
GTestDBusFlags (g_test_dbus_get_flags)(GTestDBus * self) { return stub_funcs.ptr_g_test_dbus_get_flags(self); }
const gchar * (g_test_dbus_get_bus_address)(GTestDBus * self) { return stub_funcs.ptr_g_test_dbus_get_bus_address(self); }
void (g_test_dbus_add_service_dir)(GTestDBus * self, const gchar * path) { stub_funcs.ptr_g_test_dbus_add_service_dir(self, path); }
void (g_test_dbus_up)(GTestDBus * self) { stub_funcs.ptr_g_test_dbus_up(self); }
void (g_test_dbus_stop)(GTestDBus * self) { stub_funcs.ptr_g_test_dbus_stop(self); }
void (g_test_dbus_down)(GTestDBus * self) { stub_funcs.ptr_g_test_dbus_down(self); }
void (g_test_dbus_unset)(void) { stub_funcs.ptr_g_test_dbus_unset(); }
GType (g_themed_icon_get_type)(void) { return stub_funcs.ptr_g_themed_icon_get_type(); }
GIcon * (g_themed_icon_new)(const char * iconname) { return stub_funcs.ptr_g_themed_icon_new(iconname); }
GIcon * (g_themed_icon_new_with_default_fallbacks)(const char * iconname) { return stub_funcs.ptr_g_themed_icon_new_with_default_fallbacks(iconname); }
GIcon * (g_themed_icon_new_from_names)(char * * iconnames, int len) { return stub_funcs.ptr_g_themed_icon_new_from_names(iconnames, len); }
void (g_themed_icon_prepend_name)(GThemedIcon * icon, const char * iconname) { stub_funcs.ptr_g_themed_icon_prepend_name(icon, iconname); }
void (g_themed_icon_append_name)(GThemedIcon * icon, const char * iconname) { stub_funcs.ptr_g_themed_icon_append_name(icon, iconname); }
const gchar * const * (g_themed_icon_get_names)(GThemedIcon * icon) { return stub_funcs.ptr_g_themed_icon_get_names(icon); }
GType (g_threaded_socket_service_get_type)(void) { return stub_funcs.ptr_g_threaded_socket_service_get_type(); }
GSocketService * (g_threaded_socket_service_new)(int max_threads) { return stub_funcs.ptr_g_threaded_socket_service_new(max_threads); }
GType (g_tls_backend_get_type)(void) { return stub_funcs.ptr_g_tls_backend_get_type(); }
GTlsBackend * (g_tls_backend_get_default)(void) { return stub_funcs.ptr_g_tls_backend_get_default(); }
GTlsDatabase * (g_tls_backend_get_default_database)(GTlsBackend * backend) { return stub_funcs.ptr_g_tls_backend_get_default_database(backend); }
void (g_tls_backend_set_default_database)(GTlsBackend * backend, GTlsDatabase * database) { stub_funcs.ptr_g_tls_backend_set_default_database(backend, database); }
gboolean (g_tls_backend_supports_tls)(GTlsBackend * backend) { return stub_funcs.ptr_g_tls_backend_supports_tls(backend); }
gboolean (g_tls_backend_supports_dtls)(GTlsBackend * backend) { return stub_funcs.ptr_g_tls_backend_supports_dtls(backend); }
GType (g_tls_backend_get_certificate_type)(GTlsBackend * backend) { return stub_funcs.ptr_g_tls_backend_get_certificate_type(backend); }
GType (g_tls_backend_get_client_connection_type)(GTlsBackend * backend) { return stub_funcs.ptr_g_tls_backend_get_client_connection_type(backend); }
GType (g_tls_backend_get_server_connection_type)(GTlsBackend * backend) { return stub_funcs.ptr_g_tls_backend_get_server_connection_type(backend); }
GType (g_tls_backend_get_file_database_type)(GTlsBackend * backend) { return stub_funcs.ptr_g_tls_backend_get_file_database_type(backend); }
GType (g_tls_backend_get_dtls_client_connection_type)(GTlsBackend * backend) { return stub_funcs.ptr_g_tls_backend_get_dtls_client_connection_type(backend); }
GType (g_tls_backend_get_dtls_server_connection_type)(GTlsBackend * backend) { return stub_funcs.ptr_g_tls_backend_get_dtls_server_connection_type(backend); }
GType (g_tls_certificate_get_type)(void) { return stub_funcs.ptr_g_tls_certificate_get_type(); }
GTlsCertificate * (g_tls_certificate_new_from_pem)(const gchar * data, gssize length, GError * * error) { return stub_funcs.ptr_g_tls_certificate_new_from_pem(data, length, error); }
GTlsCertificate * (g_tls_certificate_new_from_pkcs12)(const guint8 * data, gsize length, const gchar * password, GError * * error) { return stub_funcs.ptr_g_tls_certificate_new_from_pkcs12(data, length, password, error); }
GTlsCertificate * (g_tls_certificate_new_from_file_with_password)(const gchar * file, const gchar * password, GError * * error) { return stub_funcs.ptr_g_tls_certificate_new_from_file_with_password(file, password, error); }
GTlsCertificate * (g_tls_certificate_new_from_file)(const gchar * file, GError * * error) { return stub_funcs.ptr_g_tls_certificate_new_from_file(file, error); }
GTlsCertificate * (g_tls_certificate_new_from_files)(const gchar * cert_file, const gchar * key_file, GError * * error) { return stub_funcs.ptr_g_tls_certificate_new_from_files(cert_file, key_file, error); }
GTlsCertificate * (g_tls_certificate_new_from_pkcs11_uris)(const gchar * pkcs11_uri, const gchar * private_key_pkcs11_uri, GError * * error) { return stub_funcs.ptr_g_tls_certificate_new_from_pkcs11_uris(pkcs11_uri, private_key_pkcs11_uri, error); }
GList * (g_tls_certificate_list_new_from_file)(const gchar * file, GError * * error) { return stub_funcs.ptr_g_tls_certificate_list_new_from_file(file, error); }
GTlsCertificate * (g_tls_certificate_get_issuer)(GTlsCertificate * cert) { return stub_funcs.ptr_g_tls_certificate_get_issuer(cert); }
GTlsCertificateFlags (g_tls_certificate_verify)(GTlsCertificate * cert, GSocketConnectable * identity, GTlsCertificate * trusted_ca) { return stub_funcs.ptr_g_tls_certificate_verify(cert, identity, trusted_ca); }
gboolean (g_tls_certificate_is_same)(GTlsCertificate * cert_one, GTlsCertificate * cert_two) { return stub_funcs.ptr_g_tls_certificate_is_same(cert_one, cert_two); }
GDateTime * (g_tls_certificate_get_not_valid_before)(GTlsCertificate * cert) { return stub_funcs.ptr_g_tls_certificate_get_not_valid_before(cert); }
GDateTime * (g_tls_certificate_get_not_valid_after)(GTlsCertificate * cert) { return stub_funcs.ptr_g_tls_certificate_get_not_valid_after(cert); }
gchar * (g_tls_certificate_get_subject_name)(GTlsCertificate * cert) { return stub_funcs.ptr_g_tls_certificate_get_subject_name(cert); }
gchar * (g_tls_certificate_get_issuer_name)(GTlsCertificate * cert) { return stub_funcs.ptr_g_tls_certificate_get_issuer_name(cert); }
GPtrArray * (g_tls_certificate_get_dns_names)(GTlsCertificate * cert) { return stub_funcs.ptr_g_tls_certificate_get_dns_names(cert); }
GPtrArray * (g_tls_certificate_get_ip_addresses)(GTlsCertificate * cert) { return stub_funcs.ptr_g_tls_certificate_get_ip_addresses(cert); }
GType (g_tls_connection_get_type)(void) { return stub_funcs.ptr_g_tls_connection_get_type(); }
void (g_tls_connection_set_use_system_certdb)(GTlsConnection * conn, gboolean use_system_certdb) { stub_funcs.ptr_g_tls_connection_set_use_system_certdb(conn, use_system_certdb); }
gboolean (g_tls_connection_get_use_system_certdb)(GTlsConnection * conn) { return stub_funcs.ptr_g_tls_connection_get_use_system_certdb(conn); }
void (g_tls_connection_set_database)(GTlsConnection * conn, GTlsDatabase * database) { stub_funcs.ptr_g_tls_connection_set_database(conn, database); }
GTlsDatabase * (g_tls_connection_get_database)(GTlsConnection * conn) { return stub_funcs.ptr_g_tls_connection_get_database(conn); }
void (g_tls_connection_set_certificate)(GTlsConnection * conn, GTlsCertificate * certificate) { stub_funcs.ptr_g_tls_connection_set_certificate(conn, certificate); }
GTlsCertificate * (g_tls_connection_get_certificate)(GTlsConnection * conn) { return stub_funcs.ptr_g_tls_connection_get_certificate(conn); }
void (g_tls_connection_set_interaction)(GTlsConnection * conn, GTlsInteraction * interaction) { stub_funcs.ptr_g_tls_connection_set_interaction(conn, interaction); }
GTlsInteraction * (g_tls_connection_get_interaction)(GTlsConnection * conn) { return stub_funcs.ptr_g_tls_connection_get_interaction(conn); }
GTlsCertificate * (g_tls_connection_get_peer_certificate)(GTlsConnection * conn) { return stub_funcs.ptr_g_tls_connection_get_peer_certificate(conn); }
GTlsCertificateFlags (g_tls_connection_get_peer_certificate_errors)(GTlsConnection * conn) { return stub_funcs.ptr_g_tls_connection_get_peer_certificate_errors(conn); }
void (g_tls_connection_set_require_close_notify)(GTlsConnection * conn, gboolean require_close_notify) { stub_funcs.ptr_g_tls_connection_set_require_close_notify(conn, require_close_notify); }
gboolean (g_tls_connection_get_require_close_notify)(GTlsConnection * conn) { return stub_funcs.ptr_g_tls_connection_get_require_close_notify(conn); }
void (g_tls_connection_set_rehandshake_mode)(GTlsConnection * conn, GTlsRehandshakeMode mode) { stub_funcs.ptr_g_tls_connection_set_rehandshake_mode(conn, mode); }
GTlsRehandshakeMode (g_tls_connection_get_rehandshake_mode)(GTlsConnection * conn) { return stub_funcs.ptr_g_tls_connection_get_rehandshake_mode(conn); }
void (g_tls_connection_set_advertised_protocols)(GTlsConnection * conn, const gchar * const * protocols) { stub_funcs.ptr_g_tls_connection_set_advertised_protocols(conn, protocols); }
const gchar * (g_tls_connection_get_negotiated_protocol)(GTlsConnection * conn) { return stub_funcs.ptr_g_tls_connection_get_negotiated_protocol(conn); }
gboolean (g_tls_connection_get_channel_binding_data)(GTlsConnection * conn, GTlsChannelBindingType type, GByteArray * data, GError * * error) { return stub_funcs.ptr_g_tls_connection_get_channel_binding_data(conn, type, data, error); }
gboolean (g_tls_connection_handshake)(GTlsConnection * conn, GCancellable * cancellable, GError * * error) { return stub_funcs.ptr_g_tls_connection_handshake(conn, cancellable, error); }
void (g_tls_connection_handshake_async)(GTlsConnection * conn, int io_priority, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data) { stub_funcs.ptr_g_tls_connection_handshake_async(conn, io_priority, cancellable, callback, user_data); }
gboolean (g_tls_connection_handshake_finish)(GTlsConnection * conn, GAsyncResult * result, GError * * error) { return stub_funcs.ptr_g_tls_connection_handshake_finish(conn, result, error); }
GTlsProtocolVersion (g_tls_connection_get_protocol_version)(GTlsConnection * conn) { return stub_funcs.ptr_g_tls_connection_get_protocol_version(conn); }
gchar * (g_tls_connection_get_ciphersuite_name)(GTlsConnection * conn) { return stub_funcs.ptr_g_tls_connection_get_ciphersuite_name(conn); }
GQuark (g_tls_error_quark)(void) { return stub_funcs.ptr_g_tls_error_quark(); }
GQuark (g_tls_channel_binding_error_quark)(void) { return stub_funcs.ptr_g_tls_channel_binding_error_quark(); }
gboolean (g_tls_connection_emit_accept_certificate)(GTlsConnection * conn, GTlsCertificate * peer_cert, GTlsCertificateFlags errors) { return stub_funcs.ptr_g_tls_connection_emit_accept_certificate(conn, peer_cert, errors); }
GType (g_tls_client_connection_get_type)(void) { return stub_funcs.ptr_g_tls_client_connection_get_type(); }
GIOStream * (g_tls_client_connection_new)(GIOStream * base_io_stream, GSocketConnectable * server_identity, GError * * error) { return stub_funcs.ptr_g_tls_client_connection_new(base_io_stream, server_identity, error); }
GTlsCertificateFlags (g_tls_client_connection_get_validation_flags)(GTlsClientConnection * conn) { return stub_funcs.ptr_g_tls_client_connection_get_validation_flags(conn); }
void (g_tls_client_connection_set_validation_flags)(GTlsClientConnection * conn, GTlsCertificateFlags flags) { stub_funcs.ptr_g_tls_client_connection_set_validation_flags(conn, flags); }
GSocketConnectable * (g_tls_client_connection_get_server_identity)(GTlsClientConnection * conn) { return stub_funcs.ptr_g_tls_client_connection_get_server_identity(conn); }
void (g_tls_client_connection_set_server_identity)(GTlsClientConnection * conn, GSocketConnectable * identity) { stub_funcs.ptr_g_tls_client_connection_set_server_identity(conn, identity); }
gboolean (g_tls_client_connection_get_use_ssl3)(GTlsClientConnection * conn) { return stub_funcs.ptr_g_tls_client_connection_get_use_ssl3(conn); }
void (g_tls_client_connection_set_use_ssl3)(GTlsClientConnection * conn, gboolean use_ssl3) { stub_funcs.ptr_g_tls_client_connection_set_use_ssl3(conn, use_ssl3); }
GList * (g_tls_client_connection_get_accepted_cas)(GTlsClientConnection * conn) { return stub_funcs.ptr_g_tls_client_connection_get_accepted_cas(conn); }
void (g_tls_client_connection_copy_session_state)(GTlsClientConnection * conn, GTlsClientConnection * source) { stub_funcs.ptr_g_tls_client_connection_copy_session_state(conn, source); }
GType (g_tls_database_get_type)(void) { return stub_funcs.ptr_g_tls_database_get_type(); }
GTlsCertificateFlags (g_tls_database_verify_chain)(GTlsDatabase * self, GTlsCertificate * chain, const gchar * purpose, GSocketConnectable * identity, GTlsInteraction * interaction, GTlsDatabaseVerifyFlags flags, GCancellable * cancellable, GError * * error) { return stub_funcs.ptr_g_tls_database_verify_chain(self, chain, purpose, identity, interaction, flags, cancellable, error); }
void (g_tls_database_verify_chain_async)(GTlsDatabase * self, GTlsCertificate * chain, const gchar * purpose, GSocketConnectable * identity, GTlsInteraction * interaction, GTlsDatabaseVerifyFlags flags, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data) { stub_funcs.ptr_g_tls_database_verify_chain_async(self, chain, purpose, identity, interaction, flags, cancellable, callback, user_data); }
GTlsCertificateFlags (g_tls_database_verify_chain_finish)(GTlsDatabase * self, GAsyncResult * result, GError * * error) { return stub_funcs.ptr_g_tls_database_verify_chain_finish(self, result, error); }
gchar * (g_tls_database_create_certificate_handle)(GTlsDatabase * self, GTlsCertificate * certificate) { return stub_funcs.ptr_g_tls_database_create_certificate_handle(self, certificate); }
GTlsCertificate * (g_tls_database_lookup_certificate_for_handle)(GTlsDatabase * self, const gchar * handle, GTlsInteraction * interaction, GTlsDatabaseLookupFlags flags, GCancellable * cancellable, GError * * error) { return stub_funcs.ptr_g_tls_database_lookup_certificate_for_handle(self, handle, interaction, flags, cancellable, error); }
void (g_tls_database_lookup_certificate_for_handle_async)(GTlsDatabase * self, const gchar * handle, GTlsInteraction * interaction, GTlsDatabaseLookupFlags flags, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data) { stub_funcs.ptr_g_tls_database_lookup_certificate_for_handle_async(self, handle, interaction, flags, cancellable, callback, user_data); }
GTlsCertificate * (g_tls_database_lookup_certificate_for_handle_finish)(GTlsDatabase * self, GAsyncResult * result, GError * * error) { return stub_funcs.ptr_g_tls_database_lookup_certificate_for_handle_finish(self, result, error); }
GTlsCertificate * (g_tls_database_lookup_certificate_issuer)(GTlsDatabase * self, GTlsCertificate * certificate, GTlsInteraction * interaction, GTlsDatabaseLookupFlags flags, GCancellable * cancellable, GError * * error) { return stub_funcs.ptr_g_tls_database_lookup_certificate_issuer(self, certificate, interaction, flags, cancellable, error); }
void (g_tls_database_lookup_certificate_issuer_async)(GTlsDatabase * self, GTlsCertificate * certificate, GTlsInteraction * interaction, GTlsDatabaseLookupFlags flags, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data) { stub_funcs.ptr_g_tls_database_lookup_certificate_issuer_async(self, certificate, interaction, flags, cancellable, callback, user_data); }
GTlsCertificate * (g_tls_database_lookup_certificate_issuer_finish)(GTlsDatabase * self, GAsyncResult * result, GError * * error) { return stub_funcs.ptr_g_tls_database_lookup_certificate_issuer_finish(self, result, error); }
GList * (g_tls_database_lookup_certificates_issued_by)(GTlsDatabase * self, GByteArray * issuer_raw_dn, GTlsInteraction * interaction, GTlsDatabaseLookupFlags flags, GCancellable * cancellable, GError * * error) { return stub_funcs.ptr_g_tls_database_lookup_certificates_issued_by(self, issuer_raw_dn, interaction, flags, cancellable, error); }
void (g_tls_database_lookup_certificates_issued_by_async)(GTlsDatabase * self, GByteArray * issuer_raw_dn, GTlsInteraction * interaction, GTlsDatabaseLookupFlags flags, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data) { stub_funcs.ptr_g_tls_database_lookup_certificates_issued_by_async(self, issuer_raw_dn, interaction, flags, cancellable, callback, user_data); }
GList * (g_tls_database_lookup_certificates_issued_by_finish)(GTlsDatabase * self, GAsyncResult * result, GError * * error) { return stub_funcs.ptr_g_tls_database_lookup_certificates_issued_by_finish(self, result, error); }
GType (g_tls_file_database_get_type)(void) { return stub_funcs.ptr_g_tls_file_database_get_type(); }
GTlsDatabase * (g_tls_file_database_new)(const gchar * anchors, GError * * error) { return stub_funcs.ptr_g_tls_file_database_new(anchors, error); }
GType (g_tls_interaction_get_type)(void) { return stub_funcs.ptr_g_tls_interaction_get_type(); }
GTlsInteractionResult (g_tls_interaction_invoke_ask_password)(GTlsInteraction * interaction, GTlsPassword * password, GCancellable * cancellable, GError * * error) { return stub_funcs.ptr_g_tls_interaction_invoke_ask_password(interaction, password, cancellable, error); }
GTlsInteractionResult (g_tls_interaction_ask_password)(GTlsInteraction * interaction, GTlsPassword * password, GCancellable * cancellable, GError * * error) { return stub_funcs.ptr_g_tls_interaction_ask_password(interaction, password, cancellable, error); }
void (g_tls_interaction_ask_password_async)(GTlsInteraction * interaction, GTlsPassword * password, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data) { stub_funcs.ptr_g_tls_interaction_ask_password_async(interaction, password, cancellable, callback, user_data); }
GTlsInteractionResult (g_tls_interaction_ask_password_finish)(GTlsInteraction * interaction, GAsyncResult * result, GError * * error) { return stub_funcs.ptr_g_tls_interaction_ask_password_finish(interaction, result, error); }
GTlsInteractionResult (g_tls_interaction_invoke_request_certificate)(GTlsInteraction * interaction, GTlsConnection * connection, GTlsCertificateRequestFlags flags, GCancellable * cancellable, GError * * error) { return stub_funcs.ptr_g_tls_interaction_invoke_request_certificate(interaction, connection, flags, cancellable, error); }
GTlsInteractionResult (g_tls_interaction_request_certificate)(GTlsInteraction * interaction, GTlsConnection * connection, GTlsCertificateRequestFlags flags, GCancellable * cancellable, GError * * error) { return stub_funcs.ptr_g_tls_interaction_request_certificate(interaction, connection, flags, cancellable, error); }
void (g_tls_interaction_request_certificate_async)(GTlsInteraction * interaction, GTlsConnection * connection, GTlsCertificateRequestFlags flags, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data) { stub_funcs.ptr_g_tls_interaction_request_certificate_async(interaction, connection, flags, cancellable, callback, user_data); }
GTlsInteractionResult (g_tls_interaction_request_certificate_finish)(GTlsInteraction * interaction, GAsyncResult * result, GError * * error) { return stub_funcs.ptr_g_tls_interaction_request_certificate_finish(interaction, result, error); }
GType (g_tls_password_get_type)(void) { return stub_funcs.ptr_g_tls_password_get_type(); }
GTlsPassword * (g_tls_password_new)(GTlsPasswordFlags flags, const gchar * description) { return stub_funcs.ptr_g_tls_password_new(flags, description); }
const guchar * (g_tls_password_get_value)(GTlsPassword * password, gsize * length) { return stub_funcs.ptr_g_tls_password_get_value(password, length); }
void (g_tls_password_set_value)(GTlsPassword * password, const guchar * value, gssize length) { stub_funcs.ptr_g_tls_password_set_value(password, value, length); }
void (g_tls_password_set_value_full)(GTlsPassword * password, guchar * value, gssize length, GDestroyNotify destroy) { stub_funcs.ptr_g_tls_password_set_value_full(password, value, length, destroy); }
GTlsPasswordFlags (g_tls_password_get_flags)(GTlsPassword * password) { return stub_funcs.ptr_g_tls_password_get_flags(password); }
void (g_tls_password_set_flags)(GTlsPassword * password, GTlsPasswordFlags flags) { stub_funcs.ptr_g_tls_password_set_flags(password, flags); }
const gchar * (g_tls_password_get_description)(GTlsPassword * password) { return stub_funcs.ptr_g_tls_password_get_description(password); }
void (g_tls_password_set_description)(GTlsPassword * password, const gchar * description) { stub_funcs.ptr_g_tls_password_set_description(password, description); }
const gchar * (g_tls_password_get_warning)(GTlsPassword * password) { return stub_funcs.ptr_g_tls_password_get_warning(password); }
void (g_tls_password_set_warning)(GTlsPassword * password, const gchar * warning) { stub_funcs.ptr_g_tls_password_set_warning(password, warning); }
GType (g_tls_server_connection_get_type)(void) { return stub_funcs.ptr_g_tls_server_connection_get_type(); }
GIOStream * (g_tls_server_connection_new)(GIOStream * base_io_stream, GTlsCertificate * certificate, GError * * error) { return stub_funcs.ptr_g_tls_server_connection_new(base_io_stream, certificate, error); }
GType (g_unix_connection_get_type)(void) { return stub_funcs.ptr_g_unix_connection_get_type(); }
gboolean (g_unix_connection_send_fd)(GUnixConnection * connection, gint fd, GCancellable * cancellable, GError * * error) { return stub_funcs.ptr_g_unix_connection_send_fd(connection, fd, cancellable, error); }
gint (g_unix_connection_receive_fd)(GUnixConnection * connection, GCancellable * cancellable, GError * * error) { return stub_funcs.ptr_g_unix_connection_receive_fd(connection, cancellable, error); }
gboolean (g_unix_connection_send_credentials)(GUnixConnection * connection, GCancellable * cancellable, GError * * error) { return stub_funcs.ptr_g_unix_connection_send_credentials(connection, cancellable, error); }
void (g_unix_connection_send_credentials_async)(GUnixConnection * connection, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data) { stub_funcs.ptr_g_unix_connection_send_credentials_async(connection, cancellable, callback, user_data); }
gboolean (g_unix_connection_send_credentials_finish)(GUnixConnection * connection, GAsyncResult * result, GError * * error) { return stub_funcs.ptr_g_unix_connection_send_credentials_finish(connection, result, error); }
GCredentials * (g_unix_connection_receive_credentials)(GUnixConnection * connection, GCancellable * cancellable, GError * * error) { return stub_funcs.ptr_g_unix_connection_receive_credentials(connection, cancellable, error); }
void (g_unix_connection_receive_credentials_async)(GUnixConnection * connection, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data) { stub_funcs.ptr_g_unix_connection_receive_credentials_async(connection, cancellable, callback, user_data); }
GCredentials * (g_unix_connection_receive_credentials_finish)(GUnixConnection * connection, GAsyncResult * result, GError * * error) { return stub_funcs.ptr_g_unix_connection_receive_credentials_finish(connection, result, error); }
GType (g_unix_credentials_message_get_type)(void) { return stub_funcs.ptr_g_unix_credentials_message_get_type(); }
GSocketControlMessage * (g_unix_credentials_message_new)(void) { return stub_funcs.ptr_g_unix_credentials_message_new(); }
GSocketControlMessage * (g_unix_credentials_message_new_with_credentials)(GCredentials * credentials) { return stub_funcs.ptr_g_unix_credentials_message_new_with_credentials(credentials); }
GCredentials * (g_unix_credentials_message_get_credentials)(GUnixCredentialsMessage * message) { return stub_funcs.ptr_g_unix_credentials_message_get_credentials(message); }
gboolean (g_unix_credentials_message_is_supported)(void) { return stub_funcs.ptr_g_unix_credentials_message_is_supported(); }
GType (g_unix_fd_list_get_type)(void) { return stub_funcs.ptr_g_unix_fd_list_get_type(); }
GUnixFDList * (g_unix_fd_list_new)(void) { return stub_funcs.ptr_g_unix_fd_list_new(); }
GUnixFDList * (g_unix_fd_list_new_from_array)(const gint * fds, gint n_fds) { return stub_funcs.ptr_g_unix_fd_list_new_from_array(fds, n_fds); }
gint (g_unix_fd_list_append)(GUnixFDList * list, gint fd, GError * * error) { return stub_funcs.ptr_g_unix_fd_list_append(list, fd, error); }
gint (g_unix_fd_list_get_length)(GUnixFDList * list) { return stub_funcs.ptr_g_unix_fd_list_get_length(list); }
gint (g_unix_fd_list_get)(GUnixFDList * list, gint index_, GError * * error) { return stub_funcs.ptr_g_unix_fd_list_get(list, index_, error); }
const gint * (g_unix_fd_list_peek_fds)(GUnixFDList * list, gint * length) { return stub_funcs.ptr_g_unix_fd_list_peek_fds(list, length); }
gint * (g_unix_fd_list_steal_fds)(GUnixFDList * list, gint * length) { return stub_funcs.ptr_g_unix_fd_list_steal_fds(list, length); }
GType (g_unix_socket_address_get_type)(void) { return stub_funcs.ptr_g_unix_socket_address_get_type(); }
GSocketAddress * (g_unix_socket_address_new)(const gchar * path) { return stub_funcs.ptr_g_unix_socket_address_new(path); }
GSocketAddress * (g_unix_socket_address_new_abstract)(const gchar * path, gint path_len) { return stub_funcs.ptr_g_unix_socket_address_new_abstract(path, path_len); }
GSocketAddress * (g_unix_socket_address_new_with_type)(const gchar * path, gint path_len, GUnixSocketAddressType type) { return stub_funcs.ptr_g_unix_socket_address_new_with_type(path, path_len, type); }
const char * (g_unix_socket_address_get_path)(GUnixSocketAddress * address) { return stub_funcs.ptr_g_unix_socket_address_get_path(address); }
gsize (g_unix_socket_address_get_path_len)(GUnixSocketAddress * address) { return stub_funcs.ptr_g_unix_socket_address_get_path_len(address); }
GUnixSocketAddressType (g_unix_socket_address_get_address_type)(GUnixSocketAddress * address) { return stub_funcs.ptr_g_unix_socket_address_get_address_type(address); }
gboolean (g_unix_socket_address_get_is_abstract)(GUnixSocketAddress * address) { return stub_funcs.ptr_g_unix_socket_address_get_is_abstract(address); }
gboolean (g_unix_socket_address_abstract_names_supported)(void) { return stub_funcs.ptr_g_unix_socket_address_abstract_names_supported(); }
GType (g_vfs_get_type)(void) { return stub_funcs.ptr_g_vfs_get_type(); }
gboolean (g_vfs_is_active)(GVfs * vfs) { return stub_funcs.ptr_g_vfs_is_active(vfs); }
GFile * (g_vfs_get_file_for_path)(GVfs * vfs, const char * path) { return stub_funcs.ptr_g_vfs_get_file_for_path(vfs, path); }
GFile * (g_vfs_get_file_for_uri)(GVfs * vfs, const char * uri) { return stub_funcs.ptr_g_vfs_get_file_for_uri(vfs, uri); }
const gchar * const * (g_vfs_get_supported_uri_schemes)(GVfs * vfs) { return stub_funcs.ptr_g_vfs_get_supported_uri_schemes(vfs); }
GFile * (g_vfs_parse_name)(GVfs * vfs, const char * parse_name) { return stub_funcs.ptr_g_vfs_parse_name(vfs, parse_name); }
GVfs * (g_vfs_get_default)(void) { return stub_funcs.ptr_g_vfs_get_default(); }
GVfs * (g_vfs_get_local)(void) { return stub_funcs.ptr_g_vfs_get_local(); }
gboolean (g_vfs_register_uri_scheme)(GVfs * vfs, const char * scheme, GVfsFileLookupFunc uri_func, gpointer uri_data, GDestroyNotify uri_destroy, GVfsFileLookupFunc parse_name_func, gpointer parse_name_data, GDestroyNotify parse_name_destroy) { return stub_funcs.ptr_g_vfs_register_uri_scheme(vfs, scheme, uri_func, uri_data, uri_destroy, parse_name_func, parse_name_data, parse_name_destroy); }
gboolean (g_vfs_unregister_uri_scheme)(GVfs * vfs, const char * scheme) { return stub_funcs.ptr_g_vfs_unregister_uri_scheme(vfs, scheme); }
GType (g_volume_get_type)(void) { return stub_funcs.ptr_g_volume_get_type(); }
char * (g_volume_get_name)(GVolume * volume) { return stub_funcs.ptr_g_volume_get_name(volume); }
GIcon * (g_volume_get_icon)(GVolume * volume) { return stub_funcs.ptr_g_volume_get_icon(volume); }
GIcon * (g_volume_get_symbolic_icon)(GVolume * volume) { return stub_funcs.ptr_g_volume_get_symbolic_icon(volume); }
char * (g_volume_get_uuid)(GVolume * volume) { return stub_funcs.ptr_g_volume_get_uuid(volume); }
GDrive * (g_volume_get_drive)(GVolume * volume) { return stub_funcs.ptr_g_volume_get_drive(volume); }
GMount * (g_volume_get_mount)(GVolume * volume) { return stub_funcs.ptr_g_volume_get_mount(volume); }
gboolean (g_volume_can_mount)(GVolume * volume) { return stub_funcs.ptr_g_volume_can_mount(volume); }
gboolean (g_volume_can_eject)(GVolume * volume) { return stub_funcs.ptr_g_volume_can_eject(volume); }
gboolean (g_volume_should_automount)(GVolume * volume) { return stub_funcs.ptr_g_volume_should_automount(volume); }
void (g_volume_mount)(GVolume * volume, GMountMountFlags flags, GMountOperation * mount_operation, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data) { stub_funcs.ptr_g_volume_mount(volume, flags, mount_operation, cancellable, callback, user_data); }
gboolean (g_volume_mount_finish)(GVolume * volume, GAsyncResult * result, GError * * error) { return stub_funcs.ptr_g_volume_mount_finish(volume, result, error); }
void (g_volume_eject)(GVolume * volume, GMountUnmountFlags flags, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data) { stub_funcs.ptr_g_volume_eject(volume, flags, cancellable, callback, user_data); }
gboolean (g_volume_eject_finish)(GVolume * volume, GAsyncResult * result, GError * * error) { return stub_funcs.ptr_g_volume_eject_finish(volume, result, error); }
char * (g_volume_get_identifier)(GVolume * volume, const char * kind) { return stub_funcs.ptr_g_volume_get_identifier(volume, kind); }
char * * (g_volume_enumerate_identifiers)(GVolume * volume) { return stub_funcs.ptr_g_volume_enumerate_identifiers(volume); }
GFile * (g_volume_get_activation_root)(GVolume * volume) { return stub_funcs.ptr_g_volume_get_activation_root(volume); }
void (g_volume_eject_with_operation)(GVolume * volume, GMountUnmountFlags flags, GMountOperation * mount_operation, GCancellable * cancellable, GAsyncReadyCallback callback, gpointer user_data) { stub_funcs.ptr_g_volume_eject_with_operation(volume, flags, mount_operation, cancellable, callback, user_data); }
gboolean (g_volume_eject_with_operation_finish)(GVolume * volume, GAsyncResult * result, GError * * error) { return stub_funcs.ptr_g_volume_eject_with_operation_finish(volume, result, error); }
const gchar * (g_volume_get_sort_key)(GVolume * volume) { return stub_funcs.ptr_g_volume_get_sort_key(volume); }
GType (g_zlib_compressor_get_type)(void) { return stub_funcs.ptr_g_zlib_compressor_get_type(); }
GZlibCompressor * (g_zlib_compressor_new)(GZlibCompressorFormat format, int level) { return stub_funcs.ptr_g_zlib_compressor_new(format, level); }
GFileInfo * (g_zlib_compressor_get_file_info)(GZlibCompressor * compressor) { return stub_funcs.ptr_g_zlib_compressor_get_file_info(compressor); }
void (g_zlib_compressor_set_file_info)(GZlibCompressor * compressor, GFileInfo * file_info) { stub_funcs.ptr_g_zlib_compressor_set_file_info(compressor, file_info); }
GType (g_zlib_decompressor_get_type)(void) { return stub_funcs.ptr_g_zlib_decompressor_get_type(); }
GZlibDecompressor * (g_zlib_decompressor_new)(GZlibCompressorFormat format) { return stub_funcs.ptr_g_zlib_decompressor_new(format); }
GFileInfo * (g_zlib_decompressor_get_file_info)(GZlibDecompressor * decompressor) { return stub_funcs.ptr_g_zlib_decompressor_get_file_info(decompressor); }

void close_gio(void) {
    cosmo_dlclose(gio);
}