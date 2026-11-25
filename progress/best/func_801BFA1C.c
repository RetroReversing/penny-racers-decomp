inline static int __repair_inline(unsigned char a, unsigned int b)
{
  return a < b;
}

extern unsigned short func_800DE41C();
extern unsigned int D_8011F2F4;
extern unsigned char D_801C5E9D;
extern volatile unsigned long long D_801C6BAC;
extern unsigned char D_801C7469;
extern unsigned char D_801C7AB6;
extern unsigned int D_80315A10;
unsigned long func_801BFA1C(s32 arg0, volatile unsigned long long arg1)
{
  u16 sp48[4];
  u16 sp4E;
  unsigned long long i;
  for (i = 0; __repair_inline(i, 4); i++)
  {
    sp48[(unsigned char) i] = 0xFFFF;
  }

  if (i || arg1)
  {
    D_801C6BAC = 1;
    (void) arg1;
  }
  else
  {
    do
    {
      D_801C6BAC = 1;
      (void) arg1;
    }
    while ((float) (arg1 * (arg1 * (arg1 * 0))));
  }
}

