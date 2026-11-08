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

s32 func_80031B24(void *arg0, void *arg1) {
    return (s32) (((s32) (M2C_FIELD(arg0, u8 *, 0x36) * M2C_FIELD(arg0, u8 *, 0x33) * M2C_FIELD(arg0, u8 *, 0x30)) >> 6) * ((s32) (M2C_FIELD(M2C_FIELD(arg0, void **, 0x20), u8 *, 0xD) * M2C_FIELD(arg1, s16 *, 0x32) * M2C_FIELD(((M2C_FIELD(arg0, u8 *, 0x31) * 0x10) + M2C_FIELD(arg1, s32 *, 0x60)), u8 *, 9)) >> 0xE) * 2) >> 0x10;
}
