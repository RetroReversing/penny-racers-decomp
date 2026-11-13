/* adapted from similar verified C in siWriteWordChecked in V-RALLY (matched), with its names changed by decompdecomp */
/* identical to func_8008DBE0 in V-RALLY (matched), with its names changed by decompdecomp */
extern char D_8004A9B0[];
extern char D_8004A9B4[];
void func_800346B0(void *, void *, s32);
s32 func_8003F330();

s32 func_8003A520(s32 arg0, s32 arg1) {
    if (arg0 & 3) {
        func_800346B0(D_8004A9B0, D_8004A9B4, 0x34);
    }
    if (func_8003F330() != 0) {
        return -1;
    }
    *(s32 *)(arg0 | 0xA0000000) = arg1;
    return 0;
}
