void gfxDrawSprite();
void gfxSetup2DState();
void gfxSetPrimAlpha();
void gfxSetPrimColor();
void gfxDrawClippedTex8b();
extern u8 menuCursor;
extern u8 menuArrowAlpha;
extern char menuBgTex[];
extern char menuBgTlut[];
extern char menuPanelTex[];
extern char menuPanelTlut[];

/* Draws the title menu: background, panel, and the four menu items, with the item under menuCursor shown at full brightness. */ void drawMenuScreen(s32 gfxp)
{
    gfxSetup2DState();
    gfxSetPrimColor(gfxp, 0x78, 0x78, 0x78, 0xFF);
    gfxDrawClippedTex8b(gfxp, 0, 0, 0, 0, 0x140, 0xF0, 0x140, 0xF0, 0x40, 0x20, 0, 0, 0x13F, 0xEF, menuBgTex, menuBgTlut);
    gfxDrawClippedTex8b(gfxp, 0x20, 0x22, 0, 0, 0x110, 0x7F, 0x110, 0x7F, 0x40, 0x20, 0, 0, 0x13F, 0xEF, menuPanelTex, menuPanelTlut);
    if (menuCursor != 0) {
        gfxSetPrimColor(gfxp, 0x64, 0x64, 0x64, 0xFF);
    } else {
        gfxSetPrimColor(gfxp, 0xFF, 0xFF, 0xFF, 0xFF);
    }
    gfxDrawSprite(gfxp, 0x70, 0x7C, 0xB, 0x25);
    if (menuCursor != 1) {
        gfxSetPrimColor(gfxp, 0x64, 0x64, 0x64, 0xFF);
    } else {
        gfxSetPrimColor(gfxp, 0xFF, 0xFF, 0xFF, 0xFF);
    }
    gfxDrawSprite(gfxp, 0x70, 0x92, 0x2, 0);
    if (menuCursor != 2) {
        gfxSetPrimColor(gfxp, 0x64, 0x64, 0x64, 0xFF);
    } else {
        gfxSetPrimColor(gfxp, 0xFF, 0xFF, 0xFF, 0xFF);
    }
    gfxDrawSprite(gfxp, 0x70, 0xA8, 0x2, 1);
    if (menuCursor != 3) {
        gfxSetPrimColor(gfxp, 0x64, 0x64, 0x64, 0xFF);
    } else {
        gfxSetPrimColor(gfxp, 0xFF, 0xFF, 0xFF, 0xFF);
    }
    gfxDrawSprite(gfxp, 0x70, 0xBE, 0x2, 2);
    gfxSetPrimColor(gfxp, 0xFF, 0xFF, 0xFF, 0xFF);
    gfxSetPrimAlpha(gfxp, menuArrowAlpha);
    gfxDrawSprite(gfxp, 0x5B, menuCursor * 0x16 + 0x7A, 0xB, 0x23);
    gfxDrawSprite(gfxp, 0xD2, menuCursor * 0x16 + 0x7A, 0xB, 0x24);
}

