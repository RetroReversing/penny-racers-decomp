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

s32 func_80032310();
extern char D_8011F308[];
extern char D_8011F30C[];
extern char D_8011F310[];

void func_8014A204(s32 arg0, s32 arg1) {
    f32 temp_fa0;
    f32 temp_ft0;
    f32 temp_ft1;
    f32 temp_fv0;
    f32 temp_fv0_2;
    s32 temp_a0;
    s32 temp_a1;
    s32 temp_v0;
    s32 temp_v1;

    temp_a0 = arg0 & 0xFFFF;
    temp_v1 = temp_a0 * 0x64;
    temp_a1 = arg1 & 0xFFFF;
    temp_v0 = temp_a1 * 0x64;
    temp_ft1 = *(D_8011F308 + temp_v1) - *(D_8011F308 + temp_v0);
    temp_ft0 = *(D_8011F30C + temp_v1) - *(D_8011F30C + temp_v0);
    temp_fv0 = *(D_8011F310 + temp_v1) - *(D_8011F310 + temp_v0);
    temp_fa0 = (temp_ft1 * temp_ft1) + (temp_ft0 * temp_ft0) + (temp_fv0 * temp_fv0);
    temp_fv0_2 = sqrtf(temp_fa0);
    if (temp_fv0_2 != temp_fv0_2) {
        func_80032310(temp_fa0, temp_a0, temp_a1);
    }
}
