s32 func_801D8980(s32 *, s32, s32, s32, s32, s32);
int func_801D8BD0(s32 *arg0, s32 arg1, s32 arg2, u16 arg3, s32 arg4, s32 arg5, s32 arg6)
{
  s32 sp18;
  s32 *sp24;
  u16 sp2E;
  s32 sp36;
  s32 temp_s0;
  s32 temp_s1;
  s32 temp_s2;
  s32 temp_s3;
  s32 var_a1;
  s32 var_a1_2;
  s32 var_a2;
  s32 var_a2_2;
  s32 var_s1;
  s32 __repair_phase_var_s1;
  s32 var_s1_3;
  s32 var_s1_4;
  s32 __repair_phase_var_s1_4;
  sp24 = arg0;
  sp2E = arg3;
  __repair_phase_var_s1 = arg1 & 0xFFFF;
  var_s1_4 = arg2 & 0xFFFF;
  sp18 = *arg0;
  do
  {
    if (arg2)
    {
      func_801D8980(&sp18, __repair_phase_var_s1, var_s1_4, 0, arg5, arg6);
    }
    else
    {
      func_801D8980(&sp18, __repair_phase_var_s1, var_s1_4, 0, arg5, arg6);
    }
  }
  while (0);
  var_s1 = (arg1 + ((sp2E + 1) * 0x18)) & 0xFFFF;
  do
  {
    func_801D8980(&sp18, var_s1, var_s1_4, 2, arg5, arg6);
  }
  while (0);
  sp36 = arg4;
  var_s1_3 = (arg2 + ((sp36 + 1) * 0x18)) & 0xFFFF;
  func_801D8980(&sp18, __repair_phase_var_s1, var_s1_3, 5, arg5, arg6);
  func_801D8980(&sp18, var_s1, var_s1_3, 7, arg5, arg6);
  var_s1 = 1;
  if (sp2E != 0)
  {
    var_a1 = 1 * 2;
    __repair_rows:
    {
      if (var_s1)
      {
        if (sp2E)
        {
          func_801D8980(&sp18, (arg1 + ((var_a1 + var_s1) * 8)) & 0xFFFF, arg2 & 0xFFFF, 1, arg5, arg6);
        }
        else
        {
          func_801D8980(&sp18, (arg1 + ((var_a1 + var_s1) * 8)) & 0xFFFF, arg2 & 0xFFFF, 1, arg5, arg6);
        }
      }
      else
      {
        func_801D8980(&sp18, (arg1 + ((var_a1 + var_s1) * 8)) & 0xFFFF, arg2 & 0xFFFF, 1, arg5, arg6);
      }
      var_s1 += 1;
      var_a1 = var_s1 * 2;
    }

    if (((s32) sp2E) >= var_s1)
    {
      goto __repair_rows;
    }
  }
  var_s1 = 1;
  if (arg3 != 0)
  {
    var_a1_2 = 1 * 2;
    do
    {
      func_801D8980(&sp18, (arg1 + ((var_a1_2 + var_s1) * 8)) & 0xFFFF, (arg2 + ((sp36 + 1) * 0x18)) & 0xFFFF, 6, arg5, arg6);
      var_s1 += 1;
      var_a1_2 = var_s1 * 2;
    }
    while (((s32) sp2E) >= var_s1);
  }
  var_s1_3 = 1;
  if (sp36 != 0)
  {
    var_a2 = 1 * 2;
    do
    {
      func_801D8980(&sp18, arg1 & 0xFFFF, (arg2 + ((var_a2 + var_s1_3) * 8)) & 0xFFFF, 3, arg5, arg6);
      var_s1_3 += 1;
      var_a2 = var_s1_3 * 2;
    }
    while (((s32) sp36) >= var_s1_3);
    __repair_phase_var_s1_4 = 1;
    if (sp36 != 0)
    {
      var_a2_2 = 1 * 2;
      do
      {
        func_801D8980(&sp18, (arg1 + ((sp2E + 1) * 0x18)) & 0xFFFF, (arg2 + ((var_a2_2 + __repair_phase_var_s1_4) * 8)) & 0xFFFF, 4, arg5, arg6);
        do
        {
          __repair_phase_var_s1_4 += 1;
        }
        while (0);
        if (var_s1)
        {
          var_a2_2 = __repair_phase_var_s1_4 * 2;
        }
        else
        {
          var_a2_2 = __repair_phase_var_s1_4 * 2;
        }
      }
      while (((s32) sp36) >= __repair_phase_var_s1_4);
    }
  }
  *sp24 = sp18;
}

