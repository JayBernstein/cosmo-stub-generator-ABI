local utils = require("src.utils")

return {
    name = "gtk4",
    filter = { "%/usr%/include%/gtk%-4%.0%/" },
    hfile = utils.path_combine(utils.spec_path(), "gtk_spec.h"),
    so = { name = "gtk4", fnames = { "libgtk-4.so", "libgtk-4-0.dll" } },
    search_dirs = {
        "/usr/include/gtk-4.0/",
        "/usr/include/glib-2.0/",
        "/usr/lib/glib-2.0/include/",
        "/usr/include/cairo",
        "/usr/include/pango-1.0/",
        "/usr/include/harfbuzz/",
        "/usr/include/gdk-pixbuf-2.0/",
        "/usr/include/graphene-1.0",
        "/usr/lib/graphene-1.0/include",
    },
    header_includes = {
        "gtk/gtk.h",
        "gtk/a11y/gtkatspi.h",
        "gdk/x11/gdkx.h",
        "gdk/wayland/gdkwayland.h",
        "gdk/broadway/gdkbroadway.h",
    },
}
