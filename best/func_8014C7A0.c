s32 func_800DE41C(s32, s32, s32, s32, s32, s32, s32 *, s32 *, s32 *, s32, s32, s32, s32, s32, s32, f32, f32, f32);
s32 func_80148230();
extern u8 D_80168DD0[];
extern s32 D_80168E50;
extern s32 func_8013AE60;
extern s32 func_8014C080;
extern s32 func_8014C0FC;
extern s32 func_8014C264;
extern s32 func_8014C4D0;
extern s32 func_8014C77C;
extern s32 func_80167510;
inline static u8 *inline_fn(u8 *arg0, int arg1)
{
  return arg0 + arg1;
}

void func_8014C7A0(void)
{
  s32 *temp_s0;
  s32 *temp_s0_2;
  s32 *temp_s1;
  s32 *temp_s4;
  s32 *temp_s6;
  func_800DE41C(0, 0xA, 2, 0, 0x53, 0x96, D_80168DD0, &func_8013AE60, NULL, 0, 0, 0, 0, 0, 0, 1.0f, 1.0f, 1.0f);
  temp_s6 = inline_fn(D_80168DD0, 0x20);
  func_800DE41C(0, 0xA, 2, 0, 0x54, 0x96, temp_s6, &func_8014C080, &func_8014C0FC, 0xC4BB8000, 0x42976B85, 0x44B54000, 0, 0, 0, 1.0f, 1.0f, 1.0f);
  temp_s4 = inline_fn(D_80168DD0, 0x30);
  func_800DE41C(0, 0xA, 2, 0, 0x55, 0x96, temp_s4, &func_8014C080, &func_8014C0FC, 0xC4B9F47B, 0x42200000, 0x44B6247B, 0, 0, 0, 1.0f, 1.0f, 1.0f);
  func_800DE41C(0, 0xF, 2, 0, 0x53, 0x96, inline_fn(D_80168DD0, 0x10), &func_8013AE60, NULL, 0, 0, 0, 0, 0, 0, 1.0f, 1.0f, 1.0f);
  do
  {
    {
      func_800DE41C(0, 0xF, 2, 0, 0x54, 0x96, temp_s6, &func_8014C080, &func_8014C0FC, 0x44BB8000, 0x42976B85, 0x449C4000, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    }
    {
      func_800DE41C(0, 0xF, 2, 0, 0x55, 0x96, temp_s4, &func_8014C080, &func_8014C0FC, 0x44BD0B85, 0x42200000, 0x449D247B, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    }
  }
  while (0);
  func_800DE41C(0, 0x13, 2, 0, 0x51, 0xFF, inline_fn(D_80168DD0, 0x40), &func_8014C264, &func_8014C4D0, 0x45177000, 0x4276AE14, 0xC49E8000, 0, 0, 0, 1.0f, 1.0f, 1.0f);
  func_800DE41C(0, 0x10, 2, 0x80, 0x51, 0xFF, inline_fn(D_80168DD0, 0x50), &func_8013AE60, NULL, 0x451D2000, 0x430D0000, 0x44834000, 0, 0, 0, 1.0f, 1.0f, 1.0f);
  temp_s0 = inline_fn(D_80168DD0, 0x60);
  func_800DE41C(0, 0, 2, 0x80, 0x51, 0xFF, temp_s0, &func_8013AE60, NULL, 0x44170000, 0x42680000, 0xC4D40000, 0, 0, 0, 1.0f, 1.0f, 1.0f);
  func_800DE41C(0, 0, 2, 0x80, 0x51, 0xFF, temp_s0, &func_8013AE60, NULL, 0x44170000, 0x42680000, 0xC4EE0000, 0, 0, 0, 1.0f, 1.0f, 1.0f);
  temp_s1 = inline_fn(D_80168DD0, 0x70);
  if (func_80148230() & 0xFF)
  {
    func_800DE41C(0, 0x10, 2, 0, 0x51, 0xFF, temp_s1, &func_80167510, NULL, 0x44F0051F, 0, 0x448047AE, 0, 0, 0, 0.4f, 0.5f, 0.5f);
    func_800DE41C(0, 0x10, 2, 0, 0x51, 0xFF, temp_s1, &func_80167510, NULL, 0x44E4ABD7, 0, 0x448DF0A4, 0, 0x42B40000, 0, 0.4f, 0.5f, 0.5f);
  }
  do
  {
    func_800DE41C(0, 0, 2, 0, 0x51, 0x96, &D_80168E50, &func_8013AE60, &func_8014C77C, 0, 0, 0, 0, 0, 0, 1.0f, 1.0f, 1.0f);
  }
  while (0);
  temp_s0_2 = inline_fn(&D_80168E50, 0x10);
  func_800DE41C(0, 0xA, 2, 0, 0x51, 0xFF, temp_s0_2, &func_8013AE60, NULL, 0xC4CF8000, 0x3F800000, 0x44CFA000, 0, 0xC2B40000, 0, 1.0f, 1.0f, 1.0f);
  func_800DE41C(0, 0x13, 2, 0, 0x51, 0xFF, temp_s0_2, &func_8013AE60, NULL, 0x4503A000, 0x3F800000, 0xC4C9C000, 0, 0x42220000, 0, 1.0f, 1.0f, 1.0f);
}

