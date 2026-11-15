s32 func_800DE41C(s32, s32, s32, s32, s32, s32, void *, void *, void *, f32, f32, f32, s32, s32, s32, f32, f32, f32);
s32 func_8013E364(void);
s32 func_8013E818(s32, s32, s32, f32, f32, f32, s32);
s32 func_801FA30C(void);
f32 sqrtf(f32);
extern u8 D_8011F2F0[];
extern u8 D_8011F334[];
extern u8 D_8011F338[];
extern u8 D_8018D730[];
extern u8 D_8022A770[];
extern u8 D_8022A772[];
extern u8 D_8023977C[];
extern u8 D_80239950[];
extern u8 func_8014081C[];
extern u8 func_80140A0C[];
extern u8 func_80140A38[];
extern u8 func_80138304[];

void func_801402B8(s32 arg0) {
    u8 *temp_s1;
    u8 *temp_v0;
    s32 var_s2;
    s32 var_s0;
    s32 off;
    f32 fs0, fs1, fs2, fs3, fs4;
    f32 fa, fb, ts0, fv;
    s32 r, r2, r3;
    u32 t;

    var_s2 = 0;
    temp_s1 = D_8011F2F0 + (arg0 & 0xFFFF) * 0x64;
    for (var_s0 = 0; var_s0 < 7; var_s0++) {
        off = ((var_s0 * 8 + var_s0) * 16 - var_s0) * 16;
        if (*(u16 *)(D_8022A772 + off) != 0xFFFF) {
            temp_v0 = D_8011F2F0 + *(u16 *)(D_8022A770 + off + 2) * 0x64;
            fs2 = *(f32 *)(temp_s1 + 0x18) - *(f32 *)(temp_v0 + 0x18);
            fs0 = *(f32 *)(temp_s1 + 0x1C) - *(f32 *)(temp_v0 + 0x1C);
            fs1 = *(f32 *)(temp_s1 + 0x20) - *(f32 *)(temp_v0 + 0x20);
            if (sqrtf((fs2 * fs2) + (fs0 * fs0) + (fs1 * fs1)) < 1400.0f) {
                var_s2 = 1;
            }
        }
    }
    temp_s1[0xC] = temp_s1[0xC] + 1;
    if (var_s2 && !(temp_s1[0xC] & 0x3F)) {
        r = func_8013E364();
        if ((r & 0xFFFF) != 0xFFFF) {
            t = func_801FA30C() & 0x7F;
            fa = (f32)(f64)t;
            fs2 = (fa * -2.74f) + -700.0f;
            fs0 = 240.0f;
            fs1 = (fa * 2.72f) + 737.0f;
            t = func_801FA30C() & 0x7F;
            fb = (f32)(f64)t;
            fs3 = (fb * -1.433f) + -965.0f;
            fs4 = (fb * 1.417f) + 531.0f;
            r2 = func_800DE41C(0, 0, 1, 0, 0x51, 0xC8, D_8023977C, func_8014081C, func_80140A0C, fs2, fs0, fs1, 0, 0, 0, 2.0f, 2.0f, 2.0f);
            if (((r2 + 2) & 0xFFFF) >= 2) {
                t = func_801FA30C() & 0x1F;
                ts0 = ((f32)(f64)t * 0.01f) + 0.5f;
                t = func_801FA30C() & 0xF;
                fv = ((f32)(f64)t * 0.1f) + 4.0f;
                func_8013E818(r & 0xFFFF, r2 & 0xFFFF, 0x40, (((fs3 - fs2) * 0.008f) * ts0), fv, (((fs4 - fs1) * 0.008f) * ts0), 0xC8);
                *(s32 *)(D_8011F338 + (r2 & 0xFFFF) * 0x64) = 0;
                *(f32 *)(D_8018D730 + (r & 0xFFFF) * 0x7C) = 25.0f;
                r3 = func_800DE41C(0, 0, 1, 0, 0x52, 0x9B, D_80239950, func_80140A38, func_80138304, 0.0f, 0.0f, 0.0f, 0, 0, 0, 0.2f, 0.2f, 0.2f);
                if (((r3 + 2) & 0xFFFF) >= 2) {
                    *(f32 *)(D_8011F334 + (r3 & 0xFFFF) * 0x64) = (f32)(r2 & 0xFFFF);
                    *(f32 *)(D_8011F334 + (r2 & 0xFFFF) * 0x64) = (f32)(r3 & 0xFFFF);
                }
            } else {
                func_8013E49C(r & 0xFFFF);
            }
        }
    }
}
