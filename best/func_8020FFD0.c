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

s32 func_80149F40(M2C_UNK, s32, s8);                /* extern */
s32 func_801FD530(s32, s32);                        /* extern */
extern M2C_UNK D_8021E22F;

s32 func_8020FFD0(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_s0;

    temp_s0 = arg1 & 0xFF;
    return func_801FD530(temp_s0, func_80149F40(0, temp_s0, M2C_FIELD(((temp_s0 * 0x22) + (((arg0 & 0xFF) * 0x110) + &D_8021E22F) + (arg2 & 0xFF)), s8 *, 2)) & 0xFF) & 0xFF;
}
