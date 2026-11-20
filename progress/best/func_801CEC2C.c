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

M2C_UNK func_801CE7D0(void **, u16);                /* extern */
extern M2C_UNK D_800DB1B8;
extern M2C_UNK D_8011F330;
extern M2C_UNK D_8011F350;
extern u8 D_80126FF6;
extern M2C_UNK D_801D5590;
extern M2C_UNK D_80220ED8;

void func_801CEC2C(void **arg0, s32 arg1) {
    s32 sp14;
    s16 temp_fp;
    s16 temp_s3;
    s16 temp_s4;
    s16 temp_s5;
    s16 temp_v0;
    s16 temp_v0_4;
    s16 temp_v1_12;
    s16 var_a3;
    s16 var_a3_2;
    s16 var_t5;
    s32 temp_a0_3;
    s32 temp_a0_4;
    s32 temp_a1_3;
    s32 temp_a1_5;
    s32 temp_a2_2;
    s32 temp_a2_5;
    s32 temp_a3;
    s32 temp_a3_2;
    s32 temp_s1;
    s32 temp_t0;
    s32 temp_t0_3;
    s32 temp_t1;
    s32 temp_t1_2;
    s32 temp_t2;
    s32 var_v0;
    s32 var_v1;
    u16 temp_v1_2;
    void *temp_a0;
    void *temp_a0_2;
    void *temp_a1;
    void *temp_a1_2;
    void *temp_a1_4;
    void *temp_a2;
    void *temp_a2_3;
    void *temp_a2_4;
    void *temp_t0_2;
    void *temp_t0_4;
    void *temp_v0_2;
    void *temp_v0_3;
    void *temp_v0_5;
    void *temp_v0_6;
    void *temp_v0_7;
    void *temp_v1;
    void *temp_v1_10;
    void *temp_v1_11;
    void *temp_v1_13;
    void *temp_v1_14;
    void *temp_v1_15;
    void *temp_v1_16;
    void *temp_v1_17;
    void *temp_v1_18;
    void *temp_v1_19;
    void *temp_v1_20;
    void *temp_v1_21;
    void *temp_v1_3;
    void *temp_v1_4;
    void *temp_v1_5;
    void *temp_v1_6;
    void *temp_v1_7;
    void *temp_v1_8;
    void *temp_v1_9;

    if (D_80126FF6 == (M2C_FIELD(&D_800DB1B8, s16 *, 0x2108) - 1)) {
        temp_v1 = *arg0;
        *arg0 = temp_v1 + 8;
        M2C_FIELD(temp_v1, s32 *, 0) = 0x06000000;
        M2C_FIELD(temp_v1, M2C_UNK **, 4) = &D_80220ED8;
        temp_v1_2 = *(&D_8011F330 + ((arg1 & 0xFFFF) * 0x64));
        if (temp_v1_2 != 0) {
            var_v1 = arg1 & 0xFFFF;
            if (temp_v1_2 != 1) {
                return;
            }
            goto block_5;
        }
        *(&D_8011F330 + ((arg1 & 0xFFFF) * 0x64)) = 1;
        var_v1 = arg1 & 0xFFFF;
block_5:
        temp_s1 = var_v1 * 0x64;
        temp_a0 = *(&D_8011F350 + temp_s1);
        temp_fp = M2C_FIELD(temp_a0, u16 *, 0xE) / 80;
        temp_s4 = M2C_FIELD(temp_a0, u16 *, 0xE) % 80;
        temp_s5 = M2C_FIELD(temp_a0, u16 *, 0x10) % 24;
        temp_s3 = M2C_FIELD(temp_a0, u16 *, 0x10) / 24;
        if (M2C_FIELD(temp_a0, u8 *, 9) != 0) {
            func_801CE7D0(arg0, M2C_FIELD(temp_a0, u16 *, 0x10));
            if (M2C_FIELD(*(&D_8011F350 + temp_s1), u8 *, 9) == 0xFF) {
                temp_v1_3 = *arg0;
                *arg0 = temp_v1_3 + 8;
                M2C_FIELD(temp_v1_3, s32 *, 0) = 0xB900031D;
                var_v0 = 0x0F0A4000;
            } else {
                temp_v1_4 = *arg0;
                *arg0 = temp_v1_4 + 8;
                M2C_FIELD(temp_v1_4, s32 *, 0) = 0xB900031D;
                var_v0 = 0x504340;
            }
            M2C_FIELD(*arg0, s32 *, 4) = var_v0;
            temp_a1 = *arg0;
            *arg0 = temp_a1 + 8;
            M2C_FIELD(temp_a1, s32 *, 0) = 0xFA000000;
            temp_a0_2 = *(&D_8011F350 + ((arg1 & 0xFFFF) * 0x64));
            M2C_FIELD(temp_a1, M2C_UNK **, 4) = (M2C_UNK *) ((M2C_FIELD(temp_a0_2, u8 *, 6) << 0x18) | (M2C_FIELD(temp_a0_2, u8 *, 7) << 0x10) | (M2C_FIELD(temp_a0_2, u8 *, 8) << 8) | M2C_FIELD(temp_a0_2, u8 *, 9));
            temp_v1_5 = *arg0;
            *arg0 = temp_v1_5 + 8;
            M2C_FIELD(temp_v1_5, s32 *, 0) = 0xFD900000;
            M2C_FIELD(temp_v1_5, M2C_UNK **, 4) = &D_801D5590;
            temp_v1_6 = *arg0;
            *arg0 = temp_v1_6 + 8;
            M2C_FIELD(temp_v1_6, s32 *, 0) = 0xF5900000;
            M2C_FIELD(temp_v1_6, M2C_UNK **, 4) = (M2C_UNK *)0x07080200;
            temp_v1_7 = *arg0;
            *arg0 = temp_v1_7 + 8;
            M2C_FIELD(temp_v1_7, s32 *, 0) = 0xE6000000;
            M2C_FIELD(temp_v1_7, M2C_UNK **, 4) = NULL;
            temp_v1_8 = *arg0;
            *arg0 = temp_v1_8 + 8;
            M2C_FIELD(temp_v1_8, s32 *, 0) = 0xF3000000;
            M2C_FIELD(temp_v1_8, M2C_UNK **, 4) = (M2C_UNK *)0x071DF19A;
            temp_v1_9 = *arg0;
            *arg0 = temp_v1_9 + 8;
            M2C_FIELD(temp_v1_9, s32 *, 0) = 0xE7000000;
            M2C_FIELD(temp_v1_9, M2C_UNK **, 4) = NULL;
            temp_v1_10 = *arg0;
            *arg0 = temp_v1_10 + 8;
            M2C_FIELD(temp_v1_10, s32 *, 0) = 0xF5800A00;
            M2C_FIELD(temp_v1_10, M2C_UNK **, 4) = (M2C_UNK *)0x80200;
            temp_v1_11 = *arg0;
            *arg0 = temp_v1_11 + 8;
            M2C_FIELD(temp_v1_11, s32 *, 0) = 0xF2000000;
            M2C_FIELD(temp_v1_11, M2C_UNK **, 4) = (M2C_UNK *)0x13C05C;
        }
        if (M2C_FIELD(*(&D_8011F350 + ((arg1 & 0xFFFF) * 0x64)), u8 *, 9) != 0) {
            var_t5 = 0;
            if ((temp_s3 << 0x10) > 0) {
                temp_t2 = arg1 & 0xFFFF;
                sp14 = temp_t2 * 0x19;
                __repair_rows: {
                    var_a3 = 0;
                    if ((temp_fp << 0x10) > 0) {
                        temp_t0 = sp14 * 4;
                        temp_t1 = var_t5 * 0x18;
                        do {
                            temp_a2 = *arg0;
                            *arg0 = temp_a2 + 8;
                            temp_a1_2 = *(&D_8011F350 + temp_t0);
                            temp_a0_3 = var_a3 * 0x50;
                            M2C_FIELD(temp_a2, s32 *, 0) = (s32) (((((M2C_FIELD(temp_a1_2, u16 *, 0xA) + (temp_a0_3 + 0x50)) * 4) & 0xFFF) << 0xC) | ((((M2C_FIELD(temp_a1_2, u16 *, 0xC) + (temp_t1 + 0x18)) * 4) & 0xFFF) | 0xE4000000));
                            temp_v0_2 = *(&D_8011F350 + temp_t0);
                            M2C_FIELD(temp_a2, M2C_UNK **, 4) = (M2C_UNK *) (((((M2C_FIELD(temp_v0_2, u16 *, 0xA) + temp_a0_3) * 4) & 0xFFF) << 0xC) | (((M2C_FIELD(temp_v0_2, u16 *, 0xC) + temp_t1) * 4) & 0xFFF));
                            temp_v1_13 = *arg0;
                            *arg0 = temp_v1_13 + 8;
                            M2C_FIELD(temp_v1_13, s32 *, 0) = 0xB4000000;
                            M2C_FIELD(temp_v1_13, M2C_UNK **, 4) = NULL;
                            temp_v1_14 = *arg0;
                            *arg0 = temp_v1_14 + 8;
                            M2C_FIELD(temp_v1_14, s32 *, 0) = 0xB3000000;
                            temp_v0 = var_a3 + 1;
                            var_a3 = temp_v0;
                            M2C_FIELD(temp_v1_14, M2C_UNK **, 4) = (M2C_UNK *)0x04000400;
                        } while (temp_v0 < temp_fp);
                    }
                    if (temp_s4 != 0) {
                        temp_t0_2 = *arg0;
                        *arg0 = temp_t0_2 + 8;
                        temp_a1_3 = temp_t2 * 0x64;
                        temp_v1_15 = *(&D_8011F350 + temp_a1_3);
                        temp_a3 = var_a3 * 0x50;
                        temp_a2_2 = var_t5 * 0x18;
                        M2C_FIELD(temp_t0_2, s32 *, 0) = (s32) (((((temp_s4 + M2C_FIELD(temp_v1_15, u16 *, 0xA) + temp_a3) * 4) & 0xFFF) << 0xC) | ((((M2C_FIELD(temp_v1_15, u16 *, 0xC) + (temp_a2_2 + 0x18)) * 4) & 0xFFF) | 0xE4000000));
                        temp_v0_3 = *(&D_8011F350 + temp_a1_3);
                        M2C_FIELD(temp_t0_2, M2C_UNK **, 4) = (M2C_UNK *) (((((M2C_FIELD(temp_v0_3, u16 *, 0xA) + temp_a3) * 4) & 0xFFF) << 0xC) | (((M2C_FIELD(temp_v0_3, u16 *, 0xC) + temp_a2_2) * 4) & 0xFFF));
                        temp_v1_16 = *arg0;
                        *arg0 = temp_v1_16 + 8;
                        M2C_FIELD(temp_v1_16, s32 *, 0) = 0xB4000000;
                        M2C_FIELD(temp_v1_16, M2C_UNK **, 4) = NULL;
                        temp_v1_17 = *arg0;
                        *arg0 = temp_v1_17 + 8;
                        M2C_FIELD(temp_v1_17, s32 *, 0) = 0xB3000000;
                        M2C_FIELD(temp_v1_17, M2C_UNK **, 4) = (M2C_UNK *)0x04000400;
                    }
                    temp_v1_12 = var_t5 + 1;
                    var_t5 = temp_v1_12;
                }
if (temp_v1_12 < temp_s3) goto __repair_rows;
            }
            var_a3_2 = 0;
            if ((temp_s5 << 0x10) != 0) {
                if ((temp_fp << 0x10) > 0) {
                    temp_t1_2 = (arg1 & 0xFFFF) * 0x64;
                    temp_t0_3 = var_t5 * 0x18;
                    do {
                        temp_a2_3 = *arg0;
                        *arg0 = temp_a2_3 + 8;
                        temp_a1_4 = *(&D_8011F350 + temp_t1_2);
                        temp_a0_4 = var_a3_2 * 0x50;
                        M2C_FIELD(temp_a2_3, s32 *, 0) = (s32) (((((M2C_FIELD(temp_a1_4, u16 *, 0xA) + (temp_a0_4 + 0x50)) * 4) & 0xFFF) << 0xC) | ((((temp_s5 + M2C_FIELD(temp_a1_4, u16 *, 0xC) + temp_t0_3) * 4) & 0xFFF) | 0xE4000000));
                        temp_v0_5 = *(&D_8011F350 + temp_t1_2);
                        M2C_FIELD(temp_a2_3, M2C_UNK **, 4) = (M2C_UNK *) (((((M2C_FIELD(temp_v0_5, u16 *, 0xA) + temp_a0_4) * 4) & 0xFFF) << 0xC) | (((M2C_FIELD(temp_v0_5, u16 *, 0xC) + temp_t0_3) * 4) & 0xFFF));
                        temp_v1_18 = *arg0;
                        *arg0 = temp_v1_18 + 8;
                        M2C_FIELD(temp_v1_18, s32 *, 0) = 0xB4000000;
                        M2C_FIELD(temp_v1_18, M2C_UNK **, 4) = NULL;
                        temp_v1_19 = *arg0;
                        *arg0 = temp_v1_19 + 8;
                        M2C_FIELD(temp_v1_19, s32 *, 0) = 0xB3000000;
                        temp_v0_4 = var_a3_2 + 1;
                        var_a3_2 = temp_v0_4;
                        M2C_FIELD(temp_v1_19, M2C_UNK **, 4) = (M2C_UNK *)0x04000400;
                    } while (temp_v0_4 < temp_fp);
                }
                if (temp_s4 != 0) {
                    temp_t0_4 = *arg0;
                    *arg0 = temp_t0_4 + 8;
                    temp_a1_5 = (arg1 & 0xFFFF) * 0x64;
                    temp_a2_4 = *(&D_8011F350 + temp_a1_5);
                    temp_a3_2 = var_a3_2 * 0x50;
                    temp_a2_5 = var_t5 * 0x18;
                    M2C_FIELD(temp_t0_4, s32 *, 0) = (s32) (((((temp_s4 + M2C_FIELD(temp_a2_4, u16 *, 0xA) + temp_a3_2) * 4) & 0xFFF) << 0xC) | ((((temp_s5 + M2C_FIELD(temp_a2_4, u16 *, 0xC) + temp_a2_5) * 4) & 0xFFF) | 0xE4000000));
                    temp_v0_6 = *(&D_8011F350 + temp_a1_5);
                    M2C_FIELD(temp_t0_4, M2C_UNK **, 4) = (M2C_UNK *) (((((M2C_FIELD(temp_v0_6, u16 *, 0xA) + temp_a3_2) * 4) & 0xFFF) << 0xC) | (((M2C_FIELD(temp_v0_6, u16 *, 0xC) + temp_a2_5) * 4) & 0xFFF));
                    temp_v1_20 = *arg0;
                    *arg0 = temp_v1_20 + 8;
                    M2C_FIELD(temp_v1_20, s32 *, 0) = 0xB4000000;
                    M2C_FIELD(temp_v1_20, M2C_UNK **, 4) = NULL;
                    temp_v1_21 = *arg0;
                    *arg0 = temp_v1_21 + 8;
                    M2C_FIELD(temp_v1_21, s32 *, 0) = 0xB3000000;
                    M2C_FIELD(temp_v1_21, M2C_UNK **, 4) = (M2C_UNK *)0x04000400;
                }
            }
            temp_v0_7 = *arg0;
            *arg0 = temp_v0_7 + 8;
            M2C_FIELD(temp_v0_7, s32 *, 0) = 0xE7000000;
            M2C_FIELD(temp_v0_7, M2C_UNK **, 4) = NULL;
        }
    }
}
