void gfxSetup2DState(s32);
void gfxSetPrimColor(s32, s32, s32, s32, s32);
void gfxDrawClippedTex8b(s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, void *, void *);
void gfxDrawSprite(s32, s32, s32, s32, s32);
extern u8 noticeStates[];
extern f32 D_8021E140;
extern u16 D_8021E16A;
extern u8 menuArrowAlpha;
extern u8 menuBgTex[];
extern u8 menuBgTlut[];
extern u8 menuPanelTex[];
extern u8 menuPanelTlut[];

/* Draws the notice menu for one slot: state 0 arms it, state 1 draws the background, scrolling panel and arrow. */ void drawNoticeMenu(s32 dl, s32 slot) {
    u16 state;

    state = *(u16 *)(noticeStates + ((slot & 0xFFFF) * 0x64));
    switch (state) {
    case 0:
        *(u16 *)(noticeStates + ((slot & 0xFFFF) * 0x64)) = 1;
        return;
    case 1:
        gfxSetup2DState(dl);
        gfxSetPrimColor(dl, 0xFF, 0xFF, 0xFF, 0xFF);
        gfxDrawClippedTex8b(dl, 0, 0, 0, 0, 0x140, 0xF0, 0x140, 0xF0, 0x40, 0x20, 0, 0, 0x13F, 0xEF, menuBgTex, menuBgTlut);
        gfxDrawClippedTex8b(dl, 0x20, (s16) ((s32) D_8021E140 + D_8021E16A), 0, 0, 0x110, 0x7F, 0x110, 0x7F, 0x40, 0x20, 0, 0, 0x13F, 0xEF, menuPanelTex, menuPanelTlut);
        gfxDrawSprite(dl, 0x54, 0xC5, 1, 1);
        gfxSetPrimColor(dl, 0xFF, 0xFF, 0xFF, (s32) menuArrowAlpha);
        gfxDrawSprite(dl, 0x69, 0xA7, 1, 0);
        gfxSetPrimColor(dl, 0xFF, 0xFF, 0xFF, 0xFF);
        return;
    }
}
