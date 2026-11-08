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

s32 func_8014A030(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_v1;
    s32 var_a0;

    var_a0 = arg0;
    temp_v1 = 1 << arg1;
    switch (arg2) {                                 /* irregular */
    case 0:
        var_a0 &= ~temp_v1;
        break;
    case 2:
        var_a0 ^= temp_v1;
        break;
    case 1:
        var_a0 |= temp_v1;
        break;
    }
    return var_a0;
}
