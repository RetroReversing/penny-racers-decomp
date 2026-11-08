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

s32 func_8014A080(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_a1;
    s32 temp_t0;
    s32 temp_t1;
    s32 temp_t2;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_a0;
    s32 var_a1;
    s32 var_a1_2;
    s32 var_v0;
    s32 var_v0_2;

    var_a0 = arg0;
    temp_a1 = arg1 & 0x1F;
    temp_t2 = 1 << temp_a1;
    temp_t0 = -2 << temp_a1;
    temp_t1 = var_a0 & temp_t0;
    if ((arg3 & 0xFF) == 1) {
        temp_v0 = arg2 & 0xFF;
        var_a1 = 0;
        if (temp_v0 > 0) {
            var_v0 = var_a0 & temp_t2;
            __repair_rows: {
                var_a0 = (((var_a0 * 2) | (var_v0 != 0)) & ~temp_t0) | temp_t1;
                var_a1 += 1;
                var_v0 = var_a0 & temp_t2;
            }
if (var_a1 < temp_v0) goto __repair_rows;
            return var_a0;
        }
        goto block_8;
    }
    temp_v0_2 = arg2 & 0xFF;
    var_a1_2 = 0;
    if (temp_v0_2 > 0) {
        var_v0_2 = var_a0 & 1;
        do {
            var_a0 = ((u32) (var_a0 & ~temp_t0) >> 1) | (-var_v0_2 & temp_t2) | temp_t1;
            var_a1_2 += 1;
            var_v0_2 = var_a0 & 1;
        } while (var_a1_2 < temp_v0_2);
    }
block_8:
    return var_a0;
}
