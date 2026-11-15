s32 func_8014A4C8(s32, s16, s16, s32, s32);
void func_801CA140(void);
void func_801CA468(s32, s32);
void func_801CA494(s32, u8, u8, u8, u8);
extern u8 D_8011F308[];
extern u8 D_8011F30C[];
extern u8 D_8011F330[];
extern u8 D_80189C9A;
extern u16 D_80190CB4;
void func_8014ADA4(s32 arg0, volatile unsigned int arg1)
{
  s16 s1;
  u8 a1;
  u8 a2;
  u8 a3;
  u16 t;
  func_801CA140();
  func_801CA468(arg0, 0xFF);
  t = *((u16 *) (D_8011F330 + (D_80190CB4 * 0x64)));
  switch (t)
  {
    case 0x20:
      func_801CA494(arg0, 0xE2, 0x38, 0x73, 0xFF);
      func_8014A4C8(arg0, 0x8E, (D_80189C9A * 0x25) + 0x58, 7, 0);
      return;

    case 0x30:

    case 0x40:

    case 0x50:
      a1 = 0xE2;
      a2 = 0x38;
      a3 = 0x73;
      s1 = 0x7C;
      t = *((u16 *) (D_8011F330 + (D_80190CB4 * 0x64)));
      if ((t == 0x40) || (t == 0x50))
    {
      func_801CA494(arg0, 0xE2, 0x38, 0x73, 0xFF);
      func_8014A4C8(arg0, (s16) (*((f32 *) (D_8011F30C + ((arg1 & 0xFFFF) * 0x64)))), 0x8E, 7, 0x1B);
      a1 = 0x71;
      a2 = 0;
      a3 = 0x38;
      s1 = 0x70;
    }
      func_801CA494(arg0, a1, a2, a3, 0xFF);
      func_8014A4C8(arg0, (s16) (*((f32 *) (D_8011F308 + ((arg1 & 0xFFFF) * 0x64)))), s1, 7, 0);
      return;

    default:
      return;

  }

}

