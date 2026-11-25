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

M2C_UNK func_800DE41C(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32, s32, M2C_UNK *, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32); /* extern */
M2C_UNK func_801D651C(M2C_UNK, M2C_UNK);            /* extern */
extern M2C_UNK D_8006FB14;
extern M2C_UNK D_800DB1B8;
extern M2C_UNK D_8011F2FD;
extern M2C_UNK D_8011F308;
extern M2C_UNK D_8011F30C;
extern M2C_UNK D_8011F32E;
extern M2C_UNK D_8011F330;
extern f64 D_80182F08;
extern f64 D_80182F10;
extern M2C_UNK D_80183B48;
extern M2C_UNK D_8022AD64;
extern M2C_UNK D_8022AD66;
extern M2C_UNK D_8022AD68;
extern M2C_UNK D_8022AD9C;
extern M2C_UNK func_8013F884;

void func_8013095C(s32 arg0) {
    f32 temp_fv0;
    f32 temp_fv1;
    f32 var_fv0;
    s16 var_a1;
    s16 var_a1_2;
    s16 var_a1_3;
    s16 var_v1_2;
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 temp_v0_5;
    s32 var_a1_4;
    s32 var_a2;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_3;
    s32 var_v0_4;
    s32 var_v0_5;
    s32 var_v1;
    u16 temp_v1;
    void *temp_v1_2;
    void *temp_v1_3;

    temp_v1 = *(&D_8011F32E + ((arg0 & 0xFFFF) * 0x64));
    switch (temp_v1) {                              /* switch 1 */
        M2C_FIELD(&D_80183B48, u8 *, 0) = 1U;
        M2C_FIELD(&D_80183B48, u8 *, 1) = 0x3CU;
        M2C_FIELD(&D_80183B48, u8 *, 2) = 0U;
        temp_v0 = arg0 & 0xFFFF;
        if (M2C_FIELD(&D_800DB1B8, s16 *, 0x2108) < 3) {
            var_fv0 = 40.0f;
            var_v1 = temp_v0 * 0x64;
        } else {
            var_v1 = temp_v0 * 0x64;
            var_fv0 = 140.0f;
        }
        *(&D_8011F308 + var_v1) = var_fv0;
        temp_v0_2 = (arg0 & 0xFFFF) * 0x64;
        *(&D_8011F30C + temp_v0_2) = -160.0f;
        M2C_FIELD(&D_80183B48, u8 *, 3) = 0x28U;
        *(&D_8011F32E + temp_v0_2) = 6;
        *(&D_8011F330 + temp_v0_2) = 1;
        return;
        M2C_FIELD(&D_80183B48, u8 *, 0) = 2U;
        M2C_FIELD(&D_80183B48, u8 *, 1) = 0x3CU;
        M2C_FIELD(&D_80183B48, u8 *, 2) = 0U;
        var_v0 = (arg0 & 0xFFFF) * 0x64;
        *(&D_8011F32E + var_v0) = 0xA;
        var_v1_2 = 2;
block_9:
        *(&D_8011F330 + var_v0) = var_v1_2;
        func_801D651C(7, 0x42);
        return;
        M2C_FIELD(&D_80183B48, u8 *, 0) = 3U;
        M2C_FIELD(&D_80183B48, u8 *, 1) = 0x3CU;
        M2C_FIELD(&D_80183B48, u8 *, 2) = 0U;
        var_v0 = (arg0 & 0xFFFF) * 0x64;
        *(&D_8011F32E + var_v0) = 0xA;
        var_v1_2 = 3;
        goto block_9;
        M2C_FIELD(&D_80183B48, u8 *, 0) = 4U;
        M2C_FIELD(&D_80183B48, u8 *, 1) = 0x3CU;
        M2C_FIELD(&D_80183B48, u8 *, 2) = 0U;
        var_v0 = (arg0 & 0xFFFF) * 0x64;
        *(&D_8011F32E + var_v0) = 0xA;
        var_v1_2 = 4;
        goto block_9;
        M2C_FIELD(&D_80183B48, u8 *, 0) = 7U;
        M2C_FIELD(&D_80183B48, u8 *, 1) = 0x3CU;
        M2C_FIELD(&D_80183B48, u8 *, 2) = 0U;
        temp_v0_3 = (arg0 & 0xFFFF) * 0x64;
        *(&D_8011F32E + temp_v0_3) = 0xA;
        *(&D_8011F330 + temp_v0_3) = 5;
        M2C_FIELD(&D_8006FB14, s8 *, 4) = 1;
        func_801D651C(7, 0x43);
        func_800DE41C(0, 0, 3, 0, 0x7F, 0, 0, &func_8013F884, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
        return;
        *(&D_8011F2FD + ((arg0 & 0xFFFF) * 0x64)) = 2;
        return;
        temp_a0 = (arg0 & 0xFFFF) * 0x64;
        temp_fv1 = *(&D_8011F30C + temp_a0);
        *(&D_8011F30C + temp_a0) = (f32) ((f64) temp_fv1 + ((f64) ((f32) M2C_FIELD(&D_80183B48, u8 *, 3) - temp_fv1) * D_80182F08));
        M2C_FIELD(&D_80183B48, u8 *, 2) = (u8) (M2C_FIELD(&D_80183B48, u8 *, 2) + 1);
        if (M2C_FIELD(&D_80183B48, u8 *, 1) == M2C_FIELD(&D_80183B48, u8 *, 2)) {
            *(&D_8011F32E + temp_a0) = (s16) M2C_FIELD(&D_80183B48, u8 *, 0);
            return;
        }
        return;
        temp_a0_2 = (arg0 & 0xFFFF) * 0x64;
        temp_fv0 = *(&D_8011F30C + temp_a0_2);
        *(&D_8011F30C + temp_a0_2) = (f32) ((f64) temp_fv0 - ((f64) (temp_fv0 + 160.0f) * D_80182F10));
        M2C_FIELD(&D_80183B48, u8 *, 2) = (u8) (M2C_FIELD(&D_80183B48, u8 *, 2) + 1);
        if (M2C_FIELD(&D_80183B48, u8 *, 1) == M2C_FIELD(&D_80183B48, u8 *, 2)) {
            *(&D_8011F32E + temp_a0_2) = 5;
            return;
        }
        break;
        M2C_FIELD(&D_80183B48, u8 *, 2) = (u8) (M2C_FIELD(&D_80183B48, u8 *, 2) + 1);
        if (M2C_FIELD(&D_80183B48, u8 *, 0) == 7) {
            if (M2C_FIELD(&D_800DB1B8, s16 *, 0x2108) != 2) {
                if (M2C_FIELD(&D_800DB1B8, s16 *, 0x2108) < 3) {
                    var_a1 = 0;
                    if (M2C_FIELD(&D_800DB1B8, s16 *, 0x2108) != 1) {

                    } else {
                        var_v0_2 = 0 * 4;
                        do {
                            if (M2C_FIELD(&D_80183B48, u8 *, 2) == (var_v0_2 + var_a1 + 5)) {
                                temp_v1_2 = (var_a1 * 0x38) + &D_8022AD64;
                                M2C_FIELD(temp_v1_2, s16 *, 0) = var_a1;
                                if (var_a1 == 0) {
                                    M2C_FIELD(temp_v1_2, s16 *, 2) = 6;
                                    M2C_FIELD(temp_v1_2, s16 *, 4) = 2;
                                }
                            }
                            var_a1 += 1;
                            var_v0_2 = var_a1 * 4;
                        } while (var_a1 < 2);
                    }
                } else if (M2C_FIELD(&D_800DB1B8, s16 *, 0x2108) != 3) {
                    var_a1_2 = 0;
                    if (M2C_FIELD(&D_800DB1B8, s16 *, 0x2108) != 4) {

                    } else {
                        var_v0_3 = 0 * 4;
                        do {
                            if (M2C_FIELD(&D_80183B48, u8 *, 2) == (var_v0_3 + 5)) {
                                temp_v0_4 = var_a1_2 * 0x8F0;
                                *(&D_8022AD64 + temp_v0_4) = -1;
                                *(&D_8022AD66 + temp_v0_4) = -1;
                                *(&D_8022AD68 + temp_v0_4) = 0;
                                *(&D_8022AD9C + temp_v0_4) = var_a1_2;
                            }
                            var_a1_2 += 1;
                            var_v0_3 = var_a1_2 * 4;
                        } while (var_a1_2 < 4);
                    }
                } else {
                    var_a1_3 = 0;
                    var_v0_4 = 0 * 4;
                    do {
                        if (M2C_FIELD(&D_80183B48, u8 *, 2) == (var_v0_4 + 5)) {
                            temp_v0_5 = var_a1_3 * 0x8F0;
                            *(&D_8022AD64 + temp_v0_5) = -1;
                            *(&D_8022AD66 + temp_v0_5) = -1;
                            *(&D_8022AD68 + temp_v0_5) = 0;
                            *(&D_8022AD9C + temp_v0_5) = var_a1_3;
                        }
                        var_a1_3 += 1;
                        var_v0_4 = var_a1_3 * 4;
                    } while (var_a1_3 < 3);
                }
            } else {
                var_a1_4 = 0;
                do {
                    var_a2 = 0;
                    var_v0_5 = 0 * 2;
loop_32:
                    if (M2C_FIELD(&D_80183B48, u8 *, 2) == ((var_a1_4 * 6) + var_v0_5 + 5)) {
                        temp_v1_3 = (var_a1_4 * 0x8F0) + &D_8022AD64 + (var_a2 * 0x38);
                        M2C_FIELD(temp_v1_3, s16 *, 0) = (s16) ((var_a1_4 * 2) + var_a2);
                        if (var_a2 == 0) {
                            switch (var_a1_4) {     /* switch 2; irregular */
                                M2C_FIELD(temp_v1_3, s16 *, 2) = 6;
                                break;
                                M2C_FIELD(temp_v1_3, s16 *, 2) = 5;
                                break;
                                M2C_FIELD(temp_v1_3, s16 *, 2) = 0;
                                break;
                            }
                            M2C_FIELD(temp_v1_3, s16 *, 4) = 2;
                        }
                    }
                    var_a2 += 1;
                    var_v0_5 = var_a2 * 2;
                    if (var_a2 < 2) {
                        goto loop_32;
                    }
                    var_a1_4 += 1;
                } while (var_a1_4 < 2);
            }
        }
        if (M2C_FIELD(&D_80183B48, u8 *, 1) == M2C_FIELD(&D_80183B48, u8 *, 2)) {
            *(&D_8011F32E + ((arg0 & 0xFFFF) * 0x64)) = (s16) M2C_FIELD(&D_80183B48, u8 *, 0);
        }
        break;
    }
}
