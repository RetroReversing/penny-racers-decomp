extern s32 D_801E99A0;
extern s32 D_801E99A4;
extern s32 D_801E99A8;
extern s32 D_801E99AC;
extern s32 D_801E99C0;
extern volatile unsigned short D_802330A0;
extern u16 D_8006F9E8;
extern volatile unsigned short D_8006FB10;
extern u16 D_8006FE58;
void func_800DE38C(void);
void func_800DE2E0(void);
int func_8022F300(void)
{
  s32 *__base_D_801E99C0;
  u16 v;
  s32 *__base_D_801E99A4;
  u16 *__base_D_8006FB10;
  __base_D_8006FB10 = &D_8006FB10;
  __base_D_801E99A4 = &D_801E99A4;
  __base_D_801E99C0 = &D_801E99A0;
  if (((*__base_D_801E99C0) == 1) && (D_802330A0 != 0))
  {
    *__base_D_801E99C0 = 2;
    D_802330A0 -= 1;
  }
  __base_D_801E99C0 = __base_D_801E99A4;
  if (((*__base_D_801E99C0) == 1) && (D_802330A0 < 9))
  {
    *__base_D_801E99C0 = 2;
    D_802330A0 += 1;
  }
  if ((D_801E99AC == 1) && ((*(&D_8006FB10)) >= 2))
  {
    *__base_D_8006FB10 -= 1;
  }
  if ((D_801E99A8 == 1) && ((*__base_D_8006FB10) < 9))
  {
    *__base_D_8006FB10 += 1;
  }
  __base_D_801E99C0 = &D_801E99C0;
  if ((*__base_D_801E99C0) != 0)
  {
    *__base_D_801E99C0 += 1;
    switch (D_802330A0)
    {
      case 0:
        v = 0x1A;
        D_8006F9E8 = v;
        break;

      case 1:
        v = 0x16;
        D_8006F9E8 = v;
        break;

      case 2:
        v = 0x2;
        D_8006F9E8 = v;
        break;

      case 3:
        v = 0x4;
        D_8006F9E8 = v;
        break;

      case 4:
        v = 0x6;
        D_8006F9E8 = v;
        break;

      case 5:
        v = 0x8;
        D_8006F9E8 = v;
        break;

      case 6:
        v = 0xA;
        D_8006F9E8 = v;
        break;

      case 7:
        v = 0xC;
        D_8006F9E8 = v;
        break;

      case 8:
        v = 0xE;
        D_8006F9E8 = v;
        break;

      case 9:
        v = 0x10;
        D_8006F9E8 = v;
        break;

    }

    func_800DE38C();
    func_800DE2E0();
    D_8006FE58 = 0;
  }
}

