extern s8 menuInputLock[];

extern s8 menuFocus[];
extern u8 menuArrowAlpha;
void gfxSetPrimColor(s32, s32, s32, s32, s32);
void gfxDrawSprite(s32, s32, s32, s32, s32);

/* Draws the menu's focus arrows, dimming unfocused ones; the arrows pulse while the menu is unlocked. */ void drawMenuFocusArrows(s32 gfx)
{
    s32 pulse;

    if (menuInputLock[0] == 0 && menuInputLock[1] == 0) {
        pulse = (0xFF - menuArrowAlpha) & 0xFFFF;
        gfxSetPrimColor(gfx, pulse, pulse, pulse, 0xFF);
    } else {
        gfxSetPrimColor(gfx, 0x64, 0x64, 0x64, 0xFF);
    }
    gfxDrawSprite(gfx, 0x1F, 0x3E, 0xB, 0x5E);
    gfxDrawSprite(gfx, 0x1F, 0xA0, 0xB, 0x5F);
    gfxDrawSprite(gfx, 0x68, 0x3E, 0xB, 0x60);
    gfxDrawSprite(gfx, 0x68, 0xA0, 0xB, 0xD);
    gfxDrawSprite(gfx, 0x1F, 0x2F, 0x8, 0x1);
    if (menuInputLock[0] == 0 && menuInputLock[1] == 0) {
        gfxSetPrimColor(gfx, 0xFF, 0xFF, 0xFF, 0xFF);
    }
    if (!(menuFocus[0] == 2 && menuFocus[-6] == 1)) {
        gfxSetPrimColor(gfx, 0x64, 0x64, 0x64, 0xFF);
    }
    gfxDrawSprite(gfx, 0x27, 0x74, 0x8, 0x6);
    if (menuInputLock[0] == 0 && menuInputLock[1] == 0) {
        gfxSetPrimColor(gfx, 0xFF, 0xFF, 0xFF, 0xFF);
    }
    if (!(menuFocus[0] == 1 && menuFocus[-6] == menuFocus[0])) {
        gfxSetPrimColor(gfx, 0x64, 0x64, 0x64, 0xFF);
    }
    gfxDrawSprite(gfx, 0x27, 0x5D, 0x8, 0x5);
    if (menuInputLock[0] == 0 && menuInputLock[1] == 0) {
        gfxSetPrimColor(gfx, 0xFF, 0xFF, 0xFF, 0xFF);
    }
    if (!(menuFocus[0] == 0 && menuFocus[-6] == 1)) {
        gfxSetPrimColor(gfx, 0x64, 0x64, 0x64, 0xFF);
    }
    gfxDrawSprite(gfx, 0x27, 0x46, 0x8, 0x7);
    if (menuInputLock[0] == 0 && menuInputLock[1] == 0) {
        gfxSetPrimColor(gfx, 0xFF, 0xFF, 0xFF, 0xFF);
    }
    if (!(menuFocus[0] == 3 && menuFocus[-6] == 1)) {
        gfxSetPrimColor(gfx, 0x64, 0x64, 0x64, 0xFF);
    }
    gfxDrawSprite(gfx, 0x27, 0x8B, 0x8, 0xC);
}
