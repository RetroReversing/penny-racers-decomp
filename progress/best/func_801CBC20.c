/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

s32 func_801CA4DC();
s32 func_801CA528();
extern char D_801CF4C8[];

void func_801CBC20(s32 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, void *arg5) {
    char sp18[0x18];
    s32 var_s3;
    register s32 sp38;
    s32 temp_s2;
    u32 var_s0;
    u8 sp30;
    s32 var_v0_2;
    s32 var_v0;
    
s32 __repair_phase_var_v1;
    
    u32 temp_v0;
    u32 var_a0;

    sp38 = *arg0;
    
    var_s3 = arg1;
    var_v0_2 = 0;
    {
        u16 __repair_i;
        for (__repair_i = 0; __repair_i < 0x11; __repair_i++) {
            (sp18)[__repair_i] = 0;
        }
    }
    {
        u16 __repair_i;
        for (__repair_i = 0; __repair_i < 5; __repair_i++) {
            (&sp30)[__repair_i] = 0;
        }
    }
    func_801CA4DC((var_s0 = 0, arg5 + 0xE), sp18, 0x10);
    func_801CA4DC(arg5 + 0xA, &sp30, 4);
    temp_v0 = 0 & 0xFFFF;
    var_a0 = temp_v0;
    if (((*(u8 *)((char *)((arg5 + temp_v0)) + 0xE)) != 0) & (temp_v0 < 0x10U)) {
        do {/*__repair_loop_weight*/do {
            ++var_s0;} while (0);
            func_801CA528(&sp38, var_s3 & 0xFFFF, arg2 & 0xFFFF, (sp18)[var_a0], D_801CF4C8, arg4);
            var_a0 = var_s0 & 0xFFFF;
            var_s3 += arg3;
        } while (((*(u8 *)((char *)((arg5 + var_a0)) + 0xE)) != 0) & (var_a0 < 0x10U));
    }
    if ((*(u8 *)((char *)(arg5) + 0xA)) != 0) {
s32 __repair_branch___repair_phase_var_v1_0 = __repair_phase_var_v1;

        func_801CA528(&sp38, var_s3 & 0xFFFF, __repair_branch___repair_phase_var_v1_0, 0xEU, D_801CF4C8, arg4);
        __repair_branch___repair_phase_var_v1_0 = arg2 & 0xFFFF;
        func_801CA528(&sp38, (var_s3 + ((u32) (arg3 & 0xFFFF) >> 1)) & 0xFFFF, __repair_branch___repair_phase_var_v1_0, sp30, D_801CF4C8, arg4);
    }
    *arg0 = sp38;
}
