void gfxDrawSprite();
void gfxSetup2DState();
void gfxSetPrimAlpha();
void gfxSetPrimColor();
void gfxDrawClippedTex8b();
extern u8 D_8021B0C0;
extern u8 D_8021E19E;
extern char D_802E66D8[];
extern char D_802F92E0[];
extern char D_802F94E8[];
extern char D_80301BE0[];

void func_80206BC0(s32 arg0)
{
    gfxSetup2DState();
    gfxSetPrimColor(arg0, 0x78, 0x78, 0x78, 0xFF);
    gfxDrawClippedTex8b(arg0, 0, 0, 0, 0, 0x140, 0xF0, 0x140, 0xF0, 0x40, 0x20, 0, 0, 0x13F, 0xEF, D_802E66D8, D_802F92E0);
    gfxDrawClippedTex8b(arg0, 0x20, 0x22, 0, 0, 0x110, 0x7F, 0x110, 0x7F, 0x40, 0x20, 0, 0, 0x13F, 0xEF, D_802F94E8, D_80301BE0);
    if (D_8021B0C0 != 0) {
        gfxSetPrimColor(arg0, 0x64, 0x64, 0x64, 0xFF);
    } else {
        gfxSetPrimColor(arg0, 0xFF, 0xFF, 0xFF, 0xFF);
    }
    gfxDrawSprite(arg0, 0x70, 0x7C, 0xB, 0x25);
    if (D_8021B0C0 != 1) {
        gfxSetPrimColor(arg0, 0x64, 0x64, 0x64, 0xFF);
    } else {
        gfxSetPrimColor(arg0, 0xFF, 0xFF, 0xFF, 0xFF);
    }
    gfxDrawSprite(arg0, 0x70, 0x92, 0x2, 0);
    if (D_8021B0C0 != 2) {
        gfxSetPrimColor(arg0, 0x64, 0x64, 0x64, 0xFF);
    } else {
        gfxSetPrimColor(arg0, 0xFF, 0xFF, 0xFF, 0xFF);
    }
    gfxDrawSprite(arg0, 0x70, 0xA8, 0x2, 1);
    if (D_8021B0C0 != 3) {
        gfxSetPrimColor(arg0, 0x64, 0x64, 0x64, 0xFF);
    } else {
        gfxSetPrimColor(arg0, 0xFF, 0xFF, 0xFF, 0xFF);
    }
    gfxDrawSprite(arg0, 0x70, 0xBE, 0x2, 2);
    gfxSetPrimColor(arg0, 0xFF, 0xFF, 0xFF, 0xFF);
    gfxSetPrimAlpha(arg0, D_8021E19E);
    gfxDrawSprite(arg0, 0x5B, D_8021B0C0 * 0x16 + 0x7A, 0xB, 0x23);
    gfxDrawSprite(arg0, 0xD2, D_8021B0C0 * 0x16 + 0x7A, 0xB, 0x24);
}

