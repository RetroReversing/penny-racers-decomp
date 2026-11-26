s32 func_8014A4C8();
s32 func_801CA140();
s32 func_801CA468();
extern unsigned short D_8011F330[];
extern s32 D_8021E130;
extern u8 D_8021E19E;

void func_8021473C(s32 arg0, unsigned int arg1)
{
  s32 state;

  state = *(u16 *) ((char *) D_8011F330 + (arg1 & 0xFFFF) * 100);
  switch (state) {
    case 0:
      *(u16 *) ((char *) D_8011F330 + (arg1 & 0xFFFF) * 100) = 1;
      D_8021E19E = 0;
      return;

    case 1:
      func_801CA140(arg0);
      func_801CA468(arg0, D_8021E19E);
      if (D_8021E130 < 0x186) {
        func_8014A4C8(arg0, 0x38, 0x2C, 0, 3);
        func_8014A4C8(arg0, 0x60, 0x38, 0, 1);
        func_8014A4C8(arg0, 0x38, 0xBB, 0, 2);
      } else {
        func_8014A4C8(arg0, 0x50, 0x6A, 0, 0);
      }
      return;
  }
}

