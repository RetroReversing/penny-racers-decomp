#include "common_local_source_339302417671.h"

extern u8 D_8011F2F0[];
extern f64 D_8021E0C8;
extern f64 D_8021E0D0;
f32 __cosf(f32);

void func_80219A60(u16 arg0) {
    u8 *temp_s0;
    f32 temp_fv0;

    temp_s0 = D_8011F2F0 + arg0 * 100;
    if (*(u16 *)(temp_s0 + 0x3E) == 0) {
        *(f32 *)(temp_s0 + 0x48) = *(f32 *)(temp_s0 + 0x24);
        if (temp_s0[0] == 0) {
            *(f32 *)(temp_s0 + 0x44) = 180.0f;
        }
        *(u16 *)(temp_s0 + 0x3E) = 1;
    }
    temp_fv0 = *(f32 *)(temp_s0 + 0x44) + 1.0f;
    *(f32 *)(temp_s0 + 0x44) = temp_fv0;
    if (temp_fv0 > 360.0f) {
        *(f32 *)(temp_s0 + 0x44) = temp_fv0 - 360.0f;
    }
    *(f32 *)(temp_s0 + 0x2C) = __cosf((f32)((*(f32 *)(temp_s0 + 0x44) * D_8021E0C8) / D_8021E0D0)) * 30.0f;
    temp_s0[0] = temp_s0[0] + 1;
}
