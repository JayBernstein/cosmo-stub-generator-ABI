local utils = require("src.utils")

return {
    name = "gobject",
    filter = { "%/usr%/include%/glib%-2%.0%/gobject%/", "%/usr%/include%/glib%-2%.0%/glib%-object%.h%/" },
    hfile = utils.path_combine(utils.spec_path(), "gobject_spec.h"),
    so = { name = "gobject", fnames = { "libgobject-2.so", "libgobject-2.0-0.dll" } },
    search_dirs = {
        "/usr/include/glib-2.0/",
        "/usr/lib/glib-2.0/include/",
    },
    header_includes = {
        "glib-object.h",
    },
    explicit_function_bodies = {
        -- From https://github.com/GNOME/glib/blob/83200855579964a20d3929f37a37431e4952d156/gobject/gobject.c#L2406
        g_object_new = [[gpointer g_object_new(GType object_type, const gchar *first_property_name, ...) {
    GObject *object;
    va_list var_args;

    /* short circuit for calls supplying no properties */
    if (!first_property_name)
        return stub_funcs.ptr_g_object_new_with_properties(object_type, 0, NULL, NULL);

    va_start(var_args, first_property_name);
    object = stub_funcs.ptr_g_object_new_valist(object_type, first_property_name, var_args);
    va_end(var_args);

    return object;
}]],
        -- From https://github.com/GNOME/glib/blob/7129521966fa7c4cd876b2aa429f1c8d50290902/gobject/gsignal.c#L1399
        g_signal_new = [[guint g_signal_new (const gchar *signal_name, GType itype, GSignalFlags signal_flags, guint class_offset, GSignalAccumulator accumulator, gpointer accu_data, GSignalCMarshaller c_marshaller, GType return_type, guint n_params, ...) {
    va_list args;
    guint signal_id;

    g_return_val_if_fail(signal_name != NULL, 0);
    va_start(args, n_params);

    signal_id = stub_funcs.ptr_g_signal_new_valist(signal_name, itype, signal_flags,
        class_offset ? stub_funcs.ptr_g_signal_type_cclosure_new(itype, class_offset): NULL,
        accumulator, accu_data, c_marshaller, return_type, n_params, args);

    va_end(args);

    return signal_id;
}]],
    },
}
