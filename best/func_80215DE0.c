s32 func_8014A870(s32, s32, s32, s8, s8, s8);
void func_801D651C(s32, s32);
extern s32 D_8011F2F0;
extern s32 D_80190C9A;
extern s32 D_80190C9C;
extern s32 D_80190CB0;
extern s32 D_801C5E9C;
extern u8 D_801C5EA0;
extern u8 D_801C5EA1;
extern u8 D_801CA13C;
extern s32 D_8021DEB0;
extern u8 D_8021E19C;
void func_80215DE0(volatile unsigned int arg0)
{
  s32 var_s2;
  u16 *temp_s1;
  if (temp_s1 || arg0)
  {
    temp_s1 = (u16 *) (((arg0 & 0xFFFF) * 0x64) + ((u8 *) (&D_8011F2F0)));
    var_s2 = func_8014A870(0x1E, 7, 0, *((s8 *) (&D_8021DEB0)), *(((s8 *) (&D_8021DEB0)) + 1), *(((s8 *) (&D_8021DEB0)) + 2));
  }
  else
  {
    temp_s1 = (u16 *) (((arg0 & 0xFFFF) * 0x64) + ((u8 *) (&D_8011F2F0)));
    var_s2 = func_8014A870(0x1E, 7, 0, *((s8 *) (&D_8021DEB0)), *(((s8 *) (&D_8021DEB0)) + 1), *(((s8 *) (&D_8021DEB0)) + 2));
  }
  switch (temp_s1[0x1F])
  {
    case 0:
      break;

    case 16:
      D_8021E19C += 8;
      break;

    case 17:
      break;

    case 32:
      break;

  }

}

