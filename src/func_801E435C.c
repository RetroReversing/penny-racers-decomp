extern u16 D_801E91D4[];
extern u16 D_801E97CA[];

s32 func_801E435C(s32 arg0, s32 arg1)
{
    s32 xoff = (arg0 & 0xFF) * 0x30;
    s32 t = arg1 & 0xFF;
    s32 off = t * 2;
    s32 x = *(u16 *)((u8 *)D_801E97CA + xoff);
    s32 y = *(u16 *)((u8 *)D_801E91D4 + off);
    return ((y & x) >> (t * 4)) & 0xFF;
}
