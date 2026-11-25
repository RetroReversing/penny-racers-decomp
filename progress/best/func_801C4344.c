extern char D_801C7081[];
extern char D_801C7082[];
extern char D_801C7083[];
extern char D_801C7084[];
extern u8 *D_801C7AB0;
extern char D_801C7AF0[];
inline static int inline_fn(int arg0)
{
  return arg0 * 5;
}

inline static char *inline_fn2()
{
  return D_801C7AF0;
}

inline static int inline_fn23(s32 arg0)
{
  return (arg0 & 0xFF) * 5;
}

void func_801C4344(u8 arg0, u8 *arg1, s8 *arg2, s8 *arg3)
{
  s32 temp_a0_2;
  s32 __repair_phase_temp_a0_2;
  s32 temp_v0;
  s32 temp_v0_2;
  s32 __repair_result_temp_v0_2;
  s32 var_v0;
  s32 __repair_result_var_v0;
  s32 var_v0_2;
  short var_v1;
  s8 var_v0_3;
  s8 var_v0_4;
  s32 temp_a1;
  u8 var_a0;
  if (((*(D_801C7083 + inline_fn23(arg0))) == 0x17) || ((temp_v0 = inline_fn23(arg0), temp_a1 = *((((*(D_801C7083 - (-temp_v0))) * 0x18) + inline_fn2()) + (*(D_801C7082 + temp_v0))), (temp_a1 & 0xFF) == 0xFF)))
  {
    do
    {
      *arg2 = 0x7F;
      *arg1 = 0x7F;
      return;
    }
    while (0);
  }
  if ((*D_801C7AB0) == 3)
  {
    temp_v0 = temp_a1 & 0xFF;
    var_a0 = *(D_801C7084 + (temp_v0 * 5));
    var_v0 = var_a0 - 5;
  }
  else
  {
    var_a0 = (*(D_801C7084 + inline_fn23(temp_a1))) - 0x2E;
    var_v0 = var_a0 - 5;
  }
  __repair_phase_temp_a0_2 = arg0 & 0xFF;
  if ((((u32) (var_v0 & 0xFF)) < 5U) || ((__repair_phase_temp_a0_2 = arg0 & 0xFF, ((((u32) ((unsigned char) (var_a0 - 0x25))) < 5U) | (((s8) var_a0) == 0x2B)) != 0)))
  {
    __repair_result_var_v0 = inline_fn(__repair_phase_temp_a0_2);
    if ((*(D_801C7081 + __repair_result_var_v0)) == (*(D_801C7081 + inline_fn(temp_a1 & 0xFF))))
    {
      *arg1 = *(D_801C7082 + __repair_result_var_v0);
      var_v0_3 = (*(D_801C7083 + __repair_result_var_v0)) + 1;
      goto block_19;
    }
  }
  else
    if ((((u32) ((var_a0 - 0x10) & 0xFF)) + 1) <= 6U)
  {
    short var_v0_4_arm;
    do
    {
      __repair_phase_temp_a0_2 = inline_fn(arg0 & 0xFF);
      if ((*(D_801C7081 + __repair_phase_temp_a0_2)) == (*(D_801C7081 + inline_fn23(temp_a1))))
      {
        *arg1 = *(D_801C7082 + __repair_phase_temp_a0_2);
        *arg2 = (*(D_801C7083 + __repair_phase_temp_a0_2)) + 1; var_v0_4_arm = 0xFF;
        goto block_20;
      }
    }
    while (0);
  }
  else
    if ((((((u32) ((var_a0 - 0x20) & 0xFF)) + 1) - 1) <= (5U - 1)) && ((((var_v1 = arg0 & 0xFF, (*(D_801C7081 + inline_fn23(arg0))) == 0x3C)) && ((var_v1 = arg0 & 0xFF, (*(D_801C7081 + inline_fn23(temp_a1))) == 0))) || (((*(D_801C7081 + (var_v1 * 5))) == 0x78) && ((*(D_801C7081 + inline_fn(temp_a1 & 0xFF))) == 0x3C))))
  {
    __repair_result_temp_v0_2 = inline_fn(arg0 & 0xFF);
    *arg1 = *(D_801C7082 + __repair_result_temp_v0_2);
    var_v0_3 = (*(D_801C7083 + __repair_result_temp_v0_2)) + 1;
    block_19:
    *arg2 = var_v0_3;

    var_v0_4 = 2;
    block_20:
    *arg3 = 2;

  }
}

