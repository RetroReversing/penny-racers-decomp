extern unsigned char D_801C7081[];
extern char D_801C7082[];
extern char D_801C7083[];
extern char D_801C7084[];
extern u8 *D_801C7AB0;
extern volatile char D_801C7AF0[];
inline static int inline_fn(unsigned char arg0)
{
  return arg0 * 5;
}

volatile unsigned int func_801C4EF4(s32 arg0, u8 *arg1, s8 *arg2, s8 *arg3)
{
  s32 temp_a0;
  s32 temp_v0;
  s32 temp_v0_2;
  s32 temp_v0_3;
  char var_v0;
  s32 var_v0_2;
  s32 var_v1;
  unsigned int var_v1_2;
  s8 var_v0_3;
  s8 var_v0_4;
  s32 temp_a1;
  u8 var_a0;
  if (((*(D_801C7083 + ((arg0 & 0xFF) * 5))) == 0x17) || ((temp_v0 = inline_fn(arg0 & 0xFF), temp_a1 = *((((*(D_801C7083 + temp_v0)) * 0x18) + D_801C7AF0) + (*(D_801C7082 + temp_v0))), ((unsigned char) (temp_a1 & 0xFF)) == 0xFF)))
  {
    *arg2 = 0x7F;
    *arg1 = 0x7F;
    return;
  }
  if ((*D_801C7AB0) == 3)
  {
    temp_v0 = temp_a1 & 0xFF;
    var_a0 = *(D_801C7084 - (-inline_fn(temp_v0)));
    var_v0 = var_a0 - 5;
  }
  else
  {
    if (1)
    {
    }
    var_a0 = (*(D_801C7084 + inline_fn(temp_a1 & 0xFF))) - 0x2E;
    var_v0 = var_a0 - 5;
  }
  if (D_801C7082)
  {
    if (D_801C7081)
    {
      temp_a0 = arg0 & 0xFF;
    }
    else
    {
      temp_a0 = arg0 & 0xFF;
    }
  }
  else
  {
    temp_a0 = arg0 & 0xFF;
  }
  if ((((u32) (var_v0 & 0xFF)) < 5U) || ((temp_a0 = arg0 & 0xFF, ((((u32) ((unsigned char) (var_a0 - 0x25))) < 5U) | (((s8) var_a0) == 0x2B)) != 0)))
  {
    do
    {
      if (1)
      {
      }
    }
    while (0);
    do
    {
      if (D_801C7082)
      {
        var_v1_2 = arg0 & 0xFF;
      }
      else
      {
        var_v1_2 = arg0 & 0xFF;
      }
    }
    while (0);
    if ((((*(D_801C7081 + (temp_a0 * 5))) == 0) && ((var_v1_2, (*(D_801C7081 + ((temp_a1 & 0xFF) * 5))) == 0x3C))) || (((*(D_801C7081 + ((arg0 & 0xFF) * 5))) == 0x3C) && ((*(D_801C7081 + inline_fn(temp_a1 & 0xFF))) == 0x78)))
    {
      temp_v0_2 = (arg0 & 0xFF) * 5;
      *arg1 = *(D_801C7082 + temp_v0_2);
      var_v0_3 = (*(D_801C7083 + temp_v0_2)) + 1;
      goto block_22;
    }
  }
  else
    if (((u32) ((unsigned char) (var_a0 - 0x10))) < 6U)
  {
    var_v1_2 = arg0 & 0xFF;
    if ((((*(D_801C7081 + inline_fn(arg0 & 0xFF))) == 0) && ((var_v1_2 = arg0 & 0xFF, (*(D_801C7081 + inline_fn(temp_a1 & 0xFF))) == 0x3C))) || ((((unsigned long) (*(D_801C7081 + (var_v1_2 * 5)))) == 0x3C) && ((*(D_801C7081 + ((temp_a1 & 0xFF) * 5))) == 0x78)))
    {
      temp_v0_3 = inline_fn(arg0 & 0xFF);
      do
      {
        *arg1 = *(D_801C7082 + temp_v0_3);
        *arg2 = (*(D_801C7083 + temp_v0_3)) + 1; var_v0_4 = 0xFF;
        goto block_23;
      }
      while (0);
    }
  }
  else
    if (((u32) ((var_a0 - 0x20) & 0xFF)) < 5U)
  {
    temp_a0 = inline_fn(arg0 & 0xFF);
    if ((*(D_801C7081 + temp_a0)) == (*(D_801C7081 + ((temp_a1 & 0xFF) * 5))))
    {
      *arg1 = *(D_801C7082 + temp_a0);
      var_v0_3 = (*(D_801C7083 + temp_a0)) + 1;
      block_22:
      var_v0_4 = 2;

      *arg2 = var_v0_3;
      block_23:
      *arg3 = var_v0_4;

    }
  }
}

