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
s32 func_8013E364();                                /* extern */
M2C_UNK func_8013E49C(s32);                         /* extern */
M2C_UNK func_8013E818(s32, s32, M2C_UNK, M2C_UNK, s32, s32, s32); /* extern */
s32 func_801FA30C();                                /* extern */
extern M2C_UNK D_8011F2F0;
extern M2C_UNK D_8011F2FC;
extern M2C_UNK D_8011F32E;
extern f64 D_80183518;
extern f64 D_80183520;
extern u8 D_8018A448;
extern M2C_UNK D_8018D730;
extern M2C_UNK D_8022A770;
extern M2C_UNK D_8022A772;
extern M2C_UNK D_8023936C;
extern M2C_UNK D_8023984C;
extern M2C_UNK func_80142288;
extern M2C_UNK func_80142894;
extern M2C_UNK func_8014297C;

void func_80141C28(s32 arg0) {
    f32 temp_fs2;
    f32 temp_ft2;
    f32 temp_ft3;
    f64 temp_fs0;
    f64 var_fv0;
    f64 var_fv0_2;
    f64 var_fv0_3;
    f64 var_fv1;
    s32 temp_s0;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 temp_v0_5;
    s32 temp_v0_6;
    s32 temp_v0_7;
    s32 temp_v0_8;
    s32 temp_v1_2;
    s32 temp_v1_3;
    s32 var_s1;
    s32 var_s1_2;
    s32 var_v0;
    u16 temp_v1;
    void *temp_a0;
    void *temp_s0_2;
    void *temp_v0_9;

    temp_v1 = *(&D_8011F32E + ((arg0 & 0xFFFF) * 0x64));
    if (temp_v1 != 0) {
        var_s1 = 0;
        if (temp_v1 != 1) {

        } else if ((u8) D_8018A448 < 2U) {
            temp_v0 = (arg0 & 0xFFFF) * 0x64;
            *(&D_8011F2FC + temp_v0) = *(&D_8011F2FC + temp_v0) + 1;
            var_s1 = 0;
            if (*(&D_8011F2FC + temp_v0) == 0) {
                temp_v0_2 = func_801FA30C() & 0x7F;
                var_fv1 = (f64) temp_v0_2;
                if (temp_v0_2 < 0) {
                    var_fv1 += D_80183518;
                }
                temp_fs2 = 1584.0f - ((f32) var_fv1 * 2.826771f);
                temp_v0_3 = func_8013E364();
                temp_s0 = temp_v0_3 & 0xFFFF;
                if (temp_s0 != 0xFFFF) {
                    temp_v0_4 = func_800DE41C(0, 0, 1, 0, 0x51, 0xFF, &D_8023984C, &func_80142288, &func_8014297C, temp_fs2, 200.0f, 1584.0f, 0, 0, 0, 1.0f, 1.0f, 1.0f);
                    if ((u32) ((temp_v0_4 + 2) & 0xFFFF) >= 2U) {
                        func_8013E818(temp_s0, temp_v0_4 & 0xFFFF, 0x40, 0, 0, 0, 0x12C);
                        *(&D_8018D730 + (temp_s0 * 0x7C)) = 40.0f;
                        D_8018A448 += 1;
                        var_s1_2 = 0;
                        temp_fs0 = D_80183520;
                        __repair_rows: {
                            temp_v0_5 = func_800DE41C(0, 0, 1, 0, 0x5B, ((var_s1_2 * 0xA) - 0x80) & 0xFF, &D_8023936C, &func_80142894, NULL, temp_fs2, 200.0f, 1570.0f, 0, 0, 0, 3.0f, 3.0f, 3.0f);
                            if ((u32) ((temp_v0_5 + 2) & 0xFFFF) >= 2U) {
                                temp_s0_2 = ((temp_v0_5 & 0xFFFF) * 0x64) + &D_8011F2F0;
                                M2C_FIELD(temp_s0_2, s16 *, 8) = 0x40;
                                M2C_FIELD(temp_s0_2, s16 *, 6) = 0x40;
                                M2C_FIELD(temp_s0_2, s16 *, 4) = 0x40;
                                M2C_FIELD(temp_s0_2, s16 *, 2) = 0x40;
                                temp_v0_6 = func_801FA30C() & 0x1F;
                                var_fv0 = (f64) temp_v0_6;
                                if (temp_v0_6 < 0) {
                                    var_fv0 += temp_fs0;
                                }
                                M2C_FIELD(temp_s0_2, f32 *, 0x44) = (f32) ((f32) var_fv0 - 16.0f);
                                temp_v0_7 = func_801FA30C() & 0xF;
                                var_fv0_2 = (f64) temp_v0_7;
                                if (temp_v0_7 < 0) {
                                    var_fv0_2 += temp_fs0;
                                }
                                M2C_FIELD(temp_s0_2, f32 *, 0x48) = (f32) var_fv0_2;
                                temp_v0_8 = func_801FA30C() & 0xF;
                                var_fv0_3 = (f64) temp_v0_8;
                                if (temp_v0_8 < 0) {
                                    var_fv0_3 += temp_fs0;
                                }
                                M2C_FIELD(temp_s0_2, f32 *, 0x4C) = (f32) var_fv0_3;
                            }
                            var_s1_2 += 1;
                        }
if (var_s1_2 < 5) goto __repair_rows;
                        var_s1 = 0;
                    } else {
                        func_8013E49C(temp_v0_3 & 0xFFFF);
                        goto block_22;
                    }
                } else {
                    goto block_22;
                }
            }
        } else {
block_22:
            var_s1 = 0;
        }
    } else {
        D_8018A448 = 0;
        temp_v1_2 = (arg0 & 0xFFFF) * 0x64;
        *(&D_8011F2FC + temp_v1_2) = 0;
        *(&D_8011F32E + temp_v1_2) = 1;
        var_s1 = 0;
    }
    var_v0 = 0 * 8;
    do {
        temp_v1_3 = (((var_v0 + var_s1) * 0x10) - var_s1) * 0x10;
        temp_a0 = temp_v1_3 + &D_8022A770;
        if (*(&D_8022A772 + temp_v1_3) != 0xFFFF) {
            temp_v0_9 = (M2C_FIELD(temp_a0, u16 *, 2) * 0x64) + &D_8011F2F0;
            temp_ft2 = M2C_FIELD(temp_v0_9, f32 *, 0x18);
            temp_ft3 = M2C_FIELD(temp_v0_9, f32 *, 0x20);
            if (((((temp_ft2 - 1160.0f) * -0.99f) + ((temp_ft3 - 1222.0f) * -0.12f)) < 0.0f) && ((((temp_ft2 - 1209.0f) * 0.01f) + -(temp_ft3 - 815.0f)) < 0.0f) && (((temp_ft2 - 1589.0f) + ((temp_ft3 - 819.0f) * 0.0f)) < 0.0f) && ((((temp_ft2 - 1591.0f) * -0.59f) + ((temp_ft3 - 1536.0f) * 0.81f)) < 0.0f)) {
                M2C_FIELD(temp_a0, f32 *, 0x854) = (f32) (M2C_FIELD(temp_a0, f32 *, 0x854) + 0.0424f);
                M2C_FIELD(temp_a0, f32 *, 0x85C) = (f32) (M2C_FIELD(temp_a0, f32 *, 0x85C) - 0.993f);
                M2C_FIELD(temp_a0, f32 *, 0x7B4) = (f32) (M2C_FIELD(temp_a0, f32 *, 0x7B4) + 0.000424f);
                M2C_FIELD(temp_a0, f32 *, 0x7BC) = (f32) (M2C_FIELD(temp_a0, f32 *, 0x7BC) - 0.00993f);
                M2C_FIELD(temp_a0, f32 *, 0x7C0) = (f32) (M2C_FIELD(temp_a0, f32 *, 0x7C0) + 0.000424f);
                M2C_FIELD(temp_a0, f32 *, 0x7C8) = (f32) (M2C_FIELD(temp_a0, f32 *, 0x7C8) - 0.00993f);
            }
        }
        var_s1 += 1;
        var_v0 = var_s1 * 8;
    } while (var_s1 < 7);
}
