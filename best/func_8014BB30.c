extern s32 D_8018D3A0;
extern s32 D_8018D3A4;
extern s32 D_8018D3B0;
extern s32 D_8018D3B4;
extern s32 D_8018D3B8;
extern s32 D_8018D3BC;
inline static int inline_fn(s32 *arg0, int arg1)
{
  return (*arg0) & arg1;
}

s32 func_8014BB30(s32 arg0)
{
  s32 var_a1;
  var_a1 = 0;
  if (inline_fn((s32 *) (((u8 *) (&D_8018D3A0)) + ((arg0 & 0xFF) << 5)), 0x2000))
  {
    var_a1 = 0x800;
  }
  if (inline_fn((s32 *) (((u8 *) (&D_8018D3A4)) + ((arg0 & 0xFF) << 5)), 0x200000))
  {
    var_a1 |= 1;
  }
  if (inline_fn((s32 *) (((u8 *) (&D_8018D3A4)) + ((arg0 & 0xFF) << 5)), 0x400000))
  {
    var_a1 |= 2;
  }
  if ((*((s32 *) (((u8 *) (&D_8018D3A4)) + ((arg0 & 0xFF) << 5)))) & 0x800000)
  {
    var_a1 |= 4;
  }
  if ((*((s32 *) (((u8 *) (&D_8018D3A4)) + ((arg0 & 0xFF) << 5)))) & 0x1000000)
  {
    var_a1 |= 8;
  }
  if (inline_fn((s32 *) (((u8 *) (&D_8018D3B0)) + ((arg0 & 0xFF) << 5)), 0x200))
  {
    var_a1 |= 0x10;
  }
  if ((*((s32 *) (((u8 *) (&D_8018D3B4)) + ((arg0 & 0xFF) << 5)))) & 0x40)
  {
    var_a1 |= 0x20;
  }
  if (inline_fn((s32 *) (((u8 *) (&D_8018D3B4)) + ((arg0 & 0xFF) << 5)), 0x80))
  {
    var_a1 |= 0x40;
  }
  if (inline_fn((s32 *) (((u8 *) (&D_8018D3B8)) + ((arg0 & 0xFF) << 5)), 0x40000))
  {
    var_a1 |= 0x80;
  }
  if (inline_fn((s32 *) (((u8 *) (&D_8018D3B8)) + ((arg0 & 0xFF) << 5)), 0x80000))
  {
    var_a1 |= 0x100;
  }
  if (inline_fn((s32 *) (((u8 *) (&D_8018D3B8)) + ((arg0 & 0xFF) << 5)), 0x100000))
  {
    var_a1 |= 0x200;
  }
  if (inline_fn((s32 *) (((u8 *) (&D_8018D3BC)) + ((arg0 & 0xFF) << 5)), 0x4000))
  {
    var_a1 |= 0x400;
  }
  return var_a1 & 0xFFFF;
}

