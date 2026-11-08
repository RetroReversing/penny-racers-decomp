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
s32 func_8013AE60();
extern char D_8011F320[];
extern char D_8011F324[];
extern char D_8011F334[];
extern f64 D_801837E0;
extern f64 D_801837E8;
extern f64 D_801837F0;
extern f64 D_801837F8;
extern f64 D_80183800;

void func_801525C4(s32 arg0) {
    f32 temp_fv0;
    f64 temp_fs0;
    f64 temp_fv1;
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_v0;

    temp_s0 = arg0 & 0xFFFF;
    func_8013AE60(temp_s0);
    temp_v0 = temp_s0 * 0x64;
    temp_fv0 = (f32) ((f64) *(D_8011F334 + temp_v0) + D_801837E0);
    *(D_8011F334 + temp_v0) = temp_fv0;
    temp_fv1 = (f64) temp_fv0;
    if (D_801837E8 <= temp_fv1) {
        *(D_8011F334 + temp_v0) = (f32) (D_801837E8 - temp_fv1);
    }
    temp_s0_2 = (arg0 & 0xFFFF) * 0x64;
    temp_fs0 = D_801837F0;
    *(D_8011F320 + temp_s0_2) = (f32) (((f64) __sinf(*(D_8011F334 + temp_s0_2)) * temp_fs0) + D_801837F8);
    *(D_8011F324 + temp_s0_2) = (f32) (((f64) __sinf(*(D_8011F334 + temp_s0_2)) * temp_fs0) + D_80183800);
}
