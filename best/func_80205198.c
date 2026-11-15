extern u8 D_8021B06B;
extern u8 D_8021B06C;
extern s8 D_8021E15F[];
extern s8 D_8021E162;
extern u8 D_8021E19E;
void func_801CA494(s32, s32, s32, s32, s32);
void func_8014A4C8(s32, s32, s32, s32, s32);
inline static int inline_fn(s8 *arg0, int arg1)
{
  return ((arg0[0] == arg1) && (D_8021B06B == 0)) && (D_8021B06C == 0);
}

void func_80205198(s32 arg0)
{
  s32 var_a1;
  s32 var_a2;
  s32 var_a3;
  s8 *p;
  p = D_8021E15F;
  if (inline_fn(p, 4) && (p[1] == 0))
  {
    var_a3 = (0xFF - D_8021E19E) & 0xFFFF;
    var_a1 = var_a3;
    var_a2 = var_a3;
  }
  else
  {
    var_a1 = 0x64;
    var_a2 = 0x64;
    var_a3 = 0x64;
  }
  func_801CA494(arg0, var_a1, var_a2, var_a3, 0);
  func_8014A4C8(arg0, 0xCF, 0x36, 0xB, 0x6A);
  func_8014A4C8(arg0, 0xCF, 0x98, 0xB, 0x6B);
  func_8014A4C8(arg0, 0x118, 0x36, 0xB, 0x6C);
  func_8014A4C8(arg0, 0x118, 0x98, 0xB, 0x1D);
  func_8014A4C8(arg0, 0xCF, 0x27, 8, 8);
  if ((D_8021E15F[0] == 4) && (p[1] == 0))
  {
    func_801CA494(arg0, 0xFF, 0xFF, 0xFF, 0xFF);
  }
  if ((D_8021E162 != 0) || ((*(((s8 *) (&D_8021E162)) - 6)) != 1))
  {
    func_801CA494(arg0, 0x64, 0x64, 0x64, 0xFF);
  }
  func_8014A4C8(arg0, 0xD7, 0x42, 8, 0x15);
  func_8014A4C8(arg0, 0xD7, 0x60, 8, 0x16);
  func_8014A4C8(arg0, 0x110, 0x42, 8, 0x17);
  func_8014A4C8(arg0, 0x110, 0x60, 8, 0x18);
  func_8014A4C8(arg0, 0xD9, 0x46, 8, 0x12);
  if ((D_8021E15F[0] == 4) && (p[1] == 0))
  {
    func_801CA494(arg0, 0xFF, 0xFF, 0xFF, 0xFF);
  }
  if ((D_8021E162 != 1) || ((*(((s8 *) (&D_8021E162)) - 6)) != D_8021E162))
  {
    func_801CA494(arg0, 0x64, 0x64, 0x64, 0xFF);
  }
  func_8014A4C8(arg0, 0xD7, 0x6E, 8, 0x15);
  func_8014A4C8(arg0, 0xD7, 0x8C, 8, 0x16);
  func_8014A4C8(arg0, 0x110, 0x6E, 8, 0x17);
  func_8014A4C8(arg0, 0x110, 0x8C, 8, 0x18);
  func_8014A4C8(arg0, 0xD9, 0x71, 8, 0x13);
}

