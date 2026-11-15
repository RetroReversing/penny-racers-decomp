extern s32 D_801E99A0;
extern s32 D_801E99A4;
extern s32 D_801E99A8;
extern s32 D_801E99AC;
extern s32 D_801E99C0;
extern volatile u16 D_802330A0;
extern u16 D_8006FB10;
extern s16 D_8006F9E8;
extern s16 D_8006FE58;
extern void func_800DE38C(void);
extern void func_800DE2E0(void);
void func_8022F300(void)
{
  s32 *p = &D_801E99A0;
  s32 v;
  if (*p == 1)
  {
    if (D_802330A0 != 0)
    {
      *p = 2;
      D_802330A0 = D_802330A0 - 1;
    }
  }
  p = &D_801E99A4;
  if (*p == 1 && D_802330A0 < 9)
  {
    *p = 2;
    D_802330A0 = D_802330A0 + 1;
  }
  if (D_801E99AC == 1 && D_8006FB10 >= 2)
  {
    D_8006FB10--;
  }
  if (D_801E99A8 == 1 && D_8006FB10 < 9)
  {
    D_8006FB10++;
  }
  p = &D_801E99C0;
  if (*p == 0)
  {
    return;
  }
  (*p)++;
  switch (D_802330A0)
  {
    case 0: v = 0x1A; break;
    case 1: v = 0x16; break;
    case 2: v = 2; break;
    case 3: v = 4; break;
    case 4: v = 6; break;
    case 5: v = 8; break;
    case 6: v = 0xA; break;
    case 7: v = 0xC; break;
    case 8: v = 0xE; break;
    case 9: v = 0x10; break;
    default: goto done;
  }
  D_8006F9E8 = v;
done:
  func_800DE38C();
  func_800DE2E0();
  D_8006FE58 = 0;
}
