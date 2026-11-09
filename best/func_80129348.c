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

extern M2C_UNK D_8011F308;
extern M2C_UNK D_8011F310;
extern M2C_UNK D_8011F340;

s32 func_80129348(u16 *arg0, u16 *arg1, f32 arg2, f32 arg4) {
    f32 temp_ft0;
    f32 temp_ft0_2;
    f32 temp_fv1;
    f32 temp_fv1_2;
    f32 temp_fv1_3;
    f32 temp_fv1_4;
    s16 temp_a3_2;
    s16 temp_t0;
    s16 temp_t0_2;
    s16 temp_t1;
    s16 temp_t1_2;
    s16 temp_t2;
    s16 temp_v1_3;
    s16 temp_v1_5;
    s32 temp_a1;
    s32 temp_a2;
    s32 temp_a3;
    s32 var_v0;
    s32 var_v1;
    s32 var_v1_2;
    u16 var_a2;
    u16 var_a2_2;
    void *temp_a2_2;
    void *temp_a2_3;
    void *temp_a2_4;
    void *temp_a2_5;
    void *temp_v1;
    void *temp_v1_2;
    void *temp_v1_4;

    temp_a2 = *arg0 * 0x64;
    temp_v1 = M2C_FIELD(M2C_FIELD(M2C_FIELD(*(&D_8011F340 + temp_a2), void **, 4), void **, 4), void **, 4);
    temp_fv1 = *(&D_8011F308 + temp_a2);
    if (!(arg2 <= ((f32) M2C_FIELD(temp_v1, s16 *, 0x40) + temp_fv1)) || !(((f32) M2C_FIELD(temp_v1, s16 *, 0x50) + temp_fv1) <= arg2) || (temp_fv1_2 = *(&D_8011F310 + temp_a2), !(arg4 <= ((f32) M2C_FIELD(temp_v1, s16 *, 0x44) + temp_fv1_2))) || (var_v0 = 1, !(((f32) M2C_FIELD(temp_v1, s16 *, 0x54) + temp_fv1_2) <= arg4))) {
        if (*arg1 == 0) {
            temp_a2_2 = *(&D_8011F340 + (*arg0 * 0x64));
            if (M2C_FIELD(temp_a2_2, u16 *, 0xA) != 0xFFFF) {
                var_a2 = M2C_FIELD(temp_a2_2, u16 *, 0xA);
                var_v1 = var_a2 & 0xFFFF;
            } else {
                var_a2 = M2C_FIELD(*(&D_8011F340 + (*arg0 * 0x64)), u16 *, 0xE);
                *arg1 = 1;
                goto block_11;
            }
        } else {
            temp_a2_3 = *(&D_8011F340 + (*arg0 * 0x64));
            if (M2C_FIELD(temp_a2_3, u16 *, 0xE) != 0xFFFF) {
                var_a2 = M2C_FIELD(temp_a2_3, u16 *, 0xE);
                var_v1 = var_a2 & 0xFFFF;
            } else {
                var_a2 = M2C_FIELD(*(&D_8011F340 + (*arg0 * 0x64)), u16 *, 0xA);
                *arg1 = 0;
block_11:
                var_v1 = var_a2 & 0xFFFF;
            }
        }
        temp_a3 = var_v1 * 0x64;
        temp_v1_2 = M2C_FIELD(M2C_FIELD(M2C_FIELD(*(&D_8011F340 + temp_a3), void **, 4), void **, 4), void **, 4);
        temp_t2 = M2C_FIELD(temp_v1_2, s16 *, 0x40);
        temp_ft0 = *(&D_8011F308 + temp_a3);
        if (arg2 <= ((f32) (temp_t2 + 0x1E) + temp_ft0)) {
            temp_t1 = M2C_FIELD(temp_v1_2, s16 *, 0x50);
            if (((f32) (temp_t1 - 0x1E) + temp_ft0) <= arg2) {
                temp_t0 = M2C_FIELD(temp_v1_2, s16 *, 0x44);
                temp_fv1_3 = *(&D_8011F310 + temp_a3);
                if (arg4 <= ((f32) (temp_t0 + 0x1E) + temp_fv1_3)) {
                    temp_v1_3 = M2C_FIELD(temp_v1_2, s16 *, 0x54);
                    if (((f32) (temp_v1_3 - 0x1E) + temp_fv1_3) <= arg4) {
                        if (!(arg2 <= ((f32) temp_t2 + temp_ft0))) {
                            *arg0 = var_a2;
                            goto block_48;
                        }
                        if (!(((f32) temp_t1 + temp_ft0) <= arg2)) {
                            *arg0 = var_a2;
                            goto block_48;
                        }
                        *arg0 = var_a2;
                        if (arg4 <= ((f32) temp_t0 + temp_fv1_3)) {
                            if (!(((f32) temp_v1_3 + temp_fv1_3) <= arg4)) {
                                return 2;
                            }
                            goto block_47;
                        }
                        goto block_48;
                    }
                }
            }
        }
        if (*arg1 == 0) {
            temp_a2_4 = *(&D_8011F340 + (*arg0 * 0x64));
            if (M2C_FIELD(temp_a2_4, u16 *, 8) != 0xFFFF) {
                var_a2_2 = M2C_FIELD(temp_a2_4, u16 *, 8);
                var_v1_2 = var_a2_2 & 0xFFFF;
            } else {
                var_a2_2 = M2C_FIELD(*(&D_8011F340 + (*arg0 * 0x64)), u16 *, 0xC);
                *arg1 = 1;
                goto block_32;
            }
        } else {
            temp_a2_5 = *(&D_8011F340 + (*arg0 * 0x64));
            if (M2C_FIELD(temp_a2_5, u16 *, 0xC) != 0xFFFF) {
                var_a2_2 = M2C_FIELD(temp_a2_5, u16 *, 0xC);
                var_v1_2 = var_a2_2 & 0xFFFF;
            } else {
                var_a2_2 = M2C_FIELD(*(&D_8011F340 + (*arg0 * 0x64)), u16 *, 8);
                *arg1 = 0;
block_32:
                var_v1_2 = var_a2_2 & 0xFFFF;
            }
        }
        temp_a1 = var_v1_2 * 0x64;
        temp_v1_4 = M2C_FIELD(M2C_FIELD(M2C_FIELD(*(&D_8011F340 + temp_a1), void **, 4), void **, 4), void **, 4);
        temp_t1_2 = M2C_FIELD(temp_v1_4, s16 *, 0x40);
        temp_ft0_2 = *(&D_8011F308 + temp_a1);
        var_v0 = 0;
        if (arg2 <= ((f32) (temp_t1_2 + 0x1E) + temp_ft0_2)) {
            temp_t0_2 = M2C_FIELD(temp_v1_4, s16 *, 0x50);
            var_v0 = 0;
            if (((f32) (temp_t0_2 - 0x1E) + temp_ft0_2) <= arg2) {
                temp_a3_2 = M2C_FIELD(temp_v1_4, s16 *, 0x44);
                temp_fv1_4 = *(&D_8011F310 + temp_a1);
                var_v0 = 0;
                if (arg4 <= ((f32) (temp_a3_2 + 0x1E) + temp_fv1_4)) {
                    temp_v1_5 = M2C_FIELD(temp_v1_4, s16 *, 0x54);
                    if (!(((f32) (temp_v1_5 - 0x1E) + temp_fv1_4) <= arg4)) {
                        return 0;
                    }
                    if (!(arg2 <= ((f32) temp_t1_2 + temp_ft0_2))) {
                        *arg0 = var_a2_2;
                        goto block_48;
                    }
                    if (!(((f32) temp_t0_2 + temp_ft0_2) <= arg2)) {
                        *arg0 = var_a2_2;
                        goto block_48;
                    }
                    *arg0 = var_a2_2;
                    if ((arg4 <= ((f32) temp_a3_2 + temp_fv1_4)) && (((f32) temp_v1_5 + temp_fv1_4) <= arg4)) {
block_47:
                        return 1;
                    }
block_48:
                    var_v0 = 2;
                    /* Duplicate return node #49. Try simplifying control flow for better match */
                    return var_v0;
                }
            }
        }
        /* Duplicate return node #49. Try simplifying control flow for better match */
        return var_v0;
    }
    return var_v0;
}
