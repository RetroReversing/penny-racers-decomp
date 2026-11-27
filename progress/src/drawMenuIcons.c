extern s8 menuInputLock[];
extern s8 menuFocus[];
extern u8 menuArrowAlpha;
extern void gfxDrawSprite(s32, s32, s32, s32, s32);
extern void gfxSetPrimColor(s32, s32, s32, s32, s32);

/* Draws the menu's icon sprites; items that are not the current selection are drawn dimmed. */ void drawMenuIcons(s32 dispList) {
    s32 shade;
    if (menuInputLock[0] == 1 && menuInputLock[1] == 0) {
        shade = (0xFF - menuArrowAlpha) & 0xFFFF;
    
    do { gfxSetPrimColor(dispList, shade, shade, shade, 0xFF); } while (0);} else {
        shade = 0x64;
    
    gfxSetPrimColor(dispList, shade, shade, shade, 0xFF);}
    gfxDrawSprite(dispList, 0x4B, 0x3C, 0xB, 0x64);
    gfxDrawSprite(dispList, 0x4B, 0x9E, 0xB, 0x65);
    gfxDrawSprite(dispList, 0x94, 0x3C, 0xB, 0x66);
    gfxDrawSprite(dispList, 0x94, 0x9E, 0xB, 0x15);
    gfxDrawSprite(dispList, 0x4B, 0x2D, 8, 2);
    if (menuInputLock[0] == 1 && menuInputLock[1] == 0) {
        gfxSetPrimColor(dispList, 0xFF, 0xFF, 0xFF, 0xFF);
    }
    if (menuFocus[0] != 2 || menuFocus[-6] != 1) {
        gfxSetPrimColor(dispList, 0x64, 0x64, 0x64, 0xFF);
    }
    gfxDrawSprite(dispList, 0x53, 0x72, 8, 6);
    if (menuInputLock[0] == 1 && menuInputLock[1] == 0) {
        gfxSetPrimColor(dispList, 0xFF, 0xFF, 0xFF, 0xFF);
    }
    if (menuFocus[0] != 1 || menuFocus[-6] != menuFocus[0]) {
        gfxSetPrimColor(dispList, 0x64, 0x64, 0x64, 0xFF);
    }
    gfxDrawSprite(dispList, 0x53, 0x5B, 8, 5);
    if (menuInputLock[0] == 1 && menuInputLock[1] == 0) {
        gfxSetPrimColor(dispList, 0xFF, 0xFF, 0xFF, 0xFF);
    }
    if (menuFocus[0] != 0 || menuFocus[-6] != 1) {
        gfxSetPrimColor(dispList, 0x64, 0x64, 0x64, 0xFF);
    }
    gfxDrawSprite(dispList, 0x53, 0x44, 8, 7);
    if (menuInputLock[0] == 1 && menuInputLock[1] == 0) {
        gfxSetPrimColor(dispList, 0xFF, 0xFF, 0xFF, 0xFF);
    }
    if (menuFocus[0] != 3 || menuFocus[-6] != 1) {
        gfxSetPrimColor(dispList, 0x64, 0x64, 0x64, 0xFF);
    }
    gfxDrawSprite(dispList, 0x53, 0x89, 8, 0xC);
}
