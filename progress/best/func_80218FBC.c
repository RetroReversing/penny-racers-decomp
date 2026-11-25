extern s32 func_800DE41C(s32, s32, s32, s32, s32, s32, void *, void *, s32, s32, s32, s32, s32, s32, s32, s32, s32);
extern void func_8021A994(void);
extern void func_8021AC64(s32, s32, s32, s32, s32);
extern void func_80203DF8(s32, s32, s32, s32);
extern void func_8013DD2C(void);
extern void func_80219488(void);
extern s8 D_80046832;
extern s8 D_80190CAA;
extern s8 D_8021EEB2;
extern u16 D_8018D140[];
extern unsigned int D_8018D3A0[];
extern u8 D_8021CA28[];
extern s32 D_801D5A90;
void func_80218FBC(void)
{
  s32 i;
  s32 j;
  char __repair_phase_j;
  u32 bits;
  s32 idx = 0;
  for (i = 0; i < 0x96; i++)
  {
    D_8018D140[(char) ((unsigned short) i)] = 0;
  }

  for (i = 0; i < 8; i++)
  {
    if (i || j)
    {
      j = (unsigned short) i;
      __repair_phase_j = j;
      bits = D_8018D3A0[__repair_phase_j];
    }
    else
    {
      j = (unsigned short) i;
      __repair_phase_j = j;
      bits = D_8018D3A0[__repair_phase_j];
    }
    do
    {
      for (j = 0; j < D_8021CA28[(unsigned short) i]; j++)
      {
        do
        {
          if (bits & 1)
          {
            D_8018D140[(unsigned short) idx] = 1;
          }
          bits >>= 1;
          idx++;
        }
        while (0);
      }

    }
    while (0);
    if (i == 0)
    {
      idx += 2;
    }
  }

  D_8021EEB2 = 1;
  D_80046832 = 0;
  D_80190CAA = 0;
  do
  {
    func_800DE41C(0, 0xFF, 3, 0, 0x7F, 0, 0, &D_801D5A90, 0, 0, 0, 0, 0, 0, 0, 0, 0);
  }
  while (0);
  do
  {
    func_8021A994();
  }
  while (0);
  func_8021AC64(0x87, 0x52, 0, 0x80, 0x83);
  func_800DE41C(0, 0, 3, 0, 0xA1, 0xFF, 0, 0, func_8013DD2C, 0, 0, 0, 0, 0, 0, 0, 0);
  func_800DE41C(0, 0, 3, 0, 0x7A, 0, 0, func_80219488, 0, 0, 0, 0, 0, 0, 0, 0, 0);
  func_80203DF8(1, 0x3C, 0, 0);
}

