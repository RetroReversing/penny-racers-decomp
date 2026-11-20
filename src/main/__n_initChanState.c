#include "common.h"

void __resetPerfChanState(void *, s32);

void __n_initChanState(void *arg0)
{
    s32 i;

    for (i = 0; i < *(u8 *)((u8 *)arg0 + 0x34); i++) {
        *(s32 *)(*(u8 **)((u8 *)arg0 + 0x60) + i * 0x10) = 0;
        __resetPerfChanState(arg0, i);
    }
}
