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

extern M2C_UNK D_8011F2FD;
extern M2C_UNK D_8011F308;
extern M2C_UNK D_8011F30C;
extern M2C_UNK D_8011F338;

void func_8013BA58(s32 arg0) {
    f32 temp_fv1;
    s32 temp_v0;
    s32 temp_v1;

    temp_v0 = arg0 & 0xFFFF;
    temp_v1 = temp_v0 * 0x64;
    temp_fv1 = *(&D_8011F30C + temp_v1);
    if (!(*(&D_8011F338 + temp_v1) < temp_fv1)) {
        *(&D_8011F2FD + (temp_v0 * 0x64)) = 2;
        return;
    }
    *(&D_8011F30C + temp_v1) = temp_fv1 - 3.0f;
    *(&D_8011F308 + temp_v1) = *(&D_8011F308 + temp_v1) - 1.0f;
}
