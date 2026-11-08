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

s32 func_801496B0(s32, s32, s32);                   /* extern */
extern u8 D_8018994E;
extern u8 D_80189B36;
extern u16 D_8018A288;
extern M2C_UNK D_8018D140;

s32 func_80149220(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_v1_2;
    s32 var_a0;
    s32 var_s0;
    s32 var_s0_2;
    s32 var_s1;
    s32 var_s1_2;
    s32 var_s2;
    s32 var_v0_2;
    u16 temp_v1;
    u16 var_s4;
    u32 var_v0;

    var_s2 = arg0;
    var_s4 = 0x2FFF;
    if (arg3 == 1) {
        var_s4 = 0x4FFF;
    }
    var_v0 = var_s2 & 0xFF;
    if ((var_s2 & 0xFF) == 8) {
        var_s1 = 0;
        var_s0 = 0;
        if ((arg2 & 0xFF) > 0) {
            var_v0_2 = 0 * 2;
            do {
                temp_v1 = *(var_v0_2 + ((arg3 * 0x12C) + &D_8018D140));
                var_s0 += 1;
                if ((temp_v1 & 0x1FFF) == 0xD) {
                    var_s4 = temp_v1;
                    var_s1 = 1;
                }
                var_v0_2 = var_s0 * 2;
            } while (var_s0 < (arg2 & 0xFF));
        }
        var_v0 = var_s2 & 0xFF;
        if (!(var_s1 & 0xFF)) {
            if (D_8018994E == 0) {
                var_s2 = 7;
                goto block_13;
            }
            var_v0 = var_s2 & 0xFF;
            if (!(D_80189B36 & 0x20)) {
                var_s2 = 7;
block_13:
                var_v0 = 7 & 0xFF;
            }
        }
    }
    var_s1_2 = 0;
    if (var_v0 < 8U) {
        var_s0_2 = 0;
        var_a0 = arg3 & 0xFF;
loop_16:
        temp_v1_2 = func_801496B0(var_a0, var_s2 & 0xFF, arg2 & 0xFF);
        if (D_8018A288 != 0xFFFF) {
            var_s1_2 = 1;
        } else if (((D_8018994E == 0) | (arg3 == 1)) != 0) {
            var_s2 = (var_s2 + 1) & 7;
            var_s0_2 += 1;
            var_a0 = arg3 & 0xFF;
            if (var_s0_2 < 8) {
                goto loop_16;
            }
        }
        if (var_s1_2 & 0xFF) {
            if (!(arg1 & 0xFF)) {
                return D_8018A288 & 0xFFFF;
            }
            var_s4 = (&D_8018A288)[temp_v1_2];
            goto block_25;
        }
        goto block_25;
    }
block_25:
    return var_s4 & 0xFFFF;
}
