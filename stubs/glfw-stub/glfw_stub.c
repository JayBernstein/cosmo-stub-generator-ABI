#include "glfw_stub.h"
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#include <libc/dlopen/dlfcn.h>
#define MS_ABI_ATTR __attribute__((__ms_abi__))

static struct glfwFuncs {
    int (*ptr_glfwInit)(void);
    void (*ptr_glfwTerminate)(void);
    void (*ptr_glfwInitHint)(int hint, int value);
    void (*ptr_glfwGetVersion)(int * major, int * minor, int * rev);
    const char * (*ptr_glfwGetVersionString)(void);
    int (*ptr_glfwGetError)(const char * * description);
    GLFWerrorfun (*ptr_glfwSetErrorCallback)(GLFWerrorfun callback);
    GLFWmonitor * * (*ptr_glfwGetMonitors)(int * count);
    GLFWmonitor * (*ptr_glfwGetPrimaryMonitor)(void);
    void (*ptr_glfwGetMonitorPos)(GLFWmonitor * monitor, int * xpos, int * ypos);
    void (*ptr_glfwGetMonitorWorkarea)(GLFWmonitor * monitor, int * xpos, int * ypos, int * width, int * height);
    void (*ptr_glfwGetMonitorPhysicalSize)(GLFWmonitor * monitor, int * widthMM, int * heightMM);
    void (*ptr_glfwGetMonitorContentScale)(GLFWmonitor * monitor, float * xscale, float * yscale);
    const char * (*ptr_glfwGetMonitorName)(GLFWmonitor * monitor);
    void (*ptr_glfwSetMonitorUserPointer)(GLFWmonitor * monitor, void * pointer);
    void * (*ptr_glfwGetMonitorUserPointer)(GLFWmonitor * monitor);
    GLFWmonitorfun (*ptr_glfwSetMonitorCallback)(GLFWmonitorfun callback);
    const GLFWvidmode * (*ptr_glfwGetVideoModes)(GLFWmonitor * monitor, int * count);
    const GLFWvidmode * (*ptr_glfwGetVideoMode)(GLFWmonitor * monitor);
    void (*ptr_glfwSetGamma)(GLFWmonitor * monitor, float gamma);
    const GLFWgammaramp * (*ptr_glfwGetGammaRamp)(GLFWmonitor * monitor);
    void (*ptr_glfwSetGammaRamp)(GLFWmonitor * monitor, const GLFWgammaramp * ramp);
    void (*ptr_glfwDefaultWindowHints)(void);
    void (*ptr_glfwWindowHint)(int hint, int value);
    void (*ptr_glfwWindowHintString)(int hint, const char * value);
    GLFWwindow * (*ptr_glfwCreateWindow)(int width, int height, const char * title, GLFWmonitor * monitor, GLFWwindow * share);
    void (*ptr_glfwDestroyWindow)(GLFWwindow * window);
    int (*ptr_glfwWindowShouldClose)(GLFWwindow * window);
    void (*ptr_glfwSetWindowShouldClose)(GLFWwindow * window, int value);
    void (*ptr_glfwSetWindowTitle)(GLFWwindow * window, const char * title);
    void (*ptr_glfwSetWindowIcon)(GLFWwindow * window, int count, const GLFWimage * images);
    void (*ptr_glfwGetWindowPos)(GLFWwindow * window, int * xpos, int * ypos);
    void (*ptr_glfwSetWindowPos)(GLFWwindow * window, int xpos, int ypos);
    void (*ptr_glfwGetWindowSize)(GLFWwindow * window, int * width, int * height);
    void (*ptr_glfwSetWindowSizeLimits)(GLFWwindow * window, int minwidth, int minheight, int maxwidth, int maxheight);
    void (*ptr_glfwSetWindowAspectRatio)(GLFWwindow * window, int numer, int denom);
    void (*ptr_glfwSetWindowSize)(GLFWwindow * window, int width, int height);
    void (*ptr_glfwGetFramebufferSize)(GLFWwindow * window, int * width, int * height);
    void (*ptr_glfwGetWindowFrameSize)(GLFWwindow * window, int * left, int * top, int * right, int * bottom);
    void (*ptr_glfwGetWindowContentScale)(GLFWwindow * window, float * xscale, float * yscale);
    float (*ptr_glfwGetWindowOpacity)(GLFWwindow * window);
    void (*ptr_glfwSetWindowOpacity)(GLFWwindow * window, float opacity);
    void (*ptr_glfwIconifyWindow)(GLFWwindow * window);
    void (*ptr_glfwRestoreWindow)(GLFWwindow * window);
    void (*ptr_glfwMaximizeWindow)(GLFWwindow * window);
    void (*ptr_glfwShowWindow)(GLFWwindow * window);
    void (*ptr_glfwHideWindow)(GLFWwindow * window);
    void (*ptr_glfwFocusWindow)(GLFWwindow * window);
    void (*ptr_glfwRequestWindowAttention)(GLFWwindow * window);
    GLFWmonitor * (*ptr_glfwGetWindowMonitor)(GLFWwindow * window);
    void (*ptr_glfwSetWindowMonitor)(GLFWwindow * window, GLFWmonitor * monitor, int xpos, int ypos, int width, int height, int refreshRate);
    int (*ptr_glfwGetWindowAttrib)(GLFWwindow * window, int attrib);
    void (*ptr_glfwSetWindowAttrib)(GLFWwindow * window, int attrib, int value);
    void (*ptr_glfwSetWindowUserPointer)(GLFWwindow * window, void * pointer);
    void * (*ptr_glfwGetWindowUserPointer)(GLFWwindow * window);
    GLFWwindowposfun (*ptr_glfwSetWindowPosCallback)(GLFWwindow * window, GLFWwindowposfun callback);
    GLFWwindowsizefun (*ptr_glfwSetWindowSizeCallback)(GLFWwindow * window, GLFWwindowsizefun callback);
    GLFWwindowclosefun (*ptr_glfwSetWindowCloseCallback)(GLFWwindow * window, GLFWwindowclosefun callback);
    GLFWwindowrefreshfun (*ptr_glfwSetWindowRefreshCallback)(GLFWwindow * window, GLFWwindowrefreshfun callback);
    GLFWwindowfocusfun (*ptr_glfwSetWindowFocusCallback)(GLFWwindow * window, GLFWwindowfocusfun callback);
    GLFWwindowiconifyfun (*ptr_glfwSetWindowIconifyCallback)(GLFWwindow * window, GLFWwindowiconifyfun callback);
    GLFWwindowmaximizefun (*ptr_glfwSetWindowMaximizeCallback)(GLFWwindow * window, GLFWwindowmaximizefun callback);
    GLFWframebuffersizefun (*ptr_glfwSetFramebufferSizeCallback)(GLFWwindow * window, GLFWframebuffersizefun callback);
    GLFWwindowcontentscalefun (*ptr_glfwSetWindowContentScaleCallback)(GLFWwindow * window, GLFWwindowcontentscalefun callback);
    void (*ptr_glfwPollEvents)(void);
    void (*ptr_glfwWaitEvents)(void);
    void (*ptr_glfwWaitEventsTimeout)(double timeout);
    void (*ptr_glfwPostEmptyEvent)(void);
    int (*ptr_glfwGetInputMode)(GLFWwindow * window, int mode);
    void (*ptr_glfwSetInputMode)(GLFWwindow * window, int mode, int value);
    int (*ptr_glfwRawMouseMotionSupported)(void);
    const char * (*ptr_glfwGetKeyName)(int key, int scancode);
    int (*ptr_glfwGetKeyScancode)(int key);
    int (*ptr_glfwGetKey)(GLFWwindow * window, int key);
    int (*ptr_glfwGetMouseButton)(GLFWwindow * window, int button);
    void (*ptr_glfwGetCursorPos)(GLFWwindow * window, double * xpos, double * ypos);
    void (*ptr_glfwSetCursorPos)(GLFWwindow * window, double xpos, double ypos);
    GLFWcursor * (*ptr_glfwCreateCursor)(const GLFWimage * image, int xhot, int yhot);
    GLFWcursor * (*ptr_glfwCreateStandardCursor)(int shape);
    void (*ptr_glfwDestroyCursor)(GLFWcursor * cursor);
    void (*ptr_glfwSetCursor)(GLFWwindow * window, GLFWcursor * cursor);
    GLFWkeyfun (*ptr_glfwSetKeyCallback)(GLFWwindow * window, GLFWkeyfun callback);
    GLFWcharfun (*ptr_glfwSetCharCallback)(GLFWwindow * window, GLFWcharfun callback);
    GLFWcharmodsfun (*ptr_glfwSetCharModsCallback)(GLFWwindow * window, GLFWcharmodsfun callback);
    GLFWmousebuttonfun (*ptr_glfwSetMouseButtonCallback)(GLFWwindow * window, GLFWmousebuttonfun callback);
    GLFWcursorposfun (*ptr_glfwSetCursorPosCallback)(GLFWwindow * window, GLFWcursorposfun callback);
    GLFWcursorenterfun (*ptr_glfwSetCursorEnterCallback)(GLFWwindow * window, GLFWcursorenterfun callback);
    GLFWscrollfun (*ptr_glfwSetScrollCallback)(GLFWwindow * window, GLFWscrollfun callback);
    GLFWdropfun (*ptr_glfwSetDropCallback)(GLFWwindow * window, GLFWdropfun callback);
    int (*ptr_glfwJoystickPresent)(int jid);
    const float * (*ptr_glfwGetJoystickAxes)(int jid, int * count);
    const unsigned char * (*ptr_glfwGetJoystickButtons)(int jid, int * count);
    const unsigned char * (*ptr_glfwGetJoystickHats)(int jid, int * count);
    const char * (*ptr_glfwGetJoystickName)(int jid);
    const char * (*ptr_glfwGetJoystickGUID)(int jid);
    void (*ptr_glfwSetJoystickUserPointer)(int jid, void * pointer);
    void * (*ptr_glfwGetJoystickUserPointer)(int jid);
    int (*ptr_glfwJoystickIsGamepad)(int jid);
    GLFWjoystickfun (*ptr_glfwSetJoystickCallback)(GLFWjoystickfun callback);
    int (*ptr_glfwUpdateGamepadMappings)(const char * string);
    const char * (*ptr_glfwGetGamepadName)(int jid);
    int (*ptr_glfwGetGamepadState)(int jid, GLFWgamepadstate * state);
    void (*ptr_glfwSetClipboardString)(GLFWwindow * window, const char * string);
    const char * (*ptr_glfwGetClipboardString)(GLFWwindow * window);
    double (*ptr_glfwGetTime)(void);
    void (*ptr_glfwSetTime)(double time);
    uint64_t (*ptr_glfwGetTimerValue)(void);
    uint64_t (*ptr_glfwGetTimerFrequency)(void);
    void (*ptr_glfwMakeContextCurrent)(GLFWwindow * window);
    GLFWwindow * (*ptr_glfwGetCurrentContext)(void);
    void (*ptr_glfwSwapBuffers)(GLFWwindow * window);
    void (*ptr_glfwSwapInterval)(int interval);
    int (*ptr_glfwExtensionSupported)(const char * extension);
    GLFWglproc (*ptr_glfwGetProcAddress)(const char * procname);
    int (*ptr_glfwVulkanSupported)(void);
    const char * * (*ptr_glfwGetRequiredInstanceExtensions)(uint32_t * count);
    int (__attribute__((__ms_abi__)) *ptr_ms_glfwInit)(void);
    void (__attribute__((__ms_abi__)) *ptr_ms_glfwTerminate)(void);
    void (__attribute__((__ms_abi__)) *ptr_ms_glfwInitHint)(int hint, int value);
    void (__attribute__((__ms_abi__)) *ptr_ms_glfwGetVersion)(int * major, int * minor, int * rev);
    const char * (__attribute__((__ms_abi__)) *ptr_ms_glfwGetVersionString)(void);
    int (__attribute__((__ms_abi__)) *ptr_ms_glfwGetError)(const char * * description);
    GLFWerrorfun (__attribute__((__ms_abi__)) *ptr_ms_glfwSetErrorCallback)(GLFWerrorfun callback);
    GLFWmonitor * * (__attribute__((__ms_abi__)) *ptr_ms_glfwGetMonitors)(int * count);
    GLFWmonitor * (__attribute__((__ms_abi__)) *ptr_ms_glfwGetPrimaryMonitor)(void);
    void (__attribute__((__ms_abi__)) *ptr_ms_glfwGetMonitorPos)(GLFWmonitor * monitor, int * xpos, int * ypos);
    void (__attribute__((__ms_abi__)) *ptr_ms_glfwGetMonitorWorkarea)(GLFWmonitor * monitor, int * xpos, int * ypos, int * width, int * height);
    void (__attribute__((__ms_abi__)) *ptr_ms_glfwGetMonitorPhysicalSize)(GLFWmonitor * monitor, int * widthMM, int * heightMM);
    void (__attribute__((__ms_abi__)) *ptr_ms_glfwGetMonitorContentScale)(GLFWmonitor * monitor, float * xscale, float * yscale);
    const char * (__attribute__((__ms_abi__)) *ptr_ms_glfwGetMonitorName)(GLFWmonitor * monitor);
    void (__attribute__((__ms_abi__)) *ptr_ms_glfwSetMonitorUserPointer)(GLFWmonitor * monitor, void * pointer);
    void * (__attribute__((__ms_abi__)) *ptr_ms_glfwGetMonitorUserPointer)(GLFWmonitor * monitor);
    GLFWmonitorfun (__attribute__((__ms_abi__)) *ptr_ms_glfwSetMonitorCallback)(GLFWmonitorfun callback);
    const GLFWvidmode * (__attribute__((__ms_abi__)) *ptr_ms_glfwGetVideoModes)(GLFWmonitor * monitor, int * count);
    const GLFWvidmode * (__attribute__((__ms_abi__)) *ptr_ms_glfwGetVideoMode)(GLFWmonitor * monitor);
    void (__attribute__((__ms_abi__)) *ptr_ms_glfwSetGamma)(GLFWmonitor * monitor, float gamma);
    const GLFWgammaramp * (__attribute__((__ms_abi__)) *ptr_ms_glfwGetGammaRamp)(GLFWmonitor * monitor);
    void (__attribute__((__ms_abi__)) *ptr_ms_glfwSetGammaRamp)(GLFWmonitor * monitor, const GLFWgammaramp * ramp);
    void (__attribute__((__ms_abi__)) *ptr_ms_glfwDefaultWindowHints)(void);
    void (__attribute__((__ms_abi__)) *ptr_ms_glfwWindowHint)(int hint, int value);
    void (__attribute__((__ms_abi__)) *ptr_ms_glfwWindowHintString)(int hint, const char * value);
    GLFWwindow * (__attribute__((__ms_abi__)) *ptr_ms_glfwCreateWindow)(int width, int height, const char * title, GLFWmonitor * monitor, GLFWwindow * share);
    void (__attribute__((__ms_abi__)) *ptr_ms_glfwDestroyWindow)(GLFWwindow * window);
    int (__attribute__((__ms_abi__)) *ptr_ms_glfwWindowShouldClose)(GLFWwindow * window);
    void (__attribute__((__ms_abi__)) *ptr_ms_glfwSetWindowShouldClose)(GLFWwindow * window, int value);
    void (__attribute__((__ms_abi__)) *ptr_ms_glfwSetWindowTitle)(GLFWwindow * window, const char * title);
    void (__attribute__((__ms_abi__)) *ptr_ms_glfwSetWindowIcon)(GLFWwindow * window, int count, const GLFWimage * images);
    void (__attribute__((__ms_abi__)) *ptr_ms_glfwGetWindowPos)(GLFWwindow * window, int * xpos, int * ypos);
    void (__attribute__((__ms_abi__)) *ptr_ms_glfwSetWindowPos)(GLFWwindow * window, int xpos, int ypos);
    void (__attribute__((__ms_abi__)) *ptr_ms_glfwGetWindowSize)(GLFWwindow * window, int * width, int * height);
    void (__attribute__((__ms_abi__)) *ptr_ms_glfwSetWindowSizeLimits)(GLFWwindow * window, int minwidth, int minheight, int maxwidth, int maxheight);
    void (__attribute__((__ms_abi__)) *ptr_ms_glfwSetWindowAspectRatio)(GLFWwindow * window, int numer, int denom);
    void (__attribute__((__ms_abi__)) *ptr_ms_glfwSetWindowSize)(GLFWwindow * window, int width, int height);
    void (__attribute__((__ms_abi__)) *ptr_ms_glfwGetFramebufferSize)(GLFWwindow * window, int * width, int * height);
    void (__attribute__((__ms_abi__)) *ptr_ms_glfwGetWindowFrameSize)(GLFWwindow * window, int * left, int * top, int * right, int * bottom);
    void (__attribute__((__ms_abi__)) *ptr_ms_glfwGetWindowContentScale)(GLFWwindow * window, float * xscale, float * yscale);
    float (__attribute__((__ms_abi__)) *ptr_ms_glfwGetWindowOpacity)(GLFWwindow * window);
    void (__attribute__((__ms_abi__)) *ptr_ms_glfwSetWindowOpacity)(GLFWwindow * window, float opacity);
    void (__attribute__((__ms_abi__)) *ptr_ms_glfwIconifyWindow)(GLFWwindow * window);
    void (__attribute__((__ms_abi__)) *ptr_ms_glfwRestoreWindow)(GLFWwindow * window);
    void (__attribute__((__ms_abi__)) *ptr_ms_glfwMaximizeWindow)(GLFWwindow * window);
    void (__attribute__((__ms_abi__)) *ptr_ms_glfwShowWindow)(GLFWwindow * window);
    void (__attribute__((__ms_abi__)) *ptr_ms_glfwHideWindow)(GLFWwindow * window);
    void (__attribute__((__ms_abi__)) *ptr_ms_glfwFocusWindow)(GLFWwindow * window);
    void (__attribute__((__ms_abi__)) *ptr_ms_glfwRequestWindowAttention)(GLFWwindow * window);
    GLFWmonitor * (__attribute__((__ms_abi__)) *ptr_ms_glfwGetWindowMonitor)(GLFWwindow * window);
    void (__attribute__((__ms_abi__)) *ptr_ms_glfwSetWindowMonitor)(GLFWwindow * window, GLFWmonitor * monitor, int xpos, int ypos, int width, int height, int refreshRate);
    int (__attribute__((__ms_abi__)) *ptr_ms_glfwGetWindowAttrib)(GLFWwindow * window, int attrib);
    void (__attribute__((__ms_abi__)) *ptr_ms_glfwSetWindowAttrib)(GLFWwindow * window, int attrib, int value);
    void (__attribute__((__ms_abi__)) *ptr_ms_glfwSetWindowUserPointer)(GLFWwindow * window, void * pointer);
    void * (__attribute__((__ms_abi__)) *ptr_ms_glfwGetWindowUserPointer)(GLFWwindow * window);
    GLFWwindowposfun (__attribute__((__ms_abi__)) *ptr_ms_glfwSetWindowPosCallback)(GLFWwindow * window, GLFWwindowposfun callback);
    GLFWwindowsizefun (__attribute__((__ms_abi__)) *ptr_ms_glfwSetWindowSizeCallback)(GLFWwindow * window, GLFWwindowsizefun callback);
    GLFWwindowclosefun (__attribute__((__ms_abi__)) *ptr_ms_glfwSetWindowCloseCallback)(GLFWwindow * window, GLFWwindowclosefun callback);
    GLFWwindowrefreshfun (__attribute__((__ms_abi__)) *ptr_ms_glfwSetWindowRefreshCallback)(GLFWwindow * window, GLFWwindowrefreshfun callback);
    GLFWwindowfocusfun (__attribute__((__ms_abi__)) *ptr_ms_glfwSetWindowFocusCallback)(GLFWwindow * window, GLFWwindowfocusfun callback);
    GLFWwindowiconifyfun (__attribute__((__ms_abi__)) *ptr_ms_glfwSetWindowIconifyCallback)(GLFWwindow * window, GLFWwindowiconifyfun callback);
    GLFWwindowmaximizefun (__attribute__((__ms_abi__)) *ptr_ms_glfwSetWindowMaximizeCallback)(GLFWwindow * window, GLFWwindowmaximizefun callback);
    GLFWframebuffersizefun (__attribute__((__ms_abi__)) *ptr_ms_glfwSetFramebufferSizeCallback)(GLFWwindow * window, GLFWframebuffersizefun callback);
    GLFWwindowcontentscalefun (__attribute__((__ms_abi__)) *ptr_ms_glfwSetWindowContentScaleCallback)(GLFWwindow * window, GLFWwindowcontentscalefun callback);
    void (__attribute__((__ms_abi__)) *ptr_ms_glfwPollEvents)(void);
    void (__attribute__((__ms_abi__)) *ptr_ms_glfwWaitEvents)(void);
    void (__attribute__((__ms_abi__)) *ptr_ms_glfwWaitEventsTimeout)(double timeout);
    void (__attribute__((__ms_abi__)) *ptr_ms_glfwPostEmptyEvent)(void);
    int (__attribute__((__ms_abi__)) *ptr_ms_glfwGetInputMode)(GLFWwindow * window, int mode);
    void (__attribute__((__ms_abi__)) *ptr_ms_glfwSetInputMode)(GLFWwindow * window, int mode, int value);
    int (__attribute__((__ms_abi__)) *ptr_ms_glfwRawMouseMotionSupported)(void);
    const char * (__attribute__((__ms_abi__)) *ptr_ms_glfwGetKeyName)(int key, int scancode);
    int (__attribute__((__ms_abi__)) *ptr_ms_glfwGetKeyScancode)(int key);
    int (__attribute__((__ms_abi__)) *ptr_ms_glfwGetKey)(GLFWwindow * window, int key);
    int (__attribute__((__ms_abi__)) *ptr_ms_glfwGetMouseButton)(GLFWwindow * window, int button);
    void (__attribute__((__ms_abi__)) *ptr_ms_glfwGetCursorPos)(GLFWwindow * window, double * xpos, double * ypos);
    void (__attribute__((__ms_abi__)) *ptr_ms_glfwSetCursorPos)(GLFWwindow * window, double xpos, double ypos);
    GLFWcursor * (__attribute__((__ms_abi__)) *ptr_ms_glfwCreateCursor)(const GLFWimage * image, int xhot, int yhot);
    GLFWcursor * (__attribute__((__ms_abi__)) *ptr_ms_glfwCreateStandardCursor)(int shape);
    void (__attribute__((__ms_abi__)) *ptr_ms_glfwDestroyCursor)(GLFWcursor * cursor);
    void (__attribute__((__ms_abi__)) *ptr_ms_glfwSetCursor)(GLFWwindow * window, GLFWcursor * cursor);
    GLFWkeyfun (__attribute__((__ms_abi__)) *ptr_ms_glfwSetKeyCallback)(GLFWwindow * window, GLFWkeyfun callback);
    GLFWcharfun (__attribute__((__ms_abi__)) *ptr_ms_glfwSetCharCallback)(GLFWwindow * window, GLFWcharfun callback);
    GLFWcharmodsfun (__attribute__((__ms_abi__)) *ptr_ms_glfwSetCharModsCallback)(GLFWwindow * window, GLFWcharmodsfun callback);
    GLFWmousebuttonfun (__attribute__((__ms_abi__)) *ptr_ms_glfwSetMouseButtonCallback)(GLFWwindow * window, GLFWmousebuttonfun callback);
    GLFWcursorposfun (__attribute__((__ms_abi__)) *ptr_ms_glfwSetCursorPosCallback)(GLFWwindow * window, GLFWcursorposfun callback);
    GLFWcursorenterfun (__attribute__((__ms_abi__)) *ptr_ms_glfwSetCursorEnterCallback)(GLFWwindow * window, GLFWcursorenterfun callback);
    GLFWscrollfun (__attribute__((__ms_abi__)) *ptr_ms_glfwSetScrollCallback)(GLFWwindow * window, GLFWscrollfun callback);
    GLFWdropfun (__attribute__((__ms_abi__)) *ptr_ms_glfwSetDropCallback)(GLFWwindow * window, GLFWdropfun callback);
    int (__attribute__((__ms_abi__)) *ptr_ms_glfwJoystickPresent)(int jid);
    const float * (__attribute__((__ms_abi__)) *ptr_ms_glfwGetJoystickAxes)(int jid, int * count);
    const unsigned char * (__attribute__((__ms_abi__)) *ptr_ms_glfwGetJoystickButtons)(int jid, int * count);
    const unsigned char * (__attribute__((__ms_abi__)) *ptr_ms_glfwGetJoystickHats)(int jid, int * count);
    const char * (__attribute__((__ms_abi__)) *ptr_ms_glfwGetJoystickName)(int jid);
    const char * (__attribute__((__ms_abi__)) *ptr_ms_glfwGetJoystickGUID)(int jid);
    void (__attribute__((__ms_abi__)) *ptr_ms_glfwSetJoystickUserPointer)(int jid, void * pointer);
    void * (__attribute__((__ms_abi__)) *ptr_ms_glfwGetJoystickUserPointer)(int jid);
    int (__attribute__((__ms_abi__)) *ptr_ms_glfwJoystickIsGamepad)(int jid);
    GLFWjoystickfun (__attribute__((__ms_abi__)) *ptr_ms_glfwSetJoystickCallback)(GLFWjoystickfun callback);
    int (__attribute__((__ms_abi__)) *ptr_ms_glfwUpdateGamepadMappings)(const char * string);
    const char * (__attribute__((__ms_abi__)) *ptr_ms_glfwGetGamepadName)(int jid);
    int (__attribute__((__ms_abi__)) *ptr_ms_glfwGetGamepadState)(int jid, GLFWgamepadstate * state);
    void (__attribute__((__ms_abi__)) *ptr_ms_glfwSetClipboardString)(GLFWwindow * window, const char * string);
    const char * (__attribute__((__ms_abi__)) *ptr_ms_glfwGetClipboardString)(GLFWwindow * window);
    double (__attribute__((__ms_abi__)) *ptr_ms_glfwGetTime)(void);
    void (__attribute__((__ms_abi__)) *ptr_ms_glfwSetTime)(double time);
    uint64_t (__attribute__((__ms_abi__)) *ptr_ms_glfwGetTimerValue)(void);
    uint64_t (__attribute__((__ms_abi__)) *ptr_ms_glfwGetTimerFrequency)(void);
    void (__attribute__((__ms_abi__)) *ptr_ms_glfwMakeContextCurrent)(GLFWwindow * window);
    GLFWwindow * (__attribute__((__ms_abi__)) *ptr_ms_glfwGetCurrentContext)(void);
    void (__attribute__((__ms_abi__)) *ptr_ms_glfwSwapBuffers)(GLFWwindow * window);
    void (__attribute__((__ms_abi__)) *ptr_ms_glfwSwapInterval)(int interval);
    int (__attribute__((__ms_abi__)) *ptr_ms_glfwExtensionSupported)(const char * extension);
    GLFWglproc (__attribute__((__ms_abi__)) *ptr_ms_glfwGetProcAddress)(const char * procname);
    int (__attribute__((__ms_abi__)) *ptr_ms_glfwVulkanSupported)(void);
    const char * * (__attribute__((__ms_abi__)) *ptr_ms_glfwGetRequiredInstanceExtensions)(uint32_t * count);
} stub_funcs;

