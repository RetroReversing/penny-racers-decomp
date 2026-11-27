typedef struct { s8 x; s8 y; u8 pad[3]; } P5;
typedef struct { s16 n; u8 pad2[0x14]; s16 e16; s16 e18; s16 e1A; } St;
extern St D_8021E18C;
extern u8 D_801C5EA0, D_801C5E9C, D_801E87E1, D_8021B068;
extern u16 D_8021B30A[];
extern f32 D_8021B30C;
extern u8 D_8021B310[], D_8021B311[], D_8021B324[], D_8021B325[], D_8021B326[], D_8021B327[], D_8021B328[], D_8021B37A[];
extern u8 D_802E66D8[], D_802F92E0[], D_801D51C8[], D_801D5470[], D_801D4390[], D_801CF4C8[];
extern u8 sSaveData[], D_801E97A1[], D_801E97A2[], D_801E97A3[], D_801E97A4[], D_801E97A5[];
typedef struct { u8 b[0x30]; } B30;
extern B30 D_801E97A6[];
extern u8 D_801C5EDA;
extern u8 D_801C5EDE;
extern u8 D_801C5EE2;
extern u8 D_801C5EE6;
extern u8 D_801C5EEA;
extern u8 D_801C5EEE;
extern u8 D_801C5EF2;
extern u8 D_801C5EF6;
extern u8 D_801C5E9E;
extern P5 D_801C5EFA[];
extern P5 D_801C6076[];
extern P5 D_801C618E[];
extern P5 D_801C631E[];
extern P5 D_801C640A[];
extern P5 D_801C6626[];
extern P5 D_801C673E[];
extern P5 D_801C687E[];
extern P5 D_801C7082[];
void gfxSetup2DState(void *);
void gfxSetPrimColor(void *, s32, s32, s32, s32);
void gfxDrawClippedTex8b(void *, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, void *, void *);
void gfxDrawSprite(void *, s16, s16, s32, s32);
void drawSpriteCell(void *, u16, s32, s32, void *, void *, s32, s32, s32, s32, s32);
void func_801CB9EC(void *, s32, s32, s32, void *, void *, s32, s32, s32, s32, s32, s32, s32, s32);
void gfxDrawText(void *, s32, s32, s32, void *, void *, s32, void *, s32, s32, s32, s32);
u8 func_801E435C(u8, u8);
u8 func_80148230(void);

