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

f32 func_80033640(f32);                             /* extern */
M2C_UNK func_8013AE60(s32);                         /* extern */
extern M2C_UNK D_8011F30C;
extern M2C_UNK D_8011F32E;
extern M2C_UNK D_8011F334;
extern M2C_UNK D_8011F338;
extern f64 D_80183810;
extern f64 D_80183818;

void func_8010E9E0(s32 arg0) {
    f32 temp_fv0;
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_v0;
    s32 temp_v1;

    temp_s0 = arg0 & 0xFFFF;
    func_8013AE60(temp_s0);
    temp_v1 = temp_s0 * 0x64;
    if (*(&D_8011F32E + temp_v1) == 0) {
        *(&D_8011F338 + temp_v1) = *(&D_8011F30C + temp_v1);
        *(&D_8011F32E + temp_v1) = 1;
    }
    temp_v0 = (arg0 & 0xFFFF) * 0x64;
    temp_fv0 = *(&D_8011F334 + temp_v0) + 2.0f;
    *(&D_8011F334 + temp_v0) = temp_fv0;
    if (temp_fv0 > 360.0f) {
        *(&D_8011F334 + temp_v0) = temp_fv0 - 360.0f;
    }
    temp_s0_2 = (arg0 & 0xFFFF) * 0x64;
    *(&D_8011F30C + temp_s0_2) = (func_80033640((f32) (((f64) *(&D_8011F334 + temp_s0_2) * D_80183810) / D_80183818)) * 8.0f) + *(&D_8011F338 + temp_s0_2);
}
