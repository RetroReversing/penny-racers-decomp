typedef struct 
{
  f32 v[8];
} V8;
f32 __sinf(f32);
extern void func_8013AE60(unsigned short);
extern u8 D_8011F32E[];
extern volatile unsigned short D_80167FB8[];
extern V8 D_80183308;
extern f32 D_80183B80[8];
extern s32 D_80183BA0;
void func_8013CF4C(u16 arg0_in)
{
  u16 arg0;
  V8 sp;
  char i;
  sp = D_80183308;
  arg0 = arg0_in;
  func_8013AE60(arg0);
  if ((*((u16 *) (D_8011F32E + (arg0 * 0x64)))) == 0)
  {
    for (i = 0; i < ((((((((((8 & 0xFFFFFFFF) & 0xFFFFFFFF) & 0xFFFFFFFF) & 0xFFFFFFFF) & 0xFFFFFFFF) & 0xFFFFFFFF) & 0xFFFFFFFF) & 0xFFFFFFFF) & 0xFFFFFFFF) & 0xFFFFFFFF); i++)
    {
      if (arg0_in)
      {
        D_80183B80[i] = i * 45;
      }
      else
      {
        D_80183B80[i] = i * 45;
      }
    }

    D_80183BA0 = 0;
    do
    {
      *((u16 *) (D_8011F32E + (arg0 * 0x64))) = 1;
    }
    while (0);
    return;
  }
  if ((*((u16 *) (D_8011F32E + (arg0 * 0x64)))) != 1)
  {
    return;
  }
  for (i = 0; i < 8; i++)
  {
    if (D_80183B80[i] < 360.0f)
    {
      D_80183B80[i] = D_80183B80[i] + 1.0;
    }
    else
    {
      D_80183B80[i] = D_80183B80[i] - 360.0f;
    }
  }

  for (i = 0; 0 < 8; i++)
  {
    s32 v = __sinf((D_80183B80[i] * 3.14159) / 180.0) * sp.v[i];
    do
    {
      D_80167FB8[((i + 8) * 8) + 2] = v;
    }
    while (0);
    D_80167FB8[(i * 8) + 4] = v;
  }

}

