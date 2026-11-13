extern u8 D_3EACF0[];
extern u8 D_3ED8F0[];
extern u8 D_8030BD90[];
extern s8 D_8021B068;
extern s16 D_8021E18C;
extern s8 D_8021F260[];

void func_800294A0(void *, void *, s32);
void func_800DE41C(s32, s32, s32, s32, s32, s32, s32, void *, void *, s32, s32, s32, s32, s32, s32, s32, s32, s32);
void func_80143DCC(void);
void func_80203B04(void);
void func_80203B34(void);
void func_80203DF8(s32, s32, s32, s32, s32);
void func_80207DC8(void);
extern char func_80207044[];
extern char func_80207440[];

void func_80206F20(void) {
    func_800294A0(D_3EACF0, D_8030BD90, D_3ED8F0 - D_3EACF0);
    func_80143DCC();
    func_80203B04();
    func_80203B34();
    D_8021B068 = 0;
    D_8021E18C = 0;
    func_80203DF8(1, 6, 0, 0, 0);
    func_800DE41C(0, 0, 3, 0, 0x40, 0, 0, func_80207044, func_80207440, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    D_8021F260[0] = 0;
    D_8021F260[1] = 0;
    D_8021F260[2] = 0;
    D_8021F260[4] = 0;
    func_80207DC8();
}
