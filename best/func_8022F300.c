extern s32 D_801E99A0;
extern s32 D_801E99A4;
extern s32 D_801E99A8;
extern s32 D_801E99AC;
extern s32 D_801E99C0;
extern u16 D_802330A0;
extern u16 D_8006FB10;
extern s16 D_8006F9E8;
extern s16 D_8006FE58;
extern void func_800DE38C(void);
extern void func_800DE2E0(void);
void func_8022F300(void)
{
  s32 *p = &D_801E99A0;
  if ((*p) == 1)
  {
    if (1)
    {
    }
    if (D_802330A0 != 0)
    {
      do
      {
        if (D_801E99A8)
        {
          *p = 2;
        }
        else
        {
          *p = 2;
        }
      }
      while (0);
      D_802330A0--;
    }
  }
  p = &D_801E99A4;
  if (((*p) == 1) && (D_802330A0 < 9))
  {
    do
    {
      *p = 2;
    }
    while (0);
    D_802330A0++;
  }
  if ((D_801E99AC == 1) && (D_8006FB10 >= 2))
  {
    D_8006FB10--;
  }
  if ((D_801E99A8 == 1) && (D_8006FB10 < 9))
  {
    D_8006FB10++;
  }
  if (D_801E99C0 != 0)
  {
    D_801E99C0++;
 do { switch (D_802330A0) { case 0: D_8006F9E8 = 0x1A; break; case 1: D_8006F9E8 = 0x16; break; case 2: D_8006F9E8 = 2; break; case 3: D_8006F9E8 = 4; break; case 4: D_8006F9E8 = 6; break; case 5: D_8006F9E8 = 8; break; case 6: D_8006F9E8 = 0xA; break; case 7: D_8006F9E8 = 0xC; break; case 8: D_8006F9E8 = 0xE; break; case 9: D_8006F9E8 = 0x10; break; } } while (0);
  }
  func_800DE38C();
  func_800DE2E0();
  D_8006FE58 = 0;
}
