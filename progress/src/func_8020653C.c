void gfxSetup2DState(s32);
void gfxSetPrimColor(s32, s32, s32, s32, s32);
void gfxDrawClippedTex8b(s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, void *, void *);
void gfxDrawSprite(s32, s32, s32, s32, s32);
extern u8 D_8011F330[];
extern f32 D_8021E140;
extern u16 D_8021E16A;
extern u8 D_8021E19E;
extern u8 D_802E66D8[];
extern u8 D_802F92E0[];
extern u8 D_802F94E8[];
extern u8 D_80301BE0[];

void func_8020653C(s32 arg0, s32 arg1) {
    u16 temp_v1;

    temp_v1 = *(u16 *)(D_8011F330 + ((arg1 & 0xFFFF) * 0x64));
    switch (temp_v1) {
    case 0:
        *(u16 *)(D_8011F330 + ((arg1 & 0xFFFF) * 0x64)) = 1;
        return;
    case 1:
        gfxSetup2DState(arg0);
        gfxSetPrimColor(arg0, 0xFF, 0xFF, 0xFF, 0xFF);
        gfxDrawClippedTex8b(arg0, 0, 0, 0, 0, 0x140, 0xF0, 0x140, 0xF0, 0x40, 0x20, 0, 0, 0x13F, 0xEF, D_802E66D8, D_802F92E0);
        gfxDrawClippedTex8b(arg0, 0x20, (s16) ((s32) D_8021E140 + D_8021E16A), 0, 0, 0x110, 0x7F, 0x110, 0x7F, 0x40, 0x20, 0, 0, 0x13F, 0xEF, D_802F94E8, D_80301BE0);
        gfxDrawSprite(arg0, 0x54, 0xC5, 1, 1);
        gfxSetPrimColor(arg0, 0xFF, 0xFF, 0xFF, (s32) D_8021E19E);
        gfxDrawSprite(arg0, 0x69, 0xA7, 1, 0);
        gfxSetPrimColor(arg0, 0xFF, 0xFF, 0xFF, 0xFF);
        return;
    }
}
