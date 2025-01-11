local utils = require("src.utils")

return {
    name = "glfw",
    filter = { "%/usr%/include%/GLFW%/" },
    hfile = utils.path_combine(utils.spec_path(), "glfw_spec.h"),
    so = { name = "glfw", fnames = { "libglfw.so", "glfw3.dll" } },
    search_dirs = {
        "/usr/include/GLFW/",
    },
    header_includes = {
        "GLFW/glfw3.h",
    },
}
