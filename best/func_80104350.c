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

extern M2C_UNK D_8018A288;
extern M2C_UNK func_8018D130;

s32 func_80104350(s32 arg0, s32 arg1, s32 arg2) {
    s32 var_a3;
    s32 var_a3_2;
    s32 var_t0;
    s32 var_v0;
    s32 var_v0_2;
    u16 temp_v1;

    var_a3 = 0;
    var_v0 = 0 * 2;
    __repair_rows: {
        *(var_v0 + &D_8018A288) = 0xFFFF;
        var_a3 += 1;
        var_v0 = var_a3 * 2;
    }
if (var_a3 < 0x20) goto __repair_rows;
    var_a3_2 = 0;
    var_t0 = 0;
    if ((arg2 & 0xFF) > 0) {
        var_v0_2 = 0 * 2;
        do {
            temp_v1 = *(var_v0_2 + (((arg0 & 0xFF) * 0x12C) + (&func_8018D130 + 0x10)));
            var_a3_2 += 1;
            if (((temp_v1 & 0x700) == ((arg1 << 8) & 0x700 & 0xFFFF)) && !(temp_v1 & 0x1000)) {
                *((var_t0 * 2) + &D_8018A288) = temp_v1;
                var_t0 += 1;
            }
            var_v0_2 = var_a3_2 * 2;
        } while (var_a3_2 < (arg2 & 0xFF));
    }
    return var_t0 - 1;
}
