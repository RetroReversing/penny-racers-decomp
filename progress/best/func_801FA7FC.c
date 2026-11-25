f32 __cosf(f32);
f32 __sinf(f32);
s32 guMtxF2L(f32 *, s32);
extern f32 D_801FB2B4;
inline static float inline_fn(f32 arg0, f32 arg1)
{
  return arg0 * arg1;
}

inline static float inline_fn2(f32 arg0, f32 arg1)
{
  return arg0 * arg1;
}

void func_801FA7FC(s32 arg0, f32 arg1, f32 arg2, f32 arg3)
{
  f32 *__base_D_801FB2B4;
  f32 m[16];
  f32 x;
  f32 y;
  f32 z;
  f32 sx;
  f32 cx;
  f32 sy;
  f32 cy;
  f32 sz;
  f32 cz;
  register f32 nx;
  register f32 t;
  __base_D_801FB2B4 = &D_801FB2B4;
  x = inline_fn(arg1, *__base_D_801FB2B4);
  z = inline_fn(arg3, *__base_D_801FB2B4);
  y = arg2 * (*__base_D_801FB2B4);
  sx = __sinf(x);
  cx = __cosf(x);
  sy = __sinf(y);
  cy = __cosf(y);
  do
  {
    do
    {
 do { do { cz = __cosf(z); do { do { sz = __sinf(z); t = sx * sy; m[0] = inline_fn(cy, cz) - inline_fn(t, sz); } while (0); m[1] = inline_fn2(cy, sz) + inline_fn(t, cz); nx = -cx; } while (0); m[2] = inline_fn2(nx, sy); m[3] = 0; m[4] = nx * sz; } while (0); m[5] = inline_fn(cx, cz); m[6] = sx; } while (0);
    }
    while (0);
    m[7] = 0; t = sx * cy; m[8] = inline_fn2(sy, cz) + inline_fn(t, sz);
    do
    {
      do
      {
        do
        {
          m[9] = inline_fn(sy, sz) - inline_fn(t, cz);
        }
        while (0);
      }
      while (0);
      m[10] = inline_fn(cx, cy);
    }
    while (0);
    m[11] = 0; m[12] = 0; m[13] = 0;
  }
  while (0);
  m[14] = 0;
  m[15] = 1.0f;
  if (((unsigned long) __base_D_801FB2B4) & 0x100)
  {
    if (__base_D_801FB2B4)
    {
      guMtxF2L(m, arg0);
    }
    else
    {
      guMtxF2L(m, arg0);
    }
  }
  else
  {
    guMtxF2L(m, arg0);
  }
}
