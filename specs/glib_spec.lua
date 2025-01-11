local utils = require("src.utils")

return {
    name = "glib",
    filter = { "%/usr%/include%/glib%-2%.0%/" },
    hfile = utils.path_combine(utils.spec_path(), "glib_spec.h"),
    so = { name = "glib2", fnames = { "libglib-2.so", "libglib-2.0-0.dll" } },
    search_dirs = {
        "/usr/include/glib-2.0/",
        "/usr/lib/glib-2.0/include/",
    },
    header_includes = {
        "glib.h",
        "glib-unix.h",
    },
}
