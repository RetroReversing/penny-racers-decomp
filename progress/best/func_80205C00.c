extern volatile int D_8021AFFC;
extern u8 D_8021B019;
extern volatile char D_8021B024[5];
extern s32 D_8021B038[5];
extern s32 D_8021B04C[5];
extern u8 D_8021B06A;
extern s8 D_8021B07E;
inline static s32 *inline_fn(s32 *arg0)
{
  return arg0;
}

void func_80205C00(void)
{
  s32 var_v0;
  s32 temp;
  switch (D_8021B019)
  {
    case 1:
      D_8021AFFC = var_v0;
      var_v0 = 1 + D_8021AFFC;
      break;

    case 2:
      D_8021AFFC = var_v0;
      var_v0 = D_8021AFFC - 1;
      break;

  }

  do
  {
    temp = (s32) D_8021B06A;
    if (temp < D_8021AFFC)
    {
      D_8021AFFC = 0;
    }
    else
      if (((D_8021AFFC + 1) - 1) < 0)
    {
      D_8021AFFC = (s32) D_8021B06A;
    }
 do { D_8021B024[0] = 0; } while (0);
    ((f32 *) D_8021B038)[0] = -10.0f;
    do
    {
      do
      {
        D_8021B04C[0] = 0;
      }
      while (0);
      ((f32 *) D_8021B024)[1] = -60.0f;
    }
    while (0);
    ((f32 *) D_8021B038)[1] = 15.0f;
    ((f32 *) D_8021B04C)[1] = -70.0f;
    ((f32 *) D_8021B024)[2] = 60.0f;
    ((f32 *) inline_fn(D_8021B038))[2] = 15.0f;
  }
  while (0);
  ((f32 *) D_8021B04C)[2] = -70.0f;
  {
    ((f32 *) D_8021B024)[3] = -158.0f;
    do
    {
      ((f32 *) D_8021B038)[3] = 15.0f;
      ((f32 *) D_8021B04C)[3] = -70.0f;
    }
    while (0);
    ((f32 *) D_8021B024)[4] = 158.0f;
  }
  do
  {
    do
    {
      ((f32 *) D_8021B038)[4] = 15.0f;
    }
    while (0);
    ((f32 *) D_8021B04C)[4] = -70.0f;
    D_8021B019 = 0;
    D_8021B07E = 0;
  }
  while (0);
}
