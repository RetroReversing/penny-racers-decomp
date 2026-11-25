typedef struct 
{
  u16 prev;
  u16 next;
  u8 pad[120];
} Node;
extern unsigned short D_80187BE0;
extern s16 D_80189DC2;
extern Node D_8018D738[];
extern s16 D_8018F5C2;
inline static unsigned char inline_fn(u16 arg0)
{
  return (unsigned char) arg0;
}

inline static unsigned short inline_fn2(u16 *arg0)
{
  return (unsigned short) (*arg0);
}

u16 func_8013E364(void)
{
  s32 ret;
  u16 a1;
  if (D_80187BE0 == 0)
  {
    u16 cur = D_8018F5C2;
    if (D_8018D738[inline_fn(cur)].next != 0xFFFF)
    {
      do
      {
        cur = D_8018D738[inline_fn(cur)].next;
      }
      while (D_8018D738[inline_fn(cur)].next != 0xFFFF);
    }
    ret = 0xFFFF;
  }
  else
  {
    if (D_8018D738)
    {
      a1 = D_8018F5C2;
      D_8018F5C2 = D_8018D738[inline_fn(a1)].next;
    }
    else
    {
      a1 = D_8018F5C2;
      D_8018F5C2 = D_8018D738[inline_fn(a1)].next;
    }
    do
    {
      D_8018D738[inline_fn(a1)].next = 0xFFFF;
    }
    while (0);
    if ((*((u16 *) (&D_8018F5C2))) != 0xFFFF)
    {
      D_8018D738[inline_fn2((u16 *) (&D_8018F5C2))].prev = 0xFFFF;
    }
    D_80187BE0 -= 1;
    if ((*((u16 *) (&D_80187BE0))) == 0)
    {
      D_80189DC2 = 0xFFFF;
    }
    ret = a1;
  }
  return ret;
}

