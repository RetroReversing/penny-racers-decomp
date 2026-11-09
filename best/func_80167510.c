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

f32 func_80032310(f32);                             /* extern */
s32 func_800DE41C(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32, M2C_UNK *, M2C_UNK *, M2C_UNK *, M2C_UNK32, f32, M2C_UNK32, s32, s32, s32, f32, f32, f32); /* extern */
s16 func_8012913C(u16, M2C_UNK32, f32, M2C_UNK32);  /* extern */
M2C_UNK func_80129918(void *, M2C_UNK32, f32, M2C_UNK32, f32, f32, f32); /* extern */
M2C_UNK func_8013AE60(s32);                         /* extern */
s32 func_8013E364();                                /* extern */
M2C_UNK func_8013E818(s32, s32, M2C_UNK, M2C_UNK, s32, s32, s32); /* extern */
s32 func_8013F050(s32, void *);                     /* extern */
s32 func_8013F1D4(s32, void *);                     /* extern */
M2C_UNK func_801D7028(s32, M2C_UNK);                /* extern */
extern M2C_UNK D_8011F2F0;
extern u16 D_8018D672;
extern M2C_UNK D_8018D6C4;
extern M2C_UNK D_8018D730;
extern M2C_UNK D_8022A770;
extern u16 D_80233EC0;
extern u8 D_80233EC1;
extern M2C_UNK D_802390C8;
extern M2C_UNK func_80164218;
extern M2C_UNK func_80167DD4;

