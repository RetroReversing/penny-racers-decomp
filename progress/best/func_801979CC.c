u8 func_8019839C();
u8 func_801987A8();
u8 func_80198968();
u8 func_80198DF0();
extern char D_8011F2FC[];
extern volatile short D_8011F308[];
extern char D_8011F30C[];
extern char D_8011F310[];
extern char D_8011F32E[];
extern u8 D_801C6B31;
extern s8 D_801C6BB9;
extern volatile unsigned char D_801C7068;
extern u16 D_801C7074;
extern u8 D_801C7ABD;
inline static int inline_fn(int arg0, s32 arg1)
{
  return (((u32) ((*((u16 *) (D_8011F32E + (D_801C7074 * 0x64)))) - arg0)) < 2U) || ((*((u16 *) (D_8011F32E + arg1))) == 6);
}

inline static u16 inline_fn2(s32 arg0)
{
  return *((u16 *) (D_8011F32E + arg0));
}

inline static u8 inline_fn23()
{
  return func_801987A8();
}

void func_801979CC(s32 arg0)
{
  volatile unsigned long temp_v1;
  s32 temp_v1_2;
  s32 temp_v1_3;
  u16 temp_v1_4;
  do { temp_v1 = (arg0 & 0xFFFF) * 0x64; } while (0);
  *((f32 *) (D_8011F308 + ((arg0 & 0xFFFF) * 0x64))) = (((f32) (D_801C7068 - 1)) * 400.0f) * 0.5f;
  *((s32 *) (D_8011F30C + temp_v1)) = 0;
  *((f32 *) (D_8011F310 + temp_v1)) = (((f32) D_801C6BB9) * 400.0f) * 0.5f;
  temp_v1_2 = D_801C7074 * 0x64;
  if (inline_fn(7, temp_v1_2))
  {
    D_801C6B31 = inline_fn23();
  }
  else
  {
    do
    {
      if (temp_v1_3)
      {
        temp_v1_3 = D_801C7074 * 0x64;
      }
      else
      {
        temp_v1_3 = D_801C7074 * 0x64;
      }
    }
    while (0);
    if ((((u32) (inline_fn2(temp_v1_3) - 9)) < 2U) || (inline_fn2(temp_v1_3) == 0xD))
    {
      D_801C6B31 = func_80198968();
    }
    else
      if (((u32) ((*((u16 *) (D_8011F32E - (-(((unsigned char) D_801C7074) * 0x64))))) - 0xB)) < 2U)
    {
      D_801C6B31 = func_8019839C();
    }
    else
      if (((u32) (inline_fn2(D_801C7074 * 0x64) - 0xF)) < 2U)
    {
      D_801C6B31 = func_80198DF0(arg0 & 0xFFFF);
    }
    else
    {
      if (temp_v1 || D_8011F30C)
      {
        temp_v1_4 = inline_fn2(D_801C7074 * 0x64);
      }
      else
      {
        temp_v1_4 = inline_fn2(D_801C7074 * 0x64);
      }
      if (((((u32) (temp_v1_4 - 0x11)) >= 2U) && (((u32) (temp_v1_4 - 0x13)) >= 2U)) && (D_801C7068 != 0))
      {
        D_801C6B31 = 1;
      }
      else
      {
        D_801C6B31 = 0;
      }
    }
  }
  if (D_801C6B31 != 0)
  {
    *(D_8011F2FC + ((arg0 & 0xFFFF) * 0x64)) = D_801C7ABD;
    return;
  }
  *(D_8011F2FC + ((arg0 & 0xFFFF) * 0x64)) = 0;
}