void *glfw;

void initialize_glfw(void) {
    char *candidates_glfw[] = { "libglfw.so", "glfw3.dll" };
    glfw = try_find_lib(candidates_glfw, 2);

    if (!glfw) {
        fprintf(stderr, "Unable to locate glfw, exiting!");
        exit(1);
    }

    stub_funcs.ptr_glfwInit = try_find_sym(glfw, "glfwInit");
    stub_funcs.ptr_glfwTerminate = try_find_sym(glfw, "glfwTerminate");
    stub_funcs.ptr_glfwInitHint = try_find_sym(glfw, "glfwInitHint");
    stub_funcs.ptr_glfwGetVersion = try_find_sym(glfw, "glfwGetVersion");
    stub_funcs.ptr_glfwGetVersionString = try_find_sym(glfw, "glfwGetVersionString");
    stub_funcs.ptr_glfwGetError = try_find_sym(glfw, "glfwGetError");
    stub_funcs.ptr_glfwSetErrorCallback = try_find_sym(glfw, "glfwSetErrorCallback");
    stub_funcs.ptr_glfwGetMonitors = try_find_sym(glfw, "glfwGetMonitors");
    stub_funcs.ptr_glfwGetPrimaryMonitor = try_find_sym(glfw, "glfwGetPrimaryMonitor");
    stub_funcs.ptr_glfwGetMonitorPos = try_find_sym(glfw, "glfwGetMonitorPos");
    stub_funcs.ptr_glfwGetMonitorWorkarea = try_find_sym(glfw, "glfwGetMonitorWorkarea");
    stub_funcs.ptr_glfwGetMonitorPhysicalSize = try_find_sym(glfw, "glfwGetMonitorPhysicalSize");
    stub_funcs.ptr_glfwGetMonitorContentScale = try_find_sym(glfw, "glfwGetMonitorContentScale");
    stub_funcs.ptr_glfwGetMonitorName = try_find_sym(glfw, "glfwGetMonitorName");
    stub_funcs.ptr_glfwSetMonitorUserPointer = try_find_sym(glfw, "glfwSetMonitorUserPointer");
    stub_funcs.ptr_glfwGetMonitorUserPointer = try_find_sym(glfw, "glfwGetMonitorUserPointer");
    stub_funcs.ptr_glfwSetMonitorCallback = try_find_sym(glfw, "glfwSetMonitorCallback");
    stub_funcs.ptr_glfwGetVideoModes = try_find_sym(glfw, "glfwGetVideoModes");
    stub_funcs.ptr_glfwGetVideoMode = try_find_sym(glfw, "glfwGetVideoMode");
    stub_funcs.ptr_glfwSetGamma = try_find_sym(glfw, "glfwSetGamma");
    stub_funcs.ptr_glfwGetGammaRamp = try_find_sym(glfw, "glfwGetGammaRamp");
    stub_funcs.ptr_glfwSetGammaRamp = try_find_sym(glfw, "glfwSetGammaRamp");
    stub_funcs.ptr_glfwDefaultWindowHints = try_find_sym(glfw, "glfwDefaultWindowHints");
    stub_funcs.ptr_glfwWindowHint = try_find_sym(glfw, "glfwWindowHint");
    stub_funcs.ptr_glfwWindowHintString = try_find_sym(glfw, "glfwWindowHintString");
    stub_funcs.ptr_glfwCreateWindow = try_find_sym(glfw, "glfwCreateWindow");
    stub_funcs.ptr_glfwDestroyWindow = try_find_sym(glfw, "glfwDestroyWindow");
    stub_funcs.ptr_glfwWindowShouldClose = try_find_sym(glfw, "glfwWindowShouldClose");
    stub_funcs.ptr_glfwSetWindowShouldClose = try_find_sym(glfw, "glfwSetWindowShouldClose");
    stub_funcs.ptr_glfwSetWindowTitle = try_find_sym(glfw, "glfwSetWindowTitle");
    stub_funcs.ptr_glfwSetWindowIcon = try_find_sym(glfw, "glfwSetWindowIcon");
    stub_funcs.ptr_glfwGetWindowPos = try_find_sym(glfw, "glfwGetWindowPos");
    stub_funcs.ptr_glfwSetWindowPos = try_find_sym(glfw, "glfwSetWindowPos");
    stub_funcs.ptr_glfwGetWindowSize = try_find_sym(glfw, "glfwGetWindowSize");
    stub_funcs.ptr_glfwSetWindowSizeLimits = try_find_sym(glfw, "glfwSetWindowSizeLimits");
    stub_funcs.ptr_glfwSetWindowAspectRatio = try_find_sym(glfw, "glfwSetWindowAspectRatio");
    stub_funcs.ptr_glfwSetWindowSize = try_find_sym(glfw, "glfwSetWindowSize");
    stub_funcs.ptr_glfwGetFramebufferSize = try_find_sym(glfw, "glfwGetFramebufferSize");
    stub_funcs.ptr_glfwGetWindowFrameSize = try_find_sym(glfw, "glfwGetWindowFrameSize");
    stub_funcs.ptr_glfwGetWindowContentScale = try_find_sym(glfw, "glfwGetWindowContentScale");
    stub_funcs.ptr_glfwGetWindowOpacity = try_find_sym(glfw, "glfwGetWindowOpacity");
    stub_funcs.ptr_glfwSetWindowOpacity = try_find_sym(glfw, "glfwSetWindowOpacity");
    stub_funcs.ptr_glfwIconifyWindow = try_find_sym(glfw, "glfwIconifyWindow");
    stub_funcs.ptr_glfwRestoreWindow = try_find_sym(glfw, "glfwRestoreWindow");
    stub_funcs.ptr_glfwMaximizeWindow = try_find_sym(glfw, "glfwMaximizeWindow");
    stub_funcs.ptr_glfwShowWindow = try_find_sym(glfw, "glfwShowWindow");
    stub_funcs.ptr_glfwHideWindow = try_find_sym(glfw, "glfwHideWindow");
    stub_funcs.ptr_glfwFocusWindow = try_find_sym(glfw, "glfwFocusWindow");
    stub_funcs.ptr_glfwRequestWindowAttention = try_find_sym(glfw, "glfwRequestWindowAttention");
    stub_funcs.ptr_glfwGetWindowMonitor = try_find_sym(glfw, "glfwGetWindowMonitor");
    stub_funcs.ptr_glfwSetWindowMonitor = try_find_sym(glfw, "glfwSetWindowMonitor");
    stub_funcs.ptr_glfwGetWindowAttrib = try_find_sym(glfw, "glfwGetWindowAttrib");
    stub_funcs.ptr_glfwSetWindowAttrib = try_find_sym(glfw, "glfwSetWindowAttrib");
    stub_funcs.ptr_glfwSetWindowUserPointer = try_find_sym(glfw, "glfwSetWindowUserPointer");
    stub_funcs.ptr_glfwGetWindowUserPointer = try_find_sym(glfw, "glfwGetWindowUserPointer");
    stub_funcs.ptr_glfwSetWindowPosCallback = try_find_sym(glfw, "glfwSetWindowPosCallback");
    stub_funcs.ptr_glfwSetWindowSizeCallback = try_find_sym(glfw, "glfwSetWindowSizeCallback");
    stub_funcs.ptr_glfwSetWindowCloseCallback = try_find_sym(glfw, "glfwSetWindowCloseCallback");
    stub_funcs.ptr_glfwSetWindowRefreshCallback = try_find_sym(glfw, "glfwSetWindowRefreshCallback");
    stub_funcs.ptr_glfwSetWindowFocusCallback = try_find_sym(glfw, "glfwSetWindowFocusCallback");
    stub_funcs.ptr_glfwSetWindowIconifyCallback = try_find_sym(glfw, "glfwSetWindowIconifyCallback");
    stub_funcs.ptr_glfwSetWindowMaximizeCallback = try_find_sym(glfw, "glfwSetWindowMaximizeCallback");
    stub_funcs.ptr_glfwSetFramebufferSizeCallback = try_find_sym(glfw, "glfwSetFramebufferSizeCallback");
    stub_funcs.ptr_glfwSetWindowContentScaleCallback = try_find_sym(glfw, "glfwSetWindowContentScaleCallback");
    stub_funcs.ptr_glfwPollEvents = try_find_sym(glfw, "glfwPollEvents");
    stub_funcs.ptr_glfwWaitEvents = try_find_sym(glfw, "glfwWaitEvents");
    stub_funcs.ptr_glfwWaitEventsTimeout = try_find_sym(glfw, "glfwWaitEventsTimeout");
    stub_funcs.ptr_glfwPostEmptyEvent = try_find_sym(glfw, "glfwPostEmptyEvent");
    stub_funcs.ptr_glfwGetInputMode = try_find_sym(glfw, "glfwGetInputMode");
    stub_funcs.ptr_glfwSetInputMode = try_find_sym(glfw, "glfwSetInputMode");
    stub_funcs.ptr_glfwRawMouseMotionSupported = try_find_sym(glfw, "glfwRawMouseMotionSupported");
    stub_funcs.ptr_glfwGetKeyName = try_find_sym(glfw, "glfwGetKeyName");
    stub_funcs.ptr_glfwGetKeyScancode = try_find_sym(glfw, "glfwGetKeyScancode");
    stub_funcs.ptr_glfwGetKey = try_find_sym(glfw, "glfwGetKey");
    stub_funcs.ptr_glfwGetMouseButton = try_find_sym(glfw, "glfwGetMouseButton");
    stub_funcs.ptr_glfwGetCursorPos = try_find_sym(glfw, "glfwGetCursorPos");
    stub_funcs.ptr_glfwSetCursorPos = try_find_sym(glfw, "glfwSetCursorPos");
    stub_funcs.ptr_glfwCreateCursor = try_find_sym(glfw, "glfwCreateCursor");
    stub_funcs.ptr_glfwCreateStandardCursor = try_find_sym(glfw, "glfwCreateStandardCursor");
    stub_funcs.ptr_glfwDestroyCursor = try_find_sym(glfw, "glfwDestroyCursor");
    stub_funcs.ptr_glfwSetCursor = try_find_sym(glfw, "glfwSetCursor");
    stub_funcs.ptr_glfwSetKeyCallback = try_find_sym(glfw, "glfwSetKeyCallback");
    stub_funcs.ptr_glfwSetCharCallback = try_find_sym(glfw, "glfwSetCharCallback");
    stub_funcs.ptr_glfwSetCharModsCallback = try_find_sym(glfw, "glfwSetCharModsCallback");
    stub_funcs.ptr_glfwSetMouseButtonCallback = try_find_sym(glfw, "glfwSetMouseButtonCallback");
    stub_funcs.ptr_glfwSetCursorPosCallback = try_find_sym(glfw, "glfwSetCursorPosCallback");
    stub_funcs.ptr_glfwSetCursorEnterCallback = try_find_sym(glfw, "glfwSetCursorEnterCallback");
    stub_funcs.ptr_glfwSetScrollCallback = try_find_sym(glfw, "glfwSetScrollCallback");
    stub_funcs.ptr_glfwSetDropCallback = try_find_sym(glfw, "glfwSetDropCallback");
    stub_funcs.ptr_glfwJoystickPresent = try_find_sym(glfw, "glfwJoystickPresent");
    stub_funcs.ptr_glfwGetJoystickAxes = try_find_sym(glfw, "glfwGetJoystickAxes");
    stub_funcs.ptr_glfwGetJoystickButtons = try_find_sym(glfw, "glfwGetJoystickButtons");
    stub_funcs.ptr_glfwGetJoystickHats = try_find_sym(glfw, "glfwGetJoystickHats");
    stub_funcs.ptr_glfwGetJoystickName = try_find_sym(glfw, "glfwGetJoystickName");
    stub_funcs.ptr_glfwGetJoystickGUID = try_find_sym(glfw, "glfwGetJoystickGUID");
    stub_funcs.ptr_glfwSetJoystickUserPointer = try_find_sym(glfw, "glfwSetJoystickUserPointer");
    stub_funcs.ptr_glfwGetJoystickUserPointer = try_find_sym(glfw, "glfwGetJoystickUserPointer");
    stub_funcs.ptr_glfwJoystickIsGamepad = try_find_sym(glfw, "glfwJoystickIsGamepad");
    stub_funcs.ptr_glfwSetJoystickCallback = try_find_sym(glfw, "glfwSetJoystickCallback");
    stub_funcs.ptr_glfwUpdateGamepadMappings = try_find_sym(glfw, "glfwUpdateGamepadMappings");
    stub_funcs.ptr_glfwGetGamepadName = try_find_sym(glfw, "glfwGetGamepadName");
    stub_funcs.ptr_glfwGetGamepadState = try_find_sym(glfw, "glfwGetGamepadState");
    stub_funcs.ptr_glfwSetClipboardString = try_find_sym(glfw, "glfwSetClipboardString");
    stub_funcs.ptr_glfwGetClipboardString = try_find_sym(glfw, "glfwGetClipboardString");
    stub_funcs.ptr_glfwGetTime = try_find_sym(glfw, "glfwGetTime");
    stub_funcs.ptr_glfwSetTime = try_find_sym(glfw, "glfwSetTime");
    stub_funcs.ptr_glfwGetTimerValue = try_find_sym(glfw, "glfwGetTimerValue");
    stub_funcs.ptr_glfwGetTimerFrequency = try_find_sym(glfw, "glfwGetTimerFrequency");
    stub_funcs.ptr_glfwMakeContextCurrent = try_find_sym(glfw, "glfwMakeContextCurrent");
    stub_funcs.ptr_glfwGetCurrentContext = try_find_sym(glfw, "glfwGetCurrentContext");
    stub_funcs.ptr_glfwSwapBuffers = try_find_sym(glfw, "glfwSwapBuffers");
    stub_funcs.ptr_glfwSwapInterval = try_find_sym(glfw, "glfwSwapInterval");
    stub_funcs.ptr_glfwExtensionSupported = try_find_sym(glfw, "glfwExtensionSupported");
    stub_funcs.ptr_glfwGetProcAddress = try_find_sym(glfw, "glfwGetProcAddress");
    stub_funcs.ptr_glfwVulkanSupported = try_find_sym(glfw, "glfwVulkanSupported");
    stub_funcs.ptr_glfwGetRequiredInstanceExtensions = try_find_sym(glfw, "glfwGetRequiredInstanceExtensions");
    stub_funcs.ptr_ms_glfwInit = try_find_sym(glfw, "glfwInit");
    stub_funcs.ptr_ms_glfwTerminate = try_find_sym(glfw, "glfwTerminate");
    stub_funcs.ptr_ms_glfwInitHint = try_find_sym(glfw, "glfwInitHint");
    stub_funcs.ptr_ms_glfwGetVersion = try_find_sym(glfw, "glfwGetVersion");
    stub_funcs.ptr_ms_glfwGetVersionString = try_find_sym(glfw, "glfwGetVersionString");
    stub_funcs.ptr_ms_glfwGetError = try_find_sym(glfw, "glfwGetError");
    stub_funcs.ptr_ms_glfwSetErrorCallback = try_find_sym(glfw, "glfwSetErrorCallback");
    stub_funcs.ptr_ms_glfwGetMonitors = try_find_sym(glfw, "glfwGetMonitors");
    stub_funcs.ptr_ms_glfwGetPrimaryMonitor = try_find_sym(glfw, "glfwGetPrimaryMonitor");
    stub_funcs.ptr_ms_glfwGetMonitorPos = try_find_sym(glfw, "glfwGetMonitorPos");
    stub_funcs.ptr_ms_glfwGetMonitorWorkarea = try_find_sym(glfw, "glfwGetMonitorWorkarea");
    stub_funcs.ptr_ms_glfwGetMonitorPhysicalSize = try_find_sym(glfw, "glfwGetMonitorPhysicalSize");
    stub_funcs.ptr_ms_glfwGetMonitorContentScale = try_find_sym(glfw, "glfwGetMonitorContentScale");
    stub_funcs.ptr_ms_glfwGetMonitorName = try_find_sym(glfw, "glfwGetMonitorName");
    stub_funcs.ptr_ms_glfwSetMonitorUserPointer = try_find_sym(glfw, "glfwSetMonitorUserPointer");
    stub_funcs.ptr_ms_glfwGetMonitorUserPointer = try_find_sym(glfw, "glfwGetMonitorUserPointer");
    stub_funcs.ptr_ms_glfwSetMonitorCallback = try_find_sym(glfw, "glfwSetMonitorCallback");
    stub_funcs.ptr_ms_glfwGetVideoModes = try_find_sym(glfw, "glfwGetVideoModes");
    stub_funcs.ptr_ms_glfwGetVideoMode = try_find_sym(glfw, "glfwGetVideoMode");
    stub_funcs.ptr_ms_glfwSetGamma = try_find_sym(glfw, "glfwSetGamma");
    stub_funcs.ptr_ms_glfwGetGammaRamp = try_find_sym(glfw, "glfwGetGammaRamp");
    stub_funcs.ptr_ms_glfwSetGammaRamp = try_find_sym(glfw, "glfwSetGammaRamp");
    stub_funcs.ptr_ms_glfwDefaultWindowHints = try_find_sym(glfw, "glfwDefaultWindowHints");
    stub_funcs.ptr_ms_glfwWindowHint = try_find_sym(glfw, "glfwWindowHint");
    stub_funcs.ptr_ms_glfwWindowHintString = try_find_sym(glfw, "glfwWindowHintString");
    stub_funcs.ptr_ms_glfwCreateWindow = try_find_sym(glfw, "glfwCreateWindow");
    stub_funcs.ptr_ms_glfwDestroyWindow = try_find_sym(glfw, "glfwDestroyWindow");
    stub_funcs.ptr_ms_glfwWindowShouldClose = try_find_sym(glfw, "glfwWindowShouldClose");
    stub_funcs.ptr_ms_glfwSetWindowShouldClose = try_find_sym(glfw, "glfwSetWindowShouldClose");
    stub_funcs.ptr_ms_glfwSetWindowTitle = try_find_sym(glfw, "glfwSetWindowTitle");
    stub_funcs.ptr_ms_glfwSetWindowIcon = try_find_sym(glfw, "glfwSetWindowIcon");
    stub_funcs.ptr_ms_glfwGetWindowPos = try_find_sym(glfw, "glfwGetWindowPos");
    stub_funcs.ptr_ms_glfwSetWindowPos = try_find_sym(glfw, "glfwSetWindowPos");
    stub_funcs.ptr_ms_glfwGetWindowSize = try_find_sym(glfw, "glfwGetWindowSize");
    stub_funcs.ptr_ms_glfwSetWindowSizeLimits = try_find_sym(glfw, "glfwSetWindowSizeLimits");
    stub_funcs.ptr_ms_glfwSetWindowAspectRatio = try_find_sym(glfw, "glfwSetWindowAspectRatio");
    stub_funcs.ptr_ms_glfwSetWindowSize = try_find_sym(glfw, "glfwSetWindowSize");
    stub_funcs.ptr_ms_glfwGetFramebufferSize = try_find_sym(glfw, "glfwGetFramebufferSize");
    stub_funcs.ptr_ms_glfwGetWindowFrameSize = try_find_sym(glfw, "glfwGetWindowFrameSize");
    stub_funcs.ptr_ms_glfwGetWindowContentScale = try_find_sym(glfw, "glfwGetWindowContentScale");
    stub_funcs.ptr_ms_glfwGetWindowOpacity = try_find_sym(glfw, "glfwGetWindowOpacity");
    stub_funcs.ptr_ms_glfwSetWindowOpacity = try_find_sym(glfw, "glfwSetWindowOpacity");
    stub_funcs.ptr_ms_glfwIconifyWindow = try_find_sym(glfw, "glfwIconifyWindow");
    stub_funcs.ptr_ms_glfwRestoreWindow = try_find_sym(glfw, "glfwRestoreWindow");
    stub_funcs.ptr_ms_glfwMaximizeWindow = try_find_sym(glfw, "glfwMaximizeWindow");
    stub_funcs.ptr_ms_glfwShowWindow = try_find_sym(glfw, "glfwShowWindow");
    stub_funcs.ptr_ms_glfwHideWindow = try_find_sym(glfw, "glfwHideWindow");
    stub_funcs.ptr_ms_glfwFocusWindow = try_find_sym(glfw, "glfwFocusWindow");
    stub_funcs.ptr_ms_glfwRequestWindowAttention = try_find_sym(glfw, "glfwRequestWindowAttention");
    stub_funcs.ptr_ms_glfwGetWindowMonitor = try_find_sym(glfw, "glfwGetWindowMonitor");
    stub_funcs.ptr_ms_glfwSetWindowMonitor = try_find_sym(glfw, "glfwSetWindowMonitor");
    stub_funcs.ptr_ms_glfwGetWindowAttrib = try_find_sym(glfw, "glfwGetWindowAttrib");
    stub_funcs.ptr_ms_glfwSetWindowAttrib = try_find_sym(glfw, "glfwSetWindowAttrib");
    stub_funcs.ptr_ms_glfwSetWindowUserPointer = try_find_sym(glfw, "glfwSetWindowUserPointer");
    stub_funcs.ptr_ms_glfwGetWindowUserPointer = try_find_sym(glfw, "glfwGetWindowUserPointer");
    stub_funcs.ptr_ms_glfwSetWindowPosCallback = try_find_sym(glfw, "glfwSetWindowPosCallback");
    stub_funcs.ptr_ms_glfwSetWindowSizeCallback = try_find_sym(glfw, "glfwSetWindowSizeCallback");
    stub_funcs.ptr_ms_glfwSetWindowCloseCallback = try_find_sym(glfw, "glfwSetWindowCloseCallback");
    stub_funcs.ptr_ms_glfwSetWindowRefreshCallback = try_find_sym(glfw, "glfwSetWindowRefreshCallback");
    stub_funcs.ptr_ms_glfwSetWindowFocusCallback = try_find_sym(glfw, "glfwSetWindowFocusCallback");
    stub_funcs.ptr_ms_glfwSetWindowIconifyCallback = try_find_sym(glfw, "glfwSetWindowIconifyCallback");
    stub_funcs.ptr_ms_glfwSetWindowMaximizeCallback = try_find_sym(glfw, "glfwSetWindowMaximizeCallback");
    stub_funcs.ptr_ms_glfwSetFramebufferSizeCallback = try_find_sym(glfw, "glfwSetFramebufferSizeCallback");
    stub_funcs.ptr_ms_glfwSetWindowContentScaleCallback = try_find_sym(glfw, "glfwSetWindowContentScaleCallback");
    stub_funcs.ptr_ms_glfwPollEvents = try_find_sym(glfw, "glfwPollEvents");
    stub_funcs.ptr_ms_glfwWaitEvents = try_find_sym(glfw, "glfwWaitEvents");
    stub_funcs.ptr_ms_glfwWaitEventsTimeout = try_find_sym(glfw, "glfwWaitEventsTimeout");
    stub_funcs.ptr_ms_glfwPostEmptyEvent = try_find_sym(glfw, "glfwPostEmptyEvent");
    stub_funcs.ptr_ms_glfwGetInputMode = try_find_sym(glfw, "glfwGetInputMode");
    stub_funcs.ptr_ms_glfwSetInputMode = try_find_sym(glfw, "glfwSetInputMode");
    stub_funcs.ptr_ms_glfwRawMouseMotionSupported = try_find_sym(glfw, "glfwRawMouseMotionSupported");
    stub_funcs.ptr_ms_glfwGetKeyName = try_find_sym(glfw, "glfwGetKeyName");
    stub_funcs.ptr_ms_glfwGetKeyScancode = try_find_sym(glfw, "glfwGetKeyScancode");
    stub_funcs.ptr_ms_glfwGetKey = try_find_sym(glfw, "glfwGetKey");
    stub_funcs.ptr_ms_glfwGetMouseButton = try_find_sym(glfw, "glfwGetMouseButton");
    stub_funcs.ptr_ms_glfwGetCursorPos = try_find_sym(glfw, "glfwGetCursorPos");
    stub_funcs.ptr_ms_glfwSetCursorPos = try_find_sym(glfw, "glfwSetCursorPos");
    stub_funcs.ptr_ms_glfwCreateCursor = try_find_sym(glfw, "glfwCreateCursor");
    stub_funcs.ptr_ms_glfwCreateStandardCursor = try_find_sym(glfw, "glfwCreateStandardCursor");
    stub_funcs.ptr_ms_glfwDestroyCursor = try_find_sym(glfw, "glfwDestroyCursor");
    stub_funcs.ptr_ms_glfwSetCursor = try_find_sym(glfw, "glfwSetCursor");
    stub_funcs.ptr_ms_glfwSetKeyCallback = try_find_sym(glfw, "glfwSetKeyCallback");
    stub_funcs.ptr_ms_glfwSetCharCallback = try_find_sym(glfw, "glfwSetCharCallback");
    stub_funcs.ptr_ms_glfwSetCharModsCallback = try_find_sym(glfw, "glfwSetCharModsCallback");
    stub_funcs.ptr_ms_glfwSetMouseButtonCallback = try_find_sym(glfw, "glfwSetMouseButtonCallback");
    stub_funcs.ptr_ms_glfwSetCursorPosCallback = try_find_sym(glfw, "glfwSetCursorPosCallback");
    stub_funcs.ptr_ms_glfwSetCursorEnterCallback = try_find_sym(glfw, "glfwSetCursorEnterCallback");
    stub_funcs.ptr_ms_glfwSetScrollCallback = try_find_sym(glfw, "glfwSetScrollCallback");
    stub_funcs.ptr_ms_glfwSetDropCallback = try_find_sym(glfw, "glfwSetDropCallback");
    stub_funcs.ptr_ms_glfwJoystickPresent = try_find_sym(glfw, "glfwJoystickPresent");
    stub_funcs.ptr_ms_glfwGetJoystickAxes = try_find_sym(glfw, "glfwGetJoystickAxes");
    stub_funcs.ptr_ms_glfwGetJoystickButtons = try_find_sym(glfw, "glfwGetJoystickButtons");
    stub_funcs.ptr_ms_glfwGetJoystickHats = try_find_sym(glfw, "glfwGetJoystickHats");
    stub_funcs.ptr_ms_glfwGetJoystickName = try_find_sym(glfw, "glfwGetJoystickName");
    stub_funcs.ptr_ms_glfwGetJoystickGUID = try_find_sym(glfw, "glfwGetJoystickGUID");
    stub_funcs.ptr_ms_glfwSetJoystickUserPointer = try_find_sym(glfw, "glfwSetJoystickUserPointer");
    stub_funcs.ptr_ms_glfwGetJoystickUserPointer = try_find_sym(glfw, "glfwGetJoystickUserPointer");
    stub_funcs.ptr_ms_glfwJoystickIsGamepad = try_find_sym(glfw, "glfwJoystickIsGamepad");
    stub_funcs.ptr_ms_glfwSetJoystickCallback = try_find_sym(glfw, "glfwSetJoystickCallback");
    stub_funcs.ptr_ms_glfwUpdateGamepadMappings = try_find_sym(glfw, "glfwUpdateGamepadMappings");
    stub_funcs.ptr_ms_glfwGetGamepadName = try_find_sym(glfw, "glfwGetGamepadName");
    stub_funcs.ptr_ms_glfwGetGamepadState = try_find_sym(glfw, "glfwGetGamepadState");
    stub_funcs.ptr_ms_glfwSetClipboardString = try_find_sym(glfw, "glfwSetClipboardString");
    stub_funcs.ptr_ms_glfwGetClipboardString = try_find_sym(glfw, "glfwGetClipboardString");
    stub_funcs.ptr_ms_glfwGetTime = try_find_sym(glfw, "glfwGetTime");
    stub_funcs.ptr_ms_glfwSetTime = try_find_sym(glfw, "glfwSetTime");
    stub_funcs.ptr_ms_glfwGetTimerValue = try_find_sym(glfw, "glfwGetTimerValue");
    stub_funcs.ptr_ms_glfwGetTimerFrequency = try_find_sym(glfw, "glfwGetTimerFrequency");
    stub_funcs.ptr_ms_glfwMakeContextCurrent = try_find_sym(glfw, "glfwMakeContextCurrent");
    stub_funcs.ptr_ms_glfwGetCurrentContext = try_find_sym(glfw, "glfwGetCurrentContext");
    stub_funcs.ptr_ms_glfwSwapBuffers = try_find_sym(glfw, "glfwSwapBuffers");
    stub_funcs.ptr_ms_glfwSwapInterval = try_find_sym(glfw, "glfwSwapInterval");
    stub_funcs.ptr_ms_glfwExtensionSupported = try_find_sym(glfw, "glfwExtensionSupported");
    stub_funcs.ptr_ms_glfwGetProcAddress = try_find_sym(glfw, "glfwGetProcAddress");
    stub_funcs.ptr_ms_glfwVulkanSupported = try_find_sym(glfw, "glfwVulkanSupported");
    stub_funcs.ptr_ms_glfwGetRequiredInstanceExtensions = try_find_sym(glfw, "glfwGetRequiredInstanceExtensions");
}

