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

void func_801CABF4(s32 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, u16 *arg5, u8 arg6, s32 arg7, s32 arg8, s32 arg9, s32 arg10, s32 arg11) {
    s32 sp30;
    s32 var_s0;
    s32 var_s1;

    sp30 = *arg0;
    var_s0 = 0;
    var_s1 = arg1;
    if (*arg5 != 0xFFFF) {
        do {
            func_801CAF18(&sp30, var_s1 & 0xFFFF, arg2 & 0xFFFF, *(((var_s0 & 0xFFFF) * 2) + arg5), arg7, arg4, arg6 & 0xFF, arg8, arg9, arg10, arg11);
            var_s0 += 1;
            var_s1 += arg3;
        } while (*(((var_s0 & 0xFFFF) * 2) + arg5) != 0xFFFF);
    }
    *arg0 = sp30;
}
