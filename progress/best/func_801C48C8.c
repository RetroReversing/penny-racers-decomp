extern char D_801C7081[];
extern char D_801C7082[];
extern char D_801C7083[];
extern char D_801C7084[];
extern u8 *D_801C7AB0;
extern char D_801C7AC0[];
inline static int inline_fn(unsigned char arg0)
{
  return arg0 * 5;
}

void func_801C48C8(s32 arg0, u8 *arg1, s8 *arg2, s8 *arg3)
{
  s32 temp_a0;
  s32 __repair_phase_temp_a0;
  unsigned char temp_v0_2;
  s32 temp_v0_3;
  s32 var_v0;
  s32 var_v0_2;
  s32 var_v1;
  s8 var_v0_3;
  s32 temp_a1;
  u8 var_a0;
  do
  {
    if (((*(D_801C7083 + ((arg0 & 0xFF) * 5))) == 0) || ((temp_a0 = inline_fn(arg0 & 0xFF), temp_a1 = *((((*(D_801C7083 + temp_a0)) * 0x18) + D_801C7AC0) + (*(D_801C7082 + temp_a0))), (temp_a1 & 0xFF) == 0xFF)))
    {
      *arg2 = 0x7F;
      *arg1 = 0x7F;
      return;
    }
  }
  while (0);
  if ((*D_801C7AB0) == 3)
  {
    var_a0 = *(D_801C7084 + inline_fn(temp_a1 & 0xFF));
    var_v0 = var_a0 - 5;
  }
  else
  {
    temp_a0 = temp_a1 & 0xFF;
    var_a0 = (*(D_801C7084 + (temp_a0 * 5))) - 0x2E;
    var_v0 = var_a0 - 5;
  }
  do
  {
    __repair_phase_temp_a0 = arg0 & 0xFF;
  }
  while (0);
  if ((((u32) (var_v0 & 0xFF)) < 5U) || ((__repair_phase_temp_a0 = arg0 & 0xFF, ((((u32) ((unsigned char) (var_a0 - 0x20))) < 5U) | (((s8) var_a0) == 0x2A)) != 0)))
  {
    do
    {
      temp_a0 = arg0 & 0xFF;
    }
    while (0);
    if ((((*(D_801C7081 + inline_fn(__repair_phase_temp_a0))) == 0) && ((temp_a0 = arg0 & 0xFF, ((unsigned long long) (*(D_801C7081 + inline_fn(temp_a1 & 0xFF)))) == 0x3C))) || (((*(D_801C7081 + ((arg0 & 0xFF) * 5))) == 0x3C) && ((*(D_801C7081 + ((temp_a1 & 0xFF) * 5))) == 0x78)))
    {
      temp_v0_2 = (arg0 & 0xFF) * 5;
      *arg1 = *(D_801C7082 + temp_v0_2);
      var_v0_3 = (*(D_801C7083 + temp_v0_2)) - 1;
      goto block_22;
    }
  }
  else
    if ((((u32) ((var_a0 - 0xA) & 0xFF)) + 1) < (6U + 1))
  {
    if ((((*(D_801C7081 + inline_fn(arg0 & 0xFF))) == 0) && ((__repair_phase_temp_a0 = arg0 & 0xFF, (*(D_801C7081 + ((temp_a1 & 0xFF) * 5))) == 0x3C))) || ((((unsigned long long) (*(D_801C7081 + ((__repair_phase_temp_a0 = ((char) arg0) & 0xFF) * 5)))) == 0x3C) && ((*(D_801C7081 + inline_fn(temp_a1 & 0xFF))) == 0x78)))
    {
      temp_v0_3 = inline_fn(arg0 & 0xFF);
      *arg1 = *(D_801C7082 + temp_v0_3);
      *arg2 = (*(D_801C7083 + inline_fn(arg0 & 0xFF))) - 1;
      *arg3 = 0xFF;
    }
  }
  else
    if (((u32) ((var_a0 - 0x25) & 0xFF)) < 5U)
  {
    temp_a0 = (arg0 & 0xFF) * 5;
    if ((*(D_801C7081 + temp_a0)) == (*(D_801C7081 + ((temp_a1 & 0xFF) * 5))))
    {
      *arg1 = *(D_801C7082 + temp_a0);
      var_v0_3 = (*(D_801C7083 + temp_a0)) - 1;
      block_22:
      *arg2 = var_v0_3;

      *arg3 = 0;
    }
  }
}

