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

M2C_UNK func_801CAF18(s32 *, s32, s32, u16, s32, s32, s32, s32, s32, s32, s32); /* extern */
extern M2C_UNK D_801D5960;

void func_801CB9EC(s32 *arg0, s32 arg1, s32 arg2, u16 arg3, s32 arg4, s32 arg5, u8 arg6, u8 arg7, u8 arg8, u16 arg9, u16 arg10, u16 arg11, u16 arg12, u16 arg13) {
    s32 sp30[16];
    s32 sp40;
    M2C_UNK sp34;
    s16 sp38;
    s32 sp50;
    s32 *sp5C;
    u16 sp66;
    s32 var_a3;
    s32 var_a3_2;
    s32 var_s0;
    s32 var_s1;
    s32 var_v0;
    u16 *temp_a0;
    u16 temp_a3;
    u16 var_t0;
    u32 temp_v0;
    u32 temp_v1;
    u32 var_v1;

    sp5C = arg0;
    sp66 = arg3;
    var_t0 = arg13;
    sp30[0] = M2C_UNALIGNED32(M2C_FIELD(&D_801D5960, M2C_UNK *, 0));
    sp34 = M2C_UNALIGNED32(M2C_FIELD(&D_801D5960, M2C_UNK *, 4));
    sp38 = M2C_FIELD(&D_801D5960, s16 *, 8);
    sp50 = *sp5C;
    var_a3 = 0;
    do {
        temp_a0 = &(&sp30[0])[var_a3];
        temp_v1 = var_t0 & 0xFFFF;
        M2C_FIELD(temp_a0, s16 *, 0x10) = (s16) (temp_v1 / (u16) M2C_FIELD(temp_a0, u16 *, 0));
        var_a3 += 1;
        var_t0 -= (temp_v1 / (u16) M2C_FIELD(temp_a0, u16 *, 0)) * M2C_FIELD(temp_a0, u16 *, 0);
    } while (var_a3 < 5);
    var_s1 = arg1;
    if (arg8 != 0) {
        var_a3_2 = 0;
        if (sp40 == 0) {
            var_v0 = 0 * 2;
            do {
                M2C_FIELD((var_v0 + &sp30[0]), s16 *, 0x10) = 0xFFFF;
                var_a3_2 += 1;
                var_v0 = var_a3_2 * 2;
            } while ((M2C_FIELD(&(&sp30[0])[var_a3_2], u16 *, 0x10) == 0) & (var_a3_2 < 4));
            var_s1 = arg1;
        }
    }
    var_s0 = 5 - (arg7 & 0xFF);
    temp_v0 = var_s0 & 0xFFFF;
    var_v1 = temp_v0;
    if (temp_v0 < 5U) {
        do {
            temp_a3 = M2C_FIELD(&(&sp30[0])[var_v1], u16 *, 0x10);
            if (temp_a3 != 0xFFFF) {
                func_801CAF18(&sp50, var_s1 & 0xFFFF, arg2 & 0xFFFF, temp_a3, arg4, arg5, arg6 & 0xFF, (s32) (s16) arg9, (s32) (s16) arg10, (s32) (s16) arg11, (s32) (s16) arg12);
            }
            var_s0 += 1;
            var_v1 = var_s0 & 0xFFFF;
            var_s1 += sp66;
        } while (var_v1 < 5U);
    }
    *sp5C = sp50;
}
