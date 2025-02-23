#define _GNU_SOURCE         /* See feature_test_macros(7) */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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
#include "myalign.h"

const char* smime3Name = "libsmime3.so";
#define LIBNAME smime3
static library_t *my_lib = NULL;

#include "generated/wrappedsmime3types.h"

typedef struct smime3_my_s {
    // functions
    #define GO(A, B)    B   A;
    SUPER()
    #undef GO
} smime3_my_t;

void* getSmime3My(library_t* lib)
{
    my_lib = lib;
    smime3_my_t* my = (smime3_my_t*)calloc(1, sizeof(smime3_my_t));
    #define GO(A, W) my->A = (W)dlsym(lib->priv.w.lib, #A);
    SUPER()
    #undef GO
    return my;
}

void freeSmime3My(void* lib)
{
    //smime3_my_t *my = (smime3_my_t *)lib;
}

#undef SUPER

#define SUPER() \
GO(0)   \
GO(1)   \
GO(2)   \
GO(3)   \
GO(4)

// SECKEYGetPasswordKey ...
#define GO(A)   \
static uintptr_t my_SECKEYGetPasswordKey_fct_##A = 0;                               \
static void* my_SECKEYGetPasswordKey_##A(void* a, void* b)                          \
{                                                                                   \
    return (void*)RunFunction(my_context, my_SECKEYGetPasswordKey_fct_##A, 2, a, b);\
}
SUPER()
#undef GO
static void* find_SECKEYGetPasswordKey_Fct(void* fct)
{
    if(!fct) return fct;
    if(GetNativeFnc((uintptr_t)fct))  return GetNativeFnc((uintptr_t)fct);
    #define GO(A) if(my_SECKEYGetPasswordKey_fct_##A == (uintptr_t)fct) return my_SECKEYGetPasswordKey_##A;
    SUPER()
    #undef GO
    #define GO(A) if(my_SECKEYGetPasswordKey_fct_##A == 0) {my_SECKEYGetPasswordKey_fct_##A = (uintptr_t)fct; return my_SECKEYGetPasswordKey_##A; }
    SUPER()
    #undef GO
    printf_log(LOG_NONE, "Warning, no more slot for smime3 SECKEYGetPasswordKey callback\n");
    return NULL;
}

// digestOpenFn ...
#define GO(A)   \
static uintptr_t my_digestOpenFn_fct_##A = 0;                           \
static int my_digestOpenFn_##A(void* a, int b)                          \
{                                                                       \
    return RunFunction(my_context, my_digestOpenFn_fct_##A, 2, a, b);   \
}
SUPER()
#undef GO
static void* find_digestOpenFn_Fct(void* fct)
{
    if(!fct) return fct;
    if(GetNativeFnc((uintptr_t)fct))  return GetNativeFnc((uintptr_t)fct);
    #define GO(A) if(my_digestOpenFn_fct_##A == (uintptr_t)fct) return my_digestOpenFn_##A;
    SUPER()
    #undef GO
    #define GO(A) if(my_digestOpenFn_fct_##A == 0) {my_digestOpenFn_fct_##A = (uintptr_t)fct; return my_digestOpenFn_##A; }
    SUPER()
    #undef GO
    printf_log(LOG_NONE, "Warning, no more slot for smime3 digestOpenFn callback\n");
    return NULL;
}

// digestCloseFn ...
#define GO(A)   \
static uintptr_t my_digestCloseFn_fct_##A = 0;                          \
static int my_digestCloseFn_##A(void* a, int b)                         \
{                                                                       \
    return RunFunction(my_context, my_digestCloseFn_fct_##A, 2, a, b);  \
}
SUPER()
#undef GO
static void* find_digestCloseFn_Fct(void* fct)
{
    if(!fct) return fct;
    if(GetNativeFnc((uintptr_t)fct))  return GetNativeFnc((uintptr_t)fct);
    #define GO(A) if(my_digestCloseFn_fct_##A == (uintptr_t)fct) return my_digestCloseFn_##A;
    SUPER()
    #undef GO
    #define GO(A) if(my_digestCloseFn_fct_##A == 0) {my_digestCloseFn_fct_##A = (uintptr_t)fct; return my_digestCloseFn_##A; }
    SUPER()
    #undef GO
    printf_log(LOG_NONE, "Warning, no more slot for smime3 digestCloseFn callback\n");
    return NULL;
}

// digestIOFn ...
#define GO(A)   \
static uintptr_t my_digestIOFn_fct_##A = 0;                             \
static int my_digestIOFn_##A(void* a, void* b, unsigned long c)         \
{                                                                       \
    return RunFunction(my_context, my_digestIOFn_fct_##A, 3, a, b, c);  \
}
SUPER()
#undef GO
static void* find_digestIOFn_Fct(void* fct)
{
    if(!fct) return fct;
    if(GetNativeFnc((uintptr_t)fct))  return GetNativeFnc((uintptr_t)fct);
    #define GO(A) if(my_digestIOFn_fct_##A == (uintptr_t)fct) return my_digestIOFn_##A;
    SUPER()
    #undef GO
    #define GO(A) if(my_digestIOFn_fct_##A == 0) {my_digestIOFn_fct_##A = (uintptr_t)fct; return my_digestIOFn_##A; }
    SUPER()
    #undef GO
    printf_log(LOG_NONE, "Warning, no more slot for smime3 digestIOFn callback\n");
    return NULL;
}

// SEC_PKCS12NicknameCollisionCallback ...
#define GO(A)   \
static uintptr_t my_SEC_PKCS12NicknameCollisionCallback_fct_##A = 0;                                    \
static void* my_SEC_PKCS12NicknameCollisionCallback_##A(void* a, void* b, void* c)                      \
{                                                                                                       \
    return (void*)RunFunction(my_context, my_SEC_PKCS12NicknameCollisionCallback_fct_##A, 3, a, b, c);  \
}
SUPER()
#undef GO
static void* find_SEC_PKCS12NicknameCollisionCallback_Fct(void* fct)
{
    if(!fct) return fct;
    if(GetNativeFnc((uintptr_t)fct))  return GetNativeFnc((uintptr_t)fct);
    #define GO(A) if(my_SEC_PKCS12NicknameCollisionCallback_fct_##A == (uintptr_t)fct) return my_SEC_PKCS12NicknameCollisionCallback_##A;
    SUPER()
    #undef GO
    #define GO(A) if(my_SEC_PKCS12NicknameCollisionCallback_fct_##A == 0) {my_SEC_PKCS12NicknameCollisionCallback_fct_##A = (uintptr_t)fct; return my_SEC_PKCS12NicknameCollisionCallback_##A; }
    SUPER()
    #undef GO
    printf_log(LOG_NONE, "Warning, no more slot for smime3 SEC_PKCS12NicknameCollisionCallback callback\n");
    return NULL;
}

// SEC_PKCS12EncoderOutputCallback ...
#define GO(A)   \
static uintptr_t my_SEC_PKCS12EncoderOutputCallback_fct_##A = 0;                        \
static void my_SEC_PKCS12EncoderOutputCallback_##A(void* a, void* b, unsigned long c)   \
{                                                                                       \
    RunFunction(my_context, my_SEC_PKCS12EncoderOutputCallback_fct_##A, 3, a, b, c);    \
}
SUPER()
#undef GO
static void* find_SEC_PKCS12EncoderOutputCallback_Fct(void* fct)
{
    if(!fct) return fct;
    if(GetNativeFnc((uintptr_t)fct))  return GetNativeFnc((uintptr_t)fct);
    #define GO(A) if(my_SEC_PKCS12EncoderOutputCallback_fct_##A == (uintptr_t)fct) return my_SEC_PKCS12EncoderOutputCallback_##A;
    SUPER()
    #undef GO
    #define GO(A) if(my_SEC_PKCS12EncoderOutputCallback_fct_##A == 0) {my_SEC_PKCS12EncoderOutputCallback_fct_##A = (uintptr_t)fct; return my_SEC_PKCS12EncoderOutputCallback_##A; }
    SUPER()
    #undef GO
    printf_log(LOG_NONE, "Warning, no more slot for smime3 SEC_PKCS12EncoderOutputCallback callback\n");
    return NULL;
}

// NSSCMSContentCallback ...
#define GO(A)   \
static uintptr_t my_NSSCMSContentCallback_fct_##A = 0;                      \
static void my_NSSCMSContentCallback_##A(void* a, void* b, unsigned long c) \
{                                                                           \
    RunFunction(my_context, my_NSSCMSContentCallback_fct_##A, 3, a, b, c);  \
}
SUPER()
#undef GO
static void* find_NSSCMSContentCallback_Fct(void* fct)
{
    if(!fct) return fct;
    if(GetNativeFnc((uintptr_t)fct))  return GetNativeFnc((uintptr_t)fct);
    #define GO(A) if(my_NSSCMSContentCallback_fct_##A == (uintptr_t)fct) return my_NSSCMSContentCallback_##A;
    SUPER()
    #undef GO
    #define GO(A) if(my_NSSCMSContentCallback_fct_##A == 0) {my_NSSCMSContentCallback_fct_##A = (uintptr_t)fct; return my_NSSCMSContentCallback_##A; }
    SUPER()
    #undef GO
    printf_log(LOG_NONE, "Warning, no more slot for smime3 NSSCMSContentCallback callback\n");
    return NULL;
}

// PK11PasswordFunc ...
#define GO(A)   \
static uintptr_t my_PK11PasswordFunc_fct_##A = 0;                                   \
static void* my_PK11PasswordFunc_##A(void* a, int b, void* c)                       \
{                                                                                   \
    return (void*)RunFunction(my_context, my_PK11PasswordFunc_fct_##A, 3, a, b, c); \
}
SUPER()
#undef GO
static void* find_PK11PasswordFunc_Fct(void* fct)
{
    if(!fct) return fct;
    if(GetNativeFnc((uintptr_t)fct))  return GetNativeFnc((uintptr_t)fct);
    #define GO(A) if(my_PK11PasswordFunc_fct_##A == (uintptr_t)fct) return my_PK11PasswordFunc_##A;
    SUPER()
    #undef GO
    #define GO(A) if(my_PK11PasswordFunc_fct_##A == 0) {my_PK11PasswordFunc_fct_##A = (uintptr_t)fct; return my_PK11PasswordFunc_##A; }
    SUPER()
    #undef GO
    printf_log(LOG_NONE, "Warning, no more slot for smime3 PK11PasswordFunc callback\n");
    return NULL;
}

// NSSCMSGetDecryptKeyCallback ...
#define GO(A)   \
static uintptr_t my_NSSCMSGetDecryptKeyCallback_fct_##A = 0;                                \
static void* my_NSSCMSGetDecryptKeyCallback_##A(void* a, void* b)                           \
{                                                                                           \
    return (void*)RunFunction(my_context, my_NSSCMSGetDecryptKeyCallback_fct_##A, 2, a, b); \
}
SUPER()
#undef GO
static void* find_NSSCMSGetDecryptKeyCallback_Fct(void* fct)
{
    if(!fct) return fct;
    if(GetNativeFnc((uintptr_t)fct))  return GetNativeFnc((uintptr_t)fct);
    #define GO(A) if(my_NSSCMSGetDecryptKeyCallback_fct_##A == (uintptr_t)fct) return my_NSSCMSGetDecryptKeyCallback_##A;
    SUPER()
    #undef GO
    #define GO(A) if(my_NSSCMSGetDecryptKeyCallback_fct_##A == 0) {my_NSSCMSGetDecryptKeyCallback_fct_##A = (uintptr_t)fct; return my_NSSCMSGetDecryptKeyCallback_##A; }
    SUPER()
    #undef GO
    printf_log(LOG_NONE, "Warning, no more slot for smime3 NSSCMSGetDecryptKeyCallback callback\n");
    return NULL;
}

#undef SUPER

EXPORT void my_SEC_PKCS12CreateExportContext(x86emu_t* emu, void* f, void* pwfnarg, void* slot, void* wincx)
{
    smime3_my_t* my = (smime3_my_t*)my_lib->priv.w.p2;

    my->SEC_PKCS12CreateExportContext(find_SECKEYGetPasswordKey_Fct(f), pwfnarg, slot, wincx);
}

EXPORT void* my_SEC_PKCS12DecoderStart(x86emu_t* emu, void* item, void* slot, void* wincx, void* dOpen, void* dClose, 
    void* dRead, void* dWrite, void* dArg)
{
    smime3_my_t* my = (smime3_my_t*)my_lib->priv.w.p2;

    return my->SEC_PKCS12DecoderStart(item, slot, wincx, find_digestOpenFn_Fct(dOpen), find_digestCloseFn_Fct(dClose),
                    find_digestIOFn_Fct(dRead), find_digestIOFn_Fct(dWrite), dArg);
}

EXPORT int my_SEC_PKCS12DecoderValidateBags(x86emu_t* emu, void* ctx, void* f)
{
    smime3_my_t* my = (smime3_my_t*)my_lib->priv.w.p2;

    return my->SEC_PKCS12DecoderValidateBags(ctx, find_SEC_PKCS12NicknameCollisionCallback_Fct(f));
}

EXPORT int my_SEC_PKCS12Encode(x86emu_t* emu, void* p12exp, void* f, void* arg)
{
    smime3_my_t* my = (smime3_my_t*)my_lib->priv.w.p2;

    return my->SEC_PKCS12Encode(p12exp, find_SEC_PKCS12EncoderOutputCallback_Fct(f), arg);
}

EXPORT void* my_NSS_CMSEncoder_Start(x86emu_t* emu, void* cmsg, void* outputf, void* outputarg,
                void* dest, void* destpool, void* pwfn, void* pwfnarg,
                void* decryptcb, void* decryptarg, void* detached, void* items)
{
    smime3_my_t* my = (smime3_my_t*)my_lib->priv.w.p2;

    return my->NSS_CMSEncoder_Start(cmsg, find_NSSCMSContentCallback_Fct(outputf), outputarg,
                    dest, destpool, find_PK11PasswordFunc_Fct(pwfn), pwfnarg,
                    find_NSSCMSGetDecryptKeyCallback_Fct(decryptcb), decryptarg, detached, items);
}

EXPORT void* my_NSS_CMSMessage_CreateFromDER(x86emu_t* emu, void* msg, void* cb, void* cb_arg,
                void* pwfn, void* pwfn_arg, void* decrypt, void* decrypt_arg)
{
    smime3_my_t* my = (smime3_my_t*)my_lib->priv.w.p2;

    return my->NSS_CMSMessage_CreateFromDER(msg, find_NSSCMSContentCallback_Fct(cb), cb_arg, 
                    find_PK11PasswordFunc_Fct(pwfn), pwfn_arg, 
                    find_NSSCMSGetDecryptKeyCallback_Fct(decrypt), decrypt_arg);
}

#define CUSTOM_INIT \
    lib->priv.w.p2 = getSmime3My(lib);

#define CUSTOM_FINI \
    freeSmime3My(lib->priv.w.p2); \
    free(lib->priv.w.p2);

#include "wrappedlib_init.h"

