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

M2C_UNK func_801CA528(s32 *, s32, s32, u16, M2C_UNK *, s32); /* extern */
extern M2C_UNK D_801CF4C8;
extern M2C_UNK D_801D5960;

void func_801CB820(s32 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, u8 arg5, u16 arg6) {
    s32 sp18[16];
    s32 sp28;
    M2C_UNK sp1C;
    s16 sp20;
    s32 sp38;
    s32 var_a3;
    s32 var_a3_2;
    s32 var_s0;
    s32 var_s1;
    s32 var_v0;
    u16 *temp_a0;
    u16 var_t0;
    u32 temp_v0;
    u32 temp_v1;
    u32 var_v1;

    var_t0 = arg6;
    sp18[0] = M2C_UNALIGNED32(M2C_FIELD(&D_801D5960, M2C_UNK *, 0));
    sp1C = M2C_UNALIGNED32(M2C_FIELD(&D_801D5960, M2C_UNK *, 4));
    sp20 = M2C_FIELD(&D_801D5960, s16 *, 8);
    sp38 = *arg0;
    var_a3 = 0;
    do {
        temp_a0 = &(&sp18[0])[var_a3];
        temp_v1 = var_t0 & 0xFFFF;
        M2C_FIELD(temp_a0, s16 *, 0x10) = (s16) ((temp_v1 / (u16) M2C_FIELD(temp_a0, u16 *, 0)) + 0x10);
        var_a3 += 1;
        var_t0 -= (temp_v1 / (u16) M2C_FIELD(temp_a0, u16 *, 0)) * M2C_FIELD(temp_a0, u16 *, 0);
    } while (var_a3 < 5);
    var_a3_2 = 0;
    if ((sp28 ^ 0x10) == 0) {
        var_v0 = 0 * 2;
        do {
            M2C_FIELD((var_v0 + &sp18[0]), s16 *, 0x10) = 0;
            var_a3_2 += 1;
            var_v0 = var_a3_2 * 2;
        } while ((M2C_FIELD(&(&sp18[0])[var_a3_2], u16 *, 0x10) == 0x10) & (var_a3_2 < 4));
    }
    var_s1 = arg1;
    var_s0 = 5 - (arg5 & 0xFF);
    temp_v0 = var_s0 & 0xFFFF;
    var_v1 = temp_v0;
    if (temp_v0 < 5U) {
        do {
            func_801CA528(&sp38, var_s1 & 0xFFFF, arg2 & 0xFFFF, M2C_FIELD(&(&sp18[0])[var_v1], u16 *, 0x10), &D_801CF4C8, arg4);
            var_s0 += 1;
            var_v1 = var_s0 & 0xFFFF;
            var_s1 += arg3;
        } while (var_v1 < 5U);
    }
    *arg0 = sp38;
}
