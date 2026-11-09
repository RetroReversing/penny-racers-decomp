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

s32 func_800DE41C(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32, M2C_UNK *, M2C_UNK *, s32, M2C_UNK32, f32, M2C_UNK32, s32, s32, s32, f32, f32, f32); /* extern */
M2C_UNK func_80129918(void *, M2C_UNK32, f32, M2C_UNK32, f32, f32, f32); /* extern */
M2C_UNK func_8013E49C(u16);                         /* extern */
M2C_UNK func_8013F44C(s32, void *);                 /* extern */
s32 func_801FA30C();                                /* extern */
extern M2C_UNK D_8011F2F0;
extern M2C_UNK D_8011F2FD;
extern M2C_UNK D_8011F32E;
extern M2C_UNK D_8011F350;
extern f64 D_80183528;
extern f64 D_80183530;
extern u8 D_8018A448;
extern M2C_UNK D_8023936C;
extern M2C_UNK func_80142894;

void func_80142288(s32 arg0) {
    f64 temp_fs0;
    f64 temp_fs0_2;
    f64 var_fv0;
    f64 var_fv0_2;
    f64 var_fv0_3;
    f64 var_fv0_4;
    f64 var_fv0_5;
    f64 var_fv0_6;
    s32 temp_v0;
    s32 temp_v0_10;
    s32 temp_v0_11;
    s32 temp_v0_12;
    s32 temp_v0_4;
    s32 temp_v0_5;
    s32 temp_v0_6;
    s32 temp_v0_7;
    s32 temp_v0_9;
    s32 var_a0;
    s32 var_s2;
    s32 var_s2_2;
    u16 temp_v0_2;
    u16 temp_v0_3;
    u16 temp_v0_8;
    u16 temp_v1;
    void *temp_s0;
    void *temp_s0_2;
    void *temp_s1;
    void *temp_s3;

    temp_v0 = (arg0 & 0xFFFF) * 0x64;
    temp_s1 = *(&D_8011F350 + temp_v0);
    temp_s3 = temp_v0 + &D_8011F2F0;
    temp_v1 = *(&D_8011F32E + temp_v0);
    if (temp_v1 != 1) {
        if ((s32) temp_v1 >= 2) {
            if (temp_v1 != 2) {
                var_a0 = arg0 & 0xFFFF;
                if (temp_v1 != 3) {

                } else {
                    M2C_FIELD(temp_s3, f32 *, 0x1C) = (f32) (M2C_FIELD(temp_s3, f32 *, 0x1C) - 0.15f);
                    temp_v0_2 = M2C_FIELD(temp_s1, u16 *, 0x14) - 1;
                    M2C_FIELD(temp_s1, u16 *, 0x14) = temp_v0_2;
                    if ((temp_v0_2 << 0x10) == 0) {
                        func_8013E49C(M2C_FIELD(temp_s1, u16 *, 0x76));
                        *(&D_8011F2FD + ((arg0 & 0xFFFF) * 0x64)) = 2;
                        D_8018A448 -= 1;
                        goto block_37;
                    }
                }
            } else {
                temp_v0_3 = M2C_FIELD(temp_s1, u16 *, 0x14) - 1;
                M2C_FIELD(temp_s1, u16 *, 0x14) = temp_v0_3;
                var_a0 = arg0 & 0xFFFF;
                if ((temp_v0_3 << 0x10) == 0) {
                    M2C_FIELD(temp_s1, u16 *, 0x14) = 0xF0U;
                    *(&D_8011F32E + ((arg0 & 0xFFFF) * 0x64)) = 3;
                    goto block_37;
                }
            }
        } else {
            var_a0 = arg0 & 0xFFFF;
            if (temp_v1 != 0) {

            } else {
                M2C_FIELD(temp_s1, f32 *, 0xC) = (f32) (M2C_FIELD(temp_s1, f32 *, 0xC) - 0.1f);
                func_80129918(temp_s1 + 0x1C, M2C_FIELD(temp_s3, M2C_UNK32 *, 0x18), M2C_FIELD(temp_s3, f32 *, 0x1C), M2C_FIELD(temp_s3, M2C_UNK32 *, 0x20), M2C_FIELD(temp_s1, f32 *, 8), M2C_FIELD(temp_s1, f32 *, 0xC), M2C_FIELD(temp_s1, f32 *, 0x10));
                M2C_FIELD(temp_s3, M2C_UNK32 *, 0x18) = (M2C_UNK32) M2C_FIELD(temp_s1, M2C_UNK32 *, 0x24);
                M2C_FIELD(temp_s3, f32 *, 0x1C) = (f32) M2C_FIELD(temp_s1, f32 *, 0x28);
                M2C_FIELD(temp_s3, M2C_UNK32 *, 0x20) = (M2C_UNK32) M2C_FIELD(temp_s1, M2C_UNK32 *, 0x2C);
                var_s2 = 0;
                if (M2C_FIELD(temp_s1, u8 *, 0x1E) != 0) {
                    temp_fs0 = D_80183528;
                    do {
                        temp_v0_4 = func_800DE41C(0, 0, 1, 0, 0x5B, ((var_s2 * 0xA) - 0x80) & 0xFF, &D_8023936C, &func_80142894, 0, M2C_FIELD(temp_s3, M2C_UNK32 *, 0x18), M2C_FIELD(temp_s3, f32 *, 0x1C), M2C_FIELD(temp_s3, M2C_UNK32 *, 0x20), 0, 0, 0, 3.0f, 3.0f, 3.0f);
                        if ((u32) ((temp_v0_4 + 2) & 0xFFFF) >= 2U) {
                            temp_s0 = ((temp_v0_4 & 0xFFFF) * 0x64) + &D_8011F2F0;
                            M2C_FIELD(temp_s0, s16 *, 8) = 0x40;
                            M2C_FIELD(temp_s0, s16 *, 6) = 0x40;
                            M2C_FIELD(temp_s0, s16 *, 4) = 0x40;
                            M2C_FIELD(temp_s0, s16 *, 2) = 0x40;
                            temp_v0_5 = func_801FA30C() & 0x1F;
                            var_fv0 = (f64) temp_v0_5;
                            if (temp_v0_5 < 0) {
                                var_fv0 += temp_fs0;
                            }
                            M2C_FIELD(temp_s0, f32 *, 0x44) = (f32) ((f32) var_fv0 - 16.0f);
                            temp_v0_6 = func_801FA30C() & 0xF;
                            var_fv0_2 = (f64) temp_v0_6;
                            if (temp_v0_6 < 0) {
                                var_fv0_2 += temp_fs0;
                            }
                            M2C_FIELD(temp_s0, f32 *, 0x48) = (f32) var_fv0_2;
                            temp_v0_7 = func_801FA30C() & 0x1F;
                            var_fv0_3 = (f64) temp_v0_7;
                            if (temp_v0_7 < 0) {
                                var_fv0_3 += temp_fs0;
                            }
                            M2C_FIELD(temp_s0, f32 *, 0x4C) = (f32) ((f32) var_fv0_3 - 16.0f);
                        }
                        var_s2 += 1;
                    } while (var_s2 < 5);
                    M2C_FIELD(temp_s1, f32 *, 0xC) = 0.0f;
                    *(&D_8011F32E + ((arg0 & 0xFFFF) * 0x64)) = 1;
                    var_a0 = arg0 & 0xFFFF;
                } else {
block_37:
                    var_a0 = arg0 & 0xFFFF;
                }
            }
        }
    } else {
        M2C_FIELD(temp_s1, f32 *, 8) = (f32) (M2C_FIELD(temp_s1, f32 *, 8) + 0.000424f);
        M2C_FIELD(temp_s1, f32 *, 0xC) = (f32) (M2C_FIELD(temp_s1, f32 *, 0xC) - 0.1f);
        M2C_FIELD(temp_s1, f32 *, 0x10) = (f32) (M2C_FIELD(temp_s1, f32 *, 0x10) - 0.00993f);
        func_80129918(temp_s1 + 0x1C, M2C_FIELD(temp_s3, M2C_UNK32 *, 0x18), M2C_FIELD(temp_s3, f32 *, 0x1C), M2C_FIELD(temp_s3, M2C_UNK32 *, 0x20), M2C_FIELD(temp_s1, f32 *, 8), M2C_FIELD(temp_s1, f32 *, 0xC), M2C_FIELD(temp_s1, f32 *, 0x10));
        M2C_FIELD(temp_s3, M2C_UNK32 *, 0x18) = (M2C_UNK32) M2C_FIELD(temp_s1, M2C_UNK32 *, 0x24);
        M2C_FIELD(temp_s3, f32 *, 0x1C) = (f32) M2C_FIELD(temp_s1, f32 *, 0x28);
        M2C_FIELD(temp_s3, M2C_UNK32 *, 0x20) = (M2C_UNK32) M2C_FIELD(temp_s1, M2C_UNK32 *, 0x2C);
        temp_v0_8 = M2C_FIELD(temp_s1, u16 *, 0x14) - 1;
        M2C_FIELD(temp_s1, u16 *, 0x14) = temp_v0_8;
        var_a0 = arg0 & 0xFFFF;
        if ((temp_v0_8 << 0x10) == 0) {
            var_s2_2 = 0;
            temp_fs0_2 = D_80183530;
            __repair_rows: {
                temp_v0_9 = func_800DE41C(0, 0, 1, 0, 0x5B, ((var_s2_2 * 0xA) - 0x80) & 0xFF, &D_8023936C, &func_80142894, 0, M2C_FIELD(temp_s3, M2C_UNK32 *, 0x18), M2C_FIELD(temp_s3, f32 *, 0x1C), M2C_FIELD(temp_s3, M2C_UNK32 *, 0x20), 0, 0, 0, 3.0f, 3.0f, 3.0f);
                if ((u32) ((temp_v0_9 + 2) & 0xFFFF) >= 2U) {
                    temp_s0_2 = ((temp_v0_9 & 0xFFFF) * 0x64) + &D_8011F2F0;
                    M2C_FIELD(temp_s0_2, s16 *, 8) = 0x40;
                    M2C_FIELD(temp_s0_2, s16 *, 6) = 0x40;
                    M2C_FIELD(temp_s0_2, s16 *, 4) = 0x40;
                    M2C_FIELD(temp_s0_2, s16 *, 2) = 0x40;
                    temp_v0_10 = func_801FA30C() & 0x1F;
                    var_fv0_4 = (f64) temp_v0_10;
                    if (temp_v0_10 < 0) {
                        var_fv0_4 += temp_fs0_2;
                    }
                    M2C_FIELD(temp_s0_2, f32 *, 0x44) = (f32) ((f32) var_fv0_4 - 16.0f);
                    temp_v0_11 = func_801FA30C() & 0xF;
                    var_fv0_5 = (f64) temp_v0_11;
                    if (temp_v0_11 < 0) {
                        var_fv0_5 += temp_fs0_2;
                    }
                    M2C_FIELD(temp_s0_2, f32 *, 0x48) = (f32) var_fv0_5;
                    temp_v0_12 = func_801FA30C() & 0x1F;
                    var_fv0_6 = (f64) temp_v0_12;
                    if (temp_v0_12 < 0) {
                        var_fv0_6 += temp_fs0_2;
                    }
                    M2C_FIELD(temp_s0_2, f32 *, 0x4C) = (f32) ((f32) var_fv0_6 - 16.0f);
                }
                var_s2_2 += 1;
            }
if (var_s2_2 < 5) goto __repair_rows;
            M2C_FIELD(temp_s1, u16 *, 0x14) = 0x28U;
            *(&D_8011F32E + ((arg0 & 0xFFFF) * 0x64)) = 2;
            var_a0 = arg0 & 0xFFFF;
        }
    }
    func_8013F44C(var_a0, temp_s1);
}