void func_80167510(s32 arg0) {
    M2C_UNK32 temp_fv0_3;
    M2C_UNK32 temp_fv0_4;
    f32 temp_fa0;
    f32 temp_fs0;
    f32 temp_fs1;
    f32 temp_ft1;
    f32 temp_ft2;
    f32 temp_fv0;
    f32 temp_fv0_2;
    f32 var_ft0;
    s32 temp_s0;
    s32 temp_s2;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_5;
    s32 temp_v0_6;
    s32 var_a0;
    s32 var_v1;
    s32 var_v1_2;
    u16 temp_v0_4;
    u16 temp_v1;
    void *temp_s0_2;
    void *temp_s0_3;
    void *temp_s1;
    void *temp_s2_2;
    void *temp_v1_2;
    void *temp_v1_3;
    void *temp_v1_4;
    void *temp_v1_5;
    void *var_v0;
    void *var_v0_2;

    temp_s1 = ((arg0 & 0xFFFF) * 0x64) + &D_8011F2F0;
    temp_v1 = M2C_FIELD(temp_s1, u16 *, 0x3E);
    switch (temp_v1) {                              /* irregular */
    case 0:
        temp_s0 = func_8013E364() & 0xFFFF;
        if (temp_s0 != 0xFFFF) {
            func_8013E818(temp_s0, arg0 & 0xFFFF, 0, 0, 0, 0, 4);
            M2C_FIELD(temp_s1, u16 *, 0x3E) = 2U;
            temp_v0 = temp_s0 * 0x7C;
            *(&D_8018D730 + temp_v0) = 15.0f;
            *(&D_8018D6C4 + temp_v0) = &D_8022A770;
            M2C_FIELD(temp_s1, M2C_UNK32 *, 0x44) = (M2C_UNK32) M2C_FIELD(temp_s1, M2C_UNK32 *, 0x18);
            M2C_FIELD(temp_s1, f32 *, 0x48) = (f32) M2C_FIELD(temp_s1, f32 *, 0x1C);
            M2C_FIELD(temp_s1, M2C_UNK32 *, 0x4C) = (M2C_UNK32) M2C_FIELD(temp_s1, M2C_UNK32 *, 0x20);
            M2C_FIELD(temp_s1, f32 *, 0x1C) = (f32) (M2C_FIELD(temp_s1, f32 *, 0x1C) + 100.0f);
        default:
block_36:
            func_8013AE60(arg0 & 0xFFFF);
        }
        return;
    case 1:
        temp_s0_2 = M2C_FIELD(temp_s1, void **, 0x60);
        temp_s2 = arg0 & 0xFFFF;
        if (func_8013F050(temp_s2, temp_s0_2) & 0xFF) {
            func_801D7028(temp_s2, 0x29);
            M2C_FIELD(temp_s1, u16 *, 0x3E) = 2U;
            temp_s2_2 = (D_8018D672 * 0x8F0) + &D_8022A770;
            M2C_FIELD(temp_s0_2, f32 *, 8) = (f32) (M2C_FIELD(temp_s2_2, f32 *, 0x7C0) * 1.5f);
            M2C_FIELD(temp_s0_2, f32 *, 0xC) = (f32) ((M2C_FIELD(temp_s2_2, f32 *, 0x7C4) * 1.5f) + 2.0f + (M2C_FIELD(temp_s2_2, f32 *, 0x774) * 0.01f));
            M2C_FIELD(temp_s0_2, f32 *, 0x10) = (f32) (M2C_FIELD(temp_s2_2, f32 *, 0x7C8) * 1.5f);
            temp_v0_2 = func_800DE41C(0, 0, 1, 0, 0x5B, 0x8C, &D_802390C8, &func_80164218, &func_80167DD4, M2C_FIELD(temp_s1, M2C_UNK32 *, 0x18), M2C_FIELD(temp_s1, f32 *, 0x1C) + 5.0f, M2C_FIELD(temp_s1, M2C_UNK32 *, 0x20), 0, 0, 0, 0.08f, 0.08f, 0.08f);
            if ((u32) ((temp_v0_2 + 2) & 0xFFFF) >= 2U) {
                temp_v1_2 = ((temp_v0_2 & 0xFFFF) * 0x64) + &D_8011F2F0;
                M2C_FIELD(temp_v1_2, s16 *, 8) = 0x40;
                M2C_FIELD(temp_v1_2, s16 *, 6) = 0x40;
                M2C_FIELD(temp_v1_2, s16 *, 4) = 0x40;
                M2C_FIELD(temp_v1_2, s16 *, 2) = 0x40;
                M2C_FIELD(temp_v1_2, f32 *, 0x44) = (f32) M2C_FIELD(temp_s2_2, f32 *, 0x7C0);
                M2C_FIELD(temp_v1_2, f32 *, 0x48) = (f32) M2C_FIELD(temp_s2_2, f32 *, 0x7C4);
                M2C_FIELD(temp_v1_2, f32 *, 0x4C) = (f32) M2C_FIELD(temp_s2_2, f32 *, 0x7C8);
            }
        }
        goto block_36;
    case 2:
        temp_s0_3 = M2C_FIELD(temp_s1, void **, 0x60);
        M2C_FIELD(temp_s0_3, f32 *, 0xC) = (f32) (M2C_FIELD(temp_s0_3, f32 *, 0xC) - 0.15f);
        func_80129918(temp_s0_3 + 0x1C, M2C_FIELD(temp_s1, M2C_UNK32 *, 0x18), M2C_FIELD(temp_s1, f32 *, 0x1C), M2C_FIELD(temp_s1, M2C_UNK32 *, 0x20), M2C_FIELD(temp_s0_3, f32 *, 8), M2C_FIELD(temp_s0_3, f32 *, 0xC), M2C_FIELD(temp_s0_3, f32 *, 0x10));
        M2C_FIELD(temp_s1, M2C_UNK32 *, 0x18) = (M2C_UNK32) M2C_FIELD(temp_s0_3, M2C_UNK32 *, 0x24);
        M2C_FIELD(temp_s1, f32 *, 0x1C) = (f32) M2C_FIELD(temp_s0_3, f32 *, 0x28);
        M2C_FIELD(temp_s1, M2C_UNK32 *, 0x20) = (M2C_UNK32) M2C_FIELD(temp_s0_3, M2C_UNK32 *, 0x2C);
        M2C_FIELD(temp_s1, s8 *, 0) = (s8) (M2C_FIELD(temp_s0_3, u8 *, 0x21) - D_80233EC1);
        var_v1 = 0;
        if (M2C_FIELD(temp_s0_3, u8 *, 0x1E) != 0) {
            var_v0 = temp_s0_3;
            do {
                M2C_FIELD(var_v0, s8 *, 0x67) = 0;
                var_v1 += 1;
                var_v0 = temp_s0_3 + var_v1;
            } while (var_v1 < 7);
            temp_v0_3 = func_800DE41C(0, 0, 1, 0, 0x5B, 0x8C, &D_802390C8, &func_80164218, &func_80167DD4, M2C_FIELD(temp_s1, M2C_UNK32 *, 0x18), M2C_FIELD(temp_s1, f32 *, 0x1C) + 5.0f, M2C_FIELD(temp_s1, M2C_UNK32 *, 0x20), 0, 0, 0, 0.08f, 0.08f, 0.08f);
            if ((u32) ((temp_v0_3 + 2) & 0xFFFF) >= 2U) {
                temp_v1_3 = ((temp_v0_3 & 0xFFFF) * 0x64) + &D_8011F2F0;
                M2C_FIELD(temp_v1_3, s16 *, 8) = 0x40;
                M2C_FIELD(temp_v1_3, s16 *, 6) = 0x40;
                M2C_FIELD(temp_v1_3, s16 *, 4) = 0x40;
                M2C_FIELD(temp_v1_3, s16 *, 2) = 0x40;
                M2C_FIELD(temp_v1_3, s32 *, 0x44) = 0;
                M2C_FIELD(temp_v1_3, f32 *, 0x48) = 0.3f;
                M2C_FIELD(temp_v1_3, s32 *, 0x4C) = 0;
            }
            temp_v0_4 = M2C_FIELD(temp_s0_3, u16 *, 0x14) - 1;
            M2C_FIELD(temp_s0_3, u16 *, 0x14) = temp_v0_4;
            if ((temp_v0_4 << 0x10) == 0) {
                temp_v0_5 = func_800DE41C(0, 0, 1, 0, 0x5B, 0xFA, &D_802390C8, &func_80164218, &func_80167DD4, M2C_FIELD(temp_s1, M2C_UNK32 *, 0x18), M2C_FIELD(temp_s1, f32 *, 0x1C), M2C_FIELD(temp_s1, M2C_UNK32 *, 0x20), 0, 0, 0, 0.08f, 0.08f, 0.08f);
                if ((u32) ((temp_v0_5 + 2) & 0xFFFF) >= 2U) {
                    temp_v1_4 = ((temp_v0_5 & 0xFFFF) * 0x64) + &D_8011F2F0;
                    M2C_FIELD(temp_v1_4, s16 *, 8) = 0x40;
                    M2C_FIELD(temp_v1_4, s16 *, 6) = 0x40;
                    M2C_FIELD(temp_v1_4, s16 *, 4) = 0x40;
                    M2C_FIELD(temp_v1_4, s16 *, 2) = 0x40;
                    M2C_FIELD(temp_v1_4, f32 *, 0x44) = (f32) (M2C_FIELD(temp_s0_3, f32 *, 8) * 0.8f);
                    M2C_FIELD(temp_v1_4, f32 *, 0x48) = (f32) (M2C_FIELD(temp_s0_3, f32 *, 0xC) * 0.8f);
                    M2C_FIELD(temp_v1_4, f32 *, 0x4C) = (f32) (M2C_FIELD(temp_s0_3, f32 *, 0x10) * 0.8f);
                }
                M2C_FIELD(temp_s0_3, u16 *, 0x14) = 5U;
                M2C_FIELD(temp_s1, u16 *, 0x3E) = 1U;
                return;
            }
            temp_fs0 = M2C_FIELD(temp_s0_3, f32 *, 8);
            temp_fs1 = M2C_FIELD(temp_s0_3, f32 *, 0x10);
            temp_fa0 = (temp_fs0 * temp_fs0) + (temp_fs1 * temp_fs1);
            var_ft0 = sqrtf(temp_fa0);
            if (var_ft0 != var_ft0) {
                var_ft0 = func_80032310(temp_fa0);
            }
            temp_ft1 = M2C_FIELD(temp_s0_3, f32 *, 0x30);
            temp_ft2 = M2C_FIELD(temp_s0_3, f32 *, 0x38);
            var_a0 = arg0 & 0xFFFF;
            if (var_ft0 != 0.0f) {
                temp_fv0 = (((temp_fs0 * temp_ft1) + (temp_fs1 * temp_ft2)) / var_ft0) * var_ft0 * -1.3f;
                M2C_FIELD(temp_s0_3, f32 *, 8) = (f32) (temp_fs0 + (temp_ft1 * temp_fv0));
                M2C_FIELD(temp_s0_3, f32 *, 0x10) = (f32) (temp_fs1 + (temp_ft2 * temp_fv0));
                temp_fv0_2 = M2C_FIELD(temp_s0_3, f32 *, 0xC) * 0.8f;
                M2C_FIELD(temp_s0_3, f32 *, 0xC) = temp_fv0_2;
                if (temp_fv0_2 < 0.0f) {
                    M2C_FIELD(temp_s0_3, f32 *, 0xC) = (f32) -temp_fv0_2;
                    goto block_27;
                }
            }
            goto block_28;
        }
block_27:
        var_a0 = arg0 & 0xFFFF;
block_28:
        var_v1_2 = 0;
        if (func_8013F1D4(var_a0, temp_s0_3) & 0xFF) {
            var_v0_2 = temp_s0_3;
            do {
                M2C_FIELD(var_v0_2, s8 *, 0x67) = 0;
                var_v1_2 += 1;
                var_v0_2 = temp_s0_3 + var_v1_2;
            } while (var_v1_2 < 7);
            temp_v0_6 = func_800DE41C(0, 0, 1, 0, 0x5B, 0xFA, &D_802390C8, &func_80164218, &func_80167DD4, M2C_FIELD(temp_s1, M2C_UNK32 *, 0x18), M2C_FIELD(temp_s1, f32 *, 0x1C), M2C_FIELD(temp_s1, M2C_UNK32 *, 0x20), 0, 0, 0, 0.08f, 0.08f, 0.08f);
            if ((u32) ((temp_v0_6 + 2) & 0xFFFF) >= 2U) {
                temp_v1_5 = ((temp_v0_6 & 0xFFFF) * 0x64) + &D_8011F2F0;
                M2C_FIELD(temp_v1_5, s16 *, 8) = 0x40;
                M2C_FIELD(temp_v1_5, s16 *, 6) = 0x40;
                M2C_FIELD(temp_v1_5, s16 *, 4) = 0x40;
                M2C_FIELD(temp_v1_5, s16 *, 2) = 0x40;
                M2C_FIELD(temp_v1_5, f32 *, 0x44) = (f32) (M2C_FIELD(temp_s0_3, f32 *, 8) * 0.8f);
                M2C_FIELD(temp_v1_5, f32 *, 0x48) = (f32) (M2C_FIELD(temp_s0_3, f32 *, 0xC) * 0.8f);
                M2C_FIELD(temp_v1_5, f32 *, 0x4C) = (f32) (M2C_FIELD(temp_s0_3, f32 *, 0x10) * 0.8f);
            }
            M2C_FIELD(temp_s1, M2C_UNK32 *, 0x18) = (M2C_UNK32) M2C_FIELD(temp_s1, M2C_UNK32 *, 0x44);
            M2C_FIELD(temp_s1, f32 *, 0x1C) = (f32) (M2C_FIELD(temp_s1, f32 *, 0x48) + 150.0f);
            temp_fv0_3 = M2C_FIELD(temp_s1, M2C_UNK32 *, 0x4C);
            M2C_FIELD(temp_s1, M2C_UNK32 *, 0x20) = temp_fv0_3;
            M2C_FIELD(temp_s0_3, s16 *, 0x20) = func_8012913C(D_80233EC0, M2C_FIELD(temp_s1, M2C_UNK32 *, 0x18), M2C_FIELD(temp_s1, f32 *, 0x1C), temp_fv0_3);
            M2C_FIELD(temp_s0_3, s16 *, 0x22) = 0;
            M2C_FIELD(temp_s0_3, s8 *, 0x1D) = 0;
            M2C_FIELD(temp_s0_3, u8 *, 0x1E) = 0U;
            M2C_FIELD(temp_s0_3, f32 *, 8) = 0.0f;
            M2C_FIELD(temp_s0_3, f32 *, 0xC) = 0.0f;
            M2C_FIELD(temp_s0_3, f32 *, 0x10) = 0.0f;
        }
        if (M2C_FIELD(temp_s1, f32 *, 0x1C) < -200.0f) {
            M2C_FIELD(temp_s1, M2C_UNK32 *, 0x18) = (M2C_UNK32) M2C_FIELD(temp_s1, M2C_UNK32 *, 0x44);
            M2C_FIELD(temp_s1, f32 *, 0x1C) = (f32) M2C_FIELD(temp_s1, f32 *, 0x48);
            temp_fv0_4 = M2C_FIELD(temp_s1, M2C_UNK32 *, 0x4C);
            M2C_FIELD(temp_s1, M2C_UNK32 *, 0x20) = temp_fv0_4;
            M2C_FIELD(temp_s0_3, s16 *, 0x20) = func_8012913C(D_80233EC0, M2C_FIELD(temp_s1, M2C_UNK32 *, 0x18), M2C_FIELD(temp_s1, f32 *, 0x1C), temp_fv0_4);
            M2C_FIELD(temp_s0_3, s16 *, 0x22) = 0;
            M2C_FIELD(temp_s0_3, s8 *, 0x1D) = 0;
            M2C_FIELD(temp_s0_3, u8 *, 0x1E) = 0U;
            M2C_FIELD(temp_s0_3, f32 *, 8) = 0.0f;
            M2C_FIELD(temp_s0_3, f32 *, 0xC) = 0.0f;
            M2C_FIELD(temp_s0_3, f32 *, 0x10) = 0.0f;
            M2C_FIELD(temp_s1, u16 *, 0x3E) = 1U;
        }
        goto block_36;
    }
}