int (glfwInit)(void) { 
	if((IsLinux())){
		return stub_funcs.ptr_glfwInit();  
	}
	else {
		return stub_funcs.ptr_ms_glfwInit(); 
	}}
void (glfwTerminate)(void) { 
	if((IsLinux())){
		stub_funcs.ptr_glfwTerminate();  
	}
	else {
		stub_funcs.ptr_ms_glfwTerminate(); 
	}}
void (glfwInitHint)(int hint, int value) { 
	if((IsLinux())){
		stub_funcs.ptr_glfwInitHint(hint, value);  
	}
	else {
		stub_funcs.ptr_ms_glfwInitHint(hint, value); 
	}}
void (glfwGetVersion)(int * major, int * minor, int * rev) { 
	if((IsLinux())){
		stub_funcs.ptr_glfwGetVersion(major, minor, rev);  
	}
	else {
		stub_funcs.ptr_ms_glfwGetVersion(major, minor, rev); 
	}}
const char * (glfwGetVersionString)(void) { 
	if((IsLinux())){
		return stub_funcs.ptr_glfwGetVersionString();  
	}
	else {
		return stub_funcs.ptr_ms_glfwGetVersionString(); 
	}}
int (glfwGetError)(const char * * description) { 
	if((IsLinux())){
		return stub_funcs.ptr_glfwGetError(description);  
	}
	else {
		return stub_funcs.ptr_ms_glfwGetError(description); 
	}}
