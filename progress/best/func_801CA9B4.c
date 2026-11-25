/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

s32 func_801CA528(s32 *, s32, s32, u8, s32 *, s32); /* extern */
extern s32 D_801CF4C8;

void func_801CA9B4(s32 *arg0, s32 arg1, u16 arg2, s32 arg3, s32 arg4, u8 *arg5_in) {
  u8 * arg5;
    unsigned int sp18;
    s32 var_s0;
    

    sp18 = *arg0;
  arg5 = arg5_in;
    var_s0 = 0;
    if (*arg5 != 0xFF) {
        do {
            func_801CA528(&sp18, arg1 & 0xFFFF, (arg2 & 0xFFFF) & 0xFFFF, *(arg5 + (var_s0 & 0xFFFF)), &D_801CF4C8, arg4);/*__repair_loop_weight*/do {
            var_s0 += 1;} while (0);
            arg1 += arg3;
        } while (*(arg5 + (var_s0 & 0xFFFF)) != 0xFF);
    }
    *arg0 = sp18;
}
