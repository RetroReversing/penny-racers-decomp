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

s32 func_800DE41C(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32, s32, M2C_UNK *, M2C_UNK *, s32, s32, s32, s32, s32, s32, f32, f32, f32); /* extern */
extern M2C_UNK D_8011F2F0;
extern M2C_UNK D_8011F2FB;
extern M2C_UNK D_8011F32E;
extern M2C_UNK D_8011F334;
extern M2C_UNK D_8011F338;
extern M2C_UNK D_8011F33C;
extern f64 D_80183950;
extern f64 D_80183958;
extern f64 D_80183960;
extern M2C_UNK D_80189970;
extern M2C_UNK D_80189990;
extern M2C_UNK D_8018B530;
extern M2C_UNK D_8018B540;
extern M2C_UNK D_8018B550;
extern M2C_UNK D_8018B560;
extern M2C_UNK D_8018D66A;
extern M2C_UNK D_8022A770;
extern M2C_UNK func_8015C838;
extern M2C_UNK func_8015C8A4;

void func_8015BD20(s32 arg0) {
    f32 sp48;
    f32 sp4C;
    f32 sp50;
    f32 sp58;
    f32 sp5C;
    f32 sp60;
    f32 temp_fv0;
    f32 temp_fv0_2;
    f32 temp_fv0_3;
    f32 temp_fv0_4;
    f32 temp_fv0_5;
    f32 temp_fv1;
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a2;
    s32 temp_a2_2;
    s32 temp_a3;
    s32 temp_t1;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v1;
    s32 temp_v1_3;
    s32 var_a0;
    s32 var_t0;
    s32 var_v0;
    s32 var_v1;
    s32 var_v1_2;
    u16 temp_v1_2;
    u8 temp_s1;
    void *temp_a3_2;
    void *temp_a3_3;
    void *temp_a3_4;
    void *temp_a3_5;
    void *temp_a3_6;
    void *temp_a3_7;
    void *temp_s0;
    void *temp_t0;
    void *temp_t0_10;
    void *temp_t0_11;
    void *temp_t0_12;
    void *temp_t0_13;
    void *temp_t0_14;
    void *temp_t0_15;
    void *temp_t0_16;
    void *temp_t0_17;
    void *temp_t0_18;
    void *temp_t0_2;
    void *temp_t0_3;
    void *temp_t0_4;
    void *temp_t0_5;
    void *temp_t0_6;
    void *temp_t0_7;
    void *temp_t0_8;
    void *temp_t0_9;

    temp_v1 = (arg0 & 0xFFFF) * 0x64;
    temp_s1 = *(&D_8011F2F0 + temp_v1);
    temp_v1_2 = *(&D_8011F32E + temp_v1);
    temp_s0 = ((temp_s1 & 0xFF) * 0x8F0) + &D_8022A770;
    switch (temp_v1_2) {                            /* irregular */
    case 0:
        temp_a2 = temp_s1 << 6;
        temp_t0 = temp_a2 + &D_80189970;
        M2C_FIELD(temp_t0, s16 *, 6) = 0;
        M2C_FIELD(temp_t0, s16 *, 8) = 0;
        M2C_FIELD(temp_t0, s16 *, 0xA) = 0;
        M2C_FIELD(temp_t0, s8 *, 0xC) = 0;
        M2C_FIELD(temp_t0, s8 *, 0xD) = 0x7F;
        M2C_FIELD(temp_t0, s8 *, 0xE) = 0;
        M2C_FIELD(temp_t0, s8 *, 0xF) = 0xFF;
        temp_t0_2 = temp_a2 + (&D_80189970 + 0x10);
        M2C_FIELD(temp_t0_2, s16 *, 6) = 0;
        M2C_FIELD(temp_t0_2, s16 *, 8) = 0x800;
        M2C_FIELD(temp_t0_2, s16 *, 0xA) = 0;
        M2C_FIELD(temp_t0_2, s8 *, 0xC) = 0;
        M2C_FIELD(temp_t0_2, s8 *, 0xD) = 0x7F;
        M2C_FIELD(temp_t0_2, s8 *, 0xE) = 0;
        M2C_FIELD(temp_t0_2, s8 *, 0xF) = 0xFF;
        temp_t0_3 = temp_a2 + (&D_80189970 + 0x20);
        M2C_FIELD(temp_t0_3, s16 *, 6) = 0;
        M2C_FIELD(temp_t0_3, s16 *, 8) = 0;
        M2C_FIELD(temp_t0_3, s16 *, 0xA) = 0x40;
        M2C_FIELD(temp_t0_3, s8 *, 0xC) = 0;
        M2C_FIELD(temp_t0_3, s8 *, 0xD) = 0x7F;
        M2C_FIELD(temp_t0_3, s8 *, 0xE) = 0;
        M2C_FIELD(temp_t0_3, s8 *, 0xF) = 0xFF;
        temp_t0_4 = temp_a2 + (&D_80189970 + 0x30);
        M2C_FIELD(temp_t0_4, s16 *, 6) = 0;
        M2C_FIELD(temp_t0_4, s16 *, 8) = 0x800;
        M2C_FIELD(temp_t0_4, s16 *, 0xA) = 0x40;
        M2C_FIELD(temp_t0_4, s8 *, 0xC) = 0;
        M2C_FIELD(temp_t0_4, s8 *, 0xD) = 0x7F;
        M2C_FIELD(temp_t0_4, s8 *, 0xE) = 0;
        M2C_FIELD(temp_t0_4, s8 *, 0xF) = 0xFF;
        var_a0 = 0;
        temp_a3 = temp_s1 << 8;
        __repair_rows: {
            temp_v0 = var_a0 << 6;
            temp_t0_5 = temp_a3 + (temp_v0 + &D_8018B530);
            M2C_FIELD(temp_t0_5, s16 *, 6) = 0;
            M2C_FIELD(temp_t0_5, s16 *, 8) = 0;
            M2C_FIELD(temp_t0_5, s16 *, 0xA) = 0;
            M2C_FIELD(temp_t0_5, s8 *, 0xC) = 0;
            M2C_FIELD(temp_t0_5, s8 *, 0xD) = 0x7F;
            M2C_FIELD(temp_t0_5, s8 *, 0xE) = 0;
            M2C_FIELD(temp_t0_5, s8 *, 0xF) = 0xFF;
            temp_t0_6 = temp_a3 + &D_8018B540 + temp_v0;
            M2C_FIELD(temp_t0_6, s16 *, 6) = 0;
            M2C_FIELD(temp_t0_6, s16 *, 8) = 0x800;
            M2C_FIELD(temp_t0_6, s16 *, 0xA) = 0;
            M2C_FIELD(temp_t0_6, s8 *, 0xC) = 0;
            M2C_FIELD(temp_t0_6, s8 *, 0xD) = 0x7F;
            M2C_FIELD(temp_t0_6, s8 *, 0xE) = 0;
            M2C_FIELD(temp_t0_6, s8 *, 0xF) = 0xFF;
            temp_t0_7 = temp_a3 + &D_8018B550 + temp_v0;
            M2C_FIELD(temp_t0_7, s16 *, 6) = 0;
            M2C_FIELD(temp_t0_7, s16 *, 8) = 0;
            M2C_FIELD(temp_t0_7, s16 *, 0xA) = 0x40;
            M2C_FIELD(temp_t0_7, s8 *, 0xC) = 0;
            M2C_FIELD(temp_t0_7, s8 *, 0xD) = 0x7F;
            M2C_FIELD(temp_t0_7, s8 *, 0xE) = 0;
            M2C_FIELD(temp_t0_7, s8 *, 0xF) = 0xFF;
            temp_t0_8 = temp_a3 + &D_8018B560 + temp_v0;
            M2C_FIELD(temp_t0_8, s16 *, 6) = 0;
            M2C_FIELD(temp_t0_8, s16 *, 8) = 0x800;
            M2C_FIELD(temp_t0_8, s16 *, 0xA) = 0x40;
            M2C_FIELD(temp_t0_8, s8 *, 0xC) = 0;
            M2C_FIELD(temp_t0_8, s8 *, 0xD) = 0x7F;
            M2C_FIELD(temp_t0_8, s8 *, 0xE) = 0;
            var_a0 += 1;
            M2C_FIELD(temp_t0_8, s8 *, 0xF) = 0xFF;
        }
if (var_a0 < 4) goto __repair_rows;
        *(&D_8018D66A + (temp_s1 & 0xFF)) = 0;
        *(&D_8011F32E + ((arg0 & 0xFFFF) * 0x64)) = 1;
        return;
    case 1:
        var_v1 = arg0 & 0xFFFF;
        if (!(D_80183950 < (f64) M2C_FIELD(temp_s0, f32 *, 0x864)) || (var_v0 = var_v1 * 2, (*(&D_8011F334 + (var_v1 * 0x64)) != 0.0f))) {
            if (M2C_FIELD(temp_s0, u8 *, 0x860) != 0) {
                temp_a0 = temp_s1 << 6;
                if (M2C_FIELD(temp_s0, u8 *, 0x8A1) != 4) {
                    temp_fv1 = M2C_FIELD(temp_s0, f32 *, 0x72C);
                    sp48 = temp_fv1;
                    temp_fv0 = M2C_FIELD(temp_s0, f32 *, 0x730);
                    sp4C = temp_fv0;
                    temp_fv0_2 = M2C_FIELD(temp_s0, f32 *, 0x734);
                    sp50 = temp_fv0_2;
                    temp_fv0_3 = M2C_FIELD(temp_s0, f32 *, 0x738);
                    sp58 = temp_fv0_3;
                    temp_fv0_4 = M2C_FIELD(temp_s0, f32 *, 0x73C);
                    sp5C = temp_fv0_4;
                    temp_fv0_5 = M2C_FIELD(temp_s0, f32 *, 0x740);
                    sp60 = temp_fv0_5;
                    temp_t0_9 = temp_a0 + &D_80189970;
                    M2C_FIELD(temp_t0_9, s16 *, 0) = (s16) (s32) temp_fv1;
                    M2C_FIELD(temp_t0_9, s16 *, 2) = (s16) (s32) (temp_fv0 + 1.0f);
                    M2C_FIELD(temp_t0_9, s16 *, 4) = (s16) (s32) temp_fv0_2;
                    temp_t0_10 = temp_a0 + (&D_80189970 + 0x10);
                    M2C_FIELD(temp_t0_10, s16 *, 0) = (s16) (s32) temp_fv0_3;
                    M2C_FIELD(temp_t0_10, s16 *, 2) = (s16) (s32) (temp_fv0_4 + 1.0f);
                    M2C_FIELD(temp_t0_10, s16 *, 4) = (s16) (s32) temp_fv0_5;
                    var_v1_2 = arg0 & 0xFFFF;
                    if (*(&D_8011F334 + (var_v1_2 * 0x64)) == 0.0f) {
                        temp_t0_11 = temp_a0 + (&D_80189970 + 0x20);
                        M2C_FIELD(temp_t0_11, s16 *, 0) = (s16) (s32) sp48;
                        M2C_FIELD(temp_t0_11, s16 *, 2) = (s16) (s32) (sp4C + 1.0f);
                        M2C_FIELD(temp_t0_11, s16 *, 4) = (s16) (s32) sp50;
                        temp_t0_12 = temp_a0 + (&D_80189970 + 0x30);
                        M2C_FIELD(temp_t0_12, s16 *, 0) = (s16) (s32) sp58;
                        M2C_FIELD(temp_t0_12, s16 *, 2) = (s16) (s32) (sp5C + 1.0f);
                        M2C_FIELD(temp_t0_12, s16 *, 4) = (s16) (s32) sp60;
                        var_v1_2 = arg0 & 0xFFFF;
                    }
                    if ((*(&D_8011F334 + (var_v1_2 * 0x64)) != 10.0f) && !(D_80183958 < (f64) M2C_FIELD(temp_s0, f32 *, 0x864))) {
                        if ((M2C_FIELD(temp_s0, u8 *, 0x860) == 0) || (M2C_FIELD(temp_s0, u8 *, 0x8A1) == 4)) {
                            goto block_17;
                        }
                        temp_v0_2 = (arg0 & 0xFFFF) * 0x64;
                        *(&D_8011F334 + temp_v0_2) = *(&D_8011F334 + temp_v0_2) + 1.0f;
                        return;
                    }
block_17:
                    temp_v1_3 = (func_800DE41C(0, 0, 3, 0, 0x52, 0xAA, 0, &func_8015C838, &func_8015C8A4, 0, 0, 0, 0, 0, 0, 1.0f, 1.0f, 1.0f) & 0xFFFF) * 0x64;
                    *(&D_8011F2FB + temp_v1_3) = 0xE;
                    temp_t1 = temp_s1 & 0xFF;
                    *(&D_8011F334 + temp_v1_3) = (f32) temp_t1;
                    *(&D_8011F338 + temp_v1_3) = (f32) *(&D_8018D66A + temp_t1);
                    *(&D_8011F33C + temp_v1_3) = M2C_FIELD(temp_s0, f32 *, 0x864);
                    temp_t0_13 = (temp_t1 << 8) + ((*(&D_8018D66A + temp_t1) << 6) + &D_8018B530);
                    temp_a2_2 = temp_t1 << 6;
                    temp_a3_2 = temp_a2_2 + &D_80189970;
                    M2C_FIELD(temp_t0_13, u16 *, 0) = (u16) M2C_FIELD(temp_a3_2, u16 *, 0);
                    M2C_FIELD(temp_t0_13, u16 *, 2) = (u16) M2C_FIELD(temp_a3_2, u16 *, 2);
                    M2C_FIELD(temp_t0_13, u16 *, 4) = (u16) M2C_FIELD(temp_a3_2, u16 *, 4);
                    temp_t0_14 = (temp_t1 << 8) + (&D_8018B530 + 0x10) + (*(&D_8018D66A + temp_t1) << 6);
                    temp_a3_3 = temp_a2_2 + (&D_80189970 + 0x10);
                    M2C_FIELD(temp_t0_14, u16 *, 0) = (u16) M2C_FIELD(temp_a3_3, u16 *, 0);
                    M2C_FIELD(temp_t0_14, u16 *, 2) = (u16) M2C_FIELD(temp_a3_3, u16 *, 2);
                    M2C_FIELD(temp_t0_14, u16 *, 4) = (u16) M2C_FIELD(temp_a3_3, u16 *, 4);
                    temp_t0_15 = (temp_t1 << 8) + (&D_8018B530 + 0x20) + (*(&D_8018D66A + temp_t1) << 6);
                    temp_a3_4 = temp_a2_2 + (&D_80189970 + 0x20);
                    M2C_FIELD(temp_t0_15, u16 *, 0) = (u16) M2C_FIELD(temp_a3_4, u16 *, 0);
                    M2C_FIELD(temp_t0_15, u16 *, 2) = (u16) M2C_FIELD(temp_a3_4, u16 *, 2);
                    M2C_FIELD(temp_t0_15, u16 *, 4) = (u16) M2C_FIELD(temp_a3_4, u16 *, 4);
                    temp_t0_16 = (temp_t1 << 8) + (&D_8018B530 + 0x30) + (*(&D_8018D66A + temp_t1) << 6);
                    temp_a3_5 = temp_a2_2 + (&D_80189970 + 0x30);
                    M2C_FIELD(temp_t0_16, u16 *, 0) = (u16) M2C_FIELD(temp_a3_5, u16 *, 0);
                    M2C_FIELD(temp_t0_16, u16 *, 2) = (u16) M2C_FIELD(temp_a3_5, u16 *, 2);
                    M2C_FIELD(temp_t0_16, u16 *, 4) = (u16) M2C_FIELD(temp_a3_5, u16 *, 4);
                    if ((u8) *(&D_8018D66A + temp_t1) < 3U) {
                        *(&D_8018D66A + temp_t1) = *(&D_8018D66A + temp_t1) + 1;
                        var_t0 = temp_s1 & 0xFF;
                    } else {
                        *(&D_8018D66A + (temp_s1 & 0xFF)) = 0;
                        var_t0 = temp_s1 & 0xFF;
                    }
                    temp_t0_17 = (var_t0 << 6) + &D_80189990;
                    temp_a0_2 = var_t0 << 6;
                    temp_a3_6 = temp_a0_2 + (&D_80189990 - 0x20);
                    M2C_FIELD(temp_t0_17, u16 *, 0) = (u16) M2C_FIELD(temp_a3_6, u16 *, 0);
                    M2C_FIELD(temp_t0_17, u16 *, 2) = (u16) M2C_FIELD(temp_a3_6, u16 *, 2);
                    M2C_FIELD(temp_t0_17, u16 *, 4) = (u16) M2C_FIELD(temp_a3_6, u16 *, 4);
                    temp_t0_18 = temp_a0_2 + (&D_80189990 + 0x10);
                    temp_a3_7 = temp_a0_2 + (&D_80189990 - 0x10);
                    M2C_FIELD(temp_t0_18, u16 *, 0) = (u16) M2C_FIELD(temp_a3_7, u16 *, 0);
                    M2C_FIELD(temp_t0_18, u16 *, 2) = (u16) M2C_FIELD(temp_a3_7, u16 *, 2);
                    M2C_FIELD(temp_t0_18, u16 *, 4) = (u16) M2C_FIELD(temp_a3_7, u16 *, 4);
                    if (D_80183960 < (f64) M2C_FIELD(temp_s0, f32 *, 0x864)) {
                        goto block_21;
                    }
                    *(&D_8011F334 + ((arg0 & 0xFFFF) * 0x64)) = 1.0f;
                    return;
                }
            }
block_21:
            var_v1 = arg0 & 0xFFFF;
            var_v0 = var_v1 * 2;
            goto block_22;
        }
block_22:
        *(&D_8011F334 + ((((var_v0 + var_v1) * 8) + var_v1) * 4)) = 0;
        return;
    }
}
