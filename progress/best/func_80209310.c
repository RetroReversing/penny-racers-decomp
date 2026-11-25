s32 func_80148230();
s32 func_8014A4C8();
s32 func_801CA140();
s32 func_801CA494();
s32 func_80209B90();
extern u16 D_8011F2F0;
extern u16 D_8011F330;
extern u16 D_8021AFE6;
extern u8 D_8021B014;
extern u16 D_8021B110;
extern u16 D_8021B112;
extern u16 D_8021B114;
extern s32 D_8021B128;
extern s32 D_8021B12C;
extern s32 D_8021B1A0;
extern u16 D_8021B1A4;
extern volatile unsigned int D_8021B1A6;
extern s16 D_8021E18C;
extern u8 D_8021E19E;
extern s16 D_8021E1A2;
inline static volatile unsigned short inline_fn(u8 arg0, s32 arg1)
{
  return *((s32 *) (arg0 + arg1));
}

inline static s32 *inline_fn2(short arg0)
{
  return (s32 *) arg0;
}

inline static int inline_fn23(s16 arg0)
{
  return arg0 + 1;
}

void func_80209310(s32 arg0, volatile unsigned int arg1)
{
  u16 kind;
  s32 i;
  do
  {
    func_80209B90(arg1 & 0xFFFF);
  }
  while (0);
  kind = *((u16 *) (((arg1 & 0xFFFF) * 0x64) + D_8011F330));
  if (kind == 2)
  {
    do
    {
      if (arg1)
      {
        func_801CA140(arg0);
      }
      else
      {
        func_801CA140(arg0);
      }
    }
    while (0);
    func_801CA494(arg0, 0xFF, 0xFF, 0xFF, 0xFF);
    i = 0;
    if (D_8021E1A2 >= 0)
    {
      do
      {
        do
        {
          if (inline_fn(D_8021B014, i) == 1)
          {
            func_8014A4C8(arg0, *((s32 *) ((((((D_8021B1A4 + (i * 4)) & 0xFFu) & 0xFFu) & 0xFFu) & 0xFFu) & 0xFFu)), inline_fn(D_8021B1A6, i * 4), 0xB, 0x56);
          }
          i++;
        }
        while (0);
      }
      while (inline_fn23(D_8021E1A2) > i);
    }
  }
  else
  {
    s32 temp_s0 = arg1 & 0xFFFF;
    do
    {
      if (D_8011F330)
      {
        *inline_fn2(D_8011F330 + ((arg1 & 0xFFFF) * 0x64)) = inline_fn23(inline_fn(D_8011F330, (arg1 & ((short) 0xFFFF)) * 0x64));
      }
      else
      {
        *((s32 *) (D_8011F330 + (20 * (5 * (arg1 & 0xFFFF))))) = inline_fn23(inline_fn(D_8011F330, (arg1 & ((short) 0xFFFF)) * 0x64));
      }
    }
    while (0);
  }
}