GLFWerrorfun (glfwSetErrorCallback)(GLFWerrorfun callback) { 
	if((IsLinux())){
		return stub_funcs.ptr_glfwSetErrorCallback(callback);  
	}
	else {
		return stub_funcs.ptr_ms_glfwSetErrorCallback(callback); 
	}}
GLFWmonitor * * (glfwGetMonitors)(int * count) { 
	if((IsLinux())){
		return stub_funcs.ptr_glfwGetMonitors(count);  
	}
	else {
		return stub_funcs.ptr_ms_glfwGetMonitors(count); 
	}}
GLFWmonitor * (glfwGetPrimaryMonitor)(void) { 
	if((IsLinux())){
		return stub_funcs.ptr_glfwGetPrimaryMonitor();  
	}
	else {
		return stub_funcs.ptr_ms_glfwGetPrimaryMonitor(); 
	}}
void (glfwGetMonitorPos)(GLFWmonitor * monitor, int * xpos, int * ypos) { 
	if((IsLinux())){
		stub_funcs.ptr_glfwGetMonitorPos(monitor, xpos, ypos);  
	}
	else {
		stub_funcs.ptr_ms_glfwGetMonitorPos(monitor, xpos, ypos); 
	}}
void (glfwGetMonitorWorkarea)(GLFWmonitor * monitor, int * xpos, int * ypos, int * width, int * height) { 
	if((IsLinux())){
		stub_funcs.ptr_glfwGetMonitorWorkarea(monitor, xpos, ypos, width, height);  
	}
	else {
		stub_funcs.ptr_ms_glfwGetMonitorWorkarea(monitor, xpos, ypos, width, height); 
	}}
