local utils = require("src.utils")

return {
    name = "sdl2_ttf",
    filter = { "%/usr%/include%/SDL2%/SDL_ttf%.h" },
    hfile = utils.path_combine(utils.spec_path(), "sdl2_ttf_spec.h"),
    so = { name = "sdl2_ttf", fnames = { "libSDL2_ttf-2.0.so", "libSDL2_ttf-2.0.so.0", "sdl2_ttf.dll" } },
    search_dirs = {
        "/usr/include/SDL2/",
    },
    header_includes = {
        "SDL_ttf.h",
    },
}
