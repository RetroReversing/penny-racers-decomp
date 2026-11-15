extern u8 D_8011F308[];
extern u8 D_8011F30C[];
extern u8 D_8011F310[];
extern u8 D_8011F350[];
extern u8 D_8018D6C4[];
extern u8 D_8018D6D6[];
extern u8 D_802390C8[];
extern f64 D_80183970;
extern f64 D_80183978;
s32 func_800DE41C(s32, s32, s32, s32, s32, s32, void *, void *, void *, f32, f32, f32, f32, f32, f32, f32, f32, f32);
s32 func_8013E364(void);
s32 func_8013E49C(u16 arg0);
void func_8013E818(s32, s32, s32, f32, f32, f32, s32);
s32 func_801FA30C(void);
void func_8015CF2C(void);
void func_8015CFD8(void);
void func_8015D368(void);

void func_8015CB40(s32 arg0) {
    s32 s1;
    s32 s0;
    s32 s2;
    s32 s3;
    s32 s4;
    s32 s5;
    s32 s6;
    u32 v6;
    u32 v7;
    u32 v8;
    f64 d1;
    f64 d2;
    f64 d3;

    s1 = func_8013E364();
    s0 = (u16)s1;
    s3 = (u16)arg0;
    if (s0 != 0xFFFF) {
        s2 = func_800DE41C(0, 0, 3, 0, 0x20, 1, NULL, func_8015CF2C, NULL,
            *(f32 *)(D_8011F308 + s3 * 0x64), *(f32 *)(D_8011F30C + s3 * 0x64), *(f32 *)(D_8011F310 + s3 * 0x64),
            0, 0, 0, 0, 0, 0);
        if ((u32)((s2 + 2) & 0xFFFF) >= 2U) {
            func_8013E818(s0, (u16)s2, 0, 0.0f, 0.0f, 0.0f, 3);
            *(s32 *)(D_8018D6C4 + s0 * 0x7C) = *(s32 *)(*(u8 **)(D_8011F350 + s3 * 0x64) + 4);
            s6 = 0;
            s5 = s3 * 0x64;
            for (;;) {
                s1 = func_8013E364();
                s0 = (u16)s1;
                if (s0 == 0xFFFF) {
                    break;
                }
                s2 = func_800DE41C(0, 0, 1, 0, 0x5B, 0xC8, D_802390C8, func_8015CFD8, func_8015D368,
                    *(f32 *)(D_8011F308 + s5), *(f32 *)(D_8011F30C + s5), *(f32 *)(D_8011F310 + s5),
                    0, 0, 0, 0.1f, 0.1f, 0.1f);
                if ((u32)((s2 + 2) & 0xFFFF) < 2U) {
                    func_8013E49C((u16)s0);
                    break;
                }
                v6 = func_801FA30C() & 0x3F;
                d1 = (f64)v6;
                v7 = func_801FA30C() & 0x1F;
                d2 = (f64)v7;
                v8 = func_801FA30C() & 0x3F;
                d3 = (f64)v8;
                s4 = (s32)((f32)d1 - 32.0f);
                s3 = (s32)(f32)d2;
                s0 = (s32)((f32)d3 - 32.0f);
                func_8013E818(s1 & 0xFFFF, s2 & 0xFFFF, 0x40,
                    (f32)((f64)(s16)s4 * D_80183978),
                    (f32)((f64)(s16)s3 * D_80183978),
                    (f32)((f64)(s16)s0 * D_80183978),
                    func_801FA30C() & 8);
                *(u8 *)(D_8018D6D6 + (s1 & 0xFFFF) * 0x7C) = 1;
                s6 += 1;
                if ((u16)s6 >= 0xA) {
                    break;
                }
            }
        } else {
            func_8013E49C((u16)s0);
        }
    }
}
