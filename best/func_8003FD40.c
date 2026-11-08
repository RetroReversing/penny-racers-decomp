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

s32 func_8003FD40(u8 *arg0, s32 arg1) {
    s32 var_a2;
    s32 var_v1;
    u8 *var_a0;
    u8 temp_v0;

    var_a0 = arg0;
    var_a2 = 0;
    var_v1 = 0;
    if (arg1 > 0) {
        do {
            temp_v0 = *var_a0;
            var_a0 += 1;
            var_a2 += 1;
            var_v1 = (var_v1 + temp_v0) & 0xFFFF;
        } while (var_a2 < arg1);
    }
    return var_v1 & 0xFFFF;
}
