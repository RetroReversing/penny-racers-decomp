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

M2C_UNK func_801CA528(s32 *, s32, s32, u8, M2C_UNK *, s32); /* extern */
extern M2C_UNK D_801CF4C8;

void func_801CA9B4(s32 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, u8 *arg5) {
    s32 sp18;
    s32 var_s0;
    s32 var_s1;

    sp18 = *arg0;
    var_s0 = 0;
    var_s1 = arg1;
    if (*arg5 != 0xFF) {
        do {
            func_801CA528(&sp18, var_s1 & 0xFFFF, arg2 & 0xFFFF, *(arg5 + (var_s0 & 0xFFFF)), &D_801CF4C8, arg4);
            var_s0 += 1;
            var_s1 += arg3;
        } while (*(arg5 + (var_s0 & 0xFFFF)) != 0xFF);
    }
    *arg0 = sp18;
}
