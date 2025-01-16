#include "sdl2_image_stub.h"
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define _COMSO_SOURCE
#include <libc/dlopen/dlfcn.h>

static struct sdl2_imageFuncs {
    const SDL_version * (*ptr_IMG_Linked_Version)(void);
    int (*ptr_IMG_Init)(int flags);
    void (*ptr_IMG_Quit)(void);
    SDL_Surface * (*ptr_IMG_LoadTyped_RW)(SDL_RWops * src, int freesrc, const char * type);
    SDL_Surface * (*ptr_IMG_Load)(const char * file);
    SDL_Surface * (*ptr_IMG_Load_RW)(SDL_RWops * src, int freesrc);
    SDL_Texture * (*ptr_IMG_LoadTexture)(SDL_Renderer * renderer, const char * file);
    SDL_Texture * (*ptr_IMG_LoadTexture_RW)(SDL_Renderer * renderer, SDL_RWops * src, int freesrc);
    SDL_Texture * (*ptr_IMG_LoadTextureTyped_RW)(SDL_Renderer * renderer, SDL_RWops * src, int freesrc, const char * type);
    int (*ptr_IMG_isAVIF)(SDL_RWops * src);
    int (*ptr_IMG_isICO)(SDL_RWops * src);
    int (*ptr_IMG_isCUR)(SDL_RWops * src);
    int (*ptr_IMG_isBMP)(SDL_RWops * src);
    int (*ptr_IMG_isGIF)(SDL_RWops * src);
    int (*ptr_IMG_isJPG)(SDL_RWops * src);
    int (*ptr_IMG_isJXL)(SDL_RWops * src);
    int (*ptr_IMG_isLBM)(SDL_RWops * src);
    int (*ptr_IMG_isPCX)(SDL_RWops * src);
    int (*ptr_IMG_isPNG)(SDL_RWops * src);
    int (*ptr_IMG_isPNM)(SDL_RWops * src);
    int (*ptr_IMG_isSVG)(SDL_RWops * src);
    int (*ptr_IMG_isQOI)(SDL_RWops * src);
    int (*ptr_IMG_isTIF)(SDL_RWops * src);
    int (*ptr_IMG_isXCF)(SDL_RWops * src);
    int (*ptr_IMG_isXPM)(SDL_RWops * src);
    int (*ptr_IMG_isXV)(SDL_RWops * src);
    int (*ptr_IMG_isWEBP)(SDL_RWops * src);
    SDL_Surface * (*ptr_IMG_LoadAVIF_RW)(SDL_RWops * src);
    SDL_Surface * (*ptr_IMG_LoadICO_RW)(SDL_RWops * src);
    SDL_Surface * (*ptr_IMG_LoadCUR_RW)(SDL_RWops * src);
    SDL_Surface * (*ptr_IMG_LoadBMP_RW)(SDL_RWops * src);
    SDL_Surface * (*ptr_IMG_LoadGIF_RW)(SDL_RWops * src);
    SDL_Surface * (*ptr_IMG_LoadJPG_RW)(SDL_RWops * src);
    SDL_Surface * (*ptr_IMG_LoadJXL_RW)(SDL_RWops * src);
    SDL_Surface * (*ptr_IMG_LoadLBM_RW)(SDL_RWops * src);
    SDL_Surface * (*ptr_IMG_LoadPCX_RW)(SDL_RWops * src);
    SDL_Surface * (*ptr_IMG_LoadPNG_RW)(SDL_RWops * src);
    SDL_Surface * (*ptr_IMG_LoadPNM_RW)(SDL_RWops * src);
    SDL_Surface * (*ptr_IMG_LoadSVG_RW)(SDL_RWops * src);
    SDL_Surface * (*ptr_IMG_LoadQOI_RW)(SDL_RWops * src);
    SDL_Surface * (*ptr_IMG_LoadTGA_RW)(SDL_RWops * src);
    SDL_Surface * (*ptr_IMG_LoadTIF_RW)(SDL_RWops * src);
    SDL_Surface * (*ptr_IMG_LoadXCF_RW)(SDL_RWops * src);
    SDL_Surface * (*ptr_IMG_LoadXPM_RW)(SDL_RWops * src);
    SDL_Surface * (*ptr_IMG_LoadXV_RW)(SDL_RWops * src);
    SDL_Surface * (*ptr_IMG_LoadWEBP_RW)(SDL_RWops * src);
    SDL_Surface * (*ptr_IMG_LoadSizedSVG_RW)(SDL_RWops * src, int width, int height);
    SDL_Surface * (*ptr_IMG_ReadXPMFromArray)(char * * xpm);
    SDL_Surface * (*ptr_IMG_ReadXPMFromArrayToRGB888)(char * * xpm);
    int (*ptr_IMG_SavePNG)(SDL_Surface * surface, const char * file);
    int (*ptr_IMG_SavePNG_RW)(SDL_Surface * surface, SDL_RWops * dst, int freedst);
    int (*ptr_IMG_SaveJPG)(SDL_Surface * surface, const char * file, int quality);
    int (*ptr_IMG_SaveJPG_RW)(SDL_Surface * surface, SDL_RWops * dst, int freedst, int quality);
    IMG_Animation * (*ptr_IMG_LoadAnimation)(const char * file);
    IMG_Animation * (*ptr_IMG_LoadAnimation_RW)(SDL_RWops * src, int freesrc);
    IMG_Animation * (*ptr_IMG_LoadAnimationTyped_RW)(SDL_RWops * src, int freesrc, const char * type);
    void (*ptr_IMG_FreeAnimation)(IMG_Animation * anim);
    IMG_Animation * (*ptr_IMG_LoadGIFAnimation_RW)(SDL_RWops * src);
    IMG_Animation * (*ptr_IMG_LoadWEBPAnimation_RW)(SDL_RWops * src);
} stub_funcs;

