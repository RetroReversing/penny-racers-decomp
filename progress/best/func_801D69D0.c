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

M2C_UNK func_801D651C(s32, s16);                    /* extern */
extern u16 D_8006F9E8;
extern M2C_UNK D_8006FB14;
extern M2C_UNK D_800DB1B8;
extern M2C_UNK D_8011F2F0;
extern M2C_UNK D_801D75E6;
extern M2C_UNK D_801D7D60;
extern M2C_UNK D_801D7DE0;
extern s16 D_801D7DE8;
extern s32 D_801D7DEC;
extern M2C_UNK D_801D7E06;
extern M2C_UNK D_80221080;

void func_801D69D0(s32 arg0) {
    s32 sp10[16];
    s16 sp20;
    s16 sp22;
    u16 sp24;
    s16 sp24_1;
    s16 sp26;
    s16 sp26_1;
    f32 *temp_s4;
    f32 temp_ft0;
    f32 temp_ft1;
    f32 temp_fv0;
    f32 temp_fv0_2;
    f32 temp_fv1;
    s16 temp_a1;
    s16 temp_a1_2;
    s16 temp_a1_3;
    s32 var_a0;
    s32 var_a0_1;
    s32 var_s1;
    s32 var_s2;
    s32 var_s2_2;
    s32 var_s2_3;
    s32 var_s2_4;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_3;
    s32 var_v0_4;
    void *temp_a0;
    void *temp_s0;
    void *temp_s3;

    do { temp_a0 = ((arg0 & 0xFFFF) * 0x64) + &D_8011F2F0;
    if (((D_8006F9E8 & 0xFFFF) != 9) && (M2C_FIELD(&D_8006FB14, u8 *, 4) == 1)) {
        sp24 = M2C_FIELD(temp_a0, u16 *, 0x3E);
        if (sp24 == 0) {
            D_801D7DEC = 0x64;
            D_801D7DE8 = 0;
            M2C_FIELD(&D_801D7DE0, s16 *, 6) = 0;
            M2C_FIELD(&D_801D7DE0, s16 *, 4) = 0;
            M2C_FIELD(&D_801D7DE0, s16 *, 2) = 0;
            M2C_FIELD(&D_801D7DE0, u16 *, 0) = 0U;
            M2C_FIELD(temp_a0, u16 *, 0x3E) = 1U;
            return;
        }
        if (sp24 != M2C_FIELD(&D_8006FB14, u8 *, 4)) {
            return;
        }
        if (D_801D7DEC != 0) {
            D_801D7DE8 = 0;
            D_801D7DEC -= 1;
            return;
        }
        sp26 = -1;
        sp24 = -1;
        sp22 = -1;
        sp20 = -1;
        var_s2 = 0;
        if (M2C_FIELD(&D_800DB1B8, s16 *, 0x2108) > 0) {
            var_a0 = 0 * 4;
            __repair_rows: {
                temp_s3 = (*(&D_800DB1B8 + 0x210C + ((var_a0 + var_s2) * 8)) * 0x24) + &D_80221080;
                *(s32 *)(var_a0 + &sp10[0]) = 1000.0f;
                var_s1 = D_801D7DE8 - 1;
                if (var_s1 >= 0) {
                    var_v0 = var_s1 * 0x10;
                    temp_s4 = &(&sp10[0])[var_s2];
                    do {
                        temp_s0 = var_v0 + &D_801D7D60;
                        temp_ft1 = M2C_FIELD(temp_s3, f32 *, 0) - M2C_FIELD(temp_s0, f32 *, 0);
                        temp_ft0 = M2C_FIELD(temp_s3, f32 *, 4) - M2C_FIELD(temp_s0, f32 *, 4);
                        temp_fv0 = M2C_FIELD(temp_s3, f32 *, 8) - M2C_FIELD(temp_s0, f32 *, 8);
                        temp_fv1 = sqrtf((temp_ft1 * temp_ft1) + (temp_ft0 * temp_ft0) + (temp_fv0 * temp_fv0));
                        var_s1 -= 1;
                        if (temp_fv1 < *temp_s4) {
                            M2C_FIELD(((var_s2 * 2) + &sp10[0]), u16 *, 0x10) = (u16) M2C_FIELD(temp_s0, u16 *, 0xC);
                            *temp_s4 = temp_fv1;
                        }
                        var_v0 = var_s1 * 0x10;
                    } while (var_s1 >= 0);
                }
                var_s2 += 1;
                var_a0_1 = var_s2 * 4;
            }
if (var_s2 < M2C_FIELD(&D_800DB1B8, s16 *, 0x2108)) goto __repair_rows;
        }
        if (M2C_FIELD(&D_800DB1B8, s16 *, 0x2108) != 2) {
            if (M2C_FIELD(&D_800DB1B8, s16 *, 0x2108) < 3) {
                if (M2C_FIELD(&D_800DB1B8, s16 *, 0x2108) != 1) {

                } else if (sp20 != -1) {
                    temp_fv0_2 = sp10[0] - 500.0f;
                    sp10[0] = temp_fv0_2;
                    if (temp_fv0_2 < 0.0f) {
                        func_801D651C((M2C_FIELD(&D_801D7DE0, u16 *, 0) & 3) + 2, sp20);
                        *(&D_801D7E06 + (((M2C_FIELD(&D_801D7DE0, u16 *, 0) & 3) + 2) * 0x2C)) = *(&D_801D75E6 + (sp20 * 0xC));
                    } else if (sp10[0] < 900.0f) {
                        func_801D651C((M2C_FIELD(&D_801D7DE0, u16 *, 0) & 3) + 2, sp20);
                        *(&D_801D7E06 + (((M2C_FIELD(&D_801D7DE0, u16 *, 0) & 3) + 2) * 0x2C)) = (s16) (s32) ((*(f32 *)(&D_801D75E6 + (sp20 * 0xC)) * (1000.0f - sp10[0])) / 1000.0f);
                    }
                    M2C_FIELD(&D_801D7DE0, u16 *, 0) = (u16) (M2C_FIELD(&D_801D7DE0, u16 *, 0) + 1);
                }
            } else if (M2C_FIELD(&D_800DB1B8, s16 *, 0x2108) != 3) {
                if (M2C_FIELD(&D_800DB1B8, s16 *, 0x2108) != 4) {

                } else {
                    if ((sp20 == sp22) && (sp20 != -1)) {
                        sp22 = -1;
                    }
                    if ((sp20 == sp24) && (sp20 != -1)) {
                        sp24 = -1;
                    }
                    if ((sp20 == sp26) && (sp20 != -1)) {
                        sp26 = -1;
                    }
                    if ((sp22 == sp24) && (sp22 != -1)) {
                        sp24 = -1;
                    }
                    if ((sp22 == sp26) && (sp22 != -1)) {
                        sp26 = -1;
                    }
                    var_s2_2 = 0;
                    if ((sp24 == sp26) && (sp24 != -1)) {
                        sp26_1 = -1;
                        var_s2_2 = 0;
                    }
                    var_v0_2 = 0 * 2;
                    do {
                        temp_a1 = M2C_FIELD((var_v0_2 + &sp10[0]), s16 *, 0x10);
                        if (temp_a1 != -1) {
                            func_801D651C((M2C_FIELD(&D_801D7DE0, u16 *, 0) & 3) + 4, temp_a1);
                            M2C_FIELD(&D_801D7DE0, u16 *, 0) = (u16) (M2C_FIELD(&D_801D7DE0, u16 *, 0) + 1);
                        }
                        var_s2_2 += 1;
                        var_v0_2 = var_s2_2 * 2;
                    } while (var_s2_2 < 4);
                }
            } else {
                if ((sp20 == sp22) && (sp20 != -1)) {
                    sp22 = -1;
                }
                if ((sp20 == sp24) && (sp20 != -1)) {
                    sp24 = -1;
                }
                var_s2_3 = 0;
                if ((sp22 == sp24) && (sp22 != -1)) {
                    sp24_1 = -1;
                    var_s2_3 = 0;
                }
                var_v0_3 = 0 * 2;
                do {
                    temp_a1_2 = M2C_FIELD((var_v0_3 + &sp10[0]), s16 *, 0x10);
                    if (temp_a1_2 != -1) {
                        func_801D651C((M2C_FIELD(&D_801D7DE0, u16 *, 0) & 3) + 3, temp_a1_2);
                        M2C_FIELD(&D_801D7DE0, u16 *, 0) = (u16) (M2C_FIELD(&D_801D7DE0, u16 *, 0) + 1);
                    }
                    var_s2_3 += 1;
                    var_v0_3 = var_s2_3 * 2;
                } while (var_s2_3 < 3);
            }
        } else {
            var_s2_4 = 0;
            if (sp20 == sp22) {
                if (sp20 != -1) {
                    func_801D651C((M2C_FIELD(&D_801D7DE0, u16 *, 0) & 1) + 4, sp20);
                    M2C_FIELD(&D_801D7DE0, u16 *, 0) = (u16) (M2C_FIELD(&D_801D7DE0, u16 *, 0) + 1);
                } else {
                    goto block_35;
                }
            } else {
block_35:
                var_v0_4 = 0 * 2;
                do {
                    temp_a1_3 = M2C_FIELD((var_v0_4 + &sp10[0]), s16 *, 0x10);
                    if (temp_a1_3 != -1) {
                        func_801D651C((M2C_FIELD(&D_801D7DE0, u16 *, 0) & 3) + 4, temp_a1_3);
                        M2C_FIELD(&D_801D7DE0, u16 *, 0) = (u16) (M2C_FIELD(&D_801D7DE0, u16 *, 0) + 1);
                    }
                    var_s2_4 += 1;
                    var_v0_4 = var_s2_4 * 2;
                } while (var_s2_4 < 2);
            }
        }
        D_801D7DE8 = 0;
    } } while (0);
}