void func_8020D1AC(void *arg0)
{
    s32 off;
    s32 i;
    s16 ry;
    s32 id;
    u8 r;

    off = (D_8021E18C.n >= 9) ? 0xC : 0;
    gfxSetup2DState(arg0);
    gfxSetPrimColor(arg0, 0x78, 0x78, 0x78, 0xFF);
    gfxDrawClippedTex8b(arg0, 0, 0, 0, 0, 0x140, 0xF0, 0x140, 0xF0, 0x40, 0x20, 0, 0, 0x13F, 0xEF, D_802E66D8, D_802F92E0);
    gfxSetPrimColor(arg0, 0xFF, 0xFF, 0xFF, 0xFF);
    gfxSetPrimColor(arg0, 0, 0, 0, 0x64);
    gfxDrawSprite(arg0, 0x32, 0x19, 0xB, 0x2E);
    gfxDrawSprite(arg0, 0x102, 0x19, 0xB, 0x2E);
    gfxDrawSprite(arg0, 0x42, 0x18, 0xB, 0x2F);
    gfxDrawSprite(arg0, 0x32, 0xBE, 0xB, 0x2E);
    gfxDrawSprite(arg0, 0x102, 0xBE, 0xB, 0x2E);
    gfxDrawSprite(arg0, 0x42, 0xBF, 0xB, 0x2F);
    gfxDrawSprite(arg0, 0x4D, off + 0x40, 0xB, 0x31);
    gfxSetPrimColor(arg0, 0xFF, 0xFF, 0xFF, 0xFF);
    gfxDrawSprite(arg0, 0x30, 0x17, 0xB, 1);
    for (i = 0; i < 6; i++) {
        gfxDrawSprite(arg0, i * 32 + 0x40, 0x16, 0xB, 2);
    }
    gfxDrawSprite(arg0, 0x100, 0x17, 0xB, 3);
    gfxDrawSprite(arg0, 0x57, 0x11, 4, 0);
    gfxDrawSprite(arg0, 0x4A, off + 0x3D, 4, 0xA);
    gfxDrawSprite(arg0, 0x4A, off + 0x93, 4, 0xB);
    gfxDrawSprite(arg0, 0x9E, off + 0x3D, 4, 0xC);
    gfxDrawSprite(arg0, 0x9E, off + 0x93, 4, 0xD);
    gfxDrawSprite(arg0, 0x30, 0xBC, 0xB, 4);
    for (i = 0; i < 6; i++) {
        gfxDrawSprite(arg0, i * 32 + 0x40, 0xBD, 0xB, 5);
    }
    gfxDrawSprite(arg0, 0x100, 0xBC, 0xB, 6);
    if (D_8021E18C.n < 9) {
    gfxDrawSprite(arg0, D_8021B310[D_8021E18C.n * 2], D_8021B311[D_8021E18C.n * 2] + off, 4, D_8021E18C.n + 1);
    }
    switch ((s16) (D_8021E18C.n - 9)) {
    case 0:
    for (i = 0; i < D_801C5EDA; i++) {
        gfxDrawSprite(arg0, D_801C5EFA[i].x * 3 + 0x54, D_801C5EFA[i].y * 3 + (s16) (off + 0x48), 0xB, 0x58);
    }
    for (i = 0; i < 4; i++) {
        gfxDrawSprite(arg0, i * 18 + 0x54, off + 0x48, 4, 0x11);
    }
    break;
    case 1:
    for (i = 0; i < D_801C5EDE; i++) {
        gfxDrawSprite(arg0, D_801C6076[i].x * 3 + 0x54, D_801C6076[i].y * 3 + (s16) (off + 0x48), 0xB, 0x58);
    }
    for (i = 0; i < 4; i++) {
        gfxDrawSprite(arg0, i * 18 + 0x54, off + 0x48, 4, 0x11);
    }
    break;
    case 2:
    for (i = 0; i < D_801C5EE2; i++) {
        gfxDrawSprite(arg0, D_801C618E[i].x * 3 + 0x54, D_801C618E[i].y * 3 + (s16) (off + 0x48), 0xB, 0x58);
    }
    for (i = 0; i < 4; i++) {
        gfxDrawSprite(arg0, i * 18 + 0x54, off + 0x48, 4, 0x11);
    }
    break;
    case 3:
    for (i = 0; i < D_801C5EE6; i++) {
        gfxDrawSprite(arg0, D_801C631E[i].x * 3 + 0x54, D_801C631E[i].y * 3 + (s16) (off + 0x48), 0xB, 0x58);
    }
    for (i = 0; i < 4; i++) {
        gfxDrawSprite(arg0, i * 18 + 0x54, off + 0x48, 4, 0x11);
    }
    break;
    case 4:
    for (i = 0; i < D_801C5EEA; i++) {
        gfxDrawSprite(arg0, D_801C640A[i].x * 3 + 0x54, D_801C640A[i].y * 3 + (s16) (off + 0x48), 0xB, 0x58);
    }
    for (i = 0; i < 4; i++) {
        gfxDrawSprite(arg0, i * 18 + 0x54, off + 0x48, 4, 0x11);
    }
    break;
    case 5:
    for (i = 0; i < D_801C5EEE; i++) {
        gfxDrawSprite(arg0, D_801C6626[i].x * 3 + 0x54, D_801C6626[i].y * 3 + (s16) (off + 0x48), 0xB, 0x58);
    }
    for (i = 0; i < 4; i++) {
        gfxDrawSprite(arg0, i * 18 + 0x54, off + 0x48, 4, 0x11);
    }
    break;
    case 6:
    for (i = 0; i < D_801C5EF2; i++) {
        gfxDrawSprite(arg0, D_801C673E[i].x * 3 + 0x54, D_801C673E[i].y * 3 + (s16) (off + 0x48), 0xB, 0x58);
    }
    for (i = 0; i < 4; i++) {
        gfxDrawSprite(arg0, i * 18 + 0x54, off + 0x48, 4, 0x11);
    }
    break;
    case 7:
    for (i = 0; i < D_801C5EF6; i++) {
        gfxDrawSprite(arg0, D_801C687E[i].x * 3 + 0x54, D_801C687E[i].y * 3 + (s16) (off + 0x48), 0xB, 0x58);
    }
    for (i = 0; i < 4; i++) {
        gfxDrawSprite(arg0, i * 18 + 0x54, off + 0x48, 4, 0x11);
    }
    break;
    case 8:
    for (i = 0; i < D_801C5E9E; i++) {
        gfxDrawSprite(arg0, D_801C7082[i].x * 3 + 0x54, D_801C7082[i].y * 3 + (s16) (off + 0x48), 0xB, 0x58);
    }
    for (i = 0; i < 4; i++) {
        gfxDrawSprite(arg0, i * 18 + 0x54, off + 0x48, 4, 0x11);
    }
    break;
    }
    gfxDrawSprite(arg0, D_8021B30A[0] + 0x34, 0xC6, 0xB, 0x28);
    gfxDrawSprite(arg0, 0xFB - D_8021B30A[0], 0xC6, 0xB, 0x29);
    gfxDrawSprite(arg0, 0xA7, off + 0x3C, 4, 0x17);
    gfxSetPrimColor(arg0, 0x80, 0x80, 0x80, 0xFF);
    gfxDrawSprite(arg0, 0xA8, off + 0x43, 4, 0x18);
    gfxDrawSprite(arg0, 0xBD, off + 0x43, 4, 0x19);
    gfxDrawSprite(arg0, 0xD2, off + 0x43, 4, 0x1A);
    gfxDrawSprite(arg0, 0xE7, off + 0x43, 4, 0x1B);
    gfxSetPrimColor(arg0, 0xFF, 0xFF, 0xFF, 0xFF);
    if (D_8021B326[D_8021E18C.n * 5] == 0x18) {
        gfxDrawSprite(arg0, 0xA8, off + 0x43, 4, D_8021B326[D_8021E18C.n * 5]);
    } else if (D_8021B326[D_8021E18C.n * 5] == 0x19) {
        gfxDrawSprite(arg0, 0xBD, off + 0x43, 4, D_8021B326[D_8021E18C.n * 5]);
    } else if (D_8021B326[D_8021E18C.n * 5] == 0x1A) {
        gfxDrawSprite(arg0, 0xD2, off + 0x43, 4, D_8021B326[D_8021E18C.n * 5]);
    } else if (D_8021B326[D_8021E18C.n * 5] == 0x1B) {
        gfxDrawSprite(arg0, 0xE7, off + 0x43, 4, D_8021B326[D_8021E18C.n * 5]);
    }
    gfxSetPrimColor(arg0, 0xFF, 0xFF, 0xFF, 0xFF);
    if (D_8021B325[D_8021E18C.n * 5] != 0x63) {
        gfxDrawSprite(arg0, 0xBD, off + 0x72, 4, D_8021B325[D_8021E18C.n * 5]);
    }
    if (D_8021B324[D_8021E18C.n * 5] != 0x63) {
        gfxDrawSprite(arg0, 0xBD, off + 0x8B, 4, D_8021B324[D_8021E18C.n * 5]);
    }
    if (D_8021B327[D_8021E18C.n * 5] != 0x63) {
        gfxDrawSprite(arg0, 0xD3, off + 0x83, 4, D_8021B327[D_8021E18C.n * 5]);
    }
    if (D_801C5EA0 == 1) {
        if (D_801C5E9C == 3) {
            D_8021B37A[0] = 0x1F;
            D_8021B37A[3] = 0x25;
        } else if (D_801C5E9C == 4) {
            D_8021B37A[0] = 0x20;
            D_8021B37A[3] = 0x26;
        }
    }
    if (D_8021B328[D_8021E18C.n * 5] != 0x63) {
        gfxDrawSprite(arg0, 0xD3, off + 0x6A, 4, D_8021B328[D_8021E18C.n * 5]);
    }
    gfxDrawSprite(arg0, 0xA9, off + 0x6B, 4, 0x12);
    if (D_8021E18C.n < 9) {
        gfxDrawSprite(arg0, 0xA9, off + 0x84, 4, 0x13);
    }
    if (D_8021B068 == 1) {
        gfxDrawSprite(arg0, 0xB4, (u32) D_8021B30C, 0xB, 0x2D);
    }
    if (D_8021E18C.e16 < 2 && D_8021E18C.n < 9) {
    gfxDrawSprite(arg0, 0x30, 0x9C, 4, 0x22);
    gfxDrawSprite(arg0, 0x9F, 0x9C, 4, 0x23);
    for (i = 0; i < 2; i++) {
        drawSpriteCell(arg0, i * 0x6E + 0x61, 0x9E, 0xA, D_801D51C8, D_801D5470, 0, 8, 0xC, 0x70, 0xC);
    }
    for (i = 0; i < 2; i++) {
        drawSpriteCell(arg0, i * 0x6E + 0x7A, 0x9E, 0xB, D_801D51C8, D_801D5470, 0, 8, 0xC, 0x70, 0xC);
    }
    func_801CB9EC(arg0, 0xBE, 0x9E, 9, D_801D51C8, D_801D5470, 0, 2, 0, 8, 0xC, 0x70, 0xC, D_801E97A3[D_8021E18C.n * 0x30]);
    func_801CB9EC(arg0, 0xD7, 0x9E, 9, D_801D51C8, D_801D5470, 0, 2, 0, 8, 0xC, 0x70, 0xC, D_801E97A4[D_8021E18C.n * 0x30]);
    func_801CB9EC(arg0, 0xF0, 0x9E, 9, D_801D51C8, D_801D5470, 0, 2, 0, 8, 0xC, 0x70, 0xC, D_801E97A5[D_8021E18C.n * 0x30]);
    func_801CB9EC(arg0, 0x50, 0x9E, 9, D_801D51C8, D_801D5470, 0, 2, 0, 8, 0xC, 0x70, 0xC, sSaveData[D_8021E18C.n * 0x30]);
    func_801CB9EC(arg0, 0x69, 0x9E, 9, D_801D51C8, D_801D5470, 0, 2, 0, 8, 0xC, 0x70, 0xC, D_801E97A1[D_8021E18C.n * 0x30]);
    func_801CB9EC(arg0, 0x82, 0x9E, 9, D_801D51C8, D_801D5470, 0, 2, 0, 8, 0xC, 0x70, 0xC, D_801E97A2[D_8021E18C.n * 0x30]);
    gfxDrawText(arg0, 0x50, 0xAB, 0xA, D_801D4390, D_801E97A6[D_8021E18C.n].b, 0, D_801CF4C8, 0xA, 0xE, 0xA0, 0xFC);
    gfxDrawText(arg0, 0xBE, 0xAB, 0xA, D_801D4390, D_801E97A6[D_8021E18C.n].b + 0x12, 0, D_801CF4C8, 0xA, 0xE, 0xA0, 0xFC);
    }
    r = func_801E435C(D_8021E18C.n, D_8021E18C.e1A);
    if (func_80148230() == 2 && D_8021E18C.n < 9 && r < 4) {
    gfxDrawSprite(arg0, 0x2E, 0x44, 4, 0x24);
        if (r == 1) {
        gfxDrawSprite(arg0, 0x33, 0x39, 4, 0x14);
        } else if (r == 2) {
        gfxDrawSprite(arg0, 0x33, 0x39, 4, 0x15);
        } else if (r == 3) {
        gfxDrawSprite(arg0, 0x33, 0x39, 4, 0x16);
        }
    }
    if (func_80148230() == 0) {
        if (D_8021E18C.n < 9 && D_801E87E1 == D_8021E18C.n + 1) {
    gfxDrawSprite(arg0, 0x38, 0x7A, 4, 0x28);
    gfxDrawSprite(arg0, 0x46, 0x7A, 4, 0x29);
        }
    }
}
