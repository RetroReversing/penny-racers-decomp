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

s32 func_800DE41C(M2C_UNK, u8, M2C_UNK, M2C_UNK, s32, s32, M2C_UNK *, M2C_UNK *, M2C_UNK *, M2C_UNK32, f32, M2C_UNK32, s32, s32, s32, f32, f32, f32); /* extern */
s32 func_8013E364();                                /* extern */
M2C_UNK func_8013E49C(s32);                         /* extern */
M2C_UNK func_8013E818(s32, s32, M2C_UNK, M2C_UNK, s32, s32, s32); /* extern */
M2C_UNK func_801D7028(u16, M2C_UNK);                /* extern */
extern M2C_UNK D_8011F308;
extern M2C_UNK D_8011F30C;
extern M2C_UNK D_8011F310;
extern M2C_UNK D_8011F320;
extern M2C_UNK D_8011F324;
extern M2C_UNK D_8011F328;
extern M2C_UNK D_8011F334;
extern M2C_UNK D_8011F338;
extern M2C_UNK D_8011F350;
extern M2C_UNK D_8018D6C0;
extern M2C_UNK D_8018D6C4;
extern M2C_UNK D_8018D6C8;
extern M2C_UNK D_8018D6D4;
extern M2C_UNK D_80239610;
extern M2C_UNK func_8015F33C;
extern M2C_UNK func_8015F7F8;
extern M2C_UNK func_8015FD64;

void func_8015E8E4(void *arg0) {
    s32 temp_a0;
    s32 temp_a1;
    s32 temp_s0;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 temp_v0_5;
    s32 var_s2;

    if (!(M2C_FIELD(arg0, u16 *, 0x560) & 0x18) && (temp_v0 = func_8013E364(), var_s2 = temp_v0 & 0xFFFF, (var_s2 != 0xFFFF))) {
        temp_v0_2 = func_800DE41C(0, 0U, 3, 0, 0x20, 1, NULL, &func_8015F33C, NULL, 0, 0.0f, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f);
        if ((u32) ((temp_v0_2 + 2) & 0xFFFF) >= 2U) {
            temp_a0 = (temp_v0 & 0xFFFF) * 0x7C;
            *(&D_8018D6D4 + temp_a0) = 0x23;
            *(&D_8018D6C8 + temp_a0) = 1.0f;
            *(&D_8018D6C4 + temp_a0) = arg0;
            M2C_FIELD(arg0, s8 *, 0x8D0) = 0xF0;
            M2C_FIELD(arg0, u16 *, 0x560) = (u16) (M2C_FIELD(arg0, u16 *, 0x560) | 0x10);
            *(&D_8011F350 + ((temp_v0_2 & 0xFFFF) * 0x64)) = temp_a0 + &D_8018D6C0;
            func_801D7028(M2C_FIELD(arg0, u16 *, 2), 0x2C);
            if (((u8) M2C_FIELD(arg0, u8 *, 0x74C) < 5U) && (temp_v0_3 = func_8013E364(), var_s2 = temp_v0_3 & 0xFFFF, (var_s2 != 0xFFFF))) {
                temp_v0_4 = func_800DE41C(0, M2C_FIELD(arg0, u8 *, 5), 1, 0, 0x5B, 0, &D_80239610, &func_8015F7F8, &func_8015FD64, *(&D_8011F308 + (M2C_FIELD(arg0, u16 *, 2) * 0x64)), *(&D_8011F30C + (M2C_FIELD(arg0, u16 *, 2) * 0x64)) + 15.0f, *(&D_8011F310 + (M2C_FIELD(arg0, u16 *, 2) * 0x64)), 0, 0, 0, 2.0f * *(&D_8011F320 + (M2C_FIELD(arg0, u16 *, 2) * 0x64)), 2.0f * *(&D_8011F324 + (M2C_FIELD(arg0, u16 *, 2) * 0x64)), 2.0f * *(&D_8011F328 + (M2C_FIELD(arg0, u16 *, 2) * 0x64)));
                temp_a1 = temp_v0_4 & 0xFFFF;
                if ((u32) ((temp_v0_4 + 2) & 0xFFFF) < 2U) {
                    goto block_6;
                }
                temp_v0_5 = temp_a1 * 0x64;
                *(&D_8011F334 + temp_v0_5) = 16.0f;
                *(&D_8011F338 + temp_v0_5) = 0;
                temp_s0 = temp_v0_3 & 0xFFFF;
                func_8013E818(temp_s0, temp_a1, 0x40, 0, 0, 0, 0x3C);
                *(&D_8018D6C4 + (temp_s0 * 0x7C)) = arg0;
            }
        } else {
block_6:
            func_8013E49C(var_s2);
        }
    }
}
