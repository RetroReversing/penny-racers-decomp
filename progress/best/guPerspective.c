f32 __cosf(f32);
f32 __sinf(f32);
void guMtxIdentF(f32 mf[4][4]);
void guMtxF2L(f32 mf[4][4], void *m);
extern f64 D_8004A5D0;
extern f64 D_8004A5D8;
extern f64 D_8004A5E0;
extern f64 D_8004A5E8;

void guPerspective(void *m, u16 *perspNorm, f32 fovy, f32 aspect, f32 near, f32 far, f32 scale)
{
  f32 mf[4][4];
  f32 angle;
  f32 cot;
  f32 nf;
  s32 i;
  s32 j;
  f64 d;
  u32 v;

  guMtxIdentF(mf);
  angle = ((f32) (((f64) fovy) * D_8004A5D0)) / 2.0f;
  cot = __cosf(angle) / __sinf(angle);
  mf[0][0] = cot / aspect;
  mf[1][1] = cot;
  mf[2][2] = (near + far) / (near - far);
  mf[2][3] = -1.0f;
  mf[3][2] = ((2.0f * near) * far) / (near - far);
  mf[3][3] = 0.0f;
  for (i = 0; i < 4; i++)
  {
    for (j = 0; j < 4; j++)
    {
      mf[i][j] *= scale;
    }
  }
  if (perspNorm != NULL)
  {
    nf = near + far;
    d = (f64) nf;
    v = 0xFFFF;
    if (!(d <= D_8004A5D8))
    {
      d = D_8004A5E0 / d;
      if (!(D_8004A5E8 <= d))
      {
        v = (s32) d;
      }
      else
      {
        v = ((s32) (d - D_8004A5E8)) | 0x80000000;
      }
      *perspNorm = (u16) v;
      if (!((u16) v))
      {
        v = 1;
        *perspNorm = 1;
      }
    }
    else
    {
      *perspNorm = (u16) v;
    }
  }
  guMtxF2L(mf, m);
}
