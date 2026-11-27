extern s8 menuInputLock[];
extern s8 menuFocus[];
extern u8 menuArrowAlpha;
void gfxSetPrimColor(s32, s32, s32, s32, s32);
void gfxDrawSprite(s32, s32, s32, s32, s32);

/* Draws the option icon sprites for menu state 2; unselected icons are drawn dimmed. */ void drawOptionIcons(s32 dispList)
{
    s32 shade;

    if (menuInputLock[0] == 2 && menuInputLock[1] == 0) {
        shade = (0xFF - menuArrowAlpha) & 0xFFFF;
        gfxSetPrimColor(dispList, shade, shade, shade, 0xFF);
    } else {
        gfxSetPrimColor(dispList, 0x64, 0x64, 0x64, 0xFF);
    }
    gfxDrawSprite(dispList, 0x77, 0x3A, 0xB, 0x61);
    gfxDrawSprite(dispList, 0x77, 0x9C, 0xB, 0x62);
    gfxDrawSprite(dispList, 0xC0, 0x3A, 0xB, 0x63);
    gfxDrawSprite(dispList, 0xC0, 0x9C, 0xB, 0x11);
    gfxDrawSprite(dispList, 0x77, 0x2B, 0x8, 0x3);
    if (menuInputLock[0] == 2 && menuInputLock[1] == 0) {
        gfxSetPrimColor(dispList, 0xFF, 0xFF, 0xFF, 0xFF);
    }
    if (!(menuFocus[0] == 2 && menuFocus[-6] == 1)) {
        gfxSetPrimColor(dispList, 0x64, 0x64, 0x64, 0xFF);
    }
    gfxDrawSprite(dispList, 0x7F, 0x70, 0x8, 0x6);
    if (menuInputLock[0] == 2 && menuInputLock[1] == 0) {
        gfxSetPrimColor(dispList, 0xFF, 0xFF, 0xFF, 0xFF);
    }
    if (!(menuFocus[0] == 1 && menuFocus[-6] == menuFocus[0])) {
        gfxSetPrimColor(dispList, 0x64, 0x64, 0x64, 0xFF);
    }
    gfxDrawSprite(dispList, 0x7F, 0x59, 0x8, 0x5);
    if (menuInputLock[0] == 2 && menuInputLock[1] == 0) {
        gfxSetPrimColor(dispList, 0xFF, 0xFF, 0xFF, 0xFF);
    }
    if (!(menuFocus[0] == 0 && menuFocus[-6] == 1)) {
        gfxSetPrimColor(dispList, 0x64, 0x64, 0x64, 0xFF);
    }
    gfxDrawSprite(dispList, 0x7F, 0x42, 0x8, 0x7);
    if (menuInputLock[0] == 2 && menuInputLock[1] == 0) {
        gfxSetPrimColor(dispList, 0xFF, 0xFF, 0xFF, 0xFF);
    }
    if (!(menuFocus[0] == 3 && menuFocus[-6] == 1)) {
        gfxSetPrimColor(dispList, 0x64, 0x64, 0x64, 0xFF);
    }
    gfxDrawSprite(dispList, 0x7F, 0x87, 0x8, 0xC);
}
