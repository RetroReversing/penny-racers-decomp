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

f32 __sinf(f32);                             /* extern */
M2C_UNK func_8013AE60(s32);                         /* extern */
extern M2C_UNK D_8011F308;
extern M2C_UNK D_8011F32E;
extern M2C_UNK D_8011F334;
extern f64 D_80183868;
extern f64 D_80183870;
extern f64 D_80183878;
extern M2C_UNK func_8016D3AC;

void func_80112AD0(s32 arg0) {
    f32 temp_fv0;
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_v1;

    temp_s0 = arg0 & 0xFFFF;
    func_8013AE60(temp_s0);
    temp_v1 = temp_s0 * 0x64;
    if (*(&D_8011F32E + temp_v1) == 0) {
        *(&D_8011F334 + temp_v1) = *(&D_8011F308 + temp_v1);
        *(&D_8011F32E + temp_v1) = 1;
    }
    temp_fv0 = (f32) ((f64) M2C_FIELD(&func_8016D3AC, f32 *, 0x524) + D_80183868);
    M2C_FIELD(&func_8016D3AC, f32 *, 0x524) = temp_fv0;
    if (temp_fv0 > 360.0f) {
        M2C_FIELD(&func_8016D3AC, f32 *, 0x524) = (f32) (temp_fv0 - 360.0f);
    }
    temp_s0_2 = (arg0 & 0xFFFF) * 0x64;
    *(&D_8011F308 + temp_s0_2) = (__sinf((f32) (((f64) M2C_FIELD(&func_8016D3AC, f32 *, 0x524) * D_80183870) / D_80183878)) * 100.0f) + *(&D_8011F334 + temp_s0_2);
}
