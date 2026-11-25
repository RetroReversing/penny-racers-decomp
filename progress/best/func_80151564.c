extern u8 D_8016BC18[];
extern u32 D_802398E8[];
extern void func_80150DE0();
extern void func_80150E48();
extern void func_80150ED4();
extern void func_80151154();
extern void func_80151178();
extern void func_801513E4();
extern void func_8013AE60();
extern void func_800DE41C(s32, s32, s32, s32, s32, s32, void *, void *, void *, f32, f32, f32, s32, f32, s32, f32, f32, f32);
inline static float inline_fn(float arg0)
{
  return -arg0;
}

inline static u8 *inline_fn2(int arg0)
{
  return D_8016BC18 + arg0;
}

inline static float inline_fn23()
{
  return 1.0f;
}

void func_80151564(void)
{
  u8 *__base_D_8016BC18;
  __base_D_8016BC18 = D_8016BC18;
  __repair_rows:
  {
    {
      func_800DE41C(0, 2, 2, 0, 0x51, 0xFF, __base_D_8016BC18, func_80150DE0, 0, 1580.0f, 169.0f, inline_fn(1112.0f), 0, 0.0f, 0, inline_fn23(), 1.0f, 1.0f);
    }
  }

  if (0)
  {
 do { goto __repair_rows; } while (0);
  }
  func_800DE41C(0, 4, 2, 0, 0x51, 0xFF, __base_D_8016BC18, func_80150DE0, 0, 72.0f, 149.0f, inline_fn(1202.0f), 0, 0.0f, 0, 1.0f, 1.0f, 1.0f);
  func_800DE41C(0, 0x13, 2, 0, 0x53, 0x96, inline_fn2(0x10), func_80150E48, func_80150ED4, 0.0f, 0.0f, 0.0f, 0, 0.0f, 0, 1.0f, inline_fn23(), 1.0f);
  __repair_rows_:
  {
    func_800DE41C(0, 0, 2, 0x80, 0x51, 0xFF, inline_fn2(0x20), func_8013AE60, 0, 1396.0f, 58.0f, 4.0f, 0, 0.0f, 0, inline_fn23(), inline_fn23(), 1.0f);
  }

  if (0)
  {
    do
    {
      goto __repair_rows_;
    }
    while (0);
  }
  func_800DE41C(0, 0, 2, 0x80, 0x51, 0xFF, inline_fn2(0x20), func_8013AE60, 0, 1596.0f, 58.0f, 4.0f, 0, 0.0f, 0, 1.0f, inline_fn23(), 1.0f);
  func_800DE41C(0, 3, 2, 0x80, 0x51, 0xFF, inline_fn2(0x30), func_8013AE60, 0, 1600.0f, 160.0f, inline_fn(1325.0f), 0, 0.0f, 0, inline_fn23(), inline_fn23(), 1.0f);
  func_800DE41C(0, 4, 2, 0x80, 0x51, 0xFF, __base_D_8016BC18 + 0x30, func_8013AE60, 0, inline_fn(342.5f), 100.0f, inline_fn(911.41f), 0, 0.0f, 0, inline_fn23(), 1.0f, 1.0f);
  do
  {
    func_800DE41C(0, 0x14, 2, 0x80, 0x51, (char) 0xFF, __base_D_8016BC18 + 0x30, func_8013AE60, 0, 1376.0f, 167.0f, 2350.0f, 0, 0.0f, 0, 1.0f, 1.0f, inline_fn23());
  }
  while (0);
  func_800DE41C(0, 0x17, 2, 0, 0x51, 0xFF, inline_fn2(0x40), func_8013AE60, 0, 1459.4f, inline_fn23(), 1619.5f, 0, 134.87f, 0, 1.0f, inline_fn23(), 1.0f);
  func_800DE41C(0, 0xD, 2, 0, 0x51, 0xFF, inline_fn2(0x40), func_8013AE60, 0, inline_fn(642.61f), inline_fn23(), 185.72f, 0, inline_fn(48.25f), 0, inline_fn23(), 1.0f, 1.0f);
  func_800DE41C(0, 0, 2, 0, 0x51, 0x96, __base_D_8016BC18 + 0x50, func_8013AE60, func_80151154, 0.0f, 0.0f, 0.0f, 0, 0.0f, 0, 1.0f, 1.0f, 1.0f);
  func_800DE41C(0, 4, 2, 0, 0x51, 0x96, __base_D_8016BC18 + 0x60, func_8013AE60, func_80151154, 498.0f, inline_fn23(), inline_fn(967.0f), 0, 0.0f, 0, 1.0f, 1.0f, inline_fn23());
  do
  {
    {
      func_800DE41C(0, 3, 2, 0, 0x51, 0x96, inline_fn2(0x60), func_8013AE60, func_80151154, 1696.0f, 1.0f, inline_fn(1684.0f), 0, 0.0f, 0, 1.0f, inline_fn23(), 1.0f);
    }
  }
  while (0);
  func_800DE41C(0, 0x13, 2, 0, 0x51, 0x96, __base_D_8016BC18 + 0x60, func_8013AE60, func_80151154, 225.99f, 50.3f, 2020.0f, 0, 0.0f, inline_fn(5.7f), 0.5f, 1.0f, 0.625f);
  func_800DE41C(0, 6, 2, 0x80, 0x51, 0xFF, D_802398E8, func_80151178, func_801513E4, inline_fn(1800.0f), 65.0f, inline_fn(1580.0f), 0, 0.0f, 0, 2.0f, 2.0f, 2.0f);
  func_800DE41C(0, 6, 2, 0x80, 0x51, 0xFF, D_802398E8, func_80151178, func_801513E4, inline_fn(1800.0f), 65.0f, inline_fn(1420.0f), 0, 0.0f, 0, 2.0f, 2.0f, 2.0f);
  do
  {
    func_800DE41C(0, 7, 2, 0x80, 0x51, 0xFF, D_802398E8, func_80151178, func_801513E4, inline_fn(1468.86f), 65.0f, inline_fn(1468.86f), 0, 0.0f, 0, 2.0f, 2.0f, 2.0f);
  }
  while (0);
  func_800DE41C(0, 7, 2, 0x80, 0x51, 0xFF, D_802398E8, func_80151178, func_801513E4, inline_fn(1355.14f), 65.0f, inline_fn(1355.14f), 0, 0.0f, 0, 2.0f, 2.0f, 2.0f);
  func_800DE41C(0, 8, 2, 0x80, 0x51, 0xFF, D_802398E8, func_80151178, func_801513E4, inline_fn(1580.0f), 65.0f, inline_fn(1800.0f), 0, 0.0f, 0, 2.0f, 2.0f, 2.0f);
  func_800DE41C(0, 8, 2, 0x80, 0x51, 0xFF, D_802398E8, func_80151178, func_801513E4, inline_fn(1420.0f), 65.0f, inline_fn(1800.0f), 0, 0.0f, 0, 2.0f, 2.0f, 2.0f);
  func_800DE41C(0, 9, 2, 0x80, 0x51, 0xFF, D_802398E8, func_80151178, func_801513E4, inline_fn(1468.86f), 65.0f, inline_fn(331.14f), 0, 0.0f, 0, 2.0f, 2.0f, 2.0f);
  func_800DE41C(0, 9, 2, 0x80, 0x51, 0xFF, D_802398E8, func_80151178, func_801513E4, inline_fn(1355.14f), 65.0f, -444.86f, 0, 0.0f, 0, 2.0f, 2.0f, 2.0f);
}
