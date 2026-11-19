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

extern char D_8011F350[];

void func_801CF468(s32 arg0, s8 arg1, s8 arg2, s8 arg3) {
    s32 temp_v0;

    temp_v0 = (arg0 & 0xFFFF) * 0x64;
    M2C_FIELD(*(D_8011F350 + temp_v0), s8 *, 6) = arg1;
    M2C_FIELD(*(D_8011F350 + temp_v0), s8 *, 7) = arg2;
    M2C_FIELD(*(D_8011F350 + temp_v0), s8 *, 8) = arg3;
}
