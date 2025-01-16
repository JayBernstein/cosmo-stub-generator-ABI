local utils = require("src.utils")

return {
    name = "sdl2_image",
    filter = { "%/usr%/include%/SDL2%/SDL_image%.h" },
    hfile = utils.path_combine(utils.spec_path(), "sdl2_image_spec.h"),
    so = { name = "sdl2_image", fnames = { "libSDL2_image-2.0.so.0", "sdl2_image.dll" } },
    search_dirs = {
        "/usr/include/SDL2/",
    },
    header_includes = {
        "SDL_image.h",
    },
}
