#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define _GNU_SOURCE         /* See feature_test_macros(7) */
#include <dlfcn.h>

#include "wrappedlibs.h"

#include "debug.h"
#include "wrapper.h"
#include "bridge.h"
#include "librarian/library_private.h"
#include "x86emu.h"
#include "emu/x86emu_private.h"
#include "callback.h"
#include "librarian.h"
#include "box86context.h"
#include "emu/x86emu_private.h"

const char* libxcbrandrName = "libxcb-randr.so.0";
#define LIBNAME libxcbrandr

typedef struct my_xcb_cookie_s {
    uint32_t        data;
} my_xcb_cookie_t;

typedef my_xcb_cookie_t (*XFpu_t)   (void*, uint32_t);
typedef my_xcb_cookie_t (*XFppu_t)  (void*, void*, uint32_t);

#define SUPER() \
    GO(xcb_randr_get_crtc_info, XFppu_t)                \
    GO(xcb_randr_get_crtc_info_unchecked, XFppu_t)      \
    GO(xcb_randr_get_screen_resources_outputs, XFpu_t)  \
    GO(xcb_randr_get_screen_resources_current, XFpu_t)  \

typedef struct xcbrandr_my_s {
    #define GO(A, B)    B   A;
    SUPER()
    #undef GO
    // functions
} xcbrandr_my_t;

void* getXcbrandrMy(library_t* lib)
{
    xcbrandr_my_t* my = (xcbrandr_my_t*)calloc(1, sizeof(xcbrandr_my_t));
    #define GO(A, W) my->A = (W)dlsym(lib->priv.w.lib, #A);
    SUPER()
    #undef GO
    return my;
}
#undef SUPER

void freeXcbrandrMy(void* lib)
{
    //xcbrandr_my_t *my = (xcbrandr_my_t *)lib;
}

#define SUPER(F, P, ...)                                            \
    EXPORT void* my_##F P                                           \
    {                                                               \
        xcbrandr_my_t *my = (xcbrandr_my_t*)emu->context->libxcb->priv.w.p2;  \
        *ret = my->F(__VA_ARGS__);                                  \
        return ret;                                                 \
    }

SUPER(xcb_randr_get_crtc_info, (x86emu_t* emu, my_xcb_cookie_t* ret, void* c, void* crtc, uint32_t stamp), c, crtc, stamp)
SUPER(xcb_randr_get_crtc_info_unchecked, (x86emu_t* emu, my_xcb_cookie_t* ret, void* c, void* crtc, uint32_t stamp), c, crtc, stamp)
SUPER(xcb_randr_get_screen_resources_outputs, (x86emu_t* emu, my_xcb_cookie_t* ret, void* c, uint32_t win), c, win)
SUPER(xcb_randr_get_screen_resources_current, (x86emu_t* emu, my_xcb_cookie_t* ret, void* c, uint32_t win), c, win)

#undef SUPER


#define CUSTOM_INIT \
    box86->libxcbrandr = lib;                \
    lib->priv.w.p2 = getXcbrandrMy(lib);

#define CUSTOM_FINI \
    freeXcbrandrMy(lib->priv.w.p2);  \
    free(lib->priv.w.p2);       \
    ((box86context_t*)(lib->context))->libxcbrandr = NULL;

#include "wrappedlib_init.h"
