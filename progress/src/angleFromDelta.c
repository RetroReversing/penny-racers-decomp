extern u16 atanTable[];

/* Returns the heading (0..0x167, 0x168 = full turn) of the vector (dx, dz), using atanTable for the first-octant angle. */ u16 angleFromDelta(s32 dx, s32 dz)
{
  s32 absDx;
  s32 absDz;
  u16 angle;

  if ((f32) dx > 0.0f)
  {
    absDx = (u16) (u32) (f32) dx;
  }
  else
  {
    absDx = (u16) (u32) -(f32) dx;
  }
  if ((f32) dz > 0.0f)
  {
    absDz = (u16) (u32) (f32) dz;
  }
  else
  {
    absDz = (u16) (u32) -(f32) dz;
  }
    if (absDx == 0)
  {
    return (dz > 0) ? 0x5A : 0x10E;
  }
  if (absDz == 0)
  {
    return (dx > 0) ? 0 : 0xB4;
  }
  if (absDx == absDz)
  {
    if (dx > 0)
    {
      return (dz > 0) ? 0x2D : 0x13B;
    }
    return (dz > 0) ? 0x87 : 0xE1;
  }
  if (absDz < absDx)
  {
    angle = atanTable[(absDz << 6) / absDx];
  }
  else
  {
    angle = 0x5A - atanTable[(absDx << 6) / absDz];
  }
  if (dz < 0)
  {
    if (dx < 0)
    {
      return angle + 0xB4;
    }
    return (0x168 - angle) % 0x168;
  }
  if (dx < 0)
  {
    return 0xB4 - angle;
  }
  return angle;
}
