extern s8 D_412160;
extern s8 D_419270;
extern s32 D_80212500;
extern s32 D_802134EC;
extern s32 D_8021AFDC;
extern s8 D_8021B084;
extern s8 D_8021B677;
extern s8 D_8021E15F;
extern s8 D_8021E160;
extern s32 D_8030BD90;
void func_800294A0(void *, void *, s32);
void func_80143DCC(void);
void func_80203DF8(s32, s32, s32, s32);
void func_80214204(s32);
void func_800DE41C(s32, s32, s32, s32, s32, s32, s32, void *, void *, s32, s32, s32, s32, s32, s32, s32, s32, s32);
void func_802153C4(s32,  s32,  s32,  s32);

void func_80212360(void) {
    do { func_800294A0(&D_412160, &D_8030BD90, &D_419270 - &D_412160); } while (0);
    do { func_80143DCC(); } while (0);
    D_8021B677 = 0;
    if (D_8021AFDC == 2 || D_8021AFDC == 6 || D_8021AFDC == 0x18) {
        D_8021E15F = 0;
        func_80214204(D_8021AFDC);
    }
    if (D_8021AFDC == 0x10) {
        D_8021E160 = 1;
    } else {
        D_8021E160 = 0;
    }
    do { func_80203DF8(1, 6, 0, 0); } while (0);
    func_800DE41C(0, 0, 3, 0, 0x42, 0, 0, &D_80212500, &D_802134EC, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    func_802153C4(0x40,  0xBF000000,  0x3F000000,  0x96);
    D_8021B084 = 0;
}
