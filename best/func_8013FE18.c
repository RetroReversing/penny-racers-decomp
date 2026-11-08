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

M2C_UNK func_800DF1E0(u16, void *);                 /* extern */
s32 func_8013E364();                                /* extern */
M2C_UNK func_8013F44C(u16, void *);                 /* extern */
M2C_UNK func_801D7028(u16, M2C_UNK);                /* extern */
M2C_UNK func_8022FE50(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
extern u16 D_8006F9E8;
extern M2C_UNK D_800DA26A;
extern M2C_UNK D_8011F2F0;
extern M2C_UNK D_8011F304;
extern M2C_UNK D_8011F32E;
extern M2C_UNK D_8011F334;
extern M2C_UNK D_8011F33C;
extern M2C_UNK D_8011F340;
extern void *D_8018A280;
extern s32 D_8018D674;
extern M2C_UNK D_8018D6C0;
extern s16 D_8021E1A6;
extern M2C_UNK D_8022A772;
extern M2C_UNK D_8022AD5C;
extern M2C_UNK D_8022DD10;
extern u16 D_8022DD12;
extern M2C_UNK D_80237980;
extern M2C_UNK D_80322A4C;

void func_8013FE18(s32 arg0) {
    f32 temp_fv1;
    s32 temp_a0;
    s32 temp_v0;
    s32 var_v1;
    s8 var_v1_2;
    u16 temp_v1;
    void *temp_v0_2;
    void *temp_v0_3;

    if ((D_8006F9E8 & 0xFFFF) != 5) {
        temp_v1 = *(&D_8011F32E + ((arg0 & 0xFFFF) * 0x64));
        switch (temp_v1) {                          /* irregular */
        case 0:
            temp_v0 = func_8013E364();
            if ((temp_v0 & 0xFFFF) != 0xFFFF) {
                M2C_FIELD(&D_800DA26A, s16 *, 0x8C6) = 0;
                M2C_FIELD(&D_800DA26A, s16 *, 0x8C8) = 0x37;
                M2C_FIELD(&D_800DA26A, s16 *, 0x8CA) = 0xA;
                M2C_FIELD(&D_800DA26A, s16 *, 0x8CC) = 9;
                M2C_FIELD(&D_800DA26A, s16 *, 0x8CE) = 7;
                M2C_FIELD(&D_800DA26A, s16 *, 0x8D0) = 0;
                M2C_FIELD(&D_800DA26A, s16 *, 0x8D2) = 0;
                M2C_FIELD(&D_800DA26A, s16 *, 0x8D4) = 0;
                M2C_FIELD(&D_800DA26A, s16 *, 0x8D6) = 0;
                M2C_FIELD(&D_800DA26A, s32 *, 0x8DA) = 0;
                M2C_FIELD(&D_800DA26A, s32 *, 0x8DE) = 0;
                M2C_FIELD(&D_800DA26A, s32 *, 0x8E2) = 0;
                M2C_FIELD(&D_800DA26A, s32 *, 0x8E6) = 0;
                M2C_FIELD(&D_800DA26A, s8 *, 0x8EA) = 0;
                func_8022FE50(6, 6, 6, 1);
                if (D_8021E1A6 != 1) {
                    if (D_8021E1A6 >= 2) {
                        if ((D_8021E1A6 == 2) || (D_8021E1A6 == 3)) {
                            goto block_13;
                        }
                        goto block_14;
                    }
                    if (D_8021E1A6 != 0) {
                        M2C_FIELD(&D_8022DD10, s32 *, 0x5EC) = 0;
                    } else {
                        goto block_13;
                    }
                } else {
block_13:
                    M2C_FIELD(&D_8022DD10, M2C_UNK **, 0x8E0) = &D_80322A4C;
block_14:
                    M2C_FIELD(&D_8022DD10, s32 *, 0x5EC) = 0;
                }
                M2C_FIELD(*(&D_8011F340 + (*(&D_8011F304 + (M2C_FIELD(&D_8022DD10, u16 *, 2) * 0x64)) * 0x64)), M2C_UNK **, 4) = &D_80237980;
                func_800DF1E0(*(&D_8011F304 + (M2C_FIELD(&D_8022DD10, u16 *, 2) * 0x64)), &D_8022DD10 + 0x210);
                temp_fv1 = *(&D_8011F334 + (M2C_FIELD(&D_8022DD10, u16 *, 2) * 0x64));
                if (temp_fv1 >= 2.1474836e9f) {
                    var_v1 = ((s32) (temp_fv1 - 2.1474836e9f) | 0x80000000) & 0xFFFF;
                } else {
                    var_v1 = (s32) temp_fv1 & 0xFFFF;
                }
                *(&D_8011F33C + (var_v1 * 0x64)) = 0.4f;
                M2C_FIELD(*(&D_8011F340 + ((M2C_FIELD(&D_8022DD10, u16 *, 2) + 5) * 0x64)), s32 *, 4) = 0;
                M2C_FIELD(*(&D_8011F340 + ((M2C_FIELD(&D_8022DD10, u16 *, 2) + 6) * 0x64)), s32 *, 4) = 0;
                M2C_FIELD(*(&D_8011F340 + ((M2C_FIELD(&D_8022DD10, u16 *, 2) + 7) * 0x64)), s32 *, 4) = 0;
                M2C_FIELD(&D_8022DD10, s16 *, 0x8E4) = 0x27;
                M2C_FIELD(&D_8022DD10, s16 *, 0x8E6) = 0x26;
                M2C_FIELD(&D_8022DD10, s16 *, 0x8E8) = 0;
                temp_v0_2 = (M2C_FIELD(&D_8022DD10, u16 *, 2) * 0x64) + &D_8011F2F0;
                M2C_FIELD(temp_v0_2, f32 *, 0x30) = (f32) (2.0f * M2C_FIELD(temp_v0_2, f32 *, 0x30));
                M2C_FIELD(temp_v0_2, f32 *, 0x34) = (f32) (2.0f * M2C_FIELD(temp_v0_2, f32 *, 0x34));
                M2C_FIELD(temp_v0_2, f32 *, 0x38) = (f32) (2.0f * M2C_FIELD(temp_v0_2, f32 *, 0x38));
                temp_v0_3 = ((temp_v0 & 0xFFFF) * 0x7C) + &D_8018D6C0;
                D_8018A280 = temp_v0_3;
                M2C_FIELD(temp_v0_3, f32 *, 0x70) = 30.0f;
                var_v1_2 = 0;
                __repair_rows: {
                    M2C_FIELD((D_8018A280 + var_v1_2), s8 *, 0x67) = 0;
                    temp_a0 = var_v1_2 * 0x8F0;
                    if ((*(&D_8022A772 + temp_a0) != 0xFFFF) && (*(&D_8022AD5C + temp_a0) > 0.0f)) {
                        M2C_FIELD((D_8018A280 + var_v1_2), s8 *, 0x60) = var_v1_2;
                    } else {
                        M2C_FIELD((D_8018A280 + var_v1_2), s8 *, 0x60) = -1;
                    }
                    var_v1_2 += 1;
                }
if (var_v1_2 < 7) goto __repair_rows;
                *(&D_8011F32E + ((arg0 & 0xFFFF) * 0x64)) = 1;
                return;
            }
            break;
        case 1:
            func_8013F44C(D_8022DD12, D_8018A280);
            if (D_8018D674 != 0) {
                func_801D7028(D_8022DD12, 0x27);
            }
            break;
        }
    }
}
