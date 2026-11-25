extern f64 D_801FB2C0;
extern f64 D_801FB2C8;
extern f64 D_801FB2D0;
extern f64 D_801FB2D8;
extern f64 D_801FB2E0;
f32 func_801F9AC0(f32 arg0)
{
  f32 var_fa0;
  f64 temp_fv0;
f64 __repair_phase_temp_fv0;
  f64 temp_fv1;
  f64 var_ft0;
  f64 var_fv0;
  s32 var_a0;
  s32 var_v1;
  do { var_fa0 = arg0; } while (0);
  var_a0 = 1;
  if (var_fa0 > 1.0f)
  {
    var_fa0 = 1.0f / var_fa0;
  }
  else
  {
    var_a0 = -1;
    if (var_fa0 >= (-1.0f))
    {
      var_a0 = 0;
    }
    else
    {
      var_fa0 = 1.0f / var_fa0;
    }
  }
  var_ft0 = 0.0;
  var_v1 = 0x18;
  __repair_rows:
  {
    if (D_801FB2D0)
    {
      temp_fv1 = (f64) ((((f32) (var_v1 * var_v1)) * var_fa0) * var_fa0);
      temp_fv0 = ((f64) ((var_v1 * 2) + 1)) + var_ft0;
      var_v1 -= 1;
      var_ft0 = temp_fv1 / temp_fv0;
    }
    else
    {
      temp_fv1 = (f64) ((((f32) (var_v1 * var_v1)) * var_fa0) * var_fa0);
      __repair_phase_temp_fv0 = ((f64) ((var_v1 * 2) + 1)) + var_ft0;
      var_v1 -= 1;
      var_ft0 = temp_fv1 / __repair_phase_temp_fv0;
    }
  }

  if (var_v1 > 0)
  {
    goto __repair_rows;
  }
  if (var_a0 > ((char) 0))
  {
    var_fv0 = D_801FB2C8 - (((f64) var_fa0) / (var_ft0 + D_801FB2C0));
  }
  else
    if (var_a0 >= 0)
  {
    var_fv0 = ((f64) var_fa0) / (var_ft0 + D_801FB2D0);
  }
  else
  {
    var_fv0 = D_801FB2E0 - (((f64) var_fa0) / (var_ft0 + D_801FB2D8));
  }
  return (f32) var_fv0;
}

