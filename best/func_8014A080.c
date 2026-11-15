inline static int inline_fn(s32 arg0)
{
  return arg0 != 0;
}

s32 func_8014A080(s32 arg0, s32 arg1, s32 arg2, s32 arg3)
{
  s32 n;
    s32 __repair_n_1;
  s32 i;
  s32 __repair_phase_i;
  s32 t0;
  s32 t1;
  s32 t2;
  s32 bit;
  s32 v;
  v = arg0;
  n = arg1 & 0x1F;
  t2 = 1 << n;do{
  t0 = (-2) << n;}while(0);
  t1 = v & t0;
  __repair_n_1 = arg2 & 0xFF;
  if ((arg3 & 0xFF) == 1)
  {
    if (__repair_n_1 > 0)
    {
      bit = v & t2;
      i = 0;
      do
      {
        v = (((v << 1) | inline_fn(bit)) & (~t0)) | t1;
        i++;
        bit = v & t2;
      }
      while (i < __repair_n_1);
    }
    return v;
  }
  if (__repair_n_1 > 0)
  {
    bit = v & 1;
    __repair_phase_i = 0;
    __repair_rows: {
      v = ((((u32) (v & (~t0))) >> 1) | ((-bit) & t2)) | t1;
      __repair_phase_i++;
      bit = v & 1;
    }
if (__repair_phase_i < __repair_n_1) goto __repair_rows;
  }
  return v;
}

