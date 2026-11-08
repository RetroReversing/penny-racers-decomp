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

extern M2C_UNK D_80046DB0;
extern u8 D_80046DB1;

void func_8002A58C(u8 *arg0, u8 *arg1, u32 arg2) {
    s32 temp_a3;
    s32 var_a3;
    s32 var_t0;
    s8 *var_a1;
    u32 var_t3;
    u8 *var_a0;
    u8 *var_t1;
    u8 *var_v1;
    u8 temp_v1;
    u8 var_v0;

    var_a0 = arg0;
    var_t1 = arg1;
    var_t3 = 0;
    if (arg2 != 0) {
        var_a1 = arg1 + 1;
        do {
            temp_v1 = *var_a0;
            temp_a3 = temp_v1 & 0xFF;
            if (temp_a3 == 0) {
                *var_t1 = temp_v1;
            } else if ((u32) (temp_v1 - 0x1A) < 0x1AU) {
                *var_t1 = temp_v1 + 0x27;
            } else if ((u32) (temp_v1 - 0x10) < 0xAU) {
                *var_t1 = temp_v1 + 0x20;
            } else if ((u32) (temp_v1 - 0x50) < 0x2CU) {
                *var_t1 = temp_v1 + 0x61;
            } else if ((u32) (temp_v1 - 0x7C) < 0xFU) {
                *var_t1 = temp_v1 + 0x3A;
                *var_a1 = 0xDE;
                var_a1 += 1;
                var_t1 += 1;
            } else if ((u32) ((temp_v1 + 0x75) & 0xFF) < 5U) {
                *var_t1 = temp_v1 + 0x3F;
                *var_a1 = 0xDE;
            } else if ((u32) ((temp_v1 + 0x70) & 0xFF) < 5U) {
                *var_t1 = temp_v1 + 0x3A;
                *var_a1 = 0xDF;
            } else {
                var_t0 = 0;
                if (D_80046DB1 != 0) {
                    var_v1 = &D_80046DB1;
                    var_a3 = 0;
                    var_v0 = D_80046DB1;
loop_19:
                    var_v1 += 2;
                    if (var_v0 != temp_a3) {
                        var_v0 = *var_v1;
                        var_a3 += 2;
                        var_t0 += 1;
                        if (var_v0 != 0) {
                            goto loop_19;
                        }
                    } else {
                        *var_t1 = *(&D_80046DB0 + var_a3);
                    }
                    if (*(&D_80046DB1 + (var_t0 * 2)) == 0) {
                        goto block_22;
                    }
                } else {
block_22:
                    *var_t1 = 0xF;
                }
            }
            var_a1 += 1;
            var_t1 += 1;
            var_t3 += 1;
            var_a0 += 1;
        } while (var_t3 < arg2);
    }
}
