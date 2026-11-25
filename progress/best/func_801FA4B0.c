f32 func_801FA4B0(f32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6, f32 arg7)
{
  f32 temp_ft1;
  f32 temp_ft2;
  f32 temp_fv1;
  f32 temp_fv1_2;
  f32 var_ft1;
  f32 var_ft2;
  f32 __repair_var_ft2_1;
  var_ft1 = arg6;
  var_ft2 = arg7;
  if (!(var_ft1 > 0.0f))
  {
    if ((-var_ft1) < 0.00001f)
    {
      goto block_6;
    }
  }
  else
    if (var_ft1 < 0.00001f)
  {
    block_6:
    var_ft1 = 0.0f;

  }
  if (var_ft2 > 0.0f)
  {
    if (var_ft2 < 0.00001f)
    {
      block_13:
      __repair_var_ft2_1 = 0.0f;

    }
  }
  else
    if ((-var_ft2) < 0.00001f)
  {
    goto block_13;
  }
  if (var_ft1 == 0.0f)
  {
    if (arg0 != arg2)
    {
      temp_fv1_2 = arg4 - arg0;
      if (temp_fv1_2 != 0.0f)
      {
        return temp_fv1_2 / (arg2 - arg0);
      }
      return 0.5f;
    }
    if (arg4 || var_ft1)
    {
      return 0.5f;
    }
    else
    {
      return 0.5f;
    }
  }
  if (__repair_var_ft2_1 != 0.0f)
  {
    do
    {
      if (arg6)
      {
        temp_ft1 = 1.0f / var_ft1;
        ;
        return (((arg1 - arg5) * (1.0f / __repair_var_ft2_1)) - ((arg0 - arg4) * temp_ft1)) / (((arg2 - arg0) * temp_ft1) - ((arg3 - arg1) * (1.0f / __repair_var_ft2_1)));
      }
      else
      {
        temp_ft1 = 1.0f / var_ft1;
        ;
        return (((arg1 - arg5) * (1.0f / __repair_var_ft2_1)) - ((arg0 - arg4) * temp_ft1)) / (((arg2 - arg0) * temp_ft1) - ((arg3 - arg1) * (1.0f / __repair_var_ft2_1)));
      }
    }
    while (0);
  }
  if (arg0 == arg2)
  {
    temp_fv1 = arg5 - arg1;
    if (temp_fv1 != 0.0f)
    {
      return temp_fv1 / (arg3 - arg1);
    }
  }
  return 0.5f;
}

