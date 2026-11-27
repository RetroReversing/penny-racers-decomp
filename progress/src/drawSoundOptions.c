void gfxDrawSprite(int a, int b, int c, int d, int e);
void gfxSetup2DState(int a);
void gfxSetPrimAlpha(int arg0, int a);
void gfxSetPrimColor(int a, int b, int c, int d, int e);
extern u8 noticeStates[];
extern u8 D_80190C98;
extern u8 D_8021F028;
extern u8 D_8021F029;
extern u8 D_8021F02A;

/* Draws the sound options screen for the object at objIdx: volume bars, cursor highlights and the bar fill, into the display list gfxp. Runs once the object leaves state 0. */
void drawSoundOptions(int gfxp, unsigned int objIdx)
{
    u8 colors[4];
    int objOff;
    int barHi;
    int barLo;
    int barLvl;
    int k;

    objOff = (objIdx & 0xFFFF) * 100;
    switch (*(u16 *)(noticeStates + objOff)) {
    case 0:
        *(u16 *)(noticeStates + (objIdx & 0xFFFF) * 100) = 1;
        return;
    case 1:
        break;
    default:
        return;
    }
    gfxSetup2DState(gfxp);
    gfxSetPrimColor(gfxp, 0, 0, 0, 0xFF);
    gfxDrawSprite(gfxp, 0x48, 0xD, 0xB, 0x54);
    gfxSetPrimAlpha(gfxp, 0xFF);
    gfxDrawSprite(gfxp, 0x5A, 0xF, 0xC, 1);
    gfxDrawSprite(gfxp, 0x48, 0x4A, 0xC, 0);
    gfxDrawSprite(gfxp, 0x48, 0x7B, 0xC, 0);
    gfxDrawSprite(gfxp, 0xFA, 0x48, 0xC, 7);
    gfxDrawSprite(gfxp, 0xFA, 0x79, 0xC, 7);
    gfxDrawSprite(gfxp, 0x32, 0x48, 0xC, 8);
    gfxDrawSprite(gfxp, 0x32, 0x79, 0xC, 8);
    barHi = 0xFF;
    barLo = 0x7F;
    if (D_8021F02A != 0) {
        barHi = 0x7F;
        barLo = 0xFF;
    }
    barLvl = barHi & 0xFFFF;
    barHi = 0xFF;
    gfxSetPrimColor(gfxp, barLvl, barLvl, barLvl, barHi);
    gfxDrawSprite(gfxp, 0x4F, 0xAC, 0xC, 3);
    gfxSetPrimColor(gfxp, barLo & 0xFFFF, barLo & 0xFFFF, barLo & 0xFFFF, 0xFF);
    gfxDrawSprite(gfxp, 0xA2, 0xAC, 0xC, 2);
    for (k = 0; k < 4; k++) {
        colors[k] = 0x7F;
    }
    colors[D_80190C98] = 0xFF;
    gfxSetPrimColor(gfxp, colors[0], colors[0], colors[0], 0xFF);
    gfxDrawSprite(gfxp, 0x72, 0x36, 0xC, 4);
    gfxSetPrimColor(gfxp, colors[1], colors[1], colors[1], 0xFF);
    gfxDrawSprite(gfxp, 0x72, 0x67, 0xC, 5);
    gfxSetPrimColor(gfxp, colors[2], colors[2], colors[2], 0xFF);
    gfxDrawSprite(gfxp, 0x74, 0x99, 0xC, 6);
    gfxSetPrimColor(gfxp, colors[3], colors[3], colors[3], 0xFF);
    gfxDrawSprite(gfxp, 0x81, 0xCC, 0xC, 9);
    gfxSetPrimColor(gfxp, 0, 0, 0, 0x80);
    k = 0x15 - D_8021F028;
    while (k != 0) {
        gfxDrawSprite(gfxp, (s16)(0xF4 - k * 8), 0x4D, 0xB, 0x55);
        k = k - 1;
    }
    k = 0x15 - D_8021F029;
    while (k != 0) {
        gfxDrawSprite(gfxp, (s16)(0xF4 - k * 8), 0x7E, 0xB, 0x55);
        k = k - 1;
    }
}
