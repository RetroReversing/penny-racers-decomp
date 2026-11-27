typedef struct {
    u8 f0;
    u8 pad1[0x13];
    u16 child;
    u8 pad16[0x2A];
    u16 f40;
    u8 pad42[0xE];
    u8 *p;
    u8 pad54[0x10];
} Obj;
typedef struct { u16 x; u16 y; } XY;
typedef struct { s16 x; u16 y; } SXY;
typedef struct { u16 a; s16 x; u16 b; u16 y; s32 k; } Sub;
typedef struct { Sub s[2]; } SubPair;
typedef struct { s16 x; u16 y; s16 k; } Tri;
typedef struct { u16 a; s16 x; u16 b; u16 y; } Quad;
typedef struct { s8 sel; u8 pad; s8 list[0x20]; } Pick;
typedef struct { Pick p; u8 pad22[0xAA - 0x22]; Pick c[3]; u8 pad110[0x110 - 0xAA - 0x66]; } Player;
typedef struct { u8 b[12]; } Row12;
typedef struct { u8 pad0[2]; u16 f2; u8 pad4[0x22C]; s16 f230; u8 pad232[0x302]; u16 f534; u16 pad536; u16 f538; u16 f53a; u8 pad53c[0x8F0 - 0x53C]; } Car;
typedef struct { u8 b[0x20]; } Row20;

extern Obj D_8011F2F0[];
#define OBJ D_8011F2F0
#define ME OBJ[arg1 & 0xFFFF]
extern u8 D_8021B00C[];
extern s32 D_8021AFEC[];
extern s32 carouselSelected[];
extern s16 skipFirstRowFlag;
extern u16 *D_8021C810[];
extern u16 D_8021B2B8[][2];
extern u16 D_8021B2BA[][2];
extern u16 D_8021B2CA[][2];
extern u16 D_8021B2C8[][2];
extern u16 D_8021AFE6[];
extern u8 D_802D92A0[];
extern u8 D_802D6898[];
extern u16 D_80187BF0[];
extern u16 D_8021F270[][14][8];
typedef struct { s8 v; u8 pad[0x10F]; } Sel;
extern Sel randomSequenceTable[];
extern s8 D_8021E231[];
extern s8 D_8021E31D[];
extern s8 D_8021E31F[];
extern s8 D_8021E2FB[];
extern s8 D_8021E2FD[];
extern s8 D_8021E2D9[];
extern s8 D_8021E2DB[];
#define PICKED(w) (D_8021E231[(w) * 0x110 + randomSequenceTable[w].v])
extern f32 D_8021B020;
extern f32 D_8021B01C;
extern Quad D_8021B298[];
extern s32 D_8021B128;
extern u8 D_8021F260[];
extern u16 *D_802030CC[];
extern s8 D_8021E20B[][9];
extern u8 carouselCmd;
extern u16 D_8021B082;
extern SubPair D_8021B238[];
extern Tri D_8021B1C0[][5];
extern u16 D_8021F090[];
extern Row12 D_80237DC0[];
extern u8 carouselCount;
extern u16 D_8021E146;
extern u16 D_8021F024;
extern u16 D_8021F026;
extern u16 D_8021EFF8;
extern s32 D_8021F010;
extern Row20 D_8021F0A0[];
extern u8 D_8021F048[][14];
extern Car sCars[];

void setObjectPartFlags();
void gfxSetup2DState(s32);
void gfxSetPrimColor(s32, u8, u8, u8, s32);
s32 textWidth(u16 *, s32);
void gfxDrawText(s32, u16, u16, s32, u8 *, u16 *, s32, u8 *, s32, s32, s32, s32);
void gfxDrawSprite(s32, s16, s16, s32, s32);
void func_8012AD20();
u8 func_80149F40();
void setCarPartSprites();

#define WRAP(n) if (carouselCount < (n)) { (n) = 0; } else if ((n) < 0) { (n) = carouselCount; }
#define SHOW(slot, n) (*(Row12 **) (OBJ[OBJ[slot].child].p + 4) = &D_80237DC0[n])

static inline XY *pos(s32 i)
{
    return &((XY *) D_8021B2B8)[i];
}

