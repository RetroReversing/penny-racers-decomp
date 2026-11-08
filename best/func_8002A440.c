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

void func_8002A440(void *arg0, u8 *arg1, u32 arg2) {
    s32 var_a3;
    s32 var_v1;
    u32 temp_t0;
    u32 var_t1;
    u8 *var_a1;
    u8 temp_a3;
    u8 temp_v0;
    u8 temp_v1;
    u8 var_v0;
    void *var_a0;

    var_a0 = arg0;
    var_a1 = arg1;
    var_t1 = 0;
    if (arg2 != 0) {
loop_2:
        temp_v1 = M2C_FIELD(var_a0, u8 *, 0);
        temp_t0 = temp_v1 & 0xFF;
        if (temp_t0 != 0) {
            if ((u32) (temp_v1 - 0x41) < 0x1AU) {
                *var_a1 = temp_v1 - 0x27;
            } else {
                temp_a3 = temp_v1 - 0x61;
                if ((u32) (temp_a3 & 0xFF) < 0x1AU) {
                    *var_a1 = temp_v1 - 0x47;
                } else if ((u32) (temp_v1 - 0x30) < 0xAU) {
                    *var_a1 = temp_v1 - 0x20;
                } else if ((u32) ((temp_v1 + 0x4F) & 0xFF) < 0x2CU) {
                    temp_v0 = M2C_FIELD(var_a0, u8 *, 1);
                    if (temp_v0 == 0xDE) {
                        var_v0 = temp_v1 - 0x3A;
                        if (temp_t0 >= 0xCAU) {
                            var_v0 = temp_v1 - 0x3F;
                        }
                        goto block_17;
                    }
                    if (temp_v0 != 0xDF) {
                        *var_a1 = temp_a3;
                    } else {
                        var_v0 = temp_v1 - 0x3A;
block_17:
                        *var_a1 = var_v0;
                        var_a0 += 1;
                    }
                } else {
                    var_a3 = 0;
                    if (D_80046DB1 == 0) {
block_24:
                        *var_a1 = 0xF;
                    } else {
                        var_v1 = 0;
loop_21:
                        if (*(&D_80046DB0 + var_v1) != temp_t0) {
                            var_v1 += 2;
                            var_a3 += 1;
                            if ((&D_80046DB1)[var_v1] != 0) {
                                goto loop_21;
                            }
                        } else {
                            *var_a1 = (&D_80046DB1)[var_v1];
                        }
                        if (*(&D_80046DB1 + (var_a3 * 2)) == 0) {
                            goto block_24;
                        }
                    }
                }
            }
            var_a1 += 1;
            var_t1 += 1;
            var_a0 += 1;
            if (var_t1 < arg2) {
                goto loop_2;
            }
        }
    }
}
