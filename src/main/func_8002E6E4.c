#include "common.h"

extern s32 n_alLoadParam(u8 *, s32);

s32 func_8002E6E4(u8 *arg0, s32 arg1, void *arg2) {
    switch (arg1) {
    case 3: {
        void *p = *(void **)(arg0 + 0x80);
        if (p != NULL) {
            *(void **)p = arg2;
        } else {
            *(void **)(arg0 + 0x7C) = arg2;
        }
        *(void **)(arg0 + 0x80) = arg2;
        break;
    }
    case 4: {
        s16 one;
        s32 one2;
        arg1 = 4;
        one2 = 1;
        one = 1;
        *(s32 *)(arg0 + 0x78) = one2;
        *(s32 *)(arg0 + 0x84) = 0;
        *(s16 *)(arg0 + 0x5A) = one;
        *(s32 *)(arg0 + 0x4C) = 0;
        *(s32 *)(arg0 + 0x50) = one2;
        *(s32 *)(arg0 + 0x48) = 0;
        goto call;
    }
    case 9:
        *(s32 *)(arg0 + 0x84) = 1;
        break;
    default:
    call:
        n_alLoadParam(arg0, arg1);
        break;
    }
    return 0;
}
