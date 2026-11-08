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

s32 func_8002EAE4(s32 arg0, s32 arg1, s16 arg2, s32 arg3) {
    s32 temp_a1;
    s32 var_v0;

    temp_a1 = arg1 >> 3;
    if (temp_a1 != 0) {
        var_v0 = (arg0 + (((s32) ((arg3 & 0xFFFF) * temp_a1) >> 0x10) + (arg2 * temp_a1))) << 0x10;
    } else {
        var_v0 = arg0 << 0x10;
    }
    return var_v0 >> 0x10;
}
