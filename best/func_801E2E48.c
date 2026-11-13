s32 func_801E2E00(s32, void *);
extern u8 D_801E9018[];
extern u8 D_801E97A0[];
extern u8 D_801E97CC[];

void func_801E2E48(s32 arg0)
{
    s32 i;
    s32 off;

    off = (arg0 & 0xFFFF) * 0x30;
    for (i = 0; i < 0x30; i++) {
        D_801E97A0[off + i] = D_801E9018[off + i];
    }
    func_801E2E00(arg0 & 0xFFFF, D_801E97CC + off);
}
