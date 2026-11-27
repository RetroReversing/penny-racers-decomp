s32 gfxDrawSprite();
s32 gfxSetup2DState();
s32 gfxSetPrimAlpha();
extern unsigned short noticeStates[];
extern s32 noticeTimer;
extern u8 menuArrowAlpha;

void func_8021473C(s32 arg0, unsigned int arg1)
{
  s32 state;

  state = *(u16 *) ((char *) noticeStates + (arg1 & 0xFFFF) * 100);
  switch (state) {
    case 0:
      *(u16 *) ((char *) noticeStates + (arg1 & 0xFFFF) * 100) = 1;
      menuArrowAlpha = 0;
      return;

    case 1:
      gfxSetup2DState(arg0);
      gfxSetPrimAlpha(arg0, menuArrowAlpha);
      if (noticeTimer < 0x186) {
        gfxDrawSprite(arg0, 0x38, 0x2C, 0, 3);
        gfxDrawSprite(arg0, 0x60, 0x38, 0, 1);
        gfxDrawSprite(arg0, 0x38, 0xBB, 0, 2);
      } else {
        gfxDrawSprite(arg0, 0x50, 0x6A, 0, 0);
      }
      return;
  }
}

