inline static int __repair_inline(s32 a, s32 b)
{
  return a < b;
}

extern u8 D_80189B36;
extern u16 D_8018D140[];
extern u16 D_8018D26C[];
extern u8 D_8018D3A0[];
s32 func_80148260(u8 arg0, unsigned short arg1)
{
  s32 n;
  s32 i;
  s32 j;
  u32 mask;
  for (i = 0; i < 0x96; i++)
  {
    D_8018D140[(((arg1 & 0xFF) * 0x12C) / 2) + i] = 0xFFFF;
  }

  n = 0;
  for (j = 0; j < 8; j++)
  {
    mask = *((u32 *) ((((u8 *) D_8018D3A0) + ((arg0 & 0xFF) << 5)) + (j * 4)));
    for (i = 0; i < 0x20; i++)
    {
      if (mask & 1)
      {
        D_8018D140[(((arg1 & 0xFF) * 0x12C) / 2) + n] = (j << 8) | i;
        n++;
      }
      mask >>= 1;
    }

  }

  do
  {
    D_8018D140[(((arg1 & 0xFF) * 0x12C) / 2) + n] = 0x3FFF;
    n++;
  }
  while (0);
  if ((arg1 & 0xFF) == 1)
  {
    if ((D_80189B36 & 0x20) != 0)
    {
      D_8018D140[(((arg1 & 0xFF) * 0x12C) / 2) + n] = 0x4FFF;
      n++;
    }
    for (i = 0; __repair_inline(i, 8); i++)
    {
 do { D_8018D26C[n + i] = D_8018D26C[(char) ((unsigned short) i)]; } while (0);
    }

  }
  else
  {
    D_8018D140[n] = 0x2FFF;
    n++;
    for (i = 0; i < 8; i++)
    {
      do
      {
        D_8018D140[n + i] = D_8018D140[(unsigned short) i];
      }
      while (0);
    }

  }
  return n;
}
