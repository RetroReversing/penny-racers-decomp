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

void func_8015A960(void *arg0, s8 arg1, s8 arg2, s8 arg3, u8 arg4, u8 arg5, u8 arg6, u8 arg7, u8 arg8, u8 arg9) {
    M2C_FIELD(arg0, s8 *, 0) = arg1;
    M2C_FIELD(arg0, s8 *, 1) = arg2;
    M2C_FIELD(arg0, s8 *, 2) = arg3;
    M2C_FIELD(arg0, s8 *, 3) = 0;
    M2C_FIELD(arg0, s8 *, 4) = arg1;
    M2C_FIELD(arg0, s8 *, 5) = arg2;
    M2C_FIELD(arg0, s8 *, 6) = arg3;
    M2C_FIELD(arg0, s8 *, 7) = 0;
    M2C_FIELD(arg0, u8 *, 8) = arg4;
    M2C_FIELD(arg0, u8 *, 9) = arg5;
    M2C_FIELD(arg0, u8 *, 0xA) = arg6;
    M2C_FIELD(arg0, s8 *, 0xB) = 0;
    M2C_FIELD(arg0, u8 *, 0xC) = arg4;
    M2C_FIELD(arg0, u8 *, 0xD) = arg5;
    M2C_FIELD(arg0, u8 *, 0xE) = arg6;
    M2C_FIELD(arg0, s8 *, 0xF) = 0;
    M2C_FIELD(arg0, u8 *, 0x10) = arg7;
    M2C_FIELD(arg0, u8 *, 0x11) = arg8;
    M2C_FIELD(arg0, u8 *, 0x12) = arg9;
    M2C_FIELD(arg0, s8 *, 0x13) = 0;
}
