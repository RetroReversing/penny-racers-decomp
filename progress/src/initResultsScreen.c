typedef struct { s32 state; s32 choice; } Prompt;
typedef struct { s16 v; u8 pad[0x67]; u8 first; } Half;
typedef struct { s8 sel; u8 pad; s8 t[32]; } Pick;
typedef struct { u16 x; u16 y; } Pos;
typedef struct { s16 x; s16 y; s16 w; s16 h; u8 pad8[0x10]; s16 cx; s16 cy; s16 cw; s16 ch; u8 rest[8]; } View;
typedef struct { u8 r; u8 g; u8 b; u8 pad; u8 a; } Colour;
extern u8 D_400E00[];
extern u8 D_404F10[];
extern u8 D_8030BD90[];
extern s32 D_8021B01C;
extern s32 D_8021B020;
extern Prompt D_8021B128;
extern s8 D_8021E20C[][9];
extern s8 D_8021E20B[][9];
extern s32 D_8021AFEC[];
extern u8 D_8021B1B4;
extern Half skipFirstRowFlag;
extern Pos D_8021B190[];
extern View D_800DD2C8[];
extern s16 D_8021E16C[];
extern s16 D_8021EFA4;
extern s32 D_8021AFE4;
extern u8 D_8021B00C[];
extern u8 D_8021B010[];
extern Pick D_8021E22F[];
extern u16 sCarSlots;
extern s16 D_8021E1A6;
extern u8 D_80168C60[];
extern u8 D_8021B014[];
extern Colour D_8021F260;
extern u8 D_8021B084;
void dmaRomToRam(void *, void *, s32);
void func_80143DCC(void);
void initRowTable(s32);
s32 objCreate(s32, u8, s32, s32, s32, s32, s32, void *, void *, s32, s32, s32, s32, s32, s32, s32, s32, s32);
void func_80208444(u16);
void drawResultsPanel(void);
void func_80209310(void);
void func_8020A160(s32);
void setScreenTransition(s32, s32, s32, s32, s32);
u8 func_80149F40(u16, s32, s32);
u8 func_801FD530(s32, u8);

/* Sets up the results screen: reloads its data from ROM, lays out the viewports, spawns the panel objects and resets the prompt state. */ void initResultsScreen(void) {
    s32 i;

    dmaRomToRam(D_400E00, D_8030BD90, D_404F10 - D_400E00);
    D_8021B01C = 0;
    D_8021B020 = 0;
    func_80143DCC();
    D_8021B128.state = 0;
    D_8021B128.choice = 0;
    for (i = 0; i < 4; i++) {
        D_8021E20C[i][0] = 0;
        D_8021E20B[i][0] = 0;
        D_8021AFEC[i] = 0;
    }
    D_8021B1B4 = 0;
    initRowTable(skipFirstRowFlag.v == 0 ? 1 : 4);
    for (i = 0; i < 4; i++) {
        switch (skipFirstRowFlag.v) {
        case 0:
            D_800DD2C8[i].x = D_8021B190[i].x;
            D_800DD2C8[i].y = D_8021B190[i].y;
            D_800DD2C8[i].w = 0x120;
            D_800DD2C8[i].h = 0xD8;
            break;
        case 1:
            D_800DD2C8[i].y = 0x3E;
            D_800DD2C8[i].w = 0x90;
            D_800DD2C8[i].h = 0x6C;
            break;
        default:
            D_800DD2C8[i].x = D_8021B190[i].x;
            D_800DD2C8[i].y = D_8021B190[i].y;
            D_800DD2C8[i].w = 0x90;
            D_800DD2C8[i].h = 0x6C;
            break;
        }
        D_800DD2C8[i].cx = 0;
        D_800DD2C8[i].cy = 0;
        D_800DD2C8[i].cw = 0x140;
        D_800DD2C8[i].ch = 0xF0;
    }
    for (i = 0; i <= skipFirstRowFlag.v; i++) {
        D_8021E16C[i] = objCreate(0, i, 3, 0, 0x78, 0, 0, 0, func_80209310, 0, 0, 0, 0, 0, 0, 0, 0, 0);
        func_8020A160(i);
        D_8021E20C[i][0] = 0;
    }
    D_8021EFA4 = objCreate(0, 0, 3, 0, 0x40, 0, 0, func_80208444, drawResultsPanel, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (skipFirstRowFlag.v == 1) {
        D_8021AFE4 = 0x28;
    } else {
        D_8021AFE4 = 0;
    }
    setScreenTransition(1, 6, 0, 0, 0);
    if (skipFirstRowFlag.v == 0 && D_8021B00C[0] == 1) {
        D_8021B128.state = 1;
        skipFirstRowFlag.first = 1;
        D_8021AFEC[0] = 0;
        D_8021B010[0] = 0;
        for (i = 0; i < 8; i++) {
            D_8021B010[0] += func_801FD530(i, func_80149F40(sCarSlots, i, (&D_8021E22F[i])->t[D_8021E22F[i].sel]));
        }
        if (D_8021B010[0] > D_80168C60[D_8021E1A6]) {
            D_8021B014[0] = 1;
        } else {
            D_8021B014[0] = 0;
        }
    }
    D_8021F260.r = 0;
    D_8021F260.g = 0;
    D_8021F260.b = 0;
    D_8021F260.a = 0;
    D_8021B084 = 0;
}
