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

M2C_UNK func_8013AE60(s32);                         /* extern */
extern M2C_UNK D_8011F32E;

void func_8014F3B0(s32 arg0) {
    s32 temp_s0;
    s32 temp_v1;

    temp_s0 = arg0 & 0xFFFF;
    func_8013AE60(temp_s0);
    temp_v1 = temp_s0 * 0x64;
    *(&D_8011F32E + temp_v1) = *(&D_8011F32E + temp_v1) + 1;
    if ((u16) *(&D_8011F32E + temp_v1) >= 0x80U) {
        *(&D_8011F32E + temp_v1) = *(&D_8011F32E + temp_v1) - 0x7F;
    }
}
