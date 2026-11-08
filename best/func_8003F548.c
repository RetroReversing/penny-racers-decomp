inline static int inline_fn(int arg0)
{
  return -arg0;
}

s32 func_8003F548(u8 *arg0)
{
  s32 temp_a2;
  s32 var_a1;
  s32 var_t0;
  s32 var_v1;
  s32 var_v1_2;
  u8 *var_a0;
  var_a0 = arg0;
  var_v1 = 0;
  var_t0 = 0;
  do
  {
    var_a1 = 7;
    loop_2:
    temp_a2 = var_v1 * 2;

    var_v1_2 = temp_a2;
    if (var_t0 != 0x20)
    {
      var_v1_2 = temp_a2 | ((((s32) (*var_a0)) >> var_a1) & 1);
    }
    var_a1 -= 1;
    var_v1 = var_v1_2 ^ (inline_fn((var_v1 & 0x80) != 0) & (~0x7A));
    if (var_a1 >= 0)
    {
      goto loop_2;
    }
    var_t0 += 1;
    var_a0 += 1;
  }
  while (var_t0 < 0x21);
  return var_v1 & 0xFF;
}

