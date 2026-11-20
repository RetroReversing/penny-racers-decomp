#include "common.h"

s32 __vsPan(void *arg0, void *arg1) {
    s32 idx;
    s32 pan;

    idx = (*(u8 *)((u8 *)arg0 + 0x31) << 4) + *(s32 *)((u8 *)arg1 + 0x60);
    pan = (*(u8 *)((u8 *)idx + 7) - 0x40) + *(u8 *)(*(s32 *)((u8 *)arg0 + 0x20) + 0xC);
    pan = pan & ((s32)~pan >> 0x1F);
    if (pan >= 0x80) {
        pan = 0x7F;
    }
    return pan & 0xFF;
}
