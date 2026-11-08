s32 func_8014A4C8(s32, s32, s32, s32, s32);
s32 func_801CA140(s32);
s32 func_801CA494(s32, s32, s32, s32, s32);
s32 func_801CCE7C(s32, s32, s16, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32 *, s32 *);
extern s32 D_8011F330;
extern f32 D_8021E140;
extern u16 D_8021E16A;
extern u8 D_8021E19E;
extern s32 D_802E66D8;
extern s32 D_802F92E0;
extern s32 D_802F94E8;
extern s32 D_80301BE0;
void func_8020653C(s32 arg0, s32 arg1)
{
  u16 temp_v1;
  temp_v1 = *((&D_8011F330) + ((unsigned short) ((arg1 & 0xFFFF) * 0x64)));
  switch (temp_v1)
  {
    case 0:
      *((&D_8011F330) + ((arg1 & 0xFFFF) * 0x64)) = 1;
      return;

    case 1:
      do
    {
      func_801CA140(arg0);
    }
    while (0);
      func_801CA494(arg0, 0xFF, 0xFF, 0xFF, 0xFF);
      func_801CCE7C(arg0, 0, 0, 0, 0, 0x140, 0xF0, 0x140, 0xF0, 0x40, 0x20, 0, 0, 0x13F, 0xEF, &D_802E66D8, &D_802F92E0);
      do
    {
      func_801CCE7C(arg0, 0x20, (s16) (((s32) D_8021E140) + D_8021E16A), 0, 0, 0x110, 0x7F, 0x110, 0x7F, 0x40, 0x20, 0, 0, 0x13F, 0xEF, &D_802F94E8, &D_80301BE0);
    }
    while (0);
      do
    {
      func_8014A4C8(arg0, 0x54, 0xC5, 1, 1);
    }
    while (0);
      func_801CA494(arg0, 0xFF, 0xFF, 0xFF, (s32) D_8021E19E);
      do
    {
      func_8014A4C8(arg0, 0x69, 0xA7, 1, 0);
    }
    while (0);
      func_801CA494(arg0, 0xFF, 0xFF, 0xFF, 0xFF);
      return;

  }

}

