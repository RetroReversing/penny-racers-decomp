s32 func_80149F40(u16, s32, s8);
u8 func_8014A870(s32, s32, u8);
s32 func_8014B854(s32);
s32 func_801FD530(s32, s32);
extern s8 D_8011F32E[];
extern u8 D_8011F2F0[];
extern u8 D_8021B069;
extern u8 D_8021B00C[];
extern u8 D_8021B019;
extern s16 D_8021E1A2;
extern u8 D_8021B06A;
extern u8 D_8021E180[];
extern u8 D_8021E20B[];
extern u8 D_8021E20C[];
inline static int inline_fn(int arg0)
{
  return arg0;
}

void func_8020AAB0(s32 arg0)
{
  register s32 idx;
  if (idx || arg0)
  {
    idx = arg0 & 0xFFFF;
  }
  else
  {
    idx = arg0 & 0xFFFF;
  }
  switch (D_8011F32E[(arg0 & 0xFFFF) * 0x64])
  {
    case 0:
      if (D_8011F32E)
    {
      D_8011F32E[(unsigned short) ((arg0 & ((short) 0xFFFF)) * 0x64)] = 1;
      return;
    }
    else
      if (arg0)
    {
      D_8011F32E[inline_fn((arg0 & ((short) 0xFFFF)) * 0x64)] = 1;
      return;
    }
    else
      if (idx)
    {
      D_8011F32E[(arg0 & ((short) 0xFFFF)) * 0x64] = 1;
      return;
    }
    else
    {
      D_8011F32E[(arg0 & ((short) 0xFFFF)) * 0x64] = 1;
      return;
    }

    case 2:
      if ((D_8021E1A2 != 0) && (D_8021B069 & 0x10))
    {
      if (D_8011F32E)
      {
        D_8011F32E[idx * 0x64] = 1;
      }
      else
      {
        D_8011F32E[idx * 0x64] = 1;
      }
    }
      return;

  }

}

