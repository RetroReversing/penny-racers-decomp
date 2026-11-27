typedef struct { u8 sel; u8 cur; u8 digit; u8 count; u16 f4; u8 pad6[6]; f32 x; u8 pad10[0xD0]; s32 flags; } Menu;
typedef struct { u8 r; u8 g; u8 b; u8 pad; u8 a; } Colour;
typedef struct { s8 v; } Pad;
typedef struct { s32 a; u8 pad4[8]; s32 b; u8 pad10[0x14]; } Line;
typedef struct { s32 w[13]; } Slot;
typedef struct { Slot slot[8]; } Block;
typedef struct { u8 pad0[0x14]; u16 link; u8 pad16[0x3A]; u8 *f50; u8 pad54[0x10]; } Rec;
typedef struct { u8 b[12]; } Anim;
extern u8 D_419270[];
extern u8 D_41CF00[];
extern u8 D_8030BD90[];
extern Menu D_8021EEC0;
extern u8 D_8021EEA8;
extern Pad D_8021E15F;
extern u8 D_8021E230[][0x110];
extern s8 D_8021E231[];
extern Colour D_8021F260;
extern u16 D_80187BF0[][9];
extern u16 D_8021F270[][14][8];
extern u8 D_8021F048[][14];
extern u8 D_8021F036[];
extern Line D_80221080[];
extern f32 D_80220E40;
extern Block D_8018F5D0[];
extern Slot D_80238EC0[];
typedef struct { u16 v; } Id;
extern Id D_80190C98[];
extern Rec D_8011F2F0[];
extern Anim D_80237DC0[];
void dmaRomToRam(void *, void *, s32);
void func_80211B40(void);
void func_80211B90(void);
void func_80211C08(void);
s32 objCreate(s32, s32, s32, s32, s32, s32, void *, void *, void *, f32, f32, f32, f32, f32, f32, f32, f32, f32);
void func_802153C4(s32, f32, s32, s32, s32, s32);
void func_8021FCA4(void);
void func_801D5A90(void);
void gfxSetViewViewport(void);
void func_8022026C(void);
void func_80149A80(void);
void func_8021078C(void);
void drawCourseSelectOverlay(void);
void func_80210D88(void);
void func_80210F70(void);
void func_802114C8(void);
void func_8013DD2C(void);
void func_80203DF8(s32, s32, s32, s32, s32);

void func_80210050(void) {
    s32 i;
    s32 j;

    dmaRomToRam(D_419270, D_8030BD90, D_41CF00 - D_419270);
    D_8021EEC0.sel = D_8021EEA8;
    D_8021EEC0.x = D_8021EEC0.sel * 2.5;
    D_8021EEC0.count = D_8021E230[D_8021E15F.v][0];
    D_8021EEC0.flags &= ~0x8000;
    D_8021EEC0.flags &= ~0x4000;
    D_8021EEC0.flags &= ~0x2000;
    D_8021EEC0.digit = 0;
    D_8021EEC0.f4 = 0x88;
    D_8021EEC0.cur = 0x5A;
    D_8021F260.r = 0;
    D_8021F260.g = 0;
    D_8021F260.b = 0;
    D_8021F260.a = 0;
    func_80211B40();
    func_80211B90();
    func_80211C08();
    for (j = 0; j < 14; j++) {
        for (i = 0; i < 8; i++) {
            D_80187BF0[j][i] = D_8021F270[D_8021E15F.v][j][i];
        }
        D_80187BF0[j][8] = 0xFFFF;
        D_8021F036[j] = D_8021F048[D_8021E15F.v][j];
    }
    for (i = 0; i < 4; i++) {
        D_80221080[i].a = 0;
        D_80221080[i].b = 0;
    }
    objCreate(0, 0, 3, 0, 0x7F, 0, 0, func_801D5A90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    func_802153C4(0x40, 0.5f, 0, 0xB7, 0xA9, 0x8A);
    func_8021FCA4();
    objCreate(0, 0, 3, 0, 0x42, 0xFF, 0, 0, gfxSetViewViewport, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    D_80220E40 = 10.0f;
    objCreate(0, 0, 3, 0, 0x44, 0xFF, 0, 0, func_8022026C, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    objCreate(0, 0, 3, 0, 0x4A, 1, 0, func_80149A80, 0, 0, 0, 0, 0, 30.0f, 50.0f, 0, 0, 0);
    objCreate(0, 0, 3, 0, 0x4A, 0, 0, func_8021078C, drawCourseSelectOverlay, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    for (j = 0; j < 14; j++) {
        for (i = 0; i < 8; i++) {
            D_8018F5D0[j].slot[i] = D_80238EC0[i];
        }
    }
    for (i = 0; i < D_8021EEC0.count; i++) {
        j = D_8021E231[D_8021E15F.v * 0x110 + i];

        D_80190C98[j].v = objCreate(0, i & 0xFF, 1, 0, 0x54, 0xFF, &D_8018F5D0[j], func_80210D88, func_80210F70, 2.5f, 3.19996309f, 0, -17.3999176f, 333.0f, 3.39999294f, 0.025f, 0.025f, 0.025f);
        *(Anim **) (D_8011F2F0[D_8011F2F0[D_80190C98[j].v].link].f50 + 4) = &D_80237DC0[j];
    }
    objCreate(0, 0, 3, 0, 0x59, 0, 0, 0, func_802114C8, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    objCreate(0, 0, 3, 0, 0xA1, 0xFF, 0, 0, func_8013DD2C, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    func_80203DF8(1, 6, 0, 0, 0);
}
