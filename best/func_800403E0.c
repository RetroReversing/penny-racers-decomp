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

s32 func_8003F5B0(s32, s32, M2C_UNK, u8 *);         /* extern */
s32 func_8004077C();                                /* extern */

s32 func_800403E0(void *arg0) {
    u8 sp10;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_a0;
    s32 var_v0;
s32 __repair_phase_var_v0;
    u8 *var_a1;

    if ((M2C_FIELD(arg0, u8 *, 0x65) == 0) || (M2C_FIELD(arg0, u8 *, 0x65) = 0U, var_v0 = func_8004077C(), (var_v0 == 0))) {
        temp_v0_2 = func_8003F5B0(M2C_FIELD(arg0, s32 *, 4), M2C_FIELD(arg0, s32 *, 8), 1, &sp10);
        if (temp_v0_2 != 0) {
            __repair_phase_var_v0 = temp_v0_2;
            if (temp_v0_2 == 2) {
                temp_v0 = func_8003F5B0(M2C_FIELD(arg0, s32 *, 4), M2C_FIELD(arg0, s32 *, 8), 1, &sp10);
                var_a0 = 0;
                if (temp_v0 != 0) {
                    return temp_v0;
                }
                goto block_8;
            }
            /* Duplicate return node #12. Try simplifying control flow for better match */
            return __repair_phase_var_v0;
        }
        var_a0 = 0;
block_8:
        var_a1 = &sp10;
loop_9:
        var_a0 += 1;
        if (M2C_FIELD((arg0 + var_a0), u8 *, 0xC) == *var_a1) {
            var_a1 += 1;
            if (var_a0 >= 0x20) {
                var_v0 = 0;
                /* Duplicate return node #12. Try simplifying control flow for better match */
                return var_v0;
            }
            goto loop_9;
        }
        return 2;
    }
    return var_v0;
}
