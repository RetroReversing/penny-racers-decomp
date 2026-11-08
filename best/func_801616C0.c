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

s32 func_800DE41C(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32, M2C_UNK *, M2C_UNK *, s32, f32, f32, f32, s32, f32, s32, f32, f32, f32); /* extern */
s32 func_8013E364();                                /* extern */
M2C_UNK func_8013E49C(s32);                         /* extern */
M2C_UNK func_8013E640(s32, s32, void *, M2C_UNK, s32, f32, s32, s32, f32, s32, s32); /* extern */
M2C_UNK func_801D7028(s32, M2C_UNK);                /* extern */
extern M2C_UNK D_8011F308;
extern M2C_UNK D_8011F30C;
extern M2C_UNK D_8011F310;
extern M2C_UNK D_8011F318;
extern M2C_UNK D_8011F320;
extern M2C_UNK D_8011F324;
extern M2C_UNK D_8011F328;
extern M2C_UNK D_8018D6C4;
extern M2C_UNK D_8018D727;
extern M2C_UNK D_8018D730;
extern M2C_UNK D_80239408;
extern M2C_UNK func_801619B4;

void func_801616C0(void *arg0) {
    s16 temp_v0_4;
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_s1;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v1_2;
    u16 temp_v0_3;
    u16 temp_v1;

    if ((M2C_FIELD(arg0, s32 *, 0x898) == 1) && (temp_v1 = M2C_FIELD(arg0, u16 *, 0x560), ((temp_v1 & 8) == 0)) && ((temp_v1 & 7) < 7) && (temp_v0 = func_8013E364(), temp_s0 = temp_v0 & 0xFFFF, (temp_s0 != 0xFFFF))) {
        temp_v0_2 = func_800DE41C(0, 0, 1, 0, 0x51, 0xFF, &D_80239408, &func_801619B4, 0, *(&D_8011F308 + (M2C_FIELD(arg0, u16 *, 2) * 0x64)), *(&D_8011F30C + (M2C_FIELD(arg0, u16 *, 2) * 0x64)) + 15.0f, *(&D_8011F310 + (M2C_FIELD(arg0, u16 *, 2) * 0x64)), 0, *(&D_8011F318 + (M2C_FIELD(arg0, u16 *, 2) * 0x64)), 0, 2.0f * *(&D_8011F320 + (M2C_FIELD(arg0, u16 *, 2) * 0x64)), 2.0f * *(&D_8011F324 + (M2C_FIELD(arg0, u16 *, 2) * 0x64)), 2.0f * *(&D_8011F328 + (M2C_FIELD(arg0, u16 *, 2) * 0x64)));
        if ((u32) ((temp_v0_2 + 2) & 0xFFFF) >= 2U) {
            temp_s0_2 = temp_v0 & 0xFFFF;
            temp_v0_3 = M2C_FIELD(arg0, u16 *, 0x560);
            M2C_FIELD(arg0, u16 *, 0x560) = (u16) ((temp_v0_3 & 0xF8) | ((temp_v0_3 & 7) + 1));
            temp_s1 = temp_v0_2 & 0xFFFF;
            func_8013E640(temp_s0_2, temp_s1, arg0, 0, 0, 15.0f, 0, 0, -0.1f, 0, 0x3C);
            temp_v1_2 = temp_s0_2 * 0x7C;
            *(temp_v1_2 + &D_8018D727 + M2C_FIELD(arg0, u16 *, 4)) = 1;
            *(&D_8018D730 + temp_v1_2) = 20.0f;
            *(&D_8018D6C4 + temp_v1_2) = arg0;
            func_801D7028(temp_s1, 0x2B);
            temp_v0_4 = M2C_FIELD(arg0, s16 *, 0x55E);
            if (temp_v0_4 > 0) {
                M2C_FIELD(arg0, s16 *, 0x55E) = (s16) (temp_v0_4 - 1);
            }
        } else {
            func_8013E49C(temp_s0);
        }
    }
}
