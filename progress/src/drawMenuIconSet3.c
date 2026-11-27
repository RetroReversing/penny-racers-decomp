extern s8 menuInputLock[];
extern s8 menuFocus[];
extern u8 menuArrowAlpha;
void gfxSetPrimColor(s32, s32, s32, s32, s32);
void gfxDrawSprite(s32, s32, s32, s32, s32);

/* Draws the icon sprites for menu state 3; unselected icons are drawn dimmed. */ void drawMenuIconSet3(s32 dispList)
{
    s32 shade;

    if (menuInputLock[0] == 3 && menuInputLock[1] == 0) {
        shade = (0xFF - menuArrowAlpha) & 0xFFFF;
        gfxSetPrimColor(dispList, shade, shade, shade, 0xFF);
    } else {
        gfxSetPrimColor(dispList, 0x64, 0x64, 0x64, 0xFF);
    }
    gfxDrawSprite(dispList, 0xA3, 0x38, 0xB, 0x67);
    gfxDrawSprite(dispList, 0xA3, 0x9A, 0xB, 0x68);
    gfxDrawSprite(dispList, 0xEC, 0x38, 0xB, 0x69);
    gfxDrawSprite(dispList, 0xEC, 0x9A, 0xB, 0x19);
    gfxDrawSprite(dispList, 0xA3, 0x29, 0x8, 0x4);
    if (menuInputLock[0] == 3 && menuInputLock[1] == 0) {
        gfxSetPrimColor(dispList, 0xFF, 0xFF, 0xFF, 0xFF);
    }
    if (!(menuFocus[0] == 2 && menuFocus[-6] == 1)) {
        gfxSetPrimColor(dispList, 0x64, 0x64, 0x64, 0xFF);
    }
    gfxDrawSprite(dispList, 0xAB, 0x6E, 0x8, 0x6);
    if (menuInputLock[0] == 3 && menuInputLock[1] == 0) {
        gfxSetPrimColor(dispList, 0xFF, 0xFF, 0xFF, 0xFF);
    }
    if (!(menuFocus[0] == 1 && menuFocus[-6] == menuFocus[0])) {
        gfxSetPrimColor(dispList, 0x64, 0x64, 0x64, 0xFF);
    }
    gfxDrawSprite(dispList, 0xAB, 0x57, 0x8, 0x5);
    if (menuInputLock[0] == 3 && menuInputLock[1] == 0) {
        gfxSetPrimColor(dispList, 0xFF, 0xFF, 0xFF, 0xFF);
    }
    if (!(menuFocus[0] == 0 && menuFocus[-6] == 1)) {
        gfxSetPrimColor(dispList, 0x64, 0x64, 0x64, 0xFF);
    }
    gfxDrawSprite(dispList, 0xAB, 0x40, 0x8, 0x7);
    if (menuInputLock[0] == 3 && menuInputLock[1] == 0) {
        gfxSetPrimColor(dispList, 0xFF, 0xFF, 0xFF, 0xFF);
    }
    if (!(menuFocus[0] == 3 && menuFocus[-6] == 1)) {
        gfxSetPrimColor(dispList, 0x64, 0x64, 0x64, 0xFF);
    }
    gfxDrawSprite(dispList, 0xAB, 0x85, 0x8, 0xC);
}
