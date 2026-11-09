/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */
#ifndef M2C_DEFINES
#define M2C_DEFINES
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#define M2C_ERROR(desc) (0)
#define M2C_CARRY 0
#define M2C_OVERFLOW(a) (0)
#endif

s32 func_800DE41C(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32, M2C_UNK *, M2C_UNK *, M2C_UNK *, f32, f32, f32, s32, s32, s32, f32, f32, f32); /* extern */
M2C_UNK func_8013E49C(u16);                         /* extern */
s32 func_801FA30C();                                /* extern */
M2C_UNK guMtxXFMF(void *, M2C_UNK, M2C_UNK, M2C_UNK, f32 *, f32 *, f32 *); /* extern */
extern M2C_UNK D_8011F2F0;
extern M2C_UNK D_8011F2FD;
extern M2C_UNK D_80182E30;
extern f64 D_80183990;
extern M2C_UNK D_80238C24;
extern M2C_UNK D_802390C8;
extern M2C_UNK func_8015FE60;
extern M2C_UNK func_80164218;

void func_8015F7F8(s32 arg0) {
    f32 sp48;
    f32 sp4C;
    f32 sp50;
    f32 temp_fv0;
    f32 temp_fv1;
    f64 temp_fs0;
    f64 var_fv0;
    f64 var_fv0_2;
    f64 var_fv0_3;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 temp_v0_5;
    s32 temp_v0_6;
    s32 var_s3;
    u16 temp_v0;
    void *temp_a1;
    void *temp_s0;
    void *temp_s0_2;
    void *temp_s0_3;
    void *temp_s1;
    void *temp_s2;

    temp_s1 = ((arg0 & 0xFFFF) * 0x64) + &D_8011F2F0;
    temp_a1 = M2C_FIELD(temp_s1, void **, 0x50);
    temp_s2 = M2C_FIELD(temp_s1, void **, 0x60);
    temp_s0 = (M2C_FIELD(M2C_FIELD(temp_s2, void **, 4), u16 *, 2) * 0x64) + &D_8011F2F0;
    M2C_FIELD(temp_s1, s8 *, 0xC) = 0xFF;
    temp_fv1 = M2C_FIELD(temp_s1, f32 *, 0x44);
    if (temp_fv1 > 0.0f) {
        M2C_FIELD(temp_s1, f32 *, 0x44) = (f32) (temp_fv1 - 1.0f);
        M2C_FIELD(temp_a1, M2C_UNK **, 4) = (M2C_UNK *) ((*(&D_80182E30 + (M2C_FIELD(temp_s2, u16 *, 0x14) & 0xF)) * 0xC) + &D_80238C24);
    } else {
        M2C_FIELD(temp_a1, M2C_UNK **, 4) = &D_80238C24;
        temp_fv0 = ((f32) (M2C_FIELD(temp_s2, u16 *, 0x14) & 1) * 0.3f) + 1.0f;
        M2C_FIELD(temp_s1, f32 *, 0x34) = temp_fv0;
        M2C_FIELD(temp_s1, f32 *, 0x30) = temp_fv0;
    }
    guMtxXFMF(M2C_FIELD(temp_s2, void **, 4) + 0x6D4, 0, 0x420C0000, 0xC2480000, &sp48, &sp4C, &sp50);
    M2C_FIELD(temp_s1, f32 *, 0x18) = (f32) (M2C_FIELD(temp_s0, f32 *, 0x18) + sp48);
    M2C_FIELD(temp_s1, f32 *, 0x1C) = (f32) (M2C_FIELD(temp_s0, f32 *, 0x1C) + sp4C);
    M2C_FIELD(temp_s1, f32 *, 0x20) = (f32) (M2C_FIELD(temp_s0, f32 *, 0x20) + sp50);
    temp_v0 = M2C_FIELD(temp_s2, u16 *, 0x14) - 1;
    M2C_FIELD(temp_s2, u16 *, 0x14) = temp_v0;
    if (((temp_v0 << 0x10) == 0) && (func_8013E49C(M2C_FIELD(temp_s2, u16 *, 0x76)), *(&D_8011F2FD + ((arg0 & 0xFFFF) * 0x64)) = 2, (M2C_FIELD(temp_s1, f32 *, 0x48) > 0.0f))) {
        if (M2C_FIELD(M2C_FIELD(temp_s2, void **, 4), s16 *, 0x55E) == 0) {
            var_s3 = 0;
            temp_fs0 = D_80183990;
            do {
                temp_v0_2 = func_800DE41C(0, 0, 1, 0, 0x5B, 0xFA, &D_802390C8, &func_80164218, &func_8015FE60, sp48 + M2C_FIELD(temp_s1, f32 *, 0x18), sp4C + M2C_FIELD(temp_s1, f32 *, 0x1C), sp50 + M2C_FIELD(temp_s1, f32 *, 0x20), 0, 0, 0, 0.08f, 0.08f, 0.08f);
                if ((u32) ((temp_v0_2 + 2) & 0xFFFF) >= 2U) {
                    temp_s0_2 = ((temp_v0_2 & 0xFFFF) * 0x64) + &D_8011F2F0;
                    M2C_FIELD(temp_s0_2, s16 *, 8) = 0x40;
                    M2C_FIELD(temp_s0_2, s16 *, 6) = 0x40;
                    M2C_FIELD(temp_s0_2, s16 *, 4) = 0x40;
                    M2C_FIELD(temp_s0_2, s16 *, 2) = 0x40;
                    temp_v0_3 = func_801FA30C() & 0x10;
                    var_fv0 = (f64) temp_v0_3;
                    if (temp_v0_3 < 0) {
                        var_fv0 += temp_fs0;
                    }
                    M2C_FIELD(temp_s0_2, f32 *, 0x44) = (f32) ((((f32) var_fv0 - 8.0f) * 0.2f) + M2C_FIELD(M2C_FIELD(temp_s2, void **, 4), f32 *, 0x7C0));
                    temp_v0_4 = func_801FA30C() & 0x10;
                    var_fv0_2 = (f64) temp_v0_4;
                    if (temp_v0_4 < 0) {
                        var_fv0_2 += temp_fs0;
                    }
                    M2C_FIELD(temp_s0_2, f32 *, 0x48) = (f32) ((((f32) var_fv0_2 - 8.0f) * 0.2f) + M2C_FIELD(M2C_FIELD(temp_s2, void **, 4), f32 *, 0x7C4));
                    temp_v0_5 = func_801FA30C() & 0x10;
                    var_fv0_3 = (f64) temp_v0_5;
                    if (temp_v0_5 < 0) {
                        var_fv0_3 += temp_fs0;
                    }
                    M2C_FIELD(temp_s0_2, f32 *, 0x4C) = (f32) ((((f32) var_fv0_3 - 8.0f) * 0.2f) + M2C_FIELD(M2C_FIELD(temp_s2, void **, 4), f32 *, 0x7C8));
                }
                var_s3 += 1;
            } while (var_s3 < 5);
            return;
        }
        temp_v0_6 = func_800DE41C(0, 0, 1, 0, 0x5B, 0xFA, &D_802390C8, &func_80164218, &func_8015FE60, sp48 + M2C_FIELD(temp_s1, f32 *, 0x18), sp4C + M2C_FIELD(temp_s1, f32 *, 0x1C), sp50 + M2C_FIELD(temp_s1, f32 *, 0x20), 0, 0, 0, 0.08f, 0.08f, 0.08f);
        if ((u32) ((temp_v0_6 + 2) & 0xFFFF) >= 2U) {
            temp_s0_3 = ((temp_v0_6 & 0xFFFF) * 0x64) + &D_8011F2F0;
            M2C_FIELD(temp_s0_3, s16 *, 8) = 0x40;
            M2C_FIELD(temp_s0_3, s16 *, 6) = 0x40;
            M2C_FIELD(temp_s0_3, s16 *, 4) = 0x40;
            M2C_FIELD(temp_s0_3, s16 *, 2) = 0x40;
            M2C_FIELD(temp_s0_3, f32 *, 0x44) = (f32) M2C_FIELD(M2C_FIELD(temp_s2, void **, 4), f32 *, 0x7C0);
            M2C_FIELD(temp_s0_3, f32 *, 0x48) = (f32) M2C_FIELD(M2C_FIELD(temp_s2, void **, 4), f32 *, 0x7C4);
            M2C_FIELD(temp_s0_3, f32 *, 0x4C) = (f32) M2C_FIELD(M2C_FIELD(temp_s2, void **, 4), f32 *, 0x7C8);
        }
    }
}
