typedef struct {
    u8 pad0[0x18];
    f32 x;
    f32 y;
    f32 z;
    u8 pad24[0x40];
} Sprite;
typedef struct {
    u8 f0;
    u8 pad1[0x19];
    u8 f1A;
    u8 pad1B[0x5E];
    u8 f79;
    u8 pad7A;
    u8 f7B;
    u8 pad7C[4];
    u8 f80;
} Menu;
typedef struct {
    u8 f0;
    u8 f1;
    u8 total;
    u8 sel;
    u8 list[8];
    u8 fC;
    u8 fD;
} Pick;
typedef struct {
    s32 w[13];
} Part;
extern Sprite D_8011F2F0[];
extern u16 D_8021EEB8;
extern u8 D_8021E200;
extern Menu D_8021E189;
extern u8 D_404F10[];
extern u8 D_40A890[];
extern u8 D_8030BD90[];
extern s32 D_8021AFDC;
extern s8 D_8021E15F[];
extern u8 D_8021E22F[][8][34];
extern s8 D_8021E231[];
extern Pick D_8021EEA4;
extern u8 D_8021F260[];
extern f32 D_80220E40;
extern Part D_8018F5D0[][8];
extern Part D_80238EC0[];
extern u16 D_8021E120;
void func_80203B04();
void func_800294A0(void *, void *, s32);
u8 func_8020FFD0(u8, u8, u8);
void func_8021FCA4();
void func_802153C4(s32, s32, f32, s32, s32, s32);
void func_80203DF8(s32, s32, s32, s32, s32);
u16 func_800DE41C(s32, s32, s32, s32, s32, s32, void *, void *, void *, f32, f32, f32, f32, f32, f32, f32, f32, f32);
void func_8021FE04();
void func_8022026C();
void func_80149A80();
void func_801D5A90();
void func_8020EE18();
void func_8020F354();
void func_8020FC20();
void func_8020FED8();
void func_8020FAFC();
void func_8020FBA8();
void func_8013DD2C();

void func_8020E7D0(void)
{
    s32 i;
    s32 j;

    D_8011F2F0[D_8021EEB8].x = 0.0f;
    D_8011F2F0[D_8021EEB8].y = 0.0f;
    D_8011F2F0[D_8021EEB8].z = 255.0f;
    if (D_8021E200 == 0) {
        func_80203B04();
    }
    D_8021E189.f7B = D_8021E189.f1A;
    D_8021E189.f0 = 0;
    D_8021E189.f80 = 2;
    D_8021E189.f79 = 1;
    func_800294A0(D_404F10, D_8030BD90, D_40A890 - D_404F10);
    if (D_8021AFDC == 0x1C) {
        for (i = 0; i < 8; i++) {
            D_8021EEA4.list[i] = D_8021E22F[D_8021E15F[0]][i][0];
        }
        D_8021EEA4.f0 = 0;
        D_8021EEA4.fC = 1;
        D_8021EEA4.f1 = 1;
    }
    D_8021EEA4.sel = D_8021E15F[0];
    D_8021EEA4.fD &= 0x3F;
    D_8021EEA4.total = 0;
    for (i = 0; i < 8; i++) {
        D_8021EEA4.total += func_8020FFD0(D_8021EEA4.sel, i, D_8021EEA4.list[i]);
    }
    D_8021F260[0] = 0;
    D_8021F260[1] = 0;
    D_8021F260[2] = 0;
    D_8021F260[4] = 0;
    func_8021FCA4();
    func_800DE41C(0, 0, 3, 0, 0x42, 0xFF, 0, 0, func_8021FE04, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    D_80220E40 = 10.0f;
    func_800DE41C(0, 0, 3, 0, 0x44, 0xFF, 0, 0, func_8022026C, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    func_800DE41C(0, 0, 3, 0, 0x4A, 1, 0, func_80149A80, 0, 0.0f, 0.0f, 0.0f, 0.0f, 15.0f, 50.0f, 0.0f, 0.0f, 0.0f);
    func_800DE41C(0, 0, 3, 0, 0x7F, 0, 0, func_801D5A90, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    func_802153C4(0x40, 0, -0.5f, 0x95, 0xD1, 0x75);
    func_800DE41C(0, 0, 3, 0, 0x4A, 0, 0, func_8020EE18, func_8020F354, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    for (j = 0; j < 14; j++) {
        for (i = 0; i < 8; i++) {
            D_8018F5D0[j][i] = D_80238EC0[i];
        }
    }
    {
    s32 row = D_8021EEA4.sel * 0x110;
    s32 k = D_8021EEA4.list[0];
    i = D_8021E231[row + k];
    }
    D_8021E120 = func_800DE41C(0, 0, 1, 0, 0x54, 0xFF, D_8018F5D0[i], func_8020FC20, func_8020FED8, -2.7999989986419678f, 0.3499999940395355f, 0.0f, 0.0f, 360.0f, 0.0f, 0.029999999329447746f, 0.029999999329447746f, 0.029999999329447746f);
    func_800DE41C(0, 0, 3, 0, 0x54, 0, 0, func_8020FAFC, func_8020FBA8, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    func_800DE41C(0, 0, 3, 0, 0xA1, 0xFF, 0, 0, func_8013DD2C, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    func_80203DF8(1, 6, 0, 0, 0);
}
