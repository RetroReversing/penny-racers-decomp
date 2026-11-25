inline static int __repair_inline(s32 a, unsigned short b)
{
  return a < b;
}

void func_8013AE60(void);
void func_801D7028(s32, s32);
void func_8013F1D4(s32, s32, void *);
void func_8013F44C(s32, void *);
extern u8 D_8011F2F0[];
extern u8 D_801834C8[];
volatile unsigned int func_80140E0C(unsigned short arg0)
{
  char *__repair_addr;
  s32 idx;
  u8 *s3;
  u8 *s1;
  do
  {
    idx = arg0 & 0xFFFF; s1 = D_8011F2F0 + (idx * 100); s3 = *((u8 **) (s1 + 0x60));
    func_8013AE60();
  }
  while (0);
  switch (*((u16 *) (s1 + 0x3E)))
  {
    case 0:
      if ((--(*((u16 *) (s1 + 0x40)))) == 0)
    {
      *((u16 *) (s1 + 0x40)) = 10;
      *((u16 *) (s1 + 0x3E)) = 1;
      do
      {
        func_801D7028(arg0 & 0xFFFF, 0x23);
      }
      while (0);
    }
      break;
      __repair_addr = (char *) (s1 + 0x1C);

    case 1:
    {
      long long phantom_wide = arg0;
    }
      *((float *) __repair_addr) = (*((float *) (s1 + 0x1C))) + 4.0f;
      if ((--(*((u16 *) (s1 + 0x40)))) == 0)
    {
      if (arg0 || s1)
      {
        *((u16 *) (s1 + 0x40)) = 100;
        *((u16 *) (s1 + 0x3E)) = 2;
      }
      else
        if (arg0)
      {
        *((u16 *) (s1 + 0x40)) = 100;
        *((u16 *) (s1 + 0x3E)) = 2;
      }
      else
      {
        *((u16 *) (s1 + 0x40)) = 100;
        *((u16 *) (s1 + 0x3E)) = 2;
      }
    }
      func_8013F1D4(arg0, idx, *((u8 **) (s1 + 0x60)));
    {
      unsigned long long i;
      for (i = 0; __repair_inline(0, 7); i++)
      {
        s3[0x67 + i] = 0;
      }

    }
      break;

    case 2:
      if ((--(*((u16 *) (s1 + 0x40)))) == 0)
    {
      *((u16 *) (s1 + 0x40)) = 10;
      *((u16 *) (s1 + 0x3E)) = 3;
      do
      {
        func_801D7028(idx, 0x23);
      }
      while (0);
    }
      func_8013F44C(arg0 & 0xFFFF, *((u8 **) (s1 + 0x60)));
      break;

    case 3:
      if (arg0)
    {
      if (s1 || arg0)
      {
        *((float *) (s1 + 0x1C)) = (*((float *) (s1 + 0x1C))) + (-4.0f);
      }
      else
      {
        *((float *) (s1 + 0x1C)) = (*((float *) (s1 + 0x1C))) + (-4.0f);
      }
    }
    else
    {
      *((float *) (s1 + 0x1C)) = (*((float *) (s1 + 0x1C))) + (-4.0f);
    }
      if ((--(*((u16 *) (s1 + 0x40)))) == 0)
    {
      *((u16 *) (s1 + 0x3E)) = 4;
      *((u16 *) (s1 + 0x40)) = 10;
    }
      func_8013F44C(arg0 & 0xFFFF, s3);
      break;

    case 4:
      break;

  }

}

