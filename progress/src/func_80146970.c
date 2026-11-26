extern u16 D_80183BD4;
extern u8 D_80189B36;
extern u16 D_80189C98;
extern u8 D_80189CBE;
extern u8 D_80190CB0;
extern u16 D_80190CAE;
s32 func_8014A870(s32, s32, u8);
void func_80148688(s32, u8);
void func_8014B854(s32);

void func_80146970(void)
{
    s32 flags;
    s32 mode;
    u8 *p;
    u8 *q;
    u8 v;

    flags = func_8014A870(0x14, 3, D_80189CBE);
    if (flags & 3) {
        func_8014B854(0x3B);
    }
    p = &D_80190CB0;
    func_80148688(flags & 0xFF, *p);
    do { } while (0);
    if (flags & 0x10) {
        flags = 0;
        mode = 0x3E;
        if (!(D_80183BD4 & 0x1000)) {
            mode = 0x3D;
            { u8 *r = &D_80189B36; *r &= ~0x10; }
            D_80189C98 = *(u16 *)(p - 4);
        }
        func_8014B854(mode);
    }
    if (flags & 0x20) {
        func_8014B854(0x3A);
        { u8 *r = &D_80189B36; *r &= ~0x10; }
        D_80189C98 = D_80190CAE;
    }
}
