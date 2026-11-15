extern u16 D_801FB230[];
s32 func_801F9D8C(s32 arg0, s32 arg1)
{
  f32 var_fv0;
  f32 var_fv0_2;
  f32 var_fv1;
  f32 var_fv1_2;
  s32 temp_a3;
  s32 temp_v1_2;
  s32 var_a2;
  s32 var_a2_2;
  s32 var_v0;
  s32 var_v0_2;
  s32 var_v0_3;
  u16 var_v1;
  var_fv1 = (f32) arg0;
  if (var_fv1 > 0.0f)
  {
    if (var_fv1 >= 2.1474836e9f)
    {
      var_fv0 = var_fv1 - 2.1474836e9f;
      goto block_7;
    }
    goto block_6;
  }
  var_fv1 = -((f32) ((double) arg0));
  if (var_fv1 < 2.1474836e9f)
  {
    block_6:
    var_a2 = (s32) var_fv1;

  }
  else
  {
    var_fv0 = var_fv1 - 2.1474836e9f;
    block_7:
    var_a2 = ((s32) var_fv0) | 0x80000000;

  }
  var_fv1_2 = (f32) arg1;
  temp_a3 = var_a2 & 0xFFFF;
  if (var_fv1_2 > 0.0f)
  {
    if (var_fv1_2 >= 2.1474836e9f)
    {
      var_fv0_2 = var_fv1_2 - 2.1474836e9f;
      goto block_15;
    }
    goto block_14;
  }
  var_fv1_2 = -((f32) arg1);
  if (var_fv1_2 < 2.1474836e9f)
  {
    block_14:
    var_a2_2 = (s32) var_fv1_2;

  }
  else
  {
    var_fv0_2 = var_fv1_2 - 2.1474836e9f;
    block_15:
    var_a2_2 = ((s32) var_fv0_2) | 0x80000000;

  }
  var_v0_2 = var_a2_2 & 0xFFFF;
  if (temp_a3 == 0)
  {
    var_v0 = 0x10E;
    if (arg1 > 0)
    {
      return 0x5A;
    }
    return var_v0;
  }
  if (var_v0_2 == 0)
  {
    return (-(arg0 < 1)) & 0xB4;
  }
  if (temp_a3 == var_v0_2)
  {
    if (arg0 > 0)
    {
      var_v0 = 0x13B;
      if (arg1 > 0)
      {
        return 0x2D;
      }
      return var_v0;
    }
    var_v0 = 0xE1;
    if (arg1 > 0)
    {
      return 0x87;
    }
    return var_v0;
  }
  if (var_v0_2 < temp_a3)
  {
    var_v1 = D_801FB230[((s32) (var_v0_2 << 6)) / temp_a3];
  }
  else
  {
    var_v1 = 0x5A - D_801FB230[((s32) (temp_a3 << 6)) / var_v0_2];
  }
  if (arg1 < 0)
  {
    if (arg0 >= 0)
    {
      temp_v1_2 = var_v1 & 0xFFFF;
      var_v0_2 = 0x168 - temp_v1_2;
      var_v1 = ((0x168 - temp_v1_2) / 360) * 0x168;
      goto block_38;
    }
    var_v0_3 = var_v1 + 0xB4;
    goto block_39;
  }
  var_v0 = var_v1 & 0xFFFF;
  if (arg0 < 0)
  {
    var_v0_2 = 0xB4;
    block_38:
    var_v0_3 = var_v0_2 - var_v1;

    block_39:
    var_v0 = var_v0_3 & 0xFFFF;

  }
  return var_v0;
}
