extern u8 D_8018D3A0[];
extern u8 D_8018D3A4[];
extern u8 D_8018D3B0[];
extern u8 D_8018D3B4[];
extern u8 D_8018D3B8[];
extern u8 D_8018D3BC[];

s32 func_8014BB30(s32 arg0)
{
  s32 var_a1 = 0;

  if (*(volatile s32 *) (D_8018D3A0 + ((arg0 & 0xFF) << 5)) & 0x2000)
  {
    var_a1 = 0x800;
  }
  if (*(volatile s32 *) (D_8018D3A4 + ((arg0 & 0xFF) << 5)) & 0x200000)
  {
    var_a1 |= 0x1;
  }
  if (*(volatile s32 *) (D_8018D3A4 + ((arg0 & 0xFF) << 5)) & 0x400000)
  {
    var_a1 |= 0x2;
  }
  if (*(volatile s32 *) (D_8018D3A4 + ((arg0 & 0xFF) << 5)) & 0x800000)
  {
    var_a1 |= 0x4;
  }
  if (*(volatile s32 *) (D_8018D3A4 + ((arg0 & 0xFF) << 5)) & 0x1000000)
  {
    var_a1 |= 0x8;
  }
  if (*(volatile s32 *) (D_8018D3B0 + ((arg0 & 0xFF) << 5)) & 0x200)
  {
    var_a1 |= 0x10;
  }
  if (*(volatile s32 *) (D_8018D3B4 + ((arg0 & 0xFF) << 5)) & 0x40)
  {
    var_a1 |= 0x20;
  }
  if (*(volatile s32 *) (D_8018D3B4 + ((arg0 & 0xFF) << 5)) & 0x80)
  {
    var_a1 |= 0x40;
  }
  if (*(volatile s32 *) (D_8018D3B8 + ((arg0 & 0xFF) << 5)) & 0x40000)
  {
    var_a1 |= 0x80;
  }
  if (*(volatile s32 *) (D_8018D3B8 + ((arg0 & 0xFF) << 5)) & 0x80000)
  {
    var_a1 |= 0x100;
  }
  if (*(volatile s32 *) (D_8018D3B8 + ((arg0 & 0xFF) << 5)) & 0x100000)
  {
    var_a1 |= 0x200;
  }
  if (*(volatile s32 *) (D_8018D3BC + ((arg0 & 0xFF) << 5)) & 0x4000)
  {
    var_a1 |= 0x400;
  }
  return var_a1 & 0xFFFF;
}
