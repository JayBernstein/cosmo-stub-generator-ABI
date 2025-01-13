local utils = require("src.utils")

return {
    name = "opengl",
    filter = { "%/usr%/include%/GL%/" },
    hfile = utils.path_combine(utils.spec_path(), "opengl_spec.h"),
    so = { name = "opengl", fnames = { "libGL.so", "opengl.dll" } },
    search_dirs = {
        "/usr/include/GL/",
    },
    header_includes = {
        "GL/gl.h",
        "GL/glcorearb.h",
        "GL/glx.h",
    },
}
