volatile unsigned long gfxSetup2DState(void);
void gfxDrawClippedTex4b(void **, s16, s16, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, void *, void *);
extern u8 D_8006FB14[];
extern u8 sRowBoard[];
extern u8 D_8011F2F0[];
extern u8 racerTimerFlags[];
extern u8 viewIndex;
extern u8 D_80167F58[];
extern u8 D_80167F60[];
extern u8 D_80174A68[];
extern u8 D_80175250[];
extern u8 noticeBackgroundDl[];
/* Draws the HUD notice for racer racerIdx when it is the viewed racer and the notice is active; its position comes from the HUD row layout. */ void drawRacerNotice(void **dlList, s32 racerIdx)
{
  s32 temp_v0;
  s32 temp_v0_2;
  u16 x;
  int y;
  u8 noticeState;
  void *dl;
  if ((viewIndex == ((*((s16 *) (sRowBoard + 0x2108))) - 1)) && (racerTimerFlags[(racerIdx & 0xFFFF) * 0x64] != 0))
  {
    noticeState = D_8006FB14[4];
    if (noticeState == 1)
    {
      D_8006FB14[4] = 1;
      dl = *dlList;
      *dlList = ((char *) dl) + 8;
      *((s32 *) dl) = 0x06000000;
      *((void **) (((s8 *) dl) + 4)) = noticeBackgroundDl;
      gfxSetup2DState();
      if ((*((s16 *) (sRowBoard + 0x2108))) == noticeState)
      {
        x = 0x70;
        y = 0x63;
      }
      else
      {
        if (racerIdx)
        {
          temp_v0 = racerIdx & 0xFFFF;
        }
        else
        {
          temp_v0 = racerIdx & 0xFFFF;
        }
        if ((*((s16 *) (sRowBoard + 0x2108))) == 2)
        {
          x = 0x70;
          y = (D_8011F2F0[(racerIdx & 0xFFFF) * 0x64] * 0x6C) + 0x32;
        }
        else
        {
          temp_v0_2 = D_8011F2F0[(racerIdx & 0xFFFF) * 0x64] * 2;
          x = *((u16 *) (D_80167F58 + temp_v0_2));
          y = *((u16 *) (D_80167F60 + temp_v0_2));
        }
      }
      if (noticeBackgroundDl)
      {
        gfxDrawClippedTex4b(dlList, (s16) x, (s16) y, 0, 0, 0x60, 0x2A, 0x60, 0x2A, 0x60, 0x15, 0, 0, 0x13F, 0xEF, D_80174A68, D_80175250);
      }
      else
      {
        gfxDrawClippedTex4b(dlList, (s16) x, (s16) y, 0, 0, 0x60, 0x2A, 0x60, 0x2A, 0x60, 0x15, 0, 0, 0x13F, 0xEF, D_80174A68, D_80175250);
      }
    }
  }
}
