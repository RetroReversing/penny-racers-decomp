void func_8014A4C8(s32, s32, s32, s32, s32);
void func_801CA494(s32, s32, s32, s32, s32);
extern s8 D_8021E15F;
extern s8 D_8021E162;
extern u8 D_8021E19E;
void func_80204AC8(s32 arg0)
{
  s8 *__base_D_8021E15F;
  s32 a1;
  s32 a2;
  s32 a3;
  const s8 *p;
  __base_D_8021E15F = &D_8021E15F;
  p = __base_D_8021E15F;
  if ((p[0] == 2) && (p[1] == 0))
  {
    a3 = (0xFF - D_8021E19E) & 0xFFFF;
    a1 = a3;
    a2 = a3;
    do
    {
      func_801CA494(arg0, a1, a2, a3, 0xFF);
    }
    while (0);
  }
  else
  {
    a1 = 0x64;
    a2 = 0x64;
    a3 = 0x64;
    if (((unsigned long) __base_D_8021E15F) & 0x100)
    {
      func_801CA494(arg0, a1, a2, a3, 0xFF);
    }
    else
    {
      func_801CA494(arg0, a1, a2, a3, 0xFF);
    }
  }
  func_8014A4C8(arg0, 0x77, 0x3A, 0xB, 0x61);
  if (((unsigned long) (&D_8021E15F)) & 0x100)
  {
    func_8014A4C8(arg0, 0x77, 0x9C, 0xB, 0x62);
  }
  else
  {
    func_8014A4C8(arg0, 0x77, 0x9C, 0xB, 0x62);
  }
  func_8014A4C8(arg0, 0xC0, 0x3A, 0xB, 0x63);
  do
  {
    if (arg0 || p)
    {
      func_8014A4C8(arg0, 0xC0, 0x9C, 0xB, 0x11);
    }
    else
    {
      func_8014A4C8(arg0, 0xC0, 0x9C, 0xB, 0x11);
    }
  }
  while (0);
  func_8014A4C8(arg0, 0x77, 0x2B, 8, 3);
  if ((p[0] == 2) && (p[1] == 0))
  {
    func_801CA494(arg0, 0xFF, 0xFF, 0xFF, 0xFF);
  }
  if ((p[3] != 2) || (p[-3] != 1))
  {
    func_801CA494(arg0, 0x64, 0x64, 0x64, 0xFF);
  }
  func_8014A4C8(arg0, 0x7F, 0x70, 8, 6);
  if ((p[0] == 2) && (p[1] == 0))
  {
    func_801CA494(arg0, 0xFF, 0xFF, 0xFF, 0xFF);
  }
  if ((p[3] != 1) || (p[-3] != p[3]))
  {
    func_801CA494(arg0, 0x64, 0x64, 0x64, 0xFF);
  }
  if (D_8021E19E || arg0)
  {
    func_8014A4C8(arg0, 0x7F, 0x59, 8, 5);
  }
  else
  {
    func_8014A4C8(arg0, 0x7F, 0x59, 8, 5);
  }
  if ((p[0] == 2) && (p[1] == 0))
  {
    func_801CA494(arg0, 0xFF, 0xFF, 0xFF, 0xFF);
  }
  if ((p[3] != 0) || (p[-3] != 1))
  {
    func_801CA494(arg0, 0x64, 0x64, 0x64, 0xFF);
  }
  if (D_8021E19E)
  {
    func_8014A4C8(arg0, 0x7F, 0x42, 8, 7);
  }
  else
  {
    func_8014A4C8(arg0, 0x7F, 0x42, 8, 7);
  }
  if ((p[0] == 2) && (p[1] == 0))
  {
    func_801CA494(arg0, 0xFF, 0xFF, 0xFF, 0xFF);
  }
  if ((p[3] != 3) || (1 != p[-3]))
  {
    func_801CA494(arg0, 0x64, 0x64, 0x64, 0xFF);
  }
  func_8014A4C8(arg0, 0x7F, 0x87, 8, 0xC);
}

