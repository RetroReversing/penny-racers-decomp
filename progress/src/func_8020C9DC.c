s32 func_801CA140();
s32 func_8020557C();
s32 func_801CA494();
s32 func_801CABF4();
extern s32 *D_800DE0E4;
extern s32 D_8021E1BC;
extern u8 D_8021B068;
extern u8 D_8021F260[];
extern u8 D_802D92A0[];
extern u8 D_802D6898[];

void func_8020C9DC(s32 arg0)
{
    s32 *gp;
    s32 s1;

    func_801CA140(arg0);
    gp = D_800DE0E4;
    D_800DE0E4 = gp + 2;
    gp[0] = 0xED0002B4;
    gp[1] = 0x500380;
    s1 = func_8020557C(D_8021E1BC, 0xF) & 0xFFFF;
    if (D_8021B068 == 0)
    {
        func_801CA494(arg0, D_8021F260[0], D_8021F260[1], D_8021F260[2], D_8021F260[3]);
    }
    else
    {
        func_801CA494(arg0, 0xFF, 0xFF, 0xFF, 0xFF);
    }
    func_801CABF4(arg0, (u16) s1, 0xC6, 0xF, D_802D92A0, D_8021E1BC, 0, D_802D6898, 0xE, 0x10, 0xE0, 0x60);
}
