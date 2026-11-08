/* identical to alLoadNew in V-RALLY-PAL (local match library) (matched), with its names changed by decompdecomp */
s32 func_80036B10(void *a0, void *fn2, void *fn3, s32 n4);
s32 func_80038340(s32, s32, s32, s32, s32);
extern void *func_80034EF0;
extern void *func_800356D0;

void func_80034CB4(void *arg0, s32 (*arg1)(void *), s32 arg2) {
    func_80036B10(arg0, &func_80034EF0, &func_800356D0, 0);
    *(s32 *)((s8 *)arg0 + 0x14) = func_80038340(0, 0, arg2, 1, 0x20);
    *(s32 *)((s8 *)arg0 + 0x18) = func_80038340(0, 0, arg2, 1, 0x20);
    *(s32 *)((s8 *)arg0 + 0x30) = arg1((s8 *)arg0 + 0x34);
    *(s32 *)((s8 *)arg0 + 0x3C) = 0;
    *(s32 *)((s8 *)arg0 + 0x40) = 1;
    *(s32 *)((s8 *)arg0 + 0x44) = 0;
}
