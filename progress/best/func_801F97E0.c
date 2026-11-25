s32 func_800E1098(void *, u8, s32, u8, s32);
extern u8 D_80046837;
extern s16 D_800DD2C0[];
extern u32 * volatile D_800DE0E4;
extern u8 D_801F9958[];
extern u8 func_801F9950[];
inline static s16 inline_fn(short arg0, int arg1)
{
  return D_800DD2C0[arg0 * arg1];
}


void func_801F97E0(volatile unsigned int arg0)
{
  int __repair_constant_index;
  register s32 i;
  s32 sp18[4];
  s32 n;
  s32 j;
  register u32 *dl;
  n = 0;
  do
  {
    i = 0;
  }
  while (0);
  do
  {
    if (inline_fn(i, 20) != 0)
    {
      sp18[(unsigned char) n] = (unsigned short) i;
      n += 1;
    }
    i += 1;
  }
  while (4 > i);
  if (((int) ((j = 0) < (n))))
  {
    do
    {
      if (n)
      {
        dl = D_800DE0E4;
        D_800DE0E4 = dl + 2;
      }
      else
      {
        dl = D_800DE0E4;
        D_800DE0E4 = dl + 2;
      }
      {
        ;
        do
        {
          volatile unsigned int pad;
          dl[0] = 0xBC000002;
        }
        while (0, 0);
      }
      do
      {
        dl[1] = 0x80000040; D_800DE0E4 = dl + 4; dl[2] = (short) 0x03860010; D_800DE0E4 = dl - (-6); dl[3] = (u32) D_801F9958; dl[4] = 0x03880010;
      }
      while (0);
      dl[5] = (u32) func_801F9950;
      func_800E1098((void *) (&D_800DE0E4), D_80046837, arg0, (u8) sp18[j], j & 0xFF);
      j += 1;
    }
    while (((int) ((j) < (n))));
  }
}

