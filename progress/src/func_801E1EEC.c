s32 func_800DE41C(s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32);
s32 func_800DEFF8();
s32 func_801DD938(s32, s32, s32, s32, s32, s32, s32, s32, s32, s32);
s32 func_801DDA5C();
extern u8 D_801F1888;
extern s32 func_801E2020;
extern s32 func_801E3640;
extern s32 func_801E3AE4;

void func_801E1EEC(u8 arg0, u8 arg1)
{
    D_801F1888 = arg0;
    func_800DEFF8();
    func_801DDA5C();
    if (arg0 == 8) {
        func_801DD938(0x10, 0x4C, 0xA, 2, 0xC8, 0xB4, 0x12, 0x1F, 0, 0x21);
        return;
    }
    if (arg0 == 6) {
        func_800DE41C(0, arg1, 3, 0, 0, 0xFF, 0, (s32) &func_801E3640, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    } else if (arg0 == 9) {
        func_800DE41C(0, arg1, 3, 0, 0, 0xFF, 0, (s32) &func_801E3AE4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    } else {
        func_800DE41C(0, arg1, 3, 0, 0, 0xFF, 0, (s32) &func_801E2020, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    }
}
