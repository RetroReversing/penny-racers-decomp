extern u16 D_80232880[];
extern u16 D_802328A0[];
extern u16 D_802328CC[];
extern u8 D_8011F4E4[];
extern u8 D_8011F548[];
extern u8 D_8011F5AC[];
extern u8 D_80237740[];
extern volatile unsigned char D_802387D8[];
extern volatile short D_80237FC8[];
extern volatile short D_80237FCC[];
extern volatile short D_80237FD0[];
extern unsigned short D_80237FD4[];
inline static f32 *inline_fn(volatile short *arg0, int arg1)
{
  return (f32 *) (arg0 + arg1);
}

inline static int inline_fn2()
{
  return 0x1C;
}

volatile int func_80230960(u8 *arg0)
{
  u16 a;
  u8 *p;
  unsigned short t;
  do
  {
    a = D_80232880[*((u16 *) (arg0 + 0x53A))];
    do
    {
      p = D_8011F4E4 + ((*((u16 *) (arg0 + 2))) * 0x64);
    }
    while (0);
  }
  while (0);
  if (a != 0)
  {
    *((u8 **) ((*((u8 **) (p + 0x50))) + 4)) = D_80237740 + (a * 0xC);
    t = D_802387D8[(a * 0x10) + (*((u16 *) (arg0 + 0x230)))] * 0x10;
    *inline_fn(p, 0x18) = *((f32 *) (t + D_80237FC8));
    *inline_fn(p, inline_fn2()) = *inline_fn(D_80237FCC, t);
    do
    {
      *inline_fn(p, 0x20) = *inline_fn(D_80237FD0, t);
      *inline_fn(p, 0x24) = *inline_fn(D_80237FD4, t);
    }
    while (0);
  }
  else
  {
    *((u8 **) ((*((u8 **) (p + 0x50))) + 4)) = 0;
  }
  a = D_802328A0[*((u16 *) (arg0 + 0x538))];
  p = D_8011F548 + ((*((u16 *) (arg0 + 2))) * 0x64);
  do
  {
    if (a != 0)
    {
      *((u8 **) ((*((u8 **) (p + 0x50))) + 4)) = D_80237740 + (a * 0xC);
      t = D_802387D8[(*((u16 *) (arg0 + 0x230))) + (a * 0x10)] * 0x10;
      if (1)
      {
        *inline_fn(p, 0x18) = *inline_fn(D_80237FC8, t);
        *inline_fn(p, inline_fn2()) = *inline_fn(D_80237FCC, t);
      }
      *inline_fn(p, 0x20) = *inline_fn(D_80237FD0, t);
      *inline_fn(p, 0x24) = *inline_fn(D_80237FD4, t);
    }
    else
    {
      *((u8 **) ((*((u8 **) (p + 0x50))) + 4)) = 0;
    }
    a = D_802328CC[*((u16 *) (arg0 + 0x534))]; p = D_8011F5AC + ((*((u16 *) (arg0 + 2))) * 0x64);
  }
  while (0);
  if (a != 0)
  {
    *((u8 **) ((*((u8 **) (p + 0x50))) + 4)) = D_80237740 + (a * 0xC);
    t = (8 * D_802387D8[(a * 0x10) + (*((u16 *) (arg0 + 0x230)))]) * 2;
    *inline_fn(p, 0x18) = *inline_fn(D_80237FC8, t);
    *((f32 *) (p + 0x1C)) = *inline_fn(D_80237FCC, t);
    *((f32 *) (p + 0x20)) = *inline_fn(D_80237FD0, t);
    *inline_fn(p, 0x24) = *((f32 *) (D_80237FD4 + t));
  }
  else
  {
    *((u8 **) ((*((u8 **) (p + 0x50))) + 4)) = 0;
  }
}

