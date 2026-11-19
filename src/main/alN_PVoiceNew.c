#include "common_local_source_339302416690.h"

s32 alHeapDBAlloc(char *file, s32 line, void *hp, s32 num, s32 size);

void alN_PVoiceNew(u8 *arg0, s32 (*arg1)(u8 *), void *arg2) {
    *(void **)(arg0 + 0xC) = (void *)alHeapDBAlloc(0, 0, arg2, 1, 0x20);
    *(void **)(arg0 + 0x10) = (void *)alHeapDBAlloc(0, 0, arg2, 1, 0x20);
    *(s32 *)(arg0 + 0x28) = arg1(arg0 + 0x2C);
    *(s32 *)(arg0 + 0x34) = 0;
    *(s32 *)(arg0 + 0x38) = 1;
    *(s32 *)(arg0 + 0x3C) = 0;
    *(void **)(arg0 + 0x40) = (void *)alHeapDBAlloc(0, 0, arg2, 1, 0x20);
    *(s32 *)(arg0 + 0x4C) = 0;
    *(s32 *)(arg0 + 0x50) = 1;
    *(s32 *)(arg0 + 0x48) = 0;
    *(f32 *)(arg0 + 0x44) = 1.0f;
    *(void **)(arg0 + 0x54) = (void *)alHeapDBAlloc(0, 0, arg2, 1, 0x50);
    *(s32 *)(arg0 + 0x78) = 1;
    *(s32 *)(arg0 + 0x84) = 0;
    *(s16 *)(arg0 + 0x5A) = 1;
    *(s16 *)(arg0 + 0x68) = 1;
    *(s16 *)(arg0 + 0x6E) = 1;
    *(s16 *)(arg0 + 0x5C) = 1;
    *(s16 *)(arg0 + 0x5E) = 1;
    *(s16 *)(arg0 + 0x60) = 0;
    *(s16 *)(arg0 + 0x62) = 0;
    *(s16 *)(arg0 + 0x66) = 1;
    *(s16 *)(arg0 + 0x64) = 0;
    *(s16 *)(arg0 + 0x66) = 1;
    *(s16 *)(arg0 + 0x64) = 0;
    *(s32 *)(arg0 + 0x70) = 0;
    *(s32 *)(arg0 + 0x74) = 0;
    *(s16 *)(arg0 + 0x58) = 0;
    *(s32 *)(arg0 + 0x7C) = 0;
    *(s32 *)(arg0 + 0x80) = 0;
}
