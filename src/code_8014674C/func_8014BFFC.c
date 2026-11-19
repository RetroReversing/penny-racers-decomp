#include "common.h"

extern u32 D_8018A3B8[];
extern u32 D_8018D3A0[];
extern s16 D_8021E1A2;

void func_8014BFFC(void) {
    s32 i;
    s32 j;
    u32 *src;
    u32 *dst;

    i = D_8021E1A2 + 1;
    if (i != 4) {
        if (i < 4) {
            do {
                j = 0;
                dst = (u32 *)((u8 *)D_8018D3A0 + (i << 5));
                src = (u32 *)((u8 *)D_8018A3B8 + (i << 5));
                do {
                    dst[j] = src[j];
                    j++;
                } while (j < 8);
                i++;
            } while (i < 4);
        }
    }
}
