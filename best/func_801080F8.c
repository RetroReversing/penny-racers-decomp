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

f32 __sinf(f32);                                    /* extern */
M2C_UNK func_8013AE60(s32);                         /* extern */
extern f64 D_80183770;
extern f64 D_80183778;
extern M2C_UNK func_8011EDAC;

void func_801080F8(s32 arg0) {
    f32 temp_fv0;
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_v0;
    s32 temp_v1;

    temp_s0 = arg0 & 0xFFFF;
    func_8013AE60(temp_s0);
    temp_v1 = temp_s0 * 0x64;
    if (*(&func_8011EDAC + 0x582 + temp_v1) == 0) {
        *(&func_8011EDAC + 0x58C + temp_v1) = *(&func_8011EDAC + 0x568 + temp_v1);
        *(&func_8011EDAC + 0x582 + temp_v1) = 1;
    }
    temp_v0 = (arg0 & 0xFFFF) * 0x64;
    *(&func_8011EDAC + 0x588 + temp_v0) = *(&func_8011EDAC + 0x588 + temp_v0) + 1.0f;
    temp_fv0 = *(&func_8011EDAC + 0x588 + temp_v0);
    if (temp_fv0 > 360.0f) {
        *(&func_8011EDAC + 0x588 + temp_v0) = temp_fv0 - 360.0f;
    }
    temp_s0_2 = (arg0 & 0xFFFF) * 0x64;
    *(&func_8011EDAC + 0x568 + temp_s0_2) = (__sinf((f32) (((f64) *(&func_8011EDAC + 0x588 + temp_s0_2) * D_80183770) / D_80183778)) * 20.0f) - *(&func_8011EDAC + 0x58C + temp_s0_2);
}
