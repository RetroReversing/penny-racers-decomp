s32 osVirtualToPhysical();
extern void *D_800481F0;
extern void *D_800481F4;
extern f64 D_8004A990;
extern s32 D_A4400000;
inline static const s32 inline_fn(void *arg0, int arg1)
{
  return *((const s32 *) (((char *) arg0) + arg1));
}

void __osViSwapContext(void)
{
  s32 __repair_store_0;
  s32 __repair_store_1;
  s32 __repair_store_2;
  s32 __repair_store_3;
  f32 temp_fv1;
  f64 var_ft0;
  s32 temp_s2;
  s32 temp_s3;
  s32 temp_v0;
  s32 var_a0;
  s32 var_a1;
  s32 var_v0;
  s32 var_v0_2;
  u16 temp_v1;
  void *temp_s0;
  void *temp_s1;
  void *temp_t0;
  void *temp_v0_2;
  void *temp_v0_3;
  void *var_a2;
  void *var_a3;
  temp_s0 = D_800481F4;
  temp_s1 = *((void **) (((char *) temp_s0) + 8));
  temp_s2 = (*((volatile u32 *) 0xA4400010)) & 1;
  var_a1 = osVirtualToPhysical(inline_fn(temp_s0, 4)) + (*((s32 *) (((char *) (temp_s1 + (temp_s2 * 0x14))) + 0x28)));
  if ((*((const u16 *) (((char *) temp_s0) + 0))) & 2)
  {
    *((s32 *) (((char *) temp_s0) + 0x20)) |= inline_fn(temp_s1, 0x20) & (~0xFFF);
  }
  else
  {
    *((s32 *) (((char *) temp_s0) + 0x20)) = (s32) inline_fn(temp_s1, 0x20);
  }
  if ((*((const u16 *) (((char *) temp_s0) + 0))) & 4)
  {
    temp_v0 = (*((s32 *) (((char *) (temp_s1 + (temp_s2 * 0x14))) + 0x2C))) & 0xFFF;
    var_ft0 = (f64) temp_v0;
    if (temp_v0 < 0)
    {
      var_ft0 += D_8004A990;
    }
    temp_fv1 = (*((const f32 *) (((char *) temp_s0) + 0x24))) * ((f32) var_ft0);
    if (temp_fv1 < 2.1474836e9f)
    {
      var_a0 = (s32) temp_fv1;
      var_v0 = temp_s2 * 4;
    }
    else
    {
      var_a0 = ((s32) (temp_fv1 - 2.1474836e9f)) | 0x80000000;
      var_v0 = temp_s2 * 4;
    }
    *((s32 *) (((char *) temp_s0) + 0x2C)) = var_a0;
    var_v0_2 = var_a0 | ((*((s32 *) (((char *) (temp_s1 + ((var_v0 + temp_s2) * 4))) + 0x2C))) & (~0xFFF));
  }
  else
  {
    var_v0_2 = *((s32 *) (((char *) (temp_s1 + (temp_s2 * 0x14))) + 0x2C));
  }
  *((s32 *) (((char *) temp_s0) + 0x2C)) = var_v0_2;
  temp_v1 = *((const u16 *) (((char *) temp_s0) + 0));
  temp_s3 = inline_fn(temp_s1, 0x1C) & (-((temp_v1 & 0x20) == 0));
  if (temp_v1 & 0x40)
  {
    *((s32 *) (((char *) temp_s0) + 0x2C)) = 0;
    var_a1 = osVirtualToPhysical(inline_fn(temp_s0, 4), var_a1);
  }
  if ((*((const u16 *) (((char *) temp_s0) + 0))) & 0x80)
  {
    *((s32 *) (((char *) temp_s0) + 0x2C)) = (s32) (((*((const u16 *) (((char *) temp_s0) + 0x28))) << 0x10) & 0x03FF0000);
    var_a1 = osVirtualToPhysical(inline_fn(temp_s0, 4), var_a1);
  }
  *((volatile u32 *) 0xA4400004) = var_a1;
  *((volatile u32 *) 0xA4400008) = inline_fn(temp_s1, 8);
  *((volatile u32 *) 0xA4400014) = inline_fn(temp_s1, 0xC);
  *((volatile u32 *) 0xA4400018) = inline_fn(temp_s1, 0x10);
  *((volatile u32 *) 0xA440001C) = inline_fn(temp_s1, 0x14);
  *((volatile u32 *) 0xA4400020) = inline_fn(temp_s1, 0x18);
  *((volatile u32 *) 0xA4400024) = temp_s3;
  temp_v0_2 = temp_s1 + (temp_s2 * 0x14);
  *((volatile u32 *) 0xA4400028) = inline_fn(temp_v0_2, 0x30);
  *((volatile u32 *) 0xA440002C) = inline_fn(temp_v0_2, 0x34);
  *((volatile u32 *) 0xA440000C) = inline_fn(temp_v0_2, 0x38);
  *((volatile u32 *) 0xA4400030) = inline_fn(temp_s0, 0x20);
  *((volatile u32 *) 0xA4400034) = inline_fn(temp_s0, 0x2C);
  temp_v0_3 = D_800481F0;
  var_a2 = temp_s0;
  temp_t0 = var_a2 + 0x30;
  D_800481F0 = var_a2;
  var_a3 = temp_v0_3;
  *((volatile s32 *) 0xA4400000) = inline_fn(temp_s0, 0xC);
  D_800481F4 = var_a3;
  do
  {
    __repair_store_0 = (s32) inline_fn(var_a2, 0);
    __repair_store_1 = (s32) inline_fn(var_a2, 4);
    __repair_store_2 = (s32) inline_fn(var_a2, 8);
    __repair_store_3 = (s32) inline_fn(var_a2, 0xC);
    *((s32 *) (((char *) var_a3) + 0)) = __repair_store_0;
    *((s32 *) (((char *) var_a3) + 4)) = __repair_store_1;
    *((s32 *) (((char *) var_a3) + 8)) = __repair_store_2;
    *((s32 *) (((char *) var_a3) + 0xC)) = __repair_store_3;
    var_a2 += 0x10;
    var_a3 += 0x10;
  }
  while (var_a2 != temp_t0);
}

