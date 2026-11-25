/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

s32 func_801CB4E8(s32 *, s32, s32, u16, s32 *, s32); /* extern */
extern s32 D_802D6898;

void func_801CB404(s32 *arg0, s32 arg1, u16 arg2, s32 arg3, s32 arg4, u16 *arg5_in) {
  u16 * arg5;
    s32 sp18;
    s32 var_s0;
    

    sp18 = *arg0;
  arg5 = arg5_in;
    var_s0 = 0;
    if (*arg5 != 0xFFFF) {
        do {
            func_801CB4E8(&sp18, arg1 & 0xFFFF, (arg2 & 0xFFFF) & 0xFFFF, *(((var_s0 & 0xFFFF) * 2) + arg5), &D_802D6898, arg4);/*__repair_loop_weight*/do {
            var_s0 += 1;} while (0);
            arg1 += arg3;
        } while (*(((var_s0 & 0xFFFF) * 2) + arg5) != 0xFFFF);
    }
    *arg0 = sp18;
}
