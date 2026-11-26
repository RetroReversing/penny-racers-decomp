s16 func_800DE41C();
void func_801DDA5C(void);
void func_80231C5C(void);
void func_80203DF8();
void func_802153C4(s32, f32, f32, s32, s32, s32);
extern u8 D_801D5A90[];
extern u8 D_801D6670[];
extern u8 D_801DF62C[];
extern u8 D_801DFDEC[];
extern s16 D_801E9D5E;
void func_80138B1C(void);

void func_801E0D38(void)
{
    D_801E9D5E = func_800DE41C(0, 0, 3, 0, 0x40, 0xFF, 0, NULL, &func_80138B1C, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    func_800DE41C(0, 0, 3, 0, 0x80, 0xFF, 0, D_801DF62C, D_801DFDEC, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    func_80231C5C();
    func_80203DF8(0, 0x3C, 0xFF, 0xFF, 0xFF);
    func_801DDA5C();
    func_802153C4(0x41, 0.0f, 0.0f, 0, 0, 0xA0);
    func_800DE41C(0, 0xFF, 3, 0, 0x7F, 0, 0, D_801D5A90, NULL, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    func_800DE41C(0, 0xFF, 3, 0, 0x7F, 0, 0, D_801D6670, NULL, 0, 0, 0, 0, 0, 0, 0, 0, 0);
}