void *sdl2_image;

void initialize_sdl2_image(void) {
    char *candidates_sdl2_image[] = { "libSDL2_image-2.0.so.0", "sdl2_image.dll" };
    sdl2_image = try_find_lib(candidates_sdl2_image, 2);

    if (!sdl2_image) {
        fprintf(stderr, "Unable to locate sdl2_image, exiting!");
        exit(1);
    }

    stub_funcs.ptr_IMG_Linked_Version = try_find_sym(sdl2_image, "IMG_Linked_Version");
    stub_funcs.ptr_IMG_Init = try_find_sym(sdl2_image, "IMG_Init");
    stub_funcs.ptr_IMG_Quit = try_find_sym(sdl2_image, "IMG_Quit");
    stub_funcs.ptr_IMG_LoadTyped_RW = try_find_sym(sdl2_image, "IMG_LoadTyped_RW");
    stub_funcs.ptr_IMG_Load = try_find_sym(sdl2_image, "IMG_Load");
    stub_funcs.ptr_IMG_Load_RW = try_find_sym(sdl2_image, "IMG_Load_RW");
    stub_funcs.ptr_IMG_LoadTexture = try_find_sym(sdl2_image, "IMG_LoadTexture");
    stub_funcs.ptr_IMG_LoadTexture_RW = try_find_sym(sdl2_image, "IMG_LoadTexture_RW");
    stub_funcs.ptr_IMG_LoadTextureTyped_RW = try_find_sym(sdl2_image, "IMG_LoadTextureTyped_RW");
    stub_funcs.ptr_IMG_isAVIF = try_find_sym(sdl2_image, "IMG_isAVIF");
    stub_funcs.ptr_IMG_isICO = try_find_sym(sdl2_image, "IMG_isICO");
    stub_funcs.ptr_IMG_isCUR = try_find_sym(sdl2_image, "IMG_isCUR");
    stub_funcs.ptr_IMG_isBMP = try_find_sym(sdl2_image, "IMG_isBMP");
    stub_funcs.ptr_IMG_isGIF = try_find_sym(sdl2_image, "IMG_isGIF");
    stub_funcs.ptr_IMG_isJPG = try_find_sym(sdl2_image, "IMG_isJPG");
    stub_funcs.ptr_IMG_isJXL = try_find_sym(sdl2_image, "IMG_isJXL");
    stub_funcs.ptr_IMG_isLBM = try_find_sym(sdl2_image, "IMG_isLBM");
    stub_funcs.ptr_IMG_isPCX = try_find_sym(sdl2_image, "IMG_isPCX");
    stub_funcs.ptr_IMG_isPNG = try_find_sym(sdl2_image, "IMG_isPNG");
    stub_funcs.ptr_IMG_isPNM = try_find_sym(sdl2_image, "IMG_isPNM");
    stub_funcs.ptr_IMG_isSVG = try_find_sym(sdl2_image, "IMG_isSVG");
    stub_funcs.ptr_IMG_isQOI = try_find_sym(sdl2_image, "IMG_isQOI");
    stub_funcs.ptr_IMG_isTIF = try_find_sym(sdl2_image, "IMG_isTIF");
    stub_funcs.ptr_IMG_isXCF = try_find_sym(sdl2_image, "IMG_isXCF");
    stub_funcs.ptr_IMG_isXPM = try_find_sym(sdl2_image, "IMG_isXPM");
    stub_funcs.ptr_IMG_isXV = try_find_sym(sdl2_image, "IMG_isXV");
    stub_funcs.ptr_IMG_isWEBP = try_find_sym(sdl2_image, "IMG_isWEBP");
    stub_funcs.ptr_IMG_LoadAVIF_RW = try_find_sym(sdl2_image, "IMG_LoadAVIF_RW");
    stub_funcs.ptr_IMG_LoadICO_RW = try_find_sym(sdl2_image, "IMG_LoadICO_RW");
    stub_funcs.ptr_IMG_LoadCUR_RW = try_find_sym(sdl2_image, "IMG_LoadCUR_RW");
    stub_funcs.ptr_IMG_LoadBMP_RW = try_find_sym(sdl2_image, "IMG_LoadBMP_RW");
    stub_funcs.ptr_IMG_LoadGIF_RW = try_find_sym(sdl2_image, "IMG_LoadGIF_RW");
    stub_funcs.ptr_IMG_LoadJPG_RW = try_find_sym(sdl2_image, "IMG_LoadJPG_RW");
    stub_funcs.ptr_IMG_LoadJXL_RW = try_find_sym(sdl2_image, "IMG_LoadJXL_RW");
    stub_funcs.ptr_IMG_LoadLBM_RW = try_find_sym(sdl2_image, "IMG_LoadLBM_RW");
    stub_funcs.ptr_IMG_LoadPCX_RW = try_find_sym(sdl2_image, "IMG_LoadPCX_RW");
    stub_funcs.ptr_IMG_LoadPNG_RW = try_find_sym(sdl2_image, "IMG_LoadPNG_RW");
    stub_funcs.ptr_IMG_LoadPNM_RW = try_find_sym(sdl2_image, "IMG_LoadPNM_RW");
    stub_funcs.ptr_IMG_LoadSVG_RW = try_find_sym(sdl2_image, "IMG_LoadSVG_RW");
    stub_funcs.ptr_IMG_LoadQOI_RW = try_find_sym(sdl2_image, "IMG_LoadQOI_RW");
    stub_funcs.ptr_IMG_LoadTGA_RW = try_find_sym(sdl2_image, "IMG_LoadTGA_RW");
    stub_funcs.ptr_IMG_LoadTIF_RW = try_find_sym(sdl2_image, "IMG_LoadTIF_RW");
    stub_funcs.ptr_IMG_LoadXCF_RW = try_find_sym(sdl2_image, "IMG_LoadXCF_RW");
    stub_funcs.ptr_IMG_LoadXPM_RW = try_find_sym(sdl2_image, "IMG_LoadXPM_RW");
    stub_funcs.ptr_IMG_LoadXV_RW = try_find_sym(sdl2_image, "IMG_LoadXV_RW");
    stub_funcs.ptr_IMG_LoadWEBP_RW = try_find_sym(sdl2_image, "IMG_LoadWEBP_RW");
    stub_funcs.ptr_IMG_LoadSizedSVG_RW = try_find_sym(sdl2_image, "IMG_LoadSizedSVG_RW");
    stub_funcs.ptr_IMG_ReadXPMFromArray = try_find_sym(sdl2_image, "IMG_ReadXPMFromArray");
    stub_funcs.ptr_IMG_ReadXPMFromArrayToRGB888 = try_find_sym(sdl2_image, "IMG_ReadXPMFromArrayToRGB888");
    stub_funcs.ptr_IMG_SavePNG = try_find_sym(sdl2_image, "IMG_SavePNG");
    stub_funcs.ptr_IMG_SavePNG_RW = try_find_sym(sdl2_image, "IMG_SavePNG_RW");
    stub_funcs.ptr_IMG_SaveJPG = try_find_sym(sdl2_image, "IMG_SaveJPG");
    stub_funcs.ptr_IMG_SaveJPG_RW = try_find_sym(sdl2_image, "IMG_SaveJPG_RW");
    stub_funcs.ptr_IMG_LoadAnimation = try_find_sym(sdl2_image, "IMG_LoadAnimation");
    stub_funcs.ptr_IMG_LoadAnimation_RW = try_find_sym(sdl2_image, "IMG_LoadAnimation_RW");
    stub_funcs.ptr_IMG_LoadAnimationTyped_RW = try_find_sym(sdl2_image, "IMG_LoadAnimationTyped_RW");
    stub_funcs.ptr_IMG_FreeAnimation = try_find_sym(sdl2_image, "IMG_FreeAnimation");
    stub_funcs.ptr_IMG_LoadGIFAnimation_RW = try_find_sym(sdl2_image, "IMG_LoadGIFAnimation_RW");
    stub_funcs.ptr_IMG_LoadWEBPAnimation_RW = try_find_sym(sdl2_image, "IMG_LoadWEBPAnimation_RW");
}

