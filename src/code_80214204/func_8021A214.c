#include "common.h"

extern char D_8011F2F0[];
extern u8 D_80190CA8;
extern s8 D_80190CAE;
extern u8 D_80190CB2;
extern char D_8021C841[];

void func_8021A214(s32 arg0) {
    f32 temp_fv0;
    u16 temp_v1;
    u8 *temp_a0;

    temp_a0 = (u8 *)(D_8011F2F0 + (arg0 & 0xFFFF) * 0x64);
    temp_v1 = *(u16 *)(temp_a0 + 0x3E);
    switch (temp_v1) {
    case 0:
        if (D_80190CB2 != 0) {
            *(f32 *)(temp_a0 + 0x18) = (f32)*(u8 *)(D_8021C841 + (*temp_a0 * 2));
        }
        *(u16 *)(temp_a0 + 0x3E) = 0x10;
        return;
    case 16:
        if (*(f32 *)(temp_a0 + 0x1C) < 225.0f) {
            D_80190CAE = 0;
            *(u16 *)(temp_a0 + 0x3E) = 0x11;
        }
        /* fallthrough */
    case 17:
        if (!(D_80190CA8 & 3)) {
            temp_fv0 = *(f32 *)(temp_a0 + 0x1C) - 1.0f;
            *(f32 *)(temp_a0 + 0x1C) = temp_fv0;
            if (temp_fv0 < 0.0f) {
                *(s8 *)(temp_a0 + 0xD) = 4;
            }
        }
        return;
    }
}
