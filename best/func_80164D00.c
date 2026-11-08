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

f32 __cosf(f32);                                    /* extern */
f32 __sinf(f32);                                    /* extern */
s32 func_800DE41C(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32, s32, M2C_UNK *, s32, f32, f32, f32, s32, s32, s32, s32, s32, s32); /* extern */
s32 func_8013E364();                                /* extern */
M2C_UNK func_8013E49C(s32);                         /* extern */
M2C_UNK func_8013E818(s32, s32, M2C_UNK, f32, f32, f32, s32); /* extern */
M2C_UNK func_801D7028(s32, M2C_UNK);                /* extern */
extern M2C_UNK D_8011F308;
extern M2C_UNK D_8011F30C;
extern M2C_UNK D_8011F310;
extern M2C_UNK D_8011F318;
extern M2C_UNK D_8018D6C4;
extern M2C_UNK func_80164FC0;

void func_80164D00(void *arg0) {
    f32 temp_fs1;
    f32 temp_fs3;
    s16 temp_v0_4;
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_s1;
    s32 temp_s1_2;
    s32 temp_v0;
    s32 temp_v0_2;
    u16 temp_v0_3;
    u16 temp_v1;

    temp_s1 = M2C_FIELD(arg0, s32 *, 0x898);
    if ((temp_s1 == 1) && (temp_v1 = M2C_FIELD(arg0, u16 *, 0x560), ((temp_v1 & 8) == 0)) && ((temp_v1 & 7) < 5) && (temp_v0 = func_8013E364(), temp_s0 = temp_v0 & 0xFFFF, (temp_s0 != 0xFFFF))) {
        temp_v0_2 = func_800DE41C(0, 0, 3, 0, 0x20, temp_s1, 0, &func_80164FC0, 0, *(&D_8011F308 + (M2C_FIELD(arg0, u16 *, 2) * 0x64)), *(&D_8011F30C + (M2C_FIELD(arg0, u16 *, 2) * 0x64)), *(&D_8011F310 + (M2C_FIELD(arg0, u16 *, 2) * 0x64)), 0, 0, 0, 0, 0, 0);
        if ((u32) ((temp_v0_2 + 2) & 0xFFFF) < 2U) {
            func_8013E49C(temp_s0);
            return;
        }
        temp_v0_3 = M2C_FIELD(arg0, u16 *, 0x560);
        M2C_FIELD(arg0, u16 *, 0x560) = (u16) ((temp_v0_3 & 0xF8) | ((temp_v0_3 & 7) + 1));
        temp_fs3 = __sinf((*(&D_8011F318 + (M2C_FIELD(arg0, u16 *, 2) * 0x64)) * 3.14f) / 180.0f) * 8.0f;
        temp_fs1 = __cosf((*(&D_8011F318 + (M2C_FIELD(arg0, u16 *, 2) * 0x64)) * 3.14f) / 180.0f) * 8.0f;
        temp_s1_2 = temp_v0_2 & 0xFFFF;
        func_801D7028(temp_s1_2, 0x35);
        temp_s0_2 = temp_v0 & 0xFFFF;
        func_8013E818(temp_s0_2, temp_s1_2, 0, (-M2C_FIELD(arg0, f32 *, 0x7C0) * 8.0f) + temp_fs3, M2C_FIELD(arg0, f32 *, 0x7C4), (-M2C_FIELD(arg0, f32 *, 0x7C8) * 8.0f) + temp_fs1, 5);
        *(&D_8018D6C4 + (temp_s0_2 * 0x7C)) = arg0;
        temp_v0_4 = M2C_FIELD(arg0, s16 *, 0x55E);
        if (temp_v0_4 > 0) {
            M2C_FIELD(arg0, s16 *, 0x55E) = (s16) (temp_v0_4 - 1);
        }
    }
}
