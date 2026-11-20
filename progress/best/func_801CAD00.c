/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

s32 func_801CAF18(s32 *, s32, s32, u16, s32, s32, s32, s32, s32, s32, s32); /* extern */

void func_801CAD00(s32 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, u16 *arg5, u8 arg6, s32 arg7, s32 arg8, s32 arg9, s32 arg10, s32 arg11, u32 arg12, s32 arg13) {
    s32 sp30;
    s32 *sp3C;
    s32 var_s0;
    s32 var_a0;
    
    s32 var_s2;
    s32 var_s3;
    s32 var_s5;
    s32 var_v0;
    register s32 var_v0_2;
    u16 temp_v1;
    u32 var_a1;
    register u32 var_s1;

    sp30 = *sp3C;
    sp3C = arg0;
    var_s2 = 0;
    var_s3 = arg1;
    var_s5 = arg2;
    if (*arg5 != 0xFFFF) {
        do {
            var_a0 = var_s2 & 0xFFFF;
            var_a1 = 0;
            if (*((var_a0 * 2) + arg5) != 0xFFFF) {
                var_a1 = 1;
loop_4:
                var_a0 += 1;
                if (var_a1 < arg12) {
                    if (*((var_a0 * 2) + arg5) != 0xFFFF) {
                        var_a1 += 1;
                        goto loop_4;
                    }
                }
            }
            var_s1 = var_a1;
            var_v0 = var_s2 & 0xFFFF;
            if (var_s1 >= arg12) {
                temp_v1 = *((var_a0 * 2) + arg5);
                var_v0 = var_s2 & 0xFFFF;
                if ((temp_v1 != 0xFFFF) & (temp_v1 != 0)) {
                    var_s0 = 1;
                    if ((s32) var_s1 > 1) {
                        var_v0_2 = 1 * 2;
loop_12:
                        if (*((arg5 + (var_a0 * 2)) - var_v0_2) == 0) {
                            var_s1 = (var_a1 - var_s0) + 1;
                        } else {
                            var_s0 += 1;
                            var_v0_2 = var_s0 * 2;
                            if (var_s0 < (s32) var_a1) {
                                goto loop_12;
                            }
                        }
                    }
                    var_v0 = var_s2 & 0xFFFF;
                }
            }
            if (*((var_v0 * 2) + arg5) == 0) {
                var_s2 += 1;
                var_s1--;
            }
            var_a0 = 0;
            if ((s32) var_s1 > 0) {
                __repair_rows: {
                    func_801CAF18(&sp30, var_s3 & 0xFFFF, var_s5 & 0xFFFF, *(((var_s2 & 0xFFFF) * 2) + arg5), arg7, arg4, arg6 & 0xFF, arg8, arg9, arg10, arg11);
                    var_a0 += 1;
                    var_s3 += arg3;
                    var_s2 += 1;
                }
if (var_a0 < (s32) var_s1) goto __repair_rows;
            }
            var_s5 += arg13;
            var_s3 = arg1;
        } while (*((((unsigned)var_s2 & 0xFFFF) * 2) + arg5) != 0xFFFF);
    }
    *sp3C = sp30;
}
