extern u16 D_8006FAF0[];
extern s16 D_80232F30[];
inline static u16 inline_fn()
{
  return *((u16 *) (((u8 *) D_8006FAF0) + 0x20));
}

inline static volatile unsigned char inline_fn2(volatile unsigned char arg0)
{
  return arg0;
}

void func_802312F8(void)
{
  volatile unsigned short s1;
  {
    long long phantom_wide = s1;
  }
  switch (inline_fn() - 1)
  {
    case 0:
      s1 = 0x6E;
      break;

    case 1:
      s1 = 0xB3;
      break;

    case 2:
      s1 = 0xA9;
      break;

    case 3:
      s1 = 0x45;
      break;

    case 4:
      s1 = 0x69;
      break;

    case 5:
      s1 = 0xE1;
      break;

    case 6:
      s1 = 0x4C;
      break;

    case 7:
      s1 = 0x6B;
      break;

    default:
      if (D_8006FAF0)
    {
      {
        long long phantom_wide2 = (char) ((unsigned short) inline_fn2((unsigned int) ((float) s1)));
      }
      s1 = 0xB4;
      break;
    }
    else
    {
      s1 = 0xB4;
      break;
    }

  }

  if (s1 || D_8006FAF0)
  {
    (void) s1;
  }
  else
  {
    (void) s1;
  }
}

