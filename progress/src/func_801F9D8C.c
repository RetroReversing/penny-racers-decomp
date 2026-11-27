extern u16 D_801FB230[];

u16 func_801F9D8C(s32 arg0, s32 arg1)
{
  s32 x;
  s32 y;
  u16 angle;

  if ((f32) arg0 > 0.0f)
  {
    x = (u16) (u32) (f32) arg0;
  }
  else
  {
    x = (u16) (u32) -(f32) arg0;
  }
  if ((f32) arg1 > 0.0f)
  {
    y = (u16) (u32) (f32) arg1;
  }
  else
  {
    y = (u16) (u32) -(f32) arg1;
  }
    if (x == 0)
  {
    return (arg1 > 0) ? 0x5A : 0x10E;
  }
  if (y == 0)
  {
    return (arg0 > 0) ? 0 : 0xB4;
  }
  if (x == y)
  {
    if (arg0 > 0)
    {
      return (arg1 > 0) ? 0x2D : 0x13B;
    }
    return (arg1 > 0) ? 0x87 : 0xE1;
  }
  if (y < x)
  {
    angle = D_801FB230[(y << 6) / x];
  }
  else
  {
    angle = 0x5A - D_801FB230[(x << 6) / y];
  }
  if (arg1 < 0)
  {
    if (arg0 < 0)
    {
      return angle + 0xB4;
    }
    return (0x168 - angle) % 0x168;
  }
  if (arg0 < 0)
  {
    return 0xB4 - angle;
  }
  return angle;
}