void (glfwGetMonitorPhysicalSize)(GLFWmonitor * monitor, int * widthMM, int * heightMM) { 
	if((IsLinux())){
		stub_funcs.ptr_glfwGetMonitorPhysicalSize(monitor, widthMM, heightMM);  
	}
	else {
		stub_funcs.ptr_ms_glfwGetMonitorPhysicalSize(monitor, widthMM, heightMM); 
	}}
void (glfwGetMonitorContentScale)(GLFWmonitor * monitor, float * xscale, float * yscale) { 
	if((IsLinux())){
		stub_funcs.ptr_glfwGetMonitorContentScale(monitor, xscale, yscale);  
	}
	else {
		stub_funcs.ptr_ms_glfwGetMonitorContentScale(monitor, xscale, yscale); 
	}}
const char * (glfwGetMonitorName)(GLFWmonitor * monitor) { 
	if((IsLinux())){
		return stub_funcs.ptr_glfwGetMonitorName(monitor);  
	}
	else {
		return stub_funcs.ptr_ms_glfwGetMonitorName(monitor); 
	}}
void (glfwSetMonitorUserPointer)(GLFWmonitor * monitor, void * pointer) { 
	if((IsLinux())){
		stub_funcs.ptr_glfwSetMonitorUserPointer(monitor, pointer);  
	}
	else {
		stub_funcs.ptr_ms_glfwSetMonitorUserPointer(monitor, pointer); 
	}}
