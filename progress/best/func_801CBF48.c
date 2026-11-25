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

M2C_UNK func_801CB74C(s32 *, s32, s32, s32, s32, u8 *); /* extern */
extern M2C_UNK D_801D5960;

void func_801CBF48(s32 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, u8 arg5, s32 arg6) {
    s32 sp18[16];
    M2C_UNK sp1C;
    s16 sp20;
    M2C_UNK sp27;
    u8 sp28;
    u8 sp29;
    s32 sp30;
    s32 temp_v1;
    s32 var_t0;
    s32 var_t0_2;
    s32 var_t1;
    s32 var_t4;
    u16 *temp_a0;
    u8 *var_v0;

    var_t1 = arg6;
    sp18[0] = M2C_UNALIGNED32(M2C_FIELD(&D_801D5960, M2C_UNK *, 0));
    sp1C = M2C_UNALIGNED32(M2C_FIELD(&D_801D5960, M2C_UNK *, 4));
    sp20 = M2C_FIELD(&D_801D5960, s16 *, 8);
    sp30 = *arg0;
    if ((s16) arg6 < 0) {
        var_t1 = (s32) -(s16) arg6;
        var_t4 = 0;
    } else {
        var_t4 = 1;
    }
    sp28 = 0x20;
    var_t0 = 0;
    do {
        temp_a0 = &(&sp18[0])[var_t0];
        (&sp29)[var_t0] = ((s16) var_t1 / (s32) *temp_a0) + 0x30;
        var_t0 += 1;
        var_t1 %= *temp_a0;
    } while (var_t0 < 5);
    (&sp29)[var_t0] = 0;
    var_t0_2 = 1;
    if ((sp29 ^ 0x30) == 0) {
        do {
            (&sp28)[var_t0_2] = 0x20;
            var_t0_2 += 1;
        } while (((&sp28)[var_t0_2] == 0x30) & (var_t0_2 < 5));
    }
    if (!(var_t4 & 0xFFFF)) {
        temp_v1 = 5 - arg5;
        if ((var_t0_2 - 1) < temp_v1) {
            var_v0 = &(&sp28)[temp_v1];
        } else {
            var_v0 = &sp27 + var_t0_2;
        }
        *var_v0 = 0x2D;
    }
    func_801CB74C(&sp30, arg1 & 0xFFFF, arg2 & 0xFFFF, arg3 & 0xFFFF, arg4, &(&sp28)[((var_t4 & 0xFFFF) + 5) - (arg5 & 0xFF)]);
    *arg0 = sp30;
}
