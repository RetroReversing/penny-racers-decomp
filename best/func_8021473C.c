s32 func_8014A4C8();
s32 func_801CA140();
s32 func_801CA468();
extern unsigned long long D_8011F330[];
extern s32 D_8021E130;
extern u8 D_8021E19E;
void func_8021473C(s32 arg0, s32 arg1)
{
  s32 var_a1;
  s32 var_a2;
  u16 temp_v1;
  temp_v1 = *(D_8011F330 + ((arg1 & 0xFFFF) * 0x64));
  switch (temp_v1)
  {
    case 0:
      *(D_8011F330 + ((arg1 & 0xFFFF) * 0x64)) = 1;
      D_8021E19E = 0;
      return;

    case 1:
      func_801CA140(arg0);
      func_801CA468(arg0, D_8021E19E);
      if (D_8021E130 < 0x186)
    {
      func_8014A4C8(arg0, 0x38, 0x2C, 0, 3);
      func_8014A4C8(arg0, 0x60, 0x38, 0);
      var_a1 = 0x38;
      var_a2 = 0xBB;
    }
    else
    {
      var_a1 = 0x50;
      var_a2 = 0x6A;
    }
      func_8014A4C8(arg0, var_a1, var_a2, 0);
      return;

  }

}

