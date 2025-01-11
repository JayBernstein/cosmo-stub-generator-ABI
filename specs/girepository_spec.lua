local utils = require("src.utils")

return {
    name = "girepository",
    filter = { "%/usr%/include%/glib%-2%.0%/girepository%/" },
    hfile = utils.path_combine(utils.spec_path(), "girepository_spec.h"),
    so = { name = "girepository", fnames = { "libgirepository-2.0.so", "libgirepository-2.0-0.dll" } },
    search_dirs = {
        "/usr/include/glib-2.0/",
        "/usr/lib/glib-2.0/include/",
    },
    header_includes = {
        "girepository/girepository.h",
    },
}
