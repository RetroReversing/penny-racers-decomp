/* identical to func_8029C638 in South Park (local match library) (matched), with its names changed by decompdecomp */
s32 func_8003F330(void) {
    return (*(volatile u32 *)0xA4800018 & 3) != 0;
}

extern s32 D_800F62E0;
s32 func_8029DDA0(void *, s32, s32);

void func_8029C610(void) {
    func_8029DDA0(&D_800F62E0, 0, 0);
}

extern s32 D_800AB0D8;
extern s32 D_800AB0DC;
s32 func_800346B0(void *, void *, s32);
s32 osVirtualToPhysical(s32);
s32 func_800338B0(s32, s32);
s32 func_8003EBF0(s32, s32);

s32 func_8003F350(s32 arg0, s32 arg1) {
    if (arg1 & 3) {
        func_800346B0(&D_800AB0D8, &D_800AB0DC, 0x37);
    }
    if (func_8003F330() != 0) {
        return -1;
    }
    if (arg0 == 1) {
        func_8003EBF0(arg1, 0x40);
    }
    *(volatile s32 *)0xA4800000 = osVirtualToPhysical(arg1);
    if (arg0 == 0) {
        *(volatile s32 *)0xA4800004 = 0x1FC007C0;
    } else {
        *(volatile s32 *)0xA4800010 = 0x1FC007C0;
    }
    if (arg0 == 0) {
        func_800338B0(arg1, 0x40);
    }
    return 0;
}

extern s32 D_800B3A80;
extern s32 D_800F62D8;
s32 func_8029D588(void *, void *, s32);
s32 func_8029DC78(void *, void *, s32);

void func_8029C5A4(void) {
    s32 sp10;

    if (D_800B3A80 == 0) {
        D_800B3A80 = 1;
        func_8029D588(&D_800F62E0, &D_800F62D8, D_800B3A80);
        func_8029DDA0(&D_800F62E0, 0, 0);
    }
    func_8029DC78(&D_800F62E0, &sp10, 1);
}
