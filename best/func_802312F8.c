extern u16 D_8006FAF0[];
extern s16 D_80232F30[];
void func_802312F8(void)
{
  volatile unsigned char s1;
  switch ((*((u16 *) (((u8 *) D_8006FAF0) + 0x20))) - 1)
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
      s1 = 0xB4;
      break;

  }

  (void) s1;
}

