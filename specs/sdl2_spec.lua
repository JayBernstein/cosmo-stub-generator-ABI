local utils = require("src.utils")

return {
    name = "sdl2",
    filter = { "%/usr%/include%/SDL2%/" },
    hfile = utils.path_combine(utils.spec_path(), "sdl2_spec.h"),
    so = { name = "sdl2", fnames = { "libSDL2-2.0.so", "sdl2.dll" } },
    search_dirs = {
        "/usr/include/SDL2/",
    },
    header_includes = {
        "SDL.h",
    },
}
