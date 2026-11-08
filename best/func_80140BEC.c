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

s32 func_800DE41C(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32, M2C_UNK *, M2C_UNK *, s32, f32, f32, f32, s32, s32, s32, f32, f32, f32); /* extern */
s32 func_8013E364();                                /* extern */
M2C_UNK func_8013E49C(s32, s32);                    /* extern */
M2C_UNK func_8013E818(s32, s32, M2C_UNK, M2C_UNK, f32, f32, s32); /* extern */
extern M2C_UNK D_8011F2F0;
extern M2C_UNK D_8011F2FD;
extern M2C_UNK D_80168814;
extern M2C_UNK D_80168818;
extern M2C_UNK D_8016881C;
extern M2C_UNK D_8018D6C4;
extern M2C_UNK D_8018D730;
extern M2C_UNK D_8022A770;
extern M2C_UNK D_802397E4;
extern M2C_UNK func_80140E0C;

void func_80140BEC(s32 arg0) {
    s32 temp_a1;
    s32 temp_s1;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v1_2;
    s32 var_s0;
    void *temp_v1;

    var_s0 = 0;
    do {
        temp_v0 = func_8013E364();
        temp_s1 = temp_v0 & 0xFFFF;
        if (temp_s1 != 0xFFFF) {
            temp_v0_2 = var_s0 * 0xC;
            temp_v0_3 = func_800DE41C(0, 0xF, 1, 0, 0x51, 0xFF, &D_802397E4, &func_80140E0C, 0, *(&D_80168814 + temp_v0_2), *(&D_80168818 + temp_v0_2) - 20.0f, *(&D_8016881C + temp_v0_2), 0, 0, 0, 1.0f, 1.0f, 1.0f);
            temp_a1 = temp_v0_3 & 0xFFFF;
            if ((u32) ((temp_v0_3 + 2) & 0xFFFF) >= 2U) {
                temp_v1 = (temp_a1 * 0x64) + &D_8011F2F0;
                M2C_FIELD(temp_v1, s16 *, 8) = 0x80;
                M2C_FIELD(temp_v1, s16 *, 6) = 0x80;
                M2C_FIELD(temp_v1, s16 *, 4) = 0x80;
                M2C_FIELD(temp_v1, s16 *, 2) = 0x80;
                M2C_FIELD(temp_v1, s16 *, 0x3E) = 0;
                M2C_FIELD(temp_v1, s16 *, 0x40) = (s16) (0x64 - (var_s0 * 0xA));
                func_8013E818(temp_s1, temp_a1, 0x40, 0, 0.0f, 0.0f, 0);
                temp_v1_2 = temp_s1 * 0x7C;
                *(&D_8018D730 + temp_v1_2) = 35.0f;
                *(&D_8018D6C4 + temp_v1_2) = &D_8022A770;
                var_s0 += 1;
            } else {
                func_8013E49C(temp_v0 & 0xFFFF, temp_a1);
                goto block_5;
            }
        } else {
block_5:
            var_s0 += 1;
        }
    } while (var_s0 < 4);
    *(&D_8011F2FD + ((arg0 & 0xFFFF) * 0x64)) = 2;
}
