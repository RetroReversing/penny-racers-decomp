extern u16 D_8011F330[];
extern u8 D_8021B631;
extern u8 D_8021B632;
extern u8 D_8021B635;
extern u16 D_8021EED0[];
extern u16 D_8021EEDA[];
extern s32 D_8021EFA0;
extern u8 D_802D6898[];
extern u8 D_802D92A0[];
extern u8 D_80203080[];
void func_801CA140(s32);
void func_801CA468(s32, s32);
void func_801CA494(s32, s32, s32, s32, s32);
void func_8014A4C8(s32, s32, s32, s32, s32);
void func_801CABF4(s32, s32, s32, s32, void *, void *, s32, void *, s32, s32, s32, s32);
void func_802109DC(s32 arg0, volatile unsigned short arg1)
{
  s32 i;
  s32 j;
  s32 a3;
  switch (D_8011F330[(arg1 & 0xFFFF) * 0x32])
  {
    case 0:
      D_8011F330[(arg1 & 0xFFFF) * 0x32] = 0x10;
      return;

    case 16:
      func_801CA140(arg0);
      func_801CA468(arg0, 0xFF);
      func_801CA494(arg0, 0, 0, 0, 0x7F);
      func_8014A4C8(arg0, 0x20, 0x5D, 0xB, 0x40);
      func_8014A4C8(arg0, 2, 0x19, 0xB, 0x41);
      func_801CA468(arg0, 0xFF);
      func_8014A4C8(arg0, 0x8E, 0x43, 9, 1);
      func_8014A4C8(arg0, 0x118, 0x43, 9, 2);
      func_801CA494(arg0, 0x91, 0x83, 0x47, 0xFF);
      func_8014A4C8(arg0, 0, 0x17, 0xB, 0x41);
      func_801CA468(arg0, 0xFF);
      if (D_8021EFA0 & 0x4000)
    {
      func_8014A4C8(arg0, 0x28, 0x1A, 9, 0);
      a3 = 0xFF;
    }
    else
    {
      func_8014A4C8(arg0, 0x29, 0x17, 9, 6);
      func_8014A4C8(arg0, 0x35, 0x33, 9, 7);
      a3 = 0x80;
    }
      func_801CA494(arg0, a3, a3, a3, 0xFF);
      for (i = 0; i < 2; i++)
    {
      func_8014A4C8(arg0, D_8021B631, D_8021B632, 9, D_8021B635);
    }

      func_8014A4C8(arg0, 0xC4, 0xC8, 9, 4);
      for (i = 0; i < 6; i++)
    {
      for (j = 0; j < 0xF; j++)
      {
        D_8021EED0[j + (i * 0xF)] = 0;
      }

      func_801CABF4(arg0, 0x28, (((i * 0x10) + i) + 0x5E) & 0xFFFF, 0xE, D_802D92A0, D_8021EED0, 0, D_802D6898, 0xE, 0x10, 0xE0, 0x60);
    }

      return;

  }

}

