f32 __cosf(void);
f32 __sinf(f32);
s32 guMtxF2L(f32 *, s32);
extern f32 D_801FB2B0;
inline static int inline_fn(f32 *arg0, char arg1)
{
  return ((unsigned long) arg0) & arg1;
}

void func_801FA678(s32 arg0, f32 arg1, f32 arg2, f32 arg3)
{
  f32 *__base_D_801FB2B0;
  f32 sx;
  f32 cx;
  f32 sy;
  f32 cy;
  f32 sz;
  f32 cz;
  f32 m[4][4];
  sx = __sinf(arg1 * (*__base_D_801FB2B0));
  sy = __sinf(arg2 * (*(&D_801FB2B0)));
  cy = __cosf();
  cx = __cosf();
  __base_D_801FB2B0 = &D_801FB2B0;
  sz = __sinf(arg3 * (*__base_D_801FB2B0));
  cz = __cosf();
  m[0][0] = ((double) (cy * cz)) + ((sy * sx) * sz);
  m[0][1] = cx * sz;
  m[1][0] = (sz * (-cy)) + ((sy * sx) * cz);
  m[1][1] = cx * cz;
  m[0][3] = 0.0f;
  m[0][2] = ((-sy) * cz) + ((cy * sx) * sz);
  m[1][2] = (sy * sz) + ((cy * sx) * cz);
  m[2][0] = sy * cx;
  m[2][1] = -sx;
  m[2][3] = 0.0f;
  m[1][3] = 0.0f;
  m[2][2] = cy * cx;
  m[3][1] = 0.0f;
  m[3][2] = 0.0f;
  m[3][0] = 0.0f;
  m[3][3] = 1.0f;
  do
  {
    if (inline_fn(__base_D_801FB2B0, 0x10000))
    {
      if (inline_fn(__base_D_801FB2B0, 0x100))
      {
        guMtxF2L((f32 *) m, arg0);
      }
      else
      {
        guMtxF2L((f32 *) m, arg0);
      }
    }
    else
      if (inline_fn(__base_D_801FB2B0, (char) 0x100))
    {
      if (sx)
      {
        if (sz)
        {
          guMtxF2L((f32 *) m, arg0);
        }
        else
        {
          guMtxF2L((f32 *) m, arg0);
        }
      }
      else
      {
        guMtxF2L((f32 *) m, arg0);
      }
    }
    else
    {
      guMtxF2L((f32 *) m, arg0);
    }
  }
  while (0);
}