void * (glfwGetMonitorUserPointer)(GLFWmonitor * monitor) { 
	if((IsLinux())){
		return stub_funcs.ptr_glfwGetMonitorUserPointer(monitor);  
	}
	else {
		return stub_funcs.ptr_ms_glfwGetMonitorUserPointer(monitor); 
	}}
GLFWmonitorfun (glfwSetMonitorCallback)(GLFWmonitorfun callback) { 
	if((IsLinux())){
		return stub_funcs.ptr_glfwSetMonitorCallback(callback);  
	}
	else {
		return stub_funcs.ptr_ms_glfwSetMonitorCallback(callback); 
	}}
const GLFWvidmode * (glfwGetVideoModes)(GLFWmonitor * monitor, int * count) { 
	if((IsLinux())){
		return stub_funcs.ptr_glfwGetVideoModes(monitor, count);  
	}
	else {
		return stub_funcs.ptr_ms_glfwGetVideoModes(monitor, count); 
	}}
const GLFWvidmode * (glfwGetVideoMode)(GLFWmonitor * monitor) { 
	if((IsLinux())){
		return stub_funcs.ptr_glfwGetVideoMode(monitor);  
	}
	else {
		return stub_funcs.ptr_ms_glfwGetVideoMode(monitor); 
	}}
void (glfwSetGamma)(GLFWmonitor * monitor, float gamma) { 
	if((IsLinux())){
		stub_funcs.ptr_glfwSetGamma(monitor, gamma);  
	}
	else {
		stub_funcs.ptr_ms_glfwSetGamma(monitor, gamma); 
	}}
const GLFWgammaramp * (glfwGetGammaRamp)(GLFWmonitor * monitor) { 
	if((IsLinux())){
		return stub_funcs.ptr_glfwGetGammaRamp(monitor);  
	}
	else {
		return stub_funcs.ptr_ms_glfwGetGammaRamp(monitor); 
	}}
void (glfwSetGammaRamp)(GLFWmonitor * monitor, const GLFWgammaramp * ramp) { 
	if((IsLinux())){
		stub_funcs.ptr_glfwSetGammaRamp(monitor, ramp);  
	}
	else {
		stub_funcs.ptr_ms_glfwSetGammaRamp(monitor, ramp); 
	}}
void (glfwDefaultWindowHints)(void) { 
	if((IsLinux())){
		stub_funcs.ptr_glfwDefaultWindowHints();  
	}
	else {
		stub_funcs.ptr_ms_glfwDefaultWindowHints(); 
	}}
void (glfwWindowHint)(int hint, int value) { 
	if((IsLinux())){
		stub_funcs.ptr_glfwWindowHint(hint, value);  
	}
	else {
		stub_funcs.ptr_ms_glfwWindowHint(hint, value); 
	}}
void (glfwWindowHintString)(int hint, const char * value) { 
	if((IsLinux())){
		stub_funcs.ptr_glfwWindowHintString(hint, value);  
	}
	else {
		stub_funcs.ptr_ms_glfwWindowHintString(hint, value); 
	}}
GLFWwindow * (glfwCreateWindow)(int width, int height, const char * title, GLFWmonitor * monitor, GLFWwindow * share) { 
	if((IsLinux())){
		return stub_funcs.ptr_glfwCreateWindow(width, height, title, monitor, share);  
	}
	else {
		return stub_funcs.ptr_ms_glfwCreateWindow(width, height, title, monitor, share); 
	}}
void (glfwDestroyWindow)(GLFWwindow * window) { 
	if((IsLinux())){
		stub_funcs.ptr_glfwDestroyWindow(window);  
	}
	else {
		stub_funcs.ptr_ms_glfwDestroyWindow(window); 
	}}
int (glfwWindowShouldClose)(GLFWwindow * window) { 
	if((IsLinux())){
		return stub_funcs.ptr_glfwWindowShouldClose(window);  
	}
	else {
		return stub_funcs.ptr_ms_glfwWindowShouldClose(window); 
	}}
void (glfwSetWindowShouldClose)(GLFWwindow * window, int value) { 
	if((IsLinux())){
		stub_funcs.ptr_glfwSetWindowShouldClose(window, value);  
	}
	else {
		stub_funcs.ptr_ms_glfwSetWindowShouldClose(window, value); 
	}}
void (glfwSetWindowTitle)(GLFWwindow * window, const char * title) { 
	if((IsLinux())){
		stub_funcs.ptr_glfwSetWindowTitle(window, title);  
	}
	else {
		stub_funcs.ptr_ms_glfwSetWindowTitle(window, title); 
	}}
void (glfwSetWindowIcon)(GLFWwindow * window, int count, const GLFWimage * images) { 
	if((IsLinux())){
		stub_funcs.ptr_glfwSetWindowIcon(window, count, images);  
	}
	else {
		stub_funcs.ptr_ms_glfwSetWindowIcon(window, count, images); 
	}}
void (glfwGetWindowPos)(GLFWwindow * window, int * xpos, int * ypos) { 
	if((IsLinux())){
		stub_funcs.ptr_glfwGetWindowPos(window, xpos, ypos);  
	}
	else {
		stub_funcs.ptr_ms_glfwGetWindowPos(window, xpos, ypos); 
	}}
void (glfwSetWindowPos)(GLFWwindow * window, int xpos, int ypos) { 
	if((IsLinux())){
		stub_funcs.ptr_glfwSetWindowPos(window, xpos, ypos);  
	}
	else {
		stub_funcs.ptr_ms_glfwSetWindowPos(window, xpos, ypos); 
	}}
void (glfwGetWindowSize)(GLFWwindow * window, int * width, int * height) { 
	if((IsLinux())){
		stub_funcs.ptr_glfwGetWindowSize(window, width, height);  
	}
	else {
		stub_funcs.ptr_ms_glfwGetWindowSize(window, width, height); 
	}}
void (glfwSetWindowSizeLimits)(GLFWwindow * window, int minwidth, int minheight, int maxwidth, int maxheight) { 
	if((IsLinux())){
		stub_funcs.ptr_glfwSetWindowSizeLimits(window, minwidth, minheight, maxwidth, maxheight);  
	}
	else {
		stub_funcs.ptr_ms_glfwSetWindowSizeLimits(window, minwidth, minheight, maxwidth, maxheight); 
	}}
void (glfwSetWindowAspectRatio)(GLFWwindow * window, int numer, int denom) { 
	if((IsLinux())){
		stub_funcs.ptr_glfwSetWindowAspectRatio(window, numer, denom);  
	}
	else {
		stub_funcs.ptr_ms_glfwSetWindowAspectRatio(window, numer, denom); 
	}}
void (glfwSetWindowSize)(GLFWwindow * window, int width, int height) { 
	if((IsLinux())){
		stub_funcs.ptr_glfwSetWindowSize(window, width, height);  
	}
	else {
		stub_funcs.ptr_ms_glfwSetWindowSize(window, width, height); 
	}}
void (glfwGetFramebufferSize)(GLFWwindow * window, int * width, int * height) { 
	if((IsLinux())){
		stub_funcs.ptr_glfwGetFramebufferSize(window, width, height);  
	}
	else {
		stub_funcs.ptr_ms_glfwGetFramebufferSize(window, width, height); 
	}}
void (glfwGetWindowFrameSize)(GLFWwindow * window, int * left, int * top, int * right, int * bottom) { 
	if((IsLinux())){
		stub_funcs.ptr_glfwGetWindowFrameSize(window, left, top, right, bottom);  
	}
	else {
		stub_funcs.ptr_ms_glfwGetWindowFrameSize(window, left, top, right, bottom); 
	}}
