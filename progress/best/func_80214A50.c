extern u8 D_425610[];
extern u8 D_42A740[];
extern u8 D_8030BD90[];
extern s8 D_80190C98;
extern u8 D_801D5A90[];
extern void func_80214B8C(void);
extern void func_80214FD8(void);
s32 func_800294A0(void *, void *, s32);
s32 func_800DE41C(s32, s32, s32, s32, s32, s32, s32, void *, void *, s32, s32, s32, s32, s32, s32, s32, s32, s32);
s32 func_80203DF8(s32,  s32,  s32);
s32 func_802153C4(s32, s32, s32, s32, s32, s32);

void func_80214A50(void) {
    D_80190C98 = 0;
    do { func_800294A0(D_425610, D_8030BD90, (s32)D_42A740 - (s32)D_425610); } while (0);
    func_800DE41C(0, 0, 3, 0, 0x7F, 0, 0, D_801D5A90, NULL, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    do { func_802153C4(0x40, 0x3F000000, 0x3F000000, 0xA6, 0xD0, 0xF1); } while (0);
    func_800DE41C(0, 0, 3, 0, 0x54, 0, 0, func_80214B8C, func_80214FD8, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    func_80203DF8(1,  6,  0);
}
