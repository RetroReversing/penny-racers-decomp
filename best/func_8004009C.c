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

s32 func_8003F5B0();
s32 func_8003F980();
s32 func_8004077C();

s32 func_8004009C(void *arg0, u16 *arg1) {
    u16 sp18;
    u16 sp1A;
    s16 sp1C;
    s16 sp1E;
    u16 sp20;
    u16 sp22;
    s32 temp_v0;
    s32 var_s0_2;
    s32 var_s4;
    s32 var_v0;
    char *var_a1;
    char *var_s0;
    char *var_s1;
    u16 temp_a0;
    u16 temp_a2;
    u16 temp_v0_2;

    if ((M2C_FIELD(arg0, u8 *, 0x65) == 0) || (M2C_FIELD(arg0, u8 *, 0x65) = 0U, var_v0 = func_8004077C(), (var_v0 == 0))) {
        var_s4 = 1;
        var_s0 = &sp1A;
        sp18 = 1;
        sp1A = 3;
        sp1C = 4;
        sp1E = 6;
loop_3:
        var_v0 = func_8003F5B0(M2C_FIELD(arg0, s32 *, 4), M2C_FIELD(arg0, s32 *, 8), *(u16 *)var_s0, arg1);
        var_a1 = arg1;
        if (var_v0 == 0) {
            sp22 = 0;
            sp20 = 0;
            do {
                temp_v0_2 = *(u16 *)var_a1;
                var_a1 += 2;
                temp_a2 = sp20 + temp_v0_2;
                temp_a0 = sp22 + ~temp_v0_2;
                sp20 = temp_a2;
                sp22 = temp_a0;
            } while ((u32) var_a1 < (u32) (arg1 + 0x1C));
            if ((M2C_FIELD(arg1, u16 *, 0x1C) != (temp_a2 & 0xFFFF)) || (M2C_FIELD(arg1, u16 *, 0x1E) != (temp_a0 & 0xFFFF))) {
                var_s4 += 1;
                var_s0 += 2;
                if (var_s4 >= 4) {
                    goto block_10;
                }
                goto loop_3;
            }
block_10:
            var_s0_2 = 0;
            if (var_s4 == 4) {
                return 0xA;
            }
            var_s1 = &sp18;
loop_13:
            if (var_s0_2 != var_s4) {
                temp_v0 = func_8003F980(M2C_FIELD(arg0, s32 *, 4), M2C_FIELD(arg0, s32 *, 8), *(u16 *)var_s1, arg1, 1);
                if (temp_v0 == 0) {
                    goto block_17;
                }
                return temp_v0;
            }
block_17:
            var_s0_2 += 1;
            var_s1 += 2;
            if (var_s0_2 >= 4) {
                var_v0 = 0;
                /* Duplicate return node #19. Try simplifying control flow for better match */
                return var_v0;
            }
            goto loop_13;
        }
        /* Duplicate return node #19. Try simplifying control flow for better match */
        return var_v0;
    }
    return var_v0;
}
