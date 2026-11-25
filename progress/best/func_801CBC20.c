s32 func_801CA4DC();
s32 func_801CA528();
extern char D_801CF4C8[];
void func_801CBC20(s32 *arg0_in, s32 arg1, u16 arg2, s32 arg3, s32 arg4, void *arg5)
{
  s32 *arg0;
  char sp18[0x18];
  register s32 sp38;
  s32 temp_s2;
  u32 var_s0;
  u8 sp30;
  s32 var_v0_2;
  s32 var_v0;
  s32 __repair_phase_var_v1;
  volatile int temp_v0;
  u32 var_a0;
  sp38 = *arg0;
  arg0 = arg0_in;
  {
    u16 __repair_i;
    do
    {
      for (__repair_i = 0; __repair_i < 0x11; __repair_i++)
      {
        sp18[__repair_i] = 0;
      }

    }
    while (0);
  }
  {
    u16 __repair_i;
    for (__repair_i = 0; __repair_i < 5; __repair_i++)
    {
      if (var_v0_2)
      {
        (&sp30)[__repair_i] = 0;
      }
      else
      {
        (&sp30)[__repair_i] = 0;
      }
    }

  }
  func_801CA4DC((var_v0_2 = 0, (var_s0 = 0, arg5 + 0xE)), sp18, 0x10);
  func_801CA4DC(arg5 + 0xA, &sp30, 4);
  temp_v0 = 0 & 0xFFFF;
  do
  {
    var_a0 = temp_v0;
    if (((*((u8 *) (((char *) (arg5 + temp_v0)) + 0xE))) != 0) & (temp_v0 < 0x10U))
    {
      do
      {
        do
        {
          do
          {
            ++var_s0;
          }
          while (0);
          do { do { func_801CA528(&sp38, arg1 & 0xFFFF, arg2 & 0xFFFF, sp18[var_a0]); } while (0); } while (0);
          var_a0 = var_s0 & 0xFFFF;
        }
        while (0);
        arg1 += arg3;
      }
      while ((var_a0 < 0x10U) & ((*((u8 *) (((char *) (arg5 + var_a0)) + 0xE))) != 0));
    }
  }
  while (0);
  if ((*((u8 *) (((char *) arg5) + 0xA))) != 0)
  {
    s32 __repair_branch___repair_phase_var_v1_0 = __repair_phase_var_v1;
    if (var_v0_2)
    {
      func_801CA528(&sp38, arg1 & 0xFFFF, __repair_branch___repair_phase_var_v1_0, 0xEU, D_801CF4C8, arg4);
    }
    else
    {
      func_801CA528(&sp38, arg1 & 0xFFFF, __repair_branch___repair_phase_var_v1_0, 0xEU, D_801CF4C8, arg4);
    }
    __repair_branch___repair_phase_var_v1_0 = arg2 & 0xFFFF;
    if (var_v0_2)
    {
      do { func_801CA528(&sp38, (arg1 + (((u32) (arg3 & 0xFFFF)) >> 1)) & 0xFFFF, __repair_branch___repair_phase_var_v1_0, sp30, D_801CF4C8, arg4); } while (0);
    }
    else
      if (sp38)
    {
      func_801CA528(&sp38, (arg1 + (((u32) (arg3 & 0xFFFF)) >> 1)) & 0xFFFF, __repair_branch___repair_phase_var_v1_0, sp30, D_801CF4C8, arg4);
    }
    else
    {
      func_801CA528(&sp38, (arg1 + (((u32) (arg3 & 0xFFFF)) >> 1)) & 0xFFFF, __repair_branch___repair_phase_var_v1_0, sp30, D_801CF4C8, arg4);
    }
  }
  *arg0 = sp38;
}

