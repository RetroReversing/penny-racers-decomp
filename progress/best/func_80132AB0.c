inline static unsigned int __repair_inline(volatile unsigned int a)
{
  return a;
}

extern u8 D_80126FF6;
extern u8 D_8011F2F0[];
extern u8 D_8011F330[];
inline static int inline_fn(unsigned short arg0)
{
  return arg0 * 0x64;
}

inline static u16 *inline_fn2(int arg0)
{
  return (u16 *) (D_8011F330 - (-inline_fn((unsigned short) arg0)));
}

inline static int inline_fn23(unsigned char arg0)
{
  return arg0 * 0x64;
}

inline static volatile int inline_fn234(volatile int arg0)
{
  return arg0;
}

inline static int inline_fn2345(volatile s32 arg0)
{
  return inline_fn((float) arg0);
}

inline static float inline_fn23456(float arg0)
{
  return arg0 * 0;
}

inline static u8 *inline_fn234567(volatile s32 arg0)
{
  return D_8011F330 + inline_fn2345(arg0);
}

inline static int inline_fn2345678(volatile s32 arg0)
{
  return inline_fn2345(arg0);
}

inline static u8 inline_fn23456789(u8 *arg0)
{
  return *arg0;
}

inline static int inline_fn2345678910(volatile unsigned int arg0)
{
  return arg0 || D_8011F330;
}

void func_80132AB0(void **arg0, volatile unsigned int arg1)
{
  u8 *__base_D_80126FF6;
  unsigned long long repair_scratch;
  volatile unsigned int pad;
  arg1 = arg1 & 0xFFFF;
  repair_scratch = (int) D_8011F330;
  __base_D_80126FF6 = &D_80126FF6;
  if (((unsigned long) inline_fn23456789(&D_80126FF6)) == ((long) inline_fn23456((float) 0x8011F330)))
  {
    return;
  }
  do
  {
    repair_scratch = __repair_inline(inline_fn23456789((u16 *) (D_8011F330 + inline_fn23(arg1))));
  }
  while (0);
  if (repair_scratch == 0)
  {
    if (D_8011F330)
    {
      if (repair_scratch || inline_fn23456789(__base_D_80126FF6))
      {
        if (arg1)
        {
          if (inline_fn2345678910(arg1))
          {
            *((u16 *) (D_8011F330 + inline_fn2345678(arg1))) = 1;
          }
          else
          {
            *((u16 *) (D_8011F330 + inline_fn2345678(arg1))) = 1;
          }
        }
        else
        {
          *((u16 *) inline_fn234567(arg1)) = 1;
        }
      }
      else
      {
        *((u16 *) (D_8011F330 + inline_fn(arg1))) = 1;
      }
    }
    else
    {
      *inline_fn2(inline_fn234(arg1)) = 1;
    }
  }
}

