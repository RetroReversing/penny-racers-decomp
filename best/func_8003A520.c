/* identical to func_8008DBE0 in V-RALLY-PAL (local match library) (matched), with its names changed by decompdecomp */
extern char D_800A6FA0[];
extern char D_800A6FA4[];
void func_800346B0(void *, void *, s32);
s32 func_8003F330();

s32 func_8003A520(s32 arg0, s32 arg1) {
    if (arg0 & 3) {
        func_800346B0(D_800A6FA0, D_800A6FA4, 0x34);
    }
    if (func_8003F330() != 0) {
        return -1;
    }
    *(s32 *)(arg0 | 0xA0000000) = arg1;
    return 0;
}
