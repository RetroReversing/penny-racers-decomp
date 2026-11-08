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

f32 func_800427B0(u64 arg0, u32 arg1, s32 arg2) {
    s32 var_a0;
    s32 var_a2;
    u32 var_v1;
    u64 var_v0;

    var_v1 = arg1;
    var_v0 = arg0;
    if ((arg0 | arg1) == 0) {
        return M2C_BITWISE(f32, arg0);
    }
    var_a2 = arg2 ^ arg2;
    if (0x80000000 & var_v0) {
        var_v1 = (var_v1 ^ -1) + 1;
        var_v0 = (var_v0 ^ -1) + (var_v1 == 0);
        var_a2 = 0x80000000;
    }
    var_a0 = 0x80000000 ^ 0x80000000;
    if (0xFFE00000 & var_v0) {
        __repair_rows: {
            var_v1 = (var_v1 >> 1) | (var_v0 << 0x1F);
            var_v0 = (u64) (var_v0 >> 1);
            var_a0 += 1;
        }
if (0xFFE00000 & var_v0) goto __repair_rows;
    } else {
loop_7:
        if (!(0x100000 & var_v0)) {
            var_v0 = (var_v0 * 2) | (var_v1 >> 0x1F);
            var_v1 *= 2;
            var_a0 -= 1;
            goto loop_7;
        }
    }
    arg0 = (var_v0 & 0xFFFFF) | var_a2 | ((var_a0 + 0x433) << 0x14);
    arg1 = var_v1;
    return M2C_BITWISE(f32, arg0);
}
