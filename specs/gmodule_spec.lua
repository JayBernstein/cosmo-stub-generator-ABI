local utils = require("src.utils")

return {
    name = "gmodule",
    filter = { "%/usr%/include%/glib%-2%.0%/gmodule%/", "%/usr%/include%/glib%-2%.0%/gmodule%.h" },
    hfile = utils.path_combine(utils.spec_path(), "gmodule_spec.h"),
    so = { name = "gmodule", fnames = { "libgmodule-2.0.so", "libgmodule-2.0-0.dll" } },
    search_dirs = {
        "/usr/include/glib-2.0/",
        "/usr/lib/glib-2.0/include/",
    },
    header_includes = {
        "gmodule.h",
    },
}
