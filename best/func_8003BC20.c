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

s32 func_8003F5B0(s32, s32, s32, s32 *);            /* extern */
s32 func_800403E0();                                /* extern */

s32 func_8003BC20(void *arg0, u16 arg1, s32 arg2, u8 *arg3, u8 *arg4, s32 *arg5) {
    union {
        unsigned char bytes[96];
        struct { unsigned char pad[16]; s32 value; } view_sp10;
        struct { unsigned char pad[20]; u16 value; } view_sp14;
        struct { unsigned char pad[28]; u8 value; } view_sp1C;
        struct { unsigned char pad[32]; u8 value; } view_sp20;
    } m2c_initial_frame;

             
            
            
    s32 temp_v0;
    s32 var_a0;
    s32 var_a0_2;
    s32 var_a3;
    s32 var_s0;
    s32 var_v0;
    u8 *var_a1;
    u8 *var_a1_2;
    u8 *var_a2;
    u8 *var_a2_2;

    var_v0 = 2;
    if (func_800403E0() != 2) {
        var_s0 = 0;
        if (M2C_FIELD(arg0, s32 *, 0x50) > 0) {
loop_3:
            temp_v0 = func_8003F5B0(M2C_FIELD(arg0, s32 *, 4), M2C_FIELD(arg0, s32 *, 8), (M2C_FIELD(arg0, s32 *, 0x5C) + var_s0) & 0xFFFF, &m2c_initial_frame.view_sp10.value);
            if (temp_v0 == 0) {
                if ((m2c_initial_frame.view_sp14.value == (arg1 & 0xFFFF)) && (m2c_initial_frame.view_sp10.value == arg2)) {
                    var_a3 = 0;
                    if (arg3 != NULL) {
                        var_a0 = 0;
                        var_a2 = arg3;
                        var_a1 = &m2c_initial_frame.view_sp20.value;
loop_8:
                        var_a2 += 1;
                        if (*var_a1 != *var_a2) {
                            var_a3 = 1;
                        } else {
                            var_a0 += 1;
                            var_a1 += 1;
                            if (var_a0 < 0x10) {
                                goto loop_8;
                            }
                        }
                    }
                    if ((arg4 != NULL) & (var_a3 == 0)) {
                        var_a0_2 = 0;
                        var_a2_2 = arg4;
                        var_a1_2 = &m2c_initial_frame.view_sp1C.value;
loop_12:
                        var_a2_2 += 1;
                        if (*var_a1_2 == *var_a2_2) {
                            var_a0_2 += 1;
                            var_a1_2 += 1;
                            if (var_a0_2 < 4) {
                                goto loop_12;
                            }
                        } else {
                            var_a3 = 1;
                        }
                    }
                    if (var_a3 == 0) {
                        *arg5 = var_s0;
                        goto block_16;
                    }
                    goto block_19;
                }
block_19:
                var_s0 += 1;
                if (var_s0 >= M2C_FIELD(arg0, s32 *, 0x50)) {
                    goto block_20;
                }
                goto loop_3;
            }
block_16:
            return temp_v0;
        }
block_20:
        *arg5 = -1;
        var_v0 = 5;
        /* Duplicate return node #21. Try simplifying control flow for better match */
        return var_v0;
    }
    return var_v0;
}
