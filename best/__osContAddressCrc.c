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

s32 __osContAddressCrc(s32 arg0) {
    s32 temp_v0;
    s32 var_a0;
    s32 var_a1;
    s32 var_v1;
    s32 var_v1_2;

    var_a0 = arg0;
    var_v1 = 0;
    var_a1 = 0xF;
    do {
        var_v1_2 = (var_v1 * 2) & 0xFF;
        if (var_a0 & 0x400) {
            var_v1_2 |= 1;
        }
        var_a0 *= 2;
        temp_v0 = var_v1_2 ^ (-((var_v1 & 0x10) != 0) & 0x15);
        var_a1 -= 1;
        var_v1 = temp_v0;
    } while (var_a1 >= 0);
    return temp_v0 & 0x1F;
}