const SDL_version * (IMG_Linked_Version)(void) { return stub_funcs.ptr_IMG_Linked_Version(); }
int (IMG_Init)(int flags) { return stub_funcs.ptr_IMG_Init(flags); }
void (IMG_Quit)(void) { stub_funcs.ptr_IMG_Quit(); }
SDL_Surface * (IMG_LoadTyped_RW)(SDL_RWops * src, int freesrc, const char * type) { return stub_funcs.ptr_IMG_LoadTyped_RW(src, freesrc, type); }
SDL_Surface * (IMG_Load)(const char * file) { return stub_funcs.ptr_IMG_Load(file); }
SDL_Surface * (IMG_Load_RW)(SDL_RWops * src, int freesrc) { return stub_funcs.ptr_IMG_Load_RW(src, freesrc); }
SDL_Texture * (IMG_LoadTexture)(SDL_Renderer * renderer, const char * file) { return stub_funcs.ptr_IMG_LoadTexture(renderer, file); }
SDL_Texture * (IMG_LoadTexture_RW)(SDL_Renderer * renderer, SDL_RWops * src, int freesrc) { return stub_funcs.ptr_IMG_LoadTexture_RW(renderer, src, freesrc); }
SDL_Texture * (IMG_LoadTextureTyped_RW)(SDL_Renderer * renderer, SDL_RWops * src, int freesrc, const char * type) { return stub_funcs.ptr_IMG_LoadTextureTyped_RW(renderer, src, freesrc, type); }
int (IMG_isAVIF)(SDL_RWops * src) { return stub_funcs.ptr_IMG_isAVIF(src); }
int (IMG_isICO)(SDL_RWops * src) { return stub_funcs.ptr_IMG_isICO(src); }
int (IMG_isCUR)(SDL_RWops * src) { return stub_funcs.ptr_IMG_isCUR(src); }
int (IMG_isBMP)(SDL_RWops * src) { return stub_funcs.ptr_IMG_isBMP(src); }
int (IMG_isGIF)(SDL_RWops * src) { return stub_funcs.ptr_IMG_isGIF(src); }
int (IMG_isJPG)(SDL_RWops * src) { return stub_funcs.ptr_IMG_isJPG(src); }
int (IMG_isJXL)(SDL_RWops * src) { return stub_funcs.ptr_IMG_isJXL(src); }
int (IMG_isLBM)(SDL_RWops * src) { return stub_funcs.ptr_IMG_isLBM(src); }
int (IMG_isPCX)(SDL_RWops * src) { return stub_funcs.ptr_IMG_isPCX(src); }
int (IMG_isPNG)(SDL_RWops * src) { return stub_funcs.ptr_IMG_isPNG(src); }
int (IMG_isPNM)(SDL_RWops * src) { return stub_funcs.ptr_IMG_isPNM(src); }
int (IMG_isSVG)(SDL_RWops * src) { return stub_funcs.ptr_IMG_isSVG(src); }
int (IMG_isQOI)(SDL_RWops * src) { return stub_funcs.ptr_IMG_isQOI(src); }
int (IMG_isTIF)(SDL_RWops * src) { return stub_funcs.ptr_IMG_isTIF(src); }
int (IMG_isXCF)(SDL_RWops * src) { return stub_funcs.ptr_IMG_isXCF(src); }
int (IMG_isXPM)(SDL_RWops * src) { return stub_funcs.ptr_IMG_isXPM(src); }
int (IMG_isXV)(SDL_RWops * src) { return stub_funcs.ptr_IMG_isXV(src); }
int (IMG_isWEBP)(SDL_RWops * src) { return stub_funcs.ptr_IMG_isWEBP(src); }
SDL_Surface * (IMG_LoadAVIF_RW)(SDL_RWops * src) { return stub_funcs.ptr_IMG_LoadAVIF_RW(src); }
SDL_Surface * (IMG_LoadICO_RW)(SDL_RWops * src) { return stub_funcs.ptr_IMG_LoadICO_RW(src); }
SDL_Surface * (IMG_LoadCUR_RW)(SDL_RWops * src) { return stub_funcs.ptr_IMG_LoadCUR_RW(src); }
SDL_Surface * (IMG_LoadBMP_RW)(SDL_RWops * src) { return stub_funcs.ptr_IMG_LoadBMP_RW(src); }
SDL_Surface * (IMG_LoadGIF_RW)(SDL_RWops * src) { return stub_funcs.ptr_IMG_LoadGIF_RW(src); }
SDL_Surface * (IMG_LoadJPG_RW)(SDL_RWops * src) { return stub_funcs.ptr_IMG_LoadJPG_RW(src); }
SDL_Surface * (IMG_LoadJXL_RW)(SDL_RWops * src) { return stub_funcs.ptr_IMG_LoadJXL_RW(src); }
SDL_Surface * (IMG_LoadLBM_RW)(SDL_RWops * src) { return stub_funcs.ptr_IMG_LoadLBM_RW(src); }
SDL_Surface * (IMG_LoadPCX_RW)(SDL_RWops * src) { return stub_funcs.ptr_IMG_LoadPCX_RW(src); }
SDL_Surface * (IMG_LoadPNG_RW)(SDL_RWops * src) { return stub_funcs.ptr_IMG_LoadPNG_RW(src); }
SDL_Surface * (IMG_LoadPNM_RW)(SDL_RWops * src) { return stub_funcs.ptr_IMG_LoadPNM_RW(src); }
SDL_Surface * (IMG_LoadSVG_RW)(SDL_RWops * src) { return stub_funcs.ptr_IMG_LoadSVG_RW(src); }
SDL_Surface * (IMG_LoadQOI_RW)(SDL_RWops * src) { return stub_funcs.ptr_IMG_LoadQOI_RW(src); }
SDL_Surface * (IMG_LoadTGA_RW)(SDL_RWops * src) { return stub_funcs.ptr_IMG_LoadTGA_RW(src); }
SDL_Surface * (IMG_LoadTIF_RW)(SDL_RWops * src) { return stub_funcs.ptr_IMG_LoadTIF_RW(src); }
SDL_Surface * (IMG_LoadXCF_RW)(SDL_RWops * src) { return stub_funcs.ptr_IMG_LoadXCF_RW(src); }
SDL_Surface * (IMG_LoadXPM_RW)(SDL_RWops * src) { return stub_funcs.ptr_IMG_LoadXPM_RW(src); }
SDL_Surface * (IMG_LoadXV_RW)(SDL_RWops * src) { return stub_funcs.ptr_IMG_LoadXV_RW(src); }
SDL_Surface * (IMG_LoadWEBP_RW)(SDL_RWops * src) { return stub_funcs.ptr_IMG_LoadWEBP_RW(src); }
SDL_Surface * (IMG_LoadSizedSVG_RW)(SDL_RWops * src, int width, int height) { return stub_funcs.ptr_IMG_LoadSizedSVG_RW(src, width, height); }
SDL_Surface * (IMG_ReadXPMFromArray)(char * * xpm) { return stub_funcs.ptr_IMG_ReadXPMFromArray(xpm); }
SDL_Surface * (IMG_ReadXPMFromArrayToRGB888)(char * * xpm) { return stub_funcs.ptr_IMG_ReadXPMFromArrayToRGB888(xpm); }
int (IMG_SavePNG)(SDL_Surface * surface, const char * file) { return stub_funcs.ptr_IMG_SavePNG(surface, file); }
int (IMG_SavePNG_RW)(SDL_Surface * surface, SDL_RWops * dst, int freedst) { return stub_funcs.ptr_IMG_SavePNG_RW(surface, dst, freedst); }
int (IMG_SaveJPG)(SDL_Surface * surface, const char * file, int quality) { return stub_funcs.ptr_IMG_SaveJPG(surface, file, quality); }
int (IMG_SaveJPG_RW)(SDL_Surface * surface, SDL_RWops * dst, int freedst, int quality) { return stub_funcs.ptr_IMG_SaveJPG_RW(surface, dst, freedst, quality); }
IMG_Animation * (IMG_LoadAnimation)(const char * file) { return stub_funcs.ptr_IMG_LoadAnimation(file); }
IMG_Animation * (IMG_LoadAnimation_RW)(SDL_RWops * src, int freesrc) { return stub_funcs.ptr_IMG_LoadAnimation_RW(src, freesrc); }
IMG_Animation * (IMG_LoadAnimationTyped_RW)(SDL_RWops * src, int freesrc, const char * type) { return stub_funcs.ptr_IMG_LoadAnimationTyped_RW(src, freesrc, type); }
void (IMG_FreeAnimation)(IMG_Animation * anim) { stub_funcs.ptr_IMG_FreeAnimation(anim); }
IMG_Animation * (IMG_LoadGIFAnimation_RW)(SDL_RWops * src) { return stub_funcs.ptr_IMG_LoadGIFAnimation_RW(src); }
IMG_Animation * (IMG_LoadWEBPAnimation_RW)(SDL_RWops * src) { return stub_funcs.ptr_IMG_LoadWEBPAnimation_RW(src); }

void close_sdl2_image(void) {
    cosmo_dlclose(sdl2_image);
}