void func_8020B3CC(s32 arg0, s32 arg1)
{
    
    s32 y;
    s32 i;
    s32 n;
    Car *car;
    u8 unused[0x18];
    u16 (*row)[8];
    s8 c;
    u8 temp;

    do { setObjectPartFlags(arg1 & 0xFFFF); } while (0);
    switch (ME.f40) {
    case 0:
        ME.f40 = 1;
    case 1:
        do { gfxSetup2DState(arg0); } while (0);
        gfxSetPrimColor(arg0, 0xFF, 0xFF, 0xFF, 0xFF);
        if (!skipFirstRowFlag) {
            arg1 = 0x61;
            y = 0x51;
        } else {
            arg1 = 0;
            y = 0;
        }
        temp = D_8021B00C[ME.f0];
        if (temp == 1 && D_8021AFEC[ME.f0] == 1) {
            if (skipFirstRowFlag == 0) {
                gfxDrawText(arg0, textWidth(D_8021C810[0], 0xF), D_8021B2B8[ME.f0][1] + y + D_8021AFE6[0], 0xF,
                              D_802D92A0, D_8021C810[0], 0, D_802D6898, 0xE, 0x10, 0xE0, 0x60);
            } else {
                gfxDrawText(arg0, pos(ME.f0)->x + arg1, pos(ME.f0)->y + y + D_8021AFE6[0], 0xF,
                              D_802D92A0, D_8021C810[0], 0, D_802D6898, 0xE, 0x10, 0xE0, 0x60);
            }
        } else if (D_8021B00C[ME.f0] == 1 && D_8021AFEC[ME.f0] == 0) {
            u16 *tp = D_80187BF0;
            D_80187BF0[8] = 0xFFFF;
            {
                s32 i_1;
                for (i_1 = 0; i_1 < 8; i_1++) {
                    row = D_8021F270[ME.f0];
                    c = PICKED(ME.f0);
                    if (row[c][i_1] == 0xFFFF) {
                        break;
                    }
                    tp[i_1] = row[(u8) c][i_1];
                }
            }
            { do { gfxSetPrimColor(arg0, 0xFF, 0xFF, 0xFF, 0xFF); } while (0); }
            if (skipFirstRowFlag == 0) {
                do { gfxDrawText(arg0, textWidth(D_80187BF0, 0xF), D_8021B2B8[ME.f0][1] + y + D_8021AFE6[0], 0xF,
                              D_802D92A0, D_80187BF0, 0, D_802D6898, 0xE, 0x10, 0xE0, 0x60); } while (0);
                do { gfxSetPrimColor(arg0, 0xFF, 0xFF, 0xFF, 0xFF); } while (0);
                do { gfxDrawSprite(arg0, 0x99 - (u32) D_8021B020, 0x44, 5, 3); } while (0);
            } else {
                do { gfxDrawText(arg0, pos(ME.f0)->x + arg1, pos(ME.f0)->y + y + D_8021AFE6[0], 0xF,
                              D_802D92A0, D_80187BF0, 0, D_802D6898, 0xE, 0x10, 0xE0, 0x60); } while (0);
                do { gfxSetPrimColor(arg0, 0xFF, 0xFF, 0xFF, 0xFF); } while (0);
                do { gfxDrawSprite(arg0, D_8021B298[ME.f0].x, D_8021B298[ME.f0].y + D_8021AFE6[0], 5, 4); } while (0);
            }
            do { gfxSetPrimColor(arg0, 0xFF, 0xFF, 0xFF, 0xFF); } while (0);
        } else {
            if (skipFirstRowFlag == 0) {
                if (D_8021B128 == 0) {
                    do { gfxSetPrimColor(arg0, D_8021F260[0], D_8021F260[1], D_8021F260[2], D_8021F260[3]); } while (0);
                } else {
                    do { gfxSetPrimColor(arg0, 0xFF, 0xFF, 0xFF, 0xFF); } while (0);
                }
                do { gfxDrawText(arg0, textWidth(D_802030CC[carouselSelected[ME.f0]], 0xF), D_8021B2B8[ME.f0][1] + y + D_8021AFE6[0], 0xF,
                              D_802D92A0, D_802030CC[carouselSelected[ME.f0]], 0, D_802D6898, 0xE, 0x10, 0xE0, 0x60); } while (0);
            } else {
                if (D_8021E20B[ME.f0][0] == 0) {
                    do { gfxSetPrimColor(arg0, D_8021F260[0], D_8021F260[1], D_8021F260[2], D_8021F260[3]); } while (0);
                } else {
                    do { gfxSetPrimColor(arg0, 0xFF, 0xFF, 0xFF, 0xFF); } while (0);
                }
                do { gfxDrawText(arg0, pos(ME.f0)->x + arg1, pos(ME.f0)->y + y + D_8021AFE6[0], 0xF,
                              D_802D92A0, D_802030CC[carouselSelected[ME.f0]], 0, D_802D6898, 0xE, 0x10, 0xE0, 0x60); } while (0);
            }
            do { gfxSetPrimColor(arg0, 0xFF, 0xFF, 0xFF, 0xFF); } while (0);
        }
        if (skipFirstRowFlag == 0) {
            if (D_8021B128 != 1) {
                if (carouselCmd == 2) {
                    do { gfxDrawSprite(arg0, 0x24, D_8021B082 + 0x77, 5, 1); } while (0);
                } else {
                    do { gfxDrawSprite(arg0, 0x42, D_8021B082 + 0x77, 5, 1); } while (0);
                }
                if (carouselCmd == 1) {
                    do { gfxDrawSprite(arg0, 0xF6, D_8021B082 + 0x77, 5, 2); } while (0);
                } else {
                    do { gfxDrawSprite(arg0, 0xD8, D_8021B082 + 0x77, 5, 2); } while (0);
                }
            }
        } else {
            if (D_8021B00C[ME.f0] == 0) {
                do { gfxDrawSprite(arg0, D_8021B238[ME.f0].s[0].x, D_8021B238[ME.f0].s[0].y + D_8021AFE6[0], 0xB, D_8021B238[ME.f0].s[0].k); } while (0);
                do { gfxDrawSprite(arg0, D_8021B238[ME.f0].s[1].x, D_8021B238[ME.f0].s[1].y + D_8021AFE6[0], 0xB, D_8021B238[ME.f0].s[1].k); } while (0);
            }
            if (D_8021E20B[ME.f0][0] == 1) {
                for (i = 0; i < 5; i++) {
                    gfxDrawSprite(arg0, D_8021B1C0[ME.f0][i].x, D_8021B1C0[ME.f0][i].y + D_8021AFE6[0], 0xB, D_8021B1C0[ME.f0][i].k);
                }
                {
                    s16 *px = (s16 *) &((XY *) D_8021B2C8)[ME.f0].x;
                    u16 *py = &((XY *) D_8021B2C8)[ME.f0].y;

                    do { if (skipFirstRowFlag == 1) {
                        gfxDrawSprite(arg0, *px, *py + D_8021AFE6[0] - ((u32) D_8021B01C + 0x14), 0xB, 0x2D);
                    } else {
                        gfxDrawSprite(arg0, *px, *py + D_8021AFE6[0] - (u32) D_8021B01C, 0xB, 0x2D);
                    } } while (0);
                }
            }
        }
        if (D_8021B00C[ME.f0] == 0) {
            SHOW(D_8021F090[ME.f0], carouselSelected[ME.f0]);
            if (skipFirstRowFlag == 0) {
                n = carouselSelected[ME.f0] - 1;
                do { WRAP(n)
                SHOW(D_8021E146, n); } while (0);
                n = carouselSelected[ME.f0] + 1;
                WRAP(n)
                SHOW(D_8021F024, n);
                n = carouselSelected[ME.f0] - 1;
                WRAP(n)
                n = n - 1;
                WRAP(n)
                SHOW(D_8021F026, n);
                n = carouselSelected[ME.f0] + 1;
                WRAP(n)
                n = n + 1;
                WRAP(n)
                SHOW(D_8021EFF8, n);
            }
        } else {
            SHOW(D_8021F090[ME.f0], PICKED(ME.f0));
            D_8021F010 = PICKED(ME.f0);
            func_8012AD20(OBJ[D_8021F090[ME.f0]].child, &D_8021F0A0[ME.f0], D_8021F010, D_8021F048[ME.f0][D_8021F010]);
            car = &sCars[ME.f0];
            car->f2 = D_8021F090[ME.f0];
            car->f534 = func_80149F40(ME.f0, 5, D_8021E2DB[ME.f0 * 0x110 + D_8021E2D9[ME.f0 * 0x110]]);
            car->f538 = func_80149F40(ME.f0, 6, D_8021E2FD[ME.f0 * 0x110 + D_8021E2FB[ME.f0 * 0x110]]);
            car->f53a = func_80149F40(ME.f0, 7, D_8021E31F[ME.f0 * 0x110 + D_8021E31D[ME.f0 * 0x110]]);
            setCarPartSprites(car);
            car->f230 = PICKED(ME.f0);
        }
        break;
    }
}
