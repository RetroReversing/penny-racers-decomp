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

M2C_UNK func_80149CC4(s32, M2C_UNK, s32, void *);   /* extern */
extern M2C_UNK D_8021E22F;
extern M2C_UNK D_8021E230;

void func_8014B410(void) {
    M2C_UNK sp10;
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a3_2;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_a2;
    s32 var_a2_2;
    s32 var_s0;
    s32 var_t0;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_3;
    s8 var_a1;
    void *temp_a3;

    var_s0 = 0;
    var_a2 = 0;
    do {
        temp_a0 = var_s0 * 0x110;
        temp_a3 = temp_a0 + &D_8021E22F;
        var_v0 = 0 * 0x10;
loop_2:
        temp_v0 = (var_v0 + var_a2) * 2;
        *(&sp10 + var_a2) = M2C_FIELD((temp_v0 + temp_a3 + *(&D_8021E22F + (temp_v0 + temp_a0))), u8 *, 2);
        var_a2 += 1;
        var_v0 = var_a2 * 0x10;
        if (var_a2 < 8) {
            goto loop_2;
        }
        func_80149CC4(var_s0, 1, var_a2, temp_a3);
        var_a2_2 = 0;
        var_v0_2 = 0 * 0x10;
loop_4:
        var_t0 = var_v0_2;
        temp_v0_2 = ((var_v0_2 + var_a2_2) * 2) + (var_s0 * 0x110);
        *(&D_8021E22F + temp_v0_2) = 0;
        var_a1 = 0;
        if (*(&D_8021E230 + temp_v0_2) > 0) {
            var_v0_3 = var_s0 * 0x11;
loop_6:
            temp_a3_2 = var_v0_3 * 0x10;
            temp_a0_2 = (var_t0 + var_a2_2) * 2;
            if (M2C_FIELD((temp_a0_2 + (temp_a3_2 + &D_8021E22F) + var_a1), s8 *, 2) != *(&sp10 + var_a2_2)) {
                var_a1 += 1;
                var_t0 = var_a2_2 * 0x10;
                var_v0_3 = var_s0 * 0x11;
                if (var_a1 >= *(&D_8021E230 + ((var_a2_2 * 0x22) + (var_s0 * 0x110)))) {
                    goto block_11;
                }
                goto loop_6;
            }
            *(&D_8021E22F + (temp_a0_2 + temp_a3_2)) = var_a1;
            var_a2_2 += 1;
        } else {
block_11:
            var_a2_2 += 1;
        }
        var_v0_2 = var_a2_2 * 0x10;
        if (var_a2_2 < 8) {
            goto loop_4;
        }
        var_s0 += 1;
        var_a2 = 0;
    } while (var_s0 < 4);
}
