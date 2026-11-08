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

s32 func_8002ABE0();
s32 func_8002AC78();
s32 func_8002AD1C();
s32 func_8002FE20();
extern void *D_80046DF4;

s32 func_8002AA1C(s32 arg0, s32 *arg1, s32 arg2, s32 arg3) {
    void *sp10;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_s0;
    s32 var_s1;
    s32 var_s2;
    s32 var_s3;
    void *var_a0;

    var_s1 = arg3;
    var_s2 = arg0;
    var_s3 = arg2;
    if (M2C_FIELD(D_80046DF4, s32 *, 0) == 0) {
        do {*arg1 = 0;}while(0);
    } else {
        temp_v0 = func_8002AD1C(&sp10);
        M2C_FIELD(D_80046DF4, s32 *, 0x28) = temp_v0;
        if ((temp_v0 - M2C_FIELD(D_80046DF4, s32 *, 0x2C)) < var_s1) {
            do {
                M2C_FIELD(D_80046DF4, s32 *, 0x28) &= ~0xF;
                M2C_FIELD(sp10, s32 *, 0x10) += func_8002AC78(M2C_FIELD(sp10, s32 (**)(void *), 8)(sp10));
                temp_v0_2 = func_8002AD1C(&sp10, sp10);
                M2C_FIELD(D_80046DF4, s32 *, 0x28) = temp_v0_2;
            } while ((temp_v0_2 - M2C_FIELD(D_80046DF4, s32 *, 0x2C)) < var_s1);
        }
        var_a0 = (void *)-0x10;
        M2C_FIELD(D_80046DF4, s32 *, 0x28) &= ~0xF;
        if (var_s1 > 0) {
            do {
                var_s0 = M2C_FIELD(D_80046DF4, s32 *, 0x50);
                if (var_s1 < var_s0) {
                    var_s0 = var_s1;
                }
                M2C_FIELD(D_80046DF4, s32 *, 0x54) = var_s3;
                var_a0 = D_80046DF4;
                var_s1 -= var_s0;
                var_s2 = func_8002FE20(M2C_FIELD(D_80046DF4, s32 *, 0x2C), var_s2);
                var_s3 += var_s0 * 4;
                M2C_FIELD(var_a0, s32 *, 0x2C) += var_s0;
            } while (var_s1 > 0);
        }
        *arg1 = (s32) (var_s2 - arg0) >> 3;
        func_8002ABE0(var_a0);
    }
    return var_s2;
}
