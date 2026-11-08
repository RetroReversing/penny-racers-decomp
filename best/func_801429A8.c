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
s16 func_8012913C(u16, s32, s32, s32);              /* extern */
M2C_UNK func_80129C1C(void *, s32, s32, s32, s32, f32, s32); /* extern */
s32 func_8013E364();                                /* extern */
M2C_UNK func_8013E49C(s32);                         /* extern */
M2C_UNK func_8013E818(s32, s32, M2C_UNK, M2C_UNK, s32, s32, s32); /* extern */
extern M2C_UNK D_8011F2F0;
extern M2C_UNK D_8011F2FD;
extern M2C_UNK D_801688C4;
extern M2C_UNK D_801688C8;
extern M2C_UNK D_801688CC;
extern M2C_UNK D_801688D0;
extern M2C_UNK D_801688D4;
extern M2C_UNK D_801688D8;
extern M2C_UNK D_801688DC;
extern M2C_UNK D_801688DE;
extern M2C_UNK D_801688E4;
extern M2C_UNK D_8016891C;
extern M2C_UNK D_8016D658;
extern M2C_UNK D_8018D6C4;
extern M2C_UNK D_8018D730;
extern M2C_UNK D_8022A770;
extern u16 D_80233EC0;
extern M2C_UNK func_80142C6C;

void func_801429A8(s32 arg0) {
    s16 var_s2;
    s32 temp_s0;
    s32 temp_s1;
    s32 temp_s3;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v1;
    s32 var_v0;
    void *temp_v0_3;

    var_s2 = 0;
    do {
        temp_v0 = func_8013E364();
        temp_s3 = temp_v0 & 0xFFFF;
        if (temp_s3 != 0xFFFF) {
            temp_s1 = var_s2 * 0x5C;
            temp_v0_2 = func_800DE41C(0, 0x10, 2, 0, 0x51, 0xFF, &D_8016D658, &func_80142C6C, 0, *(&D_801688C4 + temp_s1), *(&D_801688C8 + temp_s1), *(&D_801688CC + temp_s1), 0, 0, 0, 1.0f, 1.0f, 1.0f);
            temp_s0 = temp_v0_2 & 0xFFFF;
            if ((u32) ((temp_v0_2 + 2) & 0xFFFF) >= 2U) {
                temp_v0_3 = (temp_s0 * 0x64) + &D_8011F2F0;
                M2C_FIELD(temp_v0_3, s32 *, 0x44) = 0;
                M2C_FIELD(temp_v0_3, s16 *, 0x40) = var_s2;
                *(&D_801688D0 + temp_s1) = M2C_FIELD(temp_v0_3, f32 *, 0x1C);
                *(&D_801688D4 + temp_s1) = (var_s2 * 0x28) + 0xA;
                var_s2 += 1;
                *(&D_801688DC + temp_s1) = func_8012913C(D_80233EC0, *(&D_801688C4 + temp_s1), *(&D_801688C8 + temp_s1), *(&D_801688CC + temp_s1));
                *(&D_801688DE + temp_s1) = 0;
                func_80129C1C(temp_s1 + &D_801688D8, *(&D_801688C4 + temp_s1), *(&D_801688C8 + temp_s1), *(&D_801688CC + temp_s1), 0, -300.0f, 0);
                *(&D_8016891C + temp_s1) = *(&D_801688E4 + temp_s1);
                func_8013E818(temp_s3, temp_s0, 0, 0, 0, 0, 0);
                temp_v1 = temp_s3 * 0x7C;
                *(&D_8018D6C4 + temp_v1) = &D_8022A770;
                *(&D_8018D730 + temp_v1) = 50.0f;
                var_v0 = var_s2 < 8;
            } else {
                func_8013E49C(temp_v0 & 0xFFFF);
                goto block_5;
            }
        } else {
block_5:
            var_s2 += 1;
            var_v0 = var_s2 < 8;
        }
    } while (var_v0 != 0);
    *(&D_8011F2FD + ((arg0 & 0xFFFF) * 0x64)) = 2;
}
