/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

s32 func_801CAF18(s32 *, s32, s32, u16, s32, s32, s32, s32, s32, s32, s32); /* extern */

void func_801CABF4(s32 *arg0, s32 arg1, u16 arg2, s32 arg3, s32 arg4, u16 *arg5, u8 arg6, s32 arg7, s32 arg8, s32 arg9, s32 arg10, s32 arg11) {
    s32 sp30;
    s32 var_s0;
    s32 var_s1;

    sp30 = *arg0;
    var_s1 = arg1;
    var_s0 = 0;
    if (*arg5 != 0xFFFF) {
        do {
            func_801CAF18(&sp30, var_s1 & 0xFFFF, arg2 & 0xFFFF, *(((var_s0 & 0xFFFF) * 2) + arg5), arg7, arg4, arg6 & 0xFF, arg8, arg9, arg10, arg11);/*__repair_loop_weight*/do {
            var_s0 += 1;} while (0);
            var_s1 += arg3;
        } while (*(((var_s0 & 0xFFFF) * 2) + arg5) != 0xFFFF);
    }
    *arg0 = sp30;
}
