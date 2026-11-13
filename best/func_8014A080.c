inline static int inline_fn(s32 arg0, int arg1, s32 arg2)
{
  return (arg0 * arg1) | (arg2 != 0);
}

s32 func_8014A080(s32 arg0, s32 arg1, s32 arg2, s32 arg3)
{
  int __repair_literal;
int __repair_phase___repair_literal;

  s32 temp_a1;
  s32 temp_t0;
  s32 temp_t1;
  s32 __repair_phase_temp_t1;
  s32 temp_t2;
  s32 temp_v0_2;
s32 __repair_phase_temp_v0_2;
  s32 var_a0;
  
  s32 var_v0;
  
  var_a0 = arg0;
  __repair_literal = arg1 & 0x1F;
  temp_t2 = 1 << __repair_literal;
  temp_t0 = (-2) << __repair_literal;
  __repair_phase_temp_t1 = var_a0 & temp_t0;
  if ((arg3 & 0xFF) == 1)
  {
    temp_t1 = arg2 & 0xFF;
    temp_v0_2 = 0;
    __repair_phase___repair_literal = 0;
    if (temp_t1 > __repair_phase___repair_literal)
    {
      var_v0 = var_a0 & temp_t2;
      do {
      {
        var_a0 = (inline_fn(var_a0, 2, var_v0) & (~temp_t0)) | __repair_phase_temp_t1;
        temp_v0_2 += 1;
        var_v0 = var_a0 & temp_t2;
      }

      } while (temp_v0_2 < temp_t1);
      return var_a0;
    }
    goto block_8;
  }
  __repair_phase_temp_v0_2 = arg2 & 0xFF;
  temp_t1 = 0;
  if (__repair_phase_temp_v0_2 > 0)
  {
    temp_v0_2 = var_a0 & 1;
    do
    {
      var_a0 = ((((u32) (var_a0 & (~temp_t0))) >> 1) | ((-temp_v0_2) & temp_t2)) | __repair_phase_temp_t1;
      temp_t1 += 1;
      temp_v0_2 = var_a0 & 1;
    }
    while (temp_t1 < __repair_phase_temp_v0_2);
  }
  block_8:
  return var_a0;

}

