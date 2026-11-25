s32 func_8003DE60();
void func_80149FA8(u16, void *);
s32 func_801FA38C(s32);
extern u8 D_8006FAF0[];
extern u8 D_800DA260[];
extern u8 D_800DA264[];
extern s32 D_801E99C4;
extern s16 D_8021E1A6;
extern u8 *D_802D6288[];
extern u8 D_80232D34[];
extern u8 D_80232D44[];
extern u8 D_80232D58[];
extern u8 D_80232D6C[];
extern u8 D_80232D80[];
extern u8 D_80232D94[];
extern u8 D_80232DA8[];
extern u8 D_80232DBC[];
extern u8 D_80232DD0[];
extern u8 D_80232DE4[];
extern u8 D_80232DF8[];
extern u8 D_80232E0C[];
extern u8 D_80232E20[];
void func_80230BC4(s32 arg0, s16 arg1)
{
  u8 *rec;
  u8 *src;
  u16 pidx;
  u16 idx0;
  idx0 = arg0 & 0xFFFF;
  src = D_802D6288[*((u16 *) (D_8006FAF0 + 0x20))];
  rec = D_800DA260 + (idx0 * 0x178);
  pidx = arg1 & 0xFFFF;
  if (D_8021E1A6 >= 3)
  {
    do
    {
      if (D_8006FAF0)
      {
        src = src + ((0x24 * pidx) + 0x3F0);
        *((u16 *) (rec + 6)) = 0xE;
      }
      else
      {
        src = src + ((0x24 * pidx) + 0x3F0);
        *((u16 *) (rec + 6)) = 0xE;
      }
      if ((*((u16 *) (D_8006FAF0 + 0x20))) != 6)
      {
        *((u16 *) (D_800DA264 + 0x8D0)) = 0xB;
      }
      else
      {
        *((u16 *) (rec + 4)) = 0xC;
      }
      *((f32 *) ((D_800DA260 + (idx0 * 0x178)) + 0x1C)) = 1.0f;
    }
    while (0);
    *((u16 *) ((D_800DA260 + (idx0 * 0x178)) + 8)) = 5;
    *((s16 *) (rec + 0)) = arg1;
  }
  else
  {
    src = src + (0x24 * (pidx + (D_8021E1A6 * 0xE)));
    *((u16 *) (rec + 6)) = *((u16 *) (src + 4));
    do
    {
      *((u16 *) (rec + 4)) = *((u16 *) (src + 2));
      *((f32 *) (rec + 0x1C)) = *((f32 *) (src + 0x18));
      *((u16 *) (rec + 8)) = *((u16 *) (src + 6));
    }
    while (0);
    *((s16 *) (rec + 0)) = arg1;
  }
  *((u16 *) (rec + 2)) = *((u16 *) (src + 0));
  *((u16 *) (rec + 0xA)) = *((u16 *) (src + 8));
  *((u16 *) (rec + 0xC)) = *((u16 *) (src + 0xA));
  *((u16 *) (rec + 0xE)) = *((u16 *) (src + 0xC));
  *((f32 *) (rec + 0x14)) = *((f32 *) (src + 0x10));
  *((f32 *) (rec + 0x18)) = *((f32 *) (src + 0x14));
  *((f32 *) (rec + 0x20)) = *((f32 *) (src + 0x1C));
  rec[0x24] = src[0x20];
  rec[0x16A + pidx] = (u8) (((u32) func_801FA38C(0)) % 10);
  do
  {
    func_80149FA8(idx0, rec + pidx);
  }
  while (0);
  if (D_801E99C4 != 0)
  {
    func_8003DE60(D_80232D34, idx0, pidx);
    do
    {
      func_8003DE60(D_80232D44, *((u16 *) (rec + 2)));
    }
    while (0);
    func_8003DE60(D_80232D58, *((u16 *) (rec + 4)));
    do
    {
      do
      {
        func_8003DE60(D_80232D6C, *((u16 *) (rec + 6)));
      }
      while (0);
      func_8003DE60(D_80232D80, *((u16 *) (rec + 8)));
      do
      {
        func_8003DE60(D_80232D94, *((u16 *) (rec + 0xA)));
      }
      while (0);
      func_8003DE60(D_80232DA8, *((u16 *) (rec + 0xC)));
    }
    while (0);
    func_8003DE60(D_80232DBC, *((u16 *) (rec + 0xE)));
    func_8003DE60(D_80232DD0, (double) (*((f32 *) (rec + 0x14))));
    func_8003DE60(D_80232DE4, (double) (*((f32 *) (rec + 0x18))));
    func_8003DE60(D_80232DF8, (double) (*((f32 *) (rec + 0x1C))));
    do
    {
      func_8003DE60(D_80232E0C, (double) (*((f32 *) (rec + 0x20))));
    }
    while (0);
    func_8003DE60(D_80232E20, rec[0x24]);
  }
}

