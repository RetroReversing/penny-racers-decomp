s32 func_80146E4C(u16);
extern char D_800DA26A[];
extern u16 D_80187BF0[];
extern u16 D_80187C00;
extern u16 *D_80203080[];
void func_8014A9F4(s32 arg0, s32 arg1)
{
  s32 i;
  u16 *src;
  do
  {
    if (!(arg0 & 0x700))
    {
      src = (u16 *) (((D_800DA26A + 0x64) + (arg1 * 0x178)) + ((arg0 & 0xFF) * 0x12));
      for (i = 0; i < 8; i++)
      {
        do
        {
          D_80187BF0[(unsigned short) i] = src[i];
        }
        while (0);
      }

    }
    else
    {
      src = D_80203080[func_80146E4C(arg0 & 0xFFFF) & 0xFFFF];
      do
      {
        for (i = 0; i < 8; i++)
        {
          D_80187BF0[(unsigned short) ((unsigned char) i)] = src[(unsigned char) i];
          if (src[i] == 0xFFFF)
          {
            break;
          }
        }

      }
      while (0);
    }
    D_80187C00 = 0xFFFF;
  }
  while (0);
}