void (glfwGetWindowContentScale)(GLFWwindow * window, float * xscale, float * yscale) { 
	if((IsLinux())){
		stub_funcs.ptr_glfwGetWindowContentScale(window, xscale, yscale);  
	}
	else {
		stub_funcs.ptr_ms_glfwGetWindowContentScale(window, xscale, yscale); 
	}}
float (glfwGetWindowOpacity)(GLFWwindow * window) { 
	if((IsLinux())){
		return stub_funcs.ptr_glfwGetWindowOpacity(window);  
	}
	else {
		return stub_funcs.ptr_ms_glfwGetWindowOpacity(window); 
	}}
void (glfwSetWindowOpacity)(GLFWwindow * window, float opacity) { 
	if((IsLinux())){
		stub_funcs.ptr_glfwSetWindowOpacity(window, opacity);  
	}
	else {
		stub_funcs.ptr_ms_glfwSetWindowOpacity(window, opacity); 
	}}
void (glfwIconifyWindow)(GLFWwindow * window) { 
	if((IsLinux())){
		stub_funcs.ptr_glfwIconifyWindow(window);  
	}
	else {
		stub_funcs.ptr_ms_glfwIconifyWindow(window); 
	}}
void (glfwRestoreWindow)(GLFWwindow * window) { 
	if((IsLinux())){
		stub_funcs.ptr_glfwRestoreWindow(window);  
	}
	else {
		stub_funcs.ptr_ms_glfwRestoreWindow(window); 
	}}
void (glfwMaximizeWindow)(GLFWwindow * window) { 
	if((IsLinux())){
		stub_funcs.ptr_glfwMaximizeWindow(window);  
	}
	else {
		stub_funcs.ptr_ms_glfwMaximizeWindow(window); 
	}}
void (glfwShowWindow)(GLFWwindow * window) { 
	if((IsLinux())){
		stub_funcs.ptr_glfwShowWindow(window);  
	}
	else {
		stub_funcs.ptr_ms_glfwShowWindow(window); 
	}}
void (glfwHideWindow)(GLFWwindow * window) { 
	if((IsLinux())){
		stub_funcs.ptr_glfwHideWindow(window);  
	}
	else {
		stub_funcs.ptr_ms_glfwHideWindow(window); 
	}}
void (glfwFocusWindow)(GLFWwindow * window) { 
	if((IsLinux())){
		stub_funcs.ptr_glfwFocusWindow(window);  
	}
	else {
		stub_funcs.ptr_ms_glfwFocusWindow(window); 
	}}
void (glfwRequestWindowAttention)(GLFWwindow * window) { 
	if((IsLinux())){
		stub_funcs.ptr_glfwRequestWindowAttention(window);  
	}
	else {
		stub_funcs.ptr_ms_glfwRequestWindowAttention(window); 
	}}
GLFWmonitor * (glfwGetWindowMonitor)(GLFWwindow * window) { 
	if((IsLinux())){
		return stub_funcs.ptr_glfwGetWindowMonitor(window);  
	}
	else {
		return stub_funcs.ptr_ms_glfwGetWindowMonitor(window); 
	}}
void (glfwSetWindowMonitor)(GLFWwindow * window, GLFWmonitor * monitor, int xpos, int ypos, int width, int height, int refreshRate) { 
	if((IsLinux())){
		stub_funcs.ptr_glfwSetWindowMonitor(window, monitor, xpos, ypos, width, height, refreshRate);  
	}
	else {
		stub_funcs.ptr_ms_glfwSetWindowMonitor(window, monitor, xpos, ypos, width, height, refreshRate); 
	}}
int (glfwGetWindowAttrib)(GLFWwindow * window, int attrib) { 
	if((IsLinux())){
		return stub_funcs.ptr_glfwGetWindowAttrib(window, attrib);  
	}
	else {
		return stub_funcs.ptr_ms_glfwGetWindowAttrib(window, attrib); 
	}}
void (glfwSetWindowAttrib)(GLFWwindow * window, int attrib, int value) { 
	if((IsLinux())){
		stub_funcs.ptr_glfwSetWindowAttrib(window, attrib, value);  
	}
	else {
		stub_funcs.ptr_ms_glfwSetWindowAttrib(window, attrib, value); 
	}}
void (glfwSetWindowUserPointer)(GLFWwindow * window, void * pointer) { 
	if((IsLinux())){
		stub_funcs.ptr_glfwSetWindowUserPointer(window, pointer);  
	}
	else {
		stub_funcs.ptr_ms_glfwSetWindowUserPointer(window, pointer); 
	}}
void * (glfwGetWindowUserPointer)(GLFWwindow * window) { 
	if((IsLinux())){
		return stub_funcs.ptr_glfwGetWindowUserPointer(window);  
	}
	else {
		return stub_funcs.ptr_ms_glfwGetWindowUserPointer(window); 
	}}
GLFWwindowposfun (glfwSetWindowPosCallback)(GLFWwindow * window, GLFWwindowposfun callback) { 
	if((IsLinux())){
		return stub_funcs.ptr_glfwSetWindowPosCallback(window, callback);  
	}
	else {
		return stub_funcs.ptr_ms_glfwSetWindowPosCallback(window, callback); 
	}}
GLFWwindowsizefun (glfwSetWindowSizeCallback)(GLFWwindow * window, GLFWwindowsizefun callback) { 
	if((IsLinux())){
		return stub_funcs.ptr_glfwSetWindowSizeCallback(window, callback);  
	}
	else {
		return stub_funcs.ptr_ms_glfwSetWindowSizeCallback(window, callback); 
	}}
GLFWwindowclosefun (glfwSetWindowCloseCallback)(GLFWwindow * window, GLFWwindowclosefun callback) { 
	if((IsLinux())){
		return stub_funcs.ptr_glfwSetWindowCloseCallback(window, callback);  
	}
	else {
		return stub_funcs.ptr_ms_glfwSetWindowCloseCallback(window, callback); 
	}}
GLFWwindowrefreshfun (glfwSetWindowRefreshCallback)(GLFWwindow * window, GLFWwindowrefreshfun callback) { 
	if((IsLinux())){
		return stub_funcs.ptr_glfwSetWindowRefreshCallback(window, callback);  
	}
	else {
		return stub_funcs.ptr_ms_glfwSetWindowRefreshCallback(window, callback); 
	}}
GLFWwindowfocusfun (glfwSetWindowFocusCallback)(GLFWwindow * window, GLFWwindowfocusfun callback) { 
	if((IsLinux())){
		return stub_funcs.ptr_glfwSetWindowFocusCallback(window, callback);  
	}
	else {
		return stub_funcs.ptr_ms_glfwSetWindowFocusCallback(window, callback); 
	}}
GLFWwindowiconifyfun (glfwSetWindowIconifyCallback)(GLFWwindow * window, GLFWwindowiconifyfun callback) { 
	if((IsLinux())){
		return stub_funcs.ptr_glfwSetWindowIconifyCallback(window, callback);  
	}
	else {
		return stub_funcs.ptr_ms_glfwSetWindowIconifyCallback(window, callback); 
	}}
GLFWwindowmaximizefun (glfwSetWindowMaximizeCallback)(GLFWwindow * window, GLFWwindowmaximizefun callback) { 
	if((IsLinux())){
		return stub_funcs.ptr_glfwSetWindowMaximizeCallback(window, callback);  
	}
	else {
		return stub_funcs.ptr_ms_glfwSetWindowMaximizeCallback(window, callback); 
	}}
GLFWframebuffersizefun (glfwSetFramebufferSizeCallback)(GLFWwindow * window, GLFWframebuffersizefun callback) { 
	if((IsLinux())){
		return stub_funcs.ptr_glfwSetFramebufferSizeCallback(window, callback);  
	}
	else {
		return stub_funcs.ptr_ms_glfwSetFramebufferSizeCallback(window, callback); 
	}}
GLFWwindowcontentscalefun (glfwSetWindowContentScaleCallback)(GLFWwindow * window, GLFWwindowcontentscalefun callback) { 
	if((IsLinux())){
		return stub_funcs.ptr_glfwSetWindowContentScaleCallback(window, callback);  
	}
	else {
		return stub_funcs.ptr_ms_glfwSetWindowContentScaleCallback(window, callback); 
	}}
void (glfwPollEvents)(void) { 
	if((IsLinux())){
		stub_funcs.ptr_glfwPollEvents();  
	}
	else {
		stub_funcs.ptr_ms_glfwPollEvents(); 
	}}
void (glfwWaitEvents)(void) { 
	if((IsLinux())){
		stub_funcs.ptr_glfwWaitEvents();  
	}
	else {
		stub_funcs.ptr_ms_glfwWaitEvents(); 
	}}
void (glfwWaitEventsTimeout)(double timeout) { 
	if((IsLinux())){
		stub_funcs.ptr_glfwWaitEventsTimeout(timeout);  
	}
	else {
		stub_funcs.ptr_ms_glfwWaitEventsTimeout(timeout); 
	}}
void (glfwPostEmptyEvent)(void) { 
	if((IsLinux())){
		stub_funcs.ptr_glfwPostEmptyEvent();  
	}
	else {
		stub_funcs.ptr_ms_glfwPostEmptyEvent(); 
	}}
int (glfwGetInputMode)(GLFWwindow * window, int mode) { 
	if((IsLinux())){
		return stub_funcs.ptr_glfwGetInputMode(window, mode);  
	}
	else {
		return stub_funcs.ptr_ms_glfwGetInputMode(window, mode); 
	}}
void (glfwSetInputMode)(GLFWwindow * window, int mode, int value) { 
	if((IsLinux())){
		stub_funcs.ptr_glfwSetInputMode(window, mode, value);  
	}
	else {
		stub_funcs.ptr_ms_glfwSetInputMode(window, mode, value); 
	}}
int (glfwRawMouseMotionSupported)(void) { 
	if((IsLinux())){
		return stub_funcs.ptr_glfwRawMouseMotionSupported();  
	}
	else {
		return stub_funcs.ptr_ms_glfwRawMouseMotionSupported(); 
	}}
const char * (glfwGetKeyName)(int key, int scancode) { 
	if((IsLinux())){
		return stub_funcs.ptr_glfwGetKeyName(key, scancode);  
	}
	else {
		return stub_funcs.ptr_ms_glfwGetKeyName(key, scancode); 
	}}
int (glfwGetKeyScancode)(int key) { 
	if((IsLinux())){
		return stub_funcs.ptr_glfwGetKeyScancode(key);  
	}
	else {
		return stub_funcs.ptr_ms_glfwGetKeyScancode(key); 
	}}
int (glfwGetKey)(GLFWwindow * window, int key) { 
	if((IsLinux())){
		return stub_funcs.ptr_glfwGetKey(window, key);  
	}
	else {
		return stub_funcs.ptr_ms_glfwGetKey(window, key); 
	}}
int (glfwGetMouseButton)(GLFWwindow * window, int button) { 
	if((IsLinux())){
		return stub_funcs.ptr_glfwGetMouseButton(window, button);  
	}
	else {
		return stub_funcs.ptr_ms_glfwGetMouseButton(window, button); 
	}}
void (glfwGetCursorPos)(GLFWwindow * window, double * xpos, double * ypos) { 
	if((IsLinux())){
		stub_funcs.ptr_glfwGetCursorPos(window, xpos, ypos);  
	}
	else {
		stub_funcs.ptr_ms_glfwGetCursorPos(window, xpos, ypos); 
	}}
void (glfwSetCursorPos)(GLFWwindow * window, double xpos, double ypos) { 
	if((IsLinux())){
		stub_funcs.ptr_glfwSetCursorPos(window, xpos, ypos);  
	}
	else {
		stub_funcs.ptr_ms_glfwSetCursorPos(window, xpos, ypos); 
	}}
