extern unsigned char D_8011F2F2[];
extern unsigned char D_8011F32E[];
extern void *D_8021DBD0[];
inline static int inline_fn(volatile long long arg0)
{
  return arg0 & 0xFFFF;
}

inline static int inline_fn2(s16 arg0, int arg1)
{
  return arg0 & arg1;
}

volatile unsigned int func_80208444(s16 arg0_in)
{
  s16 arg0;
  volatile unsigned short pad;
  int i;
  arg0 = arg0_in;
  for (i = 0; ((i + 1) - 1) < ((4 + 1) - 1); i++)
  {
    {
    }
    do
    {
      unsigned char *p = D_8011F2F2 - (-(((arg0 & 0xFFFF) & 0xFFFF) * 100));
      *((unsigned short *) (p + inline_fn2((unsigned char) (i * 2), 0xFFFFu))) |= 0x10;
    }
    while (0);
  }

  switch (*((unsigned short *) (D_8011F32E + (inline_fn2(inline_fn2(arg0_in, 0xFFFF), 0xFFFF) * 100))))
  {
    long long phantom_wide2 = inline_fn2(arg0, 0xFFFF);
    case 0:
    {
      long long phantom_wide = (double) inline_fn(arg0 & 0xFFFF);
    }
      break;

    case 1:
      break;

    case 2:
      break;

    case 3:
      break;

    case 4:
      break;

    default:
      break;

  }

}

