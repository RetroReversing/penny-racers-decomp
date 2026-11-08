/* identical to func_8008DB50 in V-RALLY-PAL (local match library) (matched), with its names changed by decompdecomp */
extern char D_800A6F90[];
extern char D_800A6F94[];

void func_800346B0(char *, char *, s32);
s32 func_8003F330(void);

s32 func_8003A490(s32 arg0, s32 *arg1) {
    s32 val;

    if (arg0 & 3) {
        func_800346B0(D_800A6F90, D_800A6F94, 0x33);
    }
    if (arg1 == NULL) {
        func_800346B0(D_800A6F90, D_800A6F94, 0x34);
    }
    if (func_8003F330() != 0) {
        return -1;
    }
    val = *(s32 *)(arg0 | 0xA0000000);
    *arg1 = val;
    return 0;
}
