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

s32 func_80034640(s32);                             /* extern */

s32 func_8002FD80(void *arg0, s32 arg1, void *arg2) {
    M2C_FIELD(arg2, s32 *, 0) = 0x0B000020;
    M2C_FIELD(arg2, s32 *, 4) = func_80034640(arg0 + 8);
    M2C_FIELD(arg2, s32 *, 8) = (s32) ((M2C_FIELD(arg0, u8 *, 0x2F) << 0x10) | (M2C_FIELD(arg0, u16 *, 2) | 0x0E000000));
    M2C_FIELD(arg2, s32 *, 0xC) = (s32) (((arg1 >> 8) << 0x18) | (func_80034640(M2C_FIELD(arg0, s32 *, 0x28)) & 0xFFFFFF));
    M2C_FIELD(arg0, s32 *, 0x2C) = 0;
    return (s32) (arg2 + 0x10);
}