GLFWcursor * (glfwCreateCursor)(const GLFWimage * image, int xhot, int yhot) { 
	if((IsLinux())){
		return stub_funcs.ptr_glfwCreateCursor(image, xhot, yhot);  
	}
	else {
		return stub_funcs.ptr_ms_glfwCreateCursor(image, xhot, yhot); 
	}}
GLFWcursor * (glfwCreateStandardCursor)(int shape) { 
	if((IsLinux())){
		return stub_funcs.ptr_glfwCreateStandardCursor(shape);  
	}
	else {
		return stub_funcs.ptr_ms_glfwCreateStandardCursor(shape); 
	}}
void (glfwDestroyCursor)(GLFWcursor * cursor) { 
	if((IsLinux())){
		stub_funcs.ptr_glfwDestroyCursor(cursor);  
	}
	else {
		stub_funcs.ptr_ms_glfwDestroyCursor(cursor); 
	}}
void (glfwSetCursor)(GLFWwindow * window, GLFWcursor * cursor) { 
	if((IsLinux())){
		stub_funcs.ptr_glfwSetCursor(window, cursor);  
	}
	else {
		stub_funcs.ptr_ms_glfwSetCursor(window, cursor); 
	}}
GLFWkeyfun (glfwSetKeyCallback)(GLFWwindow * window, GLFWkeyfun callback) { 
	if((IsLinux())){
		return stub_funcs.ptr_glfwSetKeyCallback(window, callback);  
	}
	else {
		return stub_funcs.ptr_ms_glfwSetKeyCallback(window, callback); 
	}}
GLFWcharfun (glfwSetCharCallback)(GLFWwindow * window, GLFWcharfun callback) { 
	if((IsLinux())){
		return stub_funcs.ptr_glfwSetCharCallback(window, callback);  
	}
	else {
		return stub_funcs.ptr_ms_glfwSetCharCallback(window, callback); 
	}}
GLFWcharmodsfun (glfwSetCharModsCallback)(GLFWwindow * window, GLFWcharmodsfun callback) { 
	if((IsLinux())){
		return stub_funcs.ptr_glfwSetCharModsCallback(window, callback);  
	}
	else {
		return stub_funcs.ptr_ms_glfwSetCharModsCallback(window, callback); 
	}}
GLFWmousebuttonfun (glfwSetMouseButtonCallback)(GLFWwindow * window, GLFWmousebuttonfun callback) { 
	if((IsLinux())){
		return stub_funcs.ptr_glfwSetMouseButtonCallback(window, callback);  
	}
	else {
		return stub_funcs.ptr_ms_glfwSetMouseButtonCallback(window, callback); 
	}}
GLFWcursorposfun (glfwSetCursorPosCallback)(GLFWwindow * window, GLFWcursorposfun callback) { 
	if((IsLinux())){
		return stub_funcs.ptr_glfwSetCursorPosCallback(window, callback);  
	}
	else {
		return stub_funcs.ptr_ms_glfwSetCursorPosCallback(window, callback); 
	}}
GLFWcursorenterfun (glfwSetCursorEnterCallback)(GLFWwindow * window, GLFWcursorenterfun callback) { 
	if((IsLinux())){
		return stub_funcs.ptr_glfwSetCursorEnterCallback(window, callback);  
	}
	else {
		return stub_funcs.ptr_ms_glfwSetCursorEnterCallback(window, callback); 
	}}
GLFWscrollfun (glfwSetScrollCallback)(GLFWwindow * window, GLFWscrollfun callback) { 
	if((IsLinux())){
		return stub_funcs.ptr_glfwSetScrollCallback(window, callback);  
	}
	else {
		return stub_funcs.ptr_ms_glfwSetScrollCallback(window, callback); 
	}}
GLFWdropfun (glfwSetDropCallback)(GLFWwindow * window, GLFWdropfun callback) { 
	if((IsLinux())){
		return stub_funcs.ptr_glfwSetDropCallback(window, callback);  
	}
	else {
		return stub_funcs.ptr_ms_glfwSetDropCallback(window, callback); 
	}}
int (glfwJoystickPresent)(int jid) { 
	if((IsLinux())){
		return stub_funcs.ptr_glfwJoystickPresent(jid);  
	}
	else {
		return stub_funcs.ptr_ms_glfwJoystickPresent(jid); 
	}}
const float * (glfwGetJoystickAxes)(int jid, int * count) { 
	if((IsLinux())){
		return stub_funcs.ptr_glfwGetJoystickAxes(jid, count);  
	}
	else {
		return stub_funcs.ptr_ms_glfwGetJoystickAxes(jid, count); 
	}}
const unsigned char * (glfwGetJoystickButtons)(int jid, int * count) { 
	if((IsLinux())){
		return stub_funcs.ptr_glfwGetJoystickButtons(jid, count);  
	}
	else {
		return stub_funcs.ptr_ms_glfwGetJoystickButtons(jid, count); 
	}}
const unsigned char * (glfwGetJoystickHats)(int jid, int * count) { 
	if((IsLinux())){
		return stub_funcs.ptr_glfwGetJoystickHats(jid, count);  
	}
	else {
		return stub_funcs.ptr_ms_glfwGetJoystickHats(jid, count); 
	}}
const char * (glfwGetJoystickName)(int jid) { 
	if((IsLinux())){
		return stub_funcs.ptr_glfwGetJoystickName(jid);  
	}
	else {
		return stub_funcs.ptr_ms_glfwGetJoystickName(jid); 
	}}
const char * (glfwGetJoystickGUID)(int jid) { 
	if((IsLinux())){
		return stub_funcs.ptr_glfwGetJoystickGUID(jid);  
	}
	else {
		return stub_funcs.ptr_ms_glfwGetJoystickGUID(jid); 
	}}
void (glfwSetJoystickUserPointer)(int jid, void * pointer) { 
	if((IsLinux())){
		stub_funcs.ptr_glfwSetJoystickUserPointer(jid, pointer);  
	}
	else {
		stub_funcs.ptr_ms_glfwSetJoystickUserPointer(jid, pointer); 
	}}
void * (glfwGetJoystickUserPointer)(int jid) { 
	if((IsLinux())){
		return stub_funcs.ptr_glfwGetJoystickUserPointer(jid);  
	}
	else {
		return stub_funcs.ptr_ms_glfwGetJoystickUserPointer(jid); 
	}}
int (glfwJoystickIsGamepad)(int jid) { 
	if((IsLinux())){
		return stub_funcs.ptr_glfwJoystickIsGamepad(jid);  
	}
	else {
		return stub_funcs.ptr_ms_glfwJoystickIsGamepad(jid); 
	}}
GLFWjoystickfun (glfwSetJoystickCallback)(GLFWjoystickfun callback) { 
	if((IsLinux())){
		return stub_funcs.ptr_glfwSetJoystickCallback(callback);  
	}
	else {
		return stub_funcs.ptr_ms_glfwSetJoystickCallback(callback); 
	}}
int (glfwUpdateGamepadMappings)(const char * string) { 
	if((IsLinux())){
		return stub_funcs.ptr_glfwUpdateGamepadMappings(string);  
	}
	else {
		return stub_funcs.ptr_ms_glfwUpdateGamepadMappings(string); 
	}}
const char * (glfwGetGamepadName)(int jid) { 
	if((IsLinux())){
		return stub_funcs.ptr_glfwGetGamepadName(jid);  
	}
	else {
		return stub_funcs.ptr_ms_glfwGetGamepadName(jid); 
	}}
int (glfwGetGamepadState)(int jid, GLFWgamepadstate * state) { 
	if((IsLinux())){
		return stub_funcs.ptr_glfwGetGamepadState(jid, state);  
	}
	else {
		return stub_funcs.ptr_ms_glfwGetGamepadState(jid, state); 
	}}
void (glfwSetClipboardString)(GLFWwindow * window, const char * string) { 
	if((IsLinux())){
		stub_funcs.ptr_glfwSetClipboardString(window, string);  
	}
	else {
		stub_funcs.ptr_ms_glfwSetClipboardString(window, string); 
	}}
const char * (glfwGetClipboardString)(GLFWwindow * window) { 
	if((IsLinux())){
		return stub_funcs.ptr_glfwGetClipboardString(window);  
	}
	else {
		return stub_funcs.ptr_ms_glfwGetClipboardString(window); 
	}}
double (glfwGetTime)(void) { 
	if((IsLinux())){
		return stub_funcs.ptr_glfwGetTime();  
	}
	else {
		return stub_funcs.ptr_ms_glfwGetTime(); 
	}}
void (glfwSetTime)(double time) { 
	if((IsLinux())){
		stub_funcs.ptr_glfwSetTime(time);  
	}
	else {
		stub_funcs.ptr_ms_glfwSetTime(time); 
	}}
uint64_t (glfwGetTimerValue)(void) { 
	if((IsLinux())){
		return stub_funcs.ptr_glfwGetTimerValue();  
	}
	else {
		return stub_funcs.ptr_ms_glfwGetTimerValue(); 
	}}
uint64_t (glfwGetTimerFrequency)(void) { 
	if((IsLinux())){
		return stub_funcs.ptr_glfwGetTimerFrequency();  
	}
	else {
		return stub_funcs.ptr_ms_glfwGetTimerFrequency(); 
	}}
void (glfwMakeContextCurrent)(GLFWwindow * window) { 
	if((IsLinux())){
		stub_funcs.ptr_glfwMakeContextCurrent(window);  
	}
	else {
		stub_funcs.ptr_ms_glfwMakeContextCurrent(window); 
	}}
GLFWwindow * (glfwGetCurrentContext)(void) { 
	if((IsLinux())){
		return stub_funcs.ptr_glfwGetCurrentContext();  
	}
	else {
		return stub_funcs.ptr_ms_glfwGetCurrentContext(); 
	}}
void (glfwSwapBuffers)(GLFWwindow * window) { 
	if((IsLinux())){
		stub_funcs.ptr_glfwSwapBuffers(window);  
	}
	else {
		stub_funcs.ptr_ms_glfwSwapBuffers(window); 
	}}
void (glfwSwapInterval)(int interval) { 
	if((IsLinux())){
		stub_funcs.ptr_glfwSwapInterval(interval);  
	}
	else {
		stub_funcs.ptr_ms_glfwSwapInterval(interval); 
	}}
int (glfwExtensionSupported)(const char * extension) { 
	if((IsLinux())){
		return stub_funcs.ptr_glfwExtensionSupported(extension);  
	}
	else {
		return stub_funcs.ptr_ms_glfwExtensionSupported(extension); 
	}}
GLFWglproc (glfwGetProcAddress)(const char * procname) { 
	if((IsLinux())){
		return stub_funcs.ptr_glfwGetProcAddress(procname);  
	}
	else {
		return stub_funcs.ptr_ms_glfwGetProcAddress(procname); 
	}}
int (glfwVulkanSupported)(void) { 
	if((IsLinux())){
		return stub_funcs.ptr_glfwVulkanSupported();  
	}
	else {
		return stub_funcs.ptr_ms_glfwVulkanSupported(); 
	}}
const char * * (glfwGetRequiredInstanceExtensions)(uint32_t * count) { 
	if((IsLinux())){
		return stub_funcs.ptr_glfwGetRequiredInstanceExtensions(count);  
	}
	else {
		return stub_funcs.ptr_ms_glfwGetRequiredInstanceExtensions(count); 
	}}

void close_glfw(void) {
    cosmo_dlclose(glfw);
}