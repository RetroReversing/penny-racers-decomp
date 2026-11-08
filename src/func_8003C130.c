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

s32 func_800411C0(s32, s32, s32);                   /* extern */

s32 func_8003C130(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 var_s0;
    s32 var_s1;
    s32 var_s2;
    s32 var_v0;

    var_s2 = arg2;
    var_s0 = arg3;
    var_s1 = arg1;
    var_v0 = 0;
    if (var_s0 > 0) {
loop_1:
        var_v0 = func_800411C0(arg0, var_s1 & 0xFF, var_s2);
        var_s0 -= 8;
        if (var_v0 == 0) {
            var_s1 += 1;
            var_s2 += 8;
            if (var_s0 > 0) {
                goto loop_1;
            }
        }
    }
    return var_v0;
}
