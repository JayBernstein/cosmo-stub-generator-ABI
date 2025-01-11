local utils = require("src.utils")

return {
    name = "gio",
    filter = { "%/usr%/include%/glib%-2%.0%/gio%/" },
    hfile = utils.path_combine(utils.spec_path(), "gio_spec.h"),
    so = { name = "gio", fnames = { "libgio-2.0.so", "libgio-2.0-0.dll" } },
    search_dirs = {
        "/usr/include/glib-2.0/",
        "/usr/lib/glib-2.0/include/",
    },
    header_includes = {
        "gio/gio.h",
    },
    explicit_function_bodies = {
        g_initable_new = [[gpointer g_initable_new(GType object_type, GCancellable *cancellable, GError **error, const gchar *first_property_name, ...) {
    GObject *object;
    va_list var_args;

    va_start(var_args, first_property_name);
    object = stub_funcs.ptr_g_initable_new_valist(object_type, first_property_name, var_args, cancellable, error);

    va_end(var_args);
    return object;
}]],
    },
}
