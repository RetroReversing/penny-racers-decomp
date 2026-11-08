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

extern u8 D_80189B36;
extern M2C_UNK D_8018D140;
extern M2C_UNK D_8018D26C;
extern M2C_UNK D_8018D3A0;

s32 func_80148260(s32 arg0, s32 arg1) {
    s32 temp_a0;
    s32 var_a2;
    s32 var_a2_2;
    s32 var_a2_3;
    s32 var_a2_4;
    s32 var_a3;
    s32 var_a3_2;
    s32 var_t0;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v1;
    s32 var_v1_2;
    u32 var_a0;

    var_a2 = 0;
    var_v0 = 0 * 2;
    do {
        *(var_v0 + (((arg1 & 0xFF) * 0x12C) + &D_8018D140)) = 0xFFFF;
        var_a2 += 1;
        var_v0 = var_a2 * 2;
    } while (var_a2 < 0x96);
    var_a3_2 = 0;
    var_t0 = 0;
    var_v0_2 = 0 * 4;
    do {
        var_a0 = *(var_v0_2 + (((arg0 & 0xFF) << 5) + &D_8018D3A0));
        var_a2_2 = 0;
loop_4:
        if (var_a0 & 1) {
            *((var_a3_2 * 2) + (((arg1 & 0xFF) * 0x12C) + &D_8018D140)) = (var_t0 << 8) | var_a2_2;
            var_a3_2 += 1;
        }
        var_a2_2 += 1;
        var_a0 = var_a0 >> 1;
        if (var_a2_2 < 0x20) {
            goto loop_4;
        }
        var_t0 += 1;
        var_v0_2 = var_t0 * 4;
    } while (var_t0 < 8);
    temp_a0 = arg1 & 0xFF;
    *((var_a3_2 * 2) + ((temp_a0 * 0x12C) + &D_8018D140)) = 0x3FFF;
    var_a3 = var_a3_2 + 1;
    if (temp_a0 == 1) {
        if (D_80189B36 & 0x20) {
            *((var_a3 * 2) + (&D_8018D140 + 0x12C)) = 0x4FFF;
            var_a3 += 1;
        }
        var_a2_3 = 0;
        var_v1 = var_a3;
        __repair_rows: {
            *((var_v1 * 2) + &D_8018D26C) = *((var_a2_3 * 2) + &D_8018D26C);
            var_a2_3 += 1;
            var_v1 = var_a3 + var_a2_3;
        }
if (var_a2_3 < 8) goto __repair_rows;
    } else {
        *(&D_8018D140 + (var_a3 * 2)) = 0x2FFF;
        var_a3 += 1;
        var_a2_4 = 0;
        var_v1_2 = var_a3;
        do {
            *((var_v1_2 * 2) + &D_8018D140) = *((var_a2_4 * 2) + &D_8018D140);
            var_a2_4 += 1;
            var_v1_2 = var_a3 + var_a2_4;
        } while (var_a2_4 < 8);
    }
    return var_a3;
}
