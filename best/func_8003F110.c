/* identical to func_80095990 in V-RALLY-PAL (local match library) (matched), with its names changed by decompdecomp */
s32 osVirtualToPhysical();
s32 func_800346B0();
s32 func_8003F0A0();
extern char D_800A722C[];
extern char D_800A7230[];

s32 func_8003F110(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    if (arg1 & 7) {
        func_800346B0(D_800A722C, D_800A7230, 0x3A);
    }
    if (arg2 & 7) {
        func_800346B0(D_800A722C, D_800A7230, 0x3B);
    }
    if (arg3 & 7) {
        func_800346B0(D_800A722C, D_800A7230, 0x3C);
    }
    if (func_8003F0A0() != 0) {
        return -1;
    }
    *(vs32 *)0xA4040000 = arg1;
    *(vs32 *)0xA4040004 = osVirtualToPhysical(arg2);
    if (arg0 == 0) {
        *(vs32 *)0xA404000C = arg3 - 1;
    } else {
        *(vs32 *)0xA4040008 = arg3 - 1;
    }
    return 0;
}
