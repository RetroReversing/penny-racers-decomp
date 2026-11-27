extern u8 D_8011F2F0[];

void gfxSetup2DState(void);
void gfxSetPrimAlpha(s32, u8);
void gfxDrawSprite(s32, s32, s32, s32, s32);

void func_8020FBA8(s32 arg0, s32 arg1) {
    u16 idx;

    idx = arg1;
    gfxSetup2DState();
    gfxSetPrimAlpha(arg0, D_8011F2F0[idx * 0x64]);
    gfxDrawSprite(arg0, 0x14, 0x46, 0xB, 0x56);
}
