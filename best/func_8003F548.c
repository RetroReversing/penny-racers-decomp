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

s32 func_8003F548(u8 *arg0) {
    s32 temp_a2;
    s32 var_a1;
    s32 var_t0;
    s32 var_v1;
    s32 var_v1_2;
    u8 *var_a0;

    var_a0 = arg0;
    var_v1 = 0;
    var_t0 = 0;
    do {
        var_a1 = 7;
loop_2:
        temp_a2 = var_v1 * 2;
        var_v1_2 = temp_a2;
        if (var_t0 != 0x20) {
            var_v1_2 = temp_a2 | (((s32) *var_a0 >> var_a1) & 1);
        }
        var_a1 -= 1;
        var_v1 = var_v1_2 ^ (-((var_v1 & 0x80) != 0) & ~0x7A);
        if (var_a1 >= 0) {
            goto loop_2;
        }
        var_t0 += 1;
        var_a0 += 1;
    } while (var_t0 < 0x21);
    return var_v1 & 0xFF;
}
