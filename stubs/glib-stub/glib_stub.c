#include "glib_stub.h"
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define _COMSO_SOURCE
#include <libc/dlopen/dlfcn.h>

static struct glibFuncs {
    GArray * (*ptr_g_array_new)(gboolean zero_terminated, gboolean clear_, guint element_size);
    GArray * (*ptr_g_array_new_take)(gpointer data, gsize len, gboolean clear, gsize element_size);
    GArray * (*ptr_g_array_new_take_zero_terminated)(gpointer data, gboolean clear, gsize element_size);
    gpointer (*ptr_g_array_steal)(GArray * array, gsize * len);
    GArray * (*ptr_g_array_sized_new)(gboolean zero_terminated, gboolean clear_, guint element_size, guint reserved_size);
    GArray * (*ptr_g_array_copy)(GArray * array);
    gchar * (*ptr_g_array_free)(GArray * array, gboolean free_segment);
    GArray * (*ptr_g_array_ref)(GArray * array);
    void (*ptr_g_array_unref)(GArray * array);
    guint (*ptr_g_array_get_element_size)(GArray * array);
    GArray * (*ptr_g_array_append_vals)(GArray * array, gconstpointer data, guint len);
    GArray * (*ptr_g_array_prepend_vals)(GArray * array, gconstpointer data, guint len);
    GArray * (*ptr_g_array_insert_vals)(GArray * array, guint index_, gconstpointer data, guint len);
    GArray * (*ptr_g_array_set_size)(GArray * array, guint length);
    GArray * (*ptr_g_array_remove_index)(GArray * array, guint index_);
    GArray * (*ptr_g_array_remove_index_fast)(GArray * array, guint index_);
    GArray * (*ptr_g_array_remove_range)(GArray * array, guint index_, guint length);
    void (*ptr_g_array_sort)(GArray * array, GCompareFunc compare_func);
    void (*ptr_g_array_sort_with_data)(GArray * array, GCompareDataFunc compare_func, gpointer user_data);
    gboolean (*ptr_g_array_binary_search)(GArray * array, gconstpointer target, GCompareFunc compare_func, guint * out_match_index);
    void (*ptr_g_array_set_clear_func)(GArray * array, GDestroyNotify clear_func);
    GPtrArray * (*ptr_g_ptr_array_new)(void);
    GPtrArray * (*ptr_g_ptr_array_new_with_free_func)(GDestroyNotify element_free_func);
    GPtrArray * (*ptr_g_ptr_array_new_take)(gpointer * data, gsize len, GDestroyNotify element_free_func);
    GPtrArray * (*ptr_g_ptr_array_new_from_array)(gpointer * data, gsize len, GCopyFunc copy_func, gpointer copy_func_user_data, GDestroyNotify element_free_func);
    gpointer * (*ptr_g_ptr_array_steal)(GPtrArray * array, gsize * len);
    GPtrArray * (*ptr_g_ptr_array_copy)(GPtrArray * array, GCopyFunc func, gpointer user_data);
    GPtrArray * (*ptr_g_ptr_array_sized_new)(guint reserved_size);
    GPtrArray * (*ptr_g_ptr_array_new_full)(guint reserved_size, GDestroyNotify element_free_func);
    GPtrArray * (*ptr_g_ptr_array_new_null_terminated)(guint reserved_size, GDestroyNotify element_free_func, gboolean null_terminated);
    GPtrArray * (*ptr_g_ptr_array_new_take_null_terminated)(gpointer * data, GDestroyNotify element_free_func);
    GPtrArray * (*ptr_g_ptr_array_new_from_null_terminated_array)(gpointer * data, GCopyFunc copy_func, gpointer copy_func_user_data, GDestroyNotify element_free_func);
    gpointer * (*ptr_g_ptr_array_free)(GPtrArray * array, gboolean free_seg);
    GPtrArray * (*ptr_g_ptr_array_ref)(GPtrArray * array);
    void (*ptr_g_ptr_array_unref)(GPtrArray * array);
    void (*ptr_g_ptr_array_set_free_func)(GPtrArray * array, GDestroyNotify element_free_func);
    void (*ptr_g_ptr_array_set_size)(GPtrArray * array, gint length);
    gpointer (*ptr_g_ptr_array_remove_index)(GPtrArray * array, guint index_);
    gpointer (*ptr_g_ptr_array_remove_index_fast)(GPtrArray * array, guint index_);
    gpointer (*ptr_g_ptr_array_steal_index)(GPtrArray * array, guint index_);
    gpointer (*ptr_g_ptr_array_steal_index_fast)(GPtrArray * array, guint index_);
    gboolean (*ptr_g_ptr_array_remove)(GPtrArray * array, gpointer data);
    gboolean (*ptr_g_ptr_array_remove_fast)(GPtrArray * array, gpointer data);
    GPtrArray * (*ptr_g_ptr_array_remove_range)(GPtrArray * array, guint index_, guint length);
    void (*ptr_g_ptr_array_add)(GPtrArray * array, gpointer data);
    void (*ptr_g_ptr_array_extend)(GPtrArray * array_to_extend, GPtrArray * array, GCopyFunc func, gpointer user_data);
    void (*ptr_g_ptr_array_extend_and_steal)(GPtrArray * array_to_extend, GPtrArray * array);
    void (*ptr_g_ptr_array_insert)(GPtrArray * array, gint index_, gpointer data);
    void (*ptr_g_ptr_array_sort)(GPtrArray * array, GCompareFunc compare_func);
    void (*ptr_g_ptr_array_sort_with_data)(GPtrArray * array, GCompareDataFunc compare_func, gpointer user_data);
    void (*ptr_g_ptr_array_sort_values)(GPtrArray * array, GCompareFunc compare_func);
    void (*ptr_g_ptr_array_sort_values_with_data)(GPtrArray * array, GCompareDataFunc compare_func, gpointer user_data);
    void (*ptr_g_ptr_array_foreach)(GPtrArray * array, GFunc func, gpointer user_data);
    gboolean (*ptr_g_ptr_array_find)(GPtrArray * haystack, gconstpointer needle, guint * index_);
    gboolean (*ptr_g_ptr_array_find_with_equal_func)(GPtrArray * haystack, gconstpointer needle, GEqualFunc equal_func, guint * index_);
    gboolean (*ptr_g_ptr_array_is_null_terminated)(GPtrArray * array);
    GByteArray * (*ptr_g_byte_array_new)(void);
    GByteArray * (*ptr_g_byte_array_new_take)(guint8 * data, gsize len);
    guint8 * (*ptr_g_byte_array_steal)(GByteArray * array, gsize * len);
    GByteArray * (*ptr_g_byte_array_sized_new)(guint reserved_size);
    guint8 * (*ptr_g_byte_array_free)(GByteArray * array, gboolean free_segment);
    GBytes * (*ptr_g_byte_array_free_to_bytes)(GByteArray * array);
    GByteArray * (*ptr_g_byte_array_ref)(GByteArray * array);
    void (*ptr_g_byte_array_unref)(GByteArray * array);
    GByteArray * (*ptr_g_byte_array_append)(GByteArray * array, const guint8 * data, guint len);
    GByteArray * (*ptr_g_byte_array_prepend)(GByteArray * array, const guint8 * data, guint len);
    GByteArray * (*ptr_g_byte_array_set_size)(GByteArray * array, guint length);
    GByteArray * (*ptr_g_byte_array_remove_index)(GByteArray * array, guint index_);
    GByteArray * (*ptr_g_byte_array_remove_index_fast)(GByteArray * array, guint index_);
    GByteArray * (*ptr_g_byte_array_remove_range)(GByteArray * array, guint index_, guint length);
    void (*ptr_g_byte_array_sort)(GByteArray * array, GCompareFunc compare_func);
    void (*ptr_g_byte_array_sort_with_data)(GByteArray * array, GCompareDataFunc compare_func, gpointer user_data);
    gint (*ptr_g_atomic_int_get)(const volatile gint * atomic);
    void (*ptr_g_atomic_int_set)(volatile gint * atomic, gint newval);
    void (*ptr_g_atomic_int_inc)(volatile gint * atomic);
    gboolean (*ptr_g_atomic_int_dec_and_test)(volatile gint * atomic);
    gboolean (*ptr_g_atomic_int_compare_and_exchange)(volatile gint * atomic, gint oldval, gint newval);
    gboolean (*ptr_g_atomic_int_compare_and_exchange_full)(gint * atomic, gint oldval, gint newval, gint * preval);
    gint (*ptr_g_atomic_int_exchange)(gint * atomic, gint newval);
    gint (*ptr_g_atomic_int_add)(volatile gint * atomic, gint val);
    guint (*ptr_g_atomic_int_and)(volatile guint * atomic, guint val);
    guint (*ptr_g_atomic_int_or)(volatile guint * atomic, guint val);
    guint (*ptr_g_atomic_int_xor)(volatile guint * atomic, guint val);
    gpointer (*ptr_g_atomic_pointer_get)(const volatile void * atomic);
    void (*ptr_g_atomic_pointer_set)(volatile void * atomic, gpointer newval);
    gboolean (*ptr_g_atomic_pointer_compare_and_exchange)(volatile void * atomic, gpointer oldval, gpointer newval);
    gboolean (*ptr_g_atomic_pointer_compare_and_exchange_full)(void * atomic, gpointer oldval, gpointer newval, void * preval);
    gpointer (*ptr_g_atomic_pointer_exchange)(void * atomic, gpointer newval);
    gintptr (*ptr_g_atomic_pointer_add)(volatile void * atomic, gssize val);
    guintptr (*ptr_g_atomic_pointer_and)(volatile void * atomic, gsize val);
    guintptr (*ptr_g_atomic_pointer_or)(volatile void * atomic, gsize val);
    guintptr (*ptr_g_atomic_pointer_xor)(volatile void * atomic, gsize val);
    gint (*ptr_g_atomic_int_exchange_and_add)(volatile gint * atomic, gint val);
    GQuark (*ptr_g_quark_try_string)(const gchar * string);
    GQuark (*ptr_g_quark_from_static_string)(const gchar * string);
    GQuark (*ptr_g_quark_from_string)(const gchar * string);
    const gchar * (*ptr_g_quark_to_string)(GQuark quark);
    const gchar * (*ptr_g_intern_string)(const gchar * string);
    const gchar * (*ptr_g_intern_static_string)(const gchar * string);
    GQuark (*ptr_g_error_domain_register_static)(const char * error_type_name, gsize error_type_private_size, GErrorInitFunc error_type_init, GErrorCopyFunc error_type_copy, GErrorClearFunc error_type_clear);
    GQuark (*ptr_g_error_domain_register)(const char * error_type_name, gsize error_type_private_size, GErrorInitFunc error_type_init, GErrorCopyFunc error_type_copy, GErrorClearFunc error_type_clear);
    GError * (*ptr_g_error_new)(GQuark domain, gint code, const gchar * format, ...);
    GError * (*ptr_g_error_new_literal)(GQuark domain, gint code, const gchar * message);
    GError * (*ptr_g_error_new_valist)(GQuark domain, gint code, const gchar * format, va_list args);
    void (*ptr_g_error_free)(GError * error);
    GError * (*ptr_g_error_copy)(const GError * error);
    gboolean (*ptr_g_error_matches)(const GError * error, GQuark domain, gint code);
    void (*ptr_g_set_error_literal)(GError * * err, GQuark domain, gint code, const gchar * message);
    void (*ptr_g_propagate_error)(GError * * dest, GError * src);
    void (*ptr_g_clear_error)(GError * * err);
    void (*ptr_g_prefix_error_literal)(GError * * err, const gchar * prefix);
    const gchar * (*ptr_g_get_user_name)(void);
    const gchar * (*ptr_g_get_real_name)(void);
    const gchar * (*ptr_g_get_home_dir)(void);
    const gchar * (*ptr_g_get_tmp_dir)(void);
    const gchar * (*ptr_g_get_host_name)(void);
    const gchar * (*ptr_g_get_prgname)(void);
    void (*ptr_g_set_prgname)(const gchar * prgname);
    const gchar * (*ptr_g_get_application_name)(void);
    void (*ptr_g_set_application_name)(const gchar * application_name);
    gchar * (*ptr_g_get_os_info)(const gchar * key_name);
    void (*ptr_g_reload_user_special_dirs_cache)(void);
    const gchar * (*ptr_g_get_user_data_dir)(void);
    const gchar * (*ptr_g_get_user_config_dir)(void);
    const gchar * (*ptr_g_get_user_cache_dir)(void);
    const gchar * (*ptr_g_get_user_state_dir)(void);
    const gchar * const * (*ptr_g_get_system_data_dirs)(void);
    const gchar * const * (*ptr_g_get_system_config_dirs)(void);
    const gchar * (*ptr_g_get_user_runtime_dir)(void);
    const gchar * (*ptr_g_get_user_special_dir)(GUserDirectory directory);
    guint (*ptr_g_parse_debug_string)(const gchar * string, const GDebugKey * keys, guint nkeys);
    gint (*ptr_g_snprintf)(gchar * string, gulong n, const gchar * format, ...);
    gint (*ptr_g_vsnprintf)(gchar * string, gulong n, const gchar * format, va_list args);
    void (*ptr_g_nullify_pointer)(gpointer * nullify_location);
    gchar * (*ptr_g_format_size_full)(guint64 size, GFormatSizeFlags flags);
    gchar * (*ptr_g_format_size)(guint64 size);
    gchar * (*ptr_g_format_size_for_display)(goffset size);
    void (*ptr_g_atexit)(GVoidFunc func);
    gchar * (*ptr_g_find_program_in_path)(const gchar * program);
    gint (*ptr_g_bit_nth_lsf)(gulong mask, gint nth_bit);
    gint (*ptr_g_bit_nth_msf)(gulong mask, gint nth_bit);
    guint (*ptr_g_bit_storage)(gulong number);
    GQuark (*ptr_g_thread_error_quark)(void);
    GThread * (*ptr_g_thread_ref)(GThread * thread);
    void (*ptr_g_thread_unref)(GThread * thread);
    GThread * (*ptr_g_thread_new)(const gchar * name, GThreadFunc func, gpointer data);
    GThread * (*ptr_g_thread_try_new)(const gchar * name, GThreadFunc func, gpointer data, GError * * error);
    GThread * (*ptr_g_thread_self)(void);
    void (*ptr_g_thread_exit)(gpointer retval);
    gpointer (*ptr_g_thread_join)(GThread * thread);
    void (*ptr_g_thread_yield)(void);
    void (*ptr_g_mutex_init)(GMutex * mutex);
    void (*ptr_g_mutex_clear)(GMutex * mutex);
    void (*ptr_g_mutex_lock)(GMutex * mutex);
    gboolean (*ptr_g_mutex_trylock)(GMutex * mutex);
    void (*ptr_g_mutex_unlock)(GMutex * mutex);
    void (*ptr_g_rw_lock_init)(GRWLock * rw_lock);
    void (*ptr_g_rw_lock_clear)(GRWLock * rw_lock);
    void (*ptr_g_rw_lock_writer_lock)(GRWLock * rw_lock);
    gboolean (*ptr_g_rw_lock_writer_trylock)(GRWLock * rw_lock);
    void (*ptr_g_rw_lock_writer_unlock)(GRWLock * rw_lock);
    void (*ptr_g_rw_lock_reader_lock)(GRWLock * rw_lock);
    gboolean (*ptr_g_rw_lock_reader_trylock)(GRWLock * rw_lock);
    void (*ptr_g_rw_lock_reader_unlock)(GRWLock * rw_lock);
    void (*ptr_g_rec_mutex_init)(GRecMutex * rec_mutex);
    void (*ptr_g_rec_mutex_clear)(GRecMutex * rec_mutex);
    void (*ptr_g_rec_mutex_lock)(GRecMutex * rec_mutex);
    gboolean (*ptr_g_rec_mutex_trylock)(GRecMutex * rec_mutex);
    void (*ptr_g_rec_mutex_unlock)(GRecMutex * rec_mutex);
    void (*ptr_g_cond_init)(GCond * cond);
    void (*ptr_g_cond_clear)(GCond * cond);
    void (*ptr_g_cond_wait)(GCond * cond, GMutex * mutex);
    void (*ptr_g_cond_signal)(GCond * cond);
    void (*ptr_g_cond_broadcast)(GCond * cond);
    gboolean (*ptr_g_cond_wait_until)(GCond * cond, GMutex * mutex, gint64 end_time);
    gpointer (*ptr_g_private_get)(GPrivate * key);
    void (*ptr_g_private_set)(GPrivate * key, gpointer value);
    void (*ptr_g_private_replace)(GPrivate * key, gpointer value);
    gpointer (*ptr_g_once_impl)(GOnce * once, GThreadFunc func, gpointer arg);
    gboolean (*ptr_g_once_init_enter)(volatile void * location);
    void (*ptr_g_once_init_leave)(volatile void * location, gsize result);
    gboolean (*ptr_g_once_init_enter_pointer)(void * location);
    void (*ptr_g_once_init_leave_pointer)(void * location, gpointer result);
    guint (*ptr_g_get_num_processors)(void);
    GAsyncQueue * (*ptr_g_async_queue_new)(void);
    GAsyncQueue * (*ptr_g_async_queue_new_full)(GDestroyNotify item_free_func);
    void (*ptr_g_async_queue_lock)(GAsyncQueue * queue);
    void (*ptr_g_async_queue_unlock)(GAsyncQueue * queue);
    GAsyncQueue * (*ptr_g_async_queue_ref)(GAsyncQueue * queue);
    void (*ptr_g_async_queue_unref)(GAsyncQueue * queue);
    void (*ptr_g_async_queue_ref_unlocked)(GAsyncQueue * queue);
    void (*ptr_g_async_queue_unref_and_unlock)(GAsyncQueue * queue);
    void (*ptr_g_async_queue_push)(GAsyncQueue * queue, gpointer data);
    void (*ptr_g_async_queue_push_unlocked)(GAsyncQueue * queue, gpointer data);
    void (*ptr_g_async_queue_push_sorted)(GAsyncQueue * queue, gpointer data, GCompareDataFunc func, gpointer user_data);
    void (*ptr_g_async_queue_push_sorted_unlocked)(GAsyncQueue * queue, gpointer data, GCompareDataFunc func, gpointer user_data);
    gpointer (*ptr_g_async_queue_pop)(GAsyncQueue * queue);
    gpointer (*ptr_g_async_queue_pop_unlocked)(GAsyncQueue * queue);
    gpointer (*ptr_g_async_queue_try_pop)(GAsyncQueue * queue);
    gpointer (*ptr_g_async_queue_try_pop_unlocked)(GAsyncQueue * queue);
    gpointer (*ptr_g_async_queue_timeout_pop)(GAsyncQueue * queue, guint64 timeout);
    gpointer (*ptr_g_async_queue_timeout_pop_unlocked)(GAsyncQueue * queue, guint64 timeout);
    gint (*ptr_g_async_queue_length)(GAsyncQueue * queue);
    gint (*ptr_g_async_queue_length_unlocked)(GAsyncQueue * queue);
    void (*ptr_g_async_queue_sort)(GAsyncQueue * queue, GCompareDataFunc func, gpointer user_data);
    void (*ptr_g_async_queue_sort_unlocked)(GAsyncQueue * queue, GCompareDataFunc func, gpointer user_data);
    gboolean (*ptr_g_async_queue_remove)(GAsyncQueue * queue, gpointer item);
    gboolean (*ptr_g_async_queue_remove_unlocked)(GAsyncQueue * queue, gpointer item);
    void (*ptr_g_async_queue_push_front)(GAsyncQueue * queue, gpointer item);
    void (*ptr_g_async_queue_push_front_unlocked)(GAsyncQueue * queue, gpointer item);
    gpointer (*ptr_g_async_queue_timed_pop)(GAsyncQueue * queue, GTimeVal * end_time);
    gpointer (*ptr_g_async_queue_timed_pop_unlocked)(GAsyncQueue * queue, GTimeVal * end_time);
    void (*ptr_g_on_error_query)(const gchar * prg_name);
    void (*ptr_g_on_error_stack_trace)(const gchar * prg_name);
    gsize (*ptr_g_base64_encode_step)(const guchar * in, gsize len, gboolean break_lines, gchar * out, gint * state, gint * save);
    gsize (*ptr_g_base64_encode_close)(gboolean break_lines, gchar * out, gint * state, gint * save);
    gchar * (*ptr_g_base64_encode)(const guchar * data, gsize len);
    gsize (*ptr_g_base64_decode_step)(const gchar * in, gsize len, guchar * out, gint * state, guint * save);
    guchar * (*ptr_g_base64_decode)(const gchar * text, gsize * out_len);
    guchar * (*ptr_g_base64_decode_inplace)(gchar * text, gsize * out_len);
    void (*ptr_g_bit_lock)(volatile gint * address, gint lock_bit);
    gboolean (*ptr_g_bit_trylock)(volatile gint * address, gint lock_bit);
    void (*ptr_g_bit_unlock)(volatile gint * address, gint lock_bit);
    void (*ptr_g_pointer_bit_lock)(volatile void * address, gint lock_bit);
    void (*ptr_g_pointer_bit_lock_and_get)(gpointer address, guint lock_bit, guintptr * out_ptr);
    gboolean (*ptr_g_pointer_bit_trylock)(volatile void * address, gint lock_bit);
    void (*ptr_g_pointer_bit_unlock)(volatile void * address, gint lock_bit);
    gpointer (*ptr_g_pointer_bit_lock_mask_ptr)(gpointer ptr, guint lock_bit, gboolean set, guintptr preserve_mask, gpointer preserve_ptr);
    void (*ptr_g_pointer_bit_unlock_and_set)(void * address, guint lock_bit, gpointer ptr, guintptr preserve_mask);
    GTimeZone * (*ptr_g_time_zone_new)(const gchar * identifier);
    GTimeZone * (*ptr_g_time_zone_new_identifier)(const gchar * identifier);
    GTimeZone * (*ptr_g_time_zone_new_utc)(void);
    GTimeZone * (*ptr_g_time_zone_new_local)(void);
    GTimeZone * (*ptr_g_time_zone_new_offset)(gint32 seconds);
    GTimeZone * (*ptr_g_time_zone_ref)(GTimeZone * tz);
    void (*ptr_g_time_zone_unref)(GTimeZone * tz);
    gint (*ptr_g_time_zone_find_interval)(GTimeZone * tz, GTimeType type, gint64 time_);
    gint (*ptr_g_time_zone_adjust_time)(GTimeZone * tz, GTimeType type, gint64 * time_);
    const gchar * (*ptr_g_time_zone_get_abbreviation)(GTimeZone * tz, gint interval);
    gint32 (*ptr_g_time_zone_get_offset)(GTimeZone * tz, gint interval);
    gboolean (*ptr_g_time_zone_is_dst)(GTimeZone * tz, gint interval);
    const gchar * (*ptr_g_time_zone_get_identifier)(GTimeZone * tz);
    void (*ptr_g_date_time_unref)(GDateTime * datetime);
    GDateTime * (*ptr_g_date_time_ref)(GDateTime * datetime);
    GDateTime * (*ptr_g_date_time_new_now)(GTimeZone * tz);
    GDateTime * (*ptr_g_date_time_new_now_local)(void);
    GDateTime * (*ptr_g_date_time_new_now_utc)(void);
    GDateTime * (*ptr_g_date_time_new_from_unix_local)(gint64 t);
    GDateTime * (*ptr_g_date_time_new_from_unix_utc)(gint64 t);
    GDateTime * (*ptr_g_date_time_new_from_unix_local_usec)(gint64 usecs);
    GDateTime * (*ptr_g_date_time_new_from_unix_utc_usec)(gint64 usecs);
    GDateTime * (*ptr_g_date_time_new_from_timeval_local)(const GTimeVal * tv);
    GDateTime * (*ptr_g_date_time_new_from_timeval_utc)(const GTimeVal * tv);
    GDateTime * (*ptr_g_date_time_new_from_iso8601)(const gchar * text, GTimeZone * default_tz);
    GDateTime * (*ptr_g_date_time_new)(GTimeZone * tz, gint year, gint month, gint day, gint hour, gint minute, gdouble seconds);
    GDateTime * (*ptr_g_date_time_new_local)(gint year, gint month, gint day, gint hour, gint minute, gdouble seconds);
    GDateTime * (*ptr_g_date_time_new_utc)(gint year, gint month, gint day, gint hour, gint minute, gdouble seconds);
    GDateTime * (*ptr_g_date_time_add)(GDateTime * datetime, GTimeSpan timespan);
    GDateTime * (*ptr_g_date_time_add_years)(GDateTime * datetime, gint years);
    GDateTime * (*ptr_g_date_time_add_months)(GDateTime * datetime, gint months);
    GDateTime * (*ptr_g_date_time_add_weeks)(GDateTime * datetime, gint weeks);
    GDateTime * (*ptr_g_date_time_add_days)(GDateTime * datetime, gint days);
    GDateTime * (*ptr_g_date_time_add_hours)(GDateTime * datetime, gint hours);
    GDateTime * (*ptr_g_date_time_add_minutes)(GDateTime * datetime, gint minutes);
    GDateTime * (*ptr_g_date_time_add_seconds)(GDateTime * datetime, gdouble seconds);
    GDateTime * (*ptr_g_date_time_add_full)(GDateTime * datetime, gint years, gint months, gint days, gint hours, gint minutes, gdouble seconds);
    gint (*ptr_g_date_time_compare)(gconstpointer dt1, gconstpointer dt2);
    GTimeSpan (*ptr_g_date_time_difference)(GDateTime * end, GDateTime * begin);
    guint (*ptr_g_date_time_hash)(gconstpointer datetime);
    gboolean (*ptr_g_date_time_equal)(gconstpointer dt1, gconstpointer dt2);
    void (*ptr_g_date_time_get_ymd)(GDateTime * datetime, gint * year, gint * month, gint * day);
    gint (*ptr_g_date_time_get_year)(GDateTime * datetime);
    gint (*ptr_g_date_time_get_month)(GDateTime * datetime);
    gint (*ptr_g_date_time_get_day_of_month)(GDateTime * datetime);
    gint (*ptr_g_date_time_get_week_numbering_year)(GDateTime * datetime);
    gint (*ptr_g_date_time_get_week_of_year)(GDateTime * datetime);
    gint (*ptr_g_date_time_get_day_of_week)(GDateTime * datetime);
    gint (*ptr_g_date_time_get_day_of_year)(GDateTime * datetime);
    gint (*ptr_g_date_time_get_hour)(GDateTime * datetime);
    gint (*ptr_g_date_time_get_minute)(GDateTime * datetime);
    gint (*ptr_g_date_time_get_second)(GDateTime * datetime);
    gint (*ptr_g_date_time_get_microsecond)(GDateTime * datetime);
    gdouble (*ptr_g_date_time_get_seconds)(GDateTime * datetime);
    gint64 (*ptr_g_date_time_to_unix)(GDateTime * datetime);
    gint64 (*ptr_g_date_time_to_unix_usec)(GDateTime * datetime);
    gboolean (*ptr_g_date_time_to_timeval)(GDateTime * datetime, GTimeVal * tv);
    GTimeSpan (*ptr_g_date_time_get_utc_offset)(GDateTime * datetime);
    GTimeZone * (*ptr_g_date_time_get_timezone)(GDateTime * datetime);
    const gchar * (*ptr_g_date_time_get_timezone_abbreviation)(GDateTime * datetime);
    gboolean (*ptr_g_date_time_is_daylight_savings)(GDateTime * datetime);
    GDateTime * (*ptr_g_date_time_to_timezone)(GDateTime * datetime, GTimeZone * tz);
    GDateTime * (*ptr_g_date_time_to_local)(GDateTime * datetime);
    GDateTime * (*ptr_g_date_time_to_utc)(GDateTime * datetime);
    gchar * (*ptr_g_date_time_format)(GDateTime * datetime, const gchar * format);
    gchar * (*ptr_g_date_time_format_iso8601)(GDateTime * datetime);
    GQuark (*ptr_g_bookmark_file_error_quark)(void);
    GBookmarkFile * (*ptr_g_bookmark_file_new)(void);
    void (*ptr_g_bookmark_file_free)(GBookmarkFile * bookmark);
    GBookmarkFile * (*ptr_g_bookmark_file_copy)(GBookmarkFile * bookmark);
    gboolean (*ptr_g_bookmark_file_load_from_file)(GBookmarkFile * bookmark, const gchar * filename, GError * * error);
    gboolean (*ptr_g_bookmark_file_load_from_data)(GBookmarkFile * bookmark, const gchar * data, gsize length, GError * * error);
    gboolean (*ptr_g_bookmark_file_load_from_data_dirs)(GBookmarkFile * bookmark, const gchar * file, gchar * * full_path, GError * * error);
    gchar * (*ptr_g_bookmark_file_to_data)(GBookmarkFile * bookmark, gsize * length, GError * * error);
    gboolean (*ptr_g_bookmark_file_to_file)(GBookmarkFile * bookmark, const gchar * filename, GError * * error);
    void (*ptr_g_bookmark_file_set_title)(GBookmarkFile * bookmark, const gchar * uri, const gchar * title);
    gchar * (*ptr_g_bookmark_file_get_title)(GBookmarkFile * bookmark, const gchar * uri, GError * * error);
    void (*ptr_g_bookmark_file_set_description)(GBookmarkFile * bookmark, const gchar * uri, const gchar * description);
    gchar * (*ptr_g_bookmark_file_get_description)(GBookmarkFile * bookmark, const gchar * uri, GError * * error);
    void (*ptr_g_bookmark_file_set_mime_type)(GBookmarkFile * bookmark, const gchar * uri, const gchar * mime_type);
    gchar * (*ptr_g_bookmark_file_get_mime_type)(GBookmarkFile * bookmark, const gchar * uri, GError * * error);
    void (*ptr_g_bookmark_file_set_groups)(GBookmarkFile * bookmark, const gchar * uri, const gchar * * groups, gsize length);
    void (*ptr_g_bookmark_file_add_group)(GBookmarkFile * bookmark, const gchar * uri, const gchar * group);
    gboolean (*ptr_g_bookmark_file_has_group)(GBookmarkFile * bookmark, const gchar * uri, const gchar * group, GError * * error);
    gchar * * (*ptr_g_bookmark_file_get_groups)(GBookmarkFile * bookmark, const gchar * uri, gsize * length, GError * * error);
    void (*ptr_g_bookmark_file_add_application)(GBookmarkFile * bookmark, const gchar * uri, const gchar * name, const gchar * exec);
    gboolean (*ptr_g_bookmark_file_has_application)(GBookmarkFile * bookmark, const gchar * uri, const gchar * name, GError * * error);
    gchar * * (*ptr_g_bookmark_file_get_applications)(GBookmarkFile * bookmark, const gchar * uri, gsize * length, GError * * error);
    gboolean (*ptr_g_bookmark_file_set_app_info)(GBookmarkFile * bookmark, const gchar * uri, const gchar * name, const gchar * exec, gint count, time_t stamp, GError * * error);
    gboolean (*ptr_g_bookmark_file_set_application_info)(GBookmarkFile * bookmark, const char * uri, const char * name, const char * exec, int count, GDateTime * stamp, GError * * error);
    gboolean (*ptr_g_bookmark_file_get_app_info)(GBookmarkFile * bookmark, const gchar * uri, const gchar * name, gchar * * exec, guint * count, time_t * stamp, GError * * error);
    gboolean (*ptr_g_bookmark_file_get_application_info)(GBookmarkFile * bookmark, const char * uri, const char * name, char * * exec, unsigned int * count, GDateTime * * stamp, GError * * error);
    void (*ptr_g_bookmark_file_set_is_private)(GBookmarkFile * bookmark, const gchar * uri, gboolean is_private);
    gboolean (*ptr_g_bookmark_file_get_is_private)(GBookmarkFile * bookmark, const gchar * uri, GError * * error);
    void (*ptr_g_bookmark_file_set_icon)(GBookmarkFile * bookmark, const gchar * uri, const gchar * href, const gchar * mime_type);
    gboolean (*ptr_g_bookmark_file_get_icon)(GBookmarkFile * bookmark, const gchar * uri, gchar * * href, gchar * * mime_type, GError * * error);
    void (*ptr_g_bookmark_file_set_added)(GBookmarkFile * bookmark, const gchar * uri, time_t added);
    void (*ptr_g_bookmark_file_set_added_date_time)(GBookmarkFile * bookmark, const char * uri, GDateTime * added);
    time_t (*ptr_g_bookmark_file_get_added)(GBookmarkFile * bookmark, const gchar * uri, GError * * error);
    GDateTime * (*ptr_g_bookmark_file_get_added_date_time)(GBookmarkFile * bookmark, const char * uri, GError * * error);
    void (*ptr_g_bookmark_file_set_modified)(GBookmarkFile * bookmark, const gchar * uri, time_t modified);
    void (*ptr_g_bookmark_file_set_modified_date_time)(GBookmarkFile * bookmark, const char * uri, GDateTime * modified);
    time_t (*ptr_g_bookmark_file_get_modified)(GBookmarkFile * bookmark, const gchar * uri, GError * * error);
    GDateTime * (*ptr_g_bookmark_file_get_modified_date_time)(GBookmarkFile * bookmark, const char * uri, GError * * error);
    void (*ptr_g_bookmark_file_set_visited)(GBookmarkFile * bookmark, const gchar * uri, time_t visited);
    void (*ptr_g_bookmark_file_set_visited_date_time)(GBookmarkFile * bookmark, const char * uri, GDateTime * visited);
    time_t (*ptr_g_bookmark_file_get_visited)(GBookmarkFile * bookmark, const gchar * uri, GError * * error);
    GDateTime * (*ptr_g_bookmark_file_get_visited_date_time)(GBookmarkFile * bookmark, const char * uri, GError * * error);
    gboolean (*ptr_g_bookmark_file_has_item)(GBookmarkFile * bookmark, const gchar * uri);
    gint (*ptr_g_bookmark_file_get_size)(GBookmarkFile * bookmark);
    gchar * * (*ptr_g_bookmark_file_get_uris)(GBookmarkFile * bookmark, gsize * length);
    gboolean (*ptr_g_bookmark_file_remove_group)(GBookmarkFile * bookmark, const gchar * uri, const gchar * group, GError * * error);
    gboolean (*ptr_g_bookmark_file_remove_application)(GBookmarkFile * bookmark, const gchar * uri, const gchar * name, GError * * error);
    gboolean (*ptr_g_bookmark_file_remove_item)(GBookmarkFile * bookmark, const gchar * uri, GError * * error);
    gboolean (*ptr_g_bookmark_file_move_item)(GBookmarkFile * bookmark, const gchar * old_uri, const gchar * new_uri, GError * * error);
    GBytes * (*ptr_g_bytes_new)(gconstpointer data, gsize size);
    GBytes * (*ptr_g_bytes_new_take)(gpointer data, gsize size);
    GBytes * (*ptr_g_bytes_new_static)(gconstpointer data, gsize size);
    GBytes * (*ptr_g_bytes_new_with_free_func)(gconstpointer data, gsize size, GDestroyNotify free_func, gpointer user_data);
    GBytes * (*ptr_g_bytes_new_from_bytes)(GBytes * bytes, gsize offset, gsize length);
    gconstpointer (*ptr_g_bytes_get_data)(GBytes * bytes, gsize * size);
    gsize (*ptr_g_bytes_get_size)(GBytes * bytes);
    GBytes * (*ptr_g_bytes_ref)(GBytes * bytes);
    void (*ptr_g_bytes_unref)(GBytes * bytes);
    gpointer (*ptr_g_bytes_unref_to_data)(GBytes * bytes, gsize * size);
    GByteArray * (*ptr_g_bytes_unref_to_array)(GBytes * bytes);
    guint (*ptr_g_bytes_hash)(gconstpointer bytes);
    gboolean (*ptr_g_bytes_equal)(gconstpointer bytes1, gconstpointer bytes2);
    gint (*ptr_g_bytes_compare)(gconstpointer bytes1, gconstpointer bytes2);
    gconstpointer (*ptr_g_bytes_get_region)(GBytes * bytes, gsize element_size, gsize offset, gsize n_elements);
    gboolean (*ptr_g_get_charset)(const char * * charset);
    gchar * (*ptr_g_get_codeset)(void);
    gboolean (*ptr_g_get_console_charset)(const char * * charset);
    const gchar * const * (*ptr_g_get_language_names)(void);
    const gchar * const * (*ptr_g_get_language_names_with_category)(const gchar * category_name);
    gchar * * (*ptr_g_get_locale_variants)(const gchar * locale);
    gssize (*ptr_g_checksum_type_get_length)(GChecksumType checksum_type);
    GChecksum * (*ptr_g_checksum_new)(GChecksumType checksum_type);
    void (*ptr_g_checksum_reset)(GChecksum * checksum);
    GChecksum * (*ptr_g_checksum_copy)(const GChecksum * checksum);
    void (*ptr_g_checksum_free)(GChecksum * checksum);
    void (*ptr_g_checksum_update)(GChecksum * checksum, const guchar * data, gssize length);
    const gchar * (*ptr_g_checksum_get_string)(GChecksum * checksum);
    void (*ptr_g_checksum_get_digest)(GChecksum * checksum, guint8 * buffer, gsize * digest_len);
    gchar * (*ptr_g_compute_checksum_for_data)(GChecksumType checksum_type, const guchar * data, gsize length);
    gchar * (*ptr_g_compute_checksum_for_string)(GChecksumType checksum_type, const gchar * str, gssize length);
    gchar * (*ptr_g_compute_checksum_for_bytes)(GChecksumType checksum_type, GBytes * data);
    GQuark (*ptr_g_convert_error_quark)(void);
    GIConv (*ptr_g_iconv_open)(const gchar * to_codeset, const gchar * from_codeset);
    gsize (*ptr_g_iconv)(GIConv converter, gchar * * inbuf, gsize * inbytes_left, gchar * * outbuf, gsize * outbytes_left);
    gint (*ptr_g_iconv_close)(GIConv converter);
    gchar * (*ptr_g_convert)(const gchar * str, gssize len, const gchar * to_codeset, const gchar * from_codeset, gsize * bytes_read, gsize * bytes_written, GError * * error);
    gchar * (*ptr_g_convert_with_iconv)(const gchar * str, gssize len, GIConv converter, gsize * bytes_read, gsize * bytes_written, GError * * error);
    gchar * (*ptr_g_convert_with_fallback)(const gchar * str, gssize len, const gchar * to_codeset, const gchar * from_codeset, const gchar * fallback, gsize * bytes_read, gsize * bytes_written, GError * * error);
    gchar * (*ptr_g_locale_to_utf8)(const gchar * opsysstring, gssize len, gsize * bytes_read, gsize * bytes_written, GError * * error);
    gchar * (*ptr_g_locale_from_utf8)(const gchar * utf8string, gssize len, gsize * bytes_read, gsize * bytes_written, GError * * error);
    gchar * (*ptr_g_filename_to_utf8)(const gchar * opsysstring, gssize len, gsize * bytes_read, gsize * bytes_written, GError * * error);
    gchar * (*ptr_g_filename_from_utf8)(const gchar * utf8string, gssize len, gsize * bytes_read, gsize * bytes_written, GError * * error);
    gchar * (*ptr_g_filename_from_uri)(const gchar * uri, gchar * * hostname, GError * * error);
    gchar * (*ptr_g_filename_to_uri)(const gchar * filename, const gchar * hostname, GError * * error);
    gchar * (*ptr_g_filename_display_name)(const gchar * filename);
    gboolean (*ptr_g_get_filename_charsets)(const gchar * * * filename_charsets);
    gchar * (*ptr_g_filename_display_basename)(const gchar * filename);
    gchar * * (*ptr_g_uri_list_extract_uris)(const gchar * uri_list);
    void (*ptr_g_datalist_init)(GData * * datalist);
    void (*ptr_g_datalist_clear)(GData * * datalist);
    gpointer (*ptr_g_datalist_id_get_data)(GData * * datalist, GQuark key_id);
    void (*ptr_g_datalist_id_set_data_full)(GData * * datalist, GQuark key_id, gpointer data, GDestroyNotify destroy_func);
    void (*ptr_g_datalist_id_remove_multiple)(GData * * datalist, GQuark * keys, gsize n_keys);
    gpointer (*ptr_g_datalist_id_dup_data)(GData * * datalist, GQuark key_id, GDuplicateFunc dup_func, gpointer user_data);
    gboolean (*ptr_g_datalist_id_replace_data)(GData * * datalist, GQuark key_id, gpointer oldval, gpointer newval, GDestroyNotify destroy, GDestroyNotify * old_destroy);
    gpointer (*ptr_g_datalist_id_remove_no_notify)(GData * * datalist, GQuark key_id);
    void (*ptr_g_datalist_foreach)(GData * * datalist, GDataForeachFunc func, gpointer user_data);
    void (*ptr_g_datalist_set_flags)(GData * * datalist, guint flags);
    void (*ptr_g_datalist_unset_flags)(GData * * datalist, guint flags);
    guint (*ptr_g_datalist_get_flags)(GData * * datalist);
    void (*ptr_g_dataset_destroy)(gconstpointer dataset_location);
    gpointer (*ptr_g_dataset_id_get_data)(gconstpointer dataset_location, GQuark key_id);
    gpointer (*ptr_g_datalist_get_data)(GData * * datalist, const gchar * key);
    void (*ptr_g_dataset_id_set_data_full)(gconstpointer dataset_location, GQuark key_id, gpointer data, GDestroyNotify destroy_func);
    gpointer (*ptr_g_dataset_id_remove_no_notify)(gconstpointer dataset_location, GQuark key_id);
    void (*ptr_g_dataset_foreach)(gconstpointer dataset_location, GDataForeachFunc func, gpointer user_data);
    GDate * (*ptr_g_date_new)(void);
    GDate * (*ptr_g_date_new_dmy)(GDateDay day, GDateMonth month, GDateYear year);
    GDate * (*ptr_g_date_new_julian)(guint32 julian_day);
    void (*ptr_g_date_free)(GDate * date);
    GDate * (*ptr_g_date_copy)(const GDate * date);
    gboolean (*ptr_g_date_valid)(const GDate * date);
    gboolean (*ptr_g_date_valid_day)(GDateDay day);
    gboolean (*ptr_g_date_valid_month)(GDateMonth month);
    gboolean (*ptr_g_date_valid_year)(GDateYear year);
    gboolean (*ptr_g_date_valid_weekday)(GDateWeekday weekday);
    gboolean (*ptr_g_date_valid_julian)(guint32 julian_date);
    gboolean (*ptr_g_date_valid_dmy)(GDateDay day, GDateMonth month, GDateYear year);
    GDateWeekday (*ptr_g_date_get_weekday)(const GDate * date);
    GDateMonth (*ptr_g_date_get_month)(const GDate * date);
    GDateYear (*ptr_g_date_get_year)(const GDate * date);
    GDateDay (*ptr_g_date_get_day)(const GDate * date);
    guint32 (*ptr_g_date_get_julian)(const GDate * date);
    guint (*ptr_g_date_get_day_of_year)(const GDate * date);
    guint (*ptr_g_date_get_monday_week_of_year)(const GDate * date);
    guint (*ptr_g_date_get_sunday_week_of_year)(const GDate * date);
    guint (*ptr_g_date_get_iso8601_week_of_year)(const GDate * date);
    void (*ptr_g_date_clear)(GDate * date, guint n_dates);
    void (*ptr_g_date_set_parse)(GDate * date, const gchar * str);
    void (*ptr_g_date_set_time_t)(GDate * date, time_t timet);
    void (*ptr_g_date_set_time_val)(GDate * date, GTimeVal * timeval);
    void (*ptr_g_date_set_time)(GDate * date, GTime time_);
    void (*ptr_g_date_set_month)(GDate * date, GDateMonth month);
    void (*ptr_g_date_set_day)(GDate * date, GDateDay day);
    void (*ptr_g_date_set_year)(GDate * date, GDateYear year);
    void (*ptr_g_date_set_dmy)(GDate * date, GDateDay day, GDateMonth month, GDateYear y);
    void (*ptr_g_date_set_julian)(GDate * date, guint32 julian_date);
    gboolean (*ptr_g_date_is_first_of_month)(const GDate * date);
    gboolean (*ptr_g_date_is_last_of_month)(const GDate * date);
    void (*ptr_g_date_add_days)(GDate * date, guint n_days);
    void (*ptr_g_date_subtract_days)(GDate * date, guint n_days);
    void (*ptr_g_date_add_months)(GDate * date, guint n_months);
    void (*ptr_g_date_subtract_months)(GDate * date, guint n_months);
    void (*ptr_g_date_add_years)(GDate * date, guint n_years);
    void (*ptr_g_date_subtract_years)(GDate * date, guint n_years);
    gboolean (*ptr_g_date_is_leap_year)(GDateYear year);
    guint8 (*ptr_g_date_get_days_in_month)(GDateMonth month, GDateYear year);
    guint8 (*ptr_g_date_get_monday_weeks_in_year)(GDateYear year);
    guint8 (*ptr_g_date_get_sunday_weeks_in_year)(GDateYear year);
    gint (*ptr_g_date_days_between)(const GDate * date1, const GDate * date2);
    gint (*ptr_g_date_compare)(const GDate * lhs, const GDate * rhs);
    void (*ptr_g_date_to_struct_tm)(const GDate * date, struct tm * tm);
    void (*ptr_g_date_clamp)(GDate * date, const GDate * min_date, const GDate * max_date);
    void (*ptr_g_date_order)(GDate * date1, GDate * date2);
    gsize (*ptr_g_date_strftime)(gchar * s, gsize slen, const gchar * format, const GDate * date);
    GDir * (*ptr_g_dir_open)(const gchar * path, guint flags, GError * * error);
    const gchar * (*ptr_g_dir_read_name)(GDir * dir);
    void (*ptr_g_dir_rewind)(GDir * dir);
    void (*ptr_g_dir_close)(GDir * dir);
    GDir * (*ptr_g_dir_ref)(GDir * dir);
    void (*ptr_g_dir_unref)(GDir * dir);
    const gchar * (*ptr_g_getenv)(const gchar * variable);
    gboolean (*ptr_g_setenv)(const gchar * variable, const gchar * value, gboolean overwrite);
    void (*ptr_g_unsetenv)(const gchar * variable);
    gchar * * (*ptr_g_listenv)(void);
    gchar * * (*ptr_g_get_environ)(void);
    const gchar * (*ptr_g_environ_getenv)(gchar * * envp, const gchar * variable);
    gchar * * (*ptr_g_environ_setenv)(gchar * * envp, const gchar * variable, const gchar * value, gboolean overwrite);
    gchar * * (*ptr_g_environ_unsetenv)(gchar * * envp, const gchar * variable);
    GQuark (*ptr_g_file_error_quark)(void);
    GFileError (*ptr_g_file_error_from_errno)(gint err_no);
    gboolean (*ptr_g_file_test)(const gchar * filename, GFileTest test);
    gboolean (*ptr_g_file_get_contents)(const gchar * filename, gchar * * contents, gsize * length, GError * * error);
    gboolean (*ptr_g_file_set_contents)(const gchar * filename, const gchar * contents, gssize length, GError * * error);
    gboolean (*ptr_g_file_set_contents_full)(const gchar * filename, const gchar * contents, gssize length, GFileSetContentsFlags flags, int mode, GError * * error);
    gchar * (*ptr_g_file_read_link)(const gchar * filename, GError * * error);
    gchar * (*ptr_g_mkdtemp)(gchar * tmpl);
    gchar * (*ptr_g_mkdtemp_full)(gchar * tmpl, gint mode);
    gint (*ptr_g_mkstemp)(gchar * tmpl);
    gint (*ptr_g_mkstemp_full)(gchar * tmpl, gint flags, gint mode);
    gint (*ptr_g_file_open_tmp)(const gchar * tmpl, gchar * * name_used, GError * * error);
    gchar * (*ptr_g_dir_make_tmp)(const gchar * tmpl, GError * * error);
    gchar * (*ptr_g_build_pathv)(const gchar * separator, gchar * * args);
    gchar * (*ptr_g_build_filename)(const gchar * first_element, ...);
    gchar * (*ptr_g_build_filenamev)(gchar * * args);
    gchar * (*ptr_g_build_filename_valist)(const gchar * first_element, va_list * args);
    gint (*ptr_g_mkdir_with_parents)(const gchar * pathname, gint mode);
    gboolean (*ptr_g_path_is_absolute)(const gchar * file_name);
    const gchar * (*ptr_g_path_skip_root)(const gchar * file_name);
    const gchar * (*ptr_g_basename)(const gchar * file_name);
    gchar * (*ptr_g_get_current_dir)(void);
    gchar * (*ptr_g_path_get_basename)(const gchar * file_name);
    gchar * (*ptr_g_path_get_dirname)(const gchar * file_name);
    gchar * (*ptr_g_canonicalize_filename)(const gchar * filename, const gchar * relative_to);
    const gchar * (*ptr_g_strip_context)(const gchar * msgid, const gchar * msgval);
    const gchar * (*ptr_g_dgettext)(const gchar * domain, const gchar * msgid);
    const gchar * (*ptr_g_dcgettext)(const gchar * domain, const gchar * msgid, gint category);
    const gchar * (*ptr_g_dngettext)(const gchar * domain, const gchar * msgid, const gchar * msgid_plural, gulong n);
    const gchar * (*ptr_g_dpgettext)(const gchar * domain, const gchar * msgctxtid, gsize msgidoffset);
    const gchar * (*ptr_g_dpgettext2)(const gchar * domain, const gchar * context, const gchar * msgid);
    void (*ptr_g_free)(gpointer mem);
    void (*ptr_g_free_sized)(gpointer mem, size_t size);
    void (*ptr_g_clear_pointer)(gpointer * pp, GDestroyNotify destroy);
    gpointer (*ptr_g_malloc)(gsize n_bytes);
    gpointer (*ptr_g_malloc0)(gsize n_bytes);
    gpointer (*ptr_g_realloc)(gpointer mem, gsize n_bytes);
    gpointer (*ptr_g_try_malloc)(gsize n_bytes);
    gpointer (*ptr_g_try_malloc0)(gsize n_bytes);
    gpointer (*ptr_g_try_realloc)(gpointer mem, gsize n_bytes);
    gpointer (*ptr_g_malloc_n)(gsize n_blocks, gsize n_block_bytes);
    gpointer (*ptr_g_malloc0_n)(gsize n_blocks, gsize n_block_bytes);
    gpointer (*ptr_g_realloc_n)(gpointer mem, gsize n_blocks, gsize n_block_bytes);
    gpointer (*ptr_g_try_malloc_n)(gsize n_blocks, gsize n_block_bytes);
    gpointer (*ptr_g_try_malloc0_n)(gsize n_blocks, gsize n_block_bytes);
    gpointer (*ptr_g_try_realloc_n)(gpointer mem, gsize n_blocks, gsize n_block_bytes);
    gpointer (*ptr_g_aligned_alloc)(gsize n_blocks, gsize n_block_bytes, gsize alignment);
    gpointer (*ptr_g_aligned_alloc0)(gsize n_blocks, gsize n_block_bytes, gsize alignment);
    void (*ptr_g_aligned_free)(gpointer mem);
    void (*ptr_g_aligned_free_sized)(gpointer mem, size_t alignment, size_t size);
    void (*ptr_g_mem_set_vtable)(GMemVTable * vtable);
    gboolean (*ptr_g_mem_is_system_malloc)(void);
    void (*ptr_g_mem_profile)(void);
    GNode * (*ptr_g_node_new)(gpointer data);
    void (*ptr_g_node_destroy)(GNode * root);
    void (*ptr_g_node_unlink)(GNode * node);
    GNode * (*ptr_g_node_copy_deep)(GNode * node, GCopyFunc copy_func, gpointer data);
    GNode * (*ptr_g_node_copy)(GNode * node);
    GNode * (*ptr_g_node_insert)(GNode * parent, gint position, GNode * node);
    GNode * (*ptr_g_node_insert_before)(GNode * parent, GNode * sibling, GNode * node);
    GNode * (*ptr_g_node_insert_after)(GNode * parent, GNode * sibling, GNode * node);
    GNode * (*ptr_g_node_prepend)(GNode * parent, GNode * node);
    guint (*ptr_g_node_n_nodes)(GNode * root, GTraverseFlags flags);
    GNode * (*ptr_g_node_get_root)(GNode * node);
    gboolean (*ptr_g_node_is_ancestor)(GNode * node, GNode * descendant);
    guint (*ptr_g_node_depth)(GNode * node);
    GNode * (*ptr_g_node_find)(GNode * root, GTraverseType order, GTraverseFlags flags, gpointer data);
    void (*ptr_g_node_traverse)(GNode * root, GTraverseType order, GTraverseFlags flags, gint max_depth, GNodeTraverseFunc func, gpointer data);
    guint (*ptr_g_node_max_height)(GNode * root);
    void (*ptr_g_node_children_foreach)(GNode * node, GTraverseFlags flags, GNodeForeachFunc func, gpointer data);
    void (*ptr_g_node_reverse_children)(GNode * node);
    guint (*ptr_g_node_n_children)(GNode * node);
    GNode * (*ptr_g_node_nth_child)(GNode * node, guint n);
    GNode * (*ptr_g_node_last_child)(GNode * node);
    GNode * (*ptr_g_node_find_child)(GNode * node, GTraverseFlags flags, gpointer data);
    gint (*ptr_g_node_child_position)(GNode * node, GNode * child);
    gint (*ptr_g_node_child_index)(GNode * node, gpointer data);
    GNode * (*ptr_g_node_first_sibling)(GNode * node);
    GNode * (*ptr_g_node_last_sibling)(GNode * node);
    GList * (*ptr_g_list_alloc)(void);
    void (*ptr_g_list_free)(GList * list);
    void (*ptr_g_list_free_1)(GList * list);
    void (*ptr_g_list_free_full)(GList * list, GDestroyNotify free_func);
    GList * (*ptr_g_list_append)(GList * list, gpointer data);
    GList * (*ptr_g_list_prepend)(GList * list, gpointer data);
    GList * (*ptr_g_list_insert)(GList * list, gpointer data, gint position);
    GList * (*ptr_g_list_insert_sorted)(GList * list, gpointer data, GCompareFunc func);
    GList * (*ptr_g_list_insert_sorted_with_data)(GList * list, gpointer data, GCompareDataFunc func, gpointer user_data);
    GList * (*ptr_g_list_insert_before)(GList * list, GList * sibling, gpointer data);
    GList * (*ptr_g_list_insert_before_link)(GList * list, GList * sibling, GList * link_);
    GList * (*ptr_g_list_concat)(GList * list1, GList * list2);
    GList * (*ptr_g_list_remove)(GList * list, gconstpointer data);
    GList * (*ptr_g_list_remove_all)(GList * list, gconstpointer data);
    GList * (*ptr_g_list_remove_link)(GList * list, GList * llink);
    GList * (*ptr_g_list_delete_link)(GList * list, GList * link_);
    GList * (*ptr_g_list_reverse)(GList * list);
    GList * (*ptr_g_list_copy)(GList * list);
    GList * (*ptr_g_list_copy_deep)(GList * list, GCopyFunc func, gpointer user_data);
    GList * (*ptr_g_list_nth)(GList * list, guint n);
    GList * (*ptr_g_list_nth_prev)(GList * list, guint n);
    GList * (*ptr_g_list_find)(GList * list, gconstpointer data);
    GList * (*ptr_g_list_find_custom)(GList * list, gconstpointer data, GCompareFunc func);
    gint (*ptr_g_list_position)(GList * list, GList * llink);
    gint (*ptr_g_list_index)(GList * list, gconstpointer data);
    GList * (*ptr_g_list_last)(GList * list);
    GList * (*ptr_g_list_first)(GList * list);
    guint (*ptr_g_list_length)(GList * list);
    void (*ptr_g_list_foreach)(GList * list, GFunc func, gpointer user_data);
    GList * (*ptr_g_list_sort)(GList * list, GCompareFunc compare_func);
    GList * (*ptr_g_list_sort_with_data)(GList * list, GCompareDataFunc compare_func, gpointer user_data);
    gpointer (*ptr_g_list_nth_data)(GList * list, guint n);
    void (*ptr_g_clear_list)(GList * * list_ptr, GDestroyNotify destroy);
    GHashTable * (*ptr_g_hash_table_new)(GHashFunc hash_func, GEqualFunc key_equal_func);
    GHashTable * (*ptr_g_hash_table_new_full)(GHashFunc hash_func, GEqualFunc key_equal_func, GDestroyNotify key_destroy_func, GDestroyNotify value_destroy_func);
    GHashTable * (*ptr_g_hash_table_new_similar)(GHashTable * other_hash_table);
    void (*ptr_g_hash_table_destroy)(GHashTable * hash_table);
    gboolean (*ptr_g_hash_table_insert)(GHashTable * hash_table, gpointer key, gpointer value);
    gboolean (*ptr_g_hash_table_replace)(GHashTable * hash_table, gpointer key, gpointer value);
    gboolean (*ptr_g_hash_table_add)(GHashTable * hash_table, gpointer key);
    gboolean (*ptr_g_hash_table_remove)(GHashTable * hash_table, gconstpointer key);
    void (*ptr_g_hash_table_remove_all)(GHashTable * hash_table);
    gboolean (*ptr_g_hash_table_steal)(GHashTable * hash_table, gconstpointer key);
    gboolean (*ptr_g_hash_table_steal_extended)(GHashTable * hash_table, gconstpointer lookup_key, gpointer * stolen_key, gpointer * stolen_value);
    void (*ptr_g_hash_table_steal_all)(GHashTable * hash_table);
    GPtrArray * (*ptr_g_hash_table_steal_all_keys)(GHashTable * hash_table);
    GPtrArray * (*ptr_g_hash_table_steal_all_values)(GHashTable * hash_table);
    gpointer (*ptr_g_hash_table_lookup)(GHashTable * hash_table, gconstpointer key);
    gboolean (*ptr_g_hash_table_contains)(GHashTable * hash_table, gconstpointer key);
    gboolean (*ptr_g_hash_table_lookup_extended)(GHashTable * hash_table, gconstpointer lookup_key, gpointer * orig_key, gpointer * value);
    void (*ptr_g_hash_table_foreach)(GHashTable * hash_table, GHFunc func, gpointer user_data);
    gpointer (*ptr_g_hash_table_find)(GHashTable * hash_table, GHRFunc predicate, gpointer user_data);
    guint (*ptr_g_hash_table_foreach_remove)(GHashTable * hash_table, GHRFunc func, gpointer user_data);
    guint (*ptr_g_hash_table_foreach_steal)(GHashTable * hash_table, GHRFunc func, gpointer user_data);
    guint (*ptr_g_hash_table_size)(GHashTable * hash_table);
    GList * (*ptr_g_hash_table_get_keys)(GHashTable * hash_table);
    GList * (*ptr_g_hash_table_get_values)(GHashTable * hash_table);
    gpointer * (*ptr_g_hash_table_get_keys_as_array)(GHashTable * hash_table, guint * length);
    GPtrArray * (*ptr_g_hash_table_get_keys_as_ptr_array)(GHashTable * hash_table);
    GPtrArray * (*ptr_g_hash_table_get_values_as_ptr_array)(GHashTable * hash_table);
    void (*ptr_g_hash_table_iter_init)(GHashTableIter * iter, GHashTable * hash_table);
    gboolean (*ptr_g_hash_table_iter_next)(GHashTableIter * iter, gpointer * key, gpointer * value);
    GHashTable * (*ptr_g_hash_table_iter_get_hash_table)(GHashTableIter * iter);
    void (*ptr_g_hash_table_iter_remove)(GHashTableIter * iter);
    void (*ptr_g_hash_table_iter_replace)(GHashTableIter * iter, gpointer value);
    void (*ptr_g_hash_table_iter_steal)(GHashTableIter * iter);
    GHashTable * (*ptr_g_hash_table_ref)(GHashTable * hash_table);
    void (*ptr_g_hash_table_unref)(GHashTable * hash_table);
    gboolean (*ptr_g_str_equal)(gconstpointer v1, gconstpointer v2);
    guint (*ptr_g_str_hash)(gconstpointer v);
    gboolean (*ptr_g_int_equal)(gconstpointer v1, gconstpointer v2);
    guint (*ptr_g_int_hash)(gconstpointer v);
    gboolean (*ptr_g_int64_equal)(gconstpointer v1, gconstpointer v2);
    guint (*ptr_g_int64_hash)(gconstpointer v);
    gboolean (*ptr_g_double_equal)(gconstpointer v1, gconstpointer v2);
    guint (*ptr_g_double_hash)(gconstpointer v);
    guint (*ptr_g_direct_hash)(gconstpointer v);
    gboolean (*ptr_g_direct_equal)(gconstpointer v1, gconstpointer v2);
    GHmac * (*ptr_g_hmac_new)(GChecksumType digest_type, const guchar * key, gsize key_len);
    GHmac * (*ptr_g_hmac_copy)(const GHmac * hmac);
    GHmac * (*ptr_g_hmac_ref)(GHmac * hmac);
    void (*ptr_g_hmac_unref)(GHmac * hmac);
    void (*ptr_g_hmac_update)(GHmac * hmac, const guchar * data, gssize length);
    const gchar * (*ptr_g_hmac_get_string)(GHmac * hmac);
    void (*ptr_g_hmac_get_digest)(GHmac * hmac, guint8 * buffer, gsize * digest_len);
    gchar * (*ptr_g_compute_hmac_for_data)(GChecksumType digest_type, const guchar * key, gsize key_len, const guchar * data, gsize length);
    gchar * (*ptr_g_compute_hmac_for_string)(GChecksumType digest_type, const guchar * key, gsize key_len, const gchar * str, gssize length);
    gchar * (*ptr_g_compute_hmac_for_bytes)(GChecksumType digest_type, GBytes * key, GBytes * data);
    void (*ptr_g_hook_list_init)(GHookList * hook_list, guint hook_size);
    void (*ptr_g_hook_list_clear)(GHookList * hook_list);
    GHook * (*ptr_g_hook_alloc)(GHookList * hook_list);
    void (*ptr_g_hook_free)(GHookList * hook_list, GHook * hook);
    GHook * (*ptr_g_hook_ref)(GHookList * hook_list, GHook * hook);
    void (*ptr_g_hook_unref)(GHookList * hook_list, GHook * hook);
    gboolean (*ptr_g_hook_destroy)(GHookList * hook_list, gulong hook_id);
    void (*ptr_g_hook_destroy_link)(GHookList * hook_list, GHook * hook);
    void (*ptr_g_hook_prepend)(GHookList * hook_list, GHook * hook);
    void (*ptr_g_hook_insert_before)(GHookList * hook_list, GHook * sibling, GHook * hook);
    void (*ptr_g_hook_insert_sorted)(GHookList * hook_list, GHook * hook, GHookCompareFunc func);
    GHook * (*ptr_g_hook_get)(GHookList * hook_list, gulong hook_id);
    GHook * (*ptr_g_hook_find)(GHookList * hook_list, gboolean need_valids, GHookFindFunc func, gpointer data);
    GHook * (*ptr_g_hook_find_data)(GHookList * hook_list, gboolean need_valids, gpointer data);
    GHook * (*ptr_g_hook_find_func)(GHookList * hook_list, gboolean need_valids, gpointer func);
    GHook * (*ptr_g_hook_find_func_data)(GHookList * hook_list, gboolean need_valids, gpointer func, gpointer data);
    GHook * (*ptr_g_hook_first_valid)(GHookList * hook_list, gboolean may_be_in_call);
    GHook * (*ptr_g_hook_next_valid)(GHookList * hook_list, GHook * hook, gboolean may_be_in_call);
    gint (*ptr_g_hook_compare_ids)(GHook * new_hook, GHook * sibling);
    void (*ptr_g_hook_list_invoke)(GHookList * hook_list, gboolean may_recurse);
    void (*ptr_g_hook_list_invoke_check)(GHookList * hook_list, gboolean may_recurse);
    void (*ptr_g_hook_list_marshal)(GHookList * hook_list, gboolean may_recurse, GHookMarshaller marshaller, gpointer marshal_data);
    void (*ptr_g_hook_list_marshal_check)(GHookList * hook_list, gboolean may_recurse, GHookCheckMarshaller marshaller, gpointer marshal_data);
    gboolean (*ptr_g_hostname_is_non_ascii)(const gchar * hostname);
    gboolean (*ptr_g_hostname_is_ascii_encoded)(const gchar * hostname);
    gboolean (*ptr_g_hostname_is_ip_address)(const gchar * hostname);
    gchar * (*ptr_g_hostname_to_ascii)(const gchar * hostname);
    gchar * (*ptr_g_hostname_to_unicode)(const gchar * hostname);
    gint (*ptr_g_poll)(GPollFD * fds, guint nfds, gint timeout);
    GSList * (*ptr_g_slist_alloc)(void);
    void (*ptr_g_slist_free)(GSList * list);
    void (*ptr_g_slist_free_1)(GSList * list);
    void (*ptr_g_slist_free_full)(GSList * list, GDestroyNotify free_func);
    GSList * (*ptr_g_slist_append)(GSList * list, gpointer data);
    GSList * (*ptr_g_slist_prepend)(GSList * list, gpointer data);
    GSList * (*ptr_g_slist_insert)(GSList * list, gpointer data, gint position);
    GSList * (*ptr_g_slist_insert_sorted)(GSList * list, gpointer data, GCompareFunc func);
    GSList * (*ptr_g_slist_insert_sorted_with_data)(GSList * list, gpointer data, GCompareDataFunc func, gpointer user_data);
    GSList * (*ptr_g_slist_insert_before)(GSList * slist, GSList * sibling, gpointer data);
    GSList * (*ptr_g_slist_concat)(GSList * list1, GSList * list2);
    GSList * (*ptr_g_slist_remove)(GSList * list, gconstpointer data);
    GSList * (*ptr_g_slist_remove_all)(GSList * list, gconstpointer data);
    GSList * (*ptr_g_slist_remove_link)(GSList * list, GSList * link_);
    GSList * (*ptr_g_slist_delete_link)(GSList * list, GSList * link_);
    GSList * (*ptr_g_slist_reverse)(GSList * list);
    GSList * (*ptr_g_slist_copy)(GSList * list);
    GSList * (*ptr_g_slist_copy_deep)(GSList * list, GCopyFunc func, gpointer user_data);
    GSList * (*ptr_g_slist_nth)(GSList * list, guint n);
    GSList * (*ptr_g_slist_find)(GSList * list, gconstpointer data);
    GSList * (*ptr_g_slist_find_custom)(GSList * list, gconstpointer data, GCompareFunc func);
    gint (*ptr_g_slist_position)(GSList * list, GSList * llink);
    gint (*ptr_g_slist_index)(GSList * list, gconstpointer data);
    GSList * (*ptr_g_slist_last)(GSList * list);
    guint (*ptr_g_slist_length)(GSList * list);
    void (*ptr_g_slist_foreach)(GSList * list, GFunc func, gpointer user_data);
    GSList * (*ptr_g_slist_sort)(GSList * list, GCompareFunc compare_func);
    GSList * (*ptr_g_slist_sort_with_data)(GSList * list, GCompareDataFunc compare_func, gpointer user_data);
    gpointer (*ptr_g_slist_nth_data)(GSList * list, guint n);
    void (*ptr_g_clear_slist)(GSList * * slist_ptr, GDestroyNotify destroy);
    GMainContext * (*ptr_g_main_context_new)(void);
    GMainContext * (*ptr_g_main_context_new_with_flags)(GMainContextFlags flags);
    GMainContext * (*ptr_g_main_context_ref)(GMainContext * context);
    void (*ptr_g_main_context_unref)(GMainContext * context);
    GMainContext * (*ptr_g_main_context_default)(void);
    gboolean (*ptr_g_main_context_iteration)(GMainContext * context, gboolean may_block);
    gboolean (*ptr_g_main_context_pending)(GMainContext * context);
    GSource * (*ptr_g_main_context_find_source_by_id)(GMainContext * context, guint source_id);
    GSource * (*ptr_g_main_context_find_source_by_user_data)(GMainContext * context, gpointer user_data);
    GSource * (*ptr_g_main_context_find_source_by_funcs_user_data)(GMainContext * context, GSourceFuncs * funcs, gpointer user_data);
    void (*ptr_g_main_context_wakeup)(GMainContext * context);
    gboolean (*ptr_g_main_context_acquire)(GMainContext * context);
    void (*ptr_g_main_context_release)(GMainContext * context);
    gboolean (*ptr_g_main_context_is_owner)(GMainContext * context);
    gboolean (*ptr_g_main_context_wait)(GMainContext * context, GCond * cond, GMutex * mutex);
    gboolean (*ptr_g_main_context_prepare)(GMainContext * context, gint * priority);
    gint (*ptr_g_main_context_query)(GMainContext * context, gint max_priority, gint * timeout_, GPollFD * fds, gint n_fds);
    gboolean (*ptr_g_main_context_check)(GMainContext * context, gint max_priority, GPollFD * fds, gint n_fds);
    void (*ptr_g_main_context_dispatch)(GMainContext * context);
    void (*ptr_g_main_context_set_poll_func)(GMainContext * context, GPollFunc func);
    GPollFunc (*ptr_g_main_context_get_poll_func)(GMainContext * context);
    void (*ptr_g_main_context_add_poll)(GMainContext * context, GPollFD * fd, gint priority);
    void (*ptr_g_main_context_remove_poll)(GMainContext * context, GPollFD * fd);
    gint (*ptr_g_main_depth)(void);
    GSource * (*ptr_g_main_current_source)(void);
    void (*ptr_g_main_context_push_thread_default)(GMainContext * context);
    void (*ptr_g_main_context_pop_thread_default)(GMainContext * context);
    GMainContext * (*ptr_g_main_context_get_thread_default)(void);
    GMainContext * (*ptr_g_main_context_ref_thread_default)(void);
    GMainLoop * (*ptr_g_main_loop_new)(GMainContext * context, gboolean is_running);
    void (*ptr_g_main_loop_run)(GMainLoop * loop);
    void (*ptr_g_main_loop_quit)(GMainLoop * loop);
    GMainLoop * (*ptr_g_main_loop_ref)(GMainLoop * loop);
    void (*ptr_g_main_loop_unref)(GMainLoop * loop);
    gboolean (*ptr_g_main_loop_is_running)(GMainLoop * loop);
    GMainContext * (*ptr_g_main_loop_get_context)(GMainLoop * loop);
    GSource * (*ptr_g_source_new)(GSourceFuncs * source_funcs, guint struct_size);
    void (*ptr_g_source_set_dispose_function)(GSource * source, GSourceDisposeFunc dispose);
    GSource * (*ptr_g_source_ref)(GSource * source);
    void (*ptr_g_source_unref)(GSource * source);
    guint (*ptr_g_source_attach)(GSource * source, GMainContext * context);
    void (*ptr_g_source_destroy)(GSource * source);
    void (*ptr_g_source_set_priority)(GSource * source, gint priority);
    gint (*ptr_g_source_get_priority)(GSource * source);
    void (*ptr_g_source_set_can_recurse)(GSource * source, gboolean can_recurse);
    gboolean (*ptr_g_source_get_can_recurse)(GSource * source);
    guint (*ptr_g_source_get_id)(GSource * source);
    GMainContext * (*ptr_g_source_get_context)(GSource * source);
    void (*ptr_g_source_set_callback)(GSource * source, GSourceFunc func, gpointer data, GDestroyNotify notify);
    void (*ptr_g_source_set_funcs)(GSource * source, GSourceFuncs * funcs);
    gboolean (*ptr_g_source_is_destroyed)(GSource * source);
    void (*ptr_g_source_set_name)(GSource * source, const char * name);
    void (*ptr_g_source_set_static_name)(GSource * source, const char * name);
    const char * (*ptr_g_source_get_name)(GSource * source);
    void (*ptr_g_source_set_name_by_id)(guint tag, const char * name);
    void (*ptr_g_source_set_ready_time)(GSource * source, gint64 ready_time);
    gint64 (*ptr_g_source_get_ready_time)(GSource * source);
    gpointer (*ptr_g_source_add_unix_fd)(GSource * source, gint fd, GIOCondition events);
    void (*ptr_g_source_modify_unix_fd)(GSource * source, gpointer tag, GIOCondition new_events);
    void (*ptr_g_source_remove_unix_fd)(GSource * source, gpointer tag);
    GIOCondition (*ptr_g_source_query_unix_fd)(GSource * source, gpointer tag);
    void (*ptr_g_source_set_callback_indirect)(GSource * source, gpointer callback_data, GSourceCallbackFuncs * callback_funcs);
    void (*ptr_g_source_add_poll)(GSource * source, GPollFD * fd);
    void (*ptr_g_source_remove_poll)(GSource * source, GPollFD * fd);
    void (*ptr_g_source_add_child_source)(GSource * source, GSource * child_source);
    void (*ptr_g_source_remove_child_source)(GSource * source, GSource * child_source);
    void (*ptr_g_source_get_current_time)(GSource * source, GTimeVal * timeval);
    gint64 (*ptr_g_source_get_time)(GSource * source);
    GSource * (*ptr_g_idle_source_new)(void);
    GSource * (*ptr_g_child_watch_source_new)(GPid pid);
    GSource * (*ptr_g_timeout_source_new)(guint interval);
    GSource * (*ptr_g_timeout_source_new_seconds)(guint interval);
    void (*ptr_g_get_current_time)(GTimeVal * result);
    gint64 (*ptr_g_get_monotonic_time)(void);
    gint64 (*ptr_g_get_real_time)(void);
    gboolean (*ptr_g_source_remove)(guint tag);
    gboolean (*ptr_g_source_remove_by_user_data)(gpointer user_data);
    gboolean (*ptr_g_source_remove_by_funcs_user_data)(GSourceFuncs * funcs, gpointer user_data);
    void (*ptr_g_clear_handle_id)(guint * tag_ptr, GClearHandleFunc clear_func);
    guint (*ptr_g_timeout_add_full)(gint priority, guint interval, GSourceFunc function, gpointer data, GDestroyNotify notify);
    guint (*ptr_g_timeout_add)(guint interval, GSourceFunc function, gpointer data);
    guint (*ptr_g_timeout_add_once)(guint interval, GSourceOnceFunc function, gpointer data);
    guint (*ptr_g_timeout_add_seconds_full)(gint priority, guint interval, GSourceFunc function, gpointer data, GDestroyNotify notify);
    guint (*ptr_g_timeout_add_seconds)(guint interval, GSourceFunc function, gpointer data);
    guint (*ptr_g_timeout_add_seconds_once)(guint interval, GSourceOnceFunc function, gpointer data);
    guint (*ptr_g_child_watch_add_full)(gint priority, GPid pid, GChildWatchFunc function, gpointer data, GDestroyNotify notify);
    guint (*ptr_g_child_watch_add)(GPid pid, GChildWatchFunc function, gpointer data);
    guint (*ptr_g_idle_add)(GSourceFunc function, gpointer data);
    guint (*ptr_g_idle_add_full)(gint priority, GSourceFunc function, gpointer data, GDestroyNotify notify);
    guint (*ptr_g_idle_add_once)(GSourceOnceFunc function, gpointer data);
    gboolean (*ptr_g_idle_remove_by_data)(gpointer data);
    void (*ptr_g_main_context_invoke_full)(GMainContext * context, gint priority, GSourceFunc function, gpointer data, GDestroyNotify notify);
    void (*ptr_g_main_context_invoke)(GMainContext * context, GSourceFunc function, gpointer data);
    guint32 (*ptr_g_unicode_script_to_iso15924)(GUnicodeScript script);
    GUnicodeScript (*ptr_g_unicode_script_from_iso15924)(guint32 iso15924);
    gboolean (*ptr_g_unichar_isalnum)(gunichar c);
    gboolean (*ptr_g_unichar_isalpha)(gunichar c);
    gboolean (*ptr_g_unichar_iscntrl)(gunichar c);
    gboolean (*ptr_g_unichar_isdigit)(gunichar c);
    gboolean (*ptr_g_unichar_isgraph)(gunichar c);
    gboolean (*ptr_g_unichar_islower)(gunichar c);
    gboolean (*ptr_g_unichar_isprint)(gunichar c);
    gboolean (*ptr_g_unichar_ispunct)(gunichar c);
    gboolean (*ptr_g_unichar_isspace)(gunichar c);
    gboolean (*ptr_g_unichar_isupper)(gunichar c);
    gboolean (*ptr_g_unichar_isxdigit)(gunichar c);
    gboolean (*ptr_g_unichar_istitle)(gunichar c);
    gboolean (*ptr_g_unichar_isdefined)(gunichar c);
    gboolean (*ptr_g_unichar_iswide)(gunichar c);
    gboolean (*ptr_g_unichar_iswide_cjk)(gunichar c);
    gboolean (*ptr_g_unichar_iszerowidth)(gunichar c);
    gboolean (*ptr_g_unichar_ismark)(gunichar c);
    gunichar (*ptr_g_unichar_toupper)(gunichar c);
    gunichar (*ptr_g_unichar_tolower)(gunichar c);
    gunichar (*ptr_g_unichar_totitle)(gunichar c);
    gint (*ptr_g_unichar_digit_value)(gunichar c);
    gint (*ptr_g_unichar_xdigit_value)(gunichar c);
    GUnicodeType (*ptr_g_unichar_type)(gunichar c);
    GUnicodeBreakType (*ptr_g_unichar_break_type)(gunichar c);
    gint (*ptr_g_unichar_combining_class)(gunichar uc);
    gboolean (*ptr_g_unichar_get_mirror_char)(gunichar ch, gunichar * mirrored_ch);
    GUnicodeScript (*ptr_g_unichar_get_script)(gunichar ch);
    gboolean (*ptr_g_unichar_validate)(gunichar ch);
    gboolean (*ptr_g_unichar_compose)(gunichar a, gunichar b, gunichar * ch);
    gboolean (*ptr_g_unichar_decompose)(gunichar ch, gunichar * a, gunichar * b);
    gsize (*ptr_g_unichar_fully_decompose)(gunichar ch, gboolean compat, gunichar * result, gsize result_len);
    void (*ptr_g_unicode_canonical_ordering)(gunichar * string, gsize len);
    gunichar * (*ptr_g_unicode_canonical_decomposition)(gunichar ch, gsize * result_len);
    gunichar (*ptr_g_utf8_get_char)(const gchar * p);
    gunichar (*ptr_g_utf8_get_char_validated)(const gchar * p, gssize max_len);
    gchar * (*ptr_g_utf8_offset_to_pointer)(const gchar * str, glong offset);
    glong (*ptr_g_utf8_pointer_to_offset)(const gchar * str, const gchar * pos);
    gchar * (*ptr_g_utf8_prev_char)(const gchar * p);
    gchar * (*ptr_g_utf8_find_next_char)(const gchar * p, const gchar * end);
    gchar * (*ptr_g_utf8_find_prev_char)(const gchar * str, const gchar * p);
    glong (*ptr_g_utf8_strlen)(const gchar * p, gssize max);
    gchar * (*ptr_g_utf8_substring)(const gchar * str, glong start_pos, glong end_pos);
    gchar * (*ptr_g_utf8_strncpy)(gchar * dest, const gchar * src, gsize n);
    gchar * (*ptr_g_utf8_truncate_middle)(const gchar * string, gsize truncate_length);
    gchar * (*ptr_g_utf8_strchr)(const gchar * p, gssize len, gunichar c);
    gchar * (*ptr_g_utf8_strrchr)(const gchar * p, gssize len, gunichar c);
    gchar * (*ptr_g_utf8_strreverse)(const gchar * str, gssize len);
    gunichar2 * (*ptr_g_utf8_to_utf16)(const gchar * str, glong len, glong * items_read, glong * items_written, GError * * error);
    gunichar * (*ptr_g_utf8_to_ucs4)(const gchar * str, glong len, glong * items_read, glong * items_written, GError * * error);
    gunichar * (*ptr_g_utf8_to_ucs4_fast)(const gchar * str, glong len, glong * items_written);
    gunichar * (*ptr_g_utf16_to_ucs4)(const gunichar2 * str, glong len, glong * items_read, glong * items_written, GError * * error);
    gchar * (*ptr_g_utf16_to_utf8)(const gunichar2 * str, glong len, glong * items_read, glong * items_written, GError * * error);
    gunichar2 * (*ptr_g_ucs4_to_utf16)(const gunichar * str, glong len, glong * items_read, glong * items_written, GError * * error);
    gchar * (*ptr_g_ucs4_to_utf8)(const gunichar * str, glong len, glong * items_read, glong * items_written, GError * * error);
    gint (*ptr_g_unichar_to_utf8)(gunichar c, gchar * outbuf);
    gboolean (*ptr_g_utf8_validate)(const gchar * str, gssize max_len, const gchar * * end);
    gboolean (*ptr_g_utf8_validate_len)(const gchar * str, gsize max_len, const gchar * * end);
    gchar * (*ptr_g_utf8_strup)(const gchar * str, gssize len);
    gchar * (*ptr_g_utf8_strdown)(const gchar * str, gssize len);
    gchar * (*ptr_g_utf8_casefold)(const gchar * str, gssize len);
    gchar * (*ptr_g_utf8_normalize)(const gchar * str, gssize len, GNormalizeMode mode);
    gint (*ptr_g_utf8_collate)(const gchar * str1, const gchar * str2);
    gchar * (*ptr_g_utf8_collate_key)(const gchar * str, gssize len);
    gchar * (*ptr_g_utf8_collate_key_for_filename)(const gchar * str, gssize len);
    gchar * (*ptr_g_utf8_make_valid)(const gchar * str, gssize len);
    gchar (*ptr_g_ascii_tolower)(gchar c);
    gchar (*ptr_g_ascii_toupper)(gchar c);
    gint (*ptr_g_ascii_digit_value)(gchar c);
    gint (*ptr_g_ascii_xdigit_value)(gchar c);
    gchar * (*ptr_g_strdelimit)(gchar * string, const gchar * delimiters, gchar new_delimiter);
    gchar * (*ptr_g_strcanon)(gchar * string, const gchar * valid_chars, gchar substitutor);
    const gchar * (*ptr_g_strerror)(gint errnum);
    const gchar * (*ptr_g_strsignal)(gint signum);
    gchar * (*ptr_g_strreverse)(gchar * string);
    gsize (*ptr_g_strlcpy)(gchar * dest, const gchar * src, gsize dest_size);
    gsize (*ptr_g_strlcat)(gchar * dest, const gchar * src, gsize dest_size);
    gchar * (*ptr_g_strstr_len)(const gchar * haystack, gssize haystack_len, const gchar * needle);
    gchar * (*ptr_g_strrstr)(const gchar * haystack, const gchar * needle);
    gchar * (*ptr_g_strrstr_len)(const gchar * haystack, gssize haystack_len, const gchar * needle);
    gboolean (*ptr_g_str_has_suffix)(const gchar * str, const gchar * suffix);
    gboolean (*ptr_g_str_has_prefix)(const gchar * str, const gchar * prefix);
    gdouble (*ptr_g_strtod)(const gchar * nptr, gchar * * endptr);
    gdouble (*ptr_g_ascii_strtod)(const gchar * nptr, gchar * * endptr);
    guint64 (*ptr_g_ascii_strtoull)(const gchar * nptr, gchar * * endptr, guint base);
    gint64 (*ptr_g_ascii_strtoll)(const gchar * nptr, gchar * * endptr, guint base);
    gchar * (*ptr_g_ascii_dtostr)(gchar * buffer, gint buf_len, gdouble d);
    gchar * (*ptr_g_ascii_formatd)(gchar * buffer, gint buf_len, const gchar * format, gdouble d);
    gchar * (*ptr_g_strchug)(gchar * string);
    gchar * (*ptr_g_strchomp)(gchar * string);
    gint (*ptr_g_ascii_strcasecmp)(const gchar * s1, const gchar * s2);
    gint (*ptr_g_ascii_strncasecmp)(const gchar * s1, const gchar * s2, gsize n);
    gchar * (*ptr_g_ascii_strdown)(const gchar * str, gssize len);
    gchar * (*ptr_g_ascii_strup)(const gchar * str, gssize len);
    gboolean (*ptr_g_str_is_ascii)(const gchar * str);
    gint (*ptr_g_strcasecmp)(const gchar * s1, const gchar * s2);
    gint (*ptr_g_strncasecmp)(const gchar * s1, const gchar * s2, guint n);
    gchar * (*ptr_g_strdown)(gchar * string);
    gchar * (*ptr_g_strup)(gchar * string);
    gchar * (*ptr_g_strdup)(const gchar * str);
    gchar * (*ptr_g_strdup_printf)(const gchar * format, ...);
    gchar * (*ptr_g_strdup_vprintf)(const gchar * format, va_list args);
    gchar * (*ptr_g_strndup)(const gchar * str, gsize n);
    gchar * (*ptr_g_strnfill)(gsize length, gchar fill_char);
    gchar * (*ptr_g_strcompress)(const gchar * source);
    gchar * (*ptr_g_strescape)(const gchar * source, const gchar * exceptions);
    gpointer (*ptr_g_memdup)(gconstpointer mem, guint byte_size);
    gpointer (*ptr_g_memdup2)(gconstpointer mem, gsize byte_size);
    gchar * * (*ptr_g_strsplit)(const gchar * string, const gchar * delimiter, gint max_tokens);
    gchar * * (*ptr_g_strsplit_set)(const gchar * string, const gchar * delimiters, gint max_tokens);
    gchar * (*ptr_g_strjoinv)(const gchar * separator, gchar * * str_array);
    void (*ptr_g_strfreev)(gchar * * str_array);
    gchar * * (*ptr_g_strdupv)(gchar * * str_array);
    guint (*ptr_g_strv_length)(gchar * * str_array);
    gchar * (*ptr_g_stpcpy)(gchar * dest, const char * src);
    gchar * (*ptr_g_str_to_ascii)(const gchar * str, const gchar * from_locale);
    gchar * * (*ptr_g_str_tokenize_and_fold)(const gchar * string, const gchar * translit_locale, gchar * * * ascii_alternates);
    gboolean (*ptr_g_str_match_string)(const gchar * search_term, const gchar * potential_hit, gboolean accept_alternates);
    gboolean (*ptr_g_strv_contains)(const gchar * const * strv, const gchar * str);
    gboolean (*ptr_g_strv_equal)(const gchar * const * strv1, const gchar * const * strv2);
    GQuark (*ptr_g_number_parser_error_quark)(void);
    gboolean (*ptr_g_ascii_string_to_signed)(const gchar * str, guint base, gint64 min, gint64 max, gint64 * out_num, GError * * error);
    gboolean (*ptr_g_ascii_string_to_unsigned)(const gchar * str, guint base, guint64 min, guint64 max, guint64 * out_num, GError * * error);
    GString * (*ptr_g_string_new)(const gchar * init);
    GString * (*ptr_g_string_new_take)(gchar * init);
    GString * (*ptr_g_string_new_len)(const gchar * init, gssize len);
    GString * (*ptr_g_string_sized_new)(gsize dfl_size);
    gchar * (*ptr_g_string_free)(GString * string, gboolean free_segment);
    gchar * (*ptr_g_string_free_and_steal)(GString * string);
    GBytes * (*ptr_g_string_free_to_bytes)(GString * string);
    gboolean (*ptr_g_string_equal)(const GString * v, const GString * v2);
    guint (*ptr_g_string_hash)(const GString * str);
    GString * (*ptr_g_string_assign)(GString * string, const gchar * rval);
    GString * (*ptr_g_string_truncate)(GString * string, gsize len);
    GString * (*ptr_g_string_set_size)(GString * string, gsize len);
    GString * (*ptr_g_string_insert_len)(GString * string, gssize pos, const gchar * val, gssize len);
    GString * (*ptr_g_string_append)(GString * string, const gchar * val);
    GString * (*ptr_g_string_append_len)(GString * string, const gchar * val, gssize len);
    GString * (*ptr_g_string_append_c)(GString * string, gchar c);
    GString * (*ptr_g_string_append_unichar)(GString * string, gunichar wc);
    GString * (*ptr_g_string_prepend)(GString * string, const gchar * val);
    GString * (*ptr_g_string_prepend_c)(GString * string, gchar c);
    GString * (*ptr_g_string_prepend_unichar)(GString * string, gunichar wc);
    GString * (*ptr_g_string_prepend_len)(GString * string, const gchar * val, gssize len);
    GString * (*ptr_g_string_insert)(GString * string, gssize pos, const gchar * val);
    GString * (*ptr_g_string_insert_c)(GString * string, gssize pos, gchar c);
    GString * (*ptr_g_string_insert_unichar)(GString * string, gssize pos, gunichar wc);
    GString * (*ptr_g_string_overwrite)(GString * string, gsize pos, const gchar * val);
    GString * (*ptr_g_string_overwrite_len)(GString * string, gsize pos, const gchar * val, gssize len);
    GString * (*ptr_g_string_erase)(GString * string, gssize pos, gssize len);
    guint (*ptr_g_string_replace)(GString * string, const gchar * find, const gchar * replace, guint limit);
    GString * (*ptr_g_string_ascii_down)(GString * string);
    GString * (*ptr_g_string_ascii_up)(GString * string);
    void (*ptr_g_string_vprintf)(GString * string, const gchar * format, va_list args);
    void (*ptr_g_string_printf)(GString * string, const gchar * format, ...);
    void (*ptr_g_string_append_vprintf)(GString * string, const gchar * format, va_list args);
    void (*ptr_g_string_append_printf)(GString * string, const gchar * format, ...);
    GString * (*ptr_g_string_append_uri_escaped)(GString * string, const gchar * unescaped, const gchar * reserved_chars_allowed, gboolean allow_utf8);
    GString * (*ptr_g_string_down)(GString * string);
    GString * (*ptr_g_string_up)(GString * string);
    void (*ptr_g_io_channel_init)(GIOChannel * channel);
    GIOChannel * (*ptr_g_io_channel_ref)(GIOChannel * channel);
    void (*ptr_g_io_channel_unref)(GIOChannel * channel);
    GIOError (*ptr_g_io_channel_read)(GIOChannel * channel, gchar * buf, gsize count, gsize * bytes_read);
    GIOError (*ptr_g_io_channel_write)(GIOChannel * channel, const gchar * buf, gsize count, gsize * bytes_written);
    GIOError (*ptr_g_io_channel_seek)(GIOChannel * channel, gint64 offset, GSeekType type);
    void (*ptr_g_io_channel_close)(GIOChannel * channel);
    GIOStatus (*ptr_g_io_channel_shutdown)(GIOChannel * channel, gboolean flush, GError * * err);
    guint (*ptr_g_io_add_watch_full)(GIOChannel * channel, gint priority, GIOCondition condition, GIOFunc func, gpointer user_data, GDestroyNotify notify);
    GSource * (*ptr_g_io_create_watch)(GIOChannel * channel, GIOCondition condition);
    guint (*ptr_g_io_add_watch)(GIOChannel * channel, GIOCondition condition, GIOFunc func, gpointer user_data);
    void (*ptr_g_io_channel_set_buffer_size)(GIOChannel * channel, gsize size);
    gsize (*ptr_g_io_channel_get_buffer_size)(GIOChannel * channel);
    GIOCondition (*ptr_g_io_channel_get_buffer_condition)(GIOChannel * channel);
    GIOStatus (*ptr_g_io_channel_set_flags)(GIOChannel * channel, GIOFlags flags, GError * * error);
    GIOFlags (*ptr_g_io_channel_get_flags)(GIOChannel * channel);
    void (*ptr_g_io_channel_set_line_term)(GIOChannel * channel, const gchar * line_term, gint length);
    const gchar * (*ptr_g_io_channel_get_line_term)(GIOChannel * channel, gint * length);
    void (*ptr_g_io_channel_set_buffered)(GIOChannel * channel, gboolean buffered);
    gboolean (*ptr_g_io_channel_get_buffered)(GIOChannel * channel);
    GIOStatus (*ptr_g_io_channel_set_encoding)(GIOChannel * channel, const gchar * encoding, GError * * error);
    const gchar * (*ptr_g_io_channel_get_encoding)(GIOChannel * channel);
    void (*ptr_g_io_channel_set_close_on_unref)(GIOChannel * channel, gboolean do_close);
    gboolean (*ptr_g_io_channel_get_close_on_unref)(GIOChannel * channel);
    GIOStatus (*ptr_g_io_channel_flush)(GIOChannel * channel, GError * * error);
    GIOStatus (*ptr_g_io_channel_read_line)(GIOChannel * channel, gchar * * str_return, gsize * length, gsize * terminator_pos, GError * * error);
    GIOStatus (*ptr_g_io_channel_read_line_string)(GIOChannel * channel, GString * buffer, gsize * terminator_pos, GError * * error);
    GIOStatus (*ptr_g_io_channel_read_to_end)(GIOChannel * channel, gchar * * str_return, gsize * length, GError * * error);
    GIOStatus (*ptr_g_io_channel_read_chars)(GIOChannel * channel, gchar * buf, gsize count, gsize * bytes_read, GError * * error);
    GIOStatus (*ptr_g_io_channel_read_unichar)(GIOChannel * channel, gunichar * thechar, GError * * error);
    GIOStatus (*ptr_g_io_channel_write_chars)(GIOChannel * channel, const gchar * buf, gssize count, gsize * bytes_written, GError * * error);
    GIOStatus (*ptr_g_io_channel_write_unichar)(GIOChannel * channel, gunichar thechar, GError * * error);
    GIOStatus (*ptr_g_io_channel_seek_position)(GIOChannel * channel, gint64 offset, GSeekType type, GError * * error);
    GIOChannel * (*ptr_g_io_channel_new_file)(const gchar * filename, const gchar * mode, GError * * error);
    GQuark (*ptr_g_io_channel_error_quark)(void);
    GIOChannelError (*ptr_g_io_channel_error_from_errno)(gint en);
    GIOChannel * (*ptr_g_io_channel_unix_new)(int fd);
    gint (*ptr_g_io_channel_unix_get_fd)(GIOChannel * channel);
    GQuark (*ptr_g_key_file_error_quark)(void);
    GKeyFile * (*ptr_g_key_file_new)(void);
    GKeyFile * (*ptr_g_key_file_ref)(GKeyFile * key_file);
    void (*ptr_g_key_file_unref)(GKeyFile * key_file);
    void (*ptr_g_key_file_free)(GKeyFile * key_file);
    void (*ptr_g_key_file_set_list_separator)(GKeyFile * key_file, gchar separator);
    gboolean (*ptr_g_key_file_load_from_file)(GKeyFile * key_file, const gchar * file, GKeyFileFlags flags, GError * * error);
    gboolean (*ptr_g_key_file_load_from_data)(GKeyFile * key_file, const gchar * data, gsize length, GKeyFileFlags flags, GError * * error);
    gboolean (*ptr_g_key_file_load_from_bytes)(GKeyFile * key_file, GBytes * bytes, GKeyFileFlags flags, GError * * error);
    gboolean (*ptr_g_key_file_load_from_dirs)(GKeyFile * key_file, const gchar * file, const gchar * * search_dirs, gchar * * full_path, GKeyFileFlags flags, GError * * error);
    gboolean (*ptr_g_key_file_load_from_data_dirs)(GKeyFile * key_file, const gchar * file, gchar * * full_path, GKeyFileFlags flags, GError * * error);
    gchar * (*ptr_g_key_file_to_data)(GKeyFile * key_file, gsize * length, GError * * error);
    gboolean (*ptr_g_key_file_save_to_file)(GKeyFile * key_file, const gchar * filename, GError * * error);
    gchar * (*ptr_g_key_file_get_start_group)(GKeyFile * key_file);
    gchar * * (*ptr_g_key_file_get_groups)(GKeyFile * key_file, gsize * length);
    gchar * * (*ptr_g_key_file_get_keys)(GKeyFile * key_file, const gchar * group_name, gsize * length, GError * * error);
    gboolean (*ptr_g_key_file_has_group)(GKeyFile * key_file, const gchar * group_name);
    gboolean (*ptr_g_key_file_has_key)(GKeyFile * key_file, const gchar * group_name, const gchar * key, GError * * error);
    gchar * (*ptr_g_key_file_get_value)(GKeyFile * key_file, const gchar * group_name, const gchar * key, GError * * error);
    void (*ptr_g_key_file_set_value)(GKeyFile * key_file, const gchar * group_name, const gchar * key, const gchar * value);
    gchar * (*ptr_g_key_file_get_string)(GKeyFile * key_file, const gchar * group_name, const gchar * key, GError * * error);
    void (*ptr_g_key_file_set_string)(GKeyFile * key_file, const gchar * group_name, const gchar * key, const gchar * string);
    gchar * (*ptr_g_key_file_get_locale_string)(GKeyFile * key_file, const gchar * group_name, const gchar * key, const gchar * locale, GError * * error);
    gchar * (*ptr_g_key_file_get_locale_for_key)(GKeyFile * key_file, const gchar * group_name, const gchar * key, const gchar * locale);
    void (*ptr_g_key_file_set_locale_string)(GKeyFile * key_file, const gchar * group_name, const gchar * key, const gchar * locale, const gchar * string);
    gboolean (*ptr_g_key_file_get_boolean)(GKeyFile * key_file, const gchar * group_name, const gchar * key, GError * * error);
    void (*ptr_g_key_file_set_boolean)(GKeyFile * key_file, const gchar * group_name, const gchar * key, gboolean value);
    gint (*ptr_g_key_file_get_integer)(GKeyFile * key_file, const gchar * group_name, const gchar * key, GError * * error);
    void (*ptr_g_key_file_set_integer)(GKeyFile * key_file, const gchar * group_name, const gchar * key, gint value);
    gint64 (*ptr_g_key_file_get_int64)(GKeyFile * key_file, const gchar * group_name, const gchar * key, GError * * error);
    void (*ptr_g_key_file_set_int64)(GKeyFile * key_file, const gchar * group_name, const gchar * key, gint64 value);
    guint64 (*ptr_g_key_file_get_uint64)(GKeyFile * key_file, const gchar * group_name, const gchar * key, GError * * error);
    void (*ptr_g_key_file_set_uint64)(GKeyFile * key_file, const gchar * group_name, const gchar * key, guint64 value);
    gdouble (*ptr_g_key_file_get_double)(GKeyFile * key_file, const gchar * group_name, const gchar * key, GError * * error);
    void (*ptr_g_key_file_set_double)(GKeyFile * key_file, const gchar * group_name, const gchar * key, gdouble value);
    gchar * * (*ptr_g_key_file_get_string_list)(GKeyFile * key_file, const gchar * group_name, const gchar * key, gsize * length, GError * * error);
    void (*ptr_g_key_file_set_string_list)(GKeyFile * key_file, const gchar * group_name, const gchar * key, const gchar * const list[], gsize length);
    gchar * * (*ptr_g_key_file_get_locale_string_list)(GKeyFile * key_file, const gchar * group_name, const gchar * key, const gchar * locale, gsize * length, GError * * error);
    void (*ptr_g_key_file_set_locale_string_list)(GKeyFile * key_file, const gchar * group_name, const gchar * key, const gchar * locale, const gchar * const list[], gsize length);
    gboolean * (*ptr_g_key_file_get_boolean_list)(GKeyFile * key_file, const gchar * group_name, const gchar * key, gsize * length, GError * * error);
    void (*ptr_g_key_file_set_boolean_list)(GKeyFile * key_file, const gchar * group_name, const gchar * key, gboolean list[], gsize length);
    gint * (*ptr_g_key_file_get_integer_list)(GKeyFile * key_file, const gchar * group_name, const gchar * key, gsize * length, GError * * error);
    void (*ptr_g_key_file_set_double_list)(GKeyFile * key_file, const gchar * group_name, const gchar * key, gdouble list[], gsize length);
    gdouble * (*ptr_g_key_file_get_double_list)(GKeyFile * key_file, const gchar * group_name, const gchar * key, gsize * length, GError * * error);
    void (*ptr_g_key_file_set_integer_list)(GKeyFile * key_file, const gchar * group_name, const gchar * key, gint list[], gsize length);
    gboolean (*ptr_g_key_file_set_comment)(GKeyFile * key_file, const gchar * group_name, const gchar * key, const gchar * comment, GError * * error);
    gchar * (*ptr_g_key_file_get_comment)(GKeyFile * key_file, const gchar * group_name, const gchar * key, GError * * error);
    gboolean (*ptr_g_key_file_remove_comment)(GKeyFile * key_file, const gchar * group_name, const gchar * key, GError * * error);
    gboolean (*ptr_g_key_file_remove_key)(GKeyFile * key_file, const gchar * group_name, const gchar * key, GError * * error);
    gboolean (*ptr_g_key_file_remove_group)(GKeyFile * key_file, const gchar * group_name, GError * * error);
    GMappedFile * (*ptr_g_mapped_file_new)(const gchar * filename, gboolean writable, GError * * error);
    GMappedFile * (*ptr_g_mapped_file_new_from_fd)(gint fd, gboolean writable, GError * * error);
    gsize (*ptr_g_mapped_file_get_length)(GMappedFile * file);
    gchar * (*ptr_g_mapped_file_get_contents)(GMappedFile * file);
    GBytes * (*ptr_g_mapped_file_get_bytes)(GMappedFile * file);
    GMappedFile * (*ptr_g_mapped_file_ref)(GMappedFile * file);
    void (*ptr_g_mapped_file_unref)(GMappedFile * file);
    void (*ptr_g_mapped_file_free)(GMappedFile * file);
    GQuark (*ptr_g_markup_error_quark)(void);
    GMarkupParseContext * (*ptr_g_markup_parse_context_new)(const GMarkupParser * parser, GMarkupParseFlags flags, gpointer user_data, GDestroyNotify user_data_dnotify);
    GMarkupParseContext * (*ptr_g_markup_parse_context_ref)(GMarkupParseContext * context);
    void (*ptr_g_markup_parse_context_unref)(GMarkupParseContext * context);
    void (*ptr_g_markup_parse_context_free)(GMarkupParseContext * context);
    gboolean (*ptr_g_markup_parse_context_parse)(GMarkupParseContext * context, const gchar * text, gssize text_len, GError * * error);
    void (*ptr_g_markup_parse_context_push)(GMarkupParseContext * context, const GMarkupParser * parser, gpointer user_data);
    gpointer (*ptr_g_markup_parse_context_pop)(GMarkupParseContext * context);
    gboolean (*ptr_g_markup_parse_context_end_parse)(GMarkupParseContext * context, GError * * error);
    const gchar * (*ptr_g_markup_parse_context_get_element)(GMarkupParseContext * context);
    const GSList * (*ptr_g_markup_parse_context_get_element_stack)(GMarkupParseContext * context);
    void (*ptr_g_markup_parse_context_get_position)(GMarkupParseContext * context, gint * line_number, gint * char_number);
    gpointer (*ptr_g_markup_parse_context_get_user_data)(GMarkupParseContext * context);
    gchar * (*ptr_g_markup_escape_text)(const gchar * text, gssize length);
    gchar * (*ptr_g_markup_printf_escaped)(const char * format, ...);
    gchar * (*ptr_g_markup_vprintf_escaped)(const char * format, va_list args);
    gboolean (*ptr_g_variant_type_string_is_valid)(const gchar * type_string);
    gboolean (*ptr_g_variant_type_string_scan)(const gchar * string, const gchar * limit, const gchar * * endptr);
    void (*ptr_g_variant_type_free)(GVariantType * type);
    GVariantType * (*ptr_g_variant_type_copy)(const GVariantType * type);
    GVariantType * (*ptr_g_variant_type_new)(const gchar * type_string);
    gsize (*ptr_g_variant_type_get_string_length)(const GVariantType * type);
    const gchar * (*ptr_g_variant_type_peek_string)(const GVariantType * type);
    gchar * (*ptr_g_variant_type_dup_string)(const GVariantType * type);
    gboolean (*ptr_g_variant_type_is_definite)(const GVariantType * type);
    gboolean (*ptr_g_variant_type_is_container)(const GVariantType * type);
    gboolean (*ptr_g_variant_type_is_basic)(const GVariantType * type);
    gboolean (*ptr_g_variant_type_is_maybe)(const GVariantType * type);
    gboolean (*ptr_g_variant_type_is_array)(const GVariantType * type);
    gboolean (*ptr_g_variant_type_is_tuple)(const GVariantType * type);
    gboolean (*ptr_g_variant_type_is_dict_entry)(const GVariantType * type);
    gboolean (*ptr_g_variant_type_is_variant)(const GVariantType * type);
    guint (*ptr_g_variant_type_hash)(gconstpointer type);
    gboolean (*ptr_g_variant_type_equal)(gconstpointer type1, gconstpointer type2);
    gboolean (*ptr_g_variant_type_is_subtype_of)(const GVariantType * type, const GVariantType * supertype);
    const GVariantType * (*ptr_g_variant_type_element)(const GVariantType * type);
    const GVariantType * (*ptr_g_variant_type_first)(const GVariantType * type);
    const GVariantType * (*ptr_g_variant_type_next)(const GVariantType * type);
    gsize (*ptr_g_variant_type_n_items)(const GVariantType * type);
    const GVariantType * (*ptr_g_variant_type_key)(const GVariantType * type);
    const GVariantType * (*ptr_g_variant_type_value)(const GVariantType * type);
    GVariantType * (*ptr_g_variant_type_new_array)(const GVariantType * element);
    GVariantType * (*ptr_g_variant_type_new_maybe)(const GVariantType * element);
    GVariantType * (*ptr_g_variant_type_new_tuple)(const GVariantType * const * items, gint length);
    GVariantType * (*ptr_g_variant_type_new_dict_entry)(const GVariantType * key, const GVariantType * value);
    const GVariantType * (*ptr_g_variant_type_checked_)(const gchar * type_string);
    gsize (*ptr_g_variant_type_string_get_depth_)(const gchar * type_string);
    void (*ptr_g_variant_unref)(GVariant * value);
    GVariant * (*ptr_g_variant_ref)(GVariant * value);
    GVariant * (*ptr_g_variant_ref_sink)(GVariant * value);
    gboolean (*ptr_g_variant_is_floating)(GVariant * value);
    GVariant * (*ptr_g_variant_take_ref)(GVariant * value);
    const GVariantType * (*ptr_g_variant_get_type)(GVariant * value);
    const gchar * (*ptr_g_variant_get_type_string)(GVariant * value);
    gboolean (*ptr_g_variant_is_of_type)(GVariant * value, const GVariantType * type);
    gboolean (*ptr_g_variant_is_container)(GVariant * value);
    GVariantClass (*ptr_g_variant_classify)(GVariant * value);
    GVariant * (*ptr_g_variant_new_boolean)(gboolean value);
    GVariant * (*ptr_g_variant_new_byte)(guint8 value);
    GVariant * (*ptr_g_variant_new_int16)(gint16 value);
    GVariant * (*ptr_g_variant_new_uint16)(guint16 value);
    GVariant * (*ptr_g_variant_new_int32)(gint32 value);
    GVariant * (*ptr_g_variant_new_uint32)(guint32 value);
    GVariant * (*ptr_g_variant_new_int64)(gint64 value);
    GVariant * (*ptr_g_variant_new_uint64)(guint64 value);
    GVariant * (*ptr_g_variant_new_handle)(gint32 value);
    GVariant * (*ptr_g_variant_new_double)(gdouble value);
    GVariant * (*ptr_g_variant_new_string)(const gchar * string);
    GVariant * (*ptr_g_variant_new_take_string)(gchar * string);
    GVariant * (*ptr_g_variant_new_object_path)(const gchar * object_path);
    gboolean (*ptr_g_variant_is_object_path)(const gchar * string);
    GVariant * (*ptr_g_variant_new_signature)(const gchar * signature);
    gboolean (*ptr_g_variant_is_signature)(const gchar * string);
    GVariant * (*ptr_g_variant_new_variant)(GVariant * value);
    GVariant * (*ptr_g_variant_new_strv)(const gchar * const * strv, gssize length);
    GVariant * (*ptr_g_variant_new_objv)(const gchar * const * strv, gssize length);
    GVariant * (*ptr_g_variant_new_bytestring)(const gchar * string);
    GVariant * (*ptr_g_variant_new_bytestring_array)(const gchar * const * strv, gssize length);
    GVariant * (*ptr_g_variant_new_fixed_array)(const GVariantType * element_type, gconstpointer elements, gsize n_elements, gsize element_size);
    gboolean (*ptr_g_variant_get_boolean)(GVariant * value);
    guint8 (*ptr_g_variant_get_byte)(GVariant * value);
    gint16 (*ptr_g_variant_get_int16)(GVariant * value);
    guint16 (*ptr_g_variant_get_uint16)(GVariant * value);
    gint32 (*ptr_g_variant_get_int32)(GVariant * value);
    guint32 (*ptr_g_variant_get_uint32)(GVariant * value);
    gint64 (*ptr_g_variant_get_int64)(GVariant * value);
    guint64 (*ptr_g_variant_get_uint64)(GVariant * value);
    gint32 (*ptr_g_variant_get_handle)(GVariant * value);
    gdouble (*ptr_g_variant_get_double)(GVariant * value);
    GVariant * (*ptr_g_variant_get_variant)(GVariant * value);
    const gchar * (*ptr_g_variant_get_string)(GVariant * value, gsize * length);
    gchar * (*ptr_g_variant_dup_string)(GVariant * value, gsize * length);
    const gchar * * (*ptr_g_variant_get_strv)(GVariant * value, gsize * length);
    gchar * * (*ptr_g_variant_dup_strv)(GVariant * value, gsize * length);
    const gchar * * (*ptr_g_variant_get_objv)(GVariant * value, gsize * length);
    gchar * * (*ptr_g_variant_dup_objv)(GVariant * value, gsize * length);
    const gchar * (*ptr_g_variant_get_bytestring)(GVariant * value);
    gchar * (*ptr_g_variant_dup_bytestring)(GVariant * value, gsize * length);
    const gchar * * (*ptr_g_variant_get_bytestring_array)(GVariant * value, gsize * length);
    gchar * * (*ptr_g_variant_dup_bytestring_array)(GVariant * value, gsize * length);
    GVariant * (*ptr_g_variant_new_maybe)(const GVariantType * child_type, GVariant * child);
    GVariant * (*ptr_g_variant_new_array)(const GVariantType * child_type, GVariant * const * children, gsize n_children);
    GVariant * (*ptr_g_variant_new_tuple)(GVariant * const * children, gsize n_children);
    GVariant * (*ptr_g_variant_new_dict_entry)(GVariant * key, GVariant * value);
    GVariant * (*ptr_g_variant_get_maybe)(GVariant * value);
    gsize (*ptr_g_variant_n_children)(GVariant * value);
    GVariant * (*ptr_g_variant_get_child_value)(GVariant * value, gsize index_);
    GVariant * (*ptr_g_variant_lookup_value)(GVariant * dictionary, const gchar * key, const GVariantType * expected_type);
    gconstpointer (*ptr_g_variant_get_fixed_array)(GVariant * value, gsize * n_elements, gsize element_size);
    gsize (*ptr_g_variant_get_size)(GVariant * value);
    gconstpointer (*ptr_g_variant_get_data)(GVariant * value);
    GBytes * (*ptr_g_variant_get_data_as_bytes)(GVariant * value);
    void (*ptr_g_variant_store)(GVariant * value, gpointer data);
    gchar * (*ptr_g_variant_print)(GVariant * value, gboolean type_annotate);
    GString * (*ptr_g_variant_print_string)(GVariant * value, GString * string, gboolean type_annotate);
    guint (*ptr_g_variant_hash)(gconstpointer value);
    gboolean (*ptr_g_variant_equal)(gconstpointer one, gconstpointer two);
    GVariant * (*ptr_g_variant_get_normal_form)(GVariant * value);
    gboolean (*ptr_g_variant_is_normal_form)(GVariant * value);
    GVariant * (*ptr_g_variant_byteswap)(GVariant * value);
    GVariant * (*ptr_g_variant_new_from_bytes)(const GVariantType * type, GBytes * bytes, gboolean trusted);
    GVariant * (*ptr_g_variant_new_from_data)(const GVariantType * type, gconstpointer data, gsize size, gboolean trusted, GDestroyNotify notify, gpointer user_data);
    GVariantIter * (*ptr_g_variant_iter_new)(GVariant * value);
    gsize (*ptr_g_variant_iter_init)(GVariantIter * iter, GVariant * value);
    GVariantIter * (*ptr_g_variant_iter_copy)(GVariantIter * iter);
    gsize (*ptr_g_variant_iter_n_children)(GVariantIter * iter);
    void (*ptr_g_variant_iter_free)(GVariantIter * iter);
    GVariant * (*ptr_g_variant_iter_next_value)(GVariantIter * iter);
    GQuark (*ptr_g_variant_parser_get_error_quark)(void);
    GQuark (*ptr_g_variant_parse_error_quark)(void);
    GVariantBuilder * (*ptr_g_variant_builder_new)(const GVariantType * type);
    void (*ptr_g_variant_builder_unref)(GVariantBuilder * builder);
    GVariantBuilder * (*ptr_g_variant_builder_ref)(GVariantBuilder * builder);
    void (*ptr_g_variant_builder_init)(GVariantBuilder * builder, const GVariantType * type);
    GVariant * (*ptr_g_variant_builder_end)(GVariantBuilder * builder);
    void (*ptr_g_variant_builder_clear)(GVariantBuilder * builder);
    void (*ptr_g_variant_builder_open)(GVariantBuilder * builder, const GVariantType * type);
    void (*ptr_g_variant_builder_close)(GVariantBuilder * builder);
    void (*ptr_g_variant_builder_add_value)(GVariantBuilder * builder, GVariant * value);
    GVariant * (*ptr_g_variant_new_va)(const gchar * format_string, const gchar * * endptr, va_list * app);
    void (*ptr_g_variant_get_va)(GVariant * value, const gchar * format_string, const gchar * * endptr, va_list * app);
    gboolean (*ptr_g_variant_check_format_string)(GVariant * value, const gchar * format_string, gboolean copy_only);
    GVariant * (*ptr_g_variant_parse)(const GVariantType * type, const gchar * text, const gchar * limit, const gchar * * endptr, GError * * error);
    GVariant * (*ptr_g_variant_new_parsed)(const gchar * format, ...);
    GVariant * (*ptr_g_variant_new_parsed_va)(const gchar * format, va_list * app);
    gchar * (*ptr_g_variant_parse_error_print_context)(GError * error, const gchar * source_str);
    gint (*ptr_g_variant_compare)(gconstpointer one, gconstpointer two);
    GVariantDict * (*ptr_g_variant_dict_new)(GVariant * from_asv);
    void (*ptr_g_variant_dict_init)(GVariantDict * dict, GVariant * from_asv);
    GVariant * (*ptr_g_variant_dict_lookup_value)(GVariantDict * dict, const gchar * key, const GVariantType * expected_type);
    gboolean (*ptr_g_variant_dict_contains)(GVariantDict * dict, const gchar * key);
    void (*ptr_g_variant_dict_insert_value)(GVariantDict * dict, const gchar * key, GVariant * value);
    gboolean (*ptr_g_variant_dict_remove)(GVariantDict * dict, const gchar * key);
    void (*ptr_g_variant_dict_clear)(GVariantDict * dict);
    GVariant * (*ptr_g_variant_dict_end)(GVariantDict * dict);
    GVariantDict * (*ptr_g_variant_dict_ref)(GVariantDict * dict);
    void (*ptr_g_variant_dict_unref)(GVariantDict * dict);
    gsize (*ptr_g_printf_string_upper_bound)(const gchar * format, va_list args);
    guint (*ptr_g_log_set_handler)(const gchar * log_domain, GLogLevelFlags log_levels, GLogFunc log_func, gpointer user_data);
    guint (*ptr_g_log_set_handler_full)(const gchar * log_domain, GLogLevelFlags log_levels, GLogFunc log_func, gpointer user_data, GDestroyNotify destroy);
    void (*ptr_g_log_remove_handler)(const gchar * log_domain, guint handler_id);
    void (*ptr_g_log_default_handler)(const gchar * log_domain, GLogLevelFlags log_level, const gchar * message, gpointer unused_data);
    GLogFunc (*ptr_g_log_set_default_handler)(GLogFunc log_func, gpointer user_data);
    void (*ptr_g_log)(const gchar * log_domain, GLogLevelFlags log_level, const gchar * format, ...);
    void (*ptr_g_logv)(const gchar * log_domain, GLogLevelFlags log_level, const gchar * format, va_list args);
    GLogLevelFlags (*ptr_g_log_set_fatal_mask)(const gchar * log_domain, GLogLevelFlags fatal_mask);
    GLogLevelFlags (*ptr_g_log_set_always_fatal)(GLogLevelFlags fatal_mask);
    void (*ptr_g_log_structured_array)(GLogLevelFlags log_level, const GLogField * fields, gsize n_fields);
    void (*ptr_g_log_variant)(const gchar * log_domain, GLogLevelFlags log_level, GVariant * fields);
    void (*ptr_g_log_set_writer_func)(GLogWriterFunc func, gpointer user_data, GDestroyNotify user_data_free);
    gboolean (*ptr_g_log_writer_supports_color)(gint output_fd);
    gboolean (*ptr_g_log_writer_is_journald)(gint output_fd);
    gchar * (*ptr_g_log_writer_format_fields)(GLogLevelFlags log_level, const GLogField * fields, gsize n_fields, gboolean use_color);
    GLogWriterOutput (*ptr_g_log_writer_syslog)(GLogLevelFlags log_level, const GLogField * fields, gsize n_fields, gpointer user_data);
    GLogWriterOutput (*ptr_g_log_writer_journald)(GLogLevelFlags log_level, const GLogField * fields, gsize n_fields, gpointer user_data);
    GLogWriterOutput (*ptr_g_log_writer_standard_streams)(GLogLevelFlags log_level, const GLogField * fields, gsize n_fields, gpointer user_data);
    GLogWriterOutput (*ptr_g_log_writer_default)(GLogLevelFlags log_level, const GLogField * fields, gsize n_fields, gpointer user_data);
    void (*ptr_g_log_writer_default_set_use_stderr)(gboolean use_stderr);
    gboolean (*ptr_g_log_writer_default_would_drop)(GLogLevelFlags log_level, const char * log_domain);
    void (*ptr_g_log_writer_default_set_debug_domains)(const gchar * const * domains);
    gboolean (*ptr_g_log_get_debug_enabled)(void);
    void (*ptr_g_log_set_debug_enabled)(gboolean enabled);
    void (*ptr__g_log_fallback_handler)(const gchar * log_domain, GLogLevelFlags log_level, const gchar * message, gpointer unused_data);
    void (*ptr_g_return_if_fail_warning)(const char * log_domain, const char * pretty_function, const char * expression);
    void (*ptr_g_warn_message)(const char * domain, const char * file, int line, const char * func, const char * warnexpr);
    void (*ptr_g_assert_warning)(const char * log_domain, const char * file, const int line, const char * pretty_function, const char * expression);
    void (*ptr_g_print)(const gchar * format, ...);
    GPrintFunc (*ptr_g_set_print_handler)(GPrintFunc func);
    GPrintFunc (*ptr_g_set_printerr_handler)(GPrintFunc func);
    GQuark (*ptr_g_option_error_quark)(void);
    GOptionContext * (*ptr_g_option_context_new)(const gchar * parameter_string);
    void (*ptr_g_option_context_set_summary)(GOptionContext * context, const gchar * summary);
    const gchar * (*ptr_g_option_context_get_summary)(GOptionContext * context);
    void (*ptr_g_option_context_set_description)(GOptionContext * context, const gchar * description);
    const gchar * (*ptr_g_option_context_get_description)(GOptionContext * context);
    void (*ptr_g_option_context_free)(GOptionContext * context);
    void (*ptr_g_option_context_set_help_enabled)(GOptionContext * context, gboolean help_enabled);
    gboolean (*ptr_g_option_context_get_help_enabled)(GOptionContext * context);
    void (*ptr_g_option_context_set_ignore_unknown_options)(GOptionContext * context, gboolean ignore_unknown);
    gboolean (*ptr_g_option_context_get_ignore_unknown_options)(GOptionContext * context);
    void (*ptr_g_option_context_set_strict_posix)(GOptionContext * context, gboolean strict_posix);
    gboolean (*ptr_g_option_context_get_strict_posix)(GOptionContext * context);
    void (*ptr_g_option_context_add_main_entries)(GOptionContext * context, const GOptionEntry * entries, const gchar * translation_domain);
    gboolean (*ptr_g_option_context_parse)(GOptionContext * context, gint * argc, gchar * * * argv, GError * * error);
    gboolean (*ptr_g_option_context_parse_strv)(GOptionContext * context, gchar * * * arguments, GError * * error);
    void (*ptr_g_option_context_set_translate_func)(GOptionContext * context, GTranslateFunc func, gpointer data, GDestroyNotify destroy_notify);
    void (*ptr_g_option_context_set_translation_domain)(GOptionContext * context, const gchar * domain);
    void (*ptr_g_option_context_add_group)(GOptionContext * context, GOptionGroup * group);
    void (*ptr_g_option_context_set_main_group)(GOptionContext * context, GOptionGroup * group);
    GOptionGroup * (*ptr_g_option_context_get_main_group)(GOptionContext * context);
    gchar * (*ptr_g_option_context_get_help)(GOptionContext * context, gboolean main_help, GOptionGroup * group);
    GOptionGroup * (*ptr_g_option_group_new)(const gchar * name, const gchar * description, const gchar * help_description, gpointer user_data, GDestroyNotify destroy);
    void (*ptr_g_option_group_set_parse_hooks)(GOptionGroup * group, GOptionParseFunc pre_parse_func, GOptionParseFunc post_parse_func);
    void (*ptr_g_option_group_set_error_hook)(GOptionGroup * group, GOptionErrorFunc error_func);
    void (*ptr_g_option_group_free)(GOptionGroup * group);
    GOptionGroup * (*ptr_g_option_group_ref)(GOptionGroup * group);
    void (*ptr_g_option_group_unref)(GOptionGroup * group);
    void (*ptr_g_option_group_add_entries)(GOptionGroup * group, const GOptionEntry * entries);
    void (*ptr_g_option_group_set_translate_func)(GOptionGroup * group, GTranslateFunc func, gpointer data, GDestroyNotify destroy_notify);
    void (*ptr_g_option_group_set_translation_domain)(GOptionGroup * group, const gchar * domain);
    GPathBuf * (*ptr_g_path_buf_new)(void);
    GPathBuf * (*ptr_g_path_buf_new_from_path)(const char * path);
    GPathBuf * (*ptr_g_path_buf_init)(GPathBuf * buf);
    GPathBuf * (*ptr_g_path_buf_init_from_path)(GPathBuf * buf, const char * path);
    void (*ptr_g_path_buf_clear)(GPathBuf * buf);
    char * (*ptr_g_path_buf_clear_to_path)(GPathBuf * buf);
    void (*ptr_g_path_buf_free)(GPathBuf * buf);
    char * (*ptr_g_path_buf_free_to_path)(GPathBuf * buf);
    GPathBuf * (*ptr_g_path_buf_copy)(GPathBuf * buf);
    GPathBuf * (*ptr_g_path_buf_push)(GPathBuf * buf, const char * path);
    gboolean (*ptr_g_path_buf_pop)(GPathBuf * buf);
    gboolean (*ptr_g_path_buf_set_filename)(GPathBuf * buf, const char * file_name);
    gboolean (*ptr_g_path_buf_set_extension)(GPathBuf * buf, const char * extension);
    char * (*ptr_g_path_buf_to_path)(GPathBuf * buf);
    gboolean (*ptr_g_path_buf_equal)(gconstpointer v1, gconstpointer v2);
    GPatternSpec * (*ptr_g_pattern_spec_new)(const gchar * pattern);
    void (*ptr_g_pattern_spec_free)(GPatternSpec * pspec);
    GPatternSpec * (*ptr_g_pattern_spec_copy)(GPatternSpec * pspec);
    gboolean (*ptr_g_pattern_spec_equal)(GPatternSpec * pspec1, GPatternSpec * pspec2);
    gboolean (*ptr_g_pattern_spec_match)(GPatternSpec * pspec, gsize string_length, const gchar * string, const gchar * string_reversed);
    gboolean (*ptr_g_pattern_spec_match_string)(GPatternSpec * pspec, const gchar * string);
    gboolean (*ptr_g_pattern_match)(GPatternSpec * pspec, guint string_length, const gchar * string, const gchar * string_reversed);
    gboolean (*ptr_g_pattern_match_string)(GPatternSpec * pspec, const gchar * string);
    gboolean (*ptr_g_pattern_match_simple)(const gchar * pattern, const gchar * string);
    guint (*ptr_g_spaced_primes_closest)(guint num);
    void (*ptr_g_qsort_with_data)(gconstpointer pbase, gint total_elems, gsize size, GCompareDataFunc compare_func, gpointer user_data);
    void (*ptr_g_sort_array)(const void * array, size_t n_elements, size_t element_size, GCompareDataFunc compare_func, void * user_data);
    GQueue * (*ptr_g_queue_new)(void);
    void (*ptr_g_queue_free)(GQueue * queue);
    void (*ptr_g_queue_free_full)(GQueue * queue, GDestroyNotify free_func);
    void (*ptr_g_queue_init)(GQueue * queue);
    void (*ptr_g_queue_clear)(GQueue * queue);
    gboolean (*ptr_g_queue_is_empty)(GQueue * queue);
    void (*ptr_g_queue_clear_full)(GQueue * queue, GDestroyNotify free_func);
    guint (*ptr_g_queue_get_length)(GQueue * queue);
    void (*ptr_g_queue_reverse)(GQueue * queue);
    GQueue * (*ptr_g_queue_copy)(GQueue * queue);
    void (*ptr_g_queue_foreach)(GQueue * queue, GFunc func, gpointer user_data);
    GList * (*ptr_g_queue_find)(GQueue * queue, gconstpointer data);
    GList * (*ptr_g_queue_find_custom)(GQueue * queue, gconstpointer data, GCompareFunc func);
    void (*ptr_g_queue_sort)(GQueue * queue, GCompareDataFunc compare_func, gpointer user_data);
    void (*ptr_g_queue_push_head)(GQueue * queue, gpointer data);
    void (*ptr_g_queue_push_tail)(GQueue * queue, gpointer data);
    void (*ptr_g_queue_push_nth)(GQueue * queue, gpointer data, gint n);
    gpointer (*ptr_g_queue_pop_head)(GQueue * queue);
    gpointer (*ptr_g_queue_pop_tail)(GQueue * queue);
    gpointer (*ptr_g_queue_pop_nth)(GQueue * queue, guint n);
    gpointer (*ptr_g_queue_peek_head)(GQueue * queue);
    gpointer (*ptr_g_queue_peek_tail)(GQueue * queue);
    gpointer (*ptr_g_queue_peek_nth)(GQueue * queue, guint n);
    gint (*ptr_g_queue_index)(GQueue * queue, gconstpointer data);
    gboolean (*ptr_g_queue_remove)(GQueue * queue, gconstpointer data);
    guint (*ptr_g_queue_remove_all)(GQueue * queue, gconstpointer data);
    void (*ptr_g_queue_insert_before)(GQueue * queue, GList * sibling, gpointer data);
    void (*ptr_g_queue_insert_before_link)(GQueue * queue, GList * sibling, GList * link_);
    void (*ptr_g_queue_insert_after)(GQueue * queue, GList * sibling, gpointer data);
    void (*ptr_g_queue_insert_after_link)(GQueue * queue, GList * sibling, GList * link_);
    void (*ptr_g_queue_insert_sorted)(GQueue * queue, gpointer data, GCompareDataFunc func, gpointer user_data);
    void (*ptr_g_queue_push_head_link)(GQueue * queue, GList * link_);
    void (*ptr_g_queue_push_tail_link)(GQueue * queue, GList * link_);
    void (*ptr_g_queue_push_nth_link)(GQueue * queue, gint n, GList * link_);
    GList * (*ptr_g_queue_pop_head_link)(GQueue * queue);
    GList * (*ptr_g_queue_pop_tail_link)(GQueue * queue);
    GList * (*ptr_g_queue_pop_nth_link)(GQueue * queue, guint n);
    GList * (*ptr_g_queue_peek_head_link)(GQueue * queue);
    GList * (*ptr_g_queue_peek_tail_link)(GQueue * queue);
    GList * (*ptr_g_queue_peek_nth_link)(GQueue * queue, guint n);
    gint (*ptr_g_queue_link_index)(GQueue * queue, GList * link_);
    void (*ptr_g_queue_unlink)(GQueue * queue, GList * link_);
    void (*ptr_g_queue_delete_link)(GQueue * queue, GList * link_);
    GRand * (*ptr_g_rand_new_with_seed)(guint32 seed);
    GRand * (*ptr_g_rand_new_with_seed_array)(const guint32 * seed, guint seed_length);
    GRand * (*ptr_g_rand_new)(void);
    void (*ptr_g_rand_free)(GRand * rand_);
    GRand * (*ptr_g_rand_copy)(GRand * rand_);
    void (*ptr_g_rand_set_seed)(GRand * rand_, guint32 seed);
    void (*ptr_g_rand_set_seed_array)(GRand * rand_, const guint32 * seed, guint seed_length);
    guint32 (*ptr_g_rand_int)(GRand * rand_);
    gint32 (*ptr_g_rand_int_range)(GRand * rand_, gint32 begin, gint32 end);
    gdouble (*ptr_g_rand_double)(GRand * rand_);
    gdouble (*ptr_g_rand_double_range)(GRand * rand_, gdouble begin, gdouble end);
    void (*ptr_g_random_set_seed)(guint32 seed);
    guint32 (*ptr_g_random_int)(void);
    gint32 (*ptr_g_random_int_range)(gint32 begin, gint32 end);
    gdouble (*ptr_g_random_double)(void);
    gdouble (*ptr_g_random_double_range)(gdouble begin, gdouble end);
    gpointer (*ptr_g_rc_box_alloc)(gsize block_size);
    gpointer (*ptr_g_rc_box_alloc0)(gsize block_size);
    gpointer (*ptr_g_rc_box_dup)(gsize block_size, gconstpointer mem_block);
    gpointer (*ptr_g_rc_box_acquire)(gpointer mem_block);
    void (*ptr_g_rc_box_release)(gpointer mem_block);
    void (*ptr_g_rc_box_release_full)(gpointer mem_block, GDestroyNotify clear_func);
    gsize (*ptr_g_rc_box_get_size)(gpointer mem_block);
    gpointer (*ptr_g_atomic_rc_box_alloc)(gsize block_size);
    gpointer (*ptr_g_atomic_rc_box_alloc0)(gsize block_size);
    gpointer (*ptr_g_atomic_rc_box_dup)(gsize block_size, gconstpointer mem_block);
    gpointer (*ptr_g_atomic_rc_box_acquire)(gpointer mem_block);
    void (*ptr_g_atomic_rc_box_release)(gpointer mem_block);
    void (*ptr_g_atomic_rc_box_release_full)(gpointer mem_block, GDestroyNotify clear_func);
    gsize (*ptr_g_atomic_rc_box_get_size)(gpointer mem_block);
    void (*ptr_g_ref_count_init)(grefcount * rc);
    void (*ptr_g_ref_count_inc)(grefcount * rc);
    gboolean (*ptr_g_ref_count_dec)(grefcount * rc);
    gboolean (*ptr_g_ref_count_compare)(grefcount * rc, gint val);
    void (*ptr_g_atomic_ref_count_init)(gatomicrefcount * arc);
    void (*ptr_g_atomic_ref_count_inc)(gatomicrefcount * arc);
    gboolean (*ptr_g_atomic_ref_count_dec)(gatomicrefcount * arc);
    gboolean (*ptr_g_atomic_ref_count_compare)(gatomicrefcount * arc, gint val);
    char * (*ptr_g_ref_string_new)(const char * str);
    char * (*ptr_g_ref_string_new_len)(const char * str, gssize len);
    char * (*ptr_g_ref_string_new_intern)(const char * str);
    char * (*ptr_g_ref_string_acquire)(char * str);
    void (*ptr_g_ref_string_release)(char * str);
    gsize (*ptr_g_ref_string_length)(char * str);
    GQuark (*ptr_g_regex_error_quark)(void);
    GRegex * (*ptr_g_regex_new)(const gchar * pattern, GRegexCompileFlags compile_options, GRegexMatchFlags match_options, GError * * error);
    GRegex * (*ptr_g_regex_ref)(GRegex * regex);
    void (*ptr_g_regex_unref)(GRegex * regex);
    const gchar * (*ptr_g_regex_get_pattern)(const GRegex * regex);
    gint (*ptr_g_regex_get_max_backref)(const GRegex * regex);
    gint (*ptr_g_regex_get_capture_count)(const GRegex * regex);
    gboolean (*ptr_g_regex_get_has_cr_or_lf)(const GRegex * regex);
    gint (*ptr_g_regex_get_max_lookbehind)(const GRegex * regex);
    gint (*ptr_g_regex_get_string_number)(const GRegex * regex, const gchar * name);
    gchar * (*ptr_g_regex_escape_string)(const gchar * string, gint length);
    gchar * (*ptr_g_regex_escape_nul)(const gchar * string, gint length);
    GRegexCompileFlags (*ptr_g_regex_get_compile_flags)(const GRegex * regex);
    GRegexMatchFlags (*ptr_g_regex_get_match_flags)(const GRegex * regex);
    gboolean (*ptr_g_regex_match_simple)(const gchar * pattern, const gchar * string, GRegexCompileFlags compile_options, GRegexMatchFlags match_options);
    gboolean (*ptr_g_regex_match)(const GRegex * regex, const gchar * string, GRegexMatchFlags match_options, GMatchInfo * * match_info);
    gboolean (*ptr_g_regex_match_full)(const GRegex * regex, const gchar * string, gssize string_len, gint start_position, GRegexMatchFlags match_options, GMatchInfo * * match_info, GError * * error);
    gboolean (*ptr_g_regex_match_all)(const GRegex * regex, const gchar * string, GRegexMatchFlags match_options, GMatchInfo * * match_info);
    gboolean (*ptr_g_regex_match_all_full)(const GRegex * regex, const gchar * string, gssize string_len, gint start_position, GRegexMatchFlags match_options, GMatchInfo * * match_info, GError * * error);
    gchar * * (*ptr_g_regex_split_simple)(const gchar * pattern, const gchar * string, GRegexCompileFlags compile_options, GRegexMatchFlags match_options);
    gchar * * (*ptr_g_regex_split)(const GRegex * regex, const gchar * string, GRegexMatchFlags match_options);
    gchar * * (*ptr_g_regex_split_full)(const GRegex * regex, const gchar * string, gssize string_len, gint start_position, GRegexMatchFlags match_options, gint max_tokens, GError * * error);
    gchar * (*ptr_g_regex_replace)(const GRegex * regex, const gchar * string, gssize string_len, gint start_position, const gchar * replacement, GRegexMatchFlags match_options, GError * * error);
    gchar * (*ptr_g_regex_replace_literal)(const GRegex * regex, const gchar * string, gssize string_len, gint start_position, const gchar * replacement, GRegexMatchFlags match_options, GError * * error);
    gchar * (*ptr_g_regex_replace_eval)(const GRegex * regex, const gchar * string, gssize string_len, gint start_position, GRegexMatchFlags match_options, GRegexEvalCallback eval, gpointer user_data, GError * * error);
    gboolean (*ptr_g_regex_check_replacement)(const gchar * replacement, gboolean * has_references, GError * * error);
    GRegex * (*ptr_g_match_info_get_regex)(const GMatchInfo * match_info);
    const gchar * (*ptr_g_match_info_get_string)(const GMatchInfo * match_info);
    GMatchInfo * (*ptr_g_match_info_ref)(GMatchInfo * match_info);
    void (*ptr_g_match_info_unref)(GMatchInfo * match_info);
    void (*ptr_g_match_info_free)(GMatchInfo * match_info);
    gboolean (*ptr_g_match_info_next)(GMatchInfo * match_info, GError * * error);
    gboolean (*ptr_g_match_info_matches)(const GMatchInfo * match_info);
    gint (*ptr_g_match_info_get_match_count)(const GMatchInfo * match_info);
    gboolean (*ptr_g_match_info_is_partial_match)(const GMatchInfo * match_info);
    gchar * (*ptr_g_match_info_expand_references)(const GMatchInfo * match_info, const gchar * string_to_expand, GError * * error);
    gchar * (*ptr_g_match_info_fetch)(const GMatchInfo * match_info, gint match_num);
    gboolean (*ptr_g_match_info_fetch_pos)(const GMatchInfo * match_info, gint match_num, gint * start_pos, gint * end_pos);
    gchar * (*ptr_g_match_info_fetch_named)(const GMatchInfo * match_info, const gchar * name);
    gboolean (*ptr_g_match_info_fetch_named_pos)(const GMatchInfo * match_info, const gchar * name, gint * start_pos, gint * end_pos);
    gchar * * (*ptr_g_match_info_fetch_all)(const GMatchInfo * match_info);
    GScanner * (*ptr_g_scanner_new)(const GScannerConfig * config_templ);
    void (*ptr_g_scanner_destroy)(GScanner * scanner);
    void (*ptr_g_scanner_input_file)(GScanner * scanner, gint input_fd);
    void (*ptr_g_scanner_sync_file_offset)(GScanner * scanner);
    void (*ptr_g_scanner_input_text)(GScanner * scanner, const gchar * text, guint text_len);
    GTokenType (*ptr_g_scanner_get_next_token)(GScanner * scanner);
    GTokenType (*ptr_g_scanner_peek_next_token)(GScanner * scanner);
    GTokenType (*ptr_g_scanner_cur_token)(GScanner * scanner);
    GTokenValue (*ptr_g_scanner_cur_value)(GScanner * scanner);
    guint (*ptr_g_scanner_cur_line)(GScanner * scanner);
    guint (*ptr_g_scanner_cur_position)(GScanner * scanner);
    gboolean (*ptr_g_scanner_eof)(GScanner * scanner);
    guint (*ptr_g_scanner_set_scope)(GScanner * scanner, guint scope_id);
    void (*ptr_g_scanner_scope_add_symbol)(GScanner * scanner, guint scope_id, const gchar * symbol, gpointer value);
    void (*ptr_g_scanner_scope_remove_symbol)(GScanner * scanner, guint scope_id, const gchar * symbol);
    gpointer (*ptr_g_scanner_scope_lookup_symbol)(GScanner * scanner, guint scope_id, const gchar * symbol);
    void (*ptr_g_scanner_scope_foreach_symbol)(GScanner * scanner, guint scope_id, GHFunc func, gpointer user_data);
    gpointer (*ptr_g_scanner_lookup_symbol)(GScanner * scanner, const gchar * symbol);
    void (*ptr_g_scanner_unexp_token)(GScanner * scanner, GTokenType expected_token, const gchar * identifier_spec, const gchar * symbol_spec, const gchar * symbol_name, const gchar * message, gint is_error);
    GSequence * (*ptr_g_sequence_new)(GDestroyNotify data_destroy);
    void (*ptr_g_sequence_free)(GSequence * seq);
    gint (*ptr_g_sequence_get_length)(GSequence * seq);
    void (*ptr_g_sequence_foreach)(GSequence * seq, GFunc func, gpointer user_data);
    void (*ptr_g_sequence_foreach_range)(GSequenceIter * begin, GSequenceIter * end, GFunc func, gpointer user_data);
    void (*ptr_g_sequence_sort)(GSequence * seq, GCompareDataFunc cmp_func, gpointer cmp_data);
    void (*ptr_g_sequence_sort_iter)(GSequence * seq, GSequenceIterCompareFunc cmp_func, gpointer cmp_data);
    gboolean (*ptr_g_sequence_is_empty)(GSequence * seq);
    GSequenceIter * (*ptr_g_sequence_get_begin_iter)(GSequence * seq);
    GSequenceIter * (*ptr_g_sequence_get_end_iter)(GSequence * seq);
    GSequenceIter * (*ptr_g_sequence_get_iter_at_pos)(GSequence * seq, gint pos);
    GSequenceIter * (*ptr_g_sequence_append)(GSequence * seq, gpointer data);
    GSequenceIter * (*ptr_g_sequence_prepend)(GSequence * seq, gpointer data);
    GSequenceIter * (*ptr_g_sequence_insert_before)(GSequenceIter * iter, gpointer data);
    void (*ptr_g_sequence_move)(GSequenceIter * src, GSequenceIter * dest);
    void (*ptr_g_sequence_swap)(GSequenceIter * a, GSequenceIter * b);
    GSequenceIter * (*ptr_g_sequence_insert_sorted)(GSequence * seq, gpointer data, GCompareDataFunc cmp_func, gpointer cmp_data);
    GSequenceIter * (*ptr_g_sequence_insert_sorted_iter)(GSequence * seq, gpointer data, GSequenceIterCompareFunc iter_cmp, gpointer cmp_data);
    void (*ptr_g_sequence_sort_changed)(GSequenceIter * iter, GCompareDataFunc cmp_func, gpointer cmp_data);
    void (*ptr_g_sequence_sort_changed_iter)(GSequenceIter * iter, GSequenceIterCompareFunc iter_cmp, gpointer cmp_data);
    void (*ptr_g_sequence_remove)(GSequenceIter * iter);
    void (*ptr_g_sequence_remove_range)(GSequenceIter * begin, GSequenceIter * end);
    void (*ptr_g_sequence_move_range)(GSequenceIter * dest, GSequenceIter * begin, GSequenceIter * end);
    GSequenceIter * (*ptr_g_sequence_search)(GSequence * seq, gpointer data, GCompareDataFunc cmp_func, gpointer cmp_data);
    GSequenceIter * (*ptr_g_sequence_search_iter)(GSequence * seq, gpointer data, GSequenceIterCompareFunc iter_cmp, gpointer cmp_data);
    GSequenceIter * (*ptr_g_sequence_lookup)(GSequence * seq, gpointer data, GCompareDataFunc cmp_func, gpointer cmp_data);
    GSequenceIter * (*ptr_g_sequence_lookup_iter)(GSequence * seq, gpointer data, GSequenceIterCompareFunc iter_cmp, gpointer cmp_data);
    gpointer (*ptr_g_sequence_get)(GSequenceIter * iter);
    void (*ptr_g_sequence_set)(GSequenceIter * iter, gpointer data);
    gboolean (*ptr_g_sequence_iter_is_begin)(GSequenceIter * iter);
    gboolean (*ptr_g_sequence_iter_is_end)(GSequenceIter * iter);
    GSequenceIter * (*ptr_g_sequence_iter_next)(GSequenceIter * iter);
    GSequenceIter * (*ptr_g_sequence_iter_prev)(GSequenceIter * iter);
    gint (*ptr_g_sequence_iter_get_position)(GSequenceIter * iter);
    GSequenceIter * (*ptr_g_sequence_iter_move)(GSequenceIter * iter, gint delta);
    GSequence * (*ptr_g_sequence_iter_get_sequence)(GSequenceIter * iter);
    gint (*ptr_g_sequence_iter_compare)(GSequenceIter * a, GSequenceIter * b);
    GSequenceIter * (*ptr_g_sequence_range_get_midpoint)(GSequenceIter * begin, GSequenceIter * end);
    GQuark (*ptr_g_shell_error_quark)(void);
    gchar * (*ptr_g_shell_quote)(const gchar * unquoted_string);
    gchar * (*ptr_g_shell_unquote)(const gchar * quoted_string, GError * * error);
    gboolean (*ptr_g_shell_parse_argv)(const gchar * command_line, gint * argcp, gchar * * * argvp, GError * * error);
    gpointer (*ptr_g_slice_alloc)(gsize block_size);
    gpointer (*ptr_g_slice_alloc0)(gsize block_size);
    gpointer (*ptr_g_slice_copy)(gsize block_size, gconstpointer mem_block);
    void (*ptr_g_slice_free1)(gsize block_size, gpointer mem_block);
    void (*ptr_g_slice_free_chain_with_offset)(gsize block_size, gpointer mem_chain, gsize next_offset);
    void (*ptr_g_slice_set_config)(GSliceConfig ckey, gint64 value);
    gint64 (*ptr_g_slice_get_config)(GSliceConfig ckey);
    gint64 * (*ptr_g_slice_get_config_state)(GSliceConfig ckey, gint64 address, guint * n_values);
    GQuark (*ptr_g_spawn_error_quark)(void);
    GQuark (*ptr_g_spawn_exit_error_quark)(void);
    gboolean (*ptr_g_spawn_async)(const gchar * working_directory, gchar * * argv, gchar * * envp, GSpawnFlags flags, GSpawnChildSetupFunc child_setup, gpointer user_data, GPid * child_pid, GError * * error);
    gboolean (*ptr_g_spawn_async_with_pipes)(const gchar * working_directory, gchar * * argv, gchar * * envp, GSpawnFlags flags, GSpawnChildSetupFunc child_setup, gpointer user_data, GPid * child_pid, gint * standard_input, gint * standard_output, gint * standard_error, GError * * error);
    gboolean (*ptr_g_spawn_async_with_pipes_and_fds)(const gchar * working_directory, const gchar * const * argv, const gchar * const * envp, GSpawnFlags flags, GSpawnChildSetupFunc child_setup, gpointer user_data, gint stdin_fd, gint stdout_fd, gint stderr_fd, const gint * source_fds, const gint * target_fds, gsize n_fds, GPid * child_pid_out, gint * stdin_pipe_out, gint * stdout_pipe_out, gint * stderr_pipe_out, GError * * error);
    gboolean (*ptr_g_spawn_async_with_fds)(const gchar * working_directory, gchar * * argv, gchar * * envp, GSpawnFlags flags, GSpawnChildSetupFunc child_setup, gpointer user_data, GPid * child_pid, gint stdin_fd, gint stdout_fd, gint stderr_fd, GError * * error);
    gboolean (*ptr_g_spawn_sync)(const gchar * working_directory, gchar * * argv, gchar * * envp, GSpawnFlags flags, GSpawnChildSetupFunc child_setup, gpointer user_data, gchar * * standard_output, gchar * * standard_error, gint * wait_status, GError * * error);
    gboolean (*ptr_g_spawn_command_line_sync)(const gchar * command_line, gchar * * standard_output, gchar * * standard_error, gint * wait_status, GError * * error);
    gboolean (*ptr_g_spawn_command_line_async)(const gchar * command_line, GError * * error);
    gboolean (*ptr_g_spawn_check_wait_status)(gint wait_status, GError * * error);
    gboolean (*ptr_g_spawn_check_exit_status)(gint wait_status, GError * * error);
    void (*ptr_g_spawn_close_pid)(GPid pid);
    GStringChunk * (*ptr_g_string_chunk_new)(gsize size);
    void (*ptr_g_string_chunk_free)(GStringChunk * chunk);
    void (*ptr_g_string_chunk_clear)(GStringChunk * chunk);
    gchar * (*ptr_g_string_chunk_insert)(GStringChunk * chunk, const gchar * string);
    gchar * (*ptr_g_string_chunk_insert_len)(GStringChunk * chunk, const gchar * string, gssize len);
    gchar * (*ptr_g_string_chunk_insert_const)(GStringChunk * chunk, const gchar * string);
    GStrvBuilder * (*ptr_g_strv_builder_new)(void);
    void (*ptr_g_strv_builder_unref)(GStrvBuilder * builder);
    GStrv (*ptr_g_strv_builder_unref_to_strv)(GStrvBuilder * builder);
    GStrvBuilder * (*ptr_g_strv_builder_ref)(GStrvBuilder * builder);
    void (*ptr_g_strv_builder_add)(GStrvBuilder * builder, const char * value);
    void (*ptr_g_strv_builder_addv)(GStrvBuilder * builder, const char * * value);
    void (*ptr_g_strv_builder_take)(GStrvBuilder * builder, char * value);
    GStrv (*ptr_g_strv_builder_end)(GStrvBuilder * builder);
    int (*ptr_g_strcmp0)(const char * str1, const char * str2);
    gboolean (*ptr_g_test_subprocess)(void);
    int (*ptr_g_test_run)(void);
    void (*ptr_g_test_add_func)(const char * testpath, GTestFunc test_func);
    void (*ptr_g_test_add_data_func)(const char * testpath, gconstpointer test_data, GTestDataFunc test_func);
    void (*ptr_g_test_add_data_func_full)(const char * testpath, gpointer test_data, GTestDataFunc test_func, GDestroyNotify data_free_func);
    const char * (*ptr_g_test_get_path)(void);
    void (*ptr_g_test_fail)(void);
    void (*ptr_g_test_incomplete)(const gchar * msg);
    void (*ptr_g_test_skip)(const gchar * msg);
    gboolean (*ptr_g_test_failed)(void);
    void (*ptr_g_test_set_nonfatal_assertions)(void);
    void (*ptr_g_test_disable_crash_reporting)(void);
    void (*ptr_g_test_bug_base)(const char * uri_pattern);
    void (*ptr_g_test_bug)(const char * bug_uri_snippet);
    void (*ptr_g_test_summary)(const char * summary);
    void (*ptr_g_test_timer_start)(void);
    double (*ptr_g_test_timer_elapsed)(void);
    double (*ptr_g_test_timer_last)(void);
    void (*ptr_g_test_queue_free)(gpointer gfree_pointer);
    void (*ptr_g_test_queue_destroy)(GDestroyNotify destroy_func, gpointer destroy_data);
    gboolean (*ptr_g_test_trap_fork)(guint64 usec_timeout, GTestTrapFlags test_trap_flags);
    void (*ptr_g_test_trap_subprocess)(const char * test_path, guint64 usec_timeout, GTestSubprocessFlags test_flags);
    void (*ptr_g_test_trap_subprocess_with_envp)(const char * test_path, const char * const * envp, guint64 usec_timeout, GTestSubprocessFlags test_flags);
    gboolean (*ptr_g_test_trap_has_passed)(void);
    gboolean (*ptr_g_test_trap_reached_timeout)(void);
    gint32 (*ptr_g_test_rand_int)(void);
    gint32 (*ptr_g_test_rand_int_range)(gint32 begin, gint32 end);
    double (*ptr_g_test_rand_double)(void);
    double (*ptr_g_test_rand_double_range)(double range_start, double range_end);
    GTestCase * (*ptr_g_test_create_case)(const char * test_name, gsize data_size, gconstpointer test_data, GTestFixtureFunc data_setup, GTestFixtureFunc data_test, GTestFixtureFunc data_teardown);
    GTestSuite * (*ptr_g_test_create_suite)(const char * suite_name);
    GTestSuite * (*ptr_g_test_get_root)(void);
    void (*ptr_g_test_suite_add)(GTestSuite * suite, GTestCase * test_case);
    void (*ptr_g_test_suite_add_suite)(GTestSuite * suite, GTestSuite * nestedsuite);
    int (*ptr_g_test_run_suite)(GTestSuite * suite);
    void (*ptr_g_test_case_free)(GTestCase * test_case);
    void (*ptr_g_test_suite_free)(GTestSuite * suite);
    void (*ptr_g_test_trap_assertions)(const char * domain, const char * file, int line, const char * func, guint64 assertion_flags, const char * pattern);
    void (*ptr_g_assertion_message)(const char * domain, const char * file, int line, const char * func, const char * message);
    void (*ptr_g_assertion_message_expr)(const char * domain, const char * file, int line, const char * func, const char * expr);
    void (*ptr_g_assertion_message_cmpstr)(const char * domain, const char * file, int line, const char * func, const char * expr, const char * arg1, const char * cmp, const char * arg2);
    void (*ptr_g_assertion_message_cmpstrv)(const char * domain, const char * file, int line, const char * func, const char * expr, const char * const * arg1, const char * const * arg2, gsize first_wrong_idx);
    void (*ptr_g_assertion_message_cmpint)(const char * domain, const char * file, int line, const char * func, const char * expr, guint64 arg1, const char * cmp, guint64 arg2, char numtype);
    void (*ptr_g_assertion_message_cmpnum)(const char * domain, const char * file, int line, const char * func, const char * expr, long double arg1, const char * cmp, long double arg2, char numtype);
    void (*ptr_g_assertion_message_error)(const char * domain, const char * file, int line, const char * func, const char * expr, const GError * error, GQuark error_domain, int error_code);
    void (*ptr_g_test_add_vtable)(const char * testpath, gsize data_size, gconstpointer test_data, GTestFixtureFunc data_setup, GTestFixtureFunc data_test, GTestFixtureFunc data_teardown);
    const char * (*ptr_g_test_log_type_name)(GTestLogType log_type);
    GTestLogBuffer * (*ptr_g_test_log_buffer_new)(void);
    void (*ptr_g_test_log_buffer_free)(GTestLogBuffer * tbuffer);
    void (*ptr_g_test_log_buffer_push)(GTestLogBuffer * tbuffer, guint n_bytes, const guint8 * bytes);
    GTestLogMsg * (*ptr_g_test_log_buffer_pop)(GTestLogBuffer * tbuffer);
    void (*ptr_g_test_log_msg_free)(GTestLogMsg * tmsg);
    void (*ptr_g_test_log_set_fatal_handler)(GTestLogFatalFunc log_func, gpointer user_data);
    void (*ptr_g_test_expect_message)(const gchar * log_domain, GLogLevelFlags log_level, const gchar * pattern);
    void (*ptr_g_test_assert_expected_messages_internal)(const char * domain, const char * file, int line, const char * func);
    const gchar * (*ptr_g_test_get_dir)(GTestFileType file_type);
    GThreadPool * (*ptr_g_thread_pool_new)(GFunc func, gpointer user_data, gint max_threads, gboolean exclusive, GError * * error);
    GThreadPool * (*ptr_g_thread_pool_new_full)(GFunc func, gpointer user_data, GDestroyNotify item_free_func, gint max_threads, gboolean exclusive, GError * * error);
    void (*ptr_g_thread_pool_free)(GThreadPool * pool, gboolean immediate, gboolean wait_);
    gboolean (*ptr_g_thread_pool_push)(GThreadPool * pool, gpointer data, GError * * error);
    guint (*ptr_g_thread_pool_unprocessed)(GThreadPool * pool);
    void (*ptr_g_thread_pool_set_sort_function)(GThreadPool * pool, GCompareDataFunc func, gpointer user_data);
    gboolean (*ptr_g_thread_pool_move_to_front)(GThreadPool * pool, gpointer data);
    gboolean (*ptr_g_thread_pool_set_max_threads)(GThreadPool * pool, gint max_threads, GError * * error);
    gint (*ptr_g_thread_pool_get_max_threads)(GThreadPool * pool);
    guint (*ptr_g_thread_pool_get_num_threads)(GThreadPool * pool);
    void (*ptr_g_thread_pool_set_max_unused_threads)(gint max_threads);
    gint (*ptr_g_thread_pool_get_max_unused_threads)(void);
    guint (*ptr_g_thread_pool_get_num_unused_threads)(void);
    void (*ptr_g_thread_pool_stop_unused_threads)(void);
    void (*ptr_g_thread_pool_set_max_idle_time)(guint interval);
    guint (*ptr_g_thread_pool_get_max_idle_time)(void);
    GTimer * (*ptr_g_timer_new)(void);
    void (*ptr_g_timer_destroy)(GTimer * timer);
    void (*ptr_g_timer_start)(GTimer * timer);
    void (*ptr_g_timer_stop)(GTimer * timer);
    void (*ptr_g_timer_reset)(GTimer * timer);
    void (*ptr_g_timer_continue)(GTimer * timer);
    gdouble (*ptr_g_timer_elapsed)(GTimer * timer, gulong * microseconds);
    gboolean (*ptr_g_timer_is_active)(GTimer * timer);
    void (*ptr_g_usleep)(gulong microseconds);
    void (*ptr_g_time_val_add)(GTimeVal * time_, glong microseconds);
    gboolean (*ptr_g_time_val_from_iso8601)(const gchar * iso_date, GTimeVal * time_);
    gchar * (*ptr_g_time_val_to_iso8601)(GTimeVal * time_);
    void (*ptr_g_trash_stack_push)(GTrashStack * * stack_p, gpointer data_p);
    gpointer (*ptr_g_trash_stack_pop)(GTrashStack * * stack_p);
    gpointer (*ptr_g_trash_stack_peek)(GTrashStack * * stack_p);
    guint (*ptr_g_trash_stack_height)(GTrashStack * * stack_p);
    GTree * (*ptr_g_tree_new)(GCompareFunc key_compare_func);
    GTree * (*ptr_g_tree_new_with_data)(GCompareDataFunc key_compare_func, gpointer key_compare_data);
    GTree * (*ptr_g_tree_new_full)(GCompareDataFunc key_compare_func, gpointer key_compare_data, GDestroyNotify key_destroy_func, GDestroyNotify value_destroy_func);
    GTreeNode * (*ptr_g_tree_node_first)(GTree * tree);
    GTreeNode * (*ptr_g_tree_node_last)(GTree * tree);
    GTreeNode * (*ptr_g_tree_node_previous)(GTreeNode * node);
    GTreeNode * (*ptr_g_tree_node_next)(GTreeNode * node);
    GTree * (*ptr_g_tree_ref)(GTree * tree);
    void (*ptr_g_tree_unref)(GTree * tree);
    void (*ptr_g_tree_destroy)(GTree * tree);
    GTreeNode * (*ptr_g_tree_insert_node)(GTree * tree, gpointer key, gpointer value);
    void (*ptr_g_tree_insert)(GTree * tree, gpointer key, gpointer value);
    GTreeNode * (*ptr_g_tree_replace_node)(GTree * tree, gpointer key, gpointer value);
    void (*ptr_g_tree_replace)(GTree * tree, gpointer key, gpointer value);
    gboolean (*ptr_g_tree_remove)(GTree * tree, gconstpointer key);
    void (*ptr_g_tree_remove_all)(GTree * tree);
    gboolean (*ptr_g_tree_steal)(GTree * tree, gconstpointer key);
    gpointer (*ptr_g_tree_node_key)(GTreeNode * node);
    gpointer (*ptr_g_tree_node_value)(GTreeNode * node);
    GTreeNode * (*ptr_g_tree_lookup_node)(GTree * tree, gconstpointer key);
    gpointer (*ptr_g_tree_lookup)(GTree * tree, gconstpointer key);
    gboolean (*ptr_g_tree_lookup_extended)(GTree * tree, gconstpointer lookup_key, gpointer * orig_key, gpointer * value);
    void (*ptr_g_tree_foreach)(GTree * tree, GTraverseFunc func, gpointer user_data);
    void (*ptr_g_tree_foreach_node)(GTree * tree, GTraverseNodeFunc func, gpointer user_data);
    void (*ptr_g_tree_traverse)(GTree * tree, GTraverseFunc traverse_func, GTraverseType traverse_type, gpointer user_data);
    GTreeNode * (*ptr_g_tree_search_node)(GTree * tree, GCompareFunc search_func, gconstpointer user_data);
    gpointer (*ptr_g_tree_search)(GTree * tree, GCompareFunc search_func, gconstpointer user_data);
    GTreeNode * (*ptr_g_tree_lower_bound)(GTree * tree, gconstpointer key);
    GTreeNode * (*ptr_g_tree_upper_bound)(GTree * tree, gconstpointer key);
    gint (*ptr_g_tree_height)(GTree * tree);
    gint (*ptr_g_tree_nnodes)(GTree * tree);
    GUri * (*ptr_g_uri_ref)(GUri * uri);
    void (*ptr_g_uri_unref)(GUri * uri);
    gboolean (*ptr_g_uri_split)(const gchar * uri_ref, GUriFlags flags, gchar * * scheme, gchar * * userinfo, gchar * * host, gint * port, gchar * * path, gchar * * query, gchar * * fragment, GError * * error);
    gboolean (*ptr_g_uri_split_with_user)(const gchar * uri_ref, GUriFlags flags, gchar * * scheme, gchar * * user, gchar * * password, gchar * * auth_params, gchar * * host, gint * port, gchar * * path, gchar * * query, gchar * * fragment, GError * * error);
    gboolean (*ptr_g_uri_split_network)(const gchar * uri_string, GUriFlags flags, gchar * * scheme, gchar * * host, gint * port, GError * * error);
    gboolean (*ptr_g_uri_is_valid)(const gchar * uri_string, GUriFlags flags, GError * * error);
    gchar * (*ptr_g_uri_join)(GUriFlags flags, const gchar * scheme, const gchar * userinfo, const gchar * host, gint port, const gchar * path, const gchar * query, const gchar * fragment);
    gchar * (*ptr_g_uri_join_with_user)(GUriFlags flags, const gchar * scheme, const gchar * user, const gchar * password, const gchar * auth_params, const gchar * host, gint port, const gchar * path, const gchar * query, const gchar * fragment);
    GUri * (*ptr_g_uri_parse)(const gchar * uri_string, GUriFlags flags, GError * * error);
    GUri * (*ptr_g_uri_parse_relative)(GUri * base_uri, const gchar * uri_ref, GUriFlags flags, GError * * error);
    gchar * (*ptr_g_uri_resolve_relative)(const gchar * base_uri_string, const gchar * uri_ref, GUriFlags flags, GError * * error);
    GUri * (*ptr_g_uri_build)(GUriFlags flags, const gchar * scheme, const gchar * userinfo, const gchar * host, gint port, const gchar * path, const gchar * query, const gchar * fragment);
    GUri * (*ptr_g_uri_build_with_user)(GUriFlags flags, const gchar * scheme, const gchar * user, const gchar * password, const gchar * auth_params, const gchar * host, gint port, const gchar * path, const gchar * query, const gchar * fragment);
    char * (*ptr_g_uri_to_string)(GUri * uri);
    char * (*ptr_g_uri_to_string_partial)(GUri * uri, GUriHideFlags flags);
    const gchar * (*ptr_g_uri_get_scheme)(GUri * uri);
    const gchar * (*ptr_g_uri_get_userinfo)(GUri * uri);
    const gchar * (*ptr_g_uri_get_user)(GUri * uri);
    const gchar * (*ptr_g_uri_get_password)(GUri * uri);
    const gchar * (*ptr_g_uri_get_auth_params)(GUri * uri);
    const gchar * (*ptr_g_uri_get_host)(GUri * uri);
    gint (*ptr_g_uri_get_port)(GUri * uri);
    const gchar * (*ptr_g_uri_get_path)(GUri * uri);
    const gchar * (*ptr_g_uri_get_query)(GUri * uri);
    const gchar * (*ptr_g_uri_get_fragment)(GUri * uri);
    GUriFlags (*ptr_g_uri_get_flags)(GUri * uri);
    GHashTable * (*ptr_g_uri_parse_params)(const gchar * params, gssize length, const gchar * separators, GUriParamsFlags flags, GError * * error);
    void (*ptr_g_uri_params_iter_init)(GUriParamsIter * iter, const gchar * params, gssize length, const gchar * separators, GUriParamsFlags flags);
    gboolean (*ptr_g_uri_params_iter_next)(GUriParamsIter * iter, gchar * * attribute, gchar * * value, GError * * error);
    GQuark (*ptr_g_uri_error_quark)(void);
    char * (*ptr_g_uri_unescape_string)(const char * escaped_string, const char * illegal_characters);
    char * (*ptr_g_uri_unescape_segment)(const char * escaped_string, const char * escaped_string_end, const char * illegal_characters);
    char * (*ptr_g_uri_parse_scheme)(const char * uri);
    const char * (*ptr_g_uri_peek_scheme)(const char * uri);
    char * (*ptr_g_uri_escape_string)(const char * unescaped, const char * reserved_chars_allowed, gboolean allow_utf8);
    GBytes * (*ptr_g_uri_unescape_bytes)(const char * escaped_string, gssize length, const char * illegal_characters, GError * * error);
    char * (*ptr_g_uri_escape_bytes)(const guint8 * unescaped, gsize length, const char * reserved_chars_allowed);
    gboolean (*ptr_g_uuid_string_is_valid)(const gchar * str);
    gchar * (*ptr_g_uuid_string_random)(void);
    const gchar * (*ptr_glib_check_version)(guint required_major, guint required_minor, guint required_micro);
    GMemChunk * (*ptr_g_mem_chunk_new)(const gchar * name, gint atom_size, gsize area_size, gint type);
    void (*ptr_g_mem_chunk_destroy)(GMemChunk * mem_chunk);
    gpointer (*ptr_g_mem_chunk_alloc)(GMemChunk * mem_chunk);
    gpointer (*ptr_g_mem_chunk_alloc0)(GMemChunk * mem_chunk);
    void (*ptr_g_mem_chunk_free)(GMemChunk * mem_chunk, gpointer mem);
    void (*ptr_g_mem_chunk_clean)(GMemChunk * mem_chunk);
    void (*ptr_g_mem_chunk_reset)(GMemChunk * mem_chunk);
    void (*ptr_g_mem_chunk_print)(GMemChunk * mem_chunk);
    void (*ptr_g_mem_chunk_info)(void);
    void (*ptr_g_blow_chunks)(void);
    GAllocator * (*ptr_g_allocator_new)(const gchar * name, guint n_preallocs);
    void (*ptr_g_allocator_free)(GAllocator * allocator);
    void (*ptr_g_list_push_allocator)(GAllocator * allocator);
    void (*ptr_g_list_pop_allocator)(void);
    void (*ptr_g_slist_push_allocator)(GAllocator * allocator);
    void (*ptr_g_slist_pop_allocator)(void);
    void (*ptr_g_node_push_allocator)(GAllocator * allocator);
    void (*ptr_g_node_pop_allocator)(void);
    GCache * (*ptr_g_cache_new)(GCacheNewFunc value_new_func, GCacheDestroyFunc value_destroy_func, GCacheDupFunc key_dup_func, GCacheDestroyFunc key_destroy_func, GHashFunc hash_key_func, GHashFunc hash_value_func, GEqualFunc key_equal_func);
    void (*ptr_g_cache_destroy)(GCache * cache);
    gpointer (*ptr_g_cache_insert)(GCache * cache, gpointer key);
    void (*ptr_g_cache_remove)(GCache * cache, gconstpointer value);
    void (*ptr_g_cache_key_foreach)(GCache * cache, GHFunc func, gpointer user_data);
    void (*ptr_g_cache_value_foreach)(GCache * cache, GHFunc func, gpointer user_data);
    GCompletion * (*ptr_g_completion_new)(GCompletionFunc func);
    void (*ptr_g_completion_add_items)(GCompletion * cmp, GList * items);
    void (*ptr_g_completion_remove_items)(GCompletion * cmp, GList * items);
    void (*ptr_g_completion_clear_items)(GCompletion * cmp);
    GList * (*ptr_g_completion_complete)(GCompletion * cmp, const gchar * prefix, gchar * * new_prefix);
    GList * (*ptr_g_completion_complete_utf8)(GCompletion * cmp, const gchar * prefix, gchar * * new_prefix);
    void (*ptr_g_completion_set_compare)(GCompletion * cmp, GCompletionStrncmpFunc strncmp_func);
    void (*ptr_g_completion_free)(GCompletion * cmp);
    GRelation * (*ptr_g_relation_new)(gint fields);
    void (*ptr_g_relation_destroy)(GRelation * relation);
    void (*ptr_g_relation_index)(GRelation * relation, gint field, GHashFunc hash_func, GEqualFunc key_equal_func);
    gint (*ptr_g_relation_delete)(GRelation * relation, gconstpointer key, gint field);
    GTuples * (*ptr_g_relation_select)(GRelation * relation, gconstpointer key, gint field);
    gint (*ptr_g_relation_count)(GRelation * relation, gconstpointer key, gint field);
    void (*ptr_g_relation_print)(GRelation * relation);
    void (*ptr_g_tuples_destroy)(GTuples * tuples);
    gpointer (*ptr_g_tuples_index)(GTuples * tuples, gint index_, gint field);
    GThread * (*ptr_g_thread_create)(GThreadFunc func, gpointer data, gboolean joinable, GError * * error);
    GThread * (*ptr_g_thread_create_full)(GThreadFunc func, gpointer data, gulong stack_size, gboolean joinable, gboolean bound, GThreadPriority priority, GError * * error);
    void (*ptr_g_thread_set_priority)(GThread * thread, GThreadPriority priority);
    void (*ptr_g_thread_foreach)(GFunc thread_func, gpointer user_data);
    void (*ptr_g_static_mutex_init)(GStaticMutex * mutex);
    void (*ptr_g_static_mutex_free)(GStaticMutex * mutex);
    GMutex * (*ptr_g_static_mutex_get_mutex_impl)(GStaticMutex * mutex);
    void (*ptr_g_static_rec_mutex_init)(GStaticRecMutex * mutex);
    void (*ptr_g_static_rec_mutex_lock)(GStaticRecMutex * mutex);
    gboolean (*ptr_g_static_rec_mutex_trylock)(GStaticRecMutex * mutex);
    void (*ptr_g_static_rec_mutex_unlock)(GStaticRecMutex * mutex);
    void (*ptr_g_static_rec_mutex_lock_full)(GStaticRecMutex * mutex, guint depth);
    guint (*ptr_g_static_rec_mutex_unlock_full)(GStaticRecMutex * mutex);
    void (*ptr_g_static_rec_mutex_free)(GStaticRecMutex * mutex);
    void (*ptr_g_static_rw_lock_init)(GStaticRWLock * lock);
    void (*ptr_g_static_rw_lock_reader_lock)(GStaticRWLock * lock);
    gboolean (*ptr_g_static_rw_lock_reader_trylock)(GStaticRWLock * lock);
    void (*ptr_g_static_rw_lock_reader_unlock)(GStaticRWLock * lock);
    void (*ptr_g_static_rw_lock_writer_lock)(GStaticRWLock * lock);
    gboolean (*ptr_g_static_rw_lock_writer_trylock)(GStaticRWLock * lock);
    void (*ptr_g_static_rw_lock_writer_unlock)(GStaticRWLock * lock);
    void (*ptr_g_static_rw_lock_free)(GStaticRWLock * lock);
    GPrivate * (*ptr_g_private_new)(GDestroyNotify notify);
    void (*ptr_g_static_private_init)(GStaticPrivate * private_key);
    gpointer (*ptr_g_static_private_get)(GStaticPrivate * private_key);
    void (*ptr_g_static_private_set)(GStaticPrivate * private_key, gpointer data, GDestroyNotify notify);
    void (*ptr_g_static_private_free)(GStaticPrivate * private_key);
    gboolean (*ptr_g_once_init_enter_impl)(volatile gsize * location);
    void (*ptr_g_thread_init)(gpointer vtable);
    void (*ptr_g_thread_init_with_errorcheck_mutexes)(gpointer vtable);
    gboolean (*ptr_g_thread_get_initialized)(void);
    GMutex * (*ptr_g_mutex_new)(void);
    void (*ptr_g_mutex_free)(GMutex * mutex);
    GCond * (*ptr_g_cond_new)(void);
    void (*ptr_g_cond_free)(GCond * cond);
    gboolean (*ptr_g_cond_timed_wait)(GCond * cond, GMutex * mutex, GTimeVal * abs_time);
    gint (*ptr_g_printf)(const gchar * format, ...);
    gint (*ptr_g_fprintf)(FILE * file, const gchar * format, ...);
    gint (*ptr_g_sprintf)(gchar * string, const gchar * format, ...);
    gint (*ptr_g_vprintf)(const gchar * format, va_list args);
    gint (*ptr_g_vfprintf)(FILE * file, const gchar * format, va_list args);
    gint (*ptr_g_vsprintf)(gchar * string, const gchar * format, va_list args);
    gint (*ptr_g_vasprintf)(gchar * * string, const gchar * format, va_list args);
    int (*ptr_g_access)(const gchar * filename, int mode);
    int (*ptr_g_chdir)(const gchar * path);
    int (*ptr_g_unlink)(const gchar * filename);
    int (*ptr_g_rmdir)(const gchar * filename);
    gboolean (*ptr_g_close)(gint fd, GError * * error);
    GQuark (*ptr_g_unix_error_quark)(void);
    gboolean (*ptr_g_unix_open_pipe)(gint * fds, gint flags, GError * * error);
    gboolean (*ptr_g_unix_set_fd_nonblocking)(gint fd, gboolean nonblock, GError * * error);
    GSource * (*ptr_g_unix_signal_source_new)(gint signum);
    guint (*ptr_g_unix_signal_add_full)(gint priority, gint signum, GSourceFunc handler, gpointer user_data, GDestroyNotify notify);
    guint (*ptr_g_unix_signal_add)(gint signum, GSourceFunc handler, gpointer user_data);
    GSource * (*ptr_g_unix_fd_source_new)(gint fd, GIOCondition condition);
    guint (*ptr_g_unix_fd_add_full)(gint priority, gint fd, GIOCondition condition, GUnixFDSourceFunc function, gpointer user_data, GDestroyNotify notify);
    guint (*ptr_g_unix_fd_add)(gint fd, GIOCondition condition, GUnixFDSourceFunc function, gpointer user_data);
    struct passwd * (*ptr_g_unix_get_passwd_entry)(const gchar * user_name, GError * * error);
    int (*ptr_g_closefrom)(int lowfd);
    int (*ptr_g_fdwalk_set_cloexec)(int lowfd);
} stub_funcs;

void *glib2;

void initialize_glib(void) {
    char *candidates_glib2[] = { "libglib-2.0.so", "libglib-2.0-0.dll" };
    glib2 = try_find_lib(candidates_glib2, 2);

    if (!glib2) {
        fprintf(stderr, "Unable to locate glib2, exiting!");
        exit(1);
    }

    stub_funcs.ptr_g_array_new = try_find_sym(glib2, "g_array_new");
    stub_funcs.ptr_g_array_new_take = try_find_sym(glib2, "g_array_new_take");
    stub_funcs.ptr_g_array_new_take_zero_terminated = try_find_sym(glib2, "g_array_new_take_zero_terminated");
    stub_funcs.ptr_g_array_steal = try_find_sym(glib2, "g_array_steal");
    stub_funcs.ptr_g_array_sized_new = try_find_sym(glib2, "g_array_sized_new");
    stub_funcs.ptr_g_array_copy = try_find_sym(glib2, "g_array_copy");
    stub_funcs.ptr_g_array_free = try_find_sym(glib2, "g_array_free");
    stub_funcs.ptr_g_array_ref = try_find_sym(glib2, "g_array_ref");
    stub_funcs.ptr_g_array_unref = try_find_sym(glib2, "g_array_unref");
    stub_funcs.ptr_g_array_get_element_size = try_find_sym(glib2, "g_array_get_element_size");
    stub_funcs.ptr_g_array_append_vals = try_find_sym(glib2, "g_array_append_vals");
    stub_funcs.ptr_g_array_prepend_vals = try_find_sym(glib2, "g_array_prepend_vals");
    stub_funcs.ptr_g_array_insert_vals = try_find_sym(glib2, "g_array_insert_vals");
    stub_funcs.ptr_g_array_set_size = try_find_sym(glib2, "g_array_set_size");
    stub_funcs.ptr_g_array_remove_index = try_find_sym(glib2, "g_array_remove_index");
    stub_funcs.ptr_g_array_remove_index_fast = try_find_sym(glib2, "g_array_remove_index_fast");
    stub_funcs.ptr_g_array_remove_range = try_find_sym(glib2, "g_array_remove_range");
    stub_funcs.ptr_g_array_sort = try_find_sym(glib2, "g_array_sort");
    stub_funcs.ptr_g_array_sort_with_data = try_find_sym(glib2, "g_array_sort_with_data");
    stub_funcs.ptr_g_array_binary_search = try_find_sym(glib2, "g_array_binary_search");
    stub_funcs.ptr_g_array_set_clear_func = try_find_sym(glib2, "g_array_set_clear_func");
    stub_funcs.ptr_g_ptr_array_new = try_find_sym(glib2, "g_ptr_array_new");
    stub_funcs.ptr_g_ptr_array_new_with_free_func = try_find_sym(glib2, "g_ptr_array_new_with_free_func");
    stub_funcs.ptr_g_ptr_array_new_take = try_find_sym(glib2, "g_ptr_array_new_take");
    stub_funcs.ptr_g_ptr_array_new_from_array = try_find_sym(glib2, "g_ptr_array_new_from_array");
    stub_funcs.ptr_g_ptr_array_steal = try_find_sym(glib2, "g_ptr_array_steal");
    stub_funcs.ptr_g_ptr_array_copy = try_find_sym(glib2, "g_ptr_array_copy");
    stub_funcs.ptr_g_ptr_array_sized_new = try_find_sym(glib2, "g_ptr_array_sized_new");
    stub_funcs.ptr_g_ptr_array_new_full = try_find_sym(glib2, "g_ptr_array_new_full");
    stub_funcs.ptr_g_ptr_array_new_null_terminated = try_find_sym(glib2, "g_ptr_array_new_null_terminated");
    stub_funcs.ptr_g_ptr_array_new_take_null_terminated = try_find_sym(glib2, "g_ptr_array_new_take_null_terminated");
    stub_funcs.ptr_g_ptr_array_new_from_null_terminated_array = try_find_sym(glib2, "g_ptr_array_new_from_null_terminated_array");
    stub_funcs.ptr_g_ptr_array_free = try_find_sym(glib2, "g_ptr_array_free");
    stub_funcs.ptr_g_ptr_array_ref = try_find_sym(glib2, "g_ptr_array_ref");
    stub_funcs.ptr_g_ptr_array_unref = try_find_sym(glib2, "g_ptr_array_unref");
    stub_funcs.ptr_g_ptr_array_set_free_func = try_find_sym(glib2, "g_ptr_array_set_free_func");
    stub_funcs.ptr_g_ptr_array_set_size = try_find_sym(glib2, "g_ptr_array_set_size");
    stub_funcs.ptr_g_ptr_array_remove_index = try_find_sym(glib2, "g_ptr_array_remove_index");
    stub_funcs.ptr_g_ptr_array_remove_index_fast = try_find_sym(glib2, "g_ptr_array_remove_index_fast");
    stub_funcs.ptr_g_ptr_array_steal_index = try_find_sym(glib2, "g_ptr_array_steal_index");
    stub_funcs.ptr_g_ptr_array_steal_index_fast = try_find_sym(glib2, "g_ptr_array_steal_index_fast");
    stub_funcs.ptr_g_ptr_array_remove = try_find_sym(glib2, "g_ptr_array_remove");
    stub_funcs.ptr_g_ptr_array_remove_fast = try_find_sym(glib2, "g_ptr_array_remove_fast");
    stub_funcs.ptr_g_ptr_array_remove_range = try_find_sym(glib2, "g_ptr_array_remove_range");
    stub_funcs.ptr_g_ptr_array_add = try_find_sym(glib2, "g_ptr_array_add");
    stub_funcs.ptr_g_ptr_array_extend = try_find_sym(glib2, "g_ptr_array_extend");
    stub_funcs.ptr_g_ptr_array_extend_and_steal = try_find_sym(glib2, "g_ptr_array_extend_and_steal");
    stub_funcs.ptr_g_ptr_array_insert = try_find_sym(glib2, "g_ptr_array_insert");
    stub_funcs.ptr_g_ptr_array_sort = try_find_sym(glib2, "g_ptr_array_sort");
    stub_funcs.ptr_g_ptr_array_sort_with_data = try_find_sym(glib2, "g_ptr_array_sort_with_data");
    stub_funcs.ptr_g_ptr_array_sort_values = try_find_sym(glib2, "g_ptr_array_sort_values");
    stub_funcs.ptr_g_ptr_array_sort_values_with_data = try_find_sym(glib2, "g_ptr_array_sort_values_with_data");
    stub_funcs.ptr_g_ptr_array_foreach = try_find_sym(glib2, "g_ptr_array_foreach");
    stub_funcs.ptr_g_ptr_array_find = try_find_sym(glib2, "g_ptr_array_find");
    stub_funcs.ptr_g_ptr_array_find_with_equal_func = try_find_sym(glib2, "g_ptr_array_find_with_equal_func");
    stub_funcs.ptr_g_ptr_array_is_null_terminated = try_find_sym(glib2, "g_ptr_array_is_null_terminated");
    stub_funcs.ptr_g_byte_array_new = try_find_sym(glib2, "g_byte_array_new");
    stub_funcs.ptr_g_byte_array_new_take = try_find_sym(glib2, "g_byte_array_new_take");
    stub_funcs.ptr_g_byte_array_steal = try_find_sym(glib2, "g_byte_array_steal");
    stub_funcs.ptr_g_byte_array_sized_new = try_find_sym(glib2, "g_byte_array_sized_new");
    stub_funcs.ptr_g_byte_array_free = try_find_sym(glib2, "g_byte_array_free");
    stub_funcs.ptr_g_byte_array_free_to_bytes = try_find_sym(glib2, "g_byte_array_free_to_bytes");
    stub_funcs.ptr_g_byte_array_ref = try_find_sym(glib2, "g_byte_array_ref");
    stub_funcs.ptr_g_byte_array_unref = try_find_sym(glib2, "g_byte_array_unref");
    stub_funcs.ptr_g_byte_array_append = try_find_sym(glib2, "g_byte_array_append");
    stub_funcs.ptr_g_byte_array_prepend = try_find_sym(glib2, "g_byte_array_prepend");
    stub_funcs.ptr_g_byte_array_set_size = try_find_sym(glib2, "g_byte_array_set_size");
    stub_funcs.ptr_g_byte_array_remove_index = try_find_sym(glib2, "g_byte_array_remove_index");
    stub_funcs.ptr_g_byte_array_remove_index_fast = try_find_sym(glib2, "g_byte_array_remove_index_fast");
    stub_funcs.ptr_g_byte_array_remove_range = try_find_sym(glib2, "g_byte_array_remove_range");
    stub_funcs.ptr_g_byte_array_sort = try_find_sym(glib2, "g_byte_array_sort");
    stub_funcs.ptr_g_byte_array_sort_with_data = try_find_sym(glib2, "g_byte_array_sort_with_data");
    stub_funcs.ptr_g_atomic_int_get = try_find_sym(glib2, "g_atomic_int_get");
    stub_funcs.ptr_g_atomic_int_set = try_find_sym(glib2, "g_atomic_int_set");
    stub_funcs.ptr_g_atomic_int_inc = try_find_sym(glib2, "g_atomic_int_inc");
    stub_funcs.ptr_g_atomic_int_dec_and_test = try_find_sym(glib2, "g_atomic_int_dec_and_test");
    stub_funcs.ptr_g_atomic_int_compare_and_exchange = try_find_sym(glib2, "g_atomic_int_compare_and_exchange");
    stub_funcs.ptr_g_atomic_int_compare_and_exchange_full = try_find_sym(glib2, "g_atomic_int_compare_and_exchange_full");
    stub_funcs.ptr_g_atomic_int_exchange = try_find_sym(glib2, "g_atomic_int_exchange");
    stub_funcs.ptr_g_atomic_int_add = try_find_sym(glib2, "g_atomic_int_add");
    stub_funcs.ptr_g_atomic_int_and = try_find_sym(glib2, "g_atomic_int_and");
    stub_funcs.ptr_g_atomic_int_or = try_find_sym(glib2, "g_atomic_int_or");
    stub_funcs.ptr_g_atomic_int_xor = try_find_sym(glib2, "g_atomic_int_xor");
    stub_funcs.ptr_g_atomic_pointer_get = try_find_sym(glib2, "g_atomic_pointer_get");
    stub_funcs.ptr_g_atomic_pointer_set = try_find_sym(glib2, "g_atomic_pointer_set");
    stub_funcs.ptr_g_atomic_pointer_compare_and_exchange = try_find_sym(glib2, "g_atomic_pointer_compare_and_exchange");
    stub_funcs.ptr_g_atomic_pointer_compare_and_exchange_full = try_find_sym(glib2, "g_atomic_pointer_compare_and_exchange_full");
    stub_funcs.ptr_g_atomic_pointer_exchange = try_find_sym(glib2, "g_atomic_pointer_exchange");
    stub_funcs.ptr_g_atomic_pointer_add = try_find_sym(glib2, "g_atomic_pointer_add");
    stub_funcs.ptr_g_atomic_pointer_and = try_find_sym(glib2, "g_atomic_pointer_and");
    stub_funcs.ptr_g_atomic_pointer_or = try_find_sym(glib2, "g_atomic_pointer_or");
    stub_funcs.ptr_g_atomic_pointer_xor = try_find_sym(glib2, "g_atomic_pointer_xor");
    stub_funcs.ptr_g_atomic_int_exchange_and_add = try_find_sym(glib2, "g_atomic_int_exchange_and_add");
    stub_funcs.ptr_g_quark_try_string = try_find_sym(glib2, "g_quark_try_string");
    stub_funcs.ptr_g_quark_from_static_string = try_find_sym(glib2, "g_quark_from_static_string");
    stub_funcs.ptr_g_quark_from_string = try_find_sym(glib2, "g_quark_from_string");
    stub_funcs.ptr_g_quark_to_string = try_find_sym(glib2, "g_quark_to_string");
    stub_funcs.ptr_g_intern_string = try_find_sym(glib2, "g_intern_string");
    stub_funcs.ptr_g_intern_static_string = try_find_sym(glib2, "g_intern_static_string");
    stub_funcs.ptr_g_error_domain_register_static = try_find_sym(glib2, "g_error_domain_register_static");
    stub_funcs.ptr_g_error_domain_register = try_find_sym(glib2, "g_error_domain_register");
    stub_funcs.ptr_g_error_new = try_find_sym(glib2, "g_error_new");
    stub_funcs.ptr_g_error_new_literal = try_find_sym(glib2, "g_error_new_literal");
    stub_funcs.ptr_g_error_new_valist = try_find_sym(glib2, "g_error_new_valist");
    stub_funcs.ptr_g_error_free = try_find_sym(glib2, "g_error_free");
    stub_funcs.ptr_g_error_copy = try_find_sym(glib2, "g_error_copy");
    stub_funcs.ptr_g_error_matches = try_find_sym(glib2, "g_error_matches");
    stub_funcs.ptr_g_set_error_literal = try_find_sym(glib2, "g_set_error_literal");
    stub_funcs.ptr_g_propagate_error = try_find_sym(glib2, "g_propagate_error");
    stub_funcs.ptr_g_clear_error = try_find_sym(glib2, "g_clear_error");
    stub_funcs.ptr_g_prefix_error_literal = try_find_sym(glib2, "g_prefix_error_literal");
    stub_funcs.ptr_g_get_user_name = try_find_sym(glib2, "g_get_user_name");
    stub_funcs.ptr_g_get_real_name = try_find_sym(glib2, "g_get_real_name");
    stub_funcs.ptr_g_get_home_dir = try_find_sym(glib2, "g_get_home_dir");
    stub_funcs.ptr_g_get_tmp_dir = try_find_sym(glib2, "g_get_tmp_dir");
    stub_funcs.ptr_g_get_host_name = try_find_sym(glib2, "g_get_host_name");
    stub_funcs.ptr_g_get_prgname = try_find_sym(glib2, "g_get_prgname");
    stub_funcs.ptr_g_set_prgname = try_find_sym(glib2, "g_set_prgname");
    stub_funcs.ptr_g_get_application_name = try_find_sym(glib2, "g_get_application_name");
    stub_funcs.ptr_g_set_application_name = try_find_sym(glib2, "g_set_application_name");
    stub_funcs.ptr_g_get_os_info = try_find_sym(glib2, "g_get_os_info");
    stub_funcs.ptr_g_reload_user_special_dirs_cache = try_find_sym(glib2, "g_reload_user_special_dirs_cache");
    stub_funcs.ptr_g_get_user_data_dir = try_find_sym(glib2, "g_get_user_data_dir");
    stub_funcs.ptr_g_get_user_config_dir = try_find_sym(glib2, "g_get_user_config_dir");
    stub_funcs.ptr_g_get_user_cache_dir = try_find_sym(glib2, "g_get_user_cache_dir");
    stub_funcs.ptr_g_get_user_state_dir = try_find_sym(glib2, "g_get_user_state_dir");
    stub_funcs.ptr_g_get_system_data_dirs = try_find_sym(glib2, "g_get_system_data_dirs");
    stub_funcs.ptr_g_get_system_config_dirs = try_find_sym(glib2, "g_get_system_config_dirs");
    stub_funcs.ptr_g_get_user_runtime_dir = try_find_sym(glib2, "g_get_user_runtime_dir");
    stub_funcs.ptr_g_get_user_special_dir = try_find_sym(glib2, "g_get_user_special_dir");
    stub_funcs.ptr_g_parse_debug_string = try_find_sym(glib2, "g_parse_debug_string");
    stub_funcs.ptr_g_snprintf = try_find_sym(glib2, "g_snprintf");
    stub_funcs.ptr_g_vsnprintf = try_find_sym(glib2, "g_vsnprintf");
    stub_funcs.ptr_g_nullify_pointer = try_find_sym(glib2, "g_nullify_pointer");
    stub_funcs.ptr_g_format_size_full = try_find_sym(glib2, "g_format_size_full");
    stub_funcs.ptr_g_format_size = try_find_sym(glib2, "g_format_size");
    stub_funcs.ptr_g_format_size_for_display = try_find_sym(glib2, "g_format_size_for_display");
    stub_funcs.ptr_g_atexit = try_find_sym(glib2, "g_atexit");
    stub_funcs.ptr_g_find_program_in_path = try_find_sym(glib2, "g_find_program_in_path");
    stub_funcs.ptr_g_bit_nth_lsf = try_find_sym(glib2, "g_bit_nth_lsf");
    stub_funcs.ptr_g_bit_nth_msf = try_find_sym(glib2, "g_bit_nth_msf");
    stub_funcs.ptr_g_bit_storage = try_find_sym(glib2, "g_bit_storage");
    stub_funcs.ptr_g_thread_error_quark = try_find_sym(glib2, "g_thread_error_quark");
    stub_funcs.ptr_g_thread_ref = try_find_sym(glib2, "g_thread_ref");
    stub_funcs.ptr_g_thread_unref = try_find_sym(glib2, "g_thread_unref");
    stub_funcs.ptr_g_thread_new = try_find_sym(glib2, "g_thread_new");
    stub_funcs.ptr_g_thread_try_new = try_find_sym(glib2, "g_thread_try_new");
    stub_funcs.ptr_g_thread_self = try_find_sym(glib2, "g_thread_self");
    stub_funcs.ptr_g_thread_exit = try_find_sym(glib2, "g_thread_exit");
    stub_funcs.ptr_g_thread_join = try_find_sym(glib2, "g_thread_join");
    stub_funcs.ptr_g_thread_yield = try_find_sym(glib2, "g_thread_yield");
    stub_funcs.ptr_g_mutex_init = try_find_sym(glib2, "g_mutex_init");
    stub_funcs.ptr_g_mutex_clear = try_find_sym(glib2, "g_mutex_clear");
    stub_funcs.ptr_g_mutex_lock = try_find_sym(glib2, "g_mutex_lock");
    stub_funcs.ptr_g_mutex_trylock = try_find_sym(glib2, "g_mutex_trylock");
    stub_funcs.ptr_g_mutex_unlock = try_find_sym(glib2, "g_mutex_unlock");
    stub_funcs.ptr_g_rw_lock_init = try_find_sym(glib2, "g_rw_lock_init");
    stub_funcs.ptr_g_rw_lock_clear = try_find_sym(glib2, "g_rw_lock_clear");
    stub_funcs.ptr_g_rw_lock_writer_lock = try_find_sym(glib2, "g_rw_lock_writer_lock");
    stub_funcs.ptr_g_rw_lock_writer_trylock = try_find_sym(glib2, "g_rw_lock_writer_trylock");
    stub_funcs.ptr_g_rw_lock_writer_unlock = try_find_sym(glib2, "g_rw_lock_writer_unlock");
    stub_funcs.ptr_g_rw_lock_reader_lock = try_find_sym(glib2, "g_rw_lock_reader_lock");
    stub_funcs.ptr_g_rw_lock_reader_trylock = try_find_sym(glib2, "g_rw_lock_reader_trylock");
    stub_funcs.ptr_g_rw_lock_reader_unlock = try_find_sym(glib2, "g_rw_lock_reader_unlock");
    stub_funcs.ptr_g_rec_mutex_init = try_find_sym(glib2, "g_rec_mutex_init");
    stub_funcs.ptr_g_rec_mutex_clear = try_find_sym(glib2, "g_rec_mutex_clear");
    stub_funcs.ptr_g_rec_mutex_lock = try_find_sym(glib2, "g_rec_mutex_lock");
    stub_funcs.ptr_g_rec_mutex_trylock = try_find_sym(glib2, "g_rec_mutex_trylock");
    stub_funcs.ptr_g_rec_mutex_unlock = try_find_sym(glib2, "g_rec_mutex_unlock");
    stub_funcs.ptr_g_cond_init = try_find_sym(glib2, "g_cond_init");
    stub_funcs.ptr_g_cond_clear = try_find_sym(glib2, "g_cond_clear");
    stub_funcs.ptr_g_cond_wait = try_find_sym(glib2, "g_cond_wait");
    stub_funcs.ptr_g_cond_signal = try_find_sym(glib2, "g_cond_signal");
    stub_funcs.ptr_g_cond_broadcast = try_find_sym(glib2, "g_cond_broadcast");
    stub_funcs.ptr_g_cond_wait_until = try_find_sym(glib2, "g_cond_wait_until");
    stub_funcs.ptr_g_private_get = try_find_sym(glib2, "g_private_get");
    stub_funcs.ptr_g_private_set = try_find_sym(glib2, "g_private_set");
    stub_funcs.ptr_g_private_replace = try_find_sym(glib2, "g_private_replace");
    stub_funcs.ptr_g_once_impl = try_find_sym(glib2, "g_once_impl");
    stub_funcs.ptr_g_once_init_enter = try_find_sym(glib2, "g_once_init_enter");
    stub_funcs.ptr_g_once_init_leave = try_find_sym(glib2, "g_once_init_leave");
    stub_funcs.ptr_g_once_init_enter_pointer = try_find_sym(glib2, "g_once_init_enter_pointer");
    stub_funcs.ptr_g_once_init_leave_pointer = try_find_sym(glib2, "g_once_init_leave_pointer");
    stub_funcs.ptr_g_get_num_processors = try_find_sym(glib2, "g_get_num_processors");
    stub_funcs.ptr_g_async_queue_new = try_find_sym(glib2, "g_async_queue_new");
    stub_funcs.ptr_g_async_queue_new_full = try_find_sym(glib2, "g_async_queue_new_full");
    stub_funcs.ptr_g_async_queue_lock = try_find_sym(glib2, "g_async_queue_lock");
    stub_funcs.ptr_g_async_queue_unlock = try_find_sym(glib2, "g_async_queue_unlock");
    stub_funcs.ptr_g_async_queue_ref = try_find_sym(glib2, "g_async_queue_ref");
    stub_funcs.ptr_g_async_queue_unref = try_find_sym(glib2, "g_async_queue_unref");
    stub_funcs.ptr_g_async_queue_ref_unlocked = try_find_sym(glib2, "g_async_queue_ref_unlocked");
    stub_funcs.ptr_g_async_queue_unref_and_unlock = try_find_sym(glib2, "g_async_queue_unref_and_unlock");
    stub_funcs.ptr_g_async_queue_push = try_find_sym(glib2, "g_async_queue_push");
    stub_funcs.ptr_g_async_queue_push_unlocked = try_find_sym(glib2, "g_async_queue_push_unlocked");
    stub_funcs.ptr_g_async_queue_push_sorted = try_find_sym(glib2, "g_async_queue_push_sorted");
    stub_funcs.ptr_g_async_queue_push_sorted_unlocked = try_find_sym(glib2, "g_async_queue_push_sorted_unlocked");
    stub_funcs.ptr_g_async_queue_pop = try_find_sym(glib2, "g_async_queue_pop");
    stub_funcs.ptr_g_async_queue_pop_unlocked = try_find_sym(glib2, "g_async_queue_pop_unlocked");
    stub_funcs.ptr_g_async_queue_try_pop = try_find_sym(glib2, "g_async_queue_try_pop");
    stub_funcs.ptr_g_async_queue_try_pop_unlocked = try_find_sym(glib2, "g_async_queue_try_pop_unlocked");
    stub_funcs.ptr_g_async_queue_timeout_pop = try_find_sym(glib2, "g_async_queue_timeout_pop");
    stub_funcs.ptr_g_async_queue_timeout_pop_unlocked = try_find_sym(glib2, "g_async_queue_timeout_pop_unlocked");
    stub_funcs.ptr_g_async_queue_length = try_find_sym(glib2, "g_async_queue_length");
    stub_funcs.ptr_g_async_queue_length_unlocked = try_find_sym(glib2, "g_async_queue_length_unlocked");
    stub_funcs.ptr_g_async_queue_sort = try_find_sym(glib2, "g_async_queue_sort");
    stub_funcs.ptr_g_async_queue_sort_unlocked = try_find_sym(glib2, "g_async_queue_sort_unlocked");
    stub_funcs.ptr_g_async_queue_remove = try_find_sym(glib2, "g_async_queue_remove");
    stub_funcs.ptr_g_async_queue_remove_unlocked = try_find_sym(glib2, "g_async_queue_remove_unlocked");
    stub_funcs.ptr_g_async_queue_push_front = try_find_sym(glib2, "g_async_queue_push_front");
    stub_funcs.ptr_g_async_queue_push_front_unlocked = try_find_sym(glib2, "g_async_queue_push_front_unlocked");
    stub_funcs.ptr_g_async_queue_timed_pop = try_find_sym(glib2, "g_async_queue_timed_pop");
    stub_funcs.ptr_g_async_queue_timed_pop_unlocked = try_find_sym(glib2, "g_async_queue_timed_pop_unlocked");
    stub_funcs.ptr_g_on_error_query = try_find_sym(glib2, "g_on_error_query");
    stub_funcs.ptr_g_on_error_stack_trace = try_find_sym(glib2, "g_on_error_stack_trace");
    stub_funcs.ptr_g_base64_encode_step = try_find_sym(glib2, "g_base64_encode_step");
    stub_funcs.ptr_g_base64_encode_close = try_find_sym(glib2, "g_base64_encode_close");
    stub_funcs.ptr_g_base64_encode = try_find_sym(glib2, "g_base64_encode");
    stub_funcs.ptr_g_base64_decode_step = try_find_sym(glib2, "g_base64_decode_step");
    stub_funcs.ptr_g_base64_decode = try_find_sym(glib2, "g_base64_decode");
    stub_funcs.ptr_g_base64_decode_inplace = try_find_sym(glib2, "g_base64_decode_inplace");
    stub_funcs.ptr_g_bit_lock = try_find_sym(glib2, "g_bit_lock");
    stub_funcs.ptr_g_bit_trylock = try_find_sym(glib2, "g_bit_trylock");
    stub_funcs.ptr_g_bit_unlock = try_find_sym(glib2, "g_bit_unlock");
    stub_funcs.ptr_g_pointer_bit_lock = try_find_sym(glib2, "g_pointer_bit_lock");
    stub_funcs.ptr_g_pointer_bit_lock_and_get = try_find_sym(glib2, "g_pointer_bit_lock_and_get");
    stub_funcs.ptr_g_pointer_bit_trylock = try_find_sym(glib2, "g_pointer_bit_trylock");
    stub_funcs.ptr_g_pointer_bit_unlock = try_find_sym(glib2, "g_pointer_bit_unlock");
    stub_funcs.ptr_g_pointer_bit_lock_mask_ptr = try_find_sym(glib2, "g_pointer_bit_lock_mask_ptr");
    stub_funcs.ptr_g_pointer_bit_unlock_and_set = try_find_sym(glib2, "g_pointer_bit_unlock_and_set");
    stub_funcs.ptr_g_time_zone_new = try_find_sym(glib2, "g_time_zone_new");
    stub_funcs.ptr_g_time_zone_new_identifier = try_find_sym(glib2, "g_time_zone_new_identifier");
    stub_funcs.ptr_g_time_zone_new_utc = try_find_sym(glib2, "g_time_zone_new_utc");
    stub_funcs.ptr_g_time_zone_new_local = try_find_sym(glib2, "g_time_zone_new_local");
    stub_funcs.ptr_g_time_zone_new_offset = try_find_sym(glib2, "g_time_zone_new_offset");
    stub_funcs.ptr_g_time_zone_ref = try_find_sym(glib2, "g_time_zone_ref");
    stub_funcs.ptr_g_time_zone_unref = try_find_sym(glib2, "g_time_zone_unref");
    stub_funcs.ptr_g_time_zone_find_interval = try_find_sym(glib2, "g_time_zone_find_interval");
    stub_funcs.ptr_g_time_zone_adjust_time = try_find_sym(glib2, "g_time_zone_adjust_time");
    stub_funcs.ptr_g_time_zone_get_abbreviation = try_find_sym(glib2, "g_time_zone_get_abbreviation");
    stub_funcs.ptr_g_time_zone_get_offset = try_find_sym(glib2, "g_time_zone_get_offset");
    stub_funcs.ptr_g_time_zone_is_dst = try_find_sym(glib2, "g_time_zone_is_dst");
    stub_funcs.ptr_g_time_zone_get_identifier = try_find_sym(glib2, "g_time_zone_get_identifier");
    stub_funcs.ptr_g_date_time_unref = try_find_sym(glib2, "g_date_time_unref");
    stub_funcs.ptr_g_date_time_ref = try_find_sym(glib2, "g_date_time_ref");
    stub_funcs.ptr_g_date_time_new_now = try_find_sym(glib2, "g_date_time_new_now");
    stub_funcs.ptr_g_date_time_new_now_local = try_find_sym(glib2, "g_date_time_new_now_local");
    stub_funcs.ptr_g_date_time_new_now_utc = try_find_sym(glib2, "g_date_time_new_now_utc");
    stub_funcs.ptr_g_date_time_new_from_unix_local = try_find_sym(glib2, "g_date_time_new_from_unix_local");
    stub_funcs.ptr_g_date_time_new_from_unix_utc = try_find_sym(glib2, "g_date_time_new_from_unix_utc");
    stub_funcs.ptr_g_date_time_new_from_unix_local_usec = try_find_sym(glib2, "g_date_time_new_from_unix_local_usec");
    stub_funcs.ptr_g_date_time_new_from_unix_utc_usec = try_find_sym(glib2, "g_date_time_new_from_unix_utc_usec");
    stub_funcs.ptr_g_date_time_new_from_timeval_local = try_find_sym(glib2, "g_date_time_new_from_timeval_local");
    stub_funcs.ptr_g_date_time_new_from_timeval_utc = try_find_sym(glib2, "g_date_time_new_from_timeval_utc");
    stub_funcs.ptr_g_date_time_new_from_iso8601 = try_find_sym(glib2, "g_date_time_new_from_iso8601");
    stub_funcs.ptr_g_date_time_new = try_find_sym(glib2, "g_date_time_new");
    stub_funcs.ptr_g_date_time_new_local = try_find_sym(glib2, "g_date_time_new_local");
    stub_funcs.ptr_g_date_time_new_utc = try_find_sym(glib2, "g_date_time_new_utc");
    stub_funcs.ptr_g_date_time_add = try_find_sym(glib2, "g_date_time_add");
    stub_funcs.ptr_g_date_time_add_years = try_find_sym(glib2, "g_date_time_add_years");
    stub_funcs.ptr_g_date_time_add_months = try_find_sym(glib2, "g_date_time_add_months");
    stub_funcs.ptr_g_date_time_add_weeks = try_find_sym(glib2, "g_date_time_add_weeks");
    stub_funcs.ptr_g_date_time_add_days = try_find_sym(glib2, "g_date_time_add_days");
    stub_funcs.ptr_g_date_time_add_hours = try_find_sym(glib2, "g_date_time_add_hours");
    stub_funcs.ptr_g_date_time_add_minutes = try_find_sym(glib2, "g_date_time_add_minutes");
    stub_funcs.ptr_g_date_time_add_seconds = try_find_sym(glib2, "g_date_time_add_seconds");
    stub_funcs.ptr_g_date_time_add_full = try_find_sym(glib2, "g_date_time_add_full");
    stub_funcs.ptr_g_date_time_compare = try_find_sym(glib2, "g_date_time_compare");
    stub_funcs.ptr_g_date_time_difference = try_find_sym(glib2, "g_date_time_difference");
    stub_funcs.ptr_g_date_time_hash = try_find_sym(glib2, "g_date_time_hash");
    stub_funcs.ptr_g_date_time_equal = try_find_sym(glib2, "g_date_time_equal");
    stub_funcs.ptr_g_date_time_get_ymd = try_find_sym(glib2, "g_date_time_get_ymd");
    stub_funcs.ptr_g_date_time_get_year = try_find_sym(glib2, "g_date_time_get_year");
    stub_funcs.ptr_g_date_time_get_month = try_find_sym(glib2, "g_date_time_get_month");
    stub_funcs.ptr_g_date_time_get_day_of_month = try_find_sym(glib2, "g_date_time_get_day_of_month");
    stub_funcs.ptr_g_date_time_get_week_numbering_year = try_find_sym(glib2, "g_date_time_get_week_numbering_year");
    stub_funcs.ptr_g_date_time_get_week_of_year = try_find_sym(glib2, "g_date_time_get_week_of_year");
    stub_funcs.ptr_g_date_time_get_day_of_week = try_find_sym(glib2, "g_date_time_get_day_of_week");
    stub_funcs.ptr_g_date_time_get_day_of_year = try_find_sym(glib2, "g_date_time_get_day_of_year");
    stub_funcs.ptr_g_date_time_get_hour = try_find_sym(glib2, "g_date_time_get_hour");
    stub_funcs.ptr_g_date_time_get_minute = try_find_sym(glib2, "g_date_time_get_minute");
    stub_funcs.ptr_g_date_time_get_second = try_find_sym(glib2, "g_date_time_get_second");
    stub_funcs.ptr_g_date_time_get_microsecond = try_find_sym(glib2, "g_date_time_get_microsecond");
    stub_funcs.ptr_g_date_time_get_seconds = try_find_sym(glib2, "g_date_time_get_seconds");
    stub_funcs.ptr_g_date_time_to_unix = try_find_sym(glib2, "g_date_time_to_unix");
    stub_funcs.ptr_g_date_time_to_unix_usec = try_find_sym(glib2, "g_date_time_to_unix_usec");
    stub_funcs.ptr_g_date_time_to_timeval = try_find_sym(glib2, "g_date_time_to_timeval");
    stub_funcs.ptr_g_date_time_get_utc_offset = try_find_sym(glib2, "g_date_time_get_utc_offset");
    stub_funcs.ptr_g_date_time_get_timezone = try_find_sym(glib2, "g_date_time_get_timezone");
    stub_funcs.ptr_g_date_time_get_timezone_abbreviation = try_find_sym(glib2, "g_date_time_get_timezone_abbreviation");
    stub_funcs.ptr_g_date_time_is_daylight_savings = try_find_sym(glib2, "g_date_time_is_daylight_savings");
    stub_funcs.ptr_g_date_time_to_timezone = try_find_sym(glib2, "g_date_time_to_timezone");
    stub_funcs.ptr_g_date_time_to_local = try_find_sym(glib2, "g_date_time_to_local");
    stub_funcs.ptr_g_date_time_to_utc = try_find_sym(glib2, "g_date_time_to_utc");
    stub_funcs.ptr_g_date_time_format = try_find_sym(glib2, "g_date_time_format");
    stub_funcs.ptr_g_date_time_format_iso8601 = try_find_sym(glib2, "g_date_time_format_iso8601");
    stub_funcs.ptr_g_bookmark_file_error_quark = try_find_sym(glib2, "g_bookmark_file_error_quark");
    stub_funcs.ptr_g_bookmark_file_new = try_find_sym(glib2, "g_bookmark_file_new");
    stub_funcs.ptr_g_bookmark_file_free = try_find_sym(glib2, "g_bookmark_file_free");
    stub_funcs.ptr_g_bookmark_file_copy = try_find_sym(glib2, "g_bookmark_file_copy");
    stub_funcs.ptr_g_bookmark_file_load_from_file = try_find_sym(glib2, "g_bookmark_file_load_from_file");
    stub_funcs.ptr_g_bookmark_file_load_from_data = try_find_sym(glib2, "g_bookmark_file_load_from_data");
    stub_funcs.ptr_g_bookmark_file_load_from_data_dirs = try_find_sym(glib2, "g_bookmark_file_load_from_data_dirs");
    stub_funcs.ptr_g_bookmark_file_to_data = try_find_sym(glib2, "g_bookmark_file_to_data");
    stub_funcs.ptr_g_bookmark_file_to_file = try_find_sym(glib2, "g_bookmark_file_to_file");
    stub_funcs.ptr_g_bookmark_file_set_title = try_find_sym(glib2, "g_bookmark_file_set_title");
    stub_funcs.ptr_g_bookmark_file_get_title = try_find_sym(glib2, "g_bookmark_file_get_title");
    stub_funcs.ptr_g_bookmark_file_set_description = try_find_sym(glib2, "g_bookmark_file_set_description");
    stub_funcs.ptr_g_bookmark_file_get_description = try_find_sym(glib2, "g_bookmark_file_get_description");
    stub_funcs.ptr_g_bookmark_file_set_mime_type = try_find_sym(glib2, "g_bookmark_file_set_mime_type");
    stub_funcs.ptr_g_bookmark_file_get_mime_type = try_find_sym(glib2, "g_bookmark_file_get_mime_type");
    stub_funcs.ptr_g_bookmark_file_set_groups = try_find_sym(glib2, "g_bookmark_file_set_groups");
    stub_funcs.ptr_g_bookmark_file_add_group = try_find_sym(glib2, "g_bookmark_file_add_group");
    stub_funcs.ptr_g_bookmark_file_has_group = try_find_sym(glib2, "g_bookmark_file_has_group");
    stub_funcs.ptr_g_bookmark_file_get_groups = try_find_sym(glib2, "g_bookmark_file_get_groups");
    stub_funcs.ptr_g_bookmark_file_add_application = try_find_sym(glib2, "g_bookmark_file_add_application");
    stub_funcs.ptr_g_bookmark_file_has_application = try_find_sym(glib2, "g_bookmark_file_has_application");
    stub_funcs.ptr_g_bookmark_file_get_applications = try_find_sym(glib2, "g_bookmark_file_get_applications");
    stub_funcs.ptr_g_bookmark_file_set_app_info = try_find_sym(glib2, "g_bookmark_file_set_app_info");
    stub_funcs.ptr_g_bookmark_file_set_application_info = try_find_sym(glib2, "g_bookmark_file_set_application_info");
    stub_funcs.ptr_g_bookmark_file_get_app_info = try_find_sym(glib2, "g_bookmark_file_get_app_info");
    stub_funcs.ptr_g_bookmark_file_get_application_info = try_find_sym(glib2, "g_bookmark_file_get_application_info");
    stub_funcs.ptr_g_bookmark_file_set_is_private = try_find_sym(glib2, "g_bookmark_file_set_is_private");
    stub_funcs.ptr_g_bookmark_file_get_is_private = try_find_sym(glib2, "g_bookmark_file_get_is_private");
    stub_funcs.ptr_g_bookmark_file_set_icon = try_find_sym(glib2, "g_bookmark_file_set_icon");
    stub_funcs.ptr_g_bookmark_file_get_icon = try_find_sym(glib2, "g_bookmark_file_get_icon");
    stub_funcs.ptr_g_bookmark_file_set_added = try_find_sym(glib2, "g_bookmark_file_set_added");
    stub_funcs.ptr_g_bookmark_file_set_added_date_time = try_find_sym(glib2, "g_bookmark_file_set_added_date_time");
    stub_funcs.ptr_g_bookmark_file_get_added = try_find_sym(glib2, "g_bookmark_file_get_added");
    stub_funcs.ptr_g_bookmark_file_get_added_date_time = try_find_sym(glib2, "g_bookmark_file_get_added_date_time");
    stub_funcs.ptr_g_bookmark_file_set_modified = try_find_sym(glib2, "g_bookmark_file_set_modified");
    stub_funcs.ptr_g_bookmark_file_set_modified_date_time = try_find_sym(glib2, "g_bookmark_file_set_modified_date_time");
    stub_funcs.ptr_g_bookmark_file_get_modified = try_find_sym(glib2, "g_bookmark_file_get_modified");
    stub_funcs.ptr_g_bookmark_file_get_modified_date_time = try_find_sym(glib2, "g_bookmark_file_get_modified_date_time");
    stub_funcs.ptr_g_bookmark_file_set_visited = try_find_sym(glib2, "g_bookmark_file_set_visited");
    stub_funcs.ptr_g_bookmark_file_set_visited_date_time = try_find_sym(glib2, "g_bookmark_file_set_visited_date_time");
    stub_funcs.ptr_g_bookmark_file_get_visited = try_find_sym(glib2, "g_bookmark_file_get_visited");
    stub_funcs.ptr_g_bookmark_file_get_visited_date_time = try_find_sym(glib2, "g_bookmark_file_get_visited_date_time");
    stub_funcs.ptr_g_bookmark_file_has_item = try_find_sym(glib2, "g_bookmark_file_has_item");
    stub_funcs.ptr_g_bookmark_file_get_size = try_find_sym(glib2, "g_bookmark_file_get_size");
    stub_funcs.ptr_g_bookmark_file_get_uris = try_find_sym(glib2, "g_bookmark_file_get_uris");
    stub_funcs.ptr_g_bookmark_file_remove_group = try_find_sym(glib2, "g_bookmark_file_remove_group");
    stub_funcs.ptr_g_bookmark_file_remove_application = try_find_sym(glib2, "g_bookmark_file_remove_application");
    stub_funcs.ptr_g_bookmark_file_remove_item = try_find_sym(glib2, "g_bookmark_file_remove_item");
    stub_funcs.ptr_g_bookmark_file_move_item = try_find_sym(glib2, "g_bookmark_file_move_item");
    stub_funcs.ptr_g_bytes_new = try_find_sym(glib2, "g_bytes_new");
    stub_funcs.ptr_g_bytes_new_take = try_find_sym(glib2, "g_bytes_new_take");
    stub_funcs.ptr_g_bytes_new_static = try_find_sym(glib2, "g_bytes_new_static");
    stub_funcs.ptr_g_bytes_new_with_free_func = try_find_sym(glib2, "g_bytes_new_with_free_func");
    stub_funcs.ptr_g_bytes_new_from_bytes = try_find_sym(glib2, "g_bytes_new_from_bytes");
    stub_funcs.ptr_g_bytes_get_data = try_find_sym(glib2, "g_bytes_get_data");
    stub_funcs.ptr_g_bytes_get_size = try_find_sym(glib2, "g_bytes_get_size");
    stub_funcs.ptr_g_bytes_ref = try_find_sym(glib2, "g_bytes_ref");
    stub_funcs.ptr_g_bytes_unref = try_find_sym(glib2, "g_bytes_unref");
    stub_funcs.ptr_g_bytes_unref_to_data = try_find_sym(glib2, "g_bytes_unref_to_data");
    stub_funcs.ptr_g_bytes_unref_to_array = try_find_sym(glib2, "g_bytes_unref_to_array");
    stub_funcs.ptr_g_bytes_hash = try_find_sym(glib2, "g_bytes_hash");
    stub_funcs.ptr_g_bytes_equal = try_find_sym(glib2, "g_bytes_equal");
    stub_funcs.ptr_g_bytes_compare = try_find_sym(glib2, "g_bytes_compare");
    stub_funcs.ptr_g_bytes_get_region = try_find_sym(glib2, "g_bytes_get_region");
    stub_funcs.ptr_g_get_charset = try_find_sym(glib2, "g_get_charset");
    stub_funcs.ptr_g_get_codeset = try_find_sym(glib2, "g_get_codeset");
    stub_funcs.ptr_g_get_console_charset = try_find_sym(glib2, "g_get_console_charset");
    stub_funcs.ptr_g_get_language_names = try_find_sym(glib2, "g_get_language_names");
    stub_funcs.ptr_g_get_language_names_with_category = try_find_sym(glib2, "g_get_language_names_with_category");
    stub_funcs.ptr_g_get_locale_variants = try_find_sym(glib2, "g_get_locale_variants");
    stub_funcs.ptr_g_checksum_type_get_length = try_find_sym(glib2, "g_checksum_type_get_length");
    stub_funcs.ptr_g_checksum_new = try_find_sym(glib2, "g_checksum_new");
    stub_funcs.ptr_g_checksum_reset = try_find_sym(glib2, "g_checksum_reset");
    stub_funcs.ptr_g_checksum_copy = try_find_sym(glib2, "g_checksum_copy");
    stub_funcs.ptr_g_checksum_free = try_find_sym(glib2, "g_checksum_free");
    stub_funcs.ptr_g_checksum_update = try_find_sym(glib2, "g_checksum_update");
    stub_funcs.ptr_g_checksum_get_string = try_find_sym(glib2, "g_checksum_get_string");
    stub_funcs.ptr_g_checksum_get_digest = try_find_sym(glib2, "g_checksum_get_digest");
    stub_funcs.ptr_g_compute_checksum_for_data = try_find_sym(glib2, "g_compute_checksum_for_data");
    stub_funcs.ptr_g_compute_checksum_for_string = try_find_sym(glib2, "g_compute_checksum_for_string");
    stub_funcs.ptr_g_compute_checksum_for_bytes = try_find_sym(glib2, "g_compute_checksum_for_bytes");
    stub_funcs.ptr_g_convert_error_quark = try_find_sym(glib2, "g_convert_error_quark");
    stub_funcs.ptr_g_iconv_open = try_find_sym(glib2, "g_iconv_open");
    stub_funcs.ptr_g_iconv = try_find_sym(glib2, "g_iconv");
    stub_funcs.ptr_g_iconv_close = try_find_sym(glib2, "g_iconv_close");
    stub_funcs.ptr_g_convert = try_find_sym(glib2, "g_convert");
    stub_funcs.ptr_g_convert_with_iconv = try_find_sym(glib2, "g_convert_with_iconv");
    stub_funcs.ptr_g_convert_with_fallback = try_find_sym(glib2, "g_convert_with_fallback");
    stub_funcs.ptr_g_locale_to_utf8 = try_find_sym(glib2, "g_locale_to_utf8");
    stub_funcs.ptr_g_locale_from_utf8 = try_find_sym(glib2, "g_locale_from_utf8");
    stub_funcs.ptr_g_filename_to_utf8 = try_find_sym(glib2, "g_filename_to_utf8");
    stub_funcs.ptr_g_filename_from_utf8 = try_find_sym(glib2, "g_filename_from_utf8");
    stub_funcs.ptr_g_filename_from_uri = try_find_sym(glib2, "g_filename_from_uri");
    stub_funcs.ptr_g_filename_to_uri = try_find_sym(glib2, "g_filename_to_uri");
    stub_funcs.ptr_g_filename_display_name = try_find_sym(glib2, "g_filename_display_name");
    stub_funcs.ptr_g_get_filename_charsets = try_find_sym(glib2, "g_get_filename_charsets");
    stub_funcs.ptr_g_filename_display_basename = try_find_sym(glib2, "g_filename_display_basename");
    stub_funcs.ptr_g_uri_list_extract_uris = try_find_sym(glib2, "g_uri_list_extract_uris");
    stub_funcs.ptr_g_datalist_init = try_find_sym(glib2, "g_datalist_init");
    stub_funcs.ptr_g_datalist_clear = try_find_sym(glib2, "g_datalist_clear");
    stub_funcs.ptr_g_datalist_id_get_data = try_find_sym(glib2, "g_datalist_id_get_data");
    stub_funcs.ptr_g_datalist_id_set_data_full = try_find_sym(glib2, "g_datalist_id_set_data_full");
    stub_funcs.ptr_g_datalist_id_remove_multiple = try_find_sym(glib2, "g_datalist_id_remove_multiple");
    stub_funcs.ptr_g_datalist_id_dup_data = try_find_sym(glib2, "g_datalist_id_dup_data");
    stub_funcs.ptr_g_datalist_id_replace_data = try_find_sym(glib2, "g_datalist_id_replace_data");
    stub_funcs.ptr_g_datalist_id_remove_no_notify = try_find_sym(glib2, "g_datalist_id_remove_no_notify");
    stub_funcs.ptr_g_datalist_foreach = try_find_sym(glib2, "g_datalist_foreach");
    stub_funcs.ptr_g_datalist_set_flags = try_find_sym(glib2, "g_datalist_set_flags");
    stub_funcs.ptr_g_datalist_unset_flags = try_find_sym(glib2, "g_datalist_unset_flags");
    stub_funcs.ptr_g_datalist_get_flags = try_find_sym(glib2, "g_datalist_get_flags");
    stub_funcs.ptr_g_dataset_destroy = try_find_sym(glib2, "g_dataset_destroy");
    stub_funcs.ptr_g_dataset_id_get_data = try_find_sym(glib2, "g_dataset_id_get_data");
    stub_funcs.ptr_g_datalist_get_data = try_find_sym(glib2, "g_datalist_get_data");
    stub_funcs.ptr_g_dataset_id_set_data_full = try_find_sym(glib2, "g_dataset_id_set_data_full");
    stub_funcs.ptr_g_dataset_id_remove_no_notify = try_find_sym(glib2, "g_dataset_id_remove_no_notify");
    stub_funcs.ptr_g_dataset_foreach = try_find_sym(glib2, "g_dataset_foreach");
    stub_funcs.ptr_g_date_new = try_find_sym(glib2, "g_date_new");
    stub_funcs.ptr_g_date_new_dmy = try_find_sym(glib2, "g_date_new_dmy");
    stub_funcs.ptr_g_date_new_julian = try_find_sym(glib2, "g_date_new_julian");
    stub_funcs.ptr_g_date_free = try_find_sym(glib2, "g_date_free");
    stub_funcs.ptr_g_date_copy = try_find_sym(glib2, "g_date_copy");
    stub_funcs.ptr_g_date_valid = try_find_sym(glib2, "g_date_valid");
    stub_funcs.ptr_g_date_valid_day = try_find_sym(glib2, "g_date_valid_day");
    stub_funcs.ptr_g_date_valid_month = try_find_sym(glib2, "g_date_valid_month");
    stub_funcs.ptr_g_date_valid_year = try_find_sym(glib2, "g_date_valid_year");
    stub_funcs.ptr_g_date_valid_weekday = try_find_sym(glib2, "g_date_valid_weekday");
    stub_funcs.ptr_g_date_valid_julian = try_find_sym(glib2, "g_date_valid_julian");
    stub_funcs.ptr_g_date_valid_dmy = try_find_sym(glib2, "g_date_valid_dmy");
    stub_funcs.ptr_g_date_get_weekday = try_find_sym(glib2, "g_date_get_weekday");
    stub_funcs.ptr_g_date_get_month = try_find_sym(glib2, "g_date_get_month");
    stub_funcs.ptr_g_date_get_year = try_find_sym(glib2, "g_date_get_year");
    stub_funcs.ptr_g_date_get_day = try_find_sym(glib2, "g_date_get_day");
    stub_funcs.ptr_g_date_get_julian = try_find_sym(glib2, "g_date_get_julian");
    stub_funcs.ptr_g_date_get_day_of_year = try_find_sym(glib2, "g_date_get_day_of_year");
    stub_funcs.ptr_g_date_get_monday_week_of_year = try_find_sym(glib2, "g_date_get_monday_week_of_year");
    stub_funcs.ptr_g_date_get_sunday_week_of_year = try_find_sym(glib2, "g_date_get_sunday_week_of_year");
    stub_funcs.ptr_g_date_get_iso8601_week_of_year = try_find_sym(glib2, "g_date_get_iso8601_week_of_year");
    stub_funcs.ptr_g_date_clear = try_find_sym(glib2, "g_date_clear");
    stub_funcs.ptr_g_date_set_parse = try_find_sym(glib2, "g_date_set_parse");
    stub_funcs.ptr_g_date_set_time_t = try_find_sym(glib2, "g_date_set_time_t");
    stub_funcs.ptr_g_date_set_time_val = try_find_sym(glib2, "g_date_set_time_val");
    stub_funcs.ptr_g_date_set_time = try_find_sym(glib2, "g_date_set_time");
    stub_funcs.ptr_g_date_set_month = try_find_sym(glib2, "g_date_set_month");
    stub_funcs.ptr_g_date_set_day = try_find_sym(glib2, "g_date_set_day");
    stub_funcs.ptr_g_date_set_year = try_find_sym(glib2, "g_date_set_year");
    stub_funcs.ptr_g_date_set_dmy = try_find_sym(glib2, "g_date_set_dmy");
    stub_funcs.ptr_g_date_set_julian = try_find_sym(glib2, "g_date_set_julian");
    stub_funcs.ptr_g_date_is_first_of_month = try_find_sym(glib2, "g_date_is_first_of_month");
    stub_funcs.ptr_g_date_is_last_of_month = try_find_sym(glib2, "g_date_is_last_of_month");
    stub_funcs.ptr_g_date_add_days = try_find_sym(glib2, "g_date_add_days");
    stub_funcs.ptr_g_date_subtract_days = try_find_sym(glib2, "g_date_subtract_days");
    stub_funcs.ptr_g_date_add_months = try_find_sym(glib2, "g_date_add_months");
    stub_funcs.ptr_g_date_subtract_months = try_find_sym(glib2, "g_date_subtract_months");
    stub_funcs.ptr_g_date_add_years = try_find_sym(glib2, "g_date_add_years");
    stub_funcs.ptr_g_date_subtract_years = try_find_sym(glib2, "g_date_subtract_years");
    stub_funcs.ptr_g_date_is_leap_year = try_find_sym(glib2, "g_date_is_leap_year");
    stub_funcs.ptr_g_date_get_days_in_month = try_find_sym(glib2, "g_date_get_days_in_month");
    stub_funcs.ptr_g_date_get_monday_weeks_in_year = try_find_sym(glib2, "g_date_get_monday_weeks_in_year");
    stub_funcs.ptr_g_date_get_sunday_weeks_in_year = try_find_sym(glib2, "g_date_get_sunday_weeks_in_year");
    stub_funcs.ptr_g_date_days_between = try_find_sym(glib2, "g_date_days_between");
    stub_funcs.ptr_g_date_compare = try_find_sym(glib2, "g_date_compare");
    stub_funcs.ptr_g_date_to_struct_tm = try_find_sym(glib2, "g_date_to_struct_tm");
    stub_funcs.ptr_g_date_clamp = try_find_sym(glib2, "g_date_clamp");
    stub_funcs.ptr_g_date_order = try_find_sym(glib2, "g_date_order");
    stub_funcs.ptr_g_date_strftime = try_find_sym(glib2, "g_date_strftime");
    stub_funcs.ptr_g_dir_open = try_find_sym(glib2, "g_dir_open");
    stub_funcs.ptr_g_dir_read_name = try_find_sym(glib2, "g_dir_read_name");
    stub_funcs.ptr_g_dir_rewind = try_find_sym(glib2, "g_dir_rewind");
    stub_funcs.ptr_g_dir_close = try_find_sym(glib2, "g_dir_close");
    stub_funcs.ptr_g_dir_ref = try_find_sym(glib2, "g_dir_ref");
    stub_funcs.ptr_g_dir_unref = try_find_sym(glib2, "g_dir_unref");
    stub_funcs.ptr_g_getenv = try_find_sym(glib2, "g_getenv");
    stub_funcs.ptr_g_setenv = try_find_sym(glib2, "g_setenv");
    stub_funcs.ptr_g_unsetenv = try_find_sym(glib2, "g_unsetenv");
    stub_funcs.ptr_g_listenv = try_find_sym(glib2, "g_listenv");
    stub_funcs.ptr_g_get_environ = try_find_sym(glib2, "g_get_environ");
    stub_funcs.ptr_g_environ_getenv = try_find_sym(glib2, "g_environ_getenv");
    stub_funcs.ptr_g_environ_setenv = try_find_sym(glib2, "g_environ_setenv");
    stub_funcs.ptr_g_environ_unsetenv = try_find_sym(glib2, "g_environ_unsetenv");
    stub_funcs.ptr_g_file_error_quark = try_find_sym(glib2, "g_file_error_quark");
    stub_funcs.ptr_g_file_error_from_errno = try_find_sym(glib2, "g_file_error_from_errno");
    stub_funcs.ptr_g_file_test = try_find_sym(glib2, "g_file_test");
    stub_funcs.ptr_g_file_get_contents = try_find_sym(glib2, "g_file_get_contents");
    stub_funcs.ptr_g_file_set_contents = try_find_sym(glib2, "g_file_set_contents");
    stub_funcs.ptr_g_file_set_contents_full = try_find_sym(glib2, "g_file_set_contents_full");
    stub_funcs.ptr_g_file_read_link = try_find_sym(glib2, "g_file_read_link");
    stub_funcs.ptr_g_mkdtemp = try_find_sym(glib2, "g_mkdtemp");
    stub_funcs.ptr_g_mkdtemp_full = try_find_sym(glib2, "g_mkdtemp_full");
    stub_funcs.ptr_g_mkstemp = try_find_sym(glib2, "g_mkstemp");
    stub_funcs.ptr_g_mkstemp_full = try_find_sym(glib2, "g_mkstemp_full");
    stub_funcs.ptr_g_file_open_tmp = try_find_sym(glib2, "g_file_open_tmp");
    stub_funcs.ptr_g_dir_make_tmp = try_find_sym(glib2, "g_dir_make_tmp");
    stub_funcs.ptr_g_build_pathv = try_find_sym(glib2, "g_build_pathv");
    stub_funcs.ptr_g_build_filename = try_find_sym(glib2, "g_build_filename");
    stub_funcs.ptr_g_build_filenamev = try_find_sym(glib2, "g_build_filenamev");
    stub_funcs.ptr_g_build_filename_valist = try_find_sym(glib2, "g_build_filename_valist");
    stub_funcs.ptr_g_mkdir_with_parents = try_find_sym(glib2, "g_mkdir_with_parents");
    stub_funcs.ptr_g_path_is_absolute = try_find_sym(glib2, "g_path_is_absolute");
    stub_funcs.ptr_g_path_skip_root = try_find_sym(glib2, "g_path_skip_root");
    stub_funcs.ptr_g_basename = try_find_sym(glib2, "g_basename");
    stub_funcs.ptr_g_get_current_dir = try_find_sym(glib2, "g_get_current_dir");
    stub_funcs.ptr_g_path_get_basename = try_find_sym(glib2, "g_path_get_basename");
    stub_funcs.ptr_g_path_get_dirname = try_find_sym(glib2, "g_path_get_dirname");
    stub_funcs.ptr_g_canonicalize_filename = try_find_sym(glib2, "g_canonicalize_filename");
    stub_funcs.ptr_g_strip_context = try_find_sym(glib2, "g_strip_context");
    stub_funcs.ptr_g_dgettext = try_find_sym(glib2, "g_dgettext");
    stub_funcs.ptr_g_dcgettext = try_find_sym(glib2, "g_dcgettext");
    stub_funcs.ptr_g_dngettext = try_find_sym(glib2, "g_dngettext");
    stub_funcs.ptr_g_dpgettext = try_find_sym(glib2, "g_dpgettext");
    stub_funcs.ptr_g_dpgettext2 = try_find_sym(glib2, "g_dpgettext2");
    stub_funcs.ptr_g_free = try_find_sym(glib2, "g_free");
    stub_funcs.ptr_g_free_sized = try_find_sym(glib2, "g_free_sized");
    stub_funcs.ptr_g_clear_pointer = try_find_sym(glib2, "g_clear_pointer");
    stub_funcs.ptr_g_malloc = try_find_sym(glib2, "g_malloc");
    stub_funcs.ptr_g_malloc0 = try_find_sym(glib2, "g_malloc0");
    stub_funcs.ptr_g_realloc = try_find_sym(glib2, "g_realloc");
    stub_funcs.ptr_g_try_malloc = try_find_sym(glib2, "g_try_malloc");
    stub_funcs.ptr_g_try_malloc0 = try_find_sym(glib2, "g_try_malloc0");
    stub_funcs.ptr_g_try_realloc = try_find_sym(glib2, "g_try_realloc");
    stub_funcs.ptr_g_malloc_n = try_find_sym(glib2, "g_malloc_n");
    stub_funcs.ptr_g_malloc0_n = try_find_sym(glib2, "g_malloc0_n");
    stub_funcs.ptr_g_realloc_n = try_find_sym(glib2, "g_realloc_n");
    stub_funcs.ptr_g_try_malloc_n = try_find_sym(glib2, "g_try_malloc_n");
    stub_funcs.ptr_g_try_malloc0_n = try_find_sym(glib2, "g_try_malloc0_n");
    stub_funcs.ptr_g_try_realloc_n = try_find_sym(glib2, "g_try_realloc_n");
    stub_funcs.ptr_g_aligned_alloc = try_find_sym(glib2, "g_aligned_alloc");
    stub_funcs.ptr_g_aligned_alloc0 = try_find_sym(glib2, "g_aligned_alloc0");
    stub_funcs.ptr_g_aligned_free = try_find_sym(glib2, "g_aligned_free");
    stub_funcs.ptr_g_aligned_free_sized = try_find_sym(glib2, "g_aligned_free_sized");
    stub_funcs.ptr_g_mem_set_vtable = try_find_sym(glib2, "g_mem_set_vtable");
    stub_funcs.ptr_g_mem_is_system_malloc = try_find_sym(glib2, "g_mem_is_system_malloc");
    stub_funcs.ptr_g_mem_profile = try_find_sym(glib2, "g_mem_profile");
    stub_funcs.ptr_g_node_new = try_find_sym(glib2, "g_node_new");
    stub_funcs.ptr_g_node_destroy = try_find_sym(glib2, "g_node_destroy");
    stub_funcs.ptr_g_node_unlink = try_find_sym(glib2, "g_node_unlink");
    stub_funcs.ptr_g_node_copy_deep = try_find_sym(glib2, "g_node_copy_deep");
    stub_funcs.ptr_g_node_copy = try_find_sym(glib2, "g_node_copy");
    stub_funcs.ptr_g_node_insert = try_find_sym(glib2, "g_node_insert");
    stub_funcs.ptr_g_node_insert_before = try_find_sym(glib2, "g_node_insert_before");
    stub_funcs.ptr_g_node_insert_after = try_find_sym(glib2, "g_node_insert_after");
    stub_funcs.ptr_g_node_prepend = try_find_sym(glib2, "g_node_prepend");
    stub_funcs.ptr_g_node_n_nodes = try_find_sym(glib2, "g_node_n_nodes");
    stub_funcs.ptr_g_node_get_root = try_find_sym(glib2, "g_node_get_root");
    stub_funcs.ptr_g_node_is_ancestor = try_find_sym(glib2, "g_node_is_ancestor");
    stub_funcs.ptr_g_node_depth = try_find_sym(glib2, "g_node_depth");
    stub_funcs.ptr_g_node_find = try_find_sym(glib2, "g_node_find");
    stub_funcs.ptr_g_node_traverse = try_find_sym(glib2, "g_node_traverse");
    stub_funcs.ptr_g_node_max_height = try_find_sym(glib2, "g_node_max_height");
    stub_funcs.ptr_g_node_children_foreach = try_find_sym(glib2, "g_node_children_foreach");
    stub_funcs.ptr_g_node_reverse_children = try_find_sym(glib2, "g_node_reverse_children");
    stub_funcs.ptr_g_node_n_children = try_find_sym(glib2, "g_node_n_children");
    stub_funcs.ptr_g_node_nth_child = try_find_sym(glib2, "g_node_nth_child");
    stub_funcs.ptr_g_node_last_child = try_find_sym(glib2, "g_node_last_child");
    stub_funcs.ptr_g_node_find_child = try_find_sym(glib2, "g_node_find_child");
    stub_funcs.ptr_g_node_child_position = try_find_sym(glib2, "g_node_child_position");
    stub_funcs.ptr_g_node_child_index = try_find_sym(glib2, "g_node_child_index");
    stub_funcs.ptr_g_node_first_sibling = try_find_sym(glib2, "g_node_first_sibling");
    stub_funcs.ptr_g_node_last_sibling = try_find_sym(glib2, "g_node_last_sibling");
    stub_funcs.ptr_g_list_alloc = try_find_sym(glib2, "g_list_alloc");
    stub_funcs.ptr_g_list_free = try_find_sym(glib2, "g_list_free");
    stub_funcs.ptr_g_list_free_1 = try_find_sym(glib2, "g_list_free_1");
    stub_funcs.ptr_g_list_free_full = try_find_sym(glib2, "g_list_free_full");
    stub_funcs.ptr_g_list_append = try_find_sym(glib2, "g_list_append");
    stub_funcs.ptr_g_list_prepend = try_find_sym(glib2, "g_list_prepend");
    stub_funcs.ptr_g_list_insert = try_find_sym(glib2, "g_list_insert");
    stub_funcs.ptr_g_list_insert_sorted = try_find_sym(glib2, "g_list_insert_sorted");
    stub_funcs.ptr_g_list_insert_sorted_with_data = try_find_sym(glib2, "g_list_insert_sorted_with_data");
    stub_funcs.ptr_g_list_insert_before = try_find_sym(glib2, "g_list_insert_before");
    stub_funcs.ptr_g_list_insert_before_link = try_find_sym(glib2, "g_list_insert_before_link");
    stub_funcs.ptr_g_list_concat = try_find_sym(glib2, "g_list_concat");
    stub_funcs.ptr_g_list_remove = try_find_sym(glib2, "g_list_remove");
    stub_funcs.ptr_g_list_remove_all = try_find_sym(glib2, "g_list_remove_all");
    stub_funcs.ptr_g_list_remove_link = try_find_sym(glib2, "g_list_remove_link");
    stub_funcs.ptr_g_list_delete_link = try_find_sym(glib2, "g_list_delete_link");
    stub_funcs.ptr_g_list_reverse = try_find_sym(glib2, "g_list_reverse");
    stub_funcs.ptr_g_list_copy = try_find_sym(glib2, "g_list_copy");
    stub_funcs.ptr_g_list_copy_deep = try_find_sym(glib2, "g_list_copy_deep");
    stub_funcs.ptr_g_list_nth = try_find_sym(glib2, "g_list_nth");
    stub_funcs.ptr_g_list_nth_prev = try_find_sym(glib2, "g_list_nth_prev");
    stub_funcs.ptr_g_list_find = try_find_sym(glib2, "g_list_find");
    stub_funcs.ptr_g_list_find_custom = try_find_sym(glib2, "g_list_find_custom");
    stub_funcs.ptr_g_list_position = try_find_sym(glib2, "g_list_position");
    stub_funcs.ptr_g_list_index = try_find_sym(glib2, "g_list_index");
    stub_funcs.ptr_g_list_last = try_find_sym(glib2, "g_list_last");
    stub_funcs.ptr_g_list_first = try_find_sym(glib2, "g_list_first");
    stub_funcs.ptr_g_list_length = try_find_sym(glib2, "g_list_length");
    stub_funcs.ptr_g_list_foreach = try_find_sym(glib2, "g_list_foreach");
    stub_funcs.ptr_g_list_sort = try_find_sym(glib2, "g_list_sort");
    stub_funcs.ptr_g_list_sort_with_data = try_find_sym(glib2, "g_list_sort_with_data");
    stub_funcs.ptr_g_list_nth_data = try_find_sym(glib2, "g_list_nth_data");
    stub_funcs.ptr_g_clear_list = try_find_sym(glib2, "g_clear_list");
    stub_funcs.ptr_g_hash_table_new = try_find_sym(glib2, "g_hash_table_new");
    stub_funcs.ptr_g_hash_table_new_full = try_find_sym(glib2, "g_hash_table_new_full");
    stub_funcs.ptr_g_hash_table_new_similar = try_find_sym(glib2, "g_hash_table_new_similar");
    stub_funcs.ptr_g_hash_table_destroy = try_find_sym(glib2, "g_hash_table_destroy");
    stub_funcs.ptr_g_hash_table_insert = try_find_sym(glib2, "g_hash_table_insert");
    stub_funcs.ptr_g_hash_table_replace = try_find_sym(glib2, "g_hash_table_replace");
    stub_funcs.ptr_g_hash_table_add = try_find_sym(glib2, "g_hash_table_add");
    stub_funcs.ptr_g_hash_table_remove = try_find_sym(glib2, "g_hash_table_remove");
    stub_funcs.ptr_g_hash_table_remove_all = try_find_sym(glib2, "g_hash_table_remove_all");
    stub_funcs.ptr_g_hash_table_steal = try_find_sym(glib2, "g_hash_table_steal");
    stub_funcs.ptr_g_hash_table_steal_extended = try_find_sym(glib2, "g_hash_table_steal_extended");
    stub_funcs.ptr_g_hash_table_steal_all = try_find_sym(glib2, "g_hash_table_steal_all");
    stub_funcs.ptr_g_hash_table_steal_all_keys = try_find_sym(glib2, "g_hash_table_steal_all_keys");
    stub_funcs.ptr_g_hash_table_steal_all_values = try_find_sym(glib2, "g_hash_table_steal_all_values");
    stub_funcs.ptr_g_hash_table_lookup = try_find_sym(glib2, "g_hash_table_lookup");
    stub_funcs.ptr_g_hash_table_contains = try_find_sym(glib2, "g_hash_table_contains");
    stub_funcs.ptr_g_hash_table_lookup_extended = try_find_sym(glib2, "g_hash_table_lookup_extended");
    stub_funcs.ptr_g_hash_table_foreach = try_find_sym(glib2, "g_hash_table_foreach");
    stub_funcs.ptr_g_hash_table_find = try_find_sym(glib2, "g_hash_table_find");
    stub_funcs.ptr_g_hash_table_foreach_remove = try_find_sym(glib2, "g_hash_table_foreach_remove");
    stub_funcs.ptr_g_hash_table_foreach_steal = try_find_sym(glib2, "g_hash_table_foreach_steal");
    stub_funcs.ptr_g_hash_table_size = try_find_sym(glib2, "g_hash_table_size");
    stub_funcs.ptr_g_hash_table_get_keys = try_find_sym(glib2, "g_hash_table_get_keys");
    stub_funcs.ptr_g_hash_table_get_values = try_find_sym(glib2, "g_hash_table_get_values");
    stub_funcs.ptr_g_hash_table_get_keys_as_array = try_find_sym(glib2, "g_hash_table_get_keys_as_array");
    stub_funcs.ptr_g_hash_table_get_keys_as_ptr_array = try_find_sym(glib2, "g_hash_table_get_keys_as_ptr_array");
    stub_funcs.ptr_g_hash_table_get_values_as_ptr_array = try_find_sym(glib2, "g_hash_table_get_values_as_ptr_array");
    stub_funcs.ptr_g_hash_table_iter_init = try_find_sym(glib2, "g_hash_table_iter_init");
    stub_funcs.ptr_g_hash_table_iter_next = try_find_sym(glib2, "g_hash_table_iter_next");
    stub_funcs.ptr_g_hash_table_iter_get_hash_table = try_find_sym(glib2, "g_hash_table_iter_get_hash_table");
    stub_funcs.ptr_g_hash_table_iter_remove = try_find_sym(glib2, "g_hash_table_iter_remove");
    stub_funcs.ptr_g_hash_table_iter_replace = try_find_sym(glib2, "g_hash_table_iter_replace");
    stub_funcs.ptr_g_hash_table_iter_steal = try_find_sym(glib2, "g_hash_table_iter_steal");
    stub_funcs.ptr_g_hash_table_ref = try_find_sym(glib2, "g_hash_table_ref");
    stub_funcs.ptr_g_hash_table_unref = try_find_sym(glib2, "g_hash_table_unref");
    stub_funcs.ptr_g_str_equal = try_find_sym(glib2, "g_str_equal");
    stub_funcs.ptr_g_str_hash = try_find_sym(glib2, "g_str_hash");
    stub_funcs.ptr_g_int_equal = try_find_sym(glib2, "g_int_equal");
    stub_funcs.ptr_g_int_hash = try_find_sym(glib2, "g_int_hash");
    stub_funcs.ptr_g_int64_equal = try_find_sym(glib2, "g_int64_equal");
    stub_funcs.ptr_g_int64_hash = try_find_sym(glib2, "g_int64_hash");
    stub_funcs.ptr_g_double_equal = try_find_sym(glib2, "g_double_equal");
    stub_funcs.ptr_g_double_hash = try_find_sym(glib2, "g_double_hash");
    stub_funcs.ptr_g_direct_hash = try_find_sym(glib2, "g_direct_hash");
    stub_funcs.ptr_g_direct_equal = try_find_sym(glib2, "g_direct_equal");
    stub_funcs.ptr_g_hmac_new = try_find_sym(glib2, "g_hmac_new");
    stub_funcs.ptr_g_hmac_copy = try_find_sym(glib2, "g_hmac_copy");
    stub_funcs.ptr_g_hmac_ref = try_find_sym(glib2, "g_hmac_ref");
    stub_funcs.ptr_g_hmac_unref = try_find_sym(glib2, "g_hmac_unref");
    stub_funcs.ptr_g_hmac_update = try_find_sym(glib2, "g_hmac_update");
    stub_funcs.ptr_g_hmac_get_string = try_find_sym(glib2, "g_hmac_get_string");
    stub_funcs.ptr_g_hmac_get_digest = try_find_sym(glib2, "g_hmac_get_digest");
    stub_funcs.ptr_g_compute_hmac_for_data = try_find_sym(glib2, "g_compute_hmac_for_data");
    stub_funcs.ptr_g_compute_hmac_for_string = try_find_sym(glib2, "g_compute_hmac_for_string");
    stub_funcs.ptr_g_compute_hmac_for_bytes = try_find_sym(glib2, "g_compute_hmac_for_bytes");
    stub_funcs.ptr_g_hook_list_init = try_find_sym(glib2, "g_hook_list_init");
    stub_funcs.ptr_g_hook_list_clear = try_find_sym(glib2, "g_hook_list_clear");
    stub_funcs.ptr_g_hook_alloc = try_find_sym(glib2, "g_hook_alloc");
    stub_funcs.ptr_g_hook_free = try_find_sym(glib2, "g_hook_free");
    stub_funcs.ptr_g_hook_ref = try_find_sym(glib2, "g_hook_ref");
    stub_funcs.ptr_g_hook_unref = try_find_sym(glib2, "g_hook_unref");
    stub_funcs.ptr_g_hook_destroy = try_find_sym(glib2, "g_hook_destroy");
    stub_funcs.ptr_g_hook_destroy_link = try_find_sym(glib2, "g_hook_destroy_link");
    stub_funcs.ptr_g_hook_prepend = try_find_sym(glib2, "g_hook_prepend");
    stub_funcs.ptr_g_hook_insert_before = try_find_sym(glib2, "g_hook_insert_before");
    stub_funcs.ptr_g_hook_insert_sorted = try_find_sym(glib2, "g_hook_insert_sorted");
    stub_funcs.ptr_g_hook_get = try_find_sym(glib2, "g_hook_get");
    stub_funcs.ptr_g_hook_find = try_find_sym(glib2, "g_hook_find");
    stub_funcs.ptr_g_hook_find_data = try_find_sym(glib2, "g_hook_find_data");
    stub_funcs.ptr_g_hook_find_func = try_find_sym(glib2, "g_hook_find_func");
    stub_funcs.ptr_g_hook_find_func_data = try_find_sym(glib2, "g_hook_find_func_data");
    stub_funcs.ptr_g_hook_first_valid = try_find_sym(glib2, "g_hook_first_valid");
    stub_funcs.ptr_g_hook_next_valid = try_find_sym(glib2, "g_hook_next_valid");
    stub_funcs.ptr_g_hook_compare_ids = try_find_sym(glib2, "g_hook_compare_ids");
    stub_funcs.ptr_g_hook_list_invoke = try_find_sym(glib2, "g_hook_list_invoke");
    stub_funcs.ptr_g_hook_list_invoke_check = try_find_sym(glib2, "g_hook_list_invoke_check");
    stub_funcs.ptr_g_hook_list_marshal = try_find_sym(glib2, "g_hook_list_marshal");
    stub_funcs.ptr_g_hook_list_marshal_check = try_find_sym(glib2, "g_hook_list_marshal_check");
    stub_funcs.ptr_g_hostname_is_non_ascii = try_find_sym(glib2, "g_hostname_is_non_ascii");
    stub_funcs.ptr_g_hostname_is_ascii_encoded = try_find_sym(glib2, "g_hostname_is_ascii_encoded");
    stub_funcs.ptr_g_hostname_is_ip_address = try_find_sym(glib2, "g_hostname_is_ip_address");
    stub_funcs.ptr_g_hostname_to_ascii = try_find_sym(glib2, "g_hostname_to_ascii");
    stub_funcs.ptr_g_hostname_to_unicode = try_find_sym(glib2, "g_hostname_to_unicode");
    stub_funcs.ptr_g_poll = try_find_sym(glib2, "g_poll");
    stub_funcs.ptr_g_slist_alloc = try_find_sym(glib2, "g_slist_alloc");
    stub_funcs.ptr_g_slist_free = try_find_sym(glib2, "g_slist_free");
    stub_funcs.ptr_g_slist_free_1 = try_find_sym(glib2, "g_slist_free_1");
    stub_funcs.ptr_g_slist_free_full = try_find_sym(glib2, "g_slist_free_full");
    stub_funcs.ptr_g_slist_append = try_find_sym(glib2, "g_slist_append");
    stub_funcs.ptr_g_slist_prepend = try_find_sym(glib2, "g_slist_prepend");
    stub_funcs.ptr_g_slist_insert = try_find_sym(glib2, "g_slist_insert");
    stub_funcs.ptr_g_slist_insert_sorted = try_find_sym(glib2, "g_slist_insert_sorted");
    stub_funcs.ptr_g_slist_insert_sorted_with_data = try_find_sym(glib2, "g_slist_insert_sorted_with_data");
    stub_funcs.ptr_g_slist_insert_before = try_find_sym(glib2, "g_slist_insert_before");
    stub_funcs.ptr_g_slist_concat = try_find_sym(glib2, "g_slist_concat");
    stub_funcs.ptr_g_slist_remove = try_find_sym(glib2, "g_slist_remove");
    stub_funcs.ptr_g_slist_remove_all = try_find_sym(glib2, "g_slist_remove_all");
    stub_funcs.ptr_g_slist_remove_link = try_find_sym(glib2, "g_slist_remove_link");
    stub_funcs.ptr_g_slist_delete_link = try_find_sym(glib2, "g_slist_delete_link");
    stub_funcs.ptr_g_slist_reverse = try_find_sym(glib2, "g_slist_reverse");
    stub_funcs.ptr_g_slist_copy = try_find_sym(glib2, "g_slist_copy");
    stub_funcs.ptr_g_slist_copy_deep = try_find_sym(glib2, "g_slist_copy_deep");
    stub_funcs.ptr_g_slist_nth = try_find_sym(glib2, "g_slist_nth");
    stub_funcs.ptr_g_slist_find = try_find_sym(glib2, "g_slist_find");
    stub_funcs.ptr_g_slist_find_custom = try_find_sym(glib2, "g_slist_find_custom");
    stub_funcs.ptr_g_slist_position = try_find_sym(glib2, "g_slist_position");
    stub_funcs.ptr_g_slist_index = try_find_sym(glib2, "g_slist_index");
    stub_funcs.ptr_g_slist_last = try_find_sym(glib2, "g_slist_last");
    stub_funcs.ptr_g_slist_length = try_find_sym(glib2, "g_slist_length");
    stub_funcs.ptr_g_slist_foreach = try_find_sym(glib2, "g_slist_foreach");
    stub_funcs.ptr_g_slist_sort = try_find_sym(glib2, "g_slist_sort");
    stub_funcs.ptr_g_slist_sort_with_data = try_find_sym(glib2, "g_slist_sort_with_data");
    stub_funcs.ptr_g_slist_nth_data = try_find_sym(glib2, "g_slist_nth_data");
    stub_funcs.ptr_g_clear_slist = try_find_sym(glib2, "g_clear_slist");
    stub_funcs.ptr_g_main_context_new = try_find_sym(glib2, "g_main_context_new");
    stub_funcs.ptr_g_main_context_new_with_flags = try_find_sym(glib2, "g_main_context_new_with_flags");
    stub_funcs.ptr_g_main_context_ref = try_find_sym(glib2, "g_main_context_ref");
    stub_funcs.ptr_g_main_context_unref = try_find_sym(glib2, "g_main_context_unref");
    stub_funcs.ptr_g_main_context_default = try_find_sym(glib2, "g_main_context_default");
    stub_funcs.ptr_g_main_context_iteration = try_find_sym(glib2, "g_main_context_iteration");
    stub_funcs.ptr_g_main_context_pending = try_find_sym(glib2, "g_main_context_pending");
    stub_funcs.ptr_g_main_context_find_source_by_id = try_find_sym(glib2, "g_main_context_find_source_by_id");
    stub_funcs.ptr_g_main_context_find_source_by_user_data = try_find_sym(glib2, "g_main_context_find_source_by_user_data");
    stub_funcs.ptr_g_main_context_find_source_by_funcs_user_data = try_find_sym(glib2, "g_main_context_find_source_by_funcs_user_data");
    stub_funcs.ptr_g_main_context_wakeup = try_find_sym(glib2, "g_main_context_wakeup");
    stub_funcs.ptr_g_main_context_acquire = try_find_sym(glib2, "g_main_context_acquire");
    stub_funcs.ptr_g_main_context_release = try_find_sym(glib2, "g_main_context_release");
    stub_funcs.ptr_g_main_context_is_owner = try_find_sym(glib2, "g_main_context_is_owner");
    stub_funcs.ptr_g_main_context_wait = try_find_sym(glib2, "g_main_context_wait");
    stub_funcs.ptr_g_main_context_prepare = try_find_sym(glib2, "g_main_context_prepare");
    stub_funcs.ptr_g_main_context_query = try_find_sym(glib2, "g_main_context_query");
    stub_funcs.ptr_g_main_context_check = try_find_sym(glib2, "g_main_context_check");
    stub_funcs.ptr_g_main_context_dispatch = try_find_sym(glib2, "g_main_context_dispatch");
    stub_funcs.ptr_g_main_context_set_poll_func = try_find_sym(glib2, "g_main_context_set_poll_func");
    stub_funcs.ptr_g_main_context_get_poll_func = try_find_sym(glib2, "g_main_context_get_poll_func");
    stub_funcs.ptr_g_main_context_add_poll = try_find_sym(glib2, "g_main_context_add_poll");
    stub_funcs.ptr_g_main_context_remove_poll = try_find_sym(glib2, "g_main_context_remove_poll");
    stub_funcs.ptr_g_main_depth = try_find_sym(glib2, "g_main_depth");
    stub_funcs.ptr_g_main_current_source = try_find_sym(glib2, "g_main_current_source");
    stub_funcs.ptr_g_main_context_push_thread_default = try_find_sym(glib2, "g_main_context_push_thread_default");
    stub_funcs.ptr_g_main_context_pop_thread_default = try_find_sym(glib2, "g_main_context_pop_thread_default");
    stub_funcs.ptr_g_main_context_get_thread_default = try_find_sym(glib2, "g_main_context_get_thread_default");
    stub_funcs.ptr_g_main_context_ref_thread_default = try_find_sym(glib2, "g_main_context_ref_thread_default");
    stub_funcs.ptr_g_main_loop_new = try_find_sym(glib2, "g_main_loop_new");
    stub_funcs.ptr_g_main_loop_run = try_find_sym(glib2, "g_main_loop_run");
    stub_funcs.ptr_g_main_loop_quit = try_find_sym(glib2, "g_main_loop_quit");
    stub_funcs.ptr_g_main_loop_ref = try_find_sym(glib2, "g_main_loop_ref");
    stub_funcs.ptr_g_main_loop_unref = try_find_sym(glib2, "g_main_loop_unref");
    stub_funcs.ptr_g_main_loop_is_running = try_find_sym(glib2, "g_main_loop_is_running");
    stub_funcs.ptr_g_main_loop_get_context = try_find_sym(glib2, "g_main_loop_get_context");
    stub_funcs.ptr_g_source_new = try_find_sym(glib2, "g_source_new");
    stub_funcs.ptr_g_source_set_dispose_function = try_find_sym(glib2, "g_source_set_dispose_function");
    stub_funcs.ptr_g_source_ref = try_find_sym(glib2, "g_source_ref");
    stub_funcs.ptr_g_source_unref = try_find_sym(glib2, "g_source_unref");
    stub_funcs.ptr_g_source_attach = try_find_sym(glib2, "g_source_attach");
    stub_funcs.ptr_g_source_destroy = try_find_sym(glib2, "g_source_destroy");
    stub_funcs.ptr_g_source_set_priority = try_find_sym(glib2, "g_source_set_priority");
    stub_funcs.ptr_g_source_get_priority = try_find_sym(glib2, "g_source_get_priority");
    stub_funcs.ptr_g_source_set_can_recurse = try_find_sym(glib2, "g_source_set_can_recurse");
    stub_funcs.ptr_g_source_get_can_recurse = try_find_sym(glib2, "g_source_get_can_recurse");
    stub_funcs.ptr_g_source_get_id = try_find_sym(glib2, "g_source_get_id");
    stub_funcs.ptr_g_source_get_context = try_find_sym(glib2, "g_source_get_context");
    stub_funcs.ptr_g_source_set_callback = try_find_sym(glib2, "g_source_set_callback");
    stub_funcs.ptr_g_source_set_funcs = try_find_sym(glib2, "g_source_set_funcs");
    stub_funcs.ptr_g_source_is_destroyed = try_find_sym(glib2, "g_source_is_destroyed");
    stub_funcs.ptr_g_source_set_name = try_find_sym(glib2, "g_source_set_name");
    stub_funcs.ptr_g_source_set_static_name = try_find_sym(glib2, "g_source_set_static_name");
    stub_funcs.ptr_g_source_get_name = try_find_sym(glib2, "g_source_get_name");
    stub_funcs.ptr_g_source_set_name_by_id = try_find_sym(glib2, "g_source_set_name_by_id");
    stub_funcs.ptr_g_source_set_ready_time = try_find_sym(glib2, "g_source_set_ready_time");
    stub_funcs.ptr_g_source_get_ready_time = try_find_sym(glib2, "g_source_get_ready_time");
    stub_funcs.ptr_g_source_add_unix_fd = try_find_sym(glib2, "g_source_add_unix_fd");
    stub_funcs.ptr_g_source_modify_unix_fd = try_find_sym(glib2, "g_source_modify_unix_fd");
    stub_funcs.ptr_g_source_remove_unix_fd = try_find_sym(glib2, "g_source_remove_unix_fd");
    stub_funcs.ptr_g_source_query_unix_fd = try_find_sym(glib2, "g_source_query_unix_fd");
    stub_funcs.ptr_g_source_set_callback_indirect = try_find_sym(glib2, "g_source_set_callback_indirect");
    stub_funcs.ptr_g_source_add_poll = try_find_sym(glib2, "g_source_add_poll");
    stub_funcs.ptr_g_source_remove_poll = try_find_sym(glib2, "g_source_remove_poll");
    stub_funcs.ptr_g_source_add_child_source = try_find_sym(glib2, "g_source_add_child_source");
    stub_funcs.ptr_g_source_remove_child_source = try_find_sym(glib2, "g_source_remove_child_source");
    stub_funcs.ptr_g_source_get_current_time = try_find_sym(glib2, "g_source_get_current_time");
    stub_funcs.ptr_g_source_get_time = try_find_sym(glib2, "g_source_get_time");
    stub_funcs.ptr_g_idle_source_new = try_find_sym(glib2, "g_idle_source_new");
    stub_funcs.ptr_g_child_watch_source_new = try_find_sym(glib2, "g_child_watch_source_new");
    stub_funcs.ptr_g_timeout_source_new = try_find_sym(glib2, "g_timeout_source_new");
    stub_funcs.ptr_g_timeout_source_new_seconds = try_find_sym(glib2, "g_timeout_source_new_seconds");
    stub_funcs.ptr_g_get_current_time = try_find_sym(glib2, "g_get_current_time");
    stub_funcs.ptr_g_get_monotonic_time = try_find_sym(glib2, "g_get_monotonic_time");
    stub_funcs.ptr_g_get_real_time = try_find_sym(glib2, "g_get_real_time");
    stub_funcs.ptr_g_source_remove = try_find_sym(glib2, "g_source_remove");
    stub_funcs.ptr_g_source_remove_by_user_data = try_find_sym(glib2, "g_source_remove_by_user_data");
    stub_funcs.ptr_g_source_remove_by_funcs_user_data = try_find_sym(glib2, "g_source_remove_by_funcs_user_data");
    stub_funcs.ptr_g_clear_handle_id = try_find_sym(glib2, "g_clear_handle_id");
    stub_funcs.ptr_g_timeout_add_full = try_find_sym(glib2, "g_timeout_add_full");
    stub_funcs.ptr_g_timeout_add = try_find_sym(glib2, "g_timeout_add");
    stub_funcs.ptr_g_timeout_add_once = try_find_sym(glib2, "g_timeout_add_once");
    stub_funcs.ptr_g_timeout_add_seconds_full = try_find_sym(glib2, "g_timeout_add_seconds_full");
    stub_funcs.ptr_g_timeout_add_seconds = try_find_sym(glib2, "g_timeout_add_seconds");
    stub_funcs.ptr_g_timeout_add_seconds_once = try_find_sym(glib2, "g_timeout_add_seconds_once");
    stub_funcs.ptr_g_child_watch_add_full = try_find_sym(glib2, "g_child_watch_add_full");
    stub_funcs.ptr_g_child_watch_add = try_find_sym(glib2, "g_child_watch_add");
    stub_funcs.ptr_g_idle_add = try_find_sym(glib2, "g_idle_add");
    stub_funcs.ptr_g_idle_add_full = try_find_sym(glib2, "g_idle_add_full");
    stub_funcs.ptr_g_idle_add_once = try_find_sym(glib2, "g_idle_add_once");
    stub_funcs.ptr_g_idle_remove_by_data = try_find_sym(glib2, "g_idle_remove_by_data");
    stub_funcs.ptr_g_main_context_invoke_full = try_find_sym(glib2, "g_main_context_invoke_full");
    stub_funcs.ptr_g_main_context_invoke = try_find_sym(glib2, "g_main_context_invoke");
    stub_funcs.ptr_g_unicode_script_to_iso15924 = try_find_sym(glib2, "g_unicode_script_to_iso15924");
    stub_funcs.ptr_g_unicode_script_from_iso15924 = try_find_sym(glib2, "g_unicode_script_from_iso15924");
    stub_funcs.ptr_g_unichar_isalnum = try_find_sym(glib2, "g_unichar_isalnum");
    stub_funcs.ptr_g_unichar_isalpha = try_find_sym(glib2, "g_unichar_isalpha");
    stub_funcs.ptr_g_unichar_iscntrl = try_find_sym(glib2, "g_unichar_iscntrl");
    stub_funcs.ptr_g_unichar_isdigit = try_find_sym(glib2, "g_unichar_isdigit");
    stub_funcs.ptr_g_unichar_isgraph = try_find_sym(glib2, "g_unichar_isgraph");
    stub_funcs.ptr_g_unichar_islower = try_find_sym(glib2, "g_unichar_islower");
    stub_funcs.ptr_g_unichar_isprint = try_find_sym(glib2, "g_unichar_isprint");
    stub_funcs.ptr_g_unichar_ispunct = try_find_sym(glib2, "g_unichar_ispunct");
    stub_funcs.ptr_g_unichar_isspace = try_find_sym(glib2, "g_unichar_isspace");
    stub_funcs.ptr_g_unichar_isupper = try_find_sym(glib2, "g_unichar_isupper");
    stub_funcs.ptr_g_unichar_isxdigit = try_find_sym(glib2, "g_unichar_isxdigit");
    stub_funcs.ptr_g_unichar_istitle = try_find_sym(glib2, "g_unichar_istitle");
    stub_funcs.ptr_g_unichar_isdefined = try_find_sym(glib2, "g_unichar_isdefined");
    stub_funcs.ptr_g_unichar_iswide = try_find_sym(glib2, "g_unichar_iswide");
    stub_funcs.ptr_g_unichar_iswide_cjk = try_find_sym(glib2, "g_unichar_iswide_cjk");
    stub_funcs.ptr_g_unichar_iszerowidth = try_find_sym(glib2, "g_unichar_iszerowidth");
    stub_funcs.ptr_g_unichar_ismark = try_find_sym(glib2, "g_unichar_ismark");
    stub_funcs.ptr_g_unichar_toupper = try_find_sym(glib2, "g_unichar_toupper");
    stub_funcs.ptr_g_unichar_tolower = try_find_sym(glib2, "g_unichar_tolower");
    stub_funcs.ptr_g_unichar_totitle = try_find_sym(glib2, "g_unichar_totitle");
    stub_funcs.ptr_g_unichar_digit_value = try_find_sym(glib2, "g_unichar_digit_value");
    stub_funcs.ptr_g_unichar_xdigit_value = try_find_sym(glib2, "g_unichar_xdigit_value");
    stub_funcs.ptr_g_unichar_type = try_find_sym(glib2, "g_unichar_type");
    stub_funcs.ptr_g_unichar_break_type = try_find_sym(glib2, "g_unichar_break_type");
    stub_funcs.ptr_g_unichar_combining_class = try_find_sym(glib2, "g_unichar_combining_class");
    stub_funcs.ptr_g_unichar_get_mirror_char = try_find_sym(glib2, "g_unichar_get_mirror_char");
    stub_funcs.ptr_g_unichar_get_script = try_find_sym(glib2, "g_unichar_get_script");
    stub_funcs.ptr_g_unichar_validate = try_find_sym(glib2, "g_unichar_validate");
    stub_funcs.ptr_g_unichar_compose = try_find_sym(glib2, "g_unichar_compose");
    stub_funcs.ptr_g_unichar_decompose = try_find_sym(glib2, "g_unichar_decompose");
    stub_funcs.ptr_g_unichar_fully_decompose = try_find_sym(glib2, "g_unichar_fully_decompose");
    stub_funcs.ptr_g_unicode_canonical_ordering = try_find_sym(glib2, "g_unicode_canonical_ordering");
    stub_funcs.ptr_g_unicode_canonical_decomposition = try_find_sym(glib2, "g_unicode_canonical_decomposition");
    stub_funcs.ptr_g_utf8_get_char = try_find_sym(glib2, "g_utf8_get_char");
    stub_funcs.ptr_g_utf8_get_char_validated = try_find_sym(glib2, "g_utf8_get_char_validated");
    stub_funcs.ptr_g_utf8_offset_to_pointer = try_find_sym(glib2, "g_utf8_offset_to_pointer");
    stub_funcs.ptr_g_utf8_pointer_to_offset = try_find_sym(glib2, "g_utf8_pointer_to_offset");
    stub_funcs.ptr_g_utf8_prev_char = try_find_sym(glib2, "g_utf8_prev_char");
    stub_funcs.ptr_g_utf8_find_next_char = try_find_sym(glib2, "g_utf8_find_next_char");
    stub_funcs.ptr_g_utf8_find_prev_char = try_find_sym(glib2, "g_utf8_find_prev_char");
    stub_funcs.ptr_g_utf8_strlen = try_find_sym(glib2, "g_utf8_strlen");
    stub_funcs.ptr_g_utf8_substring = try_find_sym(glib2, "g_utf8_substring");
    stub_funcs.ptr_g_utf8_strncpy = try_find_sym(glib2, "g_utf8_strncpy");
    stub_funcs.ptr_g_utf8_truncate_middle = try_find_sym(glib2, "g_utf8_truncate_middle");
    stub_funcs.ptr_g_utf8_strchr = try_find_sym(glib2, "g_utf8_strchr");
    stub_funcs.ptr_g_utf8_strrchr = try_find_sym(glib2, "g_utf8_strrchr");
    stub_funcs.ptr_g_utf8_strreverse = try_find_sym(glib2, "g_utf8_strreverse");
    stub_funcs.ptr_g_utf8_to_utf16 = try_find_sym(glib2, "g_utf8_to_utf16");
    stub_funcs.ptr_g_utf8_to_ucs4 = try_find_sym(glib2, "g_utf8_to_ucs4");
    stub_funcs.ptr_g_utf8_to_ucs4_fast = try_find_sym(glib2, "g_utf8_to_ucs4_fast");
    stub_funcs.ptr_g_utf16_to_ucs4 = try_find_sym(glib2, "g_utf16_to_ucs4");
    stub_funcs.ptr_g_utf16_to_utf8 = try_find_sym(glib2, "g_utf16_to_utf8");
    stub_funcs.ptr_g_ucs4_to_utf16 = try_find_sym(glib2, "g_ucs4_to_utf16");
    stub_funcs.ptr_g_ucs4_to_utf8 = try_find_sym(glib2, "g_ucs4_to_utf8");
    stub_funcs.ptr_g_unichar_to_utf8 = try_find_sym(glib2, "g_unichar_to_utf8");
    stub_funcs.ptr_g_utf8_validate = try_find_sym(glib2, "g_utf8_validate");
    stub_funcs.ptr_g_utf8_validate_len = try_find_sym(glib2, "g_utf8_validate_len");
    stub_funcs.ptr_g_utf8_strup = try_find_sym(glib2, "g_utf8_strup");
    stub_funcs.ptr_g_utf8_strdown = try_find_sym(glib2, "g_utf8_strdown");
    stub_funcs.ptr_g_utf8_casefold = try_find_sym(glib2, "g_utf8_casefold");
    stub_funcs.ptr_g_utf8_normalize = try_find_sym(glib2, "g_utf8_normalize");
    stub_funcs.ptr_g_utf8_collate = try_find_sym(glib2, "g_utf8_collate");
    stub_funcs.ptr_g_utf8_collate_key = try_find_sym(glib2, "g_utf8_collate_key");
    stub_funcs.ptr_g_utf8_collate_key_for_filename = try_find_sym(glib2, "g_utf8_collate_key_for_filename");
    stub_funcs.ptr_g_utf8_make_valid = try_find_sym(glib2, "g_utf8_make_valid");
    stub_funcs.ptr_g_ascii_tolower = try_find_sym(glib2, "g_ascii_tolower");
    stub_funcs.ptr_g_ascii_toupper = try_find_sym(glib2, "g_ascii_toupper");
    stub_funcs.ptr_g_ascii_digit_value = try_find_sym(glib2, "g_ascii_digit_value");
    stub_funcs.ptr_g_ascii_xdigit_value = try_find_sym(glib2, "g_ascii_xdigit_value");
    stub_funcs.ptr_g_strdelimit = try_find_sym(glib2, "g_strdelimit");
    stub_funcs.ptr_g_strcanon = try_find_sym(glib2, "g_strcanon");
    stub_funcs.ptr_g_strerror = try_find_sym(glib2, "g_strerror");
    stub_funcs.ptr_g_strsignal = try_find_sym(glib2, "g_strsignal");
    stub_funcs.ptr_g_strreverse = try_find_sym(glib2, "g_strreverse");
    stub_funcs.ptr_g_strlcpy = try_find_sym(glib2, "g_strlcpy");
    stub_funcs.ptr_g_strlcat = try_find_sym(glib2, "g_strlcat");
    stub_funcs.ptr_g_strstr_len = try_find_sym(glib2, "g_strstr_len");
    stub_funcs.ptr_g_strrstr = try_find_sym(glib2, "g_strrstr");
    stub_funcs.ptr_g_strrstr_len = try_find_sym(glib2, "g_strrstr_len");
    stub_funcs.ptr_g_str_has_suffix = try_find_sym(glib2, "g_str_has_suffix");
    stub_funcs.ptr_g_str_has_prefix = try_find_sym(glib2, "g_str_has_prefix");
    stub_funcs.ptr_g_strtod = try_find_sym(glib2, "g_strtod");
    stub_funcs.ptr_g_ascii_strtod = try_find_sym(glib2, "g_ascii_strtod");
    stub_funcs.ptr_g_ascii_strtoull = try_find_sym(glib2, "g_ascii_strtoull");
    stub_funcs.ptr_g_ascii_strtoll = try_find_sym(glib2, "g_ascii_strtoll");
    stub_funcs.ptr_g_ascii_dtostr = try_find_sym(glib2, "g_ascii_dtostr");
    stub_funcs.ptr_g_ascii_formatd = try_find_sym(glib2, "g_ascii_formatd");
    stub_funcs.ptr_g_strchug = try_find_sym(glib2, "g_strchug");
    stub_funcs.ptr_g_strchomp = try_find_sym(glib2, "g_strchomp");
    stub_funcs.ptr_g_ascii_strcasecmp = try_find_sym(glib2, "g_ascii_strcasecmp");
    stub_funcs.ptr_g_ascii_strncasecmp = try_find_sym(glib2, "g_ascii_strncasecmp");
    stub_funcs.ptr_g_ascii_strdown = try_find_sym(glib2, "g_ascii_strdown");
    stub_funcs.ptr_g_ascii_strup = try_find_sym(glib2, "g_ascii_strup");
    stub_funcs.ptr_g_str_is_ascii = try_find_sym(glib2, "g_str_is_ascii");
    stub_funcs.ptr_g_strcasecmp = try_find_sym(glib2, "g_strcasecmp");
    stub_funcs.ptr_g_strncasecmp = try_find_sym(glib2, "g_strncasecmp");
    stub_funcs.ptr_g_strdown = try_find_sym(glib2, "g_strdown");
    stub_funcs.ptr_g_strup = try_find_sym(glib2, "g_strup");
    stub_funcs.ptr_g_strdup = try_find_sym(glib2, "g_strdup");
    stub_funcs.ptr_g_strdup_printf = try_find_sym(glib2, "g_strdup_printf");
    stub_funcs.ptr_g_strdup_vprintf = try_find_sym(glib2, "g_strdup_vprintf");
    stub_funcs.ptr_g_strndup = try_find_sym(glib2, "g_strndup");
    stub_funcs.ptr_g_strnfill = try_find_sym(glib2, "g_strnfill");
    stub_funcs.ptr_g_strcompress = try_find_sym(glib2, "g_strcompress");
    stub_funcs.ptr_g_strescape = try_find_sym(glib2, "g_strescape");
    stub_funcs.ptr_g_memdup = try_find_sym(glib2, "g_memdup");
    stub_funcs.ptr_g_memdup2 = try_find_sym(glib2, "g_memdup2");
    stub_funcs.ptr_g_strsplit = try_find_sym(glib2, "g_strsplit");
    stub_funcs.ptr_g_strsplit_set = try_find_sym(glib2, "g_strsplit_set");
    stub_funcs.ptr_g_strjoinv = try_find_sym(glib2, "g_strjoinv");
    stub_funcs.ptr_g_strfreev = try_find_sym(glib2, "g_strfreev");
    stub_funcs.ptr_g_strdupv = try_find_sym(glib2, "g_strdupv");
    stub_funcs.ptr_g_strv_length = try_find_sym(glib2, "g_strv_length");
    stub_funcs.ptr_g_stpcpy = try_find_sym(glib2, "g_stpcpy");
    stub_funcs.ptr_g_str_to_ascii = try_find_sym(glib2, "g_str_to_ascii");
    stub_funcs.ptr_g_str_tokenize_and_fold = try_find_sym(glib2, "g_str_tokenize_and_fold");
    stub_funcs.ptr_g_str_match_string = try_find_sym(glib2, "g_str_match_string");
    stub_funcs.ptr_g_strv_contains = try_find_sym(glib2, "g_strv_contains");
    stub_funcs.ptr_g_strv_equal = try_find_sym(glib2, "g_strv_equal");
    stub_funcs.ptr_g_number_parser_error_quark = try_find_sym(glib2, "g_number_parser_error_quark");
    stub_funcs.ptr_g_ascii_string_to_signed = try_find_sym(glib2, "g_ascii_string_to_signed");
    stub_funcs.ptr_g_ascii_string_to_unsigned = try_find_sym(glib2, "g_ascii_string_to_unsigned");
    stub_funcs.ptr_g_string_new = try_find_sym(glib2, "g_string_new");
    stub_funcs.ptr_g_string_new_take = try_find_sym(glib2, "g_string_new_take");
    stub_funcs.ptr_g_string_new_len = try_find_sym(glib2, "g_string_new_len");
    stub_funcs.ptr_g_string_sized_new = try_find_sym(glib2, "g_string_sized_new");
    stub_funcs.ptr_g_string_free = try_find_sym(glib2, "g_string_free");
    stub_funcs.ptr_g_string_free_and_steal = try_find_sym(glib2, "g_string_free_and_steal");
    stub_funcs.ptr_g_string_free_to_bytes = try_find_sym(glib2, "g_string_free_to_bytes");
    stub_funcs.ptr_g_string_equal = try_find_sym(glib2, "g_string_equal");
    stub_funcs.ptr_g_string_hash = try_find_sym(glib2, "g_string_hash");
    stub_funcs.ptr_g_string_assign = try_find_sym(glib2, "g_string_assign");
    stub_funcs.ptr_g_string_truncate = try_find_sym(glib2, "g_string_truncate");
    stub_funcs.ptr_g_string_set_size = try_find_sym(glib2, "g_string_set_size");
    stub_funcs.ptr_g_string_insert_len = try_find_sym(glib2, "g_string_insert_len");
    stub_funcs.ptr_g_string_append = try_find_sym(glib2, "g_string_append");
    stub_funcs.ptr_g_string_append_len = try_find_sym(glib2, "g_string_append_len");
    stub_funcs.ptr_g_string_append_c = try_find_sym(glib2, "g_string_append_c");
    stub_funcs.ptr_g_string_append_unichar = try_find_sym(glib2, "g_string_append_unichar");
    stub_funcs.ptr_g_string_prepend = try_find_sym(glib2, "g_string_prepend");
    stub_funcs.ptr_g_string_prepend_c = try_find_sym(glib2, "g_string_prepend_c");
    stub_funcs.ptr_g_string_prepend_unichar = try_find_sym(glib2, "g_string_prepend_unichar");
    stub_funcs.ptr_g_string_prepend_len = try_find_sym(glib2, "g_string_prepend_len");
    stub_funcs.ptr_g_string_insert = try_find_sym(glib2, "g_string_insert");
    stub_funcs.ptr_g_string_insert_c = try_find_sym(glib2, "g_string_insert_c");
    stub_funcs.ptr_g_string_insert_unichar = try_find_sym(glib2, "g_string_insert_unichar");
    stub_funcs.ptr_g_string_overwrite = try_find_sym(glib2, "g_string_overwrite");
    stub_funcs.ptr_g_string_overwrite_len = try_find_sym(glib2, "g_string_overwrite_len");
    stub_funcs.ptr_g_string_erase = try_find_sym(glib2, "g_string_erase");
    stub_funcs.ptr_g_string_replace = try_find_sym(glib2, "g_string_replace");
    stub_funcs.ptr_g_string_ascii_down = try_find_sym(glib2, "g_string_ascii_down");
    stub_funcs.ptr_g_string_ascii_up = try_find_sym(glib2, "g_string_ascii_up");
    stub_funcs.ptr_g_string_vprintf = try_find_sym(glib2, "g_string_vprintf");
    stub_funcs.ptr_g_string_printf = try_find_sym(glib2, "g_string_printf");
    stub_funcs.ptr_g_string_append_vprintf = try_find_sym(glib2, "g_string_append_vprintf");
    stub_funcs.ptr_g_string_append_printf = try_find_sym(glib2, "g_string_append_printf");
    stub_funcs.ptr_g_string_append_uri_escaped = try_find_sym(glib2, "g_string_append_uri_escaped");
    stub_funcs.ptr_g_string_down = try_find_sym(glib2, "g_string_down");
    stub_funcs.ptr_g_string_up = try_find_sym(glib2, "g_string_up");
    stub_funcs.ptr_g_io_channel_init = try_find_sym(glib2, "g_io_channel_init");
    stub_funcs.ptr_g_io_channel_ref = try_find_sym(glib2, "g_io_channel_ref");
    stub_funcs.ptr_g_io_channel_unref = try_find_sym(glib2, "g_io_channel_unref");
    stub_funcs.ptr_g_io_channel_read = try_find_sym(glib2, "g_io_channel_read");
    stub_funcs.ptr_g_io_channel_write = try_find_sym(glib2, "g_io_channel_write");
    stub_funcs.ptr_g_io_channel_seek = try_find_sym(glib2, "g_io_channel_seek");
    stub_funcs.ptr_g_io_channel_close = try_find_sym(glib2, "g_io_channel_close");
    stub_funcs.ptr_g_io_channel_shutdown = try_find_sym(glib2, "g_io_channel_shutdown");
    stub_funcs.ptr_g_io_add_watch_full = try_find_sym(glib2, "g_io_add_watch_full");
    stub_funcs.ptr_g_io_create_watch = try_find_sym(glib2, "g_io_create_watch");
    stub_funcs.ptr_g_io_add_watch = try_find_sym(glib2, "g_io_add_watch");
    stub_funcs.ptr_g_io_channel_set_buffer_size = try_find_sym(glib2, "g_io_channel_set_buffer_size");
    stub_funcs.ptr_g_io_channel_get_buffer_size = try_find_sym(glib2, "g_io_channel_get_buffer_size");
    stub_funcs.ptr_g_io_channel_get_buffer_condition = try_find_sym(glib2, "g_io_channel_get_buffer_condition");
    stub_funcs.ptr_g_io_channel_set_flags = try_find_sym(glib2, "g_io_channel_set_flags");
    stub_funcs.ptr_g_io_channel_get_flags = try_find_sym(glib2, "g_io_channel_get_flags");
    stub_funcs.ptr_g_io_channel_set_line_term = try_find_sym(glib2, "g_io_channel_set_line_term");
    stub_funcs.ptr_g_io_channel_get_line_term = try_find_sym(glib2, "g_io_channel_get_line_term");
    stub_funcs.ptr_g_io_channel_set_buffered = try_find_sym(glib2, "g_io_channel_set_buffered");
    stub_funcs.ptr_g_io_channel_get_buffered = try_find_sym(glib2, "g_io_channel_get_buffered");
    stub_funcs.ptr_g_io_channel_set_encoding = try_find_sym(glib2, "g_io_channel_set_encoding");
    stub_funcs.ptr_g_io_channel_get_encoding = try_find_sym(glib2, "g_io_channel_get_encoding");
    stub_funcs.ptr_g_io_channel_set_close_on_unref = try_find_sym(glib2, "g_io_channel_set_close_on_unref");
    stub_funcs.ptr_g_io_channel_get_close_on_unref = try_find_sym(glib2, "g_io_channel_get_close_on_unref");
    stub_funcs.ptr_g_io_channel_flush = try_find_sym(glib2, "g_io_channel_flush");
    stub_funcs.ptr_g_io_channel_read_line = try_find_sym(glib2, "g_io_channel_read_line");
    stub_funcs.ptr_g_io_channel_read_line_string = try_find_sym(glib2, "g_io_channel_read_line_string");
    stub_funcs.ptr_g_io_channel_read_to_end = try_find_sym(glib2, "g_io_channel_read_to_end");
    stub_funcs.ptr_g_io_channel_read_chars = try_find_sym(glib2, "g_io_channel_read_chars");
    stub_funcs.ptr_g_io_channel_read_unichar = try_find_sym(glib2, "g_io_channel_read_unichar");
    stub_funcs.ptr_g_io_channel_write_chars = try_find_sym(glib2, "g_io_channel_write_chars");
    stub_funcs.ptr_g_io_channel_write_unichar = try_find_sym(glib2, "g_io_channel_write_unichar");
    stub_funcs.ptr_g_io_channel_seek_position = try_find_sym(glib2, "g_io_channel_seek_position");
    stub_funcs.ptr_g_io_channel_new_file = try_find_sym(glib2, "g_io_channel_new_file");
    stub_funcs.ptr_g_io_channel_error_quark = try_find_sym(glib2, "g_io_channel_error_quark");
    stub_funcs.ptr_g_io_channel_error_from_errno = try_find_sym(glib2, "g_io_channel_error_from_errno");
    stub_funcs.ptr_g_io_channel_unix_new = try_find_sym(glib2, "g_io_channel_unix_new");
    stub_funcs.ptr_g_io_channel_unix_get_fd = try_find_sym(glib2, "g_io_channel_unix_get_fd");
    stub_funcs.ptr_g_key_file_error_quark = try_find_sym(glib2, "g_key_file_error_quark");
    stub_funcs.ptr_g_key_file_new = try_find_sym(glib2, "g_key_file_new");
    stub_funcs.ptr_g_key_file_ref = try_find_sym(glib2, "g_key_file_ref");
    stub_funcs.ptr_g_key_file_unref = try_find_sym(glib2, "g_key_file_unref");
    stub_funcs.ptr_g_key_file_free = try_find_sym(glib2, "g_key_file_free");
    stub_funcs.ptr_g_key_file_set_list_separator = try_find_sym(glib2, "g_key_file_set_list_separator");
    stub_funcs.ptr_g_key_file_load_from_file = try_find_sym(glib2, "g_key_file_load_from_file");
    stub_funcs.ptr_g_key_file_load_from_data = try_find_sym(glib2, "g_key_file_load_from_data");
    stub_funcs.ptr_g_key_file_load_from_bytes = try_find_sym(glib2, "g_key_file_load_from_bytes");
    stub_funcs.ptr_g_key_file_load_from_dirs = try_find_sym(glib2, "g_key_file_load_from_dirs");
    stub_funcs.ptr_g_key_file_load_from_data_dirs = try_find_sym(glib2, "g_key_file_load_from_data_dirs");
    stub_funcs.ptr_g_key_file_to_data = try_find_sym(glib2, "g_key_file_to_data");
    stub_funcs.ptr_g_key_file_save_to_file = try_find_sym(glib2, "g_key_file_save_to_file");
    stub_funcs.ptr_g_key_file_get_start_group = try_find_sym(glib2, "g_key_file_get_start_group");
    stub_funcs.ptr_g_key_file_get_groups = try_find_sym(glib2, "g_key_file_get_groups");
    stub_funcs.ptr_g_key_file_get_keys = try_find_sym(glib2, "g_key_file_get_keys");
    stub_funcs.ptr_g_key_file_has_group = try_find_sym(glib2, "g_key_file_has_group");
    stub_funcs.ptr_g_key_file_has_key = try_find_sym(glib2, "g_key_file_has_key");
    stub_funcs.ptr_g_key_file_get_value = try_find_sym(glib2, "g_key_file_get_value");
    stub_funcs.ptr_g_key_file_set_value = try_find_sym(glib2, "g_key_file_set_value");
    stub_funcs.ptr_g_key_file_get_string = try_find_sym(glib2, "g_key_file_get_string");
    stub_funcs.ptr_g_key_file_set_string = try_find_sym(glib2, "g_key_file_set_string");
    stub_funcs.ptr_g_key_file_get_locale_string = try_find_sym(glib2, "g_key_file_get_locale_string");
    stub_funcs.ptr_g_key_file_get_locale_for_key = try_find_sym(glib2, "g_key_file_get_locale_for_key");
    stub_funcs.ptr_g_key_file_set_locale_string = try_find_sym(glib2, "g_key_file_set_locale_string");
    stub_funcs.ptr_g_key_file_get_boolean = try_find_sym(glib2, "g_key_file_get_boolean");
    stub_funcs.ptr_g_key_file_set_boolean = try_find_sym(glib2, "g_key_file_set_boolean");
    stub_funcs.ptr_g_key_file_get_integer = try_find_sym(glib2, "g_key_file_get_integer");
    stub_funcs.ptr_g_key_file_set_integer = try_find_sym(glib2, "g_key_file_set_integer");
    stub_funcs.ptr_g_key_file_get_int64 = try_find_sym(glib2, "g_key_file_get_int64");
    stub_funcs.ptr_g_key_file_set_int64 = try_find_sym(glib2, "g_key_file_set_int64");
    stub_funcs.ptr_g_key_file_get_uint64 = try_find_sym(glib2, "g_key_file_get_uint64");
    stub_funcs.ptr_g_key_file_set_uint64 = try_find_sym(glib2, "g_key_file_set_uint64");
    stub_funcs.ptr_g_key_file_get_double = try_find_sym(glib2, "g_key_file_get_double");
    stub_funcs.ptr_g_key_file_set_double = try_find_sym(glib2, "g_key_file_set_double");
    stub_funcs.ptr_g_key_file_get_string_list = try_find_sym(glib2, "g_key_file_get_string_list");
    stub_funcs.ptr_g_key_file_set_string_list = try_find_sym(glib2, "g_key_file_set_string_list");
    stub_funcs.ptr_g_key_file_get_locale_string_list = try_find_sym(glib2, "g_key_file_get_locale_string_list");
    stub_funcs.ptr_g_key_file_set_locale_string_list = try_find_sym(glib2, "g_key_file_set_locale_string_list");
    stub_funcs.ptr_g_key_file_get_boolean_list = try_find_sym(glib2, "g_key_file_get_boolean_list");
    stub_funcs.ptr_g_key_file_set_boolean_list = try_find_sym(glib2, "g_key_file_set_boolean_list");
    stub_funcs.ptr_g_key_file_get_integer_list = try_find_sym(glib2, "g_key_file_get_integer_list");
    stub_funcs.ptr_g_key_file_set_double_list = try_find_sym(glib2, "g_key_file_set_double_list");
    stub_funcs.ptr_g_key_file_get_double_list = try_find_sym(glib2, "g_key_file_get_double_list");
    stub_funcs.ptr_g_key_file_set_integer_list = try_find_sym(glib2, "g_key_file_set_integer_list");
    stub_funcs.ptr_g_key_file_set_comment = try_find_sym(glib2, "g_key_file_set_comment");
    stub_funcs.ptr_g_key_file_get_comment = try_find_sym(glib2, "g_key_file_get_comment");
    stub_funcs.ptr_g_key_file_remove_comment = try_find_sym(glib2, "g_key_file_remove_comment");
    stub_funcs.ptr_g_key_file_remove_key = try_find_sym(glib2, "g_key_file_remove_key");
    stub_funcs.ptr_g_key_file_remove_group = try_find_sym(glib2, "g_key_file_remove_group");
    stub_funcs.ptr_g_mapped_file_new = try_find_sym(glib2, "g_mapped_file_new");
    stub_funcs.ptr_g_mapped_file_new_from_fd = try_find_sym(glib2, "g_mapped_file_new_from_fd");
    stub_funcs.ptr_g_mapped_file_get_length = try_find_sym(glib2, "g_mapped_file_get_length");
    stub_funcs.ptr_g_mapped_file_get_contents = try_find_sym(glib2, "g_mapped_file_get_contents");
    stub_funcs.ptr_g_mapped_file_get_bytes = try_find_sym(glib2, "g_mapped_file_get_bytes");
    stub_funcs.ptr_g_mapped_file_ref = try_find_sym(glib2, "g_mapped_file_ref");
    stub_funcs.ptr_g_mapped_file_unref = try_find_sym(glib2, "g_mapped_file_unref");
    stub_funcs.ptr_g_mapped_file_free = try_find_sym(glib2, "g_mapped_file_free");
    stub_funcs.ptr_g_markup_error_quark = try_find_sym(glib2, "g_markup_error_quark");
    stub_funcs.ptr_g_markup_parse_context_new = try_find_sym(glib2, "g_markup_parse_context_new");
    stub_funcs.ptr_g_markup_parse_context_ref = try_find_sym(glib2, "g_markup_parse_context_ref");
    stub_funcs.ptr_g_markup_parse_context_unref = try_find_sym(glib2, "g_markup_parse_context_unref");
    stub_funcs.ptr_g_markup_parse_context_free = try_find_sym(glib2, "g_markup_parse_context_free");
    stub_funcs.ptr_g_markup_parse_context_parse = try_find_sym(glib2, "g_markup_parse_context_parse");
    stub_funcs.ptr_g_markup_parse_context_push = try_find_sym(glib2, "g_markup_parse_context_push");
    stub_funcs.ptr_g_markup_parse_context_pop = try_find_sym(glib2, "g_markup_parse_context_pop");
    stub_funcs.ptr_g_markup_parse_context_end_parse = try_find_sym(glib2, "g_markup_parse_context_end_parse");
    stub_funcs.ptr_g_markup_parse_context_get_element = try_find_sym(glib2, "g_markup_parse_context_get_element");
    stub_funcs.ptr_g_markup_parse_context_get_element_stack = try_find_sym(glib2, "g_markup_parse_context_get_element_stack");
    stub_funcs.ptr_g_markup_parse_context_get_position = try_find_sym(glib2, "g_markup_parse_context_get_position");
    stub_funcs.ptr_g_markup_parse_context_get_user_data = try_find_sym(glib2, "g_markup_parse_context_get_user_data");
    stub_funcs.ptr_g_markup_escape_text = try_find_sym(glib2, "g_markup_escape_text");
    stub_funcs.ptr_g_markup_printf_escaped = try_find_sym(glib2, "g_markup_printf_escaped");
    stub_funcs.ptr_g_markup_vprintf_escaped = try_find_sym(glib2, "g_markup_vprintf_escaped");
    stub_funcs.ptr_g_variant_type_string_is_valid = try_find_sym(glib2, "g_variant_type_string_is_valid");
    stub_funcs.ptr_g_variant_type_string_scan = try_find_sym(glib2, "g_variant_type_string_scan");
    stub_funcs.ptr_g_variant_type_free = try_find_sym(glib2, "g_variant_type_free");
    stub_funcs.ptr_g_variant_type_copy = try_find_sym(glib2, "g_variant_type_copy");
    stub_funcs.ptr_g_variant_type_new = try_find_sym(glib2, "g_variant_type_new");
    stub_funcs.ptr_g_variant_type_get_string_length = try_find_sym(glib2, "g_variant_type_get_string_length");
    stub_funcs.ptr_g_variant_type_peek_string = try_find_sym(glib2, "g_variant_type_peek_string");
    stub_funcs.ptr_g_variant_type_dup_string = try_find_sym(glib2, "g_variant_type_dup_string");
    stub_funcs.ptr_g_variant_type_is_definite = try_find_sym(glib2, "g_variant_type_is_definite");
    stub_funcs.ptr_g_variant_type_is_container = try_find_sym(glib2, "g_variant_type_is_container");
    stub_funcs.ptr_g_variant_type_is_basic = try_find_sym(glib2, "g_variant_type_is_basic");
    stub_funcs.ptr_g_variant_type_is_maybe = try_find_sym(glib2, "g_variant_type_is_maybe");
    stub_funcs.ptr_g_variant_type_is_array = try_find_sym(glib2, "g_variant_type_is_array");
    stub_funcs.ptr_g_variant_type_is_tuple = try_find_sym(glib2, "g_variant_type_is_tuple");
    stub_funcs.ptr_g_variant_type_is_dict_entry = try_find_sym(glib2, "g_variant_type_is_dict_entry");
    stub_funcs.ptr_g_variant_type_is_variant = try_find_sym(glib2, "g_variant_type_is_variant");
    stub_funcs.ptr_g_variant_type_hash = try_find_sym(glib2, "g_variant_type_hash");
    stub_funcs.ptr_g_variant_type_equal = try_find_sym(glib2, "g_variant_type_equal");
    stub_funcs.ptr_g_variant_type_is_subtype_of = try_find_sym(glib2, "g_variant_type_is_subtype_of");
    stub_funcs.ptr_g_variant_type_element = try_find_sym(glib2, "g_variant_type_element");
    stub_funcs.ptr_g_variant_type_first = try_find_sym(glib2, "g_variant_type_first");
    stub_funcs.ptr_g_variant_type_next = try_find_sym(glib2, "g_variant_type_next");
    stub_funcs.ptr_g_variant_type_n_items = try_find_sym(glib2, "g_variant_type_n_items");
    stub_funcs.ptr_g_variant_type_key = try_find_sym(glib2, "g_variant_type_key");
    stub_funcs.ptr_g_variant_type_value = try_find_sym(glib2, "g_variant_type_value");
    stub_funcs.ptr_g_variant_type_new_array = try_find_sym(glib2, "g_variant_type_new_array");
    stub_funcs.ptr_g_variant_type_new_maybe = try_find_sym(glib2, "g_variant_type_new_maybe");
    stub_funcs.ptr_g_variant_type_new_tuple = try_find_sym(glib2, "g_variant_type_new_tuple");
    stub_funcs.ptr_g_variant_type_new_dict_entry = try_find_sym(glib2, "g_variant_type_new_dict_entry");
    stub_funcs.ptr_g_variant_type_checked_ = try_find_sym(glib2, "g_variant_type_checked_");
    stub_funcs.ptr_g_variant_type_string_get_depth_ = try_find_sym(glib2, "g_variant_type_string_get_depth_");
    stub_funcs.ptr_g_variant_unref = try_find_sym(glib2, "g_variant_unref");
    stub_funcs.ptr_g_variant_ref = try_find_sym(glib2, "g_variant_ref");
    stub_funcs.ptr_g_variant_ref_sink = try_find_sym(glib2, "g_variant_ref_sink");
    stub_funcs.ptr_g_variant_is_floating = try_find_sym(glib2, "g_variant_is_floating");
    stub_funcs.ptr_g_variant_take_ref = try_find_sym(glib2, "g_variant_take_ref");
    stub_funcs.ptr_g_variant_get_type = try_find_sym(glib2, "g_variant_get_type");
    stub_funcs.ptr_g_variant_get_type_string = try_find_sym(glib2, "g_variant_get_type_string");
    stub_funcs.ptr_g_variant_is_of_type = try_find_sym(glib2, "g_variant_is_of_type");
    stub_funcs.ptr_g_variant_is_container = try_find_sym(glib2, "g_variant_is_container");
    stub_funcs.ptr_g_variant_classify = try_find_sym(glib2, "g_variant_classify");
    stub_funcs.ptr_g_variant_new_boolean = try_find_sym(glib2, "g_variant_new_boolean");
    stub_funcs.ptr_g_variant_new_byte = try_find_sym(glib2, "g_variant_new_byte");
    stub_funcs.ptr_g_variant_new_int16 = try_find_sym(glib2, "g_variant_new_int16");
    stub_funcs.ptr_g_variant_new_uint16 = try_find_sym(glib2, "g_variant_new_uint16");
    stub_funcs.ptr_g_variant_new_int32 = try_find_sym(glib2, "g_variant_new_int32");
    stub_funcs.ptr_g_variant_new_uint32 = try_find_sym(glib2, "g_variant_new_uint32");
    stub_funcs.ptr_g_variant_new_int64 = try_find_sym(glib2, "g_variant_new_int64");
    stub_funcs.ptr_g_variant_new_uint64 = try_find_sym(glib2, "g_variant_new_uint64");
    stub_funcs.ptr_g_variant_new_handle = try_find_sym(glib2, "g_variant_new_handle");
    stub_funcs.ptr_g_variant_new_double = try_find_sym(glib2, "g_variant_new_double");
    stub_funcs.ptr_g_variant_new_string = try_find_sym(glib2, "g_variant_new_string");
    stub_funcs.ptr_g_variant_new_take_string = try_find_sym(glib2, "g_variant_new_take_string");
    stub_funcs.ptr_g_variant_new_object_path = try_find_sym(glib2, "g_variant_new_object_path");
    stub_funcs.ptr_g_variant_is_object_path = try_find_sym(glib2, "g_variant_is_object_path");
    stub_funcs.ptr_g_variant_new_signature = try_find_sym(glib2, "g_variant_new_signature");
    stub_funcs.ptr_g_variant_is_signature = try_find_sym(glib2, "g_variant_is_signature");
    stub_funcs.ptr_g_variant_new_variant = try_find_sym(glib2, "g_variant_new_variant");
    stub_funcs.ptr_g_variant_new_strv = try_find_sym(glib2, "g_variant_new_strv");
    stub_funcs.ptr_g_variant_new_objv = try_find_sym(glib2, "g_variant_new_objv");
    stub_funcs.ptr_g_variant_new_bytestring = try_find_sym(glib2, "g_variant_new_bytestring");
    stub_funcs.ptr_g_variant_new_bytestring_array = try_find_sym(glib2, "g_variant_new_bytestring_array");
    stub_funcs.ptr_g_variant_new_fixed_array = try_find_sym(glib2, "g_variant_new_fixed_array");
    stub_funcs.ptr_g_variant_get_boolean = try_find_sym(glib2, "g_variant_get_boolean");
    stub_funcs.ptr_g_variant_get_byte = try_find_sym(glib2, "g_variant_get_byte");
    stub_funcs.ptr_g_variant_get_int16 = try_find_sym(glib2, "g_variant_get_int16");
    stub_funcs.ptr_g_variant_get_uint16 = try_find_sym(glib2, "g_variant_get_uint16");
    stub_funcs.ptr_g_variant_get_int32 = try_find_sym(glib2, "g_variant_get_int32");
    stub_funcs.ptr_g_variant_get_uint32 = try_find_sym(glib2, "g_variant_get_uint32");
    stub_funcs.ptr_g_variant_get_int64 = try_find_sym(glib2, "g_variant_get_int64");
    stub_funcs.ptr_g_variant_get_uint64 = try_find_sym(glib2, "g_variant_get_uint64");
    stub_funcs.ptr_g_variant_get_handle = try_find_sym(glib2, "g_variant_get_handle");
    stub_funcs.ptr_g_variant_get_double = try_find_sym(glib2, "g_variant_get_double");
    stub_funcs.ptr_g_variant_get_variant = try_find_sym(glib2, "g_variant_get_variant");
    stub_funcs.ptr_g_variant_get_string = try_find_sym(glib2, "g_variant_get_string");
    stub_funcs.ptr_g_variant_dup_string = try_find_sym(glib2, "g_variant_dup_string");
    stub_funcs.ptr_g_variant_get_strv = try_find_sym(glib2, "g_variant_get_strv");
    stub_funcs.ptr_g_variant_dup_strv = try_find_sym(glib2, "g_variant_dup_strv");
    stub_funcs.ptr_g_variant_get_objv = try_find_sym(glib2, "g_variant_get_objv");
    stub_funcs.ptr_g_variant_dup_objv = try_find_sym(glib2, "g_variant_dup_objv");
    stub_funcs.ptr_g_variant_get_bytestring = try_find_sym(glib2, "g_variant_get_bytestring");
    stub_funcs.ptr_g_variant_dup_bytestring = try_find_sym(glib2, "g_variant_dup_bytestring");
    stub_funcs.ptr_g_variant_get_bytestring_array = try_find_sym(glib2, "g_variant_get_bytestring_array");
    stub_funcs.ptr_g_variant_dup_bytestring_array = try_find_sym(glib2, "g_variant_dup_bytestring_array");
    stub_funcs.ptr_g_variant_new_maybe = try_find_sym(glib2, "g_variant_new_maybe");
    stub_funcs.ptr_g_variant_new_array = try_find_sym(glib2, "g_variant_new_array");
    stub_funcs.ptr_g_variant_new_tuple = try_find_sym(glib2, "g_variant_new_tuple");
    stub_funcs.ptr_g_variant_new_dict_entry = try_find_sym(glib2, "g_variant_new_dict_entry");
    stub_funcs.ptr_g_variant_get_maybe = try_find_sym(glib2, "g_variant_get_maybe");
    stub_funcs.ptr_g_variant_n_children = try_find_sym(glib2, "g_variant_n_children");
    stub_funcs.ptr_g_variant_get_child_value = try_find_sym(glib2, "g_variant_get_child_value");
    stub_funcs.ptr_g_variant_lookup_value = try_find_sym(glib2, "g_variant_lookup_value");
    stub_funcs.ptr_g_variant_get_fixed_array = try_find_sym(glib2, "g_variant_get_fixed_array");
    stub_funcs.ptr_g_variant_get_size = try_find_sym(glib2, "g_variant_get_size");
    stub_funcs.ptr_g_variant_get_data = try_find_sym(glib2, "g_variant_get_data");
    stub_funcs.ptr_g_variant_get_data_as_bytes = try_find_sym(glib2, "g_variant_get_data_as_bytes");
    stub_funcs.ptr_g_variant_store = try_find_sym(glib2, "g_variant_store");
    stub_funcs.ptr_g_variant_print = try_find_sym(glib2, "g_variant_print");
    stub_funcs.ptr_g_variant_print_string = try_find_sym(glib2, "g_variant_print_string");
    stub_funcs.ptr_g_variant_hash = try_find_sym(glib2, "g_variant_hash");
    stub_funcs.ptr_g_variant_equal = try_find_sym(glib2, "g_variant_equal");
    stub_funcs.ptr_g_variant_get_normal_form = try_find_sym(glib2, "g_variant_get_normal_form");
    stub_funcs.ptr_g_variant_is_normal_form = try_find_sym(glib2, "g_variant_is_normal_form");
    stub_funcs.ptr_g_variant_byteswap = try_find_sym(glib2, "g_variant_byteswap");
    stub_funcs.ptr_g_variant_new_from_bytes = try_find_sym(glib2, "g_variant_new_from_bytes");
    stub_funcs.ptr_g_variant_new_from_data = try_find_sym(glib2, "g_variant_new_from_data");
    stub_funcs.ptr_g_variant_iter_new = try_find_sym(glib2, "g_variant_iter_new");
    stub_funcs.ptr_g_variant_iter_init = try_find_sym(glib2, "g_variant_iter_init");
    stub_funcs.ptr_g_variant_iter_copy = try_find_sym(glib2, "g_variant_iter_copy");
    stub_funcs.ptr_g_variant_iter_n_children = try_find_sym(glib2, "g_variant_iter_n_children");
    stub_funcs.ptr_g_variant_iter_free = try_find_sym(glib2, "g_variant_iter_free");
    stub_funcs.ptr_g_variant_iter_next_value = try_find_sym(glib2, "g_variant_iter_next_value");
    stub_funcs.ptr_g_variant_parser_get_error_quark = try_find_sym(glib2, "g_variant_parser_get_error_quark");
    stub_funcs.ptr_g_variant_parse_error_quark = try_find_sym(glib2, "g_variant_parse_error_quark");
    stub_funcs.ptr_g_variant_builder_new = try_find_sym(glib2, "g_variant_builder_new");
    stub_funcs.ptr_g_variant_builder_unref = try_find_sym(glib2, "g_variant_builder_unref");
    stub_funcs.ptr_g_variant_builder_ref = try_find_sym(glib2, "g_variant_builder_ref");
    stub_funcs.ptr_g_variant_builder_init = try_find_sym(glib2, "g_variant_builder_init");
    stub_funcs.ptr_g_variant_builder_end = try_find_sym(glib2, "g_variant_builder_end");
    stub_funcs.ptr_g_variant_builder_clear = try_find_sym(glib2, "g_variant_builder_clear");
    stub_funcs.ptr_g_variant_builder_open = try_find_sym(glib2, "g_variant_builder_open");
    stub_funcs.ptr_g_variant_builder_close = try_find_sym(glib2, "g_variant_builder_close");
    stub_funcs.ptr_g_variant_builder_add_value = try_find_sym(glib2, "g_variant_builder_add_value");
    stub_funcs.ptr_g_variant_new_va = try_find_sym(glib2, "g_variant_new_va");
    stub_funcs.ptr_g_variant_get_va = try_find_sym(glib2, "g_variant_get_va");
    stub_funcs.ptr_g_variant_check_format_string = try_find_sym(glib2, "g_variant_check_format_string");
    stub_funcs.ptr_g_variant_parse = try_find_sym(glib2, "g_variant_parse");
    stub_funcs.ptr_g_variant_new_parsed = try_find_sym(glib2, "g_variant_new_parsed");
    stub_funcs.ptr_g_variant_new_parsed_va = try_find_sym(glib2, "g_variant_new_parsed_va");
    stub_funcs.ptr_g_variant_parse_error_print_context = try_find_sym(glib2, "g_variant_parse_error_print_context");
    stub_funcs.ptr_g_variant_compare = try_find_sym(glib2, "g_variant_compare");
    stub_funcs.ptr_g_variant_dict_new = try_find_sym(glib2, "g_variant_dict_new");
    stub_funcs.ptr_g_variant_dict_init = try_find_sym(glib2, "g_variant_dict_init");
    stub_funcs.ptr_g_variant_dict_lookup_value = try_find_sym(glib2, "g_variant_dict_lookup_value");
    stub_funcs.ptr_g_variant_dict_contains = try_find_sym(glib2, "g_variant_dict_contains");
    stub_funcs.ptr_g_variant_dict_insert_value = try_find_sym(glib2, "g_variant_dict_insert_value");
    stub_funcs.ptr_g_variant_dict_remove = try_find_sym(glib2, "g_variant_dict_remove");
    stub_funcs.ptr_g_variant_dict_clear = try_find_sym(glib2, "g_variant_dict_clear");
    stub_funcs.ptr_g_variant_dict_end = try_find_sym(glib2, "g_variant_dict_end");
    stub_funcs.ptr_g_variant_dict_ref = try_find_sym(glib2, "g_variant_dict_ref");
    stub_funcs.ptr_g_variant_dict_unref = try_find_sym(glib2, "g_variant_dict_unref");
    stub_funcs.ptr_g_printf_string_upper_bound = try_find_sym(glib2, "g_printf_string_upper_bound");
    stub_funcs.ptr_g_log_set_handler = try_find_sym(glib2, "g_log_set_handler");
    stub_funcs.ptr_g_log_set_handler_full = try_find_sym(glib2, "g_log_set_handler_full");
    stub_funcs.ptr_g_log_remove_handler = try_find_sym(glib2, "g_log_remove_handler");
    stub_funcs.ptr_g_log_default_handler = try_find_sym(glib2, "g_log_default_handler");
    stub_funcs.ptr_g_log_set_default_handler = try_find_sym(glib2, "g_log_set_default_handler");
    stub_funcs.ptr_g_log = try_find_sym(glib2, "g_log");
    stub_funcs.ptr_g_logv = try_find_sym(glib2, "g_logv");
    stub_funcs.ptr_g_log_set_fatal_mask = try_find_sym(glib2, "g_log_set_fatal_mask");
    stub_funcs.ptr_g_log_set_always_fatal = try_find_sym(glib2, "g_log_set_always_fatal");
    stub_funcs.ptr_g_log_structured_array = try_find_sym(glib2, "g_log_structured_array");
    stub_funcs.ptr_g_log_variant = try_find_sym(glib2, "g_log_variant");
    stub_funcs.ptr_g_log_set_writer_func = try_find_sym(glib2, "g_log_set_writer_func");
    stub_funcs.ptr_g_log_writer_supports_color = try_find_sym(glib2, "g_log_writer_supports_color");
    stub_funcs.ptr_g_log_writer_is_journald = try_find_sym(glib2, "g_log_writer_is_journald");
    stub_funcs.ptr_g_log_writer_format_fields = try_find_sym(glib2, "g_log_writer_format_fields");
    stub_funcs.ptr_g_log_writer_syslog = try_find_sym(glib2, "g_log_writer_syslog");
    stub_funcs.ptr_g_log_writer_journald = try_find_sym(glib2, "g_log_writer_journald");
    stub_funcs.ptr_g_log_writer_standard_streams = try_find_sym(glib2, "g_log_writer_standard_streams");
    stub_funcs.ptr_g_log_writer_default = try_find_sym(glib2, "g_log_writer_default");
    stub_funcs.ptr_g_log_writer_default_set_use_stderr = try_find_sym(glib2, "g_log_writer_default_set_use_stderr");
    stub_funcs.ptr_g_log_writer_default_would_drop = try_find_sym(glib2, "g_log_writer_default_would_drop");
    stub_funcs.ptr_g_log_writer_default_set_debug_domains = try_find_sym(glib2, "g_log_writer_default_set_debug_domains");
    stub_funcs.ptr_g_log_get_debug_enabled = try_find_sym(glib2, "g_log_get_debug_enabled");
    stub_funcs.ptr_g_log_set_debug_enabled = try_find_sym(glib2, "g_log_set_debug_enabled");
    stub_funcs.ptr__g_log_fallback_handler = try_find_sym(glib2, "_g_log_fallback_handler");
    stub_funcs.ptr_g_return_if_fail_warning = try_find_sym(glib2, "g_return_if_fail_warning");
    stub_funcs.ptr_g_warn_message = try_find_sym(glib2, "g_warn_message");
    stub_funcs.ptr_g_assert_warning = try_find_sym(glib2, "g_assert_warning");
    stub_funcs.ptr_g_print = try_find_sym(glib2, "g_print");
    stub_funcs.ptr_g_set_print_handler = try_find_sym(glib2, "g_set_print_handler");
    stub_funcs.ptr_g_set_printerr_handler = try_find_sym(glib2, "g_set_printerr_handler");
    stub_funcs.ptr_g_option_error_quark = try_find_sym(glib2, "g_option_error_quark");
    stub_funcs.ptr_g_option_context_new = try_find_sym(glib2, "g_option_context_new");
    stub_funcs.ptr_g_option_context_set_summary = try_find_sym(glib2, "g_option_context_set_summary");
    stub_funcs.ptr_g_option_context_get_summary = try_find_sym(glib2, "g_option_context_get_summary");
    stub_funcs.ptr_g_option_context_set_description = try_find_sym(glib2, "g_option_context_set_description");
    stub_funcs.ptr_g_option_context_get_description = try_find_sym(glib2, "g_option_context_get_description");
    stub_funcs.ptr_g_option_context_free = try_find_sym(glib2, "g_option_context_free");
    stub_funcs.ptr_g_option_context_set_help_enabled = try_find_sym(glib2, "g_option_context_set_help_enabled");
    stub_funcs.ptr_g_option_context_get_help_enabled = try_find_sym(glib2, "g_option_context_get_help_enabled");
    stub_funcs.ptr_g_option_context_set_ignore_unknown_options = try_find_sym(glib2, "g_option_context_set_ignore_unknown_options");
    stub_funcs.ptr_g_option_context_get_ignore_unknown_options = try_find_sym(glib2, "g_option_context_get_ignore_unknown_options");
    stub_funcs.ptr_g_option_context_set_strict_posix = try_find_sym(glib2, "g_option_context_set_strict_posix");
    stub_funcs.ptr_g_option_context_get_strict_posix = try_find_sym(glib2, "g_option_context_get_strict_posix");
    stub_funcs.ptr_g_option_context_add_main_entries = try_find_sym(glib2, "g_option_context_add_main_entries");
    stub_funcs.ptr_g_option_context_parse = try_find_sym(glib2, "g_option_context_parse");
    stub_funcs.ptr_g_option_context_parse_strv = try_find_sym(glib2, "g_option_context_parse_strv");
    stub_funcs.ptr_g_option_context_set_translate_func = try_find_sym(glib2, "g_option_context_set_translate_func");
    stub_funcs.ptr_g_option_context_set_translation_domain = try_find_sym(glib2, "g_option_context_set_translation_domain");
    stub_funcs.ptr_g_option_context_add_group = try_find_sym(glib2, "g_option_context_add_group");
    stub_funcs.ptr_g_option_context_set_main_group = try_find_sym(glib2, "g_option_context_set_main_group");
    stub_funcs.ptr_g_option_context_get_main_group = try_find_sym(glib2, "g_option_context_get_main_group");
    stub_funcs.ptr_g_option_context_get_help = try_find_sym(glib2, "g_option_context_get_help");
    stub_funcs.ptr_g_option_group_new = try_find_sym(glib2, "g_option_group_new");
    stub_funcs.ptr_g_option_group_set_parse_hooks = try_find_sym(glib2, "g_option_group_set_parse_hooks");
    stub_funcs.ptr_g_option_group_set_error_hook = try_find_sym(glib2, "g_option_group_set_error_hook");
    stub_funcs.ptr_g_option_group_free = try_find_sym(glib2, "g_option_group_free");
    stub_funcs.ptr_g_option_group_ref = try_find_sym(glib2, "g_option_group_ref");
    stub_funcs.ptr_g_option_group_unref = try_find_sym(glib2, "g_option_group_unref");
    stub_funcs.ptr_g_option_group_add_entries = try_find_sym(glib2, "g_option_group_add_entries");
    stub_funcs.ptr_g_option_group_set_translate_func = try_find_sym(glib2, "g_option_group_set_translate_func");
    stub_funcs.ptr_g_option_group_set_translation_domain = try_find_sym(glib2, "g_option_group_set_translation_domain");
    stub_funcs.ptr_g_path_buf_new = try_find_sym(glib2, "g_path_buf_new");
    stub_funcs.ptr_g_path_buf_new_from_path = try_find_sym(glib2, "g_path_buf_new_from_path");
    stub_funcs.ptr_g_path_buf_init = try_find_sym(glib2, "g_path_buf_init");
    stub_funcs.ptr_g_path_buf_init_from_path = try_find_sym(glib2, "g_path_buf_init_from_path");
    stub_funcs.ptr_g_path_buf_clear = try_find_sym(glib2, "g_path_buf_clear");
    stub_funcs.ptr_g_path_buf_clear_to_path = try_find_sym(glib2, "g_path_buf_clear_to_path");
    stub_funcs.ptr_g_path_buf_free = try_find_sym(glib2, "g_path_buf_free");
    stub_funcs.ptr_g_path_buf_free_to_path = try_find_sym(glib2, "g_path_buf_free_to_path");
    stub_funcs.ptr_g_path_buf_copy = try_find_sym(glib2, "g_path_buf_copy");
    stub_funcs.ptr_g_path_buf_push = try_find_sym(glib2, "g_path_buf_push");
    stub_funcs.ptr_g_path_buf_pop = try_find_sym(glib2, "g_path_buf_pop");
    stub_funcs.ptr_g_path_buf_set_filename = try_find_sym(glib2, "g_path_buf_set_filename");
    stub_funcs.ptr_g_path_buf_set_extension = try_find_sym(glib2, "g_path_buf_set_extension");
    stub_funcs.ptr_g_path_buf_to_path = try_find_sym(glib2, "g_path_buf_to_path");
    stub_funcs.ptr_g_path_buf_equal = try_find_sym(glib2, "g_path_buf_equal");
    stub_funcs.ptr_g_pattern_spec_new = try_find_sym(glib2, "g_pattern_spec_new");
    stub_funcs.ptr_g_pattern_spec_free = try_find_sym(glib2, "g_pattern_spec_free");
    stub_funcs.ptr_g_pattern_spec_copy = try_find_sym(glib2, "g_pattern_spec_copy");
    stub_funcs.ptr_g_pattern_spec_equal = try_find_sym(glib2, "g_pattern_spec_equal");
    stub_funcs.ptr_g_pattern_spec_match = try_find_sym(glib2, "g_pattern_spec_match");
    stub_funcs.ptr_g_pattern_spec_match_string = try_find_sym(glib2, "g_pattern_spec_match_string");
    stub_funcs.ptr_g_pattern_match = try_find_sym(glib2, "g_pattern_match");
    stub_funcs.ptr_g_pattern_match_string = try_find_sym(glib2, "g_pattern_match_string");
    stub_funcs.ptr_g_pattern_match_simple = try_find_sym(glib2, "g_pattern_match_simple");
    stub_funcs.ptr_g_spaced_primes_closest = try_find_sym(glib2, "g_spaced_primes_closest");
    stub_funcs.ptr_g_qsort_with_data = try_find_sym(glib2, "g_qsort_with_data");
    stub_funcs.ptr_g_sort_array = try_find_sym(glib2, "g_sort_array");
    stub_funcs.ptr_g_queue_new = try_find_sym(glib2, "g_queue_new");
    stub_funcs.ptr_g_queue_free = try_find_sym(glib2, "g_queue_free");
    stub_funcs.ptr_g_queue_free_full = try_find_sym(glib2, "g_queue_free_full");
    stub_funcs.ptr_g_queue_init = try_find_sym(glib2, "g_queue_init");
    stub_funcs.ptr_g_queue_clear = try_find_sym(glib2, "g_queue_clear");
    stub_funcs.ptr_g_queue_is_empty = try_find_sym(glib2, "g_queue_is_empty");
    stub_funcs.ptr_g_queue_clear_full = try_find_sym(glib2, "g_queue_clear_full");
    stub_funcs.ptr_g_queue_get_length = try_find_sym(glib2, "g_queue_get_length");
    stub_funcs.ptr_g_queue_reverse = try_find_sym(glib2, "g_queue_reverse");
    stub_funcs.ptr_g_queue_copy = try_find_sym(glib2, "g_queue_copy");
    stub_funcs.ptr_g_queue_foreach = try_find_sym(glib2, "g_queue_foreach");
    stub_funcs.ptr_g_queue_find = try_find_sym(glib2, "g_queue_find");
    stub_funcs.ptr_g_queue_find_custom = try_find_sym(glib2, "g_queue_find_custom");
    stub_funcs.ptr_g_queue_sort = try_find_sym(glib2, "g_queue_sort");
    stub_funcs.ptr_g_queue_push_head = try_find_sym(glib2, "g_queue_push_head");
    stub_funcs.ptr_g_queue_push_tail = try_find_sym(glib2, "g_queue_push_tail");
    stub_funcs.ptr_g_queue_push_nth = try_find_sym(glib2, "g_queue_push_nth");
    stub_funcs.ptr_g_queue_pop_head = try_find_sym(glib2, "g_queue_pop_head");
    stub_funcs.ptr_g_queue_pop_tail = try_find_sym(glib2, "g_queue_pop_tail");
    stub_funcs.ptr_g_queue_pop_nth = try_find_sym(glib2, "g_queue_pop_nth");
    stub_funcs.ptr_g_queue_peek_head = try_find_sym(glib2, "g_queue_peek_head");
    stub_funcs.ptr_g_queue_peek_tail = try_find_sym(glib2, "g_queue_peek_tail");
    stub_funcs.ptr_g_queue_peek_nth = try_find_sym(glib2, "g_queue_peek_nth");
    stub_funcs.ptr_g_queue_index = try_find_sym(glib2, "g_queue_index");
    stub_funcs.ptr_g_queue_remove = try_find_sym(glib2, "g_queue_remove");
    stub_funcs.ptr_g_queue_remove_all = try_find_sym(glib2, "g_queue_remove_all");
    stub_funcs.ptr_g_queue_insert_before = try_find_sym(glib2, "g_queue_insert_before");
    stub_funcs.ptr_g_queue_insert_before_link = try_find_sym(glib2, "g_queue_insert_before_link");
    stub_funcs.ptr_g_queue_insert_after = try_find_sym(glib2, "g_queue_insert_after");
    stub_funcs.ptr_g_queue_insert_after_link = try_find_sym(glib2, "g_queue_insert_after_link");
    stub_funcs.ptr_g_queue_insert_sorted = try_find_sym(glib2, "g_queue_insert_sorted");
    stub_funcs.ptr_g_queue_push_head_link = try_find_sym(glib2, "g_queue_push_head_link");
    stub_funcs.ptr_g_queue_push_tail_link = try_find_sym(glib2, "g_queue_push_tail_link");
    stub_funcs.ptr_g_queue_push_nth_link = try_find_sym(glib2, "g_queue_push_nth_link");
    stub_funcs.ptr_g_queue_pop_head_link = try_find_sym(glib2, "g_queue_pop_head_link");
    stub_funcs.ptr_g_queue_pop_tail_link = try_find_sym(glib2, "g_queue_pop_tail_link");
    stub_funcs.ptr_g_queue_pop_nth_link = try_find_sym(glib2, "g_queue_pop_nth_link");
    stub_funcs.ptr_g_queue_peek_head_link = try_find_sym(glib2, "g_queue_peek_head_link");
    stub_funcs.ptr_g_queue_peek_tail_link = try_find_sym(glib2, "g_queue_peek_tail_link");
    stub_funcs.ptr_g_queue_peek_nth_link = try_find_sym(glib2, "g_queue_peek_nth_link");
    stub_funcs.ptr_g_queue_link_index = try_find_sym(glib2, "g_queue_link_index");
    stub_funcs.ptr_g_queue_unlink = try_find_sym(glib2, "g_queue_unlink");
    stub_funcs.ptr_g_queue_delete_link = try_find_sym(glib2, "g_queue_delete_link");
    stub_funcs.ptr_g_rand_new_with_seed = try_find_sym(glib2, "g_rand_new_with_seed");
    stub_funcs.ptr_g_rand_new_with_seed_array = try_find_sym(glib2, "g_rand_new_with_seed_array");
    stub_funcs.ptr_g_rand_new = try_find_sym(glib2, "g_rand_new");
    stub_funcs.ptr_g_rand_free = try_find_sym(glib2, "g_rand_free");
    stub_funcs.ptr_g_rand_copy = try_find_sym(glib2, "g_rand_copy");
    stub_funcs.ptr_g_rand_set_seed = try_find_sym(glib2, "g_rand_set_seed");
    stub_funcs.ptr_g_rand_set_seed_array = try_find_sym(glib2, "g_rand_set_seed_array");
    stub_funcs.ptr_g_rand_int = try_find_sym(glib2, "g_rand_int");
    stub_funcs.ptr_g_rand_int_range = try_find_sym(glib2, "g_rand_int_range");
    stub_funcs.ptr_g_rand_double = try_find_sym(glib2, "g_rand_double");
    stub_funcs.ptr_g_rand_double_range = try_find_sym(glib2, "g_rand_double_range");
    stub_funcs.ptr_g_random_set_seed = try_find_sym(glib2, "g_random_set_seed");
    stub_funcs.ptr_g_random_int = try_find_sym(glib2, "g_random_int");
    stub_funcs.ptr_g_random_int_range = try_find_sym(glib2, "g_random_int_range");
    stub_funcs.ptr_g_random_double = try_find_sym(glib2, "g_random_double");
    stub_funcs.ptr_g_random_double_range = try_find_sym(glib2, "g_random_double_range");
    stub_funcs.ptr_g_rc_box_alloc = try_find_sym(glib2, "g_rc_box_alloc");
    stub_funcs.ptr_g_rc_box_alloc0 = try_find_sym(glib2, "g_rc_box_alloc0");
    stub_funcs.ptr_g_rc_box_dup = try_find_sym(glib2, "g_rc_box_dup");
    stub_funcs.ptr_g_rc_box_acquire = try_find_sym(glib2, "g_rc_box_acquire");
    stub_funcs.ptr_g_rc_box_release = try_find_sym(glib2, "g_rc_box_release");
    stub_funcs.ptr_g_rc_box_release_full = try_find_sym(glib2, "g_rc_box_release_full");
    stub_funcs.ptr_g_rc_box_get_size = try_find_sym(glib2, "g_rc_box_get_size");
    stub_funcs.ptr_g_atomic_rc_box_alloc = try_find_sym(glib2, "g_atomic_rc_box_alloc");
    stub_funcs.ptr_g_atomic_rc_box_alloc0 = try_find_sym(glib2, "g_atomic_rc_box_alloc0");
    stub_funcs.ptr_g_atomic_rc_box_dup = try_find_sym(glib2, "g_atomic_rc_box_dup");
    stub_funcs.ptr_g_atomic_rc_box_acquire = try_find_sym(glib2, "g_atomic_rc_box_acquire");
    stub_funcs.ptr_g_atomic_rc_box_release = try_find_sym(glib2, "g_atomic_rc_box_release");
    stub_funcs.ptr_g_atomic_rc_box_release_full = try_find_sym(glib2, "g_atomic_rc_box_release_full");
    stub_funcs.ptr_g_atomic_rc_box_get_size = try_find_sym(glib2, "g_atomic_rc_box_get_size");
    stub_funcs.ptr_g_ref_count_init = try_find_sym(glib2, "g_ref_count_init");
    stub_funcs.ptr_g_ref_count_inc = try_find_sym(glib2, "g_ref_count_inc");
    stub_funcs.ptr_g_ref_count_dec = try_find_sym(glib2, "g_ref_count_dec");
    stub_funcs.ptr_g_ref_count_compare = try_find_sym(glib2, "g_ref_count_compare");
    stub_funcs.ptr_g_atomic_ref_count_init = try_find_sym(glib2, "g_atomic_ref_count_init");
    stub_funcs.ptr_g_atomic_ref_count_inc = try_find_sym(glib2, "g_atomic_ref_count_inc");
    stub_funcs.ptr_g_atomic_ref_count_dec = try_find_sym(glib2, "g_atomic_ref_count_dec");
    stub_funcs.ptr_g_atomic_ref_count_compare = try_find_sym(glib2, "g_atomic_ref_count_compare");
    stub_funcs.ptr_g_ref_string_new = try_find_sym(glib2, "g_ref_string_new");
    stub_funcs.ptr_g_ref_string_new_len = try_find_sym(glib2, "g_ref_string_new_len");
    stub_funcs.ptr_g_ref_string_new_intern = try_find_sym(glib2, "g_ref_string_new_intern");
    stub_funcs.ptr_g_ref_string_acquire = try_find_sym(glib2, "g_ref_string_acquire");
    stub_funcs.ptr_g_ref_string_release = try_find_sym(glib2, "g_ref_string_release");
    stub_funcs.ptr_g_ref_string_length = try_find_sym(glib2, "g_ref_string_length");
    stub_funcs.ptr_g_regex_error_quark = try_find_sym(glib2, "g_regex_error_quark");
    stub_funcs.ptr_g_regex_new = try_find_sym(glib2, "g_regex_new");
    stub_funcs.ptr_g_regex_ref = try_find_sym(glib2, "g_regex_ref");
    stub_funcs.ptr_g_regex_unref = try_find_sym(glib2, "g_regex_unref");
    stub_funcs.ptr_g_regex_get_pattern = try_find_sym(glib2, "g_regex_get_pattern");
    stub_funcs.ptr_g_regex_get_max_backref = try_find_sym(glib2, "g_regex_get_max_backref");
    stub_funcs.ptr_g_regex_get_capture_count = try_find_sym(glib2, "g_regex_get_capture_count");
    stub_funcs.ptr_g_regex_get_has_cr_or_lf = try_find_sym(glib2, "g_regex_get_has_cr_or_lf");
    stub_funcs.ptr_g_regex_get_max_lookbehind = try_find_sym(glib2, "g_regex_get_max_lookbehind");
    stub_funcs.ptr_g_regex_get_string_number = try_find_sym(glib2, "g_regex_get_string_number");
    stub_funcs.ptr_g_regex_escape_string = try_find_sym(glib2, "g_regex_escape_string");
    stub_funcs.ptr_g_regex_escape_nul = try_find_sym(glib2, "g_regex_escape_nul");
    stub_funcs.ptr_g_regex_get_compile_flags = try_find_sym(glib2, "g_regex_get_compile_flags");
    stub_funcs.ptr_g_regex_get_match_flags = try_find_sym(glib2, "g_regex_get_match_flags");
    stub_funcs.ptr_g_regex_match_simple = try_find_sym(glib2, "g_regex_match_simple");
    stub_funcs.ptr_g_regex_match = try_find_sym(glib2, "g_regex_match");
    stub_funcs.ptr_g_regex_match_full = try_find_sym(glib2, "g_regex_match_full");
    stub_funcs.ptr_g_regex_match_all = try_find_sym(glib2, "g_regex_match_all");
    stub_funcs.ptr_g_regex_match_all_full = try_find_sym(glib2, "g_regex_match_all_full");
    stub_funcs.ptr_g_regex_split_simple = try_find_sym(glib2, "g_regex_split_simple");
    stub_funcs.ptr_g_regex_split = try_find_sym(glib2, "g_regex_split");
    stub_funcs.ptr_g_regex_split_full = try_find_sym(glib2, "g_regex_split_full");
    stub_funcs.ptr_g_regex_replace = try_find_sym(glib2, "g_regex_replace");
    stub_funcs.ptr_g_regex_replace_literal = try_find_sym(glib2, "g_regex_replace_literal");
    stub_funcs.ptr_g_regex_replace_eval = try_find_sym(glib2, "g_regex_replace_eval");
    stub_funcs.ptr_g_regex_check_replacement = try_find_sym(glib2, "g_regex_check_replacement");
    stub_funcs.ptr_g_match_info_get_regex = try_find_sym(glib2, "g_match_info_get_regex");
    stub_funcs.ptr_g_match_info_get_string = try_find_sym(glib2, "g_match_info_get_string");
    stub_funcs.ptr_g_match_info_ref = try_find_sym(glib2, "g_match_info_ref");
    stub_funcs.ptr_g_match_info_unref = try_find_sym(glib2, "g_match_info_unref");
    stub_funcs.ptr_g_match_info_free = try_find_sym(glib2, "g_match_info_free");
    stub_funcs.ptr_g_match_info_next = try_find_sym(glib2, "g_match_info_next");
    stub_funcs.ptr_g_match_info_matches = try_find_sym(glib2, "g_match_info_matches");
    stub_funcs.ptr_g_match_info_get_match_count = try_find_sym(glib2, "g_match_info_get_match_count");
    stub_funcs.ptr_g_match_info_is_partial_match = try_find_sym(glib2, "g_match_info_is_partial_match");
    stub_funcs.ptr_g_match_info_expand_references = try_find_sym(glib2, "g_match_info_expand_references");
    stub_funcs.ptr_g_match_info_fetch = try_find_sym(glib2, "g_match_info_fetch");
    stub_funcs.ptr_g_match_info_fetch_pos = try_find_sym(glib2, "g_match_info_fetch_pos");
    stub_funcs.ptr_g_match_info_fetch_named = try_find_sym(glib2, "g_match_info_fetch_named");
    stub_funcs.ptr_g_match_info_fetch_named_pos = try_find_sym(glib2, "g_match_info_fetch_named_pos");
    stub_funcs.ptr_g_match_info_fetch_all = try_find_sym(glib2, "g_match_info_fetch_all");
    stub_funcs.ptr_g_scanner_new = try_find_sym(glib2, "g_scanner_new");
    stub_funcs.ptr_g_scanner_destroy = try_find_sym(glib2, "g_scanner_destroy");
    stub_funcs.ptr_g_scanner_input_file = try_find_sym(glib2, "g_scanner_input_file");
    stub_funcs.ptr_g_scanner_sync_file_offset = try_find_sym(glib2, "g_scanner_sync_file_offset");
    stub_funcs.ptr_g_scanner_input_text = try_find_sym(glib2, "g_scanner_input_text");
    stub_funcs.ptr_g_scanner_get_next_token = try_find_sym(glib2, "g_scanner_get_next_token");
    stub_funcs.ptr_g_scanner_peek_next_token = try_find_sym(glib2, "g_scanner_peek_next_token");
    stub_funcs.ptr_g_scanner_cur_token = try_find_sym(glib2, "g_scanner_cur_token");
    stub_funcs.ptr_g_scanner_cur_value = try_find_sym(glib2, "g_scanner_cur_value");
    stub_funcs.ptr_g_scanner_cur_line = try_find_sym(glib2, "g_scanner_cur_line");
    stub_funcs.ptr_g_scanner_cur_position = try_find_sym(glib2, "g_scanner_cur_position");
    stub_funcs.ptr_g_scanner_eof = try_find_sym(glib2, "g_scanner_eof");
    stub_funcs.ptr_g_scanner_set_scope = try_find_sym(glib2, "g_scanner_set_scope");
    stub_funcs.ptr_g_scanner_scope_add_symbol = try_find_sym(glib2, "g_scanner_scope_add_symbol");
    stub_funcs.ptr_g_scanner_scope_remove_symbol = try_find_sym(glib2, "g_scanner_scope_remove_symbol");
    stub_funcs.ptr_g_scanner_scope_lookup_symbol = try_find_sym(glib2, "g_scanner_scope_lookup_symbol");
    stub_funcs.ptr_g_scanner_scope_foreach_symbol = try_find_sym(glib2, "g_scanner_scope_foreach_symbol");
    stub_funcs.ptr_g_scanner_lookup_symbol = try_find_sym(glib2, "g_scanner_lookup_symbol");
    stub_funcs.ptr_g_scanner_unexp_token = try_find_sym(glib2, "g_scanner_unexp_token");
    stub_funcs.ptr_g_sequence_new = try_find_sym(glib2, "g_sequence_new");
    stub_funcs.ptr_g_sequence_free = try_find_sym(glib2, "g_sequence_free");
    stub_funcs.ptr_g_sequence_get_length = try_find_sym(glib2, "g_sequence_get_length");
    stub_funcs.ptr_g_sequence_foreach = try_find_sym(glib2, "g_sequence_foreach");
    stub_funcs.ptr_g_sequence_foreach_range = try_find_sym(glib2, "g_sequence_foreach_range");
    stub_funcs.ptr_g_sequence_sort = try_find_sym(glib2, "g_sequence_sort");
    stub_funcs.ptr_g_sequence_sort_iter = try_find_sym(glib2, "g_sequence_sort_iter");
    stub_funcs.ptr_g_sequence_is_empty = try_find_sym(glib2, "g_sequence_is_empty");
    stub_funcs.ptr_g_sequence_get_begin_iter = try_find_sym(glib2, "g_sequence_get_begin_iter");
    stub_funcs.ptr_g_sequence_get_end_iter = try_find_sym(glib2, "g_sequence_get_end_iter");
    stub_funcs.ptr_g_sequence_get_iter_at_pos = try_find_sym(glib2, "g_sequence_get_iter_at_pos");
    stub_funcs.ptr_g_sequence_append = try_find_sym(glib2, "g_sequence_append");
    stub_funcs.ptr_g_sequence_prepend = try_find_sym(glib2, "g_sequence_prepend");
    stub_funcs.ptr_g_sequence_insert_before = try_find_sym(glib2, "g_sequence_insert_before");
    stub_funcs.ptr_g_sequence_move = try_find_sym(glib2, "g_sequence_move");
    stub_funcs.ptr_g_sequence_swap = try_find_sym(glib2, "g_sequence_swap");
    stub_funcs.ptr_g_sequence_insert_sorted = try_find_sym(glib2, "g_sequence_insert_sorted");
    stub_funcs.ptr_g_sequence_insert_sorted_iter = try_find_sym(glib2, "g_sequence_insert_sorted_iter");
    stub_funcs.ptr_g_sequence_sort_changed = try_find_sym(glib2, "g_sequence_sort_changed");
    stub_funcs.ptr_g_sequence_sort_changed_iter = try_find_sym(glib2, "g_sequence_sort_changed_iter");
    stub_funcs.ptr_g_sequence_remove = try_find_sym(glib2, "g_sequence_remove");
    stub_funcs.ptr_g_sequence_remove_range = try_find_sym(glib2, "g_sequence_remove_range");
    stub_funcs.ptr_g_sequence_move_range = try_find_sym(glib2, "g_sequence_move_range");
    stub_funcs.ptr_g_sequence_search = try_find_sym(glib2, "g_sequence_search");
    stub_funcs.ptr_g_sequence_search_iter = try_find_sym(glib2, "g_sequence_search_iter");
    stub_funcs.ptr_g_sequence_lookup = try_find_sym(glib2, "g_sequence_lookup");
    stub_funcs.ptr_g_sequence_lookup_iter = try_find_sym(glib2, "g_sequence_lookup_iter");
    stub_funcs.ptr_g_sequence_get = try_find_sym(glib2, "g_sequence_get");
    stub_funcs.ptr_g_sequence_set = try_find_sym(glib2, "g_sequence_set");
    stub_funcs.ptr_g_sequence_iter_is_begin = try_find_sym(glib2, "g_sequence_iter_is_begin");
    stub_funcs.ptr_g_sequence_iter_is_end = try_find_sym(glib2, "g_sequence_iter_is_end");
    stub_funcs.ptr_g_sequence_iter_next = try_find_sym(glib2, "g_sequence_iter_next");
    stub_funcs.ptr_g_sequence_iter_prev = try_find_sym(glib2, "g_sequence_iter_prev");
    stub_funcs.ptr_g_sequence_iter_get_position = try_find_sym(glib2, "g_sequence_iter_get_position");
    stub_funcs.ptr_g_sequence_iter_move = try_find_sym(glib2, "g_sequence_iter_move");
    stub_funcs.ptr_g_sequence_iter_get_sequence = try_find_sym(glib2, "g_sequence_iter_get_sequence");
    stub_funcs.ptr_g_sequence_iter_compare = try_find_sym(glib2, "g_sequence_iter_compare");
    stub_funcs.ptr_g_sequence_range_get_midpoint = try_find_sym(glib2, "g_sequence_range_get_midpoint");
    stub_funcs.ptr_g_shell_error_quark = try_find_sym(glib2, "g_shell_error_quark");
    stub_funcs.ptr_g_shell_quote = try_find_sym(glib2, "g_shell_quote");
    stub_funcs.ptr_g_shell_unquote = try_find_sym(glib2, "g_shell_unquote");
    stub_funcs.ptr_g_shell_parse_argv = try_find_sym(glib2, "g_shell_parse_argv");
    stub_funcs.ptr_g_slice_alloc = try_find_sym(glib2, "g_slice_alloc");
    stub_funcs.ptr_g_slice_alloc0 = try_find_sym(glib2, "g_slice_alloc0");
    stub_funcs.ptr_g_slice_copy = try_find_sym(glib2, "g_slice_copy");
    stub_funcs.ptr_g_slice_free1 = try_find_sym(glib2, "g_slice_free1");
    stub_funcs.ptr_g_slice_free_chain_with_offset = try_find_sym(glib2, "g_slice_free_chain_with_offset");
    stub_funcs.ptr_g_slice_set_config = try_find_sym(glib2, "g_slice_set_config");
    stub_funcs.ptr_g_slice_get_config = try_find_sym(glib2, "g_slice_get_config");
    stub_funcs.ptr_g_slice_get_config_state = try_find_sym(glib2, "g_slice_get_config_state");
    stub_funcs.ptr_g_spawn_error_quark = try_find_sym(glib2, "g_spawn_error_quark");
    stub_funcs.ptr_g_spawn_exit_error_quark = try_find_sym(glib2, "g_spawn_exit_error_quark");
    stub_funcs.ptr_g_spawn_async = try_find_sym(glib2, "g_spawn_async");
    stub_funcs.ptr_g_spawn_async_with_pipes = try_find_sym(glib2, "g_spawn_async_with_pipes");
    stub_funcs.ptr_g_spawn_async_with_pipes_and_fds = try_find_sym(glib2, "g_spawn_async_with_pipes_and_fds");
    stub_funcs.ptr_g_spawn_async_with_fds = try_find_sym(glib2, "g_spawn_async_with_fds");
    stub_funcs.ptr_g_spawn_sync = try_find_sym(glib2, "g_spawn_sync");
    stub_funcs.ptr_g_spawn_command_line_sync = try_find_sym(glib2, "g_spawn_command_line_sync");
    stub_funcs.ptr_g_spawn_command_line_async = try_find_sym(glib2, "g_spawn_command_line_async");
    stub_funcs.ptr_g_spawn_check_wait_status = try_find_sym(glib2, "g_spawn_check_wait_status");
    stub_funcs.ptr_g_spawn_check_exit_status = try_find_sym(glib2, "g_spawn_check_exit_status");
    stub_funcs.ptr_g_spawn_close_pid = try_find_sym(glib2, "g_spawn_close_pid");
    stub_funcs.ptr_g_string_chunk_new = try_find_sym(glib2, "g_string_chunk_new");
    stub_funcs.ptr_g_string_chunk_free = try_find_sym(glib2, "g_string_chunk_free");
    stub_funcs.ptr_g_string_chunk_clear = try_find_sym(glib2, "g_string_chunk_clear");
    stub_funcs.ptr_g_string_chunk_insert = try_find_sym(glib2, "g_string_chunk_insert");
    stub_funcs.ptr_g_string_chunk_insert_len = try_find_sym(glib2, "g_string_chunk_insert_len");
    stub_funcs.ptr_g_string_chunk_insert_const = try_find_sym(glib2, "g_string_chunk_insert_const");
    stub_funcs.ptr_g_strv_builder_new = try_find_sym(glib2, "g_strv_builder_new");
    stub_funcs.ptr_g_strv_builder_unref = try_find_sym(glib2, "g_strv_builder_unref");
    stub_funcs.ptr_g_strv_builder_unref_to_strv = try_find_sym(glib2, "g_strv_builder_unref_to_strv");
    stub_funcs.ptr_g_strv_builder_ref = try_find_sym(glib2, "g_strv_builder_ref");
    stub_funcs.ptr_g_strv_builder_add = try_find_sym(glib2, "g_strv_builder_add");
    stub_funcs.ptr_g_strv_builder_addv = try_find_sym(glib2, "g_strv_builder_addv");
    stub_funcs.ptr_g_strv_builder_take = try_find_sym(glib2, "g_strv_builder_take");
    stub_funcs.ptr_g_strv_builder_end = try_find_sym(glib2, "g_strv_builder_end");
    stub_funcs.ptr_g_strcmp0 = try_find_sym(glib2, "g_strcmp0");
    stub_funcs.ptr_g_test_subprocess = try_find_sym(glib2, "g_test_subprocess");
    stub_funcs.ptr_g_test_run = try_find_sym(glib2, "g_test_run");
    stub_funcs.ptr_g_test_add_func = try_find_sym(glib2, "g_test_add_func");
    stub_funcs.ptr_g_test_add_data_func = try_find_sym(glib2, "g_test_add_data_func");
    stub_funcs.ptr_g_test_add_data_func_full = try_find_sym(glib2, "g_test_add_data_func_full");
    stub_funcs.ptr_g_test_get_path = try_find_sym(glib2, "g_test_get_path");
    stub_funcs.ptr_g_test_fail = try_find_sym(glib2, "g_test_fail");
    stub_funcs.ptr_g_test_incomplete = try_find_sym(glib2, "g_test_incomplete");
    stub_funcs.ptr_g_test_skip = try_find_sym(glib2, "g_test_skip");
    stub_funcs.ptr_g_test_failed = try_find_sym(glib2, "g_test_failed");
    stub_funcs.ptr_g_test_set_nonfatal_assertions = try_find_sym(glib2, "g_test_set_nonfatal_assertions");
    stub_funcs.ptr_g_test_disable_crash_reporting = try_find_sym(glib2, "g_test_disable_crash_reporting");
    stub_funcs.ptr_g_test_bug_base = try_find_sym(glib2, "g_test_bug_base");
    stub_funcs.ptr_g_test_bug = try_find_sym(glib2, "g_test_bug");
    stub_funcs.ptr_g_test_summary = try_find_sym(glib2, "g_test_summary");
    stub_funcs.ptr_g_test_timer_start = try_find_sym(glib2, "g_test_timer_start");
    stub_funcs.ptr_g_test_timer_elapsed = try_find_sym(glib2, "g_test_timer_elapsed");
    stub_funcs.ptr_g_test_timer_last = try_find_sym(glib2, "g_test_timer_last");
    stub_funcs.ptr_g_test_queue_free = try_find_sym(glib2, "g_test_queue_free");
    stub_funcs.ptr_g_test_queue_destroy = try_find_sym(glib2, "g_test_queue_destroy");
    stub_funcs.ptr_g_test_trap_fork = try_find_sym(glib2, "g_test_trap_fork");
    stub_funcs.ptr_g_test_trap_subprocess = try_find_sym(glib2, "g_test_trap_subprocess");
    stub_funcs.ptr_g_test_trap_subprocess_with_envp = try_find_sym(glib2, "g_test_trap_subprocess_with_envp");
    stub_funcs.ptr_g_test_trap_has_passed = try_find_sym(glib2, "g_test_trap_has_passed");
    stub_funcs.ptr_g_test_trap_reached_timeout = try_find_sym(glib2, "g_test_trap_reached_timeout");
    stub_funcs.ptr_g_test_rand_int = try_find_sym(glib2, "g_test_rand_int");
    stub_funcs.ptr_g_test_rand_int_range = try_find_sym(glib2, "g_test_rand_int_range");
    stub_funcs.ptr_g_test_rand_double = try_find_sym(glib2, "g_test_rand_double");
    stub_funcs.ptr_g_test_rand_double_range = try_find_sym(glib2, "g_test_rand_double_range");
    stub_funcs.ptr_g_test_create_case = try_find_sym(glib2, "g_test_create_case");
    stub_funcs.ptr_g_test_create_suite = try_find_sym(glib2, "g_test_create_suite");
    stub_funcs.ptr_g_test_get_root = try_find_sym(glib2, "g_test_get_root");
    stub_funcs.ptr_g_test_suite_add = try_find_sym(glib2, "g_test_suite_add");
    stub_funcs.ptr_g_test_suite_add_suite = try_find_sym(glib2, "g_test_suite_add_suite");
    stub_funcs.ptr_g_test_run_suite = try_find_sym(glib2, "g_test_run_suite");
    stub_funcs.ptr_g_test_case_free = try_find_sym(glib2, "g_test_case_free");
    stub_funcs.ptr_g_test_suite_free = try_find_sym(glib2, "g_test_suite_free");
    stub_funcs.ptr_g_test_trap_assertions = try_find_sym(glib2, "g_test_trap_assertions");
    stub_funcs.ptr_g_assertion_message = try_find_sym(glib2, "g_assertion_message");
    stub_funcs.ptr_g_assertion_message_expr = try_find_sym(glib2, "g_assertion_message_expr");
    stub_funcs.ptr_g_assertion_message_cmpstr = try_find_sym(glib2, "g_assertion_message_cmpstr");
    stub_funcs.ptr_g_assertion_message_cmpstrv = try_find_sym(glib2, "g_assertion_message_cmpstrv");
    stub_funcs.ptr_g_assertion_message_cmpint = try_find_sym(glib2, "g_assertion_message_cmpint");
    stub_funcs.ptr_g_assertion_message_cmpnum = try_find_sym(glib2, "g_assertion_message_cmpnum");
    stub_funcs.ptr_g_assertion_message_error = try_find_sym(glib2, "g_assertion_message_error");
    stub_funcs.ptr_g_test_add_vtable = try_find_sym(glib2, "g_test_add_vtable");
    stub_funcs.ptr_g_test_log_type_name = try_find_sym(glib2, "g_test_log_type_name");
    stub_funcs.ptr_g_test_log_buffer_new = try_find_sym(glib2, "g_test_log_buffer_new");
    stub_funcs.ptr_g_test_log_buffer_free = try_find_sym(glib2, "g_test_log_buffer_free");
    stub_funcs.ptr_g_test_log_buffer_push = try_find_sym(glib2, "g_test_log_buffer_push");
    stub_funcs.ptr_g_test_log_buffer_pop = try_find_sym(glib2, "g_test_log_buffer_pop");
    stub_funcs.ptr_g_test_log_msg_free = try_find_sym(glib2, "g_test_log_msg_free");
    stub_funcs.ptr_g_test_log_set_fatal_handler = try_find_sym(glib2, "g_test_log_set_fatal_handler");
    stub_funcs.ptr_g_test_expect_message = try_find_sym(glib2, "g_test_expect_message");
    stub_funcs.ptr_g_test_assert_expected_messages_internal = try_find_sym(glib2, "g_test_assert_expected_messages_internal");
    stub_funcs.ptr_g_test_get_dir = try_find_sym(glib2, "g_test_get_dir");
    stub_funcs.ptr_g_thread_pool_new = try_find_sym(glib2, "g_thread_pool_new");
    stub_funcs.ptr_g_thread_pool_new_full = try_find_sym(glib2, "g_thread_pool_new_full");
    stub_funcs.ptr_g_thread_pool_free = try_find_sym(glib2, "g_thread_pool_free");
    stub_funcs.ptr_g_thread_pool_push = try_find_sym(glib2, "g_thread_pool_push");
    stub_funcs.ptr_g_thread_pool_unprocessed = try_find_sym(glib2, "g_thread_pool_unprocessed");
    stub_funcs.ptr_g_thread_pool_set_sort_function = try_find_sym(glib2, "g_thread_pool_set_sort_function");
    stub_funcs.ptr_g_thread_pool_move_to_front = try_find_sym(glib2, "g_thread_pool_move_to_front");
    stub_funcs.ptr_g_thread_pool_set_max_threads = try_find_sym(glib2, "g_thread_pool_set_max_threads");
    stub_funcs.ptr_g_thread_pool_get_max_threads = try_find_sym(glib2, "g_thread_pool_get_max_threads");
    stub_funcs.ptr_g_thread_pool_get_num_threads = try_find_sym(glib2, "g_thread_pool_get_num_threads");
    stub_funcs.ptr_g_thread_pool_set_max_unused_threads = try_find_sym(glib2, "g_thread_pool_set_max_unused_threads");
    stub_funcs.ptr_g_thread_pool_get_max_unused_threads = try_find_sym(glib2, "g_thread_pool_get_max_unused_threads");
    stub_funcs.ptr_g_thread_pool_get_num_unused_threads = try_find_sym(glib2, "g_thread_pool_get_num_unused_threads");
    stub_funcs.ptr_g_thread_pool_stop_unused_threads = try_find_sym(glib2, "g_thread_pool_stop_unused_threads");
    stub_funcs.ptr_g_thread_pool_set_max_idle_time = try_find_sym(glib2, "g_thread_pool_set_max_idle_time");
    stub_funcs.ptr_g_thread_pool_get_max_idle_time = try_find_sym(glib2, "g_thread_pool_get_max_idle_time");
    stub_funcs.ptr_g_timer_new = try_find_sym(glib2, "g_timer_new");
    stub_funcs.ptr_g_timer_destroy = try_find_sym(glib2, "g_timer_destroy");
    stub_funcs.ptr_g_timer_start = try_find_sym(glib2, "g_timer_start");
    stub_funcs.ptr_g_timer_stop = try_find_sym(glib2, "g_timer_stop");
    stub_funcs.ptr_g_timer_reset = try_find_sym(glib2, "g_timer_reset");
    stub_funcs.ptr_g_timer_continue = try_find_sym(glib2, "g_timer_continue");
    stub_funcs.ptr_g_timer_elapsed = try_find_sym(glib2, "g_timer_elapsed");
    stub_funcs.ptr_g_timer_is_active = try_find_sym(glib2, "g_timer_is_active");
    stub_funcs.ptr_g_usleep = try_find_sym(glib2, "g_usleep");
    stub_funcs.ptr_g_time_val_add = try_find_sym(glib2, "g_time_val_add");
    stub_funcs.ptr_g_time_val_from_iso8601 = try_find_sym(glib2, "g_time_val_from_iso8601");
    stub_funcs.ptr_g_time_val_to_iso8601 = try_find_sym(glib2, "g_time_val_to_iso8601");
    stub_funcs.ptr_g_trash_stack_push = try_find_sym(glib2, "g_trash_stack_push");
    stub_funcs.ptr_g_trash_stack_pop = try_find_sym(glib2, "g_trash_stack_pop");
    stub_funcs.ptr_g_trash_stack_peek = try_find_sym(glib2, "g_trash_stack_peek");
    stub_funcs.ptr_g_trash_stack_height = try_find_sym(glib2, "g_trash_stack_height");
    stub_funcs.ptr_g_tree_new = try_find_sym(glib2, "g_tree_new");
    stub_funcs.ptr_g_tree_new_with_data = try_find_sym(glib2, "g_tree_new_with_data");
    stub_funcs.ptr_g_tree_new_full = try_find_sym(glib2, "g_tree_new_full");
    stub_funcs.ptr_g_tree_node_first = try_find_sym(glib2, "g_tree_node_first");
    stub_funcs.ptr_g_tree_node_last = try_find_sym(glib2, "g_tree_node_last");
    stub_funcs.ptr_g_tree_node_previous = try_find_sym(glib2, "g_tree_node_previous");
    stub_funcs.ptr_g_tree_node_next = try_find_sym(glib2, "g_tree_node_next");
    stub_funcs.ptr_g_tree_ref = try_find_sym(glib2, "g_tree_ref");
    stub_funcs.ptr_g_tree_unref = try_find_sym(glib2, "g_tree_unref");
    stub_funcs.ptr_g_tree_destroy = try_find_sym(glib2, "g_tree_destroy");
    stub_funcs.ptr_g_tree_insert_node = try_find_sym(glib2, "g_tree_insert_node");
    stub_funcs.ptr_g_tree_insert = try_find_sym(glib2, "g_tree_insert");
    stub_funcs.ptr_g_tree_replace_node = try_find_sym(glib2, "g_tree_replace_node");
    stub_funcs.ptr_g_tree_replace = try_find_sym(glib2, "g_tree_replace");
    stub_funcs.ptr_g_tree_remove = try_find_sym(glib2, "g_tree_remove");
    stub_funcs.ptr_g_tree_remove_all = try_find_sym(glib2, "g_tree_remove_all");
    stub_funcs.ptr_g_tree_steal = try_find_sym(glib2, "g_tree_steal");
    stub_funcs.ptr_g_tree_node_key = try_find_sym(glib2, "g_tree_node_key");
    stub_funcs.ptr_g_tree_node_value = try_find_sym(glib2, "g_tree_node_value");
    stub_funcs.ptr_g_tree_lookup_node = try_find_sym(glib2, "g_tree_lookup_node");
    stub_funcs.ptr_g_tree_lookup = try_find_sym(glib2, "g_tree_lookup");
    stub_funcs.ptr_g_tree_lookup_extended = try_find_sym(glib2, "g_tree_lookup_extended");
    stub_funcs.ptr_g_tree_foreach = try_find_sym(glib2, "g_tree_foreach");
    stub_funcs.ptr_g_tree_foreach_node = try_find_sym(glib2, "g_tree_foreach_node");
    stub_funcs.ptr_g_tree_traverse = try_find_sym(glib2, "g_tree_traverse");
    stub_funcs.ptr_g_tree_search_node = try_find_sym(glib2, "g_tree_search_node");
    stub_funcs.ptr_g_tree_search = try_find_sym(glib2, "g_tree_search");
    stub_funcs.ptr_g_tree_lower_bound = try_find_sym(glib2, "g_tree_lower_bound");
    stub_funcs.ptr_g_tree_upper_bound = try_find_sym(glib2, "g_tree_upper_bound");
    stub_funcs.ptr_g_tree_height = try_find_sym(glib2, "g_tree_height");
    stub_funcs.ptr_g_tree_nnodes = try_find_sym(glib2, "g_tree_nnodes");
    stub_funcs.ptr_g_uri_ref = try_find_sym(glib2, "g_uri_ref");
    stub_funcs.ptr_g_uri_unref = try_find_sym(glib2, "g_uri_unref");
    stub_funcs.ptr_g_uri_split = try_find_sym(glib2, "g_uri_split");
    stub_funcs.ptr_g_uri_split_with_user = try_find_sym(glib2, "g_uri_split_with_user");
    stub_funcs.ptr_g_uri_split_network = try_find_sym(glib2, "g_uri_split_network");
    stub_funcs.ptr_g_uri_is_valid = try_find_sym(glib2, "g_uri_is_valid");
    stub_funcs.ptr_g_uri_join = try_find_sym(glib2, "g_uri_join");
    stub_funcs.ptr_g_uri_join_with_user = try_find_sym(glib2, "g_uri_join_with_user");
    stub_funcs.ptr_g_uri_parse = try_find_sym(glib2, "g_uri_parse");
    stub_funcs.ptr_g_uri_parse_relative = try_find_sym(glib2, "g_uri_parse_relative");
    stub_funcs.ptr_g_uri_resolve_relative = try_find_sym(glib2, "g_uri_resolve_relative");
    stub_funcs.ptr_g_uri_build = try_find_sym(glib2, "g_uri_build");
    stub_funcs.ptr_g_uri_build_with_user = try_find_sym(glib2, "g_uri_build_with_user");
    stub_funcs.ptr_g_uri_to_string = try_find_sym(glib2, "g_uri_to_string");
    stub_funcs.ptr_g_uri_to_string_partial = try_find_sym(glib2, "g_uri_to_string_partial");
    stub_funcs.ptr_g_uri_get_scheme = try_find_sym(glib2, "g_uri_get_scheme");
    stub_funcs.ptr_g_uri_get_userinfo = try_find_sym(glib2, "g_uri_get_userinfo");
    stub_funcs.ptr_g_uri_get_user = try_find_sym(glib2, "g_uri_get_user");
    stub_funcs.ptr_g_uri_get_password = try_find_sym(glib2, "g_uri_get_password");
    stub_funcs.ptr_g_uri_get_auth_params = try_find_sym(glib2, "g_uri_get_auth_params");
    stub_funcs.ptr_g_uri_get_host = try_find_sym(glib2, "g_uri_get_host");
    stub_funcs.ptr_g_uri_get_port = try_find_sym(glib2, "g_uri_get_port");
    stub_funcs.ptr_g_uri_get_path = try_find_sym(glib2, "g_uri_get_path");
    stub_funcs.ptr_g_uri_get_query = try_find_sym(glib2, "g_uri_get_query");
    stub_funcs.ptr_g_uri_get_fragment = try_find_sym(glib2, "g_uri_get_fragment");
    stub_funcs.ptr_g_uri_get_flags = try_find_sym(glib2, "g_uri_get_flags");
    stub_funcs.ptr_g_uri_parse_params = try_find_sym(glib2, "g_uri_parse_params");
    stub_funcs.ptr_g_uri_params_iter_init = try_find_sym(glib2, "g_uri_params_iter_init");
    stub_funcs.ptr_g_uri_params_iter_next = try_find_sym(glib2, "g_uri_params_iter_next");
    stub_funcs.ptr_g_uri_error_quark = try_find_sym(glib2, "g_uri_error_quark");
    stub_funcs.ptr_g_uri_unescape_string = try_find_sym(glib2, "g_uri_unescape_string");
    stub_funcs.ptr_g_uri_unescape_segment = try_find_sym(glib2, "g_uri_unescape_segment");
    stub_funcs.ptr_g_uri_parse_scheme = try_find_sym(glib2, "g_uri_parse_scheme");
    stub_funcs.ptr_g_uri_peek_scheme = try_find_sym(glib2, "g_uri_peek_scheme");
    stub_funcs.ptr_g_uri_escape_string = try_find_sym(glib2, "g_uri_escape_string");
    stub_funcs.ptr_g_uri_unescape_bytes = try_find_sym(glib2, "g_uri_unescape_bytes");
    stub_funcs.ptr_g_uri_escape_bytes = try_find_sym(glib2, "g_uri_escape_bytes");
    stub_funcs.ptr_g_uuid_string_is_valid = try_find_sym(glib2, "g_uuid_string_is_valid");
    stub_funcs.ptr_g_uuid_string_random = try_find_sym(glib2, "g_uuid_string_random");
    stub_funcs.ptr_glib_check_version = try_find_sym(glib2, "glib_check_version");
    stub_funcs.ptr_g_mem_chunk_new = try_find_sym(glib2, "g_mem_chunk_new");
    stub_funcs.ptr_g_mem_chunk_destroy = try_find_sym(glib2, "g_mem_chunk_destroy");
    stub_funcs.ptr_g_mem_chunk_alloc = try_find_sym(glib2, "g_mem_chunk_alloc");
    stub_funcs.ptr_g_mem_chunk_alloc0 = try_find_sym(glib2, "g_mem_chunk_alloc0");
    stub_funcs.ptr_g_mem_chunk_free = try_find_sym(glib2, "g_mem_chunk_free");
    stub_funcs.ptr_g_mem_chunk_clean = try_find_sym(glib2, "g_mem_chunk_clean");
    stub_funcs.ptr_g_mem_chunk_reset = try_find_sym(glib2, "g_mem_chunk_reset");
    stub_funcs.ptr_g_mem_chunk_print = try_find_sym(glib2, "g_mem_chunk_print");
    stub_funcs.ptr_g_mem_chunk_info = try_find_sym(glib2, "g_mem_chunk_info");
    stub_funcs.ptr_g_blow_chunks = try_find_sym(glib2, "g_blow_chunks");
    stub_funcs.ptr_g_allocator_new = try_find_sym(glib2, "g_allocator_new");
    stub_funcs.ptr_g_allocator_free = try_find_sym(glib2, "g_allocator_free");
    stub_funcs.ptr_g_list_push_allocator = try_find_sym(glib2, "g_list_push_allocator");
    stub_funcs.ptr_g_list_pop_allocator = try_find_sym(glib2, "g_list_pop_allocator");
    stub_funcs.ptr_g_slist_push_allocator = try_find_sym(glib2, "g_slist_push_allocator");
    stub_funcs.ptr_g_slist_pop_allocator = try_find_sym(glib2, "g_slist_pop_allocator");
    stub_funcs.ptr_g_node_push_allocator = try_find_sym(glib2, "g_node_push_allocator");
    stub_funcs.ptr_g_node_pop_allocator = try_find_sym(glib2, "g_node_pop_allocator");
    stub_funcs.ptr_g_cache_new = try_find_sym(glib2, "g_cache_new");
    stub_funcs.ptr_g_cache_destroy = try_find_sym(glib2, "g_cache_destroy");
    stub_funcs.ptr_g_cache_insert = try_find_sym(glib2, "g_cache_insert");
    stub_funcs.ptr_g_cache_remove = try_find_sym(glib2, "g_cache_remove");
    stub_funcs.ptr_g_cache_key_foreach = try_find_sym(glib2, "g_cache_key_foreach");
    stub_funcs.ptr_g_cache_value_foreach = try_find_sym(glib2, "g_cache_value_foreach");
    stub_funcs.ptr_g_completion_new = try_find_sym(glib2, "g_completion_new");
    stub_funcs.ptr_g_completion_add_items = try_find_sym(glib2, "g_completion_add_items");
    stub_funcs.ptr_g_completion_remove_items = try_find_sym(glib2, "g_completion_remove_items");
    stub_funcs.ptr_g_completion_clear_items = try_find_sym(glib2, "g_completion_clear_items");
    stub_funcs.ptr_g_completion_complete = try_find_sym(glib2, "g_completion_complete");
    stub_funcs.ptr_g_completion_complete_utf8 = try_find_sym(glib2, "g_completion_complete_utf8");
    stub_funcs.ptr_g_completion_set_compare = try_find_sym(glib2, "g_completion_set_compare");
    stub_funcs.ptr_g_completion_free = try_find_sym(glib2, "g_completion_free");
    stub_funcs.ptr_g_relation_new = try_find_sym(glib2, "g_relation_new");
    stub_funcs.ptr_g_relation_destroy = try_find_sym(glib2, "g_relation_destroy");
    stub_funcs.ptr_g_relation_index = try_find_sym(glib2, "g_relation_index");
    stub_funcs.ptr_g_relation_delete = try_find_sym(glib2, "g_relation_delete");
    stub_funcs.ptr_g_relation_select = try_find_sym(glib2, "g_relation_select");
    stub_funcs.ptr_g_relation_count = try_find_sym(glib2, "g_relation_count");
    stub_funcs.ptr_g_relation_print = try_find_sym(glib2, "g_relation_print");
    stub_funcs.ptr_g_tuples_destroy = try_find_sym(glib2, "g_tuples_destroy");
    stub_funcs.ptr_g_tuples_index = try_find_sym(glib2, "g_tuples_index");
    stub_funcs.ptr_g_thread_create = try_find_sym(glib2, "g_thread_create");
    stub_funcs.ptr_g_thread_create_full = try_find_sym(glib2, "g_thread_create_full");
    stub_funcs.ptr_g_thread_set_priority = try_find_sym(glib2, "g_thread_set_priority");
    stub_funcs.ptr_g_thread_foreach = try_find_sym(glib2, "g_thread_foreach");
    stub_funcs.ptr_g_static_mutex_init = try_find_sym(glib2, "g_static_mutex_init");
    stub_funcs.ptr_g_static_mutex_free = try_find_sym(glib2, "g_static_mutex_free");
    stub_funcs.ptr_g_static_mutex_get_mutex_impl = try_find_sym(glib2, "g_static_mutex_get_mutex_impl");
    stub_funcs.ptr_g_static_rec_mutex_init = try_find_sym(glib2, "g_static_rec_mutex_init");
    stub_funcs.ptr_g_static_rec_mutex_lock = try_find_sym(glib2, "g_static_rec_mutex_lock");
    stub_funcs.ptr_g_static_rec_mutex_trylock = try_find_sym(glib2, "g_static_rec_mutex_trylock");
    stub_funcs.ptr_g_static_rec_mutex_unlock = try_find_sym(glib2, "g_static_rec_mutex_unlock");
    stub_funcs.ptr_g_static_rec_mutex_lock_full = try_find_sym(glib2, "g_static_rec_mutex_lock_full");
    stub_funcs.ptr_g_static_rec_mutex_unlock_full = try_find_sym(glib2, "g_static_rec_mutex_unlock_full");
    stub_funcs.ptr_g_static_rec_mutex_free = try_find_sym(glib2, "g_static_rec_mutex_free");
    stub_funcs.ptr_g_static_rw_lock_init = try_find_sym(glib2, "g_static_rw_lock_init");
    stub_funcs.ptr_g_static_rw_lock_reader_lock = try_find_sym(glib2, "g_static_rw_lock_reader_lock");
    stub_funcs.ptr_g_static_rw_lock_reader_trylock = try_find_sym(glib2, "g_static_rw_lock_reader_trylock");
    stub_funcs.ptr_g_static_rw_lock_reader_unlock = try_find_sym(glib2, "g_static_rw_lock_reader_unlock");
    stub_funcs.ptr_g_static_rw_lock_writer_lock = try_find_sym(glib2, "g_static_rw_lock_writer_lock");
    stub_funcs.ptr_g_static_rw_lock_writer_trylock = try_find_sym(glib2, "g_static_rw_lock_writer_trylock");
    stub_funcs.ptr_g_static_rw_lock_writer_unlock = try_find_sym(glib2, "g_static_rw_lock_writer_unlock");
    stub_funcs.ptr_g_static_rw_lock_free = try_find_sym(glib2, "g_static_rw_lock_free");
    stub_funcs.ptr_g_private_new = try_find_sym(glib2, "g_private_new");
    stub_funcs.ptr_g_static_private_init = try_find_sym(glib2, "g_static_private_init");
    stub_funcs.ptr_g_static_private_get = try_find_sym(glib2, "g_static_private_get");
    stub_funcs.ptr_g_static_private_set = try_find_sym(glib2, "g_static_private_set");
    stub_funcs.ptr_g_static_private_free = try_find_sym(glib2, "g_static_private_free");
    stub_funcs.ptr_g_once_init_enter_impl = try_find_sym(glib2, "g_once_init_enter_impl");
    stub_funcs.ptr_g_thread_init = try_find_sym(glib2, "g_thread_init");
    stub_funcs.ptr_g_thread_init_with_errorcheck_mutexes = try_find_sym(glib2, "g_thread_init_with_errorcheck_mutexes");
    stub_funcs.ptr_g_thread_get_initialized = try_find_sym(glib2, "g_thread_get_initialized");
    stub_funcs.ptr_g_mutex_new = try_find_sym(glib2, "g_mutex_new");
    stub_funcs.ptr_g_mutex_free = try_find_sym(glib2, "g_mutex_free");
    stub_funcs.ptr_g_cond_new = try_find_sym(glib2, "g_cond_new");
    stub_funcs.ptr_g_cond_free = try_find_sym(glib2, "g_cond_free");
    stub_funcs.ptr_g_cond_timed_wait = try_find_sym(glib2, "g_cond_timed_wait");
    stub_funcs.ptr_g_printf = try_find_sym(glib2, "g_printf");
    stub_funcs.ptr_g_fprintf = try_find_sym(glib2, "g_fprintf");
    stub_funcs.ptr_g_sprintf = try_find_sym(glib2, "g_sprintf");
    stub_funcs.ptr_g_vprintf = try_find_sym(glib2, "g_vprintf");
    stub_funcs.ptr_g_vfprintf = try_find_sym(glib2, "g_vfprintf");
    stub_funcs.ptr_g_vsprintf = try_find_sym(glib2, "g_vsprintf");
    stub_funcs.ptr_g_vasprintf = try_find_sym(glib2, "g_vasprintf");
    stub_funcs.ptr_g_access = try_find_sym(glib2, "g_access");
    stub_funcs.ptr_g_chdir = try_find_sym(glib2, "g_chdir");
    stub_funcs.ptr_g_unlink = try_find_sym(glib2, "g_unlink");
    stub_funcs.ptr_g_rmdir = try_find_sym(glib2, "g_rmdir");
    stub_funcs.ptr_g_close = try_find_sym(glib2, "g_close");
    stub_funcs.ptr_g_unix_error_quark = try_find_sym(glib2, "g_unix_error_quark");
    stub_funcs.ptr_g_unix_open_pipe = try_find_sym(glib2, "g_unix_open_pipe");
    stub_funcs.ptr_g_unix_set_fd_nonblocking = try_find_sym(glib2, "g_unix_set_fd_nonblocking");
    stub_funcs.ptr_g_unix_signal_source_new = try_find_sym(glib2, "g_unix_signal_source_new");
    stub_funcs.ptr_g_unix_signal_add_full = try_find_sym(glib2, "g_unix_signal_add_full");
    stub_funcs.ptr_g_unix_signal_add = try_find_sym(glib2, "g_unix_signal_add");
    stub_funcs.ptr_g_unix_fd_source_new = try_find_sym(glib2, "g_unix_fd_source_new");
    stub_funcs.ptr_g_unix_fd_add_full = try_find_sym(glib2, "g_unix_fd_add_full");
    stub_funcs.ptr_g_unix_fd_add = try_find_sym(glib2, "g_unix_fd_add");
    stub_funcs.ptr_g_unix_get_passwd_entry = try_find_sym(glib2, "g_unix_get_passwd_entry");
    stub_funcs.ptr_g_closefrom = try_find_sym(glib2, "g_closefrom");
    stub_funcs.ptr_g_fdwalk_set_cloexec = try_find_sym(glib2, "g_fdwalk_set_cloexec");
}

GArray * (g_array_new)(gboolean zero_terminated, gboolean clear_, guint element_size) { return stub_funcs.ptr_g_array_new(zero_terminated, clear_, element_size); }
GArray * (g_array_new_take)(gpointer data, gsize len, gboolean clear, gsize element_size) { return stub_funcs.ptr_g_array_new_take(data, len, clear, element_size); }
GArray * (g_array_new_take_zero_terminated)(gpointer data, gboolean clear, gsize element_size) { return stub_funcs.ptr_g_array_new_take_zero_terminated(data, clear, element_size); }
gpointer (g_array_steal)(GArray * array, gsize * len) { return stub_funcs.ptr_g_array_steal(array, len); }
GArray * (g_array_sized_new)(gboolean zero_terminated, gboolean clear_, guint element_size, guint reserved_size) { return stub_funcs.ptr_g_array_sized_new(zero_terminated, clear_, element_size, reserved_size); }
GArray * (g_array_copy)(GArray * array) { return stub_funcs.ptr_g_array_copy(array); }
gchar * (g_array_free)(GArray * array, gboolean free_segment) { return stub_funcs.ptr_g_array_free(array, free_segment); }
GArray * (g_array_ref)(GArray * array) { return stub_funcs.ptr_g_array_ref(array); }
void (g_array_unref)(GArray * array) { stub_funcs.ptr_g_array_unref(array); }
guint (g_array_get_element_size)(GArray * array) { return stub_funcs.ptr_g_array_get_element_size(array); }
GArray * (g_array_append_vals)(GArray * array, gconstpointer data, guint len) { return stub_funcs.ptr_g_array_append_vals(array, data, len); }
GArray * (g_array_prepend_vals)(GArray * array, gconstpointer data, guint len) { return stub_funcs.ptr_g_array_prepend_vals(array, data, len); }
GArray * (g_array_insert_vals)(GArray * array, guint index_, gconstpointer data, guint len) { return stub_funcs.ptr_g_array_insert_vals(array, index_, data, len); }
GArray * (g_array_set_size)(GArray * array, guint length) { return stub_funcs.ptr_g_array_set_size(array, length); }
GArray * (g_array_remove_index)(GArray * array, guint index_) { return stub_funcs.ptr_g_array_remove_index(array, index_); }
GArray * (g_array_remove_index_fast)(GArray * array, guint index_) { return stub_funcs.ptr_g_array_remove_index_fast(array, index_); }
GArray * (g_array_remove_range)(GArray * array, guint index_, guint length) { return stub_funcs.ptr_g_array_remove_range(array, index_, length); }
void (g_array_sort)(GArray * array, GCompareFunc compare_func) { stub_funcs.ptr_g_array_sort(array, compare_func); }
void (g_array_sort_with_data)(GArray * array, GCompareDataFunc compare_func, gpointer user_data) { stub_funcs.ptr_g_array_sort_with_data(array, compare_func, user_data); }
gboolean (g_array_binary_search)(GArray * array, gconstpointer target, GCompareFunc compare_func, guint * out_match_index) { return stub_funcs.ptr_g_array_binary_search(array, target, compare_func, out_match_index); }
void (g_array_set_clear_func)(GArray * array, GDestroyNotify clear_func) { stub_funcs.ptr_g_array_set_clear_func(array, clear_func); }
GPtrArray * (g_ptr_array_new)(void) { return stub_funcs.ptr_g_ptr_array_new(); }
GPtrArray * (g_ptr_array_new_with_free_func)(GDestroyNotify element_free_func) { return stub_funcs.ptr_g_ptr_array_new_with_free_func(element_free_func); }
GPtrArray * (g_ptr_array_new_take)(gpointer * data, gsize len, GDestroyNotify element_free_func) { return stub_funcs.ptr_g_ptr_array_new_take(data, len, element_free_func); }
GPtrArray * (g_ptr_array_new_from_array)(gpointer * data, gsize len, GCopyFunc copy_func, gpointer copy_func_user_data, GDestroyNotify element_free_func) { return stub_funcs.ptr_g_ptr_array_new_from_array(data, len, copy_func, copy_func_user_data, element_free_func); }
gpointer * (g_ptr_array_steal)(GPtrArray * array, gsize * len) { return stub_funcs.ptr_g_ptr_array_steal(array, len); }
GPtrArray * (g_ptr_array_copy)(GPtrArray * array, GCopyFunc func, gpointer user_data) { return stub_funcs.ptr_g_ptr_array_copy(array, func, user_data); }
GPtrArray * (g_ptr_array_sized_new)(guint reserved_size) { return stub_funcs.ptr_g_ptr_array_sized_new(reserved_size); }
GPtrArray * (g_ptr_array_new_full)(guint reserved_size, GDestroyNotify element_free_func) { return stub_funcs.ptr_g_ptr_array_new_full(reserved_size, element_free_func); }
GPtrArray * (g_ptr_array_new_null_terminated)(guint reserved_size, GDestroyNotify element_free_func, gboolean null_terminated) { return stub_funcs.ptr_g_ptr_array_new_null_terminated(reserved_size, element_free_func, null_terminated); }
GPtrArray * (g_ptr_array_new_take_null_terminated)(gpointer * data, GDestroyNotify element_free_func) { return stub_funcs.ptr_g_ptr_array_new_take_null_terminated(data, element_free_func); }
GPtrArray * (g_ptr_array_new_from_null_terminated_array)(gpointer * data, GCopyFunc copy_func, gpointer copy_func_user_data, GDestroyNotify element_free_func) { return stub_funcs.ptr_g_ptr_array_new_from_null_terminated_array(data, copy_func, copy_func_user_data, element_free_func); }
gpointer * (g_ptr_array_free)(GPtrArray * array, gboolean free_seg) { return stub_funcs.ptr_g_ptr_array_free(array, free_seg); }
GPtrArray * (g_ptr_array_ref)(GPtrArray * array) { return stub_funcs.ptr_g_ptr_array_ref(array); }
void (g_ptr_array_unref)(GPtrArray * array) { stub_funcs.ptr_g_ptr_array_unref(array); }
void (g_ptr_array_set_free_func)(GPtrArray * array, GDestroyNotify element_free_func) { stub_funcs.ptr_g_ptr_array_set_free_func(array, element_free_func); }
void (g_ptr_array_set_size)(GPtrArray * array, gint length) { stub_funcs.ptr_g_ptr_array_set_size(array, length); }
gpointer (g_ptr_array_remove_index)(GPtrArray * array, guint index_) { return stub_funcs.ptr_g_ptr_array_remove_index(array, index_); }
gpointer (g_ptr_array_remove_index_fast)(GPtrArray * array, guint index_) { return stub_funcs.ptr_g_ptr_array_remove_index_fast(array, index_); }
gpointer (g_ptr_array_steal_index)(GPtrArray * array, guint index_) { return stub_funcs.ptr_g_ptr_array_steal_index(array, index_); }
gpointer (g_ptr_array_steal_index_fast)(GPtrArray * array, guint index_) { return stub_funcs.ptr_g_ptr_array_steal_index_fast(array, index_); }
gboolean (g_ptr_array_remove)(GPtrArray * array, gpointer data) { return stub_funcs.ptr_g_ptr_array_remove(array, data); }
gboolean (g_ptr_array_remove_fast)(GPtrArray * array, gpointer data) { return stub_funcs.ptr_g_ptr_array_remove_fast(array, data); }
GPtrArray * (g_ptr_array_remove_range)(GPtrArray * array, guint index_, guint length) { return stub_funcs.ptr_g_ptr_array_remove_range(array, index_, length); }
void (g_ptr_array_add)(GPtrArray * array, gpointer data) { stub_funcs.ptr_g_ptr_array_add(array, data); }
void (g_ptr_array_extend)(GPtrArray * array_to_extend, GPtrArray * array, GCopyFunc func, gpointer user_data) { stub_funcs.ptr_g_ptr_array_extend(array_to_extend, array, func, user_data); }
void (g_ptr_array_extend_and_steal)(GPtrArray * array_to_extend, GPtrArray * array) { stub_funcs.ptr_g_ptr_array_extend_and_steal(array_to_extend, array); }
void (g_ptr_array_insert)(GPtrArray * array, gint index_, gpointer data) { stub_funcs.ptr_g_ptr_array_insert(array, index_, data); }
void (g_ptr_array_sort)(GPtrArray * array, GCompareFunc compare_func) { stub_funcs.ptr_g_ptr_array_sort(array, compare_func); }
void (g_ptr_array_sort_with_data)(GPtrArray * array, GCompareDataFunc compare_func, gpointer user_data) { stub_funcs.ptr_g_ptr_array_sort_with_data(array, compare_func, user_data); }
void (g_ptr_array_sort_values)(GPtrArray * array, GCompareFunc compare_func) { stub_funcs.ptr_g_ptr_array_sort_values(array, compare_func); }
void (g_ptr_array_sort_values_with_data)(GPtrArray * array, GCompareDataFunc compare_func, gpointer user_data) { stub_funcs.ptr_g_ptr_array_sort_values_with_data(array, compare_func, user_data); }
void (g_ptr_array_foreach)(GPtrArray * array, GFunc func, gpointer user_data) { stub_funcs.ptr_g_ptr_array_foreach(array, func, user_data); }
gboolean (g_ptr_array_find)(GPtrArray * haystack, gconstpointer needle, guint * index_) { return stub_funcs.ptr_g_ptr_array_find(haystack, needle, index_); }
gboolean (g_ptr_array_find_with_equal_func)(GPtrArray * haystack, gconstpointer needle, GEqualFunc equal_func, guint * index_) { return stub_funcs.ptr_g_ptr_array_find_with_equal_func(haystack, needle, equal_func, index_); }
gboolean (g_ptr_array_is_null_terminated)(GPtrArray * array) { return stub_funcs.ptr_g_ptr_array_is_null_terminated(array); }
GByteArray * (g_byte_array_new)(void) { return stub_funcs.ptr_g_byte_array_new(); }
GByteArray * (g_byte_array_new_take)(guint8 * data, gsize len) { return stub_funcs.ptr_g_byte_array_new_take(data, len); }
guint8 * (g_byte_array_steal)(GByteArray * array, gsize * len) { return stub_funcs.ptr_g_byte_array_steal(array, len); }
GByteArray * (g_byte_array_sized_new)(guint reserved_size) { return stub_funcs.ptr_g_byte_array_sized_new(reserved_size); }
guint8 * (g_byte_array_free)(GByteArray * array, gboolean free_segment) { return stub_funcs.ptr_g_byte_array_free(array, free_segment); }
GBytes * (g_byte_array_free_to_bytes)(GByteArray * array) { return stub_funcs.ptr_g_byte_array_free_to_bytes(array); }
GByteArray * (g_byte_array_ref)(GByteArray * array) { return stub_funcs.ptr_g_byte_array_ref(array); }
void (g_byte_array_unref)(GByteArray * array) { stub_funcs.ptr_g_byte_array_unref(array); }
GByteArray * (g_byte_array_append)(GByteArray * array, const guint8 * data, guint len) { return stub_funcs.ptr_g_byte_array_append(array, data, len); }
GByteArray * (g_byte_array_prepend)(GByteArray * array, const guint8 * data, guint len) { return stub_funcs.ptr_g_byte_array_prepend(array, data, len); }
GByteArray * (g_byte_array_set_size)(GByteArray * array, guint length) { return stub_funcs.ptr_g_byte_array_set_size(array, length); }
GByteArray * (g_byte_array_remove_index)(GByteArray * array, guint index_) { return stub_funcs.ptr_g_byte_array_remove_index(array, index_); }
GByteArray * (g_byte_array_remove_index_fast)(GByteArray * array, guint index_) { return stub_funcs.ptr_g_byte_array_remove_index_fast(array, index_); }
GByteArray * (g_byte_array_remove_range)(GByteArray * array, guint index_, guint length) { return stub_funcs.ptr_g_byte_array_remove_range(array, index_, length); }
void (g_byte_array_sort)(GByteArray * array, GCompareFunc compare_func) { stub_funcs.ptr_g_byte_array_sort(array, compare_func); }
void (g_byte_array_sort_with_data)(GByteArray * array, GCompareDataFunc compare_func, gpointer user_data) { stub_funcs.ptr_g_byte_array_sort_with_data(array, compare_func, user_data); }
gint (g_atomic_int_get)(const volatile gint * atomic) { return stub_funcs.ptr_g_atomic_int_get(atomic); }
void (g_atomic_int_set)(volatile gint * atomic, gint newval) { stub_funcs.ptr_g_atomic_int_set(atomic, newval); }
void (g_atomic_int_inc)(volatile gint * atomic) { stub_funcs.ptr_g_atomic_int_inc(atomic); }
gboolean (g_atomic_int_dec_and_test)(volatile gint * atomic) { return stub_funcs.ptr_g_atomic_int_dec_and_test(atomic); }
gboolean (g_atomic_int_compare_and_exchange)(volatile gint * atomic, gint oldval, gint newval) { return stub_funcs.ptr_g_atomic_int_compare_and_exchange(atomic, oldval, newval); }
gboolean (g_atomic_int_compare_and_exchange_full)(gint * atomic, gint oldval, gint newval, gint * preval) { return stub_funcs.ptr_g_atomic_int_compare_and_exchange_full(atomic, oldval, newval, preval); }
gint (g_atomic_int_exchange)(gint * atomic, gint newval) { return stub_funcs.ptr_g_atomic_int_exchange(atomic, newval); }
gint (g_atomic_int_add)(volatile gint * atomic, gint val) { return stub_funcs.ptr_g_atomic_int_add(atomic, val); }
guint (g_atomic_int_and)(volatile guint * atomic, guint val) { return stub_funcs.ptr_g_atomic_int_and(atomic, val); }
guint (g_atomic_int_or)(volatile guint * atomic, guint val) { return stub_funcs.ptr_g_atomic_int_or(atomic, val); }
guint (g_atomic_int_xor)(volatile guint * atomic, guint val) { return stub_funcs.ptr_g_atomic_int_xor(atomic, val); }
gpointer (g_atomic_pointer_get)(const volatile void * atomic) { return stub_funcs.ptr_g_atomic_pointer_get(atomic); }
void (g_atomic_pointer_set)(volatile void * atomic, gpointer newval) { stub_funcs.ptr_g_atomic_pointer_set(atomic, newval); }
gboolean (g_atomic_pointer_compare_and_exchange)(volatile void * atomic, gpointer oldval, gpointer newval) { return stub_funcs.ptr_g_atomic_pointer_compare_and_exchange(atomic, oldval, newval); }
gboolean (g_atomic_pointer_compare_and_exchange_full)(void * atomic, gpointer oldval, gpointer newval, void * preval) { return stub_funcs.ptr_g_atomic_pointer_compare_and_exchange_full(atomic, oldval, newval, preval); }
gpointer (g_atomic_pointer_exchange)(void * atomic, gpointer newval) { return stub_funcs.ptr_g_atomic_pointer_exchange(atomic, newval); }
gintptr (g_atomic_pointer_add)(volatile void * atomic, gssize val) { return stub_funcs.ptr_g_atomic_pointer_add(atomic, val); }
guintptr (g_atomic_pointer_and)(volatile void * atomic, gsize val) { return stub_funcs.ptr_g_atomic_pointer_and(atomic, val); }
guintptr (g_atomic_pointer_or)(volatile void * atomic, gsize val) { return stub_funcs.ptr_g_atomic_pointer_or(atomic, val); }
guintptr (g_atomic_pointer_xor)(volatile void * atomic, gsize val) { return stub_funcs.ptr_g_atomic_pointer_xor(atomic, val); }
gint (g_atomic_int_exchange_and_add)(volatile gint * atomic, gint val) { return stub_funcs.ptr_g_atomic_int_exchange_and_add(atomic, val); }
GQuark (g_quark_try_string)(const gchar * string) { return stub_funcs.ptr_g_quark_try_string(string); }
GQuark (g_quark_from_static_string)(const gchar * string) { return stub_funcs.ptr_g_quark_from_static_string(string); }
GQuark (g_quark_from_string)(const gchar * string) { return stub_funcs.ptr_g_quark_from_string(string); }
const gchar * (g_quark_to_string)(GQuark quark) { return stub_funcs.ptr_g_quark_to_string(quark); }
const gchar * (g_intern_string)(const gchar * string) { return stub_funcs.ptr_g_intern_string(string); }
const gchar * (g_intern_static_string)(const gchar * string) { return stub_funcs.ptr_g_intern_static_string(string); }
GQuark (g_error_domain_register_static)(const char * error_type_name, gsize error_type_private_size, GErrorInitFunc error_type_init, GErrorCopyFunc error_type_copy, GErrorClearFunc error_type_clear) { return stub_funcs.ptr_g_error_domain_register_static(error_type_name, error_type_private_size, error_type_init, error_type_copy, error_type_clear); }
GQuark (g_error_domain_register)(const char * error_type_name, gsize error_type_private_size, GErrorInitFunc error_type_init, GErrorCopyFunc error_type_copy, GErrorClearFunc error_type_clear) { return stub_funcs.ptr_g_error_domain_register(error_type_name, error_type_private_size, error_type_init, error_type_copy, error_type_clear); }
GError * (g_error_new)(GQuark domain, gint code, const gchar * format, ...) { GError * ret; va_list vaargs; va_start(vaargs, format); ret = stub_funcs.ptr_g_error_new_valist(domain, code, format, vaargs); va_end(vaargs); return ret; }
GError * (g_error_new_literal)(GQuark domain, gint code, const gchar * message) { return stub_funcs.ptr_g_error_new_literal(domain, code, message); }
GError * (g_error_new_valist)(GQuark domain, gint code, const gchar * format, va_list args) { return stub_funcs.ptr_g_error_new_valist(domain, code, format, args); }
void (g_error_free)(GError * error) { stub_funcs.ptr_g_error_free(error); }
GError * (g_error_copy)(const GError * error) { return stub_funcs.ptr_g_error_copy(error); }
gboolean (g_error_matches)(const GError * error, GQuark domain, gint code) { return stub_funcs.ptr_g_error_matches(error, domain, code); }
void (g_set_error_literal)(GError * * err, GQuark domain, gint code, const gchar * message) { stub_funcs.ptr_g_set_error_literal(err, domain, code, message); }
void (g_propagate_error)(GError * * dest, GError * src) { stub_funcs.ptr_g_propagate_error(dest, src); }
void (g_clear_error)(GError * * err) { stub_funcs.ptr_g_clear_error(err); }
void (g_prefix_error_literal)(GError * * err, const gchar * prefix) { stub_funcs.ptr_g_prefix_error_literal(err, prefix); }
const gchar * (g_get_user_name)(void) { return stub_funcs.ptr_g_get_user_name(); }
const gchar * (g_get_real_name)(void) { return stub_funcs.ptr_g_get_real_name(); }
const gchar * (g_get_home_dir)(void) { return stub_funcs.ptr_g_get_home_dir(); }
const gchar * (g_get_tmp_dir)(void) { return stub_funcs.ptr_g_get_tmp_dir(); }
const gchar * (g_get_host_name)(void) { return stub_funcs.ptr_g_get_host_name(); }
const gchar * (g_get_prgname)(void) { return stub_funcs.ptr_g_get_prgname(); }
void (g_set_prgname)(const gchar * prgname) { stub_funcs.ptr_g_set_prgname(prgname); }
const gchar * (g_get_application_name)(void) { return stub_funcs.ptr_g_get_application_name(); }
void (g_set_application_name)(const gchar * application_name) { stub_funcs.ptr_g_set_application_name(application_name); }
gchar * (g_get_os_info)(const gchar * key_name) { return stub_funcs.ptr_g_get_os_info(key_name); }
void (g_reload_user_special_dirs_cache)(void) { stub_funcs.ptr_g_reload_user_special_dirs_cache(); }
const gchar * (g_get_user_data_dir)(void) { return stub_funcs.ptr_g_get_user_data_dir(); }
const gchar * (g_get_user_config_dir)(void) { return stub_funcs.ptr_g_get_user_config_dir(); }
const gchar * (g_get_user_cache_dir)(void) { return stub_funcs.ptr_g_get_user_cache_dir(); }
const gchar * (g_get_user_state_dir)(void) { return stub_funcs.ptr_g_get_user_state_dir(); }
const gchar * const * (g_get_system_data_dirs)(void) { return stub_funcs.ptr_g_get_system_data_dirs(); }
const gchar * const * (g_get_system_config_dirs)(void) { return stub_funcs.ptr_g_get_system_config_dirs(); }
const gchar * (g_get_user_runtime_dir)(void) { return stub_funcs.ptr_g_get_user_runtime_dir(); }
const gchar * (g_get_user_special_dir)(GUserDirectory directory) { return stub_funcs.ptr_g_get_user_special_dir(directory); }
guint (g_parse_debug_string)(const gchar * string, const GDebugKey * keys, guint nkeys) { return stub_funcs.ptr_g_parse_debug_string(string, keys, nkeys); }
gint (g_snprintf)(gchar * string, gulong n, const gchar * format, ...) { gint ret; va_list vaargs; va_start(vaargs, format); ret = stub_funcs.ptr_g_vsnprintf(string, n, format, vaargs); va_end(vaargs); return ret; }
gint (g_vsnprintf)(gchar * string, gulong n, const gchar * format, va_list args) { return stub_funcs.ptr_g_vsnprintf(string, n, format, args); }
void (g_nullify_pointer)(gpointer * nullify_location) { stub_funcs.ptr_g_nullify_pointer(nullify_location); }
gchar * (g_format_size_full)(guint64 size, GFormatSizeFlags flags) { return stub_funcs.ptr_g_format_size_full(size, flags); }
gchar * (g_format_size)(guint64 size) { return stub_funcs.ptr_g_format_size(size); }
gchar * (g_format_size_for_display)(goffset size) { return stub_funcs.ptr_g_format_size_for_display(size); }
void (g_atexit)(GVoidFunc func) { stub_funcs.ptr_g_atexit(func); }
gchar * (g_find_program_in_path)(const gchar * program) { return stub_funcs.ptr_g_find_program_in_path(program); }
gint (g_bit_nth_lsf)(gulong mask, gint nth_bit) { return stub_funcs.ptr_g_bit_nth_lsf(mask, nth_bit); }
gint (g_bit_nth_msf)(gulong mask, gint nth_bit) { return stub_funcs.ptr_g_bit_nth_msf(mask, nth_bit); }
guint (g_bit_storage)(gulong number) { return stub_funcs.ptr_g_bit_storage(number); }
GQuark (g_thread_error_quark)(void) { return stub_funcs.ptr_g_thread_error_quark(); }
GThread * (g_thread_ref)(GThread * thread) { return stub_funcs.ptr_g_thread_ref(thread); }
void (g_thread_unref)(GThread * thread) { stub_funcs.ptr_g_thread_unref(thread); }
GThread * (g_thread_new)(const gchar * name, GThreadFunc func, gpointer data) { return stub_funcs.ptr_g_thread_new(name, func, data); }
GThread * (g_thread_try_new)(const gchar * name, GThreadFunc func, gpointer data, GError * * error) { return stub_funcs.ptr_g_thread_try_new(name, func, data, error); }
GThread * (g_thread_self)(void) { return stub_funcs.ptr_g_thread_self(); }
void (g_thread_exit)(gpointer retval) { stub_funcs.ptr_g_thread_exit(retval); __builtin_unreachable(); }
gpointer (g_thread_join)(GThread * thread) { return stub_funcs.ptr_g_thread_join(thread); }
void (g_thread_yield)(void) { stub_funcs.ptr_g_thread_yield(); }
void (g_mutex_init)(GMutex * mutex) { stub_funcs.ptr_g_mutex_init(mutex); }
void (g_mutex_clear)(GMutex * mutex) { stub_funcs.ptr_g_mutex_clear(mutex); }
void (g_mutex_lock)(GMutex * mutex) { stub_funcs.ptr_g_mutex_lock(mutex); }
gboolean (g_mutex_trylock)(GMutex * mutex) { return stub_funcs.ptr_g_mutex_trylock(mutex); }
void (g_mutex_unlock)(GMutex * mutex) { stub_funcs.ptr_g_mutex_unlock(mutex); }
void (g_rw_lock_init)(GRWLock * rw_lock) { stub_funcs.ptr_g_rw_lock_init(rw_lock); }
void (g_rw_lock_clear)(GRWLock * rw_lock) { stub_funcs.ptr_g_rw_lock_clear(rw_lock); }
void (g_rw_lock_writer_lock)(GRWLock * rw_lock) { stub_funcs.ptr_g_rw_lock_writer_lock(rw_lock); }
gboolean (g_rw_lock_writer_trylock)(GRWLock * rw_lock) { return stub_funcs.ptr_g_rw_lock_writer_trylock(rw_lock); }
void (g_rw_lock_writer_unlock)(GRWLock * rw_lock) { stub_funcs.ptr_g_rw_lock_writer_unlock(rw_lock); }
void (g_rw_lock_reader_lock)(GRWLock * rw_lock) { stub_funcs.ptr_g_rw_lock_reader_lock(rw_lock); }
gboolean (g_rw_lock_reader_trylock)(GRWLock * rw_lock) { return stub_funcs.ptr_g_rw_lock_reader_trylock(rw_lock); }
void (g_rw_lock_reader_unlock)(GRWLock * rw_lock) { stub_funcs.ptr_g_rw_lock_reader_unlock(rw_lock); }
void (g_rec_mutex_init)(GRecMutex * rec_mutex) { stub_funcs.ptr_g_rec_mutex_init(rec_mutex); }
void (g_rec_mutex_clear)(GRecMutex * rec_mutex) { stub_funcs.ptr_g_rec_mutex_clear(rec_mutex); }
void (g_rec_mutex_lock)(GRecMutex * rec_mutex) { stub_funcs.ptr_g_rec_mutex_lock(rec_mutex); }
gboolean (g_rec_mutex_trylock)(GRecMutex * rec_mutex) { return stub_funcs.ptr_g_rec_mutex_trylock(rec_mutex); }
void (g_rec_mutex_unlock)(GRecMutex * rec_mutex) { stub_funcs.ptr_g_rec_mutex_unlock(rec_mutex); }
void (g_cond_init)(GCond * cond) { stub_funcs.ptr_g_cond_init(cond); }
void (g_cond_clear)(GCond * cond) { stub_funcs.ptr_g_cond_clear(cond); }
void (g_cond_wait)(GCond * cond, GMutex * mutex) { stub_funcs.ptr_g_cond_wait(cond, mutex); }
void (g_cond_signal)(GCond * cond) { stub_funcs.ptr_g_cond_signal(cond); }
void (g_cond_broadcast)(GCond * cond) { stub_funcs.ptr_g_cond_broadcast(cond); }
gboolean (g_cond_wait_until)(GCond * cond, GMutex * mutex, gint64 end_time) { return stub_funcs.ptr_g_cond_wait_until(cond, mutex, end_time); }
gpointer (g_private_get)(GPrivate * key) { return stub_funcs.ptr_g_private_get(key); }
void (g_private_set)(GPrivate * key, gpointer value) { stub_funcs.ptr_g_private_set(key, value); }
void (g_private_replace)(GPrivate * key, gpointer value) { stub_funcs.ptr_g_private_replace(key, value); }
gpointer (g_once_impl)(GOnce * once, GThreadFunc func, gpointer arg) { return stub_funcs.ptr_g_once_impl(once, func, arg); }
gboolean (g_once_init_enter)(volatile void * location) { return stub_funcs.ptr_g_once_init_enter(location); }
void (g_once_init_leave)(volatile void * location, gsize result) { stub_funcs.ptr_g_once_init_leave(location, result); }
gboolean (g_once_init_enter_pointer)(void * location) { return stub_funcs.ptr_g_once_init_enter_pointer(location); }
void (g_once_init_leave_pointer)(void * location, gpointer result) { stub_funcs.ptr_g_once_init_leave_pointer(location, result); }
guint (g_get_num_processors)(void) { return stub_funcs.ptr_g_get_num_processors(); }
GAsyncQueue * (g_async_queue_new)(void) { return stub_funcs.ptr_g_async_queue_new(); }
GAsyncQueue * (g_async_queue_new_full)(GDestroyNotify item_free_func) { return stub_funcs.ptr_g_async_queue_new_full(item_free_func); }
void (g_async_queue_lock)(GAsyncQueue * queue) { stub_funcs.ptr_g_async_queue_lock(queue); }
void (g_async_queue_unlock)(GAsyncQueue * queue) { stub_funcs.ptr_g_async_queue_unlock(queue); }
GAsyncQueue * (g_async_queue_ref)(GAsyncQueue * queue) { return stub_funcs.ptr_g_async_queue_ref(queue); }
void (g_async_queue_unref)(GAsyncQueue * queue) { stub_funcs.ptr_g_async_queue_unref(queue); }
void (g_async_queue_ref_unlocked)(GAsyncQueue * queue) { stub_funcs.ptr_g_async_queue_ref_unlocked(queue); }
void (g_async_queue_unref_and_unlock)(GAsyncQueue * queue) { stub_funcs.ptr_g_async_queue_unref_and_unlock(queue); }
void (g_async_queue_push)(GAsyncQueue * queue, gpointer data) { stub_funcs.ptr_g_async_queue_push(queue, data); }
void (g_async_queue_push_unlocked)(GAsyncQueue * queue, gpointer data) { stub_funcs.ptr_g_async_queue_push_unlocked(queue, data); }
void (g_async_queue_push_sorted)(GAsyncQueue * queue, gpointer data, GCompareDataFunc func, gpointer user_data) { stub_funcs.ptr_g_async_queue_push_sorted(queue, data, func, user_data); }
void (g_async_queue_push_sorted_unlocked)(GAsyncQueue * queue, gpointer data, GCompareDataFunc func, gpointer user_data) { stub_funcs.ptr_g_async_queue_push_sorted_unlocked(queue, data, func, user_data); }
gpointer (g_async_queue_pop)(GAsyncQueue * queue) { return stub_funcs.ptr_g_async_queue_pop(queue); }
gpointer (g_async_queue_pop_unlocked)(GAsyncQueue * queue) { return stub_funcs.ptr_g_async_queue_pop_unlocked(queue); }
gpointer (g_async_queue_try_pop)(GAsyncQueue * queue) { return stub_funcs.ptr_g_async_queue_try_pop(queue); }
gpointer (g_async_queue_try_pop_unlocked)(GAsyncQueue * queue) { return stub_funcs.ptr_g_async_queue_try_pop_unlocked(queue); }
gpointer (g_async_queue_timeout_pop)(GAsyncQueue * queue, guint64 timeout) { return stub_funcs.ptr_g_async_queue_timeout_pop(queue, timeout); }
gpointer (g_async_queue_timeout_pop_unlocked)(GAsyncQueue * queue, guint64 timeout) { return stub_funcs.ptr_g_async_queue_timeout_pop_unlocked(queue, timeout); }
gint (g_async_queue_length)(GAsyncQueue * queue) { return stub_funcs.ptr_g_async_queue_length(queue); }
gint (g_async_queue_length_unlocked)(GAsyncQueue * queue) { return stub_funcs.ptr_g_async_queue_length_unlocked(queue); }
void (g_async_queue_sort)(GAsyncQueue * queue, GCompareDataFunc func, gpointer user_data) { stub_funcs.ptr_g_async_queue_sort(queue, func, user_data); }
void (g_async_queue_sort_unlocked)(GAsyncQueue * queue, GCompareDataFunc func, gpointer user_data) { stub_funcs.ptr_g_async_queue_sort_unlocked(queue, func, user_data); }
gboolean (g_async_queue_remove)(GAsyncQueue * queue, gpointer item) { return stub_funcs.ptr_g_async_queue_remove(queue, item); }
gboolean (g_async_queue_remove_unlocked)(GAsyncQueue * queue, gpointer item) { return stub_funcs.ptr_g_async_queue_remove_unlocked(queue, item); }
void (g_async_queue_push_front)(GAsyncQueue * queue, gpointer item) { stub_funcs.ptr_g_async_queue_push_front(queue, item); }
void (g_async_queue_push_front_unlocked)(GAsyncQueue * queue, gpointer item) { stub_funcs.ptr_g_async_queue_push_front_unlocked(queue, item); }
gpointer (g_async_queue_timed_pop)(GAsyncQueue * queue, GTimeVal * end_time) { return stub_funcs.ptr_g_async_queue_timed_pop(queue, end_time); }
gpointer (g_async_queue_timed_pop_unlocked)(GAsyncQueue * queue, GTimeVal * end_time) { return stub_funcs.ptr_g_async_queue_timed_pop_unlocked(queue, end_time); }
void (g_on_error_query)(const gchar * prg_name) { stub_funcs.ptr_g_on_error_query(prg_name); }
void (g_on_error_stack_trace)(const gchar * prg_name) { stub_funcs.ptr_g_on_error_stack_trace(prg_name); }
gsize (g_base64_encode_step)(const guchar * in, gsize len, gboolean break_lines, gchar * out, gint * state, gint * save) { return stub_funcs.ptr_g_base64_encode_step(in, len, break_lines, out, state, save); }
gsize (g_base64_encode_close)(gboolean break_lines, gchar * out, gint * state, gint * save) { return stub_funcs.ptr_g_base64_encode_close(break_lines, out, state, save); }
gchar * (g_base64_encode)(const guchar * data, gsize len) { return stub_funcs.ptr_g_base64_encode(data, len); }
gsize (g_base64_decode_step)(const gchar * in, gsize len, guchar * out, gint * state, guint * save) { return stub_funcs.ptr_g_base64_decode_step(in, len, out, state, save); }
guchar * (g_base64_decode)(const gchar * text, gsize * out_len) { return stub_funcs.ptr_g_base64_decode(text, out_len); }
guchar * (g_base64_decode_inplace)(gchar * text, gsize * out_len) { return stub_funcs.ptr_g_base64_decode_inplace(text, out_len); }
void (g_bit_lock)(volatile gint * address, gint lock_bit) { stub_funcs.ptr_g_bit_lock(address, lock_bit); }
gboolean (g_bit_trylock)(volatile gint * address, gint lock_bit) { return stub_funcs.ptr_g_bit_trylock(address, lock_bit); }
void (g_bit_unlock)(volatile gint * address, gint lock_bit) { stub_funcs.ptr_g_bit_unlock(address, lock_bit); }
void (g_pointer_bit_lock)(volatile void * address, gint lock_bit) { stub_funcs.ptr_g_pointer_bit_lock(address, lock_bit); }
void (g_pointer_bit_lock_and_get)(gpointer address, guint lock_bit, guintptr * out_ptr) { stub_funcs.ptr_g_pointer_bit_lock_and_get(address, lock_bit, out_ptr); }
gboolean (g_pointer_bit_trylock)(volatile void * address, gint lock_bit) { return stub_funcs.ptr_g_pointer_bit_trylock(address, lock_bit); }
void (g_pointer_bit_unlock)(volatile void * address, gint lock_bit) { stub_funcs.ptr_g_pointer_bit_unlock(address, lock_bit); }
gpointer (g_pointer_bit_lock_mask_ptr)(gpointer ptr, guint lock_bit, gboolean set, guintptr preserve_mask, gpointer preserve_ptr) { return stub_funcs.ptr_g_pointer_bit_lock_mask_ptr(ptr, lock_bit, set, preserve_mask, preserve_ptr); }
void (g_pointer_bit_unlock_and_set)(void * address, guint lock_bit, gpointer ptr, guintptr preserve_mask) { stub_funcs.ptr_g_pointer_bit_unlock_and_set(address, lock_bit, ptr, preserve_mask); }
GTimeZone * (g_time_zone_new)(const gchar * identifier) { return stub_funcs.ptr_g_time_zone_new(identifier); }
GTimeZone * (g_time_zone_new_identifier)(const gchar * identifier) { return stub_funcs.ptr_g_time_zone_new_identifier(identifier); }
GTimeZone * (g_time_zone_new_utc)(void) { return stub_funcs.ptr_g_time_zone_new_utc(); }
GTimeZone * (g_time_zone_new_local)(void) { return stub_funcs.ptr_g_time_zone_new_local(); }
GTimeZone * (g_time_zone_new_offset)(gint32 seconds) { return stub_funcs.ptr_g_time_zone_new_offset(seconds); }
GTimeZone * (g_time_zone_ref)(GTimeZone * tz) { return stub_funcs.ptr_g_time_zone_ref(tz); }
void (g_time_zone_unref)(GTimeZone * tz) { stub_funcs.ptr_g_time_zone_unref(tz); }
gint (g_time_zone_find_interval)(GTimeZone * tz, GTimeType type, gint64 time_) { return stub_funcs.ptr_g_time_zone_find_interval(tz, type, time_); }
gint (g_time_zone_adjust_time)(GTimeZone * tz, GTimeType type, gint64 * time_) { return stub_funcs.ptr_g_time_zone_adjust_time(tz, type, time_); }
const gchar * (g_time_zone_get_abbreviation)(GTimeZone * tz, gint interval) { return stub_funcs.ptr_g_time_zone_get_abbreviation(tz, interval); }
gint32 (g_time_zone_get_offset)(GTimeZone * tz, gint interval) { return stub_funcs.ptr_g_time_zone_get_offset(tz, interval); }
gboolean (g_time_zone_is_dst)(GTimeZone * tz, gint interval) { return stub_funcs.ptr_g_time_zone_is_dst(tz, interval); }
const gchar * (g_time_zone_get_identifier)(GTimeZone * tz) { return stub_funcs.ptr_g_time_zone_get_identifier(tz); }
void (g_date_time_unref)(GDateTime * datetime) { stub_funcs.ptr_g_date_time_unref(datetime); }
GDateTime * (g_date_time_ref)(GDateTime * datetime) { return stub_funcs.ptr_g_date_time_ref(datetime); }
GDateTime * (g_date_time_new_now)(GTimeZone * tz) { return stub_funcs.ptr_g_date_time_new_now(tz); }
GDateTime * (g_date_time_new_now_local)(void) { return stub_funcs.ptr_g_date_time_new_now_local(); }
GDateTime * (g_date_time_new_now_utc)(void) { return stub_funcs.ptr_g_date_time_new_now_utc(); }
GDateTime * (g_date_time_new_from_unix_local)(gint64 t) { return stub_funcs.ptr_g_date_time_new_from_unix_local(t); }
GDateTime * (g_date_time_new_from_unix_utc)(gint64 t) { return stub_funcs.ptr_g_date_time_new_from_unix_utc(t); }
GDateTime * (g_date_time_new_from_unix_local_usec)(gint64 usecs) { return stub_funcs.ptr_g_date_time_new_from_unix_local_usec(usecs); }
GDateTime * (g_date_time_new_from_unix_utc_usec)(gint64 usecs) { return stub_funcs.ptr_g_date_time_new_from_unix_utc_usec(usecs); }
GDateTime * (g_date_time_new_from_timeval_local)(const GTimeVal * tv) { return stub_funcs.ptr_g_date_time_new_from_timeval_local(tv); }
GDateTime * (g_date_time_new_from_timeval_utc)(const GTimeVal * tv) { return stub_funcs.ptr_g_date_time_new_from_timeval_utc(tv); }
GDateTime * (g_date_time_new_from_iso8601)(const gchar * text, GTimeZone * default_tz) { return stub_funcs.ptr_g_date_time_new_from_iso8601(text, default_tz); }
GDateTime * (g_date_time_new)(GTimeZone * tz, gint year, gint month, gint day, gint hour, gint minute, gdouble seconds) { return stub_funcs.ptr_g_date_time_new(tz, year, month, day, hour, minute, seconds); }
GDateTime * (g_date_time_new_local)(gint year, gint month, gint day, gint hour, gint minute, gdouble seconds) { return stub_funcs.ptr_g_date_time_new_local(year, month, day, hour, minute, seconds); }
GDateTime * (g_date_time_new_utc)(gint year, gint month, gint day, gint hour, gint minute, gdouble seconds) { return stub_funcs.ptr_g_date_time_new_utc(year, month, day, hour, minute, seconds); }
GDateTime * (g_date_time_add)(GDateTime * datetime, GTimeSpan timespan) { return stub_funcs.ptr_g_date_time_add(datetime, timespan); }
GDateTime * (g_date_time_add_years)(GDateTime * datetime, gint years) { return stub_funcs.ptr_g_date_time_add_years(datetime, years); }
GDateTime * (g_date_time_add_months)(GDateTime * datetime, gint months) { return stub_funcs.ptr_g_date_time_add_months(datetime, months); }
GDateTime * (g_date_time_add_weeks)(GDateTime * datetime, gint weeks) { return stub_funcs.ptr_g_date_time_add_weeks(datetime, weeks); }
GDateTime * (g_date_time_add_days)(GDateTime * datetime, gint days) { return stub_funcs.ptr_g_date_time_add_days(datetime, days); }
GDateTime * (g_date_time_add_hours)(GDateTime * datetime, gint hours) { return stub_funcs.ptr_g_date_time_add_hours(datetime, hours); }
GDateTime * (g_date_time_add_minutes)(GDateTime * datetime, gint minutes) { return stub_funcs.ptr_g_date_time_add_minutes(datetime, minutes); }
GDateTime * (g_date_time_add_seconds)(GDateTime * datetime, gdouble seconds) { return stub_funcs.ptr_g_date_time_add_seconds(datetime, seconds); }
GDateTime * (g_date_time_add_full)(GDateTime * datetime, gint years, gint months, gint days, gint hours, gint minutes, gdouble seconds) { return stub_funcs.ptr_g_date_time_add_full(datetime, years, months, days, hours, minutes, seconds); }
gint (g_date_time_compare)(gconstpointer dt1, gconstpointer dt2) { return stub_funcs.ptr_g_date_time_compare(dt1, dt2); }
GTimeSpan (g_date_time_difference)(GDateTime * end, GDateTime * begin) { return stub_funcs.ptr_g_date_time_difference(end, begin); }
guint (g_date_time_hash)(gconstpointer datetime) { return stub_funcs.ptr_g_date_time_hash(datetime); }
gboolean (g_date_time_equal)(gconstpointer dt1, gconstpointer dt2) { return stub_funcs.ptr_g_date_time_equal(dt1, dt2); }
void (g_date_time_get_ymd)(GDateTime * datetime, gint * year, gint * month, gint * day) { stub_funcs.ptr_g_date_time_get_ymd(datetime, year, month, day); }
gint (g_date_time_get_year)(GDateTime * datetime) { return stub_funcs.ptr_g_date_time_get_year(datetime); }
gint (g_date_time_get_month)(GDateTime * datetime) { return stub_funcs.ptr_g_date_time_get_month(datetime); }
gint (g_date_time_get_day_of_month)(GDateTime * datetime) { return stub_funcs.ptr_g_date_time_get_day_of_month(datetime); }
gint (g_date_time_get_week_numbering_year)(GDateTime * datetime) { return stub_funcs.ptr_g_date_time_get_week_numbering_year(datetime); }
gint (g_date_time_get_week_of_year)(GDateTime * datetime) { return stub_funcs.ptr_g_date_time_get_week_of_year(datetime); }
gint (g_date_time_get_day_of_week)(GDateTime * datetime) { return stub_funcs.ptr_g_date_time_get_day_of_week(datetime); }
gint (g_date_time_get_day_of_year)(GDateTime * datetime) { return stub_funcs.ptr_g_date_time_get_day_of_year(datetime); }
gint (g_date_time_get_hour)(GDateTime * datetime) { return stub_funcs.ptr_g_date_time_get_hour(datetime); }
gint (g_date_time_get_minute)(GDateTime * datetime) { return stub_funcs.ptr_g_date_time_get_minute(datetime); }
gint (g_date_time_get_second)(GDateTime * datetime) { return stub_funcs.ptr_g_date_time_get_second(datetime); }
gint (g_date_time_get_microsecond)(GDateTime * datetime) { return stub_funcs.ptr_g_date_time_get_microsecond(datetime); }
gdouble (g_date_time_get_seconds)(GDateTime * datetime) { return stub_funcs.ptr_g_date_time_get_seconds(datetime); }
gint64 (g_date_time_to_unix)(GDateTime * datetime) { return stub_funcs.ptr_g_date_time_to_unix(datetime); }
gint64 (g_date_time_to_unix_usec)(GDateTime * datetime) { return stub_funcs.ptr_g_date_time_to_unix_usec(datetime); }
gboolean (g_date_time_to_timeval)(GDateTime * datetime, GTimeVal * tv) { return stub_funcs.ptr_g_date_time_to_timeval(datetime, tv); }
GTimeSpan (g_date_time_get_utc_offset)(GDateTime * datetime) { return stub_funcs.ptr_g_date_time_get_utc_offset(datetime); }
GTimeZone * (g_date_time_get_timezone)(GDateTime * datetime) { return stub_funcs.ptr_g_date_time_get_timezone(datetime); }
const gchar * (g_date_time_get_timezone_abbreviation)(GDateTime * datetime) { return stub_funcs.ptr_g_date_time_get_timezone_abbreviation(datetime); }
gboolean (g_date_time_is_daylight_savings)(GDateTime * datetime) { return stub_funcs.ptr_g_date_time_is_daylight_savings(datetime); }
GDateTime * (g_date_time_to_timezone)(GDateTime * datetime, GTimeZone * tz) { return stub_funcs.ptr_g_date_time_to_timezone(datetime, tz); }
GDateTime * (g_date_time_to_local)(GDateTime * datetime) { return stub_funcs.ptr_g_date_time_to_local(datetime); }
GDateTime * (g_date_time_to_utc)(GDateTime * datetime) { return stub_funcs.ptr_g_date_time_to_utc(datetime); }
gchar * (g_date_time_format)(GDateTime * datetime, const gchar * format) { return stub_funcs.ptr_g_date_time_format(datetime, format); }
gchar * (g_date_time_format_iso8601)(GDateTime * datetime) { return stub_funcs.ptr_g_date_time_format_iso8601(datetime); }
GQuark (g_bookmark_file_error_quark)(void) { return stub_funcs.ptr_g_bookmark_file_error_quark(); }
GBookmarkFile * (g_bookmark_file_new)(void) { return stub_funcs.ptr_g_bookmark_file_new(); }
void (g_bookmark_file_free)(GBookmarkFile * bookmark) { stub_funcs.ptr_g_bookmark_file_free(bookmark); }
GBookmarkFile * (g_bookmark_file_copy)(GBookmarkFile * bookmark) { return stub_funcs.ptr_g_bookmark_file_copy(bookmark); }
gboolean (g_bookmark_file_load_from_file)(GBookmarkFile * bookmark, const gchar * filename, GError * * error) { return stub_funcs.ptr_g_bookmark_file_load_from_file(bookmark, filename, error); }
gboolean (g_bookmark_file_load_from_data)(GBookmarkFile * bookmark, const gchar * data, gsize length, GError * * error) { return stub_funcs.ptr_g_bookmark_file_load_from_data(bookmark, data, length, error); }
gboolean (g_bookmark_file_load_from_data_dirs)(GBookmarkFile * bookmark, const gchar * file, gchar * * full_path, GError * * error) { return stub_funcs.ptr_g_bookmark_file_load_from_data_dirs(bookmark, file, full_path, error); }
gchar * (g_bookmark_file_to_data)(GBookmarkFile * bookmark, gsize * length, GError * * error) { return stub_funcs.ptr_g_bookmark_file_to_data(bookmark, length, error); }
gboolean (g_bookmark_file_to_file)(GBookmarkFile * bookmark, const gchar * filename, GError * * error) { return stub_funcs.ptr_g_bookmark_file_to_file(bookmark, filename, error); }
void (g_bookmark_file_set_title)(GBookmarkFile * bookmark, const gchar * uri, const gchar * title) { stub_funcs.ptr_g_bookmark_file_set_title(bookmark, uri, title); }
gchar * (g_bookmark_file_get_title)(GBookmarkFile * bookmark, const gchar * uri, GError * * error) { return stub_funcs.ptr_g_bookmark_file_get_title(bookmark, uri, error); }
void (g_bookmark_file_set_description)(GBookmarkFile * bookmark, const gchar * uri, const gchar * description) { stub_funcs.ptr_g_bookmark_file_set_description(bookmark, uri, description); }
gchar * (g_bookmark_file_get_description)(GBookmarkFile * bookmark, const gchar * uri, GError * * error) { return stub_funcs.ptr_g_bookmark_file_get_description(bookmark, uri, error); }
void (g_bookmark_file_set_mime_type)(GBookmarkFile * bookmark, const gchar * uri, const gchar * mime_type) { stub_funcs.ptr_g_bookmark_file_set_mime_type(bookmark, uri, mime_type); }
gchar * (g_bookmark_file_get_mime_type)(GBookmarkFile * bookmark, const gchar * uri, GError * * error) { return stub_funcs.ptr_g_bookmark_file_get_mime_type(bookmark, uri, error); }
void (g_bookmark_file_set_groups)(GBookmarkFile * bookmark, const gchar * uri, const gchar * * groups, gsize length) { stub_funcs.ptr_g_bookmark_file_set_groups(bookmark, uri, groups, length); }
void (g_bookmark_file_add_group)(GBookmarkFile * bookmark, const gchar * uri, const gchar * group) { stub_funcs.ptr_g_bookmark_file_add_group(bookmark, uri, group); }
gboolean (g_bookmark_file_has_group)(GBookmarkFile * bookmark, const gchar * uri, const gchar * group, GError * * error) { return stub_funcs.ptr_g_bookmark_file_has_group(bookmark, uri, group, error); }
gchar * * (g_bookmark_file_get_groups)(GBookmarkFile * bookmark, const gchar * uri, gsize * length, GError * * error) { return stub_funcs.ptr_g_bookmark_file_get_groups(bookmark, uri, length, error); }
void (g_bookmark_file_add_application)(GBookmarkFile * bookmark, const gchar * uri, const gchar * name, const gchar * exec) { stub_funcs.ptr_g_bookmark_file_add_application(bookmark, uri, name, exec); }
gboolean (g_bookmark_file_has_application)(GBookmarkFile * bookmark, const gchar * uri, const gchar * name, GError * * error) { return stub_funcs.ptr_g_bookmark_file_has_application(bookmark, uri, name, error); }
gchar * * (g_bookmark_file_get_applications)(GBookmarkFile * bookmark, const gchar * uri, gsize * length, GError * * error) { return stub_funcs.ptr_g_bookmark_file_get_applications(bookmark, uri, length, error); }
gboolean (g_bookmark_file_set_app_info)(GBookmarkFile * bookmark, const gchar * uri, const gchar * name, const gchar * exec, gint count, time_t stamp, GError * * error) { return stub_funcs.ptr_g_bookmark_file_set_app_info(bookmark, uri, name, exec, count, stamp, error); }
gboolean (g_bookmark_file_set_application_info)(GBookmarkFile * bookmark, const char * uri, const char * name, const char * exec, int count, GDateTime * stamp, GError * * error) { return stub_funcs.ptr_g_bookmark_file_set_application_info(bookmark, uri, name, exec, count, stamp, error); }
gboolean (g_bookmark_file_get_app_info)(GBookmarkFile * bookmark, const gchar * uri, const gchar * name, gchar * * exec, guint * count, time_t * stamp, GError * * error) { return stub_funcs.ptr_g_bookmark_file_get_app_info(bookmark, uri, name, exec, count, stamp, error); }
gboolean (g_bookmark_file_get_application_info)(GBookmarkFile * bookmark, const char * uri, const char * name, char * * exec, unsigned int * count, GDateTime * * stamp, GError * * error) { return stub_funcs.ptr_g_bookmark_file_get_application_info(bookmark, uri, name, exec, count, stamp, error); }
void (g_bookmark_file_set_is_private)(GBookmarkFile * bookmark, const gchar * uri, gboolean is_private) { stub_funcs.ptr_g_bookmark_file_set_is_private(bookmark, uri, is_private); }
gboolean (g_bookmark_file_get_is_private)(GBookmarkFile * bookmark, const gchar * uri, GError * * error) { return stub_funcs.ptr_g_bookmark_file_get_is_private(bookmark, uri, error); }
void (g_bookmark_file_set_icon)(GBookmarkFile * bookmark, const gchar * uri, const gchar * href, const gchar * mime_type) { stub_funcs.ptr_g_bookmark_file_set_icon(bookmark, uri, href, mime_type); }
gboolean (g_bookmark_file_get_icon)(GBookmarkFile * bookmark, const gchar * uri, gchar * * href, gchar * * mime_type, GError * * error) { return stub_funcs.ptr_g_bookmark_file_get_icon(bookmark, uri, href, mime_type, error); }
void (g_bookmark_file_set_added)(GBookmarkFile * bookmark, const gchar * uri, time_t added) { stub_funcs.ptr_g_bookmark_file_set_added(bookmark, uri, added); }
void (g_bookmark_file_set_added_date_time)(GBookmarkFile * bookmark, const char * uri, GDateTime * added) { stub_funcs.ptr_g_bookmark_file_set_added_date_time(bookmark, uri, added); }
time_t (g_bookmark_file_get_added)(GBookmarkFile * bookmark, const gchar * uri, GError * * error) { return stub_funcs.ptr_g_bookmark_file_get_added(bookmark, uri, error); }
GDateTime * (g_bookmark_file_get_added_date_time)(GBookmarkFile * bookmark, const char * uri, GError * * error) { return stub_funcs.ptr_g_bookmark_file_get_added_date_time(bookmark, uri, error); }
void (g_bookmark_file_set_modified)(GBookmarkFile * bookmark, const gchar * uri, time_t modified) { stub_funcs.ptr_g_bookmark_file_set_modified(bookmark, uri, modified); }
void (g_bookmark_file_set_modified_date_time)(GBookmarkFile * bookmark, const char * uri, GDateTime * modified) { stub_funcs.ptr_g_bookmark_file_set_modified_date_time(bookmark, uri, modified); }
time_t (g_bookmark_file_get_modified)(GBookmarkFile * bookmark, const gchar * uri, GError * * error) { return stub_funcs.ptr_g_bookmark_file_get_modified(bookmark, uri, error); }
GDateTime * (g_bookmark_file_get_modified_date_time)(GBookmarkFile * bookmark, const char * uri, GError * * error) { return stub_funcs.ptr_g_bookmark_file_get_modified_date_time(bookmark, uri, error); }
void (g_bookmark_file_set_visited)(GBookmarkFile * bookmark, const gchar * uri, time_t visited) { stub_funcs.ptr_g_bookmark_file_set_visited(bookmark, uri, visited); }
void (g_bookmark_file_set_visited_date_time)(GBookmarkFile * bookmark, const char * uri, GDateTime * visited) { stub_funcs.ptr_g_bookmark_file_set_visited_date_time(bookmark, uri, visited); }
time_t (g_bookmark_file_get_visited)(GBookmarkFile * bookmark, const gchar * uri, GError * * error) { return stub_funcs.ptr_g_bookmark_file_get_visited(bookmark, uri, error); }
GDateTime * (g_bookmark_file_get_visited_date_time)(GBookmarkFile * bookmark, const char * uri, GError * * error) { return stub_funcs.ptr_g_bookmark_file_get_visited_date_time(bookmark, uri, error); }
gboolean (g_bookmark_file_has_item)(GBookmarkFile * bookmark, const gchar * uri) { return stub_funcs.ptr_g_bookmark_file_has_item(bookmark, uri); }
gint (g_bookmark_file_get_size)(GBookmarkFile * bookmark) { return stub_funcs.ptr_g_bookmark_file_get_size(bookmark); }
gchar * * (g_bookmark_file_get_uris)(GBookmarkFile * bookmark, gsize * length) { return stub_funcs.ptr_g_bookmark_file_get_uris(bookmark, length); }
gboolean (g_bookmark_file_remove_group)(GBookmarkFile * bookmark, const gchar * uri, const gchar * group, GError * * error) { return stub_funcs.ptr_g_bookmark_file_remove_group(bookmark, uri, group, error); }
gboolean (g_bookmark_file_remove_application)(GBookmarkFile * bookmark, const gchar * uri, const gchar * name, GError * * error) { return stub_funcs.ptr_g_bookmark_file_remove_application(bookmark, uri, name, error); }
gboolean (g_bookmark_file_remove_item)(GBookmarkFile * bookmark, const gchar * uri, GError * * error) { return stub_funcs.ptr_g_bookmark_file_remove_item(bookmark, uri, error); }
gboolean (g_bookmark_file_move_item)(GBookmarkFile * bookmark, const gchar * old_uri, const gchar * new_uri, GError * * error) { return stub_funcs.ptr_g_bookmark_file_move_item(bookmark, old_uri, new_uri, error); }
GBytes * (g_bytes_new)(gconstpointer data, gsize size) { return stub_funcs.ptr_g_bytes_new(data, size); }
GBytes * (g_bytes_new_take)(gpointer data, gsize size) { return stub_funcs.ptr_g_bytes_new_take(data, size); }
GBytes * (g_bytes_new_static)(gconstpointer data, gsize size) { return stub_funcs.ptr_g_bytes_new_static(data, size); }
GBytes * (g_bytes_new_with_free_func)(gconstpointer data, gsize size, GDestroyNotify free_func, gpointer user_data) { return stub_funcs.ptr_g_bytes_new_with_free_func(data, size, free_func, user_data); }
GBytes * (g_bytes_new_from_bytes)(GBytes * bytes, gsize offset, gsize length) { return stub_funcs.ptr_g_bytes_new_from_bytes(bytes, offset, length); }
gconstpointer (g_bytes_get_data)(GBytes * bytes, gsize * size) { return stub_funcs.ptr_g_bytes_get_data(bytes, size); }
gsize (g_bytes_get_size)(GBytes * bytes) { return stub_funcs.ptr_g_bytes_get_size(bytes); }
GBytes * (g_bytes_ref)(GBytes * bytes) { return stub_funcs.ptr_g_bytes_ref(bytes); }
void (g_bytes_unref)(GBytes * bytes) { stub_funcs.ptr_g_bytes_unref(bytes); }
gpointer (g_bytes_unref_to_data)(GBytes * bytes, gsize * size) { return stub_funcs.ptr_g_bytes_unref_to_data(bytes, size); }
GByteArray * (g_bytes_unref_to_array)(GBytes * bytes) { return stub_funcs.ptr_g_bytes_unref_to_array(bytes); }
guint (g_bytes_hash)(gconstpointer bytes) { return stub_funcs.ptr_g_bytes_hash(bytes); }
gboolean (g_bytes_equal)(gconstpointer bytes1, gconstpointer bytes2) { return stub_funcs.ptr_g_bytes_equal(bytes1, bytes2); }
gint (g_bytes_compare)(gconstpointer bytes1, gconstpointer bytes2) { return stub_funcs.ptr_g_bytes_compare(bytes1, bytes2); }
gconstpointer (g_bytes_get_region)(GBytes * bytes, gsize element_size, gsize offset, gsize n_elements) { return stub_funcs.ptr_g_bytes_get_region(bytes, element_size, offset, n_elements); }
gboolean (g_get_charset)(const char * * charset) { return stub_funcs.ptr_g_get_charset(charset); }
gchar * (g_get_codeset)(void) { return stub_funcs.ptr_g_get_codeset(); }
gboolean (g_get_console_charset)(const char * * charset) { return stub_funcs.ptr_g_get_console_charset(charset); }
const gchar * const * (g_get_language_names)(void) { return stub_funcs.ptr_g_get_language_names(); }
const gchar * const * (g_get_language_names_with_category)(const gchar * category_name) { return stub_funcs.ptr_g_get_language_names_with_category(category_name); }
gchar * * (g_get_locale_variants)(const gchar * locale) { return stub_funcs.ptr_g_get_locale_variants(locale); }
gssize (g_checksum_type_get_length)(GChecksumType checksum_type) { return stub_funcs.ptr_g_checksum_type_get_length(checksum_type); }
GChecksum * (g_checksum_new)(GChecksumType checksum_type) { return stub_funcs.ptr_g_checksum_new(checksum_type); }
void (g_checksum_reset)(GChecksum * checksum) { stub_funcs.ptr_g_checksum_reset(checksum); }
GChecksum * (g_checksum_copy)(const GChecksum * checksum) { return stub_funcs.ptr_g_checksum_copy(checksum); }
void (g_checksum_free)(GChecksum * checksum) { stub_funcs.ptr_g_checksum_free(checksum); }
void (g_checksum_update)(GChecksum * checksum, const guchar * data, gssize length) { stub_funcs.ptr_g_checksum_update(checksum, data, length); }
const gchar * (g_checksum_get_string)(GChecksum * checksum) { return stub_funcs.ptr_g_checksum_get_string(checksum); }
void (g_checksum_get_digest)(GChecksum * checksum, guint8 * buffer, gsize * digest_len) { stub_funcs.ptr_g_checksum_get_digest(checksum, buffer, digest_len); }
gchar * (g_compute_checksum_for_data)(GChecksumType checksum_type, const guchar * data, gsize length) { return stub_funcs.ptr_g_compute_checksum_for_data(checksum_type, data, length); }
gchar * (g_compute_checksum_for_string)(GChecksumType checksum_type, const gchar * str, gssize length) { return stub_funcs.ptr_g_compute_checksum_for_string(checksum_type, str, length); }
gchar * (g_compute_checksum_for_bytes)(GChecksumType checksum_type, GBytes * data) { return stub_funcs.ptr_g_compute_checksum_for_bytes(checksum_type, data); }
GQuark (g_convert_error_quark)(void) { return stub_funcs.ptr_g_convert_error_quark(); }
GIConv (g_iconv_open)(const gchar * to_codeset, const gchar * from_codeset) { return stub_funcs.ptr_g_iconv_open(to_codeset, from_codeset); }
gsize (g_iconv)(GIConv converter, gchar * * inbuf, gsize * inbytes_left, gchar * * outbuf, gsize * outbytes_left) { return stub_funcs.ptr_g_iconv(converter, inbuf, inbytes_left, outbuf, outbytes_left); }
gint (g_iconv_close)(GIConv converter) { return stub_funcs.ptr_g_iconv_close(converter); }
gchar * (g_convert)(const gchar * str, gssize len, const gchar * to_codeset, const gchar * from_codeset, gsize * bytes_read, gsize * bytes_written, GError * * error) { return stub_funcs.ptr_g_convert(str, len, to_codeset, from_codeset, bytes_read, bytes_written, error); }
gchar * (g_convert_with_iconv)(const gchar * str, gssize len, GIConv converter, gsize * bytes_read, gsize * bytes_written, GError * * error) { return stub_funcs.ptr_g_convert_with_iconv(str, len, converter, bytes_read, bytes_written, error); }
gchar * (g_convert_with_fallback)(const gchar * str, gssize len, const gchar * to_codeset, const gchar * from_codeset, const gchar * fallback, gsize * bytes_read, gsize * bytes_written, GError * * error) { return stub_funcs.ptr_g_convert_with_fallback(str, len, to_codeset, from_codeset, fallback, bytes_read, bytes_written, error); }
gchar * (g_locale_to_utf8)(const gchar * opsysstring, gssize len, gsize * bytes_read, gsize * bytes_written, GError * * error) { return stub_funcs.ptr_g_locale_to_utf8(opsysstring, len, bytes_read, bytes_written, error); }
gchar * (g_locale_from_utf8)(const gchar * utf8string, gssize len, gsize * bytes_read, gsize * bytes_written, GError * * error) { return stub_funcs.ptr_g_locale_from_utf8(utf8string, len, bytes_read, bytes_written, error); }
gchar * (g_filename_to_utf8)(const gchar * opsysstring, gssize len, gsize * bytes_read, gsize * bytes_written, GError * * error) { return stub_funcs.ptr_g_filename_to_utf8(opsysstring, len, bytes_read, bytes_written, error); }
gchar * (g_filename_from_utf8)(const gchar * utf8string, gssize len, gsize * bytes_read, gsize * bytes_written, GError * * error) { return stub_funcs.ptr_g_filename_from_utf8(utf8string, len, bytes_read, bytes_written, error); }
gchar * (g_filename_from_uri)(const gchar * uri, gchar * * hostname, GError * * error) { return stub_funcs.ptr_g_filename_from_uri(uri, hostname, error); }
gchar * (g_filename_to_uri)(const gchar * filename, const gchar * hostname, GError * * error) { return stub_funcs.ptr_g_filename_to_uri(filename, hostname, error); }
gchar * (g_filename_display_name)(const gchar * filename) { return stub_funcs.ptr_g_filename_display_name(filename); }
gboolean (g_get_filename_charsets)(const gchar * * * filename_charsets) { return stub_funcs.ptr_g_get_filename_charsets(filename_charsets); }
gchar * (g_filename_display_basename)(const gchar * filename) { return stub_funcs.ptr_g_filename_display_basename(filename); }
gchar * * (g_uri_list_extract_uris)(const gchar * uri_list) { return stub_funcs.ptr_g_uri_list_extract_uris(uri_list); }
void (g_datalist_init)(GData * * datalist) { stub_funcs.ptr_g_datalist_init(datalist); }
void (g_datalist_clear)(GData * * datalist) { stub_funcs.ptr_g_datalist_clear(datalist); }
gpointer (g_datalist_id_get_data)(GData * * datalist, GQuark key_id) { return stub_funcs.ptr_g_datalist_id_get_data(datalist, key_id); }
void (g_datalist_id_set_data_full)(GData * * datalist, GQuark key_id, gpointer data, GDestroyNotify destroy_func) { stub_funcs.ptr_g_datalist_id_set_data_full(datalist, key_id, data, destroy_func); }
void (g_datalist_id_remove_multiple)(GData * * datalist, GQuark * keys, gsize n_keys) { stub_funcs.ptr_g_datalist_id_remove_multiple(datalist, keys, n_keys); }
gpointer (g_datalist_id_dup_data)(GData * * datalist, GQuark key_id, GDuplicateFunc dup_func, gpointer user_data) { return stub_funcs.ptr_g_datalist_id_dup_data(datalist, key_id, dup_func, user_data); }
gboolean (g_datalist_id_replace_data)(GData * * datalist, GQuark key_id, gpointer oldval, gpointer newval, GDestroyNotify destroy, GDestroyNotify * old_destroy) { return stub_funcs.ptr_g_datalist_id_replace_data(datalist, key_id, oldval, newval, destroy, old_destroy); }
gpointer (g_datalist_id_remove_no_notify)(GData * * datalist, GQuark key_id) { return stub_funcs.ptr_g_datalist_id_remove_no_notify(datalist, key_id); }
void (g_datalist_foreach)(GData * * datalist, GDataForeachFunc func, gpointer user_data) { stub_funcs.ptr_g_datalist_foreach(datalist, func, user_data); }
void (g_datalist_set_flags)(GData * * datalist, guint flags) { stub_funcs.ptr_g_datalist_set_flags(datalist, flags); }
void (g_datalist_unset_flags)(GData * * datalist, guint flags) { stub_funcs.ptr_g_datalist_unset_flags(datalist, flags); }
guint (g_datalist_get_flags)(GData * * datalist) { return stub_funcs.ptr_g_datalist_get_flags(datalist); }
void (g_dataset_destroy)(gconstpointer dataset_location) { stub_funcs.ptr_g_dataset_destroy(dataset_location); }
gpointer (g_dataset_id_get_data)(gconstpointer dataset_location, GQuark key_id) { return stub_funcs.ptr_g_dataset_id_get_data(dataset_location, key_id); }
gpointer (g_datalist_get_data)(GData * * datalist, const gchar * key) { return stub_funcs.ptr_g_datalist_get_data(datalist, key); }
void (g_dataset_id_set_data_full)(gconstpointer dataset_location, GQuark key_id, gpointer data, GDestroyNotify destroy_func) { stub_funcs.ptr_g_dataset_id_set_data_full(dataset_location, key_id, data, destroy_func); }
gpointer (g_dataset_id_remove_no_notify)(gconstpointer dataset_location, GQuark key_id) { return stub_funcs.ptr_g_dataset_id_remove_no_notify(dataset_location, key_id); }
void (g_dataset_foreach)(gconstpointer dataset_location, GDataForeachFunc func, gpointer user_data) { stub_funcs.ptr_g_dataset_foreach(dataset_location, func, user_data); }
GDate * (g_date_new)(void) { return stub_funcs.ptr_g_date_new(); }
GDate * (g_date_new_dmy)(GDateDay day, GDateMonth month, GDateYear year) { return stub_funcs.ptr_g_date_new_dmy(day, month, year); }
GDate * (g_date_new_julian)(guint32 julian_day) { return stub_funcs.ptr_g_date_new_julian(julian_day); }
void (g_date_free)(GDate * date) { stub_funcs.ptr_g_date_free(date); }
GDate * (g_date_copy)(const GDate * date) { return stub_funcs.ptr_g_date_copy(date); }
gboolean (g_date_valid)(const GDate * date) { return stub_funcs.ptr_g_date_valid(date); }
gboolean (g_date_valid_day)(GDateDay day) { return stub_funcs.ptr_g_date_valid_day(day); }
gboolean (g_date_valid_month)(GDateMonth month) { return stub_funcs.ptr_g_date_valid_month(month); }
gboolean (g_date_valid_year)(GDateYear year) { return stub_funcs.ptr_g_date_valid_year(year); }
gboolean (g_date_valid_weekday)(GDateWeekday weekday) { return stub_funcs.ptr_g_date_valid_weekday(weekday); }
gboolean (g_date_valid_julian)(guint32 julian_date) { return stub_funcs.ptr_g_date_valid_julian(julian_date); }
gboolean (g_date_valid_dmy)(GDateDay day, GDateMonth month, GDateYear year) { return stub_funcs.ptr_g_date_valid_dmy(day, month, year); }
GDateWeekday (g_date_get_weekday)(const GDate * date) { return stub_funcs.ptr_g_date_get_weekday(date); }
GDateMonth (g_date_get_month)(const GDate * date) { return stub_funcs.ptr_g_date_get_month(date); }
GDateYear (g_date_get_year)(const GDate * date) { return stub_funcs.ptr_g_date_get_year(date); }
GDateDay (g_date_get_day)(const GDate * date) { return stub_funcs.ptr_g_date_get_day(date); }
guint32 (g_date_get_julian)(const GDate * date) { return stub_funcs.ptr_g_date_get_julian(date); }
guint (g_date_get_day_of_year)(const GDate * date) { return stub_funcs.ptr_g_date_get_day_of_year(date); }
guint (g_date_get_monday_week_of_year)(const GDate * date) { return stub_funcs.ptr_g_date_get_monday_week_of_year(date); }
guint (g_date_get_sunday_week_of_year)(const GDate * date) { return stub_funcs.ptr_g_date_get_sunday_week_of_year(date); }
guint (g_date_get_iso8601_week_of_year)(const GDate * date) { return stub_funcs.ptr_g_date_get_iso8601_week_of_year(date); }
void (g_date_clear)(GDate * date, guint n_dates) { stub_funcs.ptr_g_date_clear(date, n_dates); }
void (g_date_set_parse)(GDate * date, const gchar * str) { stub_funcs.ptr_g_date_set_parse(date, str); }
void (g_date_set_time_t)(GDate * date, time_t timet) { stub_funcs.ptr_g_date_set_time_t(date, timet); }
void (g_date_set_time_val)(GDate * date, GTimeVal * timeval) { stub_funcs.ptr_g_date_set_time_val(date, timeval); }
void (g_date_set_time)(GDate * date, GTime time_) { stub_funcs.ptr_g_date_set_time(date, time_); }
void (g_date_set_month)(GDate * date, GDateMonth month) { stub_funcs.ptr_g_date_set_month(date, month); }
void (g_date_set_day)(GDate * date, GDateDay day) { stub_funcs.ptr_g_date_set_day(date, day); }
void (g_date_set_year)(GDate * date, GDateYear year) { stub_funcs.ptr_g_date_set_year(date, year); }
void (g_date_set_dmy)(GDate * date, GDateDay day, GDateMonth month, GDateYear y) { stub_funcs.ptr_g_date_set_dmy(date, day, month, y); }
void (g_date_set_julian)(GDate * date, guint32 julian_date) { stub_funcs.ptr_g_date_set_julian(date, julian_date); }
gboolean (g_date_is_first_of_month)(const GDate * date) { return stub_funcs.ptr_g_date_is_first_of_month(date); }
gboolean (g_date_is_last_of_month)(const GDate * date) { return stub_funcs.ptr_g_date_is_last_of_month(date); }
void (g_date_add_days)(GDate * date, guint n_days) { stub_funcs.ptr_g_date_add_days(date, n_days); }
void (g_date_subtract_days)(GDate * date, guint n_days) { stub_funcs.ptr_g_date_subtract_days(date, n_days); }
void (g_date_add_months)(GDate * date, guint n_months) { stub_funcs.ptr_g_date_add_months(date, n_months); }
void (g_date_subtract_months)(GDate * date, guint n_months) { stub_funcs.ptr_g_date_subtract_months(date, n_months); }
void (g_date_add_years)(GDate * date, guint n_years) { stub_funcs.ptr_g_date_add_years(date, n_years); }
void (g_date_subtract_years)(GDate * date, guint n_years) { stub_funcs.ptr_g_date_subtract_years(date, n_years); }
gboolean (g_date_is_leap_year)(GDateYear year) { return stub_funcs.ptr_g_date_is_leap_year(year); }
guint8 (g_date_get_days_in_month)(GDateMonth month, GDateYear year) { return stub_funcs.ptr_g_date_get_days_in_month(month, year); }
guint8 (g_date_get_monday_weeks_in_year)(GDateYear year) { return stub_funcs.ptr_g_date_get_monday_weeks_in_year(year); }
guint8 (g_date_get_sunday_weeks_in_year)(GDateYear year) { return stub_funcs.ptr_g_date_get_sunday_weeks_in_year(year); }
gint (g_date_days_between)(const GDate * date1, const GDate * date2) { return stub_funcs.ptr_g_date_days_between(date1, date2); }
gint (g_date_compare)(const GDate * lhs, const GDate * rhs) { return stub_funcs.ptr_g_date_compare(lhs, rhs); }
void (g_date_to_struct_tm)(const GDate * date, struct tm * tm) { stub_funcs.ptr_g_date_to_struct_tm(date, tm); }
void (g_date_clamp)(GDate * date, const GDate * min_date, const GDate * max_date) { stub_funcs.ptr_g_date_clamp(date, min_date, max_date); }
void (g_date_order)(GDate * date1, GDate * date2) { stub_funcs.ptr_g_date_order(date1, date2); }
gsize (g_date_strftime)(gchar * s, gsize slen, const gchar * format, const GDate * date) { return stub_funcs.ptr_g_date_strftime(s, slen, format, date); }
GDir * (g_dir_open)(const gchar * path, guint flags, GError * * error) { return stub_funcs.ptr_g_dir_open(path, flags, error); }
const gchar * (g_dir_read_name)(GDir * dir) { return stub_funcs.ptr_g_dir_read_name(dir); }
void (g_dir_rewind)(GDir * dir) { stub_funcs.ptr_g_dir_rewind(dir); }
void (g_dir_close)(GDir * dir) { stub_funcs.ptr_g_dir_close(dir); }
GDir * (g_dir_ref)(GDir * dir) { return stub_funcs.ptr_g_dir_ref(dir); }
void (g_dir_unref)(GDir * dir) { stub_funcs.ptr_g_dir_unref(dir); }
const gchar * (g_getenv)(const gchar * variable) { return stub_funcs.ptr_g_getenv(variable); }
gboolean (g_setenv)(const gchar * variable, const gchar * value, gboolean overwrite) { return stub_funcs.ptr_g_setenv(variable, value, overwrite); }
void (g_unsetenv)(const gchar * variable) { stub_funcs.ptr_g_unsetenv(variable); }
gchar * * (g_listenv)(void) { return stub_funcs.ptr_g_listenv(); }
gchar * * (g_get_environ)(void) { return stub_funcs.ptr_g_get_environ(); }
const gchar * (g_environ_getenv)(gchar * * envp, const gchar * variable) { return stub_funcs.ptr_g_environ_getenv(envp, variable); }
gchar * * (g_environ_setenv)(gchar * * envp, const gchar * variable, const gchar * value, gboolean overwrite) { return stub_funcs.ptr_g_environ_setenv(envp, variable, value, overwrite); }
gchar * * (g_environ_unsetenv)(gchar * * envp, const gchar * variable) { return stub_funcs.ptr_g_environ_unsetenv(envp, variable); }
GQuark (g_file_error_quark)(void) { return stub_funcs.ptr_g_file_error_quark(); }
GFileError (g_file_error_from_errno)(gint err_no) { return stub_funcs.ptr_g_file_error_from_errno(err_no); }
gboolean (g_file_test)(const gchar * filename, GFileTest test) { return stub_funcs.ptr_g_file_test(filename, test); }
gboolean (g_file_get_contents)(const gchar * filename, gchar * * contents, gsize * length, GError * * error) { return stub_funcs.ptr_g_file_get_contents(filename, contents, length, error); }
gboolean (g_file_set_contents)(const gchar * filename, const gchar * contents, gssize length, GError * * error) { return stub_funcs.ptr_g_file_set_contents(filename, contents, length, error); }
gboolean (g_file_set_contents_full)(const gchar * filename, const gchar * contents, gssize length, GFileSetContentsFlags flags, int mode, GError * * error) { return stub_funcs.ptr_g_file_set_contents_full(filename, contents, length, flags, mode, error); }
gchar * (g_file_read_link)(const gchar * filename, GError * * error) { return stub_funcs.ptr_g_file_read_link(filename, error); }
gchar * (g_mkdtemp)(gchar * tmpl) { return stub_funcs.ptr_g_mkdtemp(tmpl); }
gchar * (g_mkdtemp_full)(gchar * tmpl, gint mode) { return stub_funcs.ptr_g_mkdtemp_full(tmpl, mode); }
gint (g_mkstemp)(gchar * tmpl) { return stub_funcs.ptr_g_mkstemp(tmpl); }
gint (g_mkstemp_full)(gchar * tmpl, gint flags, gint mode) { return stub_funcs.ptr_g_mkstemp_full(tmpl, flags, mode); }
gint (g_file_open_tmp)(const gchar * tmpl, gchar * * name_used, GError * * error) { return stub_funcs.ptr_g_file_open_tmp(tmpl, name_used, error); }
gchar * (g_dir_make_tmp)(const gchar * tmpl, GError * * error) { return stub_funcs.ptr_g_dir_make_tmp(tmpl, error); }
gchar * (g_build_pathv)(const gchar * separator, gchar * * args) { return stub_funcs.ptr_g_build_pathv(separator, args); }
gchar * (g_build_filename)(const gchar * first_element, ...) { gchar * ret; va_list vaargs; va_start(vaargs, first_element); ret = stub_funcs.ptr_g_build_filename_valist(first_element, &vaargs); va_end(vaargs); return ret; }
gchar * (g_build_filenamev)(gchar * * args) { return stub_funcs.ptr_g_build_filenamev(args); }
gchar * (g_build_filename_valist)(const gchar * first_element, va_list * args) { return stub_funcs.ptr_g_build_filename_valist(first_element, args); }
gint (g_mkdir_with_parents)(const gchar * pathname, gint mode) { return stub_funcs.ptr_g_mkdir_with_parents(pathname, mode); }
gboolean (g_path_is_absolute)(const gchar * file_name) { return stub_funcs.ptr_g_path_is_absolute(file_name); }
const gchar * (g_path_skip_root)(const gchar * file_name) { return stub_funcs.ptr_g_path_skip_root(file_name); }
const gchar * (g_basename)(const gchar * file_name) { return stub_funcs.ptr_g_basename(file_name); }
gchar * (g_get_current_dir)(void) { return stub_funcs.ptr_g_get_current_dir(); }
gchar * (g_path_get_basename)(const gchar * file_name) { return stub_funcs.ptr_g_path_get_basename(file_name); }
gchar * (g_path_get_dirname)(const gchar * file_name) { return stub_funcs.ptr_g_path_get_dirname(file_name); }
gchar * (g_canonicalize_filename)(const gchar * filename, const gchar * relative_to) { return stub_funcs.ptr_g_canonicalize_filename(filename, relative_to); }
const gchar * (g_strip_context)(const gchar * msgid, const gchar * msgval) { return stub_funcs.ptr_g_strip_context(msgid, msgval); }
const gchar * (g_dgettext)(const gchar * domain, const gchar * msgid) { return stub_funcs.ptr_g_dgettext(domain, msgid); }
const gchar * (g_dcgettext)(const gchar * domain, const gchar * msgid, gint category) { return stub_funcs.ptr_g_dcgettext(domain, msgid, category); }
const gchar * (g_dngettext)(const gchar * domain, const gchar * msgid, const gchar * msgid_plural, gulong n) { return stub_funcs.ptr_g_dngettext(domain, msgid, msgid_plural, n); }
const gchar * (g_dpgettext)(const gchar * domain, const gchar * msgctxtid, gsize msgidoffset) { return stub_funcs.ptr_g_dpgettext(domain, msgctxtid, msgidoffset); }
const gchar * (g_dpgettext2)(const gchar * domain, const gchar * context, const gchar * msgid) { return stub_funcs.ptr_g_dpgettext2(domain, context, msgid); }
void (g_free)(gpointer mem) { stub_funcs.ptr_g_free(mem); }
void (g_free_sized)(gpointer mem, size_t size) { stub_funcs.ptr_g_free_sized(mem, size); }
void (g_clear_pointer)(gpointer * pp, GDestroyNotify destroy) { stub_funcs.ptr_g_clear_pointer(pp, destroy); }
gpointer (g_malloc)(gsize n_bytes) { return stub_funcs.ptr_g_malloc(n_bytes); }
gpointer (g_malloc0)(gsize n_bytes) { return stub_funcs.ptr_g_malloc0(n_bytes); }
gpointer (g_realloc)(gpointer mem, gsize n_bytes) { return stub_funcs.ptr_g_realloc(mem, n_bytes); }
gpointer (g_try_malloc)(gsize n_bytes) { return stub_funcs.ptr_g_try_malloc(n_bytes); }
gpointer (g_try_malloc0)(gsize n_bytes) { return stub_funcs.ptr_g_try_malloc0(n_bytes); }
gpointer (g_try_realloc)(gpointer mem, gsize n_bytes) { return stub_funcs.ptr_g_try_realloc(mem, n_bytes); }
gpointer (g_malloc_n)(gsize n_blocks, gsize n_block_bytes) { return stub_funcs.ptr_g_malloc_n(n_blocks, n_block_bytes); }
gpointer (g_malloc0_n)(gsize n_blocks, gsize n_block_bytes) { return stub_funcs.ptr_g_malloc0_n(n_blocks, n_block_bytes); }
gpointer (g_realloc_n)(gpointer mem, gsize n_blocks, gsize n_block_bytes) { return stub_funcs.ptr_g_realloc_n(mem, n_blocks, n_block_bytes); }
gpointer (g_try_malloc_n)(gsize n_blocks, gsize n_block_bytes) { return stub_funcs.ptr_g_try_malloc_n(n_blocks, n_block_bytes); }
gpointer (g_try_malloc0_n)(gsize n_blocks, gsize n_block_bytes) { return stub_funcs.ptr_g_try_malloc0_n(n_blocks, n_block_bytes); }
gpointer (g_try_realloc_n)(gpointer mem, gsize n_blocks, gsize n_block_bytes) { return stub_funcs.ptr_g_try_realloc_n(mem, n_blocks, n_block_bytes); }
gpointer (g_aligned_alloc)(gsize n_blocks, gsize n_block_bytes, gsize alignment) { return stub_funcs.ptr_g_aligned_alloc(n_blocks, n_block_bytes, alignment); }
gpointer (g_aligned_alloc0)(gsize n_blocks, gsize n_block_bytes, gsize alignment) { return stub_funcs.ptr_g_aligned_alloc0(n_blocks, n_block_bytes, alignment); }
void (g_aligned_free)(gpointer mem) { stub_funcs.ptr_g_aligned_free(mem); }
void (g_aligned_free_sized)(gpointer mem, size_t alignment, size_t size) { stub_funcs.ptr_g_aligned_free_sized(mem, alignment, size); }
void (g_mem_set_vtable)(GMemVTable * vtable) { stub_funcs.ptr_g_mem_set_vtable(vtable); }
gboolean (g_mem_is_system_malloc)(void) { return stub_funcs.ptr_g_mem_is_system_malloc(); }
void (g_mem_profile)(void) { stub_funcs.ptr_g_mem_profile(); }
GNode * (g_node_new)(gpointer data) { return stub_funcs.ptr_g_node_new(data); }
void (g_node_destroy)(GNode * root) { stub_funcs.ptr_g_node_destroy(root); }
void (g_node_unlink)(GNode * node) { stub_funcs.ptr_g_node_unlink(node); }
GNode * (g_node_copy_deep)(GNode * node, GCopyFunc copy_func, gpointer data) { return stub_funcs.ptr_g_node_copy_deep(node, copy_func, data); }
GNode * (g_node_copy)(GNode * node) { return stub_funcs.ptr_g_node_copy(node); }
GNode * (g_node_insert)(GNode * parent, gint position, GNode * node) { return stub_funcs.ptr_g_node_insert(parent, position, node); }
GNode * (g_node_insert_before)(GNode * parent, GNode * sibling, GNode * node) { return stub_funcs.ptr_g_node_insert_before(parent, sibling, node); }
GNode * (g_node_insert_after)(GNode * parent, GNode * sibling, GNode * node) { return stub_funcs.ptr_g_node_insert_after(parent, sibling, node); }
GNode * (g_node_prepend)(GNode * parent, GNode * node) { return stub_funcs.ptr_g_node_prepend(parent, node); }
guint (g_node_n_nodes)(GNode * root, GTraverseFlags flags) { return stub_funcs.ptr_g_node_n_nodes(root, flags); }
GNode * (g_node_get_root)(GNode * node) { return stub_funcs.ptr_g_node_get_root(node); }
gboolean (g_node_is_ancestor)(GNode * node, GNode * descendant) { return stub_funcs.ptr_g_node_is_ancestor(node, descendant); }
guint (g_node_depth)(GNode * node) { return stub_funcs.ptr_g_node_depth(node); }
GNode * (g_node_find)(GNode * root, GTraverseType order, GTraverseFlags flags, gpointer data) { return stub_funcs.ptr_g_node_find(root, order, flags, data); }
void (g_node_traverse)(GNode * root, GTraverseType order, GTraverseFlags flags, gint max_depth, GNodeTraverseFunc func, gpointer data) { stub_funcs.ptr_g_node_traverse(root, order, flags, max_depth, func, data); }
guint (g_node_max_height)(GNode * root) { return stub_funcs.ptr_g_node_max_height(root); }
void (g_node_children_foreach)(GNode * node, GTraverseFlags flags, GNodeForeachFunc func, gpointer data) { stub_funcs.ptr_g_node_children_foreach(node, flags, func, data); }
void (g_node_reverse_children)(GNode * node) { stub_funcs.ptr_g_node_reverse_children(node); }
guint (g_node_n_children)(GNode * node) { return stub_funcs.ptr_g_node_n_children(node); }
GNode * (g_node_nth_child)(GNode * node, guint n) { return stub_funcs.ptr_g_node_nth_child(node, n); }
GNode * (g_node_last_child)(GNode * node) { return stub_funcs.ptr_g_node_last_child(node); }
GNode * (g_node_find_child)(GNode * node, GTraverseFlags flags, gpointer data) { return stub_funcs.ptr_g_node_find_child(node, flags, data); }
gint (g_node_child_position)(GNode * node, GNode * child) { return stub_funcs.ptr_g_node_child_position(node, child); }
gint (g_node_child_index)(GNode * node, gpointer data) { return stub_funcs.ptr_g_node_child_index(node, data); }
GNode * (g_node_first_sibling)(GNode * node) { return stub_funcs.ptr_g_node_first_sibling(node); }
GNode * (g_node_last_sibling)(GNode * node) { return stub_funcs.ptr_g_node_last_sibling(node); }
GList * (g_list_alloc)(void) { return stub_funcs.ptr_g_list_alloc(); }
void (g_list_free)(GList * list) { stub_funcs.ptr_g_list_free(list); }
void (g_list_free_1)(GList * list) { stub_funcs.ptr_g_list_free_1(list); }
void (g_list_free_full)(GList * list, GDestroyNotify free_func) { stub_funcs.ptr_g_list_free_full(list, free_func); }
GList * (g_list_append)(GList * list, gpointer data) { return stub_funcs.ptr_g_list_append(list, data); }
GList * (g_list_prepend)(GList * list, gpointer data) { return stub_funcs.ptr_g_list_prepend(list, data); }
GList * (g_list_insert)(GList * list, gpointer data, gint position) { return stub_funcs.ptr_g_list_insert(list, data, position); }
GList * (g_list_insert_sorted)(GList * list, gpointer data, GCompareFunc func) { return stub_funcs.ptr_g_list_insert_sorted(list, data, func); }
GList * (g_list_insert_sorted_with_data)(GList * list, gpointer data, GCompareDataFunc func, gpointer user_data) { return stub_funcs.ptr_g_list_insert_sorted_with_data(list, data, func, user_data); }
GList * (g_list_insert_before)(GList * list, GList * sibling, gpointer data) { return stub_funcs.ptr_g_list_insert_before(list, sibling, data); }
GList * (g_list_insert_before_link)(GList * list, GList * sibling, GList * link_) { return stub_funcs.ptr_g_list_insert_before_link(list, sibling, link_); }
GList * (g_list_concat)(GList * list1, GList * list2) { return stub_funcs.ptr_g_list_concat(list1, list2); }
GList * (g_list_remove)(GList * list, gconstpointer data) { return stub_funcs.ptr_g_list_remove(list, data); }
GList * (g_list_remove_all)(GList * list, gconstpointer data) { return stub_funcs.ptr_g_list_remove_all(list, data); }
GList * (g_list_remove_link)(GList * list, GList * llink) { return stub_funcs.ptr_g_list_remove_link(list, llink); }
GList * (g_list_delete_link)(GList * list, GList * link_) { return stub_funcs.ptr_g_list_delete_link(list, link_); }
GList * (g_list_reverse)(GList * list) { return stub_funcs.ptr_g_list_reverse(list); }
GList * (g_list_copy)(GList * list) { return stub_funcs.ptr_g_list_copy(list); }
GList * (g_list_copy_deep)(GList * list, GCopyFunc func, gpointer user_data) { return stub_funcs.ptr_g_list_copy_deep(list, func, user_data); }
GList * (g_list_nth)(GList * list, guint n) { return stub_funcs.ptr_g_list_nth(list, n); }
GList * (g_list_nth_prev)(GList * list, guint n) { return stub_funcs.ptr_g_list_nth_prev(list, n); }
GList * (g_list_find)(GList * list, gconstpointer data) { return stub_funcs.ptr_g_list_find(list, data); }
GList * (g_list_find_custom)(GList * list, gconstpointer data, GCompareFunc func) { return stub_funcs.ptr_g_list_find_custom(list, data, func); }
gint (g_list_position)(GList * list, GList * llink) { return stub_funcs.ptr_g_list_position(list, llink); }
gint (g_list_index)(GList * list, gconstpointer data) { return stub_funcs.ptr_g_list_index(list, data); }
GList * (g_list_last)(GList * list) { return stub_funcs.ptr_g_list_last(list); }
GList * (g_list_first)(GList * list) { return stub_funcs.ptr_g_list_first(list); }
guint (g_list_length)(GList * list) { return stub_funcs.ptr_g_list_length(list); }
void (g_list_foreach)(GList * list, GFunc func, gpointer user_data) { stub_funcs.ptr_g_list_foreach(list, func, user_data); }
GList * (g_list_sort)(GList * list, GCompareFunc compare_func) { return stub_funcs.ptr_g_list_sort(list, compare_func); }
GList * (g_list_sort_with_data)(GList * list, GCompareDataFunc compare_func, gpointer user_data) { return stub_funcs.ptr_g_list_sort_with_data(list, compare_func, user_data); }
gpointer (g_list_nth_data)(GList * list, guint n) { return stub_funcs.ptr_g_list_nth_data(list, n); }
void (g_clear_list)(GList * * list_ptr, GDestroyNotify destroy) { stub_funcs.ptr_g_clear_list(list_ptr, destroy); }
GHashTable * (g_hash_table_new)(GHashFunc hash_func, GEqualFunc key_equal_func) { return stub_funcs.ptr_g_hash_table_new(hash_func, key_equal_func); }
GHashTable * (g_hash_table_new_full)(GHashFunc hash_func, GEqualFunc key_equal_func, GDestroyNotify key_destroy_func, GDestroyNotify value_destroy_func) { return stub_funcs.ptr_g_hash_table_new_full(hash_func, key_equal_func, key_destroy_func, value_destroy_func); }
GHashTable * (g_hash_table_new_similar)(GHashTable * other_hash_table) { return stub_funcs.ptr_g_hash_table_new_similar(other_hash_table); }
void (g_hash_table_destroy)(GHashTable * hash_table) { stub_funcs.ptr_g_hash_table_destroy(hash_table); }
gboolean (g_hash_table_insert)(GHashTable * hash_table, gpointer key, gpointer value) { return stub_funcs.ptr_g_hash_table_insert(hash_table, key, value); }
gboolean (g_hash_table_replace)(GHashTable * hash_table, gpointer key, gpointer value) { return stub_funcs.ptr_g_hash_table_replace(hash_table, key, value); }
gboolean (g_hash_table_add)(GHashTable * hash_table, gpointer key) { return stub_funcs.ptr_g_hash_table_add(hash_table, key); }
gboolean (g_hash_table_remove)(GHashTable * hash_table, gconstpointer key) { return stub_funcs.ptr_g_hash_table_remove(hash_table, key); }
void (g_hash_table_remove_all)(GHashTable * hash_table) { stub_funcs.ptr_g_hash_table_remove_all(hash_table); }
gboolean (g_hash_table_steal)(GHashTable * hash_table, gconstpointer key) { return stub_funcs.ptr_g_hash_table_steal(hash_table, key); }
gboolean (g_hash_table_steal_extended)(GHashTable * hash_table, gconstpointer lookup_key, gpointer * stolen_key, gpointer * stolen_value) { return stub_funcs.ptr_g_hash_table_steal_extended(hash_table, lookup_key, stolen_key, stolen_value); }
void (g_hash_table_steal_all)(GHashTable * hash_table) { stub_funcs.ptr_g_hash_table_steal_all(hash_table); }
GPtrArray * (g_hash_table_steal_all_keys)(GHashTable * hash_table) { return stub_funcs.ptr_g_hash_table_steal_all_keys(hash_table); }
GPtrArray * (g_hash_table_steal_all_values)(GHashTable * hash_table) { return stub_funcs.ptr_g_hash_table_steal_all_values(hash_table); }
gpointer (g_hash_table_lookup)(GHashTable * hash_table, gconstpointer key) { return stub_funcs.ptr_g_hash_table_lookup(hash_table, key); }
gboolean (g_hash_table_contains)(GHashTable * hash_table, gconstpointer key) { return stub_funcs.ptr_g_hash_table_contains(hash_table, key); }
gboolean (g_hash_table_lookup_extended)(GHashTable * hash_table, gconstpointer lookup_key, gpointer * orig_key, gpointer * value) { return stub_funcs.ptr_g_hash_table_lookup_extended(hash_table, lookup_key, orig_key, value); }
void (g_hash_table_foreach)(GHashTable * hash_table, GHFunc func, gpointer user_data) { stub_funcs.ptr_g_hash_table_foreach(hash_table, func, user_data); }
gpointer (g_hash_table_find)(GHashTable * hash_table, GHRFunc predicate, gpointer user_data) { return stub_funcs.ptr_g_hash_table_find(hash_table, predicate, user_data); }
guint (g_hash_table_foreach_remove)(GHashTable * hash_table, GHRFunc func, gpointer user_data) { return stub_funcs.ptr_g_hash_table_foreach_remove(hash_table, func, user_data); }
guint (g_hash_table_foreach_steal)(GHashTable * hash_table, GHRFunc func, gpointer user_data) { return stub_funcs.ptr_g_hash_table_foreach_steal(hash_table, func, user_data); }
guint (g_hash_table_size)(GHashTable * hash_table) { return stub_funcs.ptr_g_hash_table_size(hash_table); }
GList * (g_hash_table_get_keys)(GHashTable * hash_table) { return stub_funcs.ptr_g_hash_table_get_keys(hash_table); }
GList * (g_hash_table_get_values)(GHashTable * hash_table) { return stub_funcs.ptr_g_hash_table_get_values(hash_table); }
gpointer * (g_hash_table_get_keys_as_array)(GHashTable * hash_table, guint * length) { return stub_funcs.ptr_g_hash_table_get_keys_as_array(hash_table, length); }
GPtrArray * (g_hash_table_get_keys_as_ptr_array)(GHashTable * hash_table) { return stub_funcs.ptr_g_hash_table_get_keys_as_ptr_array(hash_table); }
GPtrArray * (g_hash_table_get_values_as_ptr_array)(GHashTable * hash_table) { return stub_funcs.ptr_g_hash_table_get_values_as_ptr_array(hash_table); }
void (g_hash_table_iter_init)(GHashTableIter * iter, GHashTable * hash_table) { stub_funcs.ptr_g_hash_table_iter_init(iter, hash_table); }
gboolean (g_hash_table_iter_next)(GHashTableIter * iter, gpointer * key, gpointer * value) { return stub_funcs.ptr_g_hash_table_iter_next(iter, key, value); }
GHashTable * (g_hash_table_iter_get_hash_table)(GHashTableIter * iter) { return stub_funcs.ptr_g_hash_table_iter_get_hash_table(iter); }
void (g_hash_table_iter_remove)(GHashTableIter * iter) { stub_funcs.ptr_g_hash_table_iter_remove(iter); }
void (g_hash_table_iter_replace)(GHashTableIter * iter, gpointer value) { stub_funcs.ptr_g_hash_table_iter_replace(iter, value); }
void (g_hash_table_iter_steal)(GHashTableIter * iter) { stub_funcs.ptr_g_hash_table_iter_steal(iter); }
GHashTable * (g_hash_table_ref)(GHashTable * hash_table) { return stub_funcs.ptr_g_hash_table_ref(hash_table); }
void (g_hash_table_unref)(GHashTable * hash_table) { stub_funcs.ptr_g_hash_table_unref(hash_table); }
gboolean (g_str_equal)(gconstpointer v1, gconstpointer v2) { return stub_funcs.ptr_g_str_equal(v1, v2); }
guint (g_str_hash)(gconstpointer v) { return stub_funcs.ptr_g_str_hash(v); }
gboolean (g_int_equal)(gconstpointer v1, gconstpointer v2) { return stub_funcs.ptr_g_int_equal(v1, v2); }
guint (g_int_hash)(gconstpointer v) { return stub_funcs.ptr_g_int_hash(v); }
gboolean (g_int64_equal)(gconstpointer v1, gconstpointer v2) { return stub_funcs.ptr_g_int64_equal(v1, v2); }
guint (g_int64_hash)(gconstpointer v) { return stub_funcs.ptr_g_int64_hash(v); }
gboolean (g_double_equal)(gconstpointer v1, gconstpointer v2) { return stub_funcs.ptr_g_double_equal(v1, v2); }
guint (g_double_hash)(gconstpointer v) { return stub_funcs.ptr_g_double_hash(v); }
guint (g_direct_hash)(gconstpointer v) { return stub_funcs.ptr_g_direct_hash(v); }
gboolean (g_direct_equal)(gconstpointer v1, gconstpointer v2) { return stub_funcs.ptr_g_direct_equal(v1, v2); }
GHmac * (g_hmac_new)(GChecksumType digest_type, const guchar * key, gsize key_len) { return stub_funcs.ptr_g_hmac_new(digest_type, key, key_len); }
GHmac * (g_hmac_copy)(const GHmac * hmac) { return stub_funcs.ptr_g_hmac_copy(hmac); }
GHmac * (g_hmac_ref)(GHmac * hmac) { return stub_funcs.ptr_g_hmac_ref(hmac); }
void (g_hmac_unref)(GHmac * hmac) { stub_funcs.ptr_g_hmac_unref(hmac); }
void (g_hmac_update)(GHmac * hmac, const guchar * data, gssize length) { stub_funcs.ptr_g_hmac_update(hmac, data, length); }
const gchar * (g_hmac_get_string)(GHmac * hmac) { return stub_funcs.ptr_g_hmac_get_string(hmac); }
void (g_hmac_get_digest)(GHmac * hmac, guint8 * buffer, gsize * digest_len) { stub_funcs.ptr_g_hmac_get_digest(hmac, buffer, digest_len); }
gchar * (g_compute_hmac_for_data)(GChecksumType digest_type, const guchar * key, gsize key_len, const guchar * data, gsize length) { return stub_funcs.ptr_g_compute_hmac_for_data(digest_type, key, key_len, data, length); }
gchar * (g_compute_hmac_for_string)(GChecksumType digest_type, const guchar * key, gsize key_len, const gchar * str, gssize length) { return stub_funcs.ptr_g_compute_hmac_for_string(digest_type, key, key_len, str, length); }
gchar * (g_compute_hmac_for_bytes)(GChecksumType digest_type, GBytes * key, GBytes * data) { return stub_funcs.ptr_g_compute_hmac_for_bytes(digest_type, key, data); }
void (g_hook_list_init)(GHookList * hook_list, guint hook_size) { stub_funcs.ptr_g_hook_list_init(hook_list, hook_size); }
void (g_hook_list_clear)(GHookList * hook_list) { stub_funcs.ptr_g_hook_list_clear(hook_list); }
GHook * (g_hook_alloc)(GHookList * hook_list) { return stub_funcs.ptr_g_hook_alloc(hook_list); }
void (g_hook_free)(GHookList * hook_list, GHook * hook) { stub_funcs.ptr_g_hook_free(hook_list, hook); }
GHook * (g_hook_ref)(GHookList * hook_list, GHook * hook) { return stub_funcs.ptr_g_hook_ref(hook_list, hook); }
void (g_hook_unref)(GHookList * hook_list, GHook * hook) { stub_funcs.ptr_g_hook_unref(hook_list, hook); }
gboolean (g_hook_destroy)(GHookList * hook_list, gulong hook_id) { return stub_funcs.ptr_g_hook_destroy(hook_list, hook_id); }
void (g_hook_destroy_link)(GHookList * hook_list, GHook * hook) { stub_funcs.ptr_g_hook_destroy_link(hook_list, hook); }
void (g_hook_prepend)(GHookList * hook_list, GHook * hook) { stub_funcs.ptr_g_hook_prepend(hook_list, hook); }
void (g_hook_insert_before)(GHookList * hook_list, GHook * sibling, GHook * hook) { stub_funcs.ptr_g_hook_insert_before(hook_list, sibling, hook); }
void (g_hook_insert_sorted)(GHookList * hook_list, GHook * hook, GHookCompareFunc func) { stub_funcs.ptr_g_hook_insert_sorted(hook_list, hook, func); }
GHook * (g_hook_get)(GHookList * hook_list, gulong hook_id) { return stub_funcs.ptr_g_hook_get(hook_list, hook_id); }
GHook * (g_hook_find)(GHookList * hook_list, gboolean need_valids, GHookFindFunc func, gpointer data) { return stub_funcs.ptr_g_hook_find(hook_list, need_valids, func, data); }
GHook * (g_hook_find_data)(GHookList * hook_list, gboolean need_valids, gpointer data) { return stub_funcs.ptr_g_hook_find_data(hook_list, need_valids, data); }
GHook * (g_hook_find_func)(GHookList * hook_list, gboolean need_valids, gpointer func) { return stub_funcs.ptr_g_hook_find_func(hook_list, need_valids, func); }
GHook * (g_hook_find_func_data)(GHookList * hook_list, gboolean need_valids, gpointer func, gpointer data) { return stub_funcs.ptr_g_hook_find_func_data(hook_list, need_valids, func, data); }
GHook * (g_hook_first_valid)(GHookList * hook_list, gboolean may_be_in_call) { return stub_funcs.ptr_g_hook_first_valid(hook_list, may_be_in_call); }
GHook * (g_hook_next_valid)(GHookList * hook_list, GHook * hook, gboolean may_be_in_call) { return stub_funcs.ptr_g_hook_next_valid(hook_list, hook, may_be_in_call); }
gint (g_hook_compare_ids)(GHook * new_hook, GHook * sibling) { return stub_funcs.ptr_g_hook_compare_ids(new_hook, sibling); }
void (g_hook_list_invoke)(GHookList * hook_list, gboolean may_recurse) { stub_funcs.ptr_g_hook_list_invoke(hook_list, may_recurse); }
void (g_hook_list_invoke_check)(GHookList * hook_list, gboolean may_recurse) { stub_funcs.ptr_g_hook_list_invoke_check(hook_list, may_recurse); }
void (g_hook_list_marshal)(GHookList * hook_list, gboolean may_recurse, GHookMarshaller marshaller, gpointer marshal_data) { stub_funcs.ptr_g_hook_list_marshal(hook_list, may_recurse, marshaller, marshal_data); }
void (g_hook_list_marshal_check)(GHookList * hook_list, gboolean may_recurse, GHookCheckMarshaller marshaller, gpointer marshal_data) { stub_funcs.ptr_g_hook_list_marshal_check(hook_list, may_recurse, marshaller, marshal_data); }
gboolean (g_hostname_is_non_ascii)(const gchar * hostname) { return stub_funcs.ptr_g_hostname_is_non_ascii(hostname); }
gboolean (g_hostname_is_ascii_encoded)(const gchar * hostname) { return stub_funcs.ptr_g_hostname_is_ascii_encoded(hostname); }
gboolean (g_hostname_is_ip_address)(const gchar * hostname) { return stub_funcs.ptr_g_hostname_is_ip_address(hostname); }
gchar * (g_hostname_to_ascii)(const gchar * hostname) { return stub_funcs.ptr_g_hostname_to_ascii(hostname); }
gchar * (g_hostname_to_unicode)(const gchar * hostname) { return stub_funcs.ptr_g_hostname_to_unicode(hostname); }
gint (g_poll)(GPollFD * fds, guint nfds, gint timeout) { return stub_funcs.ptr_g_poll(fds, nfds, timeout); }
GSList * (g_slist_alloc)(void) { return stub_funcs.ptr_g_slist_alloc(); }
void (g_slist_free)(GSList * list) { stub_funcs.ptr_g_slist_free(list); }
void (g_slist_free_1)(GSList * list) { stub_funcs.ptr_g_slist_free_1(list); }
void (g_slist_free_full)(GSList * list, GDestroyNotify free_func) { stub_funcs.ptr_g_slist_free_full(list, free_func); }
GSList * (g_slist_append)(GSList * list, gpointer data) { return stub_funcs.ptr_g_slist_append(list, data); }
GSList * (g_slist_prepend)(GSList * list, gpointer data) { return stub_funcs.ptr_g_slist_prepend(list, data); }
GSList * (g_slist_insert)(GSList * list, gpointer data, gint position) { return stub_funcs.ptr_g_slist_insert(list, data, position); }
GSList * (g_slist_insert_sorted)(GSList * list, gpointer data, GCompareFunc func) { return stub_funcs.ptr_g_slist_insert_sorted(list, data, func); }
GSList * (g_slist_insert_sorted_with_data)(GSList * list, gpointer data, GCompareDataFunc func, gpointer user_data) { return stub_funcs.ptr_g_slist_insert_sorted_with_data(list, data, func, user_data); }
GSList * (g_slist_insert_before)(GSList * slist, GSList * sibling, gpointer data) { return stub_funcs.ptr_g_slist_insert_before(slist, sibling, data); }
GSList * (g_slist_concat)(GSList * list1, GSList * list2) { return stub_funcs.ptr_g_slist_concat(list1, list2); }
GSList * (g_slist_remove)(GSList * list, gconstpointer data) { return stub_funcs.ptr_g_slist_remove(list, data); }
GSList * (g_slist_remove_all)(GSList * list, gconstpointer data) { return stub_funcs.ptr_g_slist_remove_all(list, data); }
GSList * (g_slist_remove_link)(GSList * list, GSList * link_) { return stub_funcs.ptr_g_slist_remove_link(list, link_); }
GSList * (g_slist_delete_link)(GSList * list, GSList * link_) { return stub_funcs.ptr_g_slist_delete_link(list, link_); }
GSList * (g_slist_reverse)(GSList * list) { return stub_funcs.ptr_g_slist_reverse(list); }
GSList * (g_slist_copy)(GSList * list) { return stub_funcs.ptr_g_slist_copy(list); }
GSList * (g_slist_copy_deep)(GSList * list, GCopyFunc func, gpointer user_data) { return stub_funcs.ptr_g_slist_copy_deep(list, func, user_data); }
GSList * (g_slist_nth)(GSList * list, guint n) { return stub_funcs.ptr_g_slist_nth(list, n); }
GSList * (g_slist_find)(GSList * list, gconstpointer data) { return stub_funcs.ptr_g_slist_find(list, data); }
GSList * (g_slist_find_custom)(GSList * list, gconstpointer data, GCompareFunc func) { return stub_funcs.ptr_g_slist_find_custom(list, data, func); }
gint (g_slist_position)(GSList * list, GSList * llink) { return stub_funcs.ptr_g_slist_position(list, llink); }
gint (g_slist_index)(GSList * list, gconstpointer data) { return stub_funcs.ptr_g_slist_index(list, data); }
GSList * (g_slist_last)(GSList * list) { return stub_funcs.ptr_g_slist_last(list); }
guint (g_slist_length)(GSList * list) { return stub_funcs.ptr_g_slist_length(list); }
void (g_slist_foreach)(GSList * list, GFunc func, gpointer user_data) { stub_funcs.ptr_g_slist_foreach(list, func, user_data); }
GSList * (g_slist_sort)(GSList * list, GCompareFunc compare_func) { return stub_funcs.ptr_g_slist_sort(list, compare_func); }
GSList * (g_slist_sort_with_data)(GSList * list, GCompareDataFunc compare_func, gpointer user_data) { return stub_funcs.ptr_g_slist_sort_with_data(list, compare_func, user_data); }
gpointer (g_slist_nth_data)(GSList * list, guint n) { return stub_funcs.ptr_g_slist_nth_data(list, n); }
void (g_clear_slist)(GSList * * slist_ptr, GDestroyNotify destroy) { stub_funcs.ptr_g_clear_slist(slist_ptr, destroy); }
GMainContext * (g_main_context_new)(void) { return stub_funcs.ptr_g_main_context_new(); }
GMainContext * (g_main_context_new_with_flags)(GMainContextFlags flags) { return stub_funcs.ptr_g_main_context_new_with_flags(flags); }
GMainContext * (g_main_context_ref)(GMainContext * context) { return stub_funcs.ptr_g_main_context_ref(context); }
void (g_main_context_unref)(GMainContext * context) { stub_funcs.ptr_g_main_context_unref(context); }
GMainContext * (g_main_context_default)(void) { return stub_funcs.ptr_g_main_context_default(); }
gboolean (g_main_context_iteration)(GMainContext * context, gboolean may_block) { return stub_funcs.ptr_g_main_context_iteration(context, may_block); }
gboolean (g_main_context_pending)(GMainContext * context) { return stub_funcs.ptr_g_main_context_pending(context); }
GSource * (g_main_context_find_source_by_id)(GMainContext * context, guint source_id) { return stub_funcs.ptr_g_main_context_find_source_by_id(context, source_id); }
GSource * (g_main_context_find_source_by_user_data)(GMainContext * context, gpointer user_data) { return stub_funcs.ptr_g_main_context_find_source_by_user_data(context, user_data); }
GSource * (g_main_context_find_source_by_funcs_user_data)(GMainContext * context, GSourceFuncs * funcs, gpointer user_data) { return stub_funcs.ptr_g_main_context_find_source_by_funcs_user_data(context, funcs, user_data); }
void (g_main_context_wakeup)(GMainContext * context) { stub_funcs.ptr_g_main_context_wakeup(context); }
gboolean (g_main_context_acquire)(GMainContext * context) { return stub_funcs.ptr_g_main_context_acquire(context); }
void (g_main_context_release)(GMainContext * context) { stub_funcs.ptr_g_main_context_release(context); }
gboolean (g_main_context_is_owner)(GMainContext * context) { return stub_funcs.ptr_g_main_context_is_owner(context); }
gboolean (g_main_context_wait)(GMainContext * context, GCond * cond, GMutex * mutex) { return stub_funcs.ptr_g_main_context_wait(context, cond, mutex); }
gboolean (g_main_context_prepare)(GMainContext * context, gint * priority) { return stub_funcs.ptr_g_main_context_prepare(context, priority); }
gint (g_main_context_query)(GMainContext * context, gint max_priority, gint * timeout_, GPollFD * fds, gint n_fds) { return stub_funcs.ptr_g_main_context_query(context, max_priority, timeout_, fds, n_fds); }
gboolean (g_main_context_check)(GMainContext * context, gint max_priority, GPollFD * fds, gint n_fds) { return stub_funcs.ptr_g_main_context_check(context, max_priority, fds, n_fds); }
void (g_main_context_dispatch)(GMainContext * context) { stub_funcs.ptr_g_main_context_dispatch(context); }
void (g_main_context_set_poll_func)(GMainContext * context, GPollFunc func) { stub_funcs.ptr_g_main_context_set_poll_func(context, func); }
GPollFunc (g_main_context_get_poll_func)(GMainContext * context) { return stub_funcs.ptr_g_main_context_get_poll_func(context); }
void (g_main_context_add_poll)(GMainContext * context, GPollFD * fd, gint priority) { stub_funcs.ptr_g_main_context_add_poll(context, fd, priority); }
void (g_main_context_remove_poll)(GMainContext * context, GPollFD * fd) { stub_funcs.ptr_g_main_context_remove_poll(context, fd); }
gint (g_main_depth)(void) { return stub_funcs.ptr_g_main_depth(); }
GSource * (g_main_current_source)(void) { return stub_funcs.ptr_g_main_current_source(); }
void (g_main_context_push_thread_default)(GMainContext * context) { stub_funcs.ptr_g_main_context_push_thread_default(context); }
void (g_main_context_pop_thread_default)(GMainContext * context) { stub_funcs.ptr_g_main_context_pop_thread_default(context); }
GMainContext * (g_main_context_get_thread_default)(void) { return stub_funcs.ptr_g_main_context_get_thread_default(); }
GMainContext * (g_main_context_ref_thread_default)(void) { return stub_funcs.ptr_g_main_context_ref_thread_default(); }
GMainLoop * (g_main_loop_new)(GMainContext * context, gboolean is_running) { return stub_funcs.ptr_g_main_loop_new(context, is_running); }
void (g_main_loop_run)(GMainLoop * loop) { stub_funcs.ptr_g_main_loop_run(loop); }
void (g_main_loop_quit)(GMainLoop * loop) { stub_funcs.ptr_g_main_loop_quit(loop); }
GMainLoop * (g_main_loop_ref)(GMainLoop * loop) { return stub_funcs.ptr_g_main_loop_ref(loop); }
void (g_main_loop_unref)(GMainLoop * loop) { stub_funcs.ptr_g_main_loop_unref(loop); }
gboolean (g_main_loop_is_running)(GMainLoop * loop) { return stub_funcs.ptr_g_main_loop_is_running(loop); }
GMainContext * (g_main_loop_get_context)(GMainLoop * loop) { return stub_funcs.ptr_g_main_loop_get_context(loop); }
GSource * (g_source_new)(GSourceFuncs * source_funcs, guint struct_size) { return stub_funcs.ptr_g_source_new(source_funcs, struct_size); }
void (g_source_set_dispose_function)(GSource * source, GSourceDisposeFunc dispose) { stub_funcs.ptr_g_source_set_dispose_function(source, dispose); }
GSource * (g_source_ref)(GSource * source) { return stub_funcs.ptr_g_source_ref(source); }
void (g_source_unref)(GSource * source) { stub_funcs.ptr_g_source_unref(source); }
guint (g_source_attach)(GSource * source, GMainContext * context) { return stub_funcs.ptr_g_source_attach(source, context); }
void (g_source_destroy)(GSource * source) { stub_funcs.ptr_g_source_destroy(source); }
void (g_source_set_priority)(GSource * source, gint priority) { stub_funcs.ptr_g_source_set_priority(source, priority); }
gint (g_source_get_priority)(GSource * source) { return stub_funcs.ptr_g_source_get_priority(source); }
void (g_source_set_can_recurse)(GSource * source, gboolean can_recurse) { stub_funcs.ptr_g_source_set_can_recurse(source, can_recurse); }
gboolean (g_source_get_can_recurse)(GSource * source) { return stub_funcs.ptr_g_source_get_can_recurse(source); }
guint (g_source_get_id)(GSource * source) { return stub_funcs.ptr_g_source_get_id(source); }
GMainContext * (g_source_get_context)(GSource * source) { return stub_funcs.ptr_g_source_get_context(source); }
void (g_source_set_callback)(GSource * source, GSourceFunc func, gpointer data, GDestroyNotify notify) { stub_funcs.ptr_g_source_set_callback(source, func, data, notify); }
void (g_source_set_funcs)(GSource * source, GSourceFuncs * funcs) { stub_funcs.ptr_g_source_set_funcs(source, funcs); }
gboolean (g_source_is_destroyed)(GSource * source) { return stub_funcs.ptr_g_source_is_destroyed(source); }
void (g_source_set_name)(GSource * source, const char * name) { stub_funcs.ptr_g_source_set_name(source, name); }
void (g_source_set_static_name)(GSource * source, const char * name) { stub_funcs.ptr_g_source_set_static_name(source, name); }
const char * (g_source_get_name)(GSource * source) { return stub_funcs.ptr_g_source_get_name(source); }
void (g_source_set_name_by_id)(guint tag, const char * name) { stub_funcs.ptr_g_source_set_name_by_id(tag, name); }
void (g_source_set_ready_time)(GSource * source, gint64 ready_time) { stub_funcs.ptr_g_source_set_ready_time(source, ready_time); }
gint64 (g_source_get_ready_time)(GSource * source) { return stub_funcs.ptr_g_source_get_ready_time(source); }
gpointer (g_source_add_unix_fd)(GSource * source, gint fd, GIOCondition events) { return stub_funcs.ptr_g_source_add_unix_fd(source, fd, events); }
void (g_source_modify_unix_fd)(GSource * source, gpointer tag, GIOCondition new_events) { stub_funcs.ptr_g_source_modify_unix_fd(source, tag, new_events); }
void (g_source_remove_unix_fd)(GSource * source, gpointer tag) { stub_funcs.ptr_g_source_remove_unix_fd(source, tag); }
GIOCondition (g_source_query_unix_fd)(GSource * source, gpointer tag) { return stub_funcs.ptr_g_source_query_unix_fd(source, tag); }
void (g_source_set_callback_indirect)(GSource * source, gpointer callback_data, GSourceCallbackFuncs * callback_funcs) { stub_funcs.ptr_g_source_set_callback_indirect(source, callback_data, callback_funcs); }
void (g_source_add_poll)(GSource * source, GPollFD * fd) { stub_funcs.ptr_g_source_add_poll(source, fd); }
void (g_source_remove_poll)(GSource * source, GPollFD * fd) { stub_funcs.ptr_g_source_remove_poll(source, fd); }
void (g_source_add_child_source)(GSource * source, GSource * child_source) { stub_funcs.ptr_g_source_add_child_source(source, child_source); }
void (g_source_remove_child_source)(GSource * source, GSource * child_source) { stub_funcs.ptr_g_source_remove_child_source(source, child_source); }
void (g_source_get_current_time)(GSource * source, GTimeVal * timeval) { stub_funcs.ptr_g_source_get_current_time(source, timeval); }
gint64 (g_source_get_time)(GSource * source) { return stub_funcs.ptr_g_source_get_time(source); }
GSource * (g_idle_source_new)(void) { return stub_funcs.ptr_g_idle_source_new(); }
GSource * (g_child_watch_source_new)(GPid pid) { return stub_funcs.ptr_g_child_watch_source_new(pid); }
GSource * (g_timeout_source_new)(guint interval) { return stub_funcs.ptr_g_timeout_source_new(interval); }
GSource * (g_timeout_source_new_seconds)(guint interval) { return stub_funcs.ptr_g_timeout_source_new_seconds(interval); }
void (g_get_current_time)(GTimeVal * result) { stub_funcs.ptr_g_get_current_time(result); }
gint64 (g_get_monotonic_time)(void) { return stub_funcs.ptr_g_get_monotonic_time(); }
gint64 (g_get_real_time)(void) { return stub_funcs.ptr_g_get_real_time(); }
gboolean (g_source_remove)(guint tag) { return stub_funcs.ptr_g_source_remove(tag); }
gboolean (g_source_remove_by_user_data)(gpointer user_data) { return stub_funcs.ptr_g_source_remove_by_user_data(user_data); }
gboolean (g_source_remove_by_funcs_user_data)(GSourceFuncs * funcs, gpointer user_data) { return stub_funcs.ptr_g_source_remove_by_funcs_user_data(funcs, user_data); }
void (g_clear_handle_id)(guint * tag_ptr, GClearHandleFunc clear_func) { stub_funcs.ptr_g_clear_handle_id(tag_ptr, clear_func); }
guint (g_timeout_add_full)(gint priority, guint interval, GSourceFunc function, gpointer data, GDestroyNotify notify) { return stub_funcs.ptr_g_timeout_add_full(priority, interval, function, data, notify); }
guint (g_timeout_add)(guint interval, GSourceFunc function, gpointer data) { return stub_funcs.ptr_g_timeout_add(interval, function, data); }
guint (g_timeout_add_once)(guint interval, GSourceOnceFunc function, gpointer data) { return stub_funcs.ptr_g_timeout_add_once(interval, function, data); }
guint (g_timeout_add_seconds_full)(gint priority, guint interval, GSourceFunc function, gpointer data, GDestroyNotify notify) { return stub_funcs.ptr_g_timeout_add_seconds_full(priority, interval, function, data, notify); }
guint (g_timeout_add_seconds)(guint interval, GSourceFunc function, gpointer data) { return stub_funcs.ptr_g_timeout_add_seconds(interval, function, data); }
guint (g_timeout_add_seconds_once)(guint interval, GSourceOnceFunc function, gpointer data) { return stub_funcs.ptr_g_timeout_add_seconds_once(interval, function, data); }
guint (g_child_watch_add_full)(gint priority, GPid pid, GChildWatchFunc function, gpointer data, GDestroyNotify notify) { return stub_funcs.ptr_g_child_watch_add_full(priority, pid, function, data, notify); }
guint (g_child_watch_add)(GPid pid, GChildWatchFunc function, gpointer data) { return stub_funcs.ptr_g_child_watch_add(pid, function, data); }
guint (g_idle_add)(GSourceFunc function, gpointer data) { return stub_funcs.ptr_g_idle_add(function, data); }
guint (g_idle_add_full)(gint priority, GSourceFunc function, gpointer data, GDestroyNotify notify) { return stub_funcs.ptr_g_idle_add_full(priority, function, data, notify); }
guint (g_idle_add_once)(GSourceOnceFunc function, gpointer data) { return stub_funcs.ptr_g_idle_add_once(function, data); }
gboolean (g_idle_remove_by_data)(gpointer data) { return stub_funcs.ptr_g_idle_remove_by_data(data); }
void (g_main_context_invoke_full)(GMainContext * context, gint priority, GSourceFunc function, gpointer data, GDestroyNotify notify) { stub_funcs.ptr_g_main_context_invoke_full(context, priority, function, data, notify); }
void (g_main_context_invoke)(GMainContext * context, GSourceFunc function, gpointer data) { stub_funcs.ptr_g_main_context_invoke(context, function, data); }
guint32 (g_unicode_script_to_iso15924)(GUnicodeScript script) { return stub_funcs.ptr_g_unicode_script_to_iso15924(script); }
GUnicodeScript (g_unicode_script_from_iso15924)(guint32 iso15924) { return stub_funcs.ptr_g_unicode_script_from_iso15924(iso15924); }
gboolean (g_unichar_isalnum)(gunichar c) { return stub_funcs.ptr_g_unichar_isalnum(c); }
gboolean (g_unichar_isalpha)(gunichar c) { return stub_funcs.ptr_g_unichar_isalpha(c); }
gboolean (g_unichar_iscntrl)(gunichar c) { return stub_funcs.ptr_g_unichar_iscntrl(c); }
gboolean (g_unichar_isdigit)(gunichar c) { return stub_funcs.ptr_g_unichar_isdigit(c); }
gboolean (g_unichar_isgraph)(gunichar c) { return stub_funcs.ptr_g_unichar_isgraph(c); }
gboolean (g_unichar_islower)(gunichar c) { return stub_funcs.ptr_g_unichar_islower(c); }
gboolean (g_unichar_isprint)(gunichar c) { return stub_funcs.ptr_g_unichar_isprint(c); }
gboolean (g_unichar_ispunct)(gunichar c) { return stub_funcs.ptr_g_unichar_ispunct(c); }
gboolean (g_unichar_isspace)(gunichar c) { return stub_funcs.ptr_g_unichar_isspace(c); }
gboolean (g_unichar_isupper)(gunichar c) { return stub_funcs.ptr_g_unichar_isupper(c); }
gboolean (g_unichar_isxdigit)(gunichar c) { return stub_funcs.ptr_g_unichar_isxdigit(c); }
gboolean (g_unichar_istitle)(gunichar c) { return stub_funcs.ptr_g_unichar_istitle(c); }
gboolean (g_unichar_isdefined)(gunichar c) { return stub_funcs.ptr_g_unichar_isdefined(c); }
gboolean (g_unichar_iswide)(gunichar c) { return stub_funcs.ptr_g_unichar_iswide(c); }
gboolean (g_unichar_iswide_cjk)(gunichar c) { return stub_funcs.ptr_g_unichar_iswide_cjk(c); }
gboolean (g_unichar_iszerowidth)(gunichar c) { return stub_funcs.ptr_g_unichar_iszerowidth(c); }
gboolean (g_unichar_ismark)(gunichar c) { return stub_funcs.ptr_g_unichar_ismark(c); }
gunichar (g_unichar_toupper)(gunichar c) { return stub_funcs.ptr_g_unichar_toupper(c); }
gunichar (g_unichar_tolower)(gunichar c) { return stub_funcs.ptr_g_unichar_tolower(c); }
gunichar (g_unichar_totitle)(gunichar c) { return stub_funcs.ptr_g_unichar_totitle(c); }
gint (g_unichar_digit_value)(gunichar c) { return stub_funcs.ptr_g_unichar_digit_value(c); }
gint (g_unichar_xdigit_value)(gunichar c) { return stub_funcs.ptr_g_unichar_xdigit_value(c); }
GUnicodeType (g_unichar_type)(gunichar c) { return stub_funcs.ptr_g_unichar_type(c); }
GUnicodeBreakType (g_unichar_break_type)(gunichar c) { return stub_funcs.ptr_g_unichar_break_type(c); }
gint (g_unichar_combining_class)(gunichar uc) { return stub_funcs.ptr_g_unichar_combining_class(uc); }
gboolean (g_unichar_get_mirror_char)(gunichar ch, gunichar * mirrored_ch) { return stub_funcs.ptr_g_unichar_get_mirror_char(ch, mirrored_ch); }
GUnicodeScript (g_unichar_get_script)(gunichar ch) { return stub_funcs.ptr_g_unichar_get_script(ch); }
gboolean (g_unichar_validate)(gunichar ch) { return stub_funcs.ptr_g_unichar_validate(ch); }
gboolean (g_unichar_compose)(gunichar a, gunichar b, gunichar * ch) { return stub_funcs.ptr_g_unichar_compose(a, b, ch); }
gboolean (g_unichar_decompose)(gunichar ch, gunichar * a, gunichar * b) { return stub_funcs.ptr_g_unichar_decompose(ch, a, b); }
gsize (g_unichar_fully_decompose)(gunichar ch, gboolean compat, gunichar * result, gsize result_len) { return stub_funcs.ptr_g_unichar_fully_decompose(ch, compat, result, result_len); }
void (g_unicode_canonical_ordering)(gunichar * string, gsize len) { stub_funcs.ptr_g_unicode_canonical_ordering(string, len); }
gunichar * (g_unicode_canonical_decomposition)(gunichar ch, gsize * result_len) { return stub_funcs.ptr_g_unicode_canonical_decomposition(ch, result_len); }
gunichar (g_utf8_get_char)(const gchar * p) { return stub_funcs.ptr_g_utf8_get_char(p); }
gunichar (g_utf8_get_char_validated)(const gchar * p, gssize max_len) { return stub_funcs.ptr_g_utf8_get_char_validated(p, max_len); }
gchar * (g_utf8_offset_to_pointer)(const gchar * str, glong offset) { return stub_funcs.ptr_g_utf8_offset_to_pointer(str, offset); }
glong (g_utf8_pointer_to_offset)(const gchar * str, const gchar * pos) { return stub_funcs.ptr_g_utf8_pointer_to_offset(str, pos); }
gchar * (g_utf8_prev_char)(const gchar * p) { return stub_funcs.ptr_g_utf8_prev_char(p); }
gchar * (g_utf8_find_next_char)(const gchar * p, const gchar * end) { return stub_funcs.ptr_g_utf8_find_next_char(p, end); }
gchar * (g_utf8_find_prev_char)(const gchar * str, const gchar * p) { return stub_funcs.ptr_g_utf8_find_prev_char(str, p); }
glong (g_utf8_strlen)(const gchar * p, gssize max) { return stub_funcs.ptr_g_utf8_strlen(p, max); }
gchar * (g_utf8_substring)(const gchar * str, glong start_pos, glong end_pos) { return stub_funcs.ptr_g_utf8_substring(str, start_pos, end_pos); }
gchar * (g_utf8_strncpy)(gchar * dest, const gchar * src, gsize n) { return stub_funcs.ptr_g_utf8_strncpy(dest, src, n); }
gchar * (g_utf8_truncate_middle)(const gchar * string, gsize truncate_length) { return stub_funcs.ptr_g_utf8_truncate_middle(string, truncate_length); }
gchar * (g_utf8_strchr)(const gchar * p, gssize len, gunichar c) { return stub_funcs.ptr_g_utf8_strchr(p, len, c); }
gchar * (g_utf8_strrchr)(const gchar * p, gssize len, gunichar c) { return stub_funcs.ptr_g_utf8_strrchr(p, len, c); }
gchar * (g_utf8_strreverse)(const gchar * str, gssize len) { return stub_funcs.ptr_g_utf8_strreverse(str, len); }
gunichar2 * (g_utf8_to_utf16)(const gchar * str, glong len, glong * items_read, glong * items_written, GError * * error) { return stub_funcs.ptr_g_utf8_to_utf16(str, len, items_read, items_written, error); }
gunichar * (g_utf8_to_ucs4)(const gchar * str, glong len, glong * items_read, glong * items_written, GError * * error) { return stub_funcs.ptr_g_utf8_to_ucs4(str, len, items_read, items_written, error); }
gunichar * (g_utf8_to_ucs4_fast)(const gchar * str, glong len, glong * items_written) { return stub_funcs.ptr_g_utf8_to_ucs4_fast(str, len, items_written); }
gunichar * (g_utf16_to_ucs4)(const gunichar2 * str, glong len, glong * items_read, glong * items_written, GError * * error) { return stub_funcs.ptr_g_utf16_to_ucs4(str, len, items_read, items_written, error); }
gchar * (g_utf16_to_utf8)(const gunichar2 * str, glong len, glong * items_read, glong * items_written, GError * * error) { return stub_funcs.ptr_g_utf16_to_utf8(str, len, items_read, items_written, error); }
gunichar2 * (g_ucs4_to_utf16)(const gunichar * str, glong len, glong * items_read, glong * items_written, GError * * error) { return stub_funcs.ptr_g_ucs4_to_utf16(str, len, items_read, items_written, error); }
gchar * (g_ucs4_to_utf8)(const gunichar * str, glong len, glong * items_read, glong * items_written, GError * * error) { return stub_funcs.ptr_g_ucs4_to_utf8(str, len, items_read, items_written, error); }
gint (g_unichar_to_utf8)(gunichar c, gchar * outbuf) { return stub_funcs.ptr_g_unichar_to_utf8(c, outbuf); }
gboolean (g_utf8_validate)(const gchar * str, gssize max_len, const gchar * * end) { return stub_funcs.ptr_g_utf8_validate(str, max_len, end); }
gboolean (g_utf8_validate_len)(const gchar * str, gsize max_len, const gchar * * end) { return stub_funcs.ptr_g_utf8_validate_len(str, max_len, end); }
gchar * (g_utf8_strup)(const gchar * str, gssize len) { return stub_funcs.ptr_g_utf8_strup(str, len); }
gchar * (g_utf8_strdown)(const gchar * str, gssize len) { return stub_funcs.ptr_g_utf8_strdown(str, len); }
gchar * (g_utf8_casefold)(const gchar * str, gssize len) { return stub_funcs.ptr_g_utf8_casefold(str, len); }
gchar * (g_utf8_normalize)(const gchar * str, gssize len, GNormalizeMode mode) { return stub_funcs.ptr_g_utf8_normalize(str, len, mode); }
gint (g_utf8_collate)(const gchar * str1, const gchar * str2) { return stub_funcs.ptr_g_utf8_collate(str1, str2); }
gchar * (g_utf8_collate_key)(const gchar * str, gssize len) { return stub_funcs.ptr_g_utf8_collate_key(str, len); }
gchar * (g_utf8_collate_key_for_filename)(const gchar * str, gssize len) { return stub_funcs.ptr_g_utf8_collate_key_for_filename(str, len); }
gchar * (g_utf8_make_valid)(const gchar * str, gssize len) { return stub_funcs.ptr_g_utf8_make_valid(str, len); }
gchar (g_ascii_tolower)(gchar c) { return stub_funcs.ptr_g_ascii_tolower(c); }
gchar (g_ascii_toupper)(gchar c) { return stub_funcs.ptr_g_ascii_toupper(c); }
gint (g_ascii_digit_value)(gchar c) { return stub_funcs.ptr_g_ascii_digit_value(c); }
gint (g_ascii_xdigit_value)(gchar c) { return stub_funcs.ptr_g_ascii_xdigit_value(c); }
gchar * (g_strdelimit)(gchar * string, const gchar * delimiters, gchar new_delimiter) { return stub_funcs.ptr_g_strdelimit(string, delimiters, new_delimiter); }
gchar * (g_strcanon)(gchar * string, const gchar * valid_chars, gchar substitutor) { return stub_funcs.ptr_g_strcanon(string, valid_chars, substitutor); }
const gchar * (g_strerror)(gint errnum) { return stub_funcs.ptr_g_strerror(errnum); }
const gchar * (g_strsignal)(gint signum) { return stub_funcs.ptr_g_strsignal(signum); }
gchar * (g_strreverse)(gchar * string) { return stub_funcs.ptr_g_strreverse(string); }
gsize (g_strlcpy)(gchar * dest, const gchar * src, gsize dest_size) { return stub_funcs.ptr_g_strlcpy(dest, src, dest_size); }
gsize (g_strlcat)(gchar * dest, const gchar * src, gsize dest_size) { return stub_funcs.ptr_g_strlcat(dest, src, dest_size); }
gchar * (g_strstr_len)(const gchar * haystack, gssize haystack_len, const gchar * needle) { return stub_funcs.ptr_g_strstr_len(haystack, haystack_len, needle); }
gchar * (g_strrstr)(const gchar * haystack, const gchar * needle) { return stub_funcs.ptr_g_strrstr(haystack, needle); }
gchar * (g_strrstr_len)(const gchar * haystack, gssize haystack_len, const gchar * needle) { return stub_funcs.ptr_g_strrstr_len(haystack, haystack_len, needle); }
gboolean (g_str_has_suffix)(const gchar * str, const gchar * suffix) { return stub_funcs.ptr_g_str_has_suffix(str, suffix); }
gboolean (g_str_has_prefix)(const gchar * str, const gchar * prefix) { return stub_funcs.ptr_g_str_has_prefix(str, prefix); }
gdouble (g_strtod)(const gchar * nptr, gchar * * endptr) { return stub_funcs.ptr_g_strtod(nptr, endptr); }
gdouble (g_ascii_strtod)(const gchar * nptr, gchar * * endptr) { return stub_funcs.ptr_g_ascii_strtod(nptr, endptr); }
guint64 (g_ascii_strtoull)(const gchar * nptr, gchar * * endptr, guint base) { return stub_funcs.ptr_g_ascii_strtoull(nptr, endptr, base); }
gint64 (g_ascii_strtoll)(const gchar * nptr, gchar * * endptr, guint base) { return stub_funcs.ptr_g_ascii_strtoll(nptr, endptr, base); }
gchar * (g_ascii_dtostr)(gchar * buffer, gint buf_len, gdouble d) { return stub_funcs.ptr_g_ascii_dtostr(buffer, buf_len, d); }
gchar * (g_ascii_formatd)(gchar * buffer, gint buf_len, const gchar * format, gdouble d) { return stub_funcs.ptr_g_ascii_formatd(buffer, buf_len, format, d); }
gchar * (g_strchug)(gchar * string) { return stub_funcs.ptr_g_strchug(string); }
gchar * (g_strchomp)(gchar * string) { return stub_funcs.ptr_g_strchomp(string); }
gint (g_ascii_strcasecmp)(const gchar * s1, const gchar * s2) { return stub_funcs.ptr_g_ascii_strcasecmp(s1, s2); }
gint (g_ascii_strncasecmp)(const gchar * s1, const gchar * s2, gsize n) { return stub_funcs.ptr_g_ascii_strncasecmp(s1, s2, n); }
gchar * (g_ascii_strdown)(const gchar * str, gssize len) { return stub_funcs.ptr_g_ascii_strdown(str, len); }
gchar * (g_ascii_strup)(const gchar * str, gssize len) { return stub_funcs.ptr_g_ascii_strup(str, len); }
gboolean (g_str_is_ascii)(const gchar * str) { return stub_funcs.ptr_g_str_is_ascii(str); }
gint (g_strcasecmp)(const gchar * s1, const gchar * s2) { return stub_funcs.ptr_g_strcasecmp(s1, s2); }
gint (g_strncasecmp)(const gchar * s1, const gchar * s2, guint n) { return stub_funcs.ptr_g_strncasecmp(s1, s2, n); }
gchar * (g_strdown)(gchar * string) { return stub_funcs.ptr_g_strdown(string); }
gchar * (g_strup)(gchar * string) { return stub_funcs.ptr_g_strup(string); }
gchar * (g_strdup)(const gchar * str) { return stub_funcs.ptr_g_strdup(str); }
gchar * (g_strdup_printf)(const gchar * format, ...) { gchar * ret; va_list vaargs; va_start(vaargs, format); ret = stub_funcs.ptr_g_strdup_vprintf(format, vaargs); va_end(vaargs); return ret; }
gchar * (g_strdup_vprintf)(const gchar * format, va_list args) { return stub_funcs.ptr_g_strdup_vprintf(format, args); }
gchar * (g_strndup)(const gchar * str, gsize n) { return stub_funcs.ptr_g_strndup(str, n); }
gchar * (g_strnfill)(gsize length, gchar fill_char) { return stub_funcs.ptr_g_strnfill(length, fill_char); }
gchar * (g_strcompress)(const gchar * source) { return stub_funcs.ptr_g_strcompress(source); }
gchar * (g_strescape)(const gchar * source, const gchar * exceptions) { return stub_funcs.ptr_g_strescape(source, exceptions); }
gpointer (g_memdup)(gconstpointer mem, guint byte_size) { return stub_funcs.ptr_g_memdup(mem, byte_size); }
gpointer (g_memdup2)(gconstpointer mem, gsize byte_size) { return stub_funcs.ptr_g_memdup2(mem, byte_size); }
gchar * * (g_strsplit)(const gchar * string, const gchar * delimiter, gint max_tokens) { return stub_funcs.ptr_g_strsplit(string, delimiter, max_tokens); }
gchar * * (g_strsplit_set)(const gchar * string, const gchar * delimiters, gint max_tokens) { return stub_funcs.ptr_g_strsplit_set(string, delimiters, max_tokens); }
gchar * (g_strjoinv)(const gchar * separator, gchar * * str_array) { return stub_funcs.ptr_g_strjoinv(separator, str_array); }
void (g_strfreev)(gchar * * str_array) { stub_funcs.ptr_g_strfreev(str_array); }
gchar * * (g_strdupv)(gchar * * str_array) { return stub_funcs.ptr_g_strdupv(str_array); }
guint (g_strv_length)(gchar * * str_array) { return stub_funcs.ptr_g_strv_length(str_array); }
gchar * (g_stpcpy)(gchar * dest, const char * src) { return stub_funcs.ptr_g_stpcpy(dest, src); }
gchar * (g_str_to_ascii)(const gchar * str, const gchar * from_locale) { return stub_funcs.ptr_g_str_to_ascii(str, from_locale); }
gchar * * (g_str_tokenize_and_fold)(const gchar * string, const gchar * translit_locale, gchar * * * ascii_alternates) { return stub_funcs.ptr_g_str_tokenize_and_fold(string, translit_locale, ascii_alternates); }
gboolean (g_str_match_string)(const gchar * search_term, const gchar * potential_hit, gboolean accept_alternates) { return stub_funcs.ptr_g_str_match_string(search_term, potential_hit, accept_alternates); }
gboolean (g_strv_contains)(const gchar * const * strv, const gchar * str) { return stub_funcs.ptr_g_strv_contains(strv, str); }
gboolean (g_strv_equal)(const gchar * const * strv1, const gchar * const * strv2) { return stub_funcs.ptr_g_strv_equal(strv1, strv2); }
GQuark (g_number_parser_error_quark)(void) { return stub_funcs.ptr_g_number_parser_error_quark(); }
gboolean (g_ascii_string_to_signed)(const gchar * str, guint base, gint64 min, gint64 max, gint64 * out_num, GError * * error) { return stub_funcs.ptr_g_ascii_string_to_signed(str, base, min, max, out_num, error); }
gboolean (g_ascii_string_to_unsigned)(const gchar * str, guint base, guint64 min, guint64 max, guint64 * out_num, GError * * error) { return stub_funcs.ptr_g_ascii_string_to_unsigned(str, base, min, max, out_num, error); }
GString * (g_string_new)(const gchar * init) { return stub_funcs.ptr_g_string_new(init); }
GString * (g_string_new_take)(gchar * init) { return stub_funcs.ptr_g_string_new_take(init); }
GString * (g_string_new_len)(const gchar * init, gssize len) { return stub_funcs.ptr_g_string_new_len(init, len); }
GString * (g_string_sized_new)(gsize dfl_size) { return stub_funcs.ptr_g_string_sized_new(dfl_size); }
gchar * (g_string_free)(GString * string, gboolean free_segment) { return stub_funcs.ptr_g_string_free(string, free_segment); }
gchar * (g_string_free_and_steal)(GString * string) { return stub_funcs.ptr_g_string_free_and_steal(string); }
GBytes * (g_string_free_to_bytes)(GString * string) { return stub_funcs.ptr_g_string_free_to_bytes(string); }
gboolean (g_string_equal)(const GString * v, const GString * v2) { return stub_funcs.ptr_g_string_equal(v, v2); }
guint (g_string_hash)(const GString * str) { return stub_funcs.ptr_g_string_hash(str); }
GString * (g_string_assign)(GString * string, const gchar * rval) { return stub_funcs.ptr_g_string_assign(string, rval); }
GString * (g_string_truncate)(GString * string, gsize len) { return stub_funcs.ptr_g_string_truncate(string, len); }
GString * (g_string_set_size)(GString * string, gsize len) { return stub_funcs.ptr_g_string_set_size(string, len); }
GString * (g_string_insert_len)(GString * string, gssize pos, const gchar * val, gssize len) { return stub_funcs.ptr_g_string_insert_len(string, pos, val, len); }
GString * (g_string_append)(GString * string, const gchar * val) { return stub_funcs.ptr_g_string_append(string, val); }
GString * (g_string_append_len)(GString * string, const gchar * val, gssize len) { return stub_funcs.ptr_g_string_append_len(string, val, len); }
GString * (g_string_append_c)(GString * string, gchar c) { return stub_funcs.ptr_g_string_append_c(string, c); }
GString * (g_string_append_unichar)(GString * string, gunichar wc) { return stub_funcs.ptr_g_string_append_unichar(string, wc); }
GString * (g_string_prepend)(GString * string, const gchar * val) { return stub_funcs.ptr_g_string_prepend(string, val); }
GString * (g_string_prepend_c)(GString * string, gchar c) { return stub_funcs.ptr_g_string_prepend_c(string, c); }
GString * (g_string_prepend_unichar)(GString * string, gunichar wc) { return stub_funcs.ptr_g_string_prepend_unichar(string, wc); }
GString * (g_string_prepend_len)(GString * string, const gchar * val, gssize len) { return stub_funcs.ptr_g_string_prepend_len(string, val, len); }
GString * (g_string_insert)(GString * string, gssize pos, const gchar * val) { return stub_funcs.ptr_g_string_insert(string, pos, val); }
GString * (g_string_insert_c)(GString * string, gssize pos, gchar c) { return stub_funcs.ptr_g_string_insert_c(string, pos, c); }
GString * (g_string_insert_unichar)(GString * string, gssize pos, gunichar wc) { return stub_funcs.ptr_g_string_insert_unichar(string, pos, wc); }
GString * (g_string_overwrite)(GString * string, gsize pos, const gchar * val) { return stub_funcs.ptr_g_string_overwrite(string, pos, val); }
GString * (g_string_overwrite_len)(GString * string, gsize pos, const gchar * val, gssize len) { return stub_funcs.ptr_g_string_overwrite_len(string, pos, val, len); }
GString * (g_string_erase)(GString * string, gssize pos, gssize len) { return stub_funcs.ptr_g_string_erase(string, pos, len); }
guint (g_string_replace)(GString * string, const gchar * find, const gchar * replace, guint limit) { return stub_funcs.ptr_g_string_replace(string, find, replace, limit); }
GString * (g_string_ascii_down)(GString * string) { return stub_funcs.ptr_g_string_ascii_down(string); }
GString * (g_string_ascii_up)(GString * string) { return stub_funcs.ptr_g_string_ascii_up(string); }
void (g_string_vprintf)(GString * string, const gchar * format, va_list args) { stub_funcs.ptr_g_string_vprintf(string, format, args); }
void (g_string_printf)(GString * string, const gchar * format, ...) { va_list vaargs; va_start(vaargs, format); stub_funcs.ptr_g_string_vprintf(string, format, vaargs); va_end(vaargs); }
void (g_string_append_vprintf)(GString * string, const gchar * format, va_list args) { stub_funcs.ptr_g_string_append_vprintf(string, format, args); }
void (g_string_append_printf)(GString * string, const gchar * format, ...) { va_list vaargs; va_start(vaargs, format); stub_funcs.ptr_g_string_append_vprintf(string, format, vaargs); va_end(vaargs); }
GString * (g_string_append_uri_escaped)(GString * string, const gchar * unescaped, const gchar * reserved_chars_allowed, gboolean allow_utf8) { return stub_funcs.ptr_g_string_append_uri_escaped(string, unescaped, reserved_chars_allowed, allow_utf8); }
GString * (g_string_down)(GString * string) { return stub_funcs.ptr_g_string_down(string); }
GString * (g_string_up)(GString * string) { return stub_funcs.ptr_g_string_up(string); }
void (g_io_channel_init)(GIOChannel * channel) { stub_funcs.ptr_g_io_channel_init(channel); }
GIOChannel * (g_io_channel_ref)(GIOChannel * channel) { return stub_funcs.ptr_g_io_channel_ref(channel); }
void (g_io_channel_unref)(GIOChannel * channel) { stub_funcs.ptr_g_io_channel_unref(channel); }
GIOError (g_io_channel_read)(GIOChannel * channel, gchar * buf, gsize count, gsize * bytes_read) { return stub_funcs.ptr_g_io_channel_read(channel, buf, count, bytes_read); }
GIOError (g_io_channel_write)(GIOChannel * channel, const gchar * buf, gsize count, gsize * bytes_written) { return stub_funcs.ptr_g_io_channel_write(channel, buf, count, bytes_written); }
GIOError (g_io_channel_seek)(GIOChannel * channel, gint64 offset, GSeekType type) { return stub_funcs.ptr_g_io_channel_seek(channel, offset, type); }
void (g_io_channel_close)(GIOChannel * channel) { stub_funcs.ptr_g_io_channel_close(channel); }
GIOStatus (g_io_channel_shutdown)(GIOChannel * channel, gboolean flush, GError * * err) { return stub_funcs.ptr_g_io_channel_shutdown(channel, flush, err); }
guint (g_io_add_watch_full)(GIOChannel * channel, gint priority, GIOCondition condition, GIOFunc func, gpointer user_data, GDestroyNotify notify) { return stub_funcs.ptr_g_io_add_watch_full(channel, priority, condition, func, user_data, notify); }
GSource * (g_io_create_watch)(GIOChannel * channel, GIOCondition condition) { return stub_funcs.ptr_g_io_create_watch(channel, condition); }
guint (g_io_add_watch)(GIOChannel * channel, GIOCondition condition, GIOFunc func, gpointer user_data) { return stub_funcs.ptr_g_io_add_watch(channel, condition, func, user_data); }
void (g_io_channel_set_buffer_size)(GIOChannel * channel, gsize size) { stub_funcs.ptr_g_io_channel_set_buffer_size(channel, size); }
gsize (g_io_channel_get_buffer_size)(GIOChannel * channel) { return stub_funcs.ptr_g_io_channel_get_buffer_size(channel); }
GIOCondition (g_io_channel_get_buffer_condition)(GIOChannel * channel) { return stub_funcs.ptr_g_io_channel_get_buffer_condition(channel); }
GIOStatus (g_io_channel_set_flags)(GIOChannel * channel, GIOFlags flags, GError * * error) { return stub_funcs.ptr_g_io_channel_set_flags(channel, flags, error); }
GIOFlags (g_io_channel_get_flags)(GIOChannel * channel) { return stub_funcs.ptr_g_io_channel_get_flags(channel); }
void (g_io_channel_set_line_term)(GIOChannel * channel, const gchar * line_term, gint length) { stub_funcs.ptr_g_io_channel_set_line_term(channel, line_term, length); }
const gchar * (g_io_channel_get_line_term)(GIOChannel * channel, gint * length) { return stub_funcs.ptr_g_io_channel_get_line_term(channel, length); }
void (g_io_channel_set_buffered)(GIOChannel * channel, gboolean buffered) { stub_funcs.ptr_g_io_channel_set_buffered(channel, buffered); }
gboolean (g_io_channel_get_buffered)(GIOChannel * channel) { return stub_funcs.ptr_g_io_channel_get_buffered(channel); }
GIOStatus (g_io_channel_set_encoding)(GIOChannel * channel, const gchar * encoding, GError * * error) { return stub_funcs.ptr_g_io_channel_set_encoding(channel, encoding, error); }
const gchar * (g_io_channel_get_encoding)(GIOChannel * channel) { return stub_funcs.ptr_g_io_channel_get_encoding(channel); }
void (g_io_channel_set_close_on_unref)(GIOChannel * channel, gboolean do_close) { stub_funcs.ptr_g_io_channel_set_close_on_unref(channel, do_close); }
gboolean (g_io_channel_get_close_on_unref)(GIOChannel * channel) { return stub_funcs.ptr_g_io_channel_get_close_on_unref(channel); }
GIOStatus (g_io_channel_flush)(GIOChannel * channel, GError * * error) { return stub_funcs.ptr_g_io_channel_flush(channel, error); }
GIOStatus (g_io_channel_read_line)(GIOChannel * channel, gchar * * str_return, gsize * length, gsize * terminator_pos, GError * * error) { return stub_funcs.ptr_g_io_channel_read_line(channel, str_return, length, terminator_pos, error); }
GIOStatus (g_io_channel_read_line_string)(GIOChannel * channel, GString * buffer, gsize * terminator_pos, GError * * error) { return stub_funcs.ptr_g_io_channel_read_line_string(channel, buffer, terminator_pos, error); }
GIOStatus (g_io_channel_read_to_end)(GIOChannel * channel, gchar * * str_return, gsize * length, GError * * error) { return stub_funcs.ptr_g_io_channel_read_to_end(channel, str_return, length, error); }
GIOStatus (g_io_channel_read_chars)(GIOChannel * channel, gchar * buf, gsize count, gsize * bytes_read, GError * * error) { return stub_funcs.ptr_g_io_channel_read_chars(channel, buf, count, bytes_read, error); }
GIOStatus (g_io_channel_read_unichar)(GIOChannel * channel, gunichar * thechar, GError * * error) { return stub_funcs.ptr_g_io_channel_read_unichar(channel, thechar, error); }
GIOStatus (g_io_channel_write_chars)(GIOChannel * channel, const gchar * buf, gssize count, gsize * bytes_written, GError * * error) { return stub_funcs.ptr_g_io_channel_write_chars(channel, buf, count, bytes_written, error); }
GIOStatus (g_io_channel_write_unichar)(GIOChannel * channel, gunichar thechar, GError * * error) { return stub_funcs.ptr_g_io_channel_write_unichar(channel, thechar, error); }
GIOStatus (g_io_channel_seek_position)(GIOChannel * channel, gint64 offset, GSeekType type, GError * * error) { return stub_funcs.ptr_g_io_channel_seek_position(channel, offset, type, error); }
GIOChannel * (g_io_channel_new_file)(const gchar * filename, const gchar * mode, GError * * error) { return stub_funcs.ptr_g_io_channel_new_file(filename, mode, error); }
GQuark (g_io_channel_error_quark)(void) { return stub_funcs.ptr_g_io_channel_error_quark(); }
GIOChannelError (g_io_channel_error_from_errno)(gint en) { return stub_funcs.ptr_g_io_channel_error_from_errno(en); }
GIOChannel * (g_io_channel_unix_new)(int fd) { return stub_funcs.ptr_g_io_channel_unix_new(fd); }
gint (g_io_channel_unix_get_fd)(GIOChannel * channel) { return stub_funcs.ptr_g_io_channel_unix_get_fd(channel); }
GQuark (g_key_file_error_quark)(void) { return stub_funcs.ptr_g_key_file_error_quark(); }
GKeyFile * (g_key_file_new)(void) { return stub_funcs.ptr_g_key_file_new(); }
GKeyFile * (g_key_file_ref)(GKeyFile * key_file) { return stub_funcs.ptr_g_key_file_ref(key_file); }
void (g_key_file_unref)(GKeyFile * key_file) { stub_funcs.ptr_g_key_file_unref(key_file); }
void (g_key_file_free)(GKeyFile * key_file) { stub_funcs.ptr_g_key_file_free(key_file); }
void (g_key_file_set_list_separator)(GKeyFile * key_file, gchar separator) { stub_funcs.ptr_g_key_file_set_list_separator(key_file, separator); }
gboolean (g_key_file_load_from_file)(GKeyFile * key_file, const gchar * file, GKeyFileFlags flags, GError * * error) { return stub_funcs.ptr_g_key_file_load_from_file(key_file, file, flags, error); }
gboolean (g_key_file_load_from_data)(GKeyFile * key_file, const gchar * data, gsize length, GKeyFileFlags flags, GError * * error) { return stub_funcs.ptr_g_key_file_load_from_data(key_file, data, length, flags, error); }
gboolean (g_key_file_load_from_bytes)(GKeyFile * key_file, GBytes * bytes, GKeyFileFlags flags, GError * * error) { return stub_funcs.ptr_g_key_file_load_from_bytes(key_file, bytes, flags, error); }
gboolean (g_key_file_load_from_dirs)(GKeyFile * key_file, const gchar * file, const gchar * * search_dirs, gchar * * full_path, GKeyFileFlags flags, GError * * error) { return stub_funcs.ptr_g_key_file_load_from_dirs(key_file, file, search_dirs, full_path, flags, error); }
gboolean (g_key_file_load_from_data_dirs)(GKeyFile * key_file, const gchar * file, gchar * * full_path, GKeyFileFlags flags, GError * * error) { return stub_funcs.ptr_g_key_file_load_from_data_dirs(key_file, file, full_path, flags, error); }
gchar * (g_key_file_to_data)(GKeyFile * key_file, gsize * length, GError * * error) { return stub_funcs.ptr_g_key_file_to_data(key_file, length, error); }
gboolean (g_key_file_save_to_file)(GKeyFile * key_file, const gchar * filename, GError * * error) { return stub_funcs.ptr_g_key_file_save_to_file(key_file, filename, error); }
gchar * (g_key_file_get_start_group)(GKeyFile * key_file) { return stub_funcs.ptr_g_key_file_get_start_group(key_file); }
gchar * * (g_key_file_get_groups)(GKeyFile * key_file, gsize * length) { return stub_funcs.ptr_g_key_file_get_groups(key_file, length); }
gchar * * (g_key_file_get_keys)(GKeyFile * key_file, const gchar * group_name, gsize * length, GError * * error) { return stub_funcs.ptr_g_key_file_get_keys(key_file, group_name, length, error); }
gboolean (g_key_file_has_group)(GKeyFile * key_file, const gchar * group_name) { return stub_funcs.ptr_g_key_file_has_group(key_file, group_name); }
gboolean (g_key_file_has_key)(GKeyFile * key_file, const gchar * group_name, const gchar * key, GError * * error) { return stub_funcs.ptr_g_key_file_has_key(key_file, group_name, key, error); }
gchar * (g_key_file_get_value)(GKeyFile * key_file, const gchar * group_name, const gchar * key, GError * * error) { return stub_funcs.ptr_g_key_file_get_value(key_file, group_name, key, error); }
void (g_key_file_set_value)(GKeyFile * key_file, const gchar * group_name, const gchar * key, const gchar * value) { stub_funcs.ptr_g_key_file_set_value(key_file, group_name, key, value); }
gchar * (g_key_file_get_string)(GKeyFile * key_file, const gchar * group_name, const gchar * key, GError * * error) { return stub_funcs.ptr_g_key_file_get_string(key_file, group_name, key, error); }
void (g_key_file_set_string)(GKeyFile * key_file, const gchar * group_name, const gchar * key, const gchar * string) { stub_funcs.ptr_g_key_file_set_string(key_file, group_name, key, string); }
gchar * (g_key_file_get_locale_string)(GKeyFile * key_file, const gchar * group_name, const gchar * key, const gchar * locale, GError * * error) { return stub_funcs.ptr_g_key_file_get_locale_string(key_file, group_name, key, locale, error); }
gchar * (g_key_file_get_locale_for_key)(GKeyFile * key_file, const gchar * group_name, const gchar * key, const gchar * locale) { return stub_funcs.ptr_g_key_file_get_locale_for_key(key_file, group_name, key, locale); }
void (g_key_file_set_locale_string)(GKeyFile * key_file, const gchar * group_name, const gchar * key, const gchar * locale, const gchar * string) { stub_funcs.ptr_g_key_file_set_locale_string(key_file, group_name, key, locale, string); }
gboolean (g_key_file_get_boolean)(GKeyFile * key_file, const gchar * group_name, const gchar * key, GError * * error) { return stub_funcs.ptr_g_key_file_get_boolean(key_file, group_name, key, error); }
void (g_key_file_set_boolean)(GKeyFile * key_file, const gchar * group_name, const gchar * key, gboolean value) { stub_funcs.ptr_g_key_file_set_boolean(key_file, group_name, key, value); }
gint (g_key_file_get_integer)(GKeyFile * key_file, const gchar * group_name, const gchar * key, GError * * error) { return stub_funcs.ptr_g_key_file_get_integer(key_file, group_name, key, error); }
void (g_key_file_set_integer)(GKeyFile * key_file, const gchar * group_name, const gchar * key, gint value) { stub_funcs.ptr_g_key_file_set_integer(key_file, group_name, key, value); }
gint64 (g_key_file_get_int64)(GKeyFile * key_file, const gchar * group_name, const gchar * key, GError * * error) { return stub_funcs.ptr_g_key_file_get_int64(key_file, group_name, key, error); }
void (g_key_file_set_int64)(GKeyFile * key_file, const gchar * group_name, const gchar * key, gint64 value) { stub_funcs.ptr_g_key_file_set_int64(key_file, group_name, key, value); }
guint64 (g_key_file_get_uint64)(GKeyFile * key_file, const gchar * group_name, const gchar * key, GError * * error) { return stub_funcs.ptr_g_key_file_get_uint64(key_file, group_name, key, error); }
void (g_key_file_set_uint64)(GKeyFile * key_file, const gchar * group_name, const gchar * key, guint64 value) { stub_funcs.ptr_g_key_file_set_uint64(key_file, group_name, key, value); }
gdouble (g_key_file_get_double)(GKeyFile * key_file, const gchar * group_name, const gchar * key, GError * * error) { return stub_funcs.ptr_g_key_file_get_double(key_file, group_name, key, error); }
void (g_key_file_set_double)(GKeyFile * key_file, const gchar * group_name, const gchar * key, gdouble value) { stub_funcs.ptr_g_key_file_set_double(key_file, group_name, key, value); }
gchar * * (g_key_file_get_string_list)(GKeyFile * key_file, const gchar * group_name, const gchar * key, gsize * length, GError * * error) { return stub_funcs.ptr_g_key_file_get_string_list(key_file, group_name, key, length, error); }
void (g_key_file_set_string_list)(GKeyFile * key_file, const gchar * group_name, const gchar * key, const gchar * const list[], gsize length) { stub_funcs.ptr_g_key_file_set_string_list(key_file, group_name, key, list, length); }
gchar * * (g_key_file_get_locale_string_list)(GKeyFile * key_file, const gchar * group_name, const gchar * key, const gchar * locale, gsize * length, GError * * error) { return stub_funcs.ptr_g_key_file_get_locale_string_list(key_file, group_name, key, locale, length, error); }
void (g_key_file_set_locale_string_list)(GKeyFile * key_file, const gchar * group_name, const gchar * key, const gchar * locale, const gchar * const list[], gsize length) { stub_funcs.ptr_g_key_file_set_locale_string_list(key_file, group_name, key, locale, list, length); }
gboolean * (g_key_file_get_boolean_list)(GKeyFile * key_file, const gchar * group_name, const gchar * key, gsize * length, GError * * error) { return stub_funcs.ptr_g_key_file_get_boolean_list(key_file, group_name, key, length, error); }
void (g_key_file_set_boolean_list)(GKeyFile * key_file, const gchar * group_name, const gchar * key, gboolean list[], gsize length) { stub_funcs.ptr_g_key_file_set_boolean_list(key_file, group_name, key, list, length); }
gint * (g_key_file_get_integer_list)(GKeyFile * key_file, const gchar * group_name, const gchar * key, gsize * length, GError * * error) { return stub_funcs.ptr_g_key_file_get_integer_list(key_file, group_name, key, length, error); }
void (g_key_file_set_double_list)(GKeyFile * key_file, const gchar * group_name, const gchar * key, gdouble list[], gsize length) { stub_funcs.ptr_g_key_file_set_double_list(key_file, group_name, key, list, length); }
gdouble * (g_key_file_get_double_list)(GKeyFile * key_file, const gchar * group_name, const gchar * key, gsize * length, GError * * error) { return stub_funcs.ptr_g_key_file_get_double_list(key_file, group_name, key, length, error); }
void (g_key_file_set_integer_list)(GKeyFile * key_file, const gchar * group_name, const gchar * key, gint list[], gsize length) { stub_funcs.ptr_g_key_file_set_integer_list(key_file, group_name, key, list, length); }
gboolean (g_key_file_set_comment)(GKeyFile * key_file, const gchar * group_name, const gchar * key, const gchar * comment, GError * * error) { return stub_funcs.ptr_g_key_file_set_comment(key_file, group_name, key, comment, error); }
gchar * (g_key_file_get_comment)(GKeyFile * key_file, const gchar * group_name, const gchar * key, GError * * error) { return stub_funcs.ptr_g_key_file_get_comment(key_file, group_name, key, error); }
gboolean (g_key_file_remove_comment)(GKeyFile * key_file, const gchar * group_name, const gchar * key, GError * * error) { return stub_funcs.ptr_g_key_file_remove_comment(key_file, group_name, key, error); }
gboolean (g_key_file_remove_key)(GKeyFile * key_file, const gchar * group_name, const gchar * key, GError * * error) { return stub_funcs.ptr_g_key_file_remove_key(key_file, group_name, key, error); }
gboolean (g_key_file_remove_group)(GKeyFile * key_file, const gchar * group_name, GError * * error) { return stub_funcs.ptr_g_key_file_remove_group(key_file, group_name, error); }
GMappedFile * (g_mapped_file_new)(const gchar * filename, gboolean writable, GError * * error) { return stub_funcs.ptr_g_mapped_file_new(filename, writable, error); }
GMappedFile * (g_mapped_file_new_from_fd)(gint fd, gboolean writable, GError * * error) { return stub_funcs.ptr_g_mapped_file_new_from_fd(fd, writable, error); }
gsize (g_mapped_file_get_length)(GMappedFile * file) { return stub_funcs.ptr_g_mapped_file_get_length(file); }
gchar * (g_mapped_file_get_contents)(GMappedFile * file) { return stub_funcs.ptr_g_mapped_file_get_contents(file); }
GBytes * (g_mapped_file_get_bytes)(GMappedFile * file) { return stub_funcs.ptr_g_mapped_file_get_bytes(file); }
GMappedFile * (g_mapped_file_ref)(GMappedFile * file) { return stub_funcs.ptr_g_mapped_file_ref(file); }
void (g_mapped_file_unref)(GMappedFile * file) { stub_funcs.ptr_g_mapped_file_unref(file); }
void (g_mapped_file_free)(GMappedFile * file) { stub_funcs.ptr_g_mapped_file_free(file); }
GQuark (g_markup_error_quark)(void) { return stub_funcs.ptr_g_markup_error_quark(); }
GMarkupParseContext * (g_markup_parse_context_new)(const GMarkupParser * parser, GMarkupParseFlags flags, gpointer user_data, GDestroyNotify user_data_dnotify) { return stub_funcs.ptr_g_markup_parse_context_new(parser, flags, user_data, user_data_dnotify); }
GMarkupParseContext * (g_markup_parse_context_ref)(GMarkupParseContext * context) { return stub_funcs.ptr_g_markup_parse_context_ref(context); }
void (g_markup_parse_context_unref)(GMarkupParseContext * context) { stub_funcs.ptr_g_markup_parse_context_unref(context); }
void (g_markup_parse_context_free)(GMarkupParseContext * context) { stub_funcs.ptr_g_markup_parse_context_free(context); }
gboolean (g_markup_parse_context_parse)(GMarkupParseContext * context, const gchar * text, gssize text_len, GError * * error) { return stub_funcs.ptr_g_markup_parse_context_parse(context, text, text_len, error); }
void (g_markup_parse_context_push)(GMarkupParseContext * context, const GMarkupParser * parser, gpointer user_data) { stub_funcs.ptr_g_markup_parse_context_push(context, parser, user_data); }
gpointer (g_markup_parse_context_pop)(GMarkupParseContext * context) { return stub_funcs.ptr_g_markup_parse_context_pop(context); }
gboolean (g_markup_parse_context_end_parse)(GMarkupParseContext * context, GError * * error) { return stub_funcs.ptr_g_markup_parse_context_end_parse(context, error); }
const gchar * (g_markup_parse_context_get_element)(GMarkupParseContext * context) { return stub_funcs.ptr_g_markup_parse_context_get_element(context); }
const GSList * (g_markup_parse_context_get_element_stack)(GMarkupParseContext * context) { return stub_funcs.ptr_g_markup_parse_context_get_element_stack(context); }
void (g_markup_parse_context_get_position)(GMarkupParseContext * context, gint * line_number, gint * char_number) { stub_funcs.ptr_g_markup_parse_context_get_position(context, line_number, char_number); }
gpointer (g_markup_parse_context_get_user_data)(GMarkupParseContext * context) { return stub_funcs.ptr_g_markup_parse_context_get_user_data(context); }
gchar * (g_markup_escape_text)(const gchar * text, gssize length) { return stub_funcs.ptr_g_markup_escape_text(text, length); }
gchar * (g_markup_printf_escaped)(const char * format, ...) { gchar * ret; va_list vaargs; va_start(vaargs, format); ret = stub_funcs.ptr_g_markup_vprintf_escaped(format, vaargs); va_end(vaargs); return ret; }
gchar * (g_markup_vprintf_escaped)(const char * format, va_list args) { return stub_funcs.ptr_g_markup_vprintf_escaped(format, args); }
gboolean (g_variant_type_string_is_valid)(const gchar * type_string) { return stub_funcs.ptr_g_variant_type_string_is_valid(type_string); }
gboolean (g_variant_type_string_scan)(const gchar * string, const gchar * limit, const gchar * * endptr) { return stub_funcs.ptr_g_variant_type_string_scan(string, limit, endptr); }
void (g_variant_type_free)(GVariantType * type) { stub_funcs.ptr_g_variant_type_free(type); }
GVariantType * (g_variant_type_copy)(const GVariantType * type) { return stub_funcs.ptr_g_variant_type_copy(type); }
GVariantType * (g_variant_type_new)(const gchar * type_string) { return stub_funcs.ptr_g_variant_type_new(type_string); }
gsize (g_variant_type_get_string_length)(const GVariantType * type) { return stub_funcs.ptr_g_variant_type_get_string_length(type); }
const gchar * (g_variant_type_peek_string)(const GVariantType * type) { return stub_funcs.ptr_g_variant_type_peek_string(type); }
gchar * (g_variant_type_dup_string)(const GVariantType * type) { return stub_funcs.ptr_g_variant_type_dup_string(type); }
gboolean (g_variant_type_is_definite)(const GVariantType * type) { return stub_funcs.ptr_g_variant_type_is_definite(type); }
gboolean (g_variant_type_is_container)(const GVariantType * type) { return stub_funcs.ptr_g_variant_type_is_container(type); }
gboolean (g_variant_type_is_basic)(const GVariantType * type) { return stub_funcs.ptr_g_variant_type_is_basic(type); }
gboolean (g_variant_type_is_maybe)(const GVariantType * type) { return stub_funcs.ptr_g_variant_type_is_maybe(type); }
gboolean (g_variant_type_is_array)(const GVariantType * type) { return stub_funcs.ptr_g_variant_type_is_array(type); }
gboolean (g_variant_type_is_tuple)(const GVariantType * type) { return stub_funcs.ptr_g_variant_type_is_tuple(type); }
gboolean (g_variant_type_is_dict_entry)(const GVariantType * type) { return stub_funcs.ptr_g_variant_type_is_dict_entry(type); }
gboolean (g_variant_type_is_variant)(const GVariantType * type) { return stub_funcs.ptr_g_variant_type_is_variant(type); }
guint (g_variant_type_hash)(gconstpointer type) { return stub_funcs.ptr_g_variant_type_hash(type); }
gboolean (g_variant_type_equal)(gconstpointer type1, gconstpointer type2) { return stub_funcs.ptr_g_variant_type_equal(type1, type2); }
gboolean (g_variant_type_is_subtype_of)(const GVariantType * type, const GVariantType * supertype) { return stub_funcs.ptr_g_variant_type_is_subtype_of(type, supertype); }
const GVariantType * (g_variant_type_element)(const GVariantType * type) { return stub_funcs.ptr_g_variant_type_element(type); }
const GVariantType * (g_variant_type_first)(const GVariantType * type) { return stub_funcs.ptr_g_variant_type_first(type); }
const GVariantType * (g_variant_type_next)(const GVariantType * type) { return stub_funcs.ptr_g_variant_type_next(type); }
gsize (g_variant_type_n_items)(const GVariantType * type) { return stub_funcs.ptr_g_variant_type_n_items(type); }
const GVariantType * (g_variant_type_key)(const GVariantType * type) { return stub_funcs.ptr_g_variant_type_key(type); }
const GVariantType * (g_variant_type_value)(const GVariantType * type) { return stub_funcs.ptr_g_variant_type_value(type); }
GVariantType * (g_variant_type_new_array)(const GVariantType * element) { return stub_funcs.ptr_g_variant_type_new_array(element); }
GVariantType * (g_variant_type_new_maybe)(const GVariantType * element) { return stub_funcs.ptr_g_variant_type_new_maybe(element); }
GVariantType * (g_variant_type_new_tuple)(const GVariantType * const * items, gint length) { return stub_funcs.ptr_g_variant_type_new_tuple(items, length); }
GVariantType * (g_variant_type_new_dict_entry)(const GVariantType * key, const GVariantType * value) { return stub_funcs.ptr_g_variant_type_new_dict_entry(key, value); }
const GVariantType * (g_variant_type_checked_)(const gchar * type_string) { return stub_funcs.ptr_g_variant_type_checked_(type_string); }
gsize (g_variant_type_string_get_depth_)(const gchar * type_string) { return stub_funcs.ptr_g_variant_type_string_get_depth_(type_string); }
void (g_variant_unref)(GVariant * value) { stub_funcs.ptr_g_variant_unref(value); }
GVariant * (g_variant_ref)(GVariant * value) { return stub_funcs.ptr_g_variant_ref(value); }
GVariant * (g_variant_ref_sink)(GVariant * value) { return stub_funcs.ptr_g_variant_ref_sink(value); }
gboolean (g_variant_is_floating)(GVariant * value) { return stub_funcs.ptr_g_variant_is_floating(value); }
GVariant * (g_variant_take_ref)(GVariant * value) { return stub_funcs.ptr_g_variant_take_ref(value); }
const GVariantType * (g_variant_get_type)(GVariant * value) { return stub_funcs.ptr_g_variant_get_type(value); }
const gchar * (g_variant_get_type_string)(GVariant * value) { return stub_funcs.ptr_g_variant_get_type_string(value); }
gboolean (g_variant_is_of_type)(GVariant * value, const GVariantType * type) { return stub_funcs.ptr_g_variant_is_of_type(value, type); }
gboolean (g_variant_is_container)(GVariant * value) { return stub_funcs.ptr_g_variant_is_container(value); }
GVariantClass (g_variant_classify)(GVariant * value) { return stub_funcs.ptr_g_variant_classify(value); }
GVariant * (g_variant_new_boolean)(gboolean value) { return stub_funcs.ptr_g_variant_new_boolean(value); }
GVariant * (g_variant_new_byte)(guint8 value) { return stub_funcs.ptr_g_variant_new_byte(value); }
GVariant * (g_variant_new_int16)(gint16 value) { return stub_funcs.ptr_g_variant_new_int16(value); }
GVariant * (g_variant_new_uint16)(guint16 value) { return stub_funcs.ptr_g_variant_new_uint16(value); }
GVariant * (g_variant_new_int32)(gint32 value) { return stub_funcs.ptr_g_variant_new_int32(value); }
GVariant * (g_variant_new_uint32)(guint32 value) { return stub_funcs.ptr_g_variant_new_uint32(value); }
GVariant * (g_variant_new_int64)(gint64 value) { return stub_funcs.ptr_g_variant_new_int64(value); }
GVariant * (g_variant_new_uint64)(guint64 value) { return stub_funcs.ptr_g_variant_new_uint64(value); }
GVariant * (g_variant_new_handle)(gint32 value) { return stub_funcs.ptr_g_variant_new_handle(value); }
GVariant * (g_variant_new_double)(gdouble value) { return stub_funcs.ptr_g_variant_new_double(value); }
GVariant * (g_variant_new_string)(const gchar * string) { return stub_funcs.ptr_g_variant_new_string(string); }
GVariant * (g_variant_new_take_string)(gchar * string) { return stub_funcs.ptr_g_variant_new_take_string(string); }
GVariant * (g_variant_new_object_path)(const gchar * object_path) { return stub_funcs.ptr_g_variant_new_object_path(object_path); }
gboolean (g_variant_is_object_path)(const gchar * string) { return stub_funcs.ptr_g_variant_is_object_path(string); }
GVariant * (g_variant_new_signature)(const gchar * signature) { return stub_funcs.ptr_g_variant_new_signature(signature); }
gboolean (g_variant_is_signature)(const gchar * string) { return stub_funcs.ptr_g_variant_is_signature(string); }
GVariant * (g_variant_new_variant)(GVariant * value) { return stub_funcs.ptr_g_variant_new_variant(value); }
GVariant * (g_variant_new_strv)(const gchar * const * strv, gssize length) { return stub_funcs.ptr_g_variant_new_strv(strv, length); }
GVariant * (g_variant_new_objv)(const gchar * const * strv, gssize length) { return stub_funcs.ptr_g_variant_new_objv(strv, length); }
GVariant * (g_variant_new_bytestring)(const gchar * string) { return stub_funcs.ptr_g_variant_new_bytestring(string); }
GVariant * (g_variant_new_bytestring_array)(const gchar * const * strv, gssize length) { return stub_funcs.ptr_g_variant_new_bytestring_array(strv, length); }
GVariant * (g_variant_new_fixed_array)(const GVariantType * element_type, gconstpointer elements, gsize n_elements, gsize element_size) { return stub_funcs.ptr_g_variant_new_fixed_array(element_type, elements, n_elements, element_size); }
gboolean (g_variant_get_boolean)(GVariant * value) { return stub_funcs.ptr_g_variant_get_boolean(value); }
guint8 (g_variant_get_byte)(GVariant * value) { return stub_funcs.ptr_g_variant_get_byte(value); }
gint16 (g_variant_get_int16)(GVariant * value) { return stub_funcs.ptr_g_variant_get_int16(value); }
guint16 (g_variant_get_uint16)(GVariant * value) { return stub_funcs.ptr_g_variant_get_uint16(value); }
gint32 (g_variant_get_int32)(GVariant * value) { return stub_funcs.ptr_g_variant_get_int32(value); }
guint32 (g_variant_get_uint32)(GVariant * value) { return stub_funcs.ptr_g_variant_get_uint32(value); }
gint64 (g_variant_get_int64)(GVariant * value) { return stub_funcs.ptr_g_variant_get_int64(value); }
guint64 (g_variant_get_uint64)(GVariant * value) { return stub_funcs.ptr_g_variant_get_uint64(value); }
gint32 (g_variant_get_handle)(GVariant * value) { return stub_funcs.ptr_g_variant_get_handle(value); }
gdouble (g_variant_get_double)(GVariant * value) { return stub_funcs.ptr_g_variant_get_double(value); }
GVariant * (g_variant_get_variant)(GVariant * value) { return stub_funcs.ptr_g_variant_get_variant(value); }
const gchar * (g_variant_get_string)(GVariant * value, gsize * length) { return stub_funcs.ptr_g_variant_get_string(value, length); }
gchar * (g_variant_dup_string)(GVariant * value, gsize * length) { return stub_funcs.ptr_g_variant_dup_string(value, length); }
const gchar * * (g_variant_get_strv)(GVariant * value, gsize * length) { return stub_funcs.ptr_g_variant_get_strv(value, length); }
gchar * * (g_variant_dup_strv)(GVariant * value, gsize * length) { return stub_funcs.ptr_g_variant_dup_strv(value, length); }
const gchar * * (g_variant_get_objv)(GVariant * value, gsize * length) { return stub_funcs.ptr_g_variant_get_objv(value, length); }
gchar * * (g_variant_dup_objv)(GVariant * value, gsize * length) { return stub_funcs.ptr_g_variant_dup_objv(value, length); }
const gchar * (g_variant_get_bytestring)(GVariant * value) { return stub_funcs.ptr_g_variant_get_bytestring(value); }
gchar * (g_variant_dup_bytestring)(GVariant * value, gsize * length) { return stub_funcs.ptr_g_variant_dup_bytestring(value, length); }
const gchar * * (g_variant_get_bytestring_array)(GVariant * value, gsize * length) { return stub_funcs.ptr_g_variant_get_bytestring_array(value, length); }
gchar * * (g_variant_dup_bytestring_array)(GVariant * value, gsize * length) { return stub_funcs.ptr_g_variant_dup_bytestring_array(value, length); }
GVariant * (g_variant_new_maybe)(const GVariantType * child_type, GVariant * child) { return stub_funcs.ptr_g_variant_new_maybe(child_type, child); }
GVariant * (g_variant_new_array)(const GVariantType * child_type, GVariant * const * children, gsize n_children) { return stub_funcs.ptr_g_variant_new_array(child_type, children, n_children); }
GVariant * (g_variant_new_tuple)(GVariant * const * children, gsize n_children) { return stub_funcs.ptr_g_variant_new_tuple(children, n_children); }
GVariant * (g_variant_new_dict_entry)(GVariant * key, GVariant * value) { return stub_funcs.ptr_g_variant_new_dict_entry(key, value); }
GVariant * (g_variant_get_maybe)(GVariant * value) { return stub_funcs.ptr_g_variant_get_maybe(value); }
gsize (g_variant_n_children)(GVariant * value) { return stub_funcs.ptr_g_variant_n_children(value); }
GVariant * (g_variant_get_child_value)(GVariant * value, gsize index_) { return stub_funcs.ptr_g_variant_get_child_value(value, index_); }
GVariant * (g_variant_lookup_value)(GVariant * dictionary, const gchar * key, const GVariantType * expected_type) { return stub_funcs.ptr_g_variant_lookup_value(dictionary, key, expected_type); }
gconstpointer (g_variant_get_fixed_array)(GVariant * value, gsize * n_elements, gsize element_size) { return stub_funcs.ptr_g_variant_get_fixed_array(value, n_elements, element_size); }
gsize (g_variant_get_size)(GVariant * value) { return stub_funcs.ptr_g_variant_get_size(value); }
gconstpointer (g_variant_get_data)(GVariant * value) { return stub_funcs.ptr_g_variant_get_data(value); }
GBytes * (g_variant_get_data_as_bytes)(GVariant * value) { return stub_funcs.ptr_g_variant_get_data_as_bytes(value); }
void (g_variant_store)(GVariant * value, gpointer data) { stub_funcs.ptr_g_variant_store(value, data); }
gchar * (g_variant_print)(GVariant * value, gboolean type_annotate) { return stub_funcs.ptr_g_variant_print(value, type_annotate); }
GString * (g_variant_print_string)(GVariant * value, GString * string, gboolean type_annotate) { return stub_funcs.ptr_g_variant_print_string(value, string, type_annotate); }
guint (g_variant_hash)(gconstpointer value) { return stub_funcs.ptr_g_variant_hash(value); }
gboolean (g_variant_equal)(gconstpointer one, gconstpointer two) { return stub_funcs.ptr_g_variant_equal(one, two); }
GVariant * (g_variant_get_normal_form)(GVariant * value) { return stub_funcs.ptr_g_variant_get_normal_form(value); }
gboolean (g_variant_is_normal_form)(GVariant * value) { return stub_funcs.ptr_g_variant_is_normal_form(value); }
GVariant * (g_variant_byteswap)(GVariant * value) { return stub_funcs.ptr_g_variant_byteswap(value); }
GVariant * (g_variant_new_from_bytes)(const GVariantType * type, GBytes * bytes, gboolean trusted) { return stub_funcs.ptr_g_variant_new_from_bytes(type, bytes, trusted); }
GVariant * (g_variant_new_from_data)(const GVariantType * type, gconstpointer data, gsize size, gboolean trusted, GDestroyNotify notify, gpointer user_data) { return stub_funcs.ptr_g_variant_new_from_data(type, data, size, trusted, notify, user_data); }
GVariantIter * (g_variant_iter_new)(GVariant * value) { return stub_funcs.ptr_g_variant_iter_new(value); }
gsize (g_variant_iter_init)(GVariantIter * iter, GVariant * value) { return stub_funcs.ptr_g_variant_iter_init(iter, value); }
GVariantIter * (g_variant_iter_copy)(GVariantIter * iter) { return stub_funcs.ptr_g_variant_iter_copy(iter); }
gsize (g_variant_iter_n_children)(GVariantIter * iter) { return stub_funcs.ptr_g_variant_iter_n_children(iter); }
void (g_variant_iter_free)(GVariantIter * iter) { stub_funcs.ptr_g_variant_iter_free(iter); }
GVariant * (g_variant_iter_next_value)(GVariantIter * iter) { return stub_funcs.ptr_g_variant_iter_next_value(iter); }
GQuark (g_variant_parser_get_error_quark)(void) { return stub_funcs.ptr_g_variant_parser_get_error_quark(); }
GQuark (g_variant_parse_error_quark)(void) { return stub_funcs.ptr_g_variant_parse_error_quark(); }
GVariantBuilder * (g_variant_builder_new)(const GVariantType * type) { return stub_funcs.ptr_g_variant_builder_new(type); }
void (g_variant_builder_unref)(GVariantBuilder * builder) { stub_funcs.ptr_g_variant_builder_unref(builder); }
GVariantBuilder * (g_variant_builder_ref)(GVariantBuilder * builder) { return stub_funcs.ptr_g_variant_builder_ref(builder); }
void (g_variant_builder_init)(GVariantBuilder * builder, const GVariantType * type) { stub_funcs.ptr_g_variant_builder_init(builder, type); }
GVariant * (g_variant_builder_end)(GVariantBuilder * builder) { return stub_funcs.ptr_g_variant_builder_end(builder); }
void (g_variant_builder_clear)(GVariantBuilder * builder) { stub_funcs.ptr_g_variant_builder_clear(builder); }
void (g_variant_builder_open)(GVariantBuilder * builder, const GVariantType * type) { stub_funcs.ptr_g_variant_builder_open(builder, type); }
void (g_variant_builder_close)(GVariantBuilder * builder) { stub_funcs.ptr_g_variant_builder_close(builder); }
void (g_variant_builder_add_value)(GVariantBuilder * builder, GVariant * value) { stub_funcs.ptr_g_variant_builder_add_value(builder, value); }
GVariant * (g_variant_new_va)(const gchar * format_string, const gchar * * endptr, va_list * app) { return stub_funcs.ptr_g_variant_new_va(format_string, endptr, app); }
void (g_variant_get_va)(GVariant * value, const gchar * format_string, const gchar * * endptr, va_list * app) { stub_funcs.ptr_g_variant_get_va(value, format_string, endptr, app); }
gboolean (g_variant_check_format_string)(GVariant * value, const gchar * format_string, gboolean copy_only) { return stub_funcs.ptr_g_variant_check_format_string(value, format_string, copy_only); }
GVariant * (g_variant_parse)(const GVariantType * type, const gchar * text, const gchar * limit, const gchar * * endptr, GError * * error) { return stub_funcs.ptr_g_variant_parse(type, text, limit, endptr, error); }
GVariant * (g_variant_new_parsed)(const gchar * format, ...) { GVariant * ret; va_list vaargs; va_start(vaargs, format); ret = stub_funcs.ptr_g_variant_new_parsed_va(format, &vaargs); va_end(vaargs); return ret; }
GVariant * (g_variant_new_parsed_va)(const gchar * format, va_list * app) { return stub_funcs.ptr_g_variant_new_parsed_va(format, app); }
gchar * (g_variant_parse_error_print_context)(GError * error, const gchar * source_str) { return stub_funcs.ptr_g_variant_parse_error_print_context(error, source_str); }
gint (g_variant_compare)(gconstpointer one, gconstpointer two) { return stub_funcs.ptr_g_variant_compare(one, two); }
GVariantDict * (g_variant_dict_new)(GVariant * from_asv) { return stub_funcs.ptr_g_variant_dict_new(from_asv); }
void (g_variant_dict_init)(GVariantDict * dict, GVariant * from_asv) { stub_funcs.ptr_g_variant_dict_init(dict, from_asv); }
GVariant * (g_variant_dict_lookup_value)(GVariantDict * dict, const gchar * key, const GVariantType * expected_type) { return stub_funcs.ptr_g_variant_dict_lookup_value(dict, key, expected_type); }
gboolean (g_variant_dict_contains)(GVariantDict * dict, const gchar * key) { return stub_funcs.ptr_g_variant_dict_contains(dict, key); }
void (g_variant_dict_insert_value)(GVariantDict * dict, const gchar * key, GVariant * value) { stub_funcs.ptr_g_variant_dict_insert_value(dict, key, value); }
gboolean (g_variant_dict_remove)(GVariantDict * dict, const gchar * key) { return stub_funcs.ptr_g_variant_dict_remove(dict, key); }
void (g_variant_dict_clear)(GVariantDict * dict) { stub_funcs.ptr_g_variant_dict_clear(dict); }
GVariant * (g_variant_dict_end)(GVariantDict * dict) { return stub_funcs.ptr_g_variant_dict_end(dict); }
GVariantDict * (g_variant_dict_ref)(GVariantDict * dict) { return stub_funcs.ptr_g_variant_dict_ref(dict); }
void (g_variant_dict_unref)(GVariantDict * dict) { stub_funcs.ptr_g_variant_dict_unref(dict); }
gsize (g_printf_string_upper_bound)(const gchar * format, va_list args) { return stub_funcs.ptr_g_printf_string_upper_bound(format, args); }
guint (g_log_set_handler)(const gchar * log_domain, GLogLevelFlags log_levels, GLogFunc log_func, gpointer user_data) { return stub_funcs.ptr_g_log_set_handler(log_domain, log_levels, log_func, user_data); }
guint (g_log_set_handler_full)(const gchar * log_domain, GLogLevelFlags log_levels, GLogFunc log_func, gpointer user_data, GDestroyNotify destroy) { return stub_funcs.ptr_g_log_set_handler_full(log_domain, log_levels, log_func, user_data, destroy); }
void (g_log_remove_handler)(const gchar * log_domain, guint handler_id) { stub_funcs.ptr_g_log_remove_handler(log_domain, handler_id); }
void (g_log_default_handler)(const gchar * log_domain, GLogLevelFlags log_level, const gchar * message, gpointer unused_data) { stub_funcs.ptr_g_log_default_handler(log_domain, log_level, message, unused_data); }
GLogFunc (g_log_set_default_handler)(GLogFunc log_func, gpointer user_data) { return stub_funcs.ptr_g_log_set_default_handler(log_func, user_data); }
void (g_log)(const gchar * log_domain, GLogLevelFlags log_level, const gchar * format, ...) { va_list vaargs; va_start(vaargs, format); stub_funcs.ptr_g_logv(log_domain, log_level, format, vaargs); va_end(vaargs); }
void (g_logv)(const gchar * log_domain, GLogLevelFlags log_level, const gchar * format, va_list args) { stub_funcs.ptr_g_logv(log_domain, log_level, format, args); }
GLogLevelFlags (g_log_set_fatal_mask)(const gchar * log_domain, GLogLevelFlags fatal_mask) { return stub_funcs.ptr_g_log_set_fatal_mask(log_domain, fatal_mask); }
GLogLevelFlags (g_log_set_always_fatal)(GLogLevelFlags fatal_mask) { return stub_funcs.ptr_g_log_set_always_fatal(fatal_mask); }
void (g_log_structured_array)(GLogLevelFlags log_level, const GLogField * fields, gsize n_fields) { stub_funcs.ptr_g_log_structured_array(log_level, fields, n_fields); }
void (g_log_variant)(const gchar * log_domain, GLogLevelFlags log_level, GVariant * fields) { stub_funcs.ptr_g_log_variant(log_domain, log_level, fields); }
void (g_log_set_writer_func)(GLogWriterFunc func, gpointer user_data, GDestroyNotify user_data_free) { stub_funcs.ptr_g_log_set_writer_func(func, user_data, user_data_free); }
gboolean (g_log_writer_supports_color)(gint output_fd) { return stub_funcs.ptr_g_log_writer_supports_color(output_fd); }
gboolean (g_log_writer_is_journald)(gint output_fd) { return stub_funcs.ptr_g_log_writer_is_journald(output_fd); }
gchar * (g_log_writer_format_fields)(GLogLevelFlags log_level, const GLogField * fields, gsize n_fields, gboolean use_color) { return stub_funcs.ptr_g_log_writer_format_fields(log_level, fields, n_fields, use_color); }
GLogWriterOutput (g_log_writer_syslog)(GLogLevelFlags log_level, const GLogField * fields, gsize n_fields, gpointer user_data) { return stub_funcs.ptr_g_log_writer_syslog(log_level, fields, n_fields, user_data); }
GLogWriterOutput (g_log_writer_journald)(GLogLevelFlags log_level, const GLogField * fields, gsize n_fields, gpointer user_data) { return stub_funcs.ptr_g_log_writer_journald(log_level, fields, n_fields, user_data); }
GLogWriterOutput (g_log_writer_standard_streams)(GLogLevelFlags log_level, const GLogField * fields, gsize n_fields, gpointer user_data) { return stub_funcs.ptr_g_log_writer_standard_streams(log_level, fields, n_fields, user_data); }
GLogWriterOutput (g_log_writer_default)(GLogLevelFlags log_level, const GLogField * fields, gsize n_fields, gpointer user_data) { return stub_funcs.ptr_g_log_writer_default(log_level, fields, n_fields, user_data); }
void (g_log_writer_default_set_use_stderr)(gboolean use_stderr) { stub_funcs.ptr_g_log_writer_default_set_use_stderr(use_stderr); }
gboolean (g_log_writer_default_would_drop)(GLogLevelFlags log_level, const char * log_domain) { return stub_funcs.ptr_g_log_writer_default_would_drop(log_level, log_domain); }
void (g_log_writer_default_set_debug_domains)(const gchar * const * domains) { stub_funcs.ptr_g_log_writer_default_set_debug_domains(domains); }
gboolean (g_log_get_debug_enabled)(void) { return stub_funcs.ptr_g_log_get_debug_enabled(); }
void (g_log_set_debug_enabled)(gboolean enabled) { stub_funcs.ptr_g_log_set_debug_enabled(enabled); }
void (_g_log_fallback_handler)(const gchar * log_domain, GLogLevelFlags log_level, const gchar * message, gpointer unused_data) { stub_funcs.ptr__g_log_fallback_handler(log_domain, log_level, message, unused_data); }
void (g_return_if_fail_warning)(const char * log_domain, const char * pretty_function, const char * expression) { stub_funcs.ptr_g_return_if_fail_warning(log_domain, pretty_function, expression); }
void (g_warn_message)(const char * domain, const char * file, int line, const char * func, const char * warnexpr) { stub_funcs.ptr_g_warn_message(domain, file, line, func, warnexpr); }
void (g_assert_warning)(const char * log_domain, const char * file, const int line, const char * pretty_function, const char * expression) { stub_funcs.ptr_g_assert_warning(log_domain, file, line, pretty_function, expression); __builtin_unreachable(); }
void (g_print)(const gchar * format, ...) { va_list vaargs; va_start(vaargs, format); stub_funcs.ptr_g_vprintf(format, vaargs); va_end(vaargs); }
GPrintFunc (g_set_print_handler)(GPrintFunc func) { return stub_funcs.ptr_g_set_print_handler(func); }
GPrintFunc (g_set_printerr_handler)(GPrintFunc func) { return stub_funcs.ptr_g_set_printerr_handler(func); }
GQuark (g_option_error_quark)(void) { return stub_funcs.ptr_g_option_error_quark(); }
GOptionContext * (g_option_context_new)(const gchar * parameter_string) { return stub_funcs.ptr_g_option_context_new(parameter_string); }
void (g_option_context_set_summary)(GOptionContext * context, const gchar * summary) { stub_funcs.ptr_g_option_context_set_summary(context, summary); }
const gchar * (g_option_context_get_summary)(GOptionContext * context) { return stub_funcs.ptr_g_option_context_get_summary(context); }
void (g_option_context_set_description)(GOptionContext * context, const gchar * description) { stub_funcs.ptr_g_option_context_set_description(context, description); }
const gchar * (g_option_context_get_description)(GOptionContext * context) { return stub_funcs.ptr_g_option_context_get_description(context); }
void (g_option_context_free)(GOptionContext * context) { stub_funcs.ptr_g_option_context_free(context); }
void (g_option_context_set_help_enabled)(GOptionContext * context, gboolean help_enabled) { stub_funcs.ptr_g_option_context_set_help_enabled(context, help_enabled); }
gboolean (g_option_context_get_help_enabled)(GOptionContext * context) { return stub_funcs.ptr_g_option_context_get_help_enabled(context); }
void (g_option_context_set_ignore_unknown_options)(GOptionContext * context, gboolean ignore_unknown) { stub_funcs.ptr_g_option_context_set_ignore_unknown_options(context, ignore_unknown); }
gboolean (g_option_context_get_ignore_unknown_options)(GOptionContext * context) { return stub_funcs.ptr_g_option_context_get_ignore_unknown_options(context); }
void (g_option_context_set_strict_posix)(GOptionContext * context, gboolean strict_posix) { stub_funcs.ptr_g_option_context_set_strict_posix(context, strict_posix); }
gboolean (g_option_context_get_strict_posix)(GOptionContext * context) { return stub_funcs.ptr_g_option_context_get_strict_posix(context); }
void (g_option_context_add_main_entries)(GOptionContext * context, const GOptionEntry * entries, const gchar * translation_domain) { stub_funcs.ptr_g_option_context_add_main_entries(context, entries, translation_domain); }
gboolean (g_option_context_parse)(GOptionContext * context, gint * argc, gchar * * * argv, GError * * error) { return stub_funcs.ptr_g_option_context_parse(context, argc, argv, error); }
gboolean (g_option_context_parse_strv)(GOptionContext * context, gchar * * * arguments, GError * * error) { return stub_funcs.ptr_g_option_context_parse_strv(context, arguments, error); }
void (g_option_context_set_translate_func)(GOptionContext * context, GTranslateFunc func, gpointer data, GDestroyNotify destroy_notify) { stub_funcs.ptr_g_option_context_set_translate_func(context, func, data, destroy_notify); }
void (g_option_context_set_translation_domain)(GOptionContext * context, const gchar * domain) { stub_funcs.ptr_g_option_context_set_translation_domain(context, domain); }
void (g_option_context_add_group)(GOptionContext * context, GOptionGroup * group) { stub_funcs.ptr_g_option_context_add_group(context, group); }
void (g_option_context_set_main_group)(GOptionContext * context, GOptionGroup * group) { stub_funcs.ptr_g_option_context_set_main_group(context, group); }
GOptionGroup * (g_option_context_get_main_group)(GOptionContext * context) { return stub_funcs.ptr_g_option_context_get_main_group(context); }
gchar * (g_option_context_get_help)(GOptionContext * context, gboolean main_help, GOptionGroup * group) { return stub_funcs.ptr_g_option_context_get_help(context, main_help, group); }
GOptionGroup * (g_option_group_new)(const gchar * name, const gchar * description, const gchar * help_description, gpointer user_data, GDestroyNotify destroy) { return stub_funcs.ptr_g_option_group_new(name, description, help_description, user_data, destroy); }
void (g_option_group_set_parse_hooks)(GOptionGroup * group, GOptionParseFunc pre_parse_func, GOptionParseFunc post_parse_func) { stub_funcs.ptr_g_option_group_set_parse_hooks(group, pre_parse_func, post_parse_func); }
void (g_option_group_set_error_hook)(GOptionGroup * group, GOptionErrorFunc error_func) { stub_funcs.ptr_g_option_group_set_error_hook(group, error_func); }
void (g_option_group_free)(GOptionGroup * group) { stub_funcs.ptr_g_option_group_free(group); }
GOptionGroup * (g_option_group_ref)(GOptionGroup * group) { return stub_funcs.ptr_g_option_group_ref(group); }
void (g_option_group_unref)(GOptionGroup * group) { stub_funcs.ptr_g_option_group_unref(group); }
void (g_option_group_add_entries)(GOptionGroup * group, const GOptionEntry * entries) { stub_funcs.ptr_g_option_group_add_entries(group, entries); }
void (g_option_group_set_translate_func)(GOptionGroup * group, GTranslateFunc func, gpointer data, GDestroyNotify destroy_notify) { stub_funcs.ptr_g_option_group_set_translate_func(group, func, data, destroy_notify); }
void (g_option_group_set_translation_domain)(GOptionGroup * group, const gchar * domain) { stub_funcs.ptr_g_option_group_set_translation_domain(group, domain); }
GPathBuf * (g_path_buf_new)(void) { return stub_funcs.ptr_g_path_buf_new(); }
GPathBuf * (g_path_buf_new_from_path)(const char * path) { return stub_funcs.ptr_g_path_buf_new_from_path(path); }
GPathBuf * (g_path_buf_init)(GPathBuf * buf) { return stub_funcs.ptr_g_path_buf_init(buf); }
GPathBuf * (g_path_buf_init_from_path)(GPathBuf * buf, const char * path) { return stub_funcs.ptr_g_path_buf_init_from_path(buf, path); }
void (g_path_buf_clear)(GPathBuf * buf) { stub_funcs.ptr_g_path_buf_clear(buf); }
char * (g_path_buf_clear_to_path)(GPathBuf * buf) { return stub_funcs.ptr_g_path_buf_clear_to_path(buf); }
void (g_path_buf_free)(GPathBuf * buf) { stub_funcs.ptr_g_path_buf_free(buf); }
char * (g_path_buf_free_to_path)(GPathBuf * buf) { return stub_funcs.ptr_g_path_buf_free_to_path(buf); }
GPathBuf * (g_path_buf_copy)(GPathBuf * buf) { return stub_funcs.ptr_g_path_buf_copy(buf); }
GPathBuf * (g_path_buf_push)(GPathBuf * buf, const char * path) { return stub_funcs.ptr_g_path_buf_push(buf, path); }
gboolean (g_path_buf_pop)(GPathBuf * buf) { return stub_funcs.ptr_g_path_buf_pop(buf); }
gboolean (g_path_buf_set_filename)(GPathBuf * buf, const char * file_name) { return stub_funcs.ptr_g_path_buf_set_filename(buf, file_name); }
gboolean (g_path_buf_set_extension)(GPathBuf * buf, const char * extension) { return stub_funcs.ptr_g_path_buf_set_extension(buf, extension); }
char * (g_path_buf_to_path)(GPathBuf * buf) { return stub_funcs.ptr_g_path_buf_to_path(buf); }
gboolean (g_path_buf_equal)(gconstpointer v1, gconstpointer v2) { return stub_funcs.ptr_g_path_buf_equal(v1, v2); }
GPatternSpec * (g_pattern_spec_new)(const gchar * pattern) { return stub_funcs.ptr_g_pattern_spec_new(pattern); }
void (g_pattern_spec_free)(GPatternSpec * pspec) { stub_funcs.ptr_g_pattern_spec_free(pspec); }
GPatternSpec * (g_pattern_spec_copy)(GPatternSpec * pspec) { return stub_funcs.ptr_g_pattern_spec_copy(pspec); }
gboolean (g_pattern_spec_equal)(GPatternSpec * pspec1, GPatternSpec * pspec2) { return stub_funcs.ptr_g_pattern_spec_equal(pspec1, pspec2); }
gboolean (g_pattern_spec_match)(GPatternSpec * pspec, gsize string_length, const gchar * string, const gchar * string_reversed) { return stub_funcs.ptr_g_pattern_spec_match(pspec, string_length, string, string_reversed); }
gboolean (g_pattern_spec_match_string)(GPatternSpec * pspec, const gchar * string) { return stub_funcs.ptr_g_pattern_spec_match_string(pspec, string); }
gboolean (g_pattern_match)(GPatternSpec * pspec, guint string_length, const gchar * string, const gchar * string_reversed) { return stub_funcs.ptr_g_pattern_match(pspec, string_length, string, string_reversed); }
gboolean (g_pattern_match_string)(GPatternSpec * pspec, const gchar * string) { return stub_funcs.ptr_g_pattern_match_string(pspec, string); }
gboolean (g_pattern_match_simple)(const gchar * pattern, const gchar * string) { return stub_funcs.ptr_g_pattern_match_simple(pattern, string); }
guint (g_spaced_primes_closest)(guint num) { return stub_funcs.ptr_g_spaced_primes_closest(num); }
void (g_qsort_with_data)(gconstpointer pbase, gint total_elems, gsize size, GCompareDataFunc compare_func, gpointer user_data) { stub_funcs.ptr_g_qsort_with_data(pbase, total_elems, size, compare_func, user_data); }
void (g_sort_array)(const void * array, size_t n_elements, size_t element_size, GCompareDataFunc compare_func, void * user_data) { stub_funcs.ptr_g_sort_array(array, n_elements, element_size, compare_func, user_data); }
GQueue * (g_queue_new)(void) { return stub_funcs.ptr_g_queue_new(); }
void (g_queue_free)(GQueue * queue) { stub_funcs.ptr_g_queue_free(queue); }
void (g_queue_free_full)(GQueue * queue, GDestroyNotify free_func) { stub_funcs.ptr_g_queue_free_full(queue, free_func); }
void (g_queue_init)(GQueue * queue) { stub_funcs.ptr_g_queue_init(queue); }
void (g_queue_clear)(GQueue * queue) { stub_funcs.ptr_g_queue_clear(queue); }
gboolean (g_queue_is_empty)(GQueue * queue) { return stub_funcs.ptr_g_queue_is_empty(queue); }
void (g_queue_clear_full)(GQueue * queue, GDestroyNotify free_func) { stub_funcs.ptr_g_queue_clear_full(queue, free_func); }
guint (g_queue_get_length)(GQueue * queue) { return stub_funcs.ptr_g_queue_get_length(queue); }
void (g_queue_reverse)(GQueue * queue) { stub_funcs.ptr_g_queue_reverse(queue); }
GQueue * (g_queue_copy)(GQueue * queue) { return stub_funcs.ptr_g_queue_copy(queue); }
void (g_queue_foreach)(GQueue * queue, GFunc func, gpointer user_data) { stub_funcs.ptr_g_queue_foreach(queue, func, user_data); }
GList * (g_queue_find)(GQueue * queue, gconstpointer data) { return stub_funcs.ptr_g_queue_find(queue, data); }
GList * (g_queue_find_custom)(GQueue * queue, gconstpointer data, GCompareFunc func) { return stub_funcs.ptr_g_queue_find_custom(queue, data, func); }
void (g_queue_sort)(GQueue * queue, GCompareDataFunc compare_func, gpointer user_data) { stub_funcs.ptr_g_queue_sort(queue, compare_func, user_data); }
void (g_queue_push_head)(GQueue * queue, gpointer data) { stub_funcs.ptr_g_queue_push_head(queue, data); }
void (g_queue_push_tail)(GQueue * queue, gpointer data) { stub_funcs.ptr_g_queue_push_tail(queue, data); }
void (g_queue_push_nth)(GQueue * queue, gpointer data, gint n) { stub_funcs.ptr_g_queue_push_nth(queue, data, n); }
gpointer (g_queue_pop_head)(GQueue * queue) { return stub_funcs.ptr_g_queue_pop_head(queue); }
gpointer (g_queue_pop_tail)(GQueue * queue) { return stub_funcs.ptr_g_queue_pop_tail(queue); }
gpointer (g_queue_pop_nth)(GQueue * queue, guint n) { return stub_funcs.ptr_g_queue_pop_nth(queue, n); }
gpointer (g_queue_peek_head)(GQueue * queue) { return stub_funcs.ptr_g_queue_peek_head(queue); }
gpointer (g_queue_peek_tail)(GQueue * queue) { return stub_funcs.ptr_g_queue_peek_tail(queue); }
gpointer (g_queue_peek_nth)(GQueue * queue, guint n) { return stub_funcs.ptr_g_queue_peek_nth(queue, n); }
gint (g_queue_index)(GQueue * queue, gconstpointer data) { return stub_funcs.ptr_g_queue_index(queue, data); }
gboolean (g_queue_remove)(GQueue * queue, gconstpointer data) { return stub_funcs.ptr_g_queue_remove(queue, data); }
guint (g_queue_remove_all)(GQueue * queue, gconstpointer data) { return stub_funcs.ptr_g_queue_remove_all(queue, data); }
void (g_queue_insert_before)(GQueue * queue, GList * sibling, gpointer data) { stub_funcs.ptr_g_queue_insert_before(queue, sibling, data); }
void (g_queue_insert_before_link)(GQueue * queue, GList * sibling, GList * link_) { stub_funcs.ptr_g_queue_insert_before_link(queue, sibling, link_); }
void (g_queue_insert_after)(GQueue * queue, GList * sibling, gpointer data) { stub_funcs.ptr_g_queue_insert_after(queue, sibling, data); }
void (g_queue_insert_after_link)(GQueue * queue, GList * sibling, GList * link_) { stub_funcs.ptr_g_queue_insert_after_link(queue, sibling, link_); }
void (g_queue_insert_sorted)(GQueue * queue, gpointer data, GCompareDataFunc func, gpointer user_data) { stub_funcs.ptr_g_queue_insert_sorted(queue, data, func, user_data); }
void (g_queue_push_head_link)(GQueue * queue, GList * link_) { stub_funcs.ptr_g_queue_push_head_link(queue, link_); }
void (g_queue_push_tail_link)(GQueue * queue, GList * link_) { stub_funcs.ptr_g_queue_push_tail_link(queue, link_); }
void (g_queue_push_nth_link)(GQueue * queue, gint n, GList * link_) { stub_funcs.ptr_g_queue_push_nth_link(queue, n, link_); }
GList * (g_queue_pop_head_link)(GQueue * queue) { return stub_funcs.ptr_g_queue_pop_head_link(queue); }
GList * (g_queue_pop_tail_link)(GQueue * queue) { return stub_funcs.ptr_g_queue_pop_tail_link(queue); }
GList * (g_queue_pop_nth_link)(GQueue * queue, guint n) { return stub_funcs.ptr_g_queue_pop_nth_link(queue, n); }
GList * (g_queue_peek_head_link)(GQueue * queue) { return stub_funcs.ptr_g_queue_peek_head_link(queue); }
GList * (g_queue_peek_tail_link)(GQueue * queue) { return stub_funcs.ptr_g_queue_peek_tail_link(queue); }
GList * (g_queue_peek_nth_link)(GQueue * queue, guint n) { return stub_funcs.ptr_g_queue_peek_nth_link(queue, n); }
gint (g_queue_link_index)(GQueue * queue, GList * link_) { return stub_funcs.ptr_g_queue_link_index(queue, link_); }
void (g_queue_unlink)(GQueue * queue, GList * link_) { stub_funcs.ptr_g_queue_unlink(queue, link_); }
void (g_queue_delete_link)(GQueue * queue, GList * link_) { stub_funcs.ptr_g_queue_delete_link(queue, link_); }
GRand * (g_rand_new_with_seed)(guint32 seed) { return stub_funcs.ptr_g_rand_new_with_seed(seed); }
GRand * (g_rand_new_with_seed_array)(const guint32 * seed, guint seed_length) { return stub_funcs.ptr_g_rand_new_with_seed_array(seed, seed_length); }
GRand * (g_rand_new)(void) { return stub_funcs.ptr_g_rand_new(); }
void (g_rand_free)(GRand * rand_) { stub_funcs.ptr_g_rand_free(rand_); }
GRand * (g_rand_copy)(GRand * rand_) { return stub_funcs.ptr_g_rand_copy(rand_); }
void (g_rand_set_seed)(GRand * rand_, guint32 seed) { stub_funcs.ptr_g_rand_set_seed(rand_, seed); }
void (g_rand_set_seed_array)(GRand * rand_, const guint32 * seed, guint seed_length) { stub_funcs.ptr_g_rand_set_seed_array(rand_, seed, seed_length); }
guint32 (g_rand_int)(GRand * rand_) { return stub_funcs.ptr_g_rand_int(rand_); }
gint32 (g_rand_int_range)(GRand * rand_, gint32 begin, gint32 end) { return stub_funcs.ptr_g_rand_int_range(rand_, begin, end); }
gdouble (g_rand_double)(GRand * rand_) { return stub_funcs.ptr_g_rand_double(rand_); }
gdouble (g_rand_double_range)(GRand * rand_, gdouble begin, gdouble end) { return stub_funcs.ptr_g_rand_double_range(rand_, begin, end); }
void (g_random_set_seed)(guint32 seed) { stub_funcs.ptr_g_random_set_seed(seed); }
guint32 (g_random_int)(void) { return stub_funcs.ptr_g_random_int(); }
gint32 (g_random_int_range)(gint32 begin, gint32 end) { return stub_funcs.ptr_g_random_int_range(begin, end); }
gdouble (g_random_double)(void) { return stub_funcs.ptr_g_random_double(); }
gdouble (g_random_double_range)(gdouble begin, gdouble end) { return stub_funcs.ptr_g_random_double_range(begin, end); }
gpointer (g_rc_box_alloc)(gsize block_size) { return stub_funcs.ptr_g_rc_box_alloc(block_size); }
gpointer (g_rc_box_alloc0)(gsize block_size) { return stub_funcs.ptr_g_rc_box_alloc0(block_size); }
gpointer (g_rc_box_dup)(gsize block_size, gconstpointer mem_block) { return stub_funcs.ptr_g_rc_box_dup(block_size, mem_block); }
gpointer (g_rc_box_acquire)(gpointer mem_block) { return stub_funcs.ptr_g_rc_box_acquire(mem_block); }
void (g_rc_box_release)(gpointer mem_block) { stub_funcs.ptr_g_rc_box_release(mem_block); }
void (g_rc_box_release_full)(gpointer mem_block, GDestroyNotify clear_func) { stub_funcs.ptr_g_rc_box_release_full(mem_block, clear_func); }
gsize (g_rc_box_get_size)(gpointer mem_block) { return stub_funcs.ptr_g_rc_box_get_size(mem_block); }
gpointer (g_atomic_rc_box_alloc)(gsize block_size) { return stub_funcs.ptr_g_atomic_rc_box_alloc(block_size); }
gpointer (g_atomic_rc_box_alloc0)(gsize block_size) { return stub_funcs.ptr_g_atomic_rc_box_alloc0(block_size); }
gpointer (g_atomic_rc_box_dup)(gsize block_size, gconstpointer mem_block) { return stub_funcs.ptr_g_atomic_rc_box_dup(block_size, mem_block); }
gpointer (g_atomic_rc_box_acquire)(gpointer mem_block) { return stub_funcs.ptr_g_atomic_rc_box_acquire(mem_block); }
void (g_atomic_rc_box_release)(gpointer mem_block) { stub_funcs.ptr_g_atomic_rc_box_release(mem_block); }
void (g_atomic_rc_box_release_full)(gpointer mem_block, GDestroyNotify clear_func) { stub_funcs.ptr_g_atomic_rc_box_release_full(mem_block, clear_func); }
gsize (g_atomic_rc_box_get_size)(gpointer mem_block) { return stub_funcs.ptr_g_atomic_rc_box_get_size(mem_block); }
void (g_ref_count_init)(grefcount * rc) { stub_funcs.ptr_g_ref_count_init(rc); }
void (g_ref_count_inc)(grefcount * rc) { stub_funcs.ptr_g_ref_count_inc(rc); }
gboolean (g_ref_count_dec)(grefcount * rc) { return stub_funcs.ptr_g_ref_count_dec(rc); }
gboolean (g_ref_count_compare)(grefcount * rc, gint val) { return stub_funcs.ptr_g_ref_count_compare(rc, val); }
void (g_atomic_ref_count_init)(gatomicrefcount * arc) { stub_funcs.ptr_g_atomic_ref_count_init(arc); }
void (g_atomic_ref_count_inc)(gatomicrefcount * arc) { stub_funcs.ptr_g_atomic_ref_count_inc(arc); }
gboolean (g_atomic_ref_count_dec)(gatomicrefcount * arc) { return stub_funcs.ptr_g_atomic_ref_count_dec(arc); }
gboolean (g_atomic_ref_count_compare)(gatomicrefcount * arc, gint val) { return stub_funcs.ptr_g_atomic_ref_count_compare(arc, val); }
char * (g_ref_string_new)(const char * str) { return stub_funcs.ptr_g_ref_string_new(str); }
char * (g_ref_string_new_len)(const char * str, gssize len) { return stub_funcs.ptr_g_ref_string_new_len(str, len); }
char * (g_ref_string_new_intern)(const char * str) { return stub_funcs.ptr_g_ref_string_new_intern(str); }
char * (g_ref_string_acquire)(char * str) { return stub_funcs.ptr_g_ref_string_acquire(str); }
void (g_ref_string_release)(char * str) { stub_funcs.ptr_g_ref_string_release(str); }
gsize (g_ref_string_length)(char * str) { return stub_funcs.ptr_g_ref_string_length(str); }
GQuark (g_regex_error_quark)(void) { return stub_funcs.ptr_g_regex_error_quark(); }
GRegex * (g_regex_new)(const gchar * pattern, GRegexCompileFlags compile_options, GRegexMatchFlags match_options, GError * * error) { return stub_funcs.ptr_g_regex_new(pattern, compile_options, match_options, error); }
GRegex * (g_regex_ref)(GRegex * regex) { return stub_funcs.ptr_g_regex_ref(regex); }
void (g_regex_unref)(GRegex * regex) { stub_funcs.ptr_g_regex_unref(regex); }
const gchar * (g_regex_get_pattern)(const GRegex * regex) { return stub_funcs.ptr_g_regex_get_pattern(regex); }
gint (g_regex_get_max_backref)(const GRegex * regex) { return stub_funcs.ptr_g_regex_get_max_backref(regex); }
gint (g_regex_get_capture_count)(const GRegex * regex) { return stub_funcs.ptr_g_regex_get_capture_count(regex); }
gboolean (g_regex_get_has_cr_or_lf)(const GRegex * regex) { return stub_funcs.ptr_g_regex_get_has_cr_or_lf(regex); }
gint (g_regex_get_max_lookbehind)(const GRegex * regex) { return stub_funcs.ptr_g_regex_get_max_lookbehind(regex); }
gint (g_regex_get_string_number)(const GRegex * regex, const gchar * name) { return stub_funcs.ptr_g_regex_get_string_number(regex, name); }
gchar * (g_regex_escape_string)(const gchar * string, gint length) { return stub_funcs.ptr_g_regex_escape_string(string, length); }
gchar * (g_regex_escape_nul)(const gchar * string, gint length) { return stub_funcs.ptr_g_regex_escape_nul(string, length); }
GRegexCompileFlags (g_regex_get_compile_flags)(const GRegex * regex) { return stub_funcs.ptr_g_regex_get_compile_flags(regex); }
GRegexMatchFlags (g_regex_get_match_flags)(const GRegex * regex) { return stub_funcs.ptr_g_regex_get_match_flags(regex); }
gboolean (g_regex_match_simple)(const gchar * pattern, const gchar * string, GRegexCompileFlags compile_options, GRegexMatchFlags match_options) { return stub_funcs.ptr_g_regex_match_simple(pattern, string, compile_options, match_options); }
gboolean (g_regex_match)(const GRegex * regex, const gchar * string, GRegexMatchFlags match_options, GMatchInfo * * match_info) { return stub_funcs.ptr_g_regex_match(regex, string, match_options, match_info); }
gboolean (g_regex_match_full)(const GRegex * regex, const gchar * string, gssize string_len, gint start_position, GRegexMatchFlags match_options, GMatchInfo * * match_info, GError * * error) { return stub_funcs.ptr_g_regex_match_full(regex, string, string_len, start_position, match_options, match_info, error); }
gboolean (g_regex_match_all)(const GRegex * regex, const gchar * string, GRegexMatchFlags match_options, GMatchInfo * * match_info) { return stub_funcs.ptr_g_regex_match_all(regex, string, match_options, match_info); }
gboolean (g_regex_match_all_full)(const GRegex * regex, const gchar * string, gssize string_len, gint start_position, GRegexMatchFlags match_options, GMatchInfo * * match_info, GError * * error) { return stub_funcs.ptr_g_regex_match_all_full(regex, string, string_len, start_position, match_options, match_info, error); }
gchar * * (g_regex_split_simple)(const gchar * pattern, const gchar * string, GRegexCompileFlags compile_options, GRegexMatchFlags match_options) { return stub_funcs.ptr_g_regex_split_simple(pattern, string, compile_options, match_options); }
gchar * * (g_regex_split)(const GRegex * regex, const gchar * string, GRegexMatchFlags match_options) { return stub_funcs.ptr_g_regex_split(regex, string, match_options); }
gchar * * (g_regex_split_full)(const GRegex * regex, const gchar * string, gssize string_len, gint start_position, GRegexMatchFlags match_options, gint max_tokens, GError * * error) { return stub_funcs.ptr_g_regex_split_full(regex, string, string_len, start_position, match_options, max_tokens, error); }
gchar * (g_regex_replace)(const GRegex * regex, const gchar * string, gssize string_len, gint start_position, const gchar * replacement, GRegexMatchFlags match_options, GError * * error) { return stub_funcs.ptr_g_regex_replace(regex, string, string_len, start_position, replacement, match_options, error); }
gchar * (g_regex_replace_literal)(const GRegex * regex, const gchar * string, gssize string_len, gint start_position, const gchar * replacement, GRegexMatchFlags match_options, GError * * error) { return stub_funcs.ptr_g_regex_replace_literal(regex, string, string_len, start_position, replacement, match_options, error); }
gchar * (g_regex_replace_eval)(const GRegex * regex, const gchar * string, gssize string_len, gint start_position, GRegexMatchFlags match_options, GRegexEvalCallback eval, gpointer user_data, GError * * error) { return stub_funcs.ptr_g_regex_replace_eval(regex, string, string_len, start_position, match_options, eval, user_data, error); }
gboolean (g_regex_check_replacement)(const gchar * replacement, gboolean * has_references, GError * * error) { return stub_funcs.ptr_g_regex_check_replacement(replacement, has_references, error); }
GRegex * (g_match_info_get_regex)(const GMatchInfo * match_info) { return stub_funcs.ptr_g_match_info_get_regex(match_info); }
const gchar * (g_match_info_get_string)(const GMatchInfo * match_info) { return stub_funcs.ptr_g_match_info_get_string(match_info); }
GMatchInfo * (g_match_info_ref)(GMatchInfo * match_info) { return stub_funcs.ptr_g_match_info_ref(match_info); }
void (g_match_info_unref)(GMatchInfo * match_info) { stub_funcs.ptr_g_match_info_unref(match_info); }
void (g_match_info_free)(GMatchInfo * match_info) { stub_funcs.ptr_g_match_info_free(match_info); }
gboolean (g_match_info_next)(GMatchInfo * match_info, GError * * error) { return stub_funcs.ptr_g_match_info_next(match_info, error); }
gboolean (g_match_info_matches)(const GMatchInfo * match_info) { return stub_funcs.ptr_g_match_info_matches(match_info); }
gint (g_match_info_get_match_count)(const GMatchInfo * match_info) { return stub_funcs.ptr_g_match_info_get_match_count(match_info); }
gboolean (g_match_info_is_partial_match)(const GMatchInfo * match_info) { return stub_funcs.ptr_g_match_info_is_partial_match(match_info); }
gchar * (g_match_info_expand_references)(const GMatchInfo * match_info, const gchar * string_to_expand, GError * * error) { return stub_funcs.ptr_g_match_info_expand_references(match_info, string_to_expand, error); }
gchar * (g_match_info_fetch)(const GMatchInfo * match_info, gint match_num) { return stub_funcs.ptr_g_match_info_fetch(match_info, match_num); }
gboolean (g_match_info_fetch_pos)(const GMatchInfo * match_info, gint match_num, gint * start_pos, gint * end_pos) { return stub_funcs.ptr_g_match_info_fetch_pos(match_info, match_num, start_pos, end_pos); }
gchar * (g_match_info_fetch_named)(const GMatchInfo * match_info, const gchar * name) { return stub_funcs.ptr_g_match_info_fetch_named(match_info, name); }
gboolean (g_match_info_fetch_named_pos)(const GMatchInfo * match_info, const gchar * name, gint * start_pos, gint * end_pos) { return stub_funcs.ptr_g_match_info_fetch_named_pos(match_info, name, start_pos, end_pos); }
gchar * * (g_match_info_fetch_all)(const GMatchInfo * match_info) { return stub_funcs.ptr_g_match_info_fetch_all(match_info); }
GScanner * (g_scanner_new)(const GScannerConfig * config_templ) { return stub_funcs.ptr_g_scanner_new(config_templ); }
void (g_scanner_destroy)(GScanner * scanner) { stub_funcs.ptr_g_scanner_destroy(scanner); }
void (g_scanner_input_file)(GScanner * scanner, gint input_fd) { stub_funcs.ptr_g_scanner_input_file(scanner, input_fd); }
void (g_scanner_sync_file_offset)(GScanner * scanner) { stub_funcs.ptr_g_scanner_sync_file_offset(scanner); }
void (g_scanner_input_text)(GScanner * scanner, const gchar * text, guint text_len) { stub_funcs.ptr_g_scanner_input_text(scanner, text, text_len); }
GTokenType (g_scanner_get_next_token)(GScanner * scanner) { return stub_funcs.ptr_g_scanner_get_next_token(scanner); }
GTokenType (g_scanner_peek_next_token)(GScanner * scanner) { return stub_funcs.ptr_g_scanner_peek_next_token(scanner); }
GTokenType (g_scanner_cur_token)(GScanner * scanner) { return stub_funcs.ptr_g_scanner_cur_token(scanner); }
GTokenValue (g_scanner_cur_value)(GScanner * scanner) { return stub_funcs.ptr_g_scanner_cur_value(scanner); }
guint (g_scanner_cur_line)(GScanner * scanner) { return stub_funcs.ptr_g_scanner_cur_line(scanner); }
guint (g_scanner_cur_position)(GScanner * scanner) { return stub_funcs.ptr_g_scanner_cur_position(scanner); }
gboolean (g_scanner_eof)(GScanner * scanner) { return stub_funcs.ptr_g_scanner_eof(scanner); }
guint (g_scanner_set_scope)(GScanner * scanner, guint scope_id) { return stub_funcs.ptr_g_scanner_set_scope(scanner, scope_id); }
void (g_scanner_scope_add_symbol)(GScanner * scanner, guint scope_id, const gchar * symbol, gpointer value) { stub_funcs.ptr_g_scanner_scope_add_symbol(scanner, scope_id, symbol, value); }
void (g_scanner_scope_remove_symbol)(GScanner * scanner, guint scope_id, const gchar * symbol) { stub_funcs.ptr_g_scanner_scope_remove_symbol(scanner, scope_id, symbol); }
gpointer (g_scanner_scope_lookup_symbol)(GScanner * scanner, guint scope_id, const gchar * symbol) { return stub_funcs.ptr_g_scanner_scope_lookup_symbol(scanner, scope_id, symbol); }
void (g_scanner_scope_foreach_symbol)(GScanner * scanner, guint scope_id, GHFunc func, gpointer user_data) { stub_funcs.ptr_g_scanner_scope_foreach_symbol(scanner, scope_id, func, user_data); }
gpointer (g_scanner_lookup_symbol)(GScanner * scanner, const gchar * symbol) { return stub_funcs.ptr_g_scanner_lookup_symbol(scanner, symbol); }
void (g_scanner_unexp_token)(GScanner * scanner, GTokenType expected_token, const gchar * identifier_spec, const gchar * symbol_spec, const gchar * symbol_name, const gchar * message, gint is_error) { stub_funcs.ptr_g_scanner_unexp_token(scanner, expected_token, identifier_spec, symbol_spec, symbol_name, message, is_error); }
GSequence * (g_sequence_new)(GDestroyNotify data_destroy) { return stub_funcs.ptr_g_sequence_new(data_destroy); }
void (g_sequence_free)(GSequence * seq) { stub_funcs.ptr_g_sequence_free(seq); }
gint (g_sequence_get_length)(GSequence * seq) { return stub_funcs.ptr_g_sequence_get_length(seq); }
void (g_sequence_foreach)(GSequence * seq, GFunc func, gpointer user_data) { stub_funcs.ptr_g_sequence_foreach(seq, func, user_data); }
void (g_sequence_foreach_range)(GSequenceIter * begin, GSequenceIter * end, GFunc func, gpointer user_data) { stub_funcs.ptr_g_sequence_foreach_range(begin, end, func, user_data); }
void (g_sequence_sort)(GSequence * seq, GCompareDataFunc cmp_func, gpointer cmp_data) { stub_funcs.ptr_g_sequence_sort(seq, cmp_func, cmp_data); }
void (g_sequence_sort_iter)(GSequence * seq, GSequenceIterCompareFunc cmp_func, gpointer cmp_data) { stub_funcs.ptr_g_sequence_sort_iter(seq, cmp_func, cmp_data); }
gboolean (g_sequence_is_empty)(GSequence * seq) { return stub_funcs.ptr_g_sequence_is_empty(seq); }
GSequenceIter * (g_sequence_get_begin_iter)(GSequence * seq) { return stub_funcs.ptr_g_sequence_get_begin_iter(seq); }
GSequenceIter * (g_sequence_get_end_iter)(GSequence * seq) { return stub_funcs.ptr_g_sequence_get_end_iter(seq); }
GSequenceIter * (g_sequence_get_iter_at_pos)(GSequence * seq, gint pos) { return stub_funcs.ptr_g_sequence_get_iter_at_pos(seq, pos); }
GSequenceIter * (g_sequence_append)(GSequence * seq, gpointer data) { return stub_funcs.ptr_g_sequence_append(seq, data); }
GSequenceIter * (g_sequence_prepend)(GSequence * seq, gpointer data) { return stub_funcs.ptr_g_sequence_prepend(seq, data); }
GSequenceIter * (g_sequence_insert_before)(GSequenceIter * iter, gpointer data) { return stub_funcs.ptr_g_sequence_insert_before(iter, data); }
void (g_sequence_move)(GSequenceIter * src, GSequenceIter * dest) { stub_funcs.ptr_g_sequence_move(src, dest); }
void (g_sequence_swap)(GSequenceIter * a, GSequenceIter * b) { stub_funcs.ptr_g_sequence_swap(a, b); }
GSequenceIter * (g_sequence_insert_sorted)(GSequence * seq, gpointer data, GCompareDataFunc cmp_func, gpointer cmp_data) { return stub_funcs.ptr_g_sequence_insert_sorted(seq, data, cmp_func, cmp_data); }
GSequenceIter * (g_sequence_insert_sorted_iter)(GSequence * seq, gpointer data, GSequenceIterCompareFunc iter_cmp, gpointer cmp_data) { return stub_funcs.ptr_g_sequence_insert_sorted_iter(seq, data, iter_cmp, cmp_data); }
void (g_sequence_sort_changed)(GSequenceIter * iter, GCompareDataFunc cmp_func, gpointer cmp_data) { stub_funcs.ptr_g_sequence_sort_changed(iter, cmp_func, cmp_data); }
void (g_sequence_sort_changed_iter)(GSequenceIter * iter, GSequenceIterCompareFunc iter_cmp, gpointer cmp_data) { stub_funcs.ptr_g_sequence_sort_changed_iter(iter, iter_cmp, cmp_data); }
void (g_sequence_remove)(GSequenceIter * iter) { stub_funcs.ptr_g_sequence_remove(iter); }
void (g_sequence_remove_range)(GSequenceIter * begin, GSequenceIter * end) { stub_funcs.ptr_g_sequence_remove_range(begin, end); }
void (g_sequence_move_range)(GSequenceIter * dest, GSequenceIter * begin, GSequenceIter * end) { stub_funcs.ptr_g_sequence_move_range(dest, begin, end); }
GSequenceIter * (g_sequence_search)(GSequence * seq, gpointer data, GCompareDataFunc cmp_func, gpointer cmp_data) { return stub_funcs.ptr_g_sequence_search(seq, data, cmp_func, cmp_data); }
GSequenceIter * (g_sequence_search_iter)(GSequence * seq, gpointer data, GSequenceIterCompareFunc iter_cmp, gpointer cmp_data) { return stub_funcs.ptr_g_sequence_search_iter(seq, data, iter_cmp, cmp_data); }
GSequenceIter * (g_sequence_lookup)(GSequence * seq, gpointer data, GCompareDataFunc cmp_func, gpointer cmp_data) { return stub_funcs.ptr_g_sequence_lookup(seq, data, cmp_func, cmp_data); }
GSequenceIter * (g_sequence_lookup_iter)(GSequence * seq, gpointer data, GSequenceIterCompareFunc iter_cmp, gpointer cmp_data) { return stub_funcs.ptr_g_sequence_lookup_iter(seq, data, iter_cmp, cmp_data); }
gpointer (g_sequence_get)(GSequenceIter * iter) { return stub_funcs.ptr_g_sequence_get(iter); }
void (g_sequence_set)(GSequenceIter * iter, gpointer data) { stub_funcs.ptr_g_sequence_set(iter, data); }
gboolean (g_sequence_iter_is_begin)(GSequenceIter * iter) { return stub_funcs.ptr_g_sequence_iter_is_begin(iter); }
gboolean (g_sequence_iter_is_end)(GSequenceIter * iter) { return stub_funcs.ptr_g_sequence_iter_is_end(iter); }
GSequenceIter * (g_sequence_iter_next)(GSequenceIter * iter) { return stub_funcs.ptr_g_sequence_iter_next(iter); }
GSequenceIter * (g_sequence_iter_prev)(GSequenceIter * iter) { return stub_funcs.ptr_g_sequence_iter_prev(iter); }
gint (g_sequence_iter_get_position)(GSequenceIter * iter) { return stub_funcs.ptr_g_sequence_iter_get_position(iter); }
GSequenceIter * (g_sequence_iter_move)(GSequenceIter * iter, gint delta) { return stub_funcs.ptr_g_sequence_iter_move(iter, delta); }
GSequence * (g_sequence_iter_get_sequence)(GSequenceIter * iter) { return stub_funcs.ptr_g_sequence_iter_get_sequence(iter); }
gint (g_sequence_iter_compare)(GSequenceIter * a, GSequenceIter * b) { return stub_funcs.ptr_g_sequence_iter_compare(a, b); }
GSequenceIter * (g_sequence_range_get_midpoint)(GSequenceIter * begin, GSequenceIter * end) { return stub_funcs.ptr_g_sequence_range_get_midpoint(begin, end); }
GQuark (g_shell_error_quark)(void) { return stub_funcs.ptr_g_shell_error_quark(); }
gchar * (g_shell_quote)(const gchar * unquoted_string) { return stub_funcs.ptr_g_shell_quote(unquoted_string); }
gchar * (g_shell_unquote)(const gchar * quoted_string, GError * * error) { return stub_funcs.ptr_g_shell_unquote(quoted_string, error); }
gboolean (g_shell_parse_argv)(const gchar * command_line, gint * argcp, gchar * * * argvp, GError * * error) { return stub_funcs.ptr_g_shell_parse_argv(command_line, argcp, argvp, error); }
gpointer (g_slice_alloc)(gsize block_size) { return stub_funcs.ptr_g_slice_alloc(block_size); }
gpointer (g_slice_alloc0)(gsize block_size) { return stub_funcs.ptr_g_slice_alloc0(block_size); }
gpointer (g_slice_copy)(gsize block_size, gconstpointer mem_block) { return stub_funcs.ptr_g_slice_copy(block_size, mem_block); }
void (g_slice_free1)(gsize block_size, gpointer mem_block) { stub_funcs.ptr_g_slice_free1(block_size, mem_block); }
void (g_slice_free_chain_with_offset)(gsize block_size, gpointer mem_chain, gsize next_offset) { stub_funcs.ptr_g_slice_free_chain_with_offset(block_size, mem_chain, next_offset); }
void (g_slice_set_config)(GSliceConfig ckey, gint64 value) { stub_funcs.ptr_g_slice_set_config(ckey, value); }
gint64 (g_slice_get_config)(GSliceConfig ckey) { return stub_funcs.ptr_g_slice_get_config(ckey); }
gint64 * (g_slice_get_config_state)(GSliceConfig ckey, gint64 address, guint * n_values) { return stub_funcs.ptr_g_slice_get_config_state(ckey, address, n_values); }
GQuark (g_spawn_error_quark)(void) { return stub_funcs.ptr_g_spawn_error_quark(); }
GQuark (g_spawn_exit_error_quark)(void) { return stub_funcs.ptr_g_spawn_exit_error_quark(); }
gboolean (g_spawn_async)(const gchar * working_directory, gchar * * argv, gchar * * envp, GSpawnFlags flags, GSpawnChildSetupFunc child_setup, gpointer user_data, GPid * child_pid, GError * * error) { return stub_funcs.ptr_g_spawn_async(working_directory, argv, envp, flags, child_setup, user_data, child_pid, error); }
gboolean (g_spawn_async_with_pipes)(const gchar * working_directory, gchar * * argv, gchar * * envp, GSpawnFlags flags, GSpawnChildSetupFunc child_setup, gpointer user_data, GPid * child_pid, gint * standard_input, gint * standard_output, gint * standard_error, GError * * error) { return stub_funcs.ptr_g_spawn_async_with_pipes(working_directory, argv, envp, flags, child_setup, user_data, child_pid, standard_input, standard_output, standard_error, error); }
gboolean (g_spawn_async_with_pipes_and_fds)(const gchar * working_directory, const gchar * const * argv, const gchar * const * envp, GSpawnFlags flags, GSpawnChildSetupFunc child_setup, gpointer user_data, gint stdin_fd, gint stdout_fd, gint stderr_fd, const gint * source_fds, const gint * target_fds, gsize n_fds, GPid * child_pid_out, gint * stdin_pipe_out, gint * stdout_pipe_out, gint * stderr_pipe_out, GError * * error) { return stub_funcs.ptr_g_spawn_async_with_pipes_and_fds(working_directory, argv, envp, flags, child_setup, user_data, stdin_fd, stdout_fd, stderr_fd, source_fds, target_fds, n_fds, child_pid_out, stdin_pipe_out, stdout_pipe_out, stderr_pipe_out, error); }
gboolean (g_spawn_async_with_fds)(const gchar * working_directory, gchar * * argv, gchar * * envp, GSpawnFlags flags, GSpawnChildSetupFunc child_setup, gpointer user_data, GPid * child_pid, gint stdin_fd, gint stdout_fd, gint stderr_fd, GError * * error) { return stub_funcs.ptr_g_spawn_async_with_fds(working_directory, argv, envp, flags, child_setup, user_data, child_pid, stdin_fd, stdout_fd, stderr_fd, error); }
gboolean (g_spawn_sync)(const gchar * working_directory, gchar * * argv, gchar * * envp, GSpawnFlags flags, GSpawnChildSetupFunc child_setup, gpointer user_data, gchar * * standard_output, gchar * * standard_error, gint * wait_status, GError * * error) { return stub_funcs.ptr_g_spawn_sync(working_directory, argv, envp, flags, child_setup, user_data, standard_output, standard_error, wait_status, error); }
gboolean (g_spawn_command_line_sync)(const gchar * command_line, gchar * * standard_output, gchar * * standard_error, gint * wait_status, GError * * error) { return stub_funcs.ptr_g_spawn_command_line_sync(command_line, standard_output, standard_error, wait_status, error); }
gboolean (g_spawn_command_line_async)(const gchar * command_line, GError * * error) { return stub_funcs.ptr_g_spawn_command_line_async(command_line, error); }
gboolean (g_spawn_check_wait_status)(gint wait_status, GError * * error) { return stub_funcs.ptr_g_spawn_check_wait_status(wait_status, error); }
gboolean (g_spawn_check_exit_status)(gint wait_status, GError * * error) { return stub_funcs.ptr_g_spawn_check_exit_status(wait_status, error); }
void (g_spawn_close_pid)(GPid pid) { stub_funcs.ptr_g_spawn_close_pid(pid); }
GStringChunk * (g_string_chunk_new)(gsize size) { return stub_funcs.ptr_g_string_chunk_new(size); }
void (g_string_chunk_free)(GStringChunk * chunk) { stub_funcs.ptr_g_string_chunk_free(chunk); }
void (g_string_chunk_clear)(GStringChunk * chunk) { stub_funcs.ptr_g_string_chunk_clear(chunk); }
gchar * (g_string_chunk_insert)(GStringChunk * chunk, const gchar * string) { return stub_funcs.ptr_g_string_chunk_insert(chunk, string); }
gchar * (g_string_chunk_insert_len)(GStringChunk * chunk, const gchar * string, gssize len) { return stub_funcs.ptr_g_string_chunk_insert_len(chunk, string, len); }
gchar * (g_string_chunk_insert_const)(GStringChunk * chunk, const gchar * string) { return stub_funcs.ptr_g_string_chunk_insert_const(chunk, string); }
GStrvBuilder * (g_strv_builder_new)(void) { return stub_funcs.ptr_g_strv_builder_new(); }
void (g_strv_builder_unref)(GStrvBuilder * builder) { stub_funcs.ptr_g_strv_builder_unref(builder); }
GStrv (g_strv_builder_unref_to_strv)(GStrvBuilder * builder) { return stub_funcs.ptr_g_strv_builder_unref_to_strv(builder); }
GStrvBuilder * (g_strv_builder_ref)(GStrvBuilder * builder) { return stub_funcs.ptr_g_strv_builder_ref(builder); }
void (g_strv_builder_add)(GStrvBuilder * builder, const char * value) { stub_funcs.ptr_g_strv_builder_add(builder, value); }
void (g_strv_builder_addv)(GStrvBuilder * builder, const char * * value) { stub_funcs.ptr_g_strv_builder_addv(builder, value); }
void (g_strv_builder_take)(GStrvBuilder * builder, char * value) { stub_funcs.ptr_g_strv_builder_take(builder, value); }
GStrv (g_strv_builder_end)(GStrvBuilder * builder) { return stub_funcs.ptr_g_strv_builder_end(builder); }
int (g_strcmp0)(const char * str1, const char * str2) { return stub_funcs.ptr_g_strcmp0(str1, str2); }
gboolean (g_test_subprocess)(void) { return stub_funcs.ptr_g_test_subprocess(); }
int (g_test_run)(void) { return stub_funcs.ptr_g_test_run(); }
void (g_test_add_func)(const char * testpath, GTestFunc test_func) { stub_funcs.ptr_g_test_add_func(testpath, test_func); }
void (g_test_add_data_func)(const char * testpath, gconstpointer test_data, GTestDataFunc test_func) { stub_funcs.ptr_g_test_add_data_func(testpath, test_data, test_func); }
void (g_test_add_data_func_full)(const char * testpath, gpointer test_data, GTestDataFunc test_func, GDestroyNotify data_free_func) { stub_funcs.ptr_g_test_add_data_func_full(testpath, test_data, test_func, data_free_func); }
const char * (g_test_get_path)(void) { return stub_funcs.ptr_g_test_get_path(); }
void (g_test_fail)(void) { stub_funcs.ptr_g_test_fail(); }
void (g_test_incomplete)(const gchar * msg) { stub_funcs.ptr_g_test_incomplete(msg); }
void (g_test_skip)(const gchar * msg) { stub_funcs.ptr_g_test_skip(msg); }
gboolean (g_test_failed)(void) { return stub_funcs.ptr_g_test_failed(); }
void (g_test_set_nonfatal_assertions)(void) { stub_funcs.ptr_g_test_set_nonfatal_assertions(); }
void (g_test_disable_crash_reporting)(void) { stub_funcs.ptr_g_test_disable_crash_reporting(); }
void (g_test_bug_base)(const char * uri_pattern) { stub_funcs.ptr_g_test_bug_base(uri_pattern); }
void (g_test_bug)(const char * bug_uri_snippet) { stub_funcs.ptr_g_test_bug(bug_uri_snippet); }
void (g_test_summary)(const char * summary) { stub_funcs.ptr_g_test_summary(summary); }
void (g_test_timer_start)(void) { stub_funcs.ptr_g_test_timer_start(); }
double (g_test_timer_elapsed)(void) { return stub_funcs.ptr_g_test_timer_elapsed(); }
double (g_test_timer_last)(void) { return stub_funcs.ptr_g_test_timer_last(); }
void (g_test_queue_free)(gpointer gfree_pointer) { stub_funcs.ptr_g_test_queue_free(gfree_pointer); }
void (g_test_queue_destroy)(GDestroyNotify destroy_func, gpointer destroy_data) { stub_funcs.ptr_g_test_queue_destroy(destroy_func, destroy_data); }
gboolean (g_test_trap_fork)(guint64 usec_timeout, GTestTrapFlags test_trap_flags) { return stub_funcs.ptr_g_test_trap_fork(usec_timeout, test_trap_flags); }
void (g_test_trap_subprocess)(const char * test_path, guint64 usec_timeout, GTestSubprocessFlags test_flags) { stub_funcs.ptr_g_test_trap_subprocess(test_path, usec_timeout, test_flags); }
void (g_test_trap_subprocess_with_envp)(const char * test_path, const char * const * envp, guint64 usec_timeout, GTestSubprocessFlags test_flags) { stub_funcs.ptr_g_test_trap_subprocess_with_envp(test_path, envp, usec_timeout, test_flags); }
gboolean (g_test_trap_has_passed)(void) { return stub_funcs.ptr_g_test_trap_has_passed(); }
gboolean (g_test_trap_reached_timeout)(void) { return stub_funcs.ptr_g_test_trap_reached_timeout(); }
gint32 (g_test_rand_int)(void) { return stub_funcs.ptr_g_test_rand_int(); }
gint32 (g_test_rand_int_range)(gint32 begin, gint32 end) { return stub_funcs.ptr_g_test_rand_int_range(begin, end); }
double (g_test_rand_double)(void) { return stub_funcs.ptr_g_test_rand_double(); }
double (g_test_rand_double_range)(double range_start, double range_end) { return stub_funcs.ptr_g_test_rand_double_range(range_start, range_end); }
GTestCase * (g_test_create_case)(const char * test_name, gsize data_size, gconstpointer test_data, GTestFixtureFunc data_setup, GTestFixtureFunc data_test, GTestFixtureFunc data_teardown) { return stub_funcs.ptr_g_test_create_case(test_name, data_size, test_data, data_setup, data_test, data_teardown); }
GTestSuite * (g_test_create_suite)(const char * suite_name) { return stub_funcs.ptr_g_test_create_suite(suite_name); }
GTestSuite * (g_test_get_root)(void) { return stub_funcs.ptr_g_test_get_root(); }
void (g_test_suite_add)(GTestSuite * suite, GTestCase * test_case) { stub_funcs.ptr_g_test_suite_add(suite, test_case); }
void (g_test_suite_add_suite)(GTestSuite * suite, GTestSuite * nestedsuite) { stub_funcs.ptr_g_test_suite_add_suite(suite, nestedsuite); }
int (g_test_run_suite)(GTestSuite * suite) { return stub_funcs.ptr_g_test_run_suite(suite); }
void (g_test_case_free)(GTestCase * test_case) { stub_funcs.ptr_g_test_case_free(test_case); }
void (g_test_suite_free)(GTestSuite * suite) { stub_funcs.ptr_g_test_suite_free(suite); }
void (g_test_trap_assertions)(const char * domain, const char * file, int line, const char * func, guint64 assertion_flags, const char * pattern) { stub_funcs.ptr_g_test_trap_assertions(domain, file, line, func, assertion_flags, pattern); }
void (g_assertion_message)(const char * domain, const char * file, int line, const char * func, const char * message) { stub_funcs.ptr_g_assertion_message(domain, file, line, func, message); }
void (g_assertion_message_expr)(const char * domain, const char * file, int line, const char * func, const char * expr) { stub_funcs.ptr_g_assertion_message_expr(domain, file, line, func, expr); __builtin_unreachable(); }
void (g_assertion_message_cmpstr)(const char * domain, const char * file, int line, const char * func, const char * expr, const char * arg1, const char * cmp, const char * arg2) { stub_funcs.ptr_g_assertion_message_cmpstr(domain, file, line, func, expr, arg1, cmp, arg2); }
void (g_assertion_message_cmpstrv)(const char * domain, const char * file, int line, const char * func, const char * expr, const char * const * arg1, const char * const * arg2, gsize first_wrong_idx) { stub_funcs.ptr_g_assertion_message_cmpstrv(domain, file, line, func, expr, arg1, arg2, first_wrong_idx); }
void (g_assertion_message_cmpint)(const char * domain, const char * file, int line, const char * func, const char * expr, guint64 arg1, const char * cmp, guint64 arg2, char numtype) { stub_funcs.ptr_g_assertion_message_cmpint(domain, file, line, func, expr, arg1, cmp, arg2, numtype); }
void (g_assertion_message_cmpnum)(const char * domain, const char * file, int line, const char * func, const char * expr, long double arg1, const char * cmp, long double arg2, char numtype) { stub_funcs.ptr_g_assertion_message_cmpnum(domain, file, line, func, expr, arg1, cmp, arg2, numtype); }
void (g_assertion_message_error)(const char * domain, const char * file, int line, const char * func, const char * expr, const GError * error, GQuark error_domain, int error_code) { stub_funcs.ptr_g_assertion_message_error(domain, file, line, func, expr, error, error_domain, error_code); }
void (g_test_add_vtable)(const char * testpath, gsize data_size, gconstpointer test_data, GTestFixtureFunc data_setup, GTestFixtureFunc data_test, GTestFixtureFunc data_teardown) { stub_funcs.ptr_g_test_add_vtable(testpath, data_size, test_data, data_setup, data_test, data_teardown); }
const char * (g_test_log_type_name)(GTestLogType log_type) { return stub_funcs.ptr_g_test_log_type_name(log_type); }
GTestLogBuffer * (g_test_log_buffer_new)(void) { return stub_funcs.ptr_g_test_log_buffer_new(); }
void (g_test_log_buffer_free)(GTestLogBuffer * tbuffer) { stub_funcs.ptr_g_test_log_buffer_free(tbuffer); }
void (g_test_log_buffer_push)(GTestLogBuffer * tbuffer, guint n_bytes, const guint8 * bytes) { stub_funcs.ptr_g_test_log_buffer_push(tbuffer, n_bytes, bytes); }
GTestLogMsg * (g_test_log_buffer_pop)(GTestLogBuffer * tbuffer) { return stub_funcs.ptr_g_test_log_buffer_pop(tbuffer); }
void (g_test_log_msg_free)(GTestLogMsg * tmsg) { stub_funcs.ptr_g_test_log_msg_free(tmsg); }
void (g_test_log_set_fatal_handler)(GTestLogFatalFunc log_func, gpointer user_data) { stub_funcs.ptr_g_test_log_set_fatal_handler(log_func, user_data); }
void (g_test_expect_message)(const gchar * log_domain, GLogLevelFlags log_level, const gchar * pattern) { stub_funcs.ptr_g_test_expect_message(log_domain, log_level, pattern); }
void (g_test_assert_expected_messages_internal)(const char * domain, const char * file, int line, const char * func) { stub_funcs.ptr_g_test_assert_expected_messages_internal(domain, file, line, func); }
const gchar * (g_test_get_dir)(GTestFileType file_type) { return stub_funcs.ptr_g_test_get_dir(file_type); }
GThreadPool * (g_thread_pool_new)(GFunc func, gpointer user_data, gint max_threads, gboolean exclusive, GError * * error) { return stub_funcs.ptr_g_thread_pool_new(func, user_data, max_threads, exclusive, error); }
GThreadPool * (g_thread_pool_new_full)(GFunc func, gpointer user_data, GDestroyNotify item_free_func, gint max_threads, gboolean exclusive, GError * * error) { return stub_funcs.ptr_g_thread_pool_new_full(func, user_data, item_free_func, max_threads, exclusive, error); }
void (g_thread_pool_free)(GThreadPool * pool, gboolean immediate, gboolean wait_) { stub_funcs.ptr_g_thread_pool_free(pool, immediate, wait_); }
gboolean (g_thread_pool_push)(GThreadPool * pool, gpointer data, GError * * error) { return stub_funcs.ptr_g_thread_pool_push(pool, data, error); }
guint (g_thread_pool_unprocessed)(GThreadPool * pool) { return stub_funcs.ptr_g_thread_pool_unprocessed(pool); }
void (g_thread_pool_set_sort_function)(GThreadPool * pool, GCompareDataFunc func, gpointer user_data) { stub_funcs.ptr_g_thread_pool_set_sort_function(pool, func, user_data); }
gboolean (g_thread_pool_move_to_front)(GThreadPool * pool, gpointer data) { return stub_funcs.ptr_g_thread_pool_move_to_front(pool, data); }
gboolean (g_thread_pool_set_max_threads)(GThreadPool * pool, gint max_threads, GError * * error) { return stub_funcs.ptr_g_thread_pool_set_max_threads(pool, max_threads, error); }
gint (g_thread_pool_get_max_threads)(GThreadPool * pool) { return stub_funcs.ptr_g_thread_pool_get_max_threads(pool); }
guint (g_thread_pool_get_num_threads)(GThreadPool * pool) { return stub_funcs.ptr_g_thread_pool_get_num_threads(pool); }
void (g_thread_pool_set_max_unused_threads)(gint max_threads) { stub_funcs.ptr_g_thread_pool_set_max_unused_threads(max_threads); }
gint (g_thread_pool_get_max_unused_threads)(void) { return stub_funcs.ptr_g_thread_pool_get_max_unused_threads(); }
guint (g_thread_pool_get_num_unused_threads)(void) { return stub_funcs.ptr_g_thread_pool_get_num_unused_threads(); }
void (g_thread_pool_stop_unused_threads)(void) { stub_funcs.ptr_g_thread_pool_stop_unused_threads(); }
void (g_thread_pool_set_max_idle_time)(guint interval) { stub_funcs.ptr_g_thread_pool_set_max_idle_time(interval); }
guint (g_thread_pool_get_max_idle_time)(void) { return stub_funcs.ptr_g_thread_pool_get_max_idle_time(); }
GTimer * (g_timer_new)(void) { return stub_funcs.ptr_g_timer_new(); }
void (g_timer_destroy)(GTimer * timer) { stub_funcs.ptr_g_timer_destroy(timer); }
void (g_timer_start)(GTimer * timer) { stub_funcs.ptr_g_timer_start(timer); }
void (g_timer_stop)(GTimer * timer) { stub_funcs.ptr_g_timer_stop(timer); }
void (g_timer_reset)(GTimer * timer) { stub_funcs.ptr_g_timer_reset(timer); }
void (g_timer_continue)(GTimer * timer) { stub_funcs.ptr_g_timer_continue(timer); }
gdouble (g_timer_elapsed)(GTimer * timer, gulong * microseconds) { return stub_funcs.ptr_g_timer_elapsed(timer, microseconds); }
gboolean (g_timer_is_active)(GTimer * timer) { return stub_funcs.ptr_g_timer_is_active(timer); }
void (g_usleep)(gulong microseconds) { stub_funcs.ptr_g_usleep(microseconds); }
void (g_time_val_add)(GTimeVal * time_, glong microseconds) { stub_funcs.ptr_g_time_val_add(time_, microseconds); }
gboolean (g_time_val_from_iso8601)(const gchar * iso_date, GTimeVal * time_) { return stub_funcs.ptr_g_time_val_from_iso8601(iso_date, time_); }
gchar * (g_time_val_to_iso8601)(GTimeVal * time_) { return stub_funcs.ptr_g_time_val_to_iso8601(time_); }
void (g_trash_stack_push)(GTrashStack * * stack_p, gpointer data_p) { stub_funcs.ptr_g_trash_stack_push(stack_p, data_p); }
gpointer (g_trash_stack_pop)(GTrashStack * * stack_p) { return stub_funcs.ptr_g_trash_stack_pop(stack_p); }
gpointer (g_trash_stack_peek)(GTrashStack * * stack_p) { return stub_funcs.ptr_g_trash_stack_peek(stack_p); }
guint (g_trash_stack_height)(GTrashStack * * stack_p) { return stub_funcs.ptr_g_trash_stack_height(stack_p); }
GTree * (g_tree_new)(GCompareFunc key_compare_func) { return stub_funcs.ptr_g_tree_new(key_compare_func); }
GTree * (g_tree_new_with_data)(GCompareDataFunc key_compare_func, gpointer key_compare_data) { return stub_funcs.ptr_g_tree_new_with_data(key_compare_func, key_compare_data); }
GTree * (g_tree_new_full)(GCompareDataFunc key_compare_func, gpointer key_compare_data, GDestroyNotify key_destroy_func, GDestroyNotify value_destroy_func) { return stub_funcs.ptr_g_tree_new_full(key_compare_func, key_compare_data, key_destroy_func, value_destroy_func); }
GTreeNode * (g_tree_node_first)(GTree * tree) { return stub_funcs.ptr_g_tree_node_first(tree); }
GTreeNode * (g_tree_node_last)(GTree * tree) { return stub_funcs.ptr_g_tree_node_last(tree); }
GTreeNode * (g_tree_node_previous)(GTreeNode * node) { return stub_funcs.ptr_g_tree_node_previous(node); }
GTreeNode * (g_tree_node_next)(GTreeNode * node) { return stub_funcs.ptr_g_tree_node_next(node); }
GTree * (g_tree_ref)(GTree * tree) { return stub_funcs.ptr_g_tree_ref(tree); }
void (g_tree_unref)(GTree * tree) { stub_funcs.ptr_g_tree_unref(tree); }
void (g_tree_destroy)(GTree * tree) { stub_funcs.ptr_g_tree_destroy(tree); }
GTreeNode * (g_tree_insert_node)(GTree * tree, gpointer key, gpointer value) { return stub_funcs.ptr_g_tree_insert_node(tree, key, value); }
void (g_tree_insert)(GTree * tree, gpointer key, gpointer value) { stub_funcs.ptr_g_tree_insert(tree, key, value); }
GTreeNode * (g_tree_replace_node)(GTree * tree, gpointer key, gpointer value) { return stub_funcs.ptr_g_tree_replace_node(tree, key, value); }
void (g_tree_replace)(GTree * tree, gpointer key, gpointer value) { stub_funcs.ptr_g_tree_replace(tree, key, value); }
gboolean (g_tree_remove)(GTree * tree, gconstpointer key) { return stub_funcs.ptr_g_tree_remove(tree, key); }
void (g_tree_remove_all)(GTree * tree) { stub_funcs.ptr_g_tree_remove_all(tree); }
gboolean (g_tree_steal)(GTree * tree, gconstpointer key) { return stub_funcs.ptr_g_tree_steal(tree, key); }
gpointer (g_tree_node_key)(GTreeNode * node) { return stub_funcs.ptr_g_tree_node_key(node); }
gpointer (g_tree_node_value)(GTreeNode * node) { return stub_funcs.ptr_g_tree_node_value(node); }
GTreeNode * (g_tree_lookup_node)(GTree * tree, gconstpointer key) { return stub_funcs.ptr_g_tree_lookup_node(tree, key); }
gpointer (g_tree_lookup)(GTree * tree, gconstpointer key) { return stub_funcs.ptr_g_tree_lookup(tree, key); }
gboolean (g_tree_lookup_extended)(GTree * tree, gconstpointer lookup_key, gpointer * orig_key, gpointer * value) { return stub_funcs.ptr_g_tree_lookup_extended(tree, lookup_key, orig_key, value); }
void (g_tree_foreach)(GTree * tree, GTraverseFunc func, gpointer user_data) { stub_funcs.ptr_g_tree_foreach(tree, func, user_data); }
void (g_tree_foreach_node)(GTree * tree, GTraverseNodeFunc func, gpointer user_data) { stub_funcs.ptr_g_tree_foreach_node(tree, func, user_data); }
void (g_tree_traverse)(GTree * tree, GTraverseFunc traverse_func, GTraverseType traverse_type, gpointer user_data) { stub_funcs.ptr_g_tree_traverse(tree, traverse_func, traverse_type, user_data); }
GTreeNode * (g_tree_search_node)(GTree * tree, GCompareFunc search_func, gconstpointer user_data) { return stub_funcs.ptr_g_tree_search_node(tree, search_func, user_data); }
gpointer (g_tree_search)(GTree * tree, GCompareFunc search_func, gconstpointer user_data) { return stub_funcs.ptr_g_tree_search(tree, search_func, user_data); }
GTreeNode * (g_tree_lower_bound)(GTree * tree, gconstpointer key) { return stub_funcs.ptr_g_tree_lower_bound(tree, key); }
GTreeNode * (g_tree_upper_bound)(GTree * tree, gconstpointer key) { return stub_funcs.ptr_g_tree_upper_bound(tree, key); }
gint (g_tree_height)(GTree * tree) { return stub_funcs.ptr_g_tree_height(tree); }
gint (g_tree_nnodes)(GTree * tree) { return stub_funcs.ptr_g_tree_nnodes(tree); }
GUri * (g_uri_ref)(GUri * uri) { return stub_funcs.ptr_g_uri_ref(uri); }
void (g_uri_unref)(GUri * uri) { stub_funcs.ptr_g_uri_unref(uri); }
gboolean (g_uri_split)(const gchar * uri_ref, GUriFlags flags, gchar * * scheme, gchar * * userinfo, gchar * * host, gint * port, gchar * * path, gchar * * query, gchar * * fragment, GError * * error) { return stub_funcs.ptr_g_uri_split(uri_ref, flags, scheme, userinfo, host, port, path, query, fragment, error); }
gboolean (g_uri_split_with_user)(const gchar * uri_ref, GUriFlags flags, gchar * * scheme, gchar * * user, gchar * * password, gchar * * auth_params, gchar * * host, gint * port, gchar * * path, gchar * * query, gchar * * fragment, GError * * error) { return stub_funcs.ptr_g_uri_split_with_user(uri_ref, flags, scheme, user, password, auth_params, host, port, path, query, fragment, error); }
gboolean (g_uri_split_network)(const gchar * uri_string, GUriFlags flags, gchar * * scheme, gchar * * host, gint * port, GError * * error) { return stub_funcs.ptr_g_uri_split_network(uri_string, flags, scheme, host, port, error); }
gboolean (g_uri_is_valid)(const gchar * uri_string, GUriFlags flags, GError * * error) { return stub_funcs.ptr_g_uri_is_valid(uri_string, flags, error); }
gchar * (g_uri_join)(GUriFlags flags, const gchar * scheme, const gchar * userinfo, const gchar * host, gint port, const gchar * path, const gchar * query, const gchar * fragment) { return stub_funcs.ptr_g_uri_join(flags, scheme, userinfo, host, port, path, query, fragment); }
gchar * (g_uri_join_with_user)(GUriFlags flags, const gchar * scheme, const gchar * user, const gchar * password, const gchar * auth_params, const gchar * host, gint port, const gchar * path, const gchar * query, const gchar * fragment) { return stub_funcs.ptr_g_uri_join_with_user(flags, scheme, user, password, auth_params, host, port, path, query, fragment); }
GUri * (g_uri_parse)(const gchar * uri_string, GUriFlags flags, GError * * error) { return stub_funcs.ptr_g_uri_parse(uri_string, flags, error); }
GUri * (g_uri_parse_relative)(GUri * base_uri, const gchar * uri_ref, GUriFlags flags, GError * * error) { return stub_funcs.ptr_g_uri_parse_relative(base_uri, uri_ref, flags, error); }
gchar * (g_uri_resolve_relative)(const gchar * base_uri_string, const gchar * uri_ref, GUriFlags flags, GError * * error) { return stub_funcs.ptr_g_uri_resolve_relative(base_uri_string, uri_ref, flags, error); }
GUri * (g_uri_build)(GUriFlags flags, const gchar * scheme, const gchar * userinfo, const gchar * host, gint port, const gchar * path, const gchar * query, const gchar * fragment) { return stub_funcs.ptr_g_uri_build(flags, scheme, userinfo, host, port, path, query, fragment); }
GUri * (g_uri_build_with_user)(GUriFlags flags, const gchar * scheme, const gchar * user, const gchar * password, const gchar * auth_params, const gchar * host, gint port, const gchar * path, const gchar * query, const gchar * fragment) { return stub_funcs.ptr_g_uri_build_with_user(flags, scheme, user, password, auth_params, host, port, path, query, fragment); }
char * (g_uri_to_string)(GUri * uri) { return stub_funcs.ptr_g_uri_to_string(uri); }
char * (g_uri_to_string_partial)(GUri * uri, GUriHideFlags flags) { return stub_funcs.ptr_g_uri_to_string_partial(uri, flags); }
const gchar * (g_uri_get_scheme)(GUri * uri) { return stub_funcs.ptr_g_uri_get_scheme(uri); }
const gchar * (g_uri_get_userinfo)(GUri * uri) { return stub_funcs.ptr_g_uri_get_userinfo(uri); }
const gchar * (g_uri_get_user)(GUri * uri) { return stub_funcs.ptr_g_uri_get_user(uri); }
const gchar * (g_uri_get_password)(GUri * uri) { return stub_funcs.ptr_g_uri_get_password(uri); }
const gchar * (g_uri_get_auth_params)(GUri * uri) { return stub_funcs.ptr_g_uri_get_auth_params(uri); }
const gchar * (g_uri_get_host)(GUri * uri) { return stub_funcs.ptr_g_uri_get_host(uri); }
gint (g_uri_get_port)(GUri * uri) { return stub_funcs.ptr_g_uri_get_port(uri); }
const gchar * (g_uri_get_path)(GUri * uri) { return stub_funcs.ptr_g_uri_get_path(uri); }
const gchar * (g_uri_get_query)(GUri * uri) { return stub_funcs.ptr_g_uri_get_query(uri); }
const gchar * (g_uri_get_fragment)(GUri * uri) { return stub_funcs.ptr_g_uri_get_fragment(uri); }
GUriFlags (g_uri_get_flags)(GUri * uri) { return stub_funcs.ptr_g_uri_get_flags(uri); }
GHashTable * (g_uri_parse_params)(const gchar * params, gssize length, const gchar * separators, GUriParamsFlags flags, GError * * error) { return stub_funcs.ptr_g_uri_parse_params(params, length, separators, flags, error); }
void (g_uri_params_iter_init)(GUriParamsIter * iter, const gchar * params, gssize length, const gchar * separators, GUriParamsFlags flags) { stub_funcs.ptr_g_uri_params_iter_init(iter, params, length, separators, flags); }
gboolean (g_uri_params_iter_next)(GUriParamsIter * iter, gchar * * attribute, gchar * * value, GError * * error) { return stub_funcs.ptr_g_uri_params_iter_next(iter, attribute, value, error); }
GQuark (g_uri_error_quark)(void) { return stub_funcs.ptr_g_uri_error_quark(); }
char * (g_uri_unescape_string)(const char * escaped_string, const char * illegal_characters) { return stub_funcs.ptr_g_uri_unescape_string(escaped_string, illegal_characters); }
char * (g_uri_unescape_segment)(const char * escaped_string, const char * escaped_string_end, const char * illegal_characters) { return stub_funcs.ptr_g_uri_unescape_segment(escaped_string, escaped_string_end, illegal_characters); }
char * (g_uri_parse_scheme)(const char * uri) { return stub_funcs.ptr_g_uri_parse_scheme(uri); }
const char * (g_uri_peek_scheme)(const char * uri) { return stub_funcs.ptr_g_uri_peek_scheme(uri); }
char * (g_uri_escape_string)(const char * unescaped, const char * reserved_chars_allowed, gboolean allow_utf8) { return stub_funcs.ptr_g_uri_escape_string(unescaped, reserved_chars_allowed, allow_utf8); }
GBytes * (g_uri_unescape_bytes)(const char * escaped_string, gssize length, const char * illegal_characters, GError * * error) { return stub_funcs.ptr_g_uri_unescape_bytes(escaped_string, length, illegal_characters, error); }
char * (g_uri_escape_bytes)(const guint8 * unescaped, gsize length, const char * reserved_chars_allowed) { return stub_funcs.ptr_g_uri_escape_bytes(unescaped, length, reserved_chars_allowed); }
gboolean (g_uuid_string_is_valid)(const gchar * str) { return stub_funcs.ptr_g_uuid_string_is_valid(str); }
gchar * (g_uuid_string_random)(void) { return stub_funcs.ptr_g_uuid_string_random(); }
const gchar * (glib_check_version)(guint required_major, guint required_minor, guint required_micro) { return stub_funcs.ptr_glib_check_version(required_major, required_minor, required_micro); }
GMemChunk * (g_mem_chunk_new)(const gchar * name, gint atom_size, gsize area_size, gint type) { return stub_funcs.ptr_g_mem_chunk_new(name, atom_size, area_size, type); }
void (g_mem_chunk_destroy)(GMemChunk * mem_chunk) { stub_funcs.ptr_g_mem_chunk_destroy(mem_chunk); }
gpointer (g_mem_chunk_alloc)(GMemChunk * mem_chunk) { return stub_funcs.ptr_g_mem_chunk_alloc(mem_chunk); }
gpointer (g_mem_chunk_alloc0)(GMemChunk * mem_chunk) { return stub_funcs.ptr_g_mem_chunk_alloc0(mem_chunk); }
void (g_mem_chunk_free)(GMemChunk * mem_chunk, gpointer mem) { stub_funcs.ptr_g_mem_chunk_free(mem_chunk, mem); }
void (g_mem_chunk_clean)(GMemChunk * mem_chunk) { stub_funcs.ptr_g_mem_chunk_clean(mem_chunk); }
void (g_mem_chunk_reset)(GMemChunk * mem_chunk) { stub_funcs.ptr_g_mem_chunk_reset(mem_chunk); }
void (g_mem_chunk_print)(GMemChunk * mem_chunk) { stub_funcs.ptr_g_mem_chunk_print(mem_chunk); }
void (g_mem_chunk_info)(void) { stub_funcs.ptr_g_mem_chunk_info(); }
void (g_blow_chunks)(void) { stub_funcs.ptr_g_blow_chunks(); }
GAllocator * (g_allocator_new)(const gchar * name, guint n_preallocs) { return stub_funcs.ptr_g_allocator_new(name, n_preallocs); }
void (g_allocator_free)(GAllocator * allocator) { stub_funcs.ptr_g_allocator_free(allocator); }
void (g_list_push_allocator)(GAllocator * allocator) { stub_funcs.ptr_g_list_push_allocator(allocator); }
void (g_list_pop_allocator)(void) { stub_funcs.ptr_g_list_pop_allocator(); }
void (g_slist_push_allocator)(GAllocator * allocator) { stub_funcs.ptr_g_slist_push_allocator(allocator); }
void (g_slist_pop_allocator)(void) { stub_funcs.ptr_g_slist_pop_allocator(); }
void (g_node_push_allocator)(GAllocator * allocator) { stub_funcs.ptr_g_node_push_allocator(allocator); }
void (g_node_pop_allocator)(void) { stub_funcs.ptr_g_node_pop_allocator(); }
GCache * (g_cache_new)(GCacheNewFunc value_new_func, GCacheDestroyFunc value_destroy_func, GCacheDupFunc key_dup_func, GCacheDestroyFunc key_destroy_func, GHashFunc hash_key_func, GHashFunc hash_value_func, GEqualFunc key_equal_func) { return stub_funcs.ptr_g_cache_new(value_new_func, value_destroy_func, key_dup_func, key_destroy_func, hash_key_func, hash_value_func, key_equal_func); }
void (g_cache_destroy)(GCache * cache) { stub_funcs.ptr_g_cache_destroy(cache); }
gpointer (g_cache_insert)(GCache * cache, gpointer key) { return stub_funcs.ptr_g_cache_insert(cache, key); }
void (g_cache_remove)(GCache * cache, gconstpointer value) { stub_funcs.ptr_g_cache_remove(cache, value); }
void (g_cache_key_foreach)(GCache * cache, GHFunc func, gpointer user_data) { stub_funcs.ptr_g_cache_key_foreach(cache, func, user_data); }
void (g_cache_value_foreach)(GCache * cache, GHFunc func, gpointer user_data) { stub_funcs.ptr_g_cache_value_foreach(cache, func, user_data); }
GCompletion * (g_completion_new)(GCompletionFunc func) { return stub_funcs.ptr_g_completion_new(func); }
void (g_completion_add_items)(GCompletion * cmp, GList * items) { stub_funcs.ptr_g_completion_add_items(cmp, items); }
void (g_completion_remove_items)(GCompletion * cmp, GList * items) { stub_funcs.ptr_g_completion_remove_items(cmp, items); }
void (g_completion_clear_items)(GCompletion * cmp) { stub_funcs.ptr_g_completion_clear_items(cmp); }
GList * (g_completion_complete)(GCompletion * cmp, const gchar * prefix, gchar * * new_prefix) { return stub_funcs.ptr_g_completion_complete(cmp, prefix, new_prefix); }
GList * (g_completion_complete_utf8)(GCompletion * cmp, const gchar * prefix, gchar * * new_prefix) { return stub_funcs.ptr_g_completion_complete_utf8(cmp, prefix, new_prefix); }
void (g_completion_set_compare)(GCompletion * cmp, GCompletionStrncmpFunc strncmp_func) { stub_funcs.ptr_g_completion_set_compare(cmp, strncmp_func); }
void (g_completion_free)(GCompletion * cmp) { stub_funcs.ptr_g_completion_free(cmp); }
GRelation * (g_relation_new)(gint fields) { return stub_funcs.ptr_g_relation_new(fields); }
void (g_relation_destroy)(GRelation * relation) { stub_funcs.ptr_g_relation_destroy(relation); }
void (g_relation_index)(GRelation * relation, gint field, GHashFunc hash_func, GEqualFunc key_equal_func) { stub_funcs.ptr_g_relation_index(relation, field, hash_func, key_equal_func); }
gint (g_relation_delete)(GRelation * relation, gconstpointer key, gint field) { return stub_funcs.ptr_g_relation_delete(relation, key, field); }
GTuples * (g_relation_select)(GRelation * relation, gconstpointer key, gint field) { return stub_funcs.ptr_g_relation_select(relation, key, field); }
gint (g_relation_count)(GRelation * relation, gconstpointer key, gint field) { return stub_funcs.ptr_g_relation_count(relation, key, field); }
void (g_relation_print)(GRelation * relation) { stub_funcs.ptr_g_relation_print(relation); }
void (g_tuples_destroy)(GTuples * tuples) { stub_funcs.ptr_g_tuples_destroy(tuples); }
gpointer (g_tuples_index)(GTuples * tuples, gint index_, gint field) { return stub_funcs.ptr_g_tuples_index(tuples, index_, field); }
GThread * (g_thread_create)(GThreadFunc func, gpointer data, gboolean joinable, GError * * error) { return stub_funcs.ptr_g_thread_create(func, data, joinable, error); }
GThread * (g_thread_create_full)(GThreadFunc func, gpointer data, gulong stack_size, gboolean joinable, gboolean bound, GThreadPriority priority, GError * * error) { return stub_funcs.ptr_g_thread_create_full(func, data, stack_size, joinable, bound, priority, error); }
void (g_thread_set_priority)(GThread * thread, GThreadPriority priority) { stub_funcs.ptr_g_thread_set_priority(thread, priority); }
void (g_thread_foreach)(GFunc thread_func, gpointer user_data) { stub_funcs.ptr_g_thread_foreach(thread_func, user_data); }
void (g_static_mutex_init)(GStaticMutex * mutex) { stub_funcs.ptr_g_static_mutex_init(mutex); }
void (g_static_mutex_free)(GStaticMutex * mutex) { stub_funcs.ptr_g_static_mutex_free(mutex); }
GMutex * (g_static_mutex_get_mutex_impl)(GStaticMutex * mutex) { return stub_funcs.ptr_g_static_mutex_get_mutex_impl(mutex); }
void (g_static_rec_mutex_init)(GStaticRecMutex * mutex) { stub_funcs.ptr_g_static_rec_mutex_init(mutex); }
void (g_static_rec_mutex_lock)(GStaticRecMutex * mutex) { stub_funcs.ptr_g_static_rec_mutex_lock(mutex); }
gboolean (g_static_rec_mutex_trylock)(GStaticRecMutex * mutex) { return stub_funcs.ptr_g_static_rec_mutex_trylock(mutex); }
void (g_static_rec_mutex_unlock)(GStaticRecMutex * mutex) { stub_funcs.ptr_g_static_rec_mutex_unlock(mutex); }
void (g_static_rec_mutex_lock_full)(GStaticRecMutex * mutex, guint depth) { stub_funcs.ptr_g_static_rec_mutex_lock_full(mutex, depth); }
guint (g_static_rec_mutex_unlock_full)(GStaticRecMutex * mutex) { return stub_funcs.ptr_g_static_rec_mutex_unlock_full(mutex); }
void (g_static_rec_mutex_free)(GStaticRecMutex * mutex) { stub_funcs.ptr_g_static_rec_mutex_free(mutex); }
void (g_static_rw_lock_init)(GStaticRWLock * lock) { stub_funcs.ptr_g_static_rw_lock_init(lock); }
void (g_static_rw_lock_reader_lock)(GStaticRWLock * lock) { stub_funcs.ptr_g_static_rw_lock_reader_lock(lock); }
gboolean (g_static_rw_lock_reader_trylock)(GStaticRWLock * lock) { return stub_funcs.ptr_g_static_rw_lock_reader_trylock(lock); }
void (g_static_rw_lock_reader_unlock)(GStaticRWLock * lock) { stub_funcs.ptr_g_static_rw_lock_reader_unlock(lock); }
void (g_static_rw_lock_writer_lock)(GStaticRWLock * lock) { stub_funcs.ptr_g_static_rw_lock_writer_lock(lock); }
gboolean (g_static_rw_lock_writer_trylock)(GStaticRWLock * lock) { return stub_funcs.ptr_g_static_rw_lock_writer_trylock(lock); }
void (g_static_rw_lock_writer_unlock)(GStaticRWLock * lock) { stub_funcs.ptr_g_static_rw_lock_writer_unlock(lock); }
void (g_static_rw_lock_free)(GStaticRWLock * lock) { stub_funcs.ptr_g_static_rw_lock_free(lock); }
GPrivate * (g_private_new)(GDestroyNotify notify) { return stub_funcs.ptr_g_private_new(notify); }
void (g_static_private_init)(GStaticPrivate * private_key) { stub_funcs.ptr_g_static_private_init(private_key); }
gpointer (g_static_private_get)(GStaticPrivate * private_key) { return stub_funcs.ptr_g_static_private_get(private_key); }
void (g_static_private_set)(GStaticPrivate * private_key, gpointer data, GDestroyNotify notify) { stub_funcs.ptr_g_static_private_set(private_key, data, notify); }
void (g_static_private_free)(GStaticPrivate * private_key) { stub_funcs.ptr_g_static_private_free(private_key); }
gboolean (g_once_init_enter_impl)(volatile gsize * location) { return stub_funcs.ptr_g_once_init_enter_impl(location); }
void (g_thread_init)(gpointer vtable) { stub_funcs.ptr_g_thread_init(vtable); }
void (g_thread_init_with_errorcheck_mutexes)(gpointer vtable) { stub_funcs.ptr_g_thread_init_with_errorcheck_mutexes(vtable); }
gboolean (g_thread_get_initialized)(void) { return stub_funcs.ptr_g_thread_get_initialized(); }
GMutex * (g_mutex_new)(void) { return stub_funcs.ptr_g_mutex_new(); }
void (g_mutex_free)(GMutex * mutex) { stub_funcs.ptr_g_mutex_free(mutex); }
GCond * (g_cond_new)(void) { return stub_funcs.ptr_g_cond_new(); }
void (g_cond_free)(GCond * cond) { stub_funcs.ptr_g_cond_free(cond); }
gboolean (g_cond_timed_wait)(GCond * cond, GMutex * mutex, GTimeVal * abs_time) { return stub_funcs.ptr_g_cond_timed_wait(cond, mutex, abs_time); }
gint (g_printf)(const gchar * format, ...) { gint ret; va_list vaargs; va_start(vaargs, format); ret = stub_funcs.ptr_g_vprintf(format, vaargs); va_end(vaargs); return ret; }
gint (g_fprintf)(FILE * file, const gchar * format, ...) { gint ret; va_list vaargs; va_start(vaargs, format); ret = stub_funcs.ptr_g_vfprintf(file, format, vaargs); va_end(vaargs); return ret; }
gint (g_sprintf)(gchar * string, const gchar * format, ...) { gint ret; va_list vaargs; va_start(vaargs, format); ret = stub_funcs.ptr_g_vsprintf(string, format, vaargs); va_end(vaargs); return ret; }
gint (g_vprintf)(const gchar * format, va_list args) { return stub_funcs.ptr_g_vprintf(format, args); }
gint (g_vfprintf)(FILE * file, const gchar * format, va_list args) { return stub_funcs.ptr_g_vfprintf(file, format, args); }
gint (g_vsprintf)(gchar * string, const gchar * format, va_list args) { return stub_funcs.ptr_g_vsprintf(string, format, args); }
gint (g_vasprintf)(gchar * * string, const gchar * format, va_list args) { return stub_funcs.ptr_g_vasprintf(string, format, args); }
int (g_access)(const gchar * filename, int mode) { return stub_funcs.ptr_g_access(filename, mode); }
int (g_chdir)(const gchar * path) { return stub_funcs.ptr_g_chdir(path); }
int (g_unlink)(const gchar * filename) { return stub_funcs.ptr_g_unlink(filename); }
int (g_rmdir)(const gchar * filename) { return stub_funcs.ptr_g_rmdir(filename); }
gboolean (g_close)(gint fd, GError * * error) { return stub_funcs.ptr_g_close(fd, error); }
GQuark (g_unix_error_quark)(void) { return stub_funcs.ptr_g_unix_error_quark(); }
gboolean (g_unix_open_pipe)(gint * fds, gint flags, GError * * error) { return stub_funcs.ptr_g_unix_open_pipe(fds, flags, error); }
gboolean (g_unix_set_fd_nonblocking)(gint fd, gboolean nonblock, GError * * error) { return stub_funcs.ptr_g_unix_set_fd_nonblocking(fd, nonblock, error); }
GSource * (g_unix_signal_source_new)(gint signum) { return stub_funcs.ptr_g_unix_signal_source_new(signum); }
guint (g_unix_signal_add_full)(gint priority, gint signum, GSourceFunc handler, gpointer user_data, GDestroyNotify notify) { return stub_funcs.ptr_g_unix_signal_add_full(priority, signum, handler, user_data, notify); }
guint (g_unix_signal_add)(gint signum, GSourceFunc handler, gpointer user_data) { return stub_funcs.ptr_g_unix_signal_add(signum, handler, user_data); }
GSource * (g_unix_fd_source_new)(gint fd, GIOCondition condition) { return stub_funcs.ptr_g_unix_fd_source_new(fd, condition); }
guint (g_unix_fd_add_full)(gint priority, gint fd, GIOCondition condition, GUnixFDSourceFunc function, gpointer user_data, GDestroyNotify notify) { return stub_funcs.ptr_g_unix_fd_add_full(priority, fd, condition, function, user_data, notify); }
guint (g_unix_fd_add)(gint fd, GIOCondition condition, GUnixFDSourceFunc function, gpointer user_data) { return stub_funcs.ptr_g_unix_fd_add(fd, condition, function, user_data); }
struct passwd * (g_unix_get_passwd_entry)(const gchar * user_name, GError * * error) { return stub_funcs.ptr_g_unix_get_passwd_entry(user_name, error); }
int (g_closefrom)(int lowfd) { return stub_funcs.ptr_g_closefrom(lowfd); }
int (g_fdwalk_set_cloexec)(int lowfd) { return stub_funcs.ptr_g_fdwalk_set_cloexec(lowfd); }

void close_glib(void) {
    cosmo_dlclose(glib2);
}