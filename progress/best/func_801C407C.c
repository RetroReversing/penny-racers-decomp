extern unsigned char D_801C7081[];
extern char D_801C7082[];
extern char D_801C7083[];
extern char D_801C7084[];
extern u8 *D_801C7AB0;
extern volatile unsigned short D_801C7AD7[];
inline static int inline_fn(s32 arg0)
{
  return (arg0 & 0xFF) * 5;
}

inline static int inline_fn2(s32 arg0)
{
  return arg0 * 5;
}

inline static s32 inline_fn23(s32 arg0)
{
  return arg0;
}

void func_801C407C(s32 arg0_in_in, s8 *arg1, u8 *arg2, s8 *arg3)
{
  s32 arg0_in;
  s32 arg0;
  s32 temp_a0;
  s32 temp_a0_2;
  s32 temp_v0;
  s32 temp_v1;
  s32 var_v0_3;
  short var_v1;
  s32 var_v0_4;
  u32 var_v0;
  s32 temp_a1;
  u8 var_a0;
  do
  {
    do
    {
      do
      {
        arg0_in = arg0_in_in; arg0 = arg0_in;
      }
      while (0);
      if (((*(D_801C7082 + ((arg0 & 0xFF) * 5))) == 0) || ((temp_v0 = (arg0 & 0xFF) * 5, temp_a1 = *((((*(D_801C7083 + temp_v0)) * 0x18) + D_801C7AD7) + (*(D_801C7082 + temp_v0))), (temp_a1 & 0xFF) == 0xFF)))
      {
        *arg2 = 0x7F;
        *arg1 = 0x7F;
        do
        {
          return;
        }
        while (0);
      }
    }
    while (0);
    if ((*D_801C7AB0) == 3)
    {
      var_a0 = *(D_801C7084 + inline_fn2(temp_a1 & 0xFF)); var_v0 = var_a0 & 0xFF;
    }
    else
    {
      var_a0 = (*(D_801C7084 + inline_fn2(temp_a1 & 0xFF))) - 0x2E; var_v0 = var_a0 & 0xFF;
    }
    temp_v1 = arg0_in & 0xFF;
  }
  while (0);
  if ((var_v0 < 5U) || ((temp_v1 = inline_fn23(arg0) & 0xFF, ((((u32) ((unsigned char) (var_a0 - 0x16))) < 5U) | (((s8) var_a0) == 0x2C)) != 0)))
  {
    temp_a0 = temp_v1 * 5;
    if ((*(D_801C7081 + temp_a0)) == (*(D_801C7081 + ((temp_a1 & 0xFF) * 5))))
    {
      *arg1 = (*(D_801C7082 + temp_a0)) - 1;
      *arg2 = *(D_801C7083 + temp_a0);
      goto block_20;
    }
  }
  else
  {
    temp_v1 = arg0_in & 0xFF;
    if ((((u32) ((unsigned char) (var_a0 - 0xD))) < 3U) || ((temp_v1 = arg0 & 0xFF, (((u32) ((var_a0 - 0x13) & 0xFF)) < 3U) != 0)))
    {
      temp_a0_2 = inline_fn2(temp_v1);
      if ((*(D_801C7081 + temp_a0_2)) == ((unsigned int) (*(D_801C7081 + ((temp_a1 & 0xFF) * 5)))))
      {
        do
        {
          *arg1 = (*(D_801C7082 + temp_a0_2)) - 1;
          *arg2 = *(D_801C7083 + temp_a0_2);
        }
        while (0);
        var_v0_4 = 0xFF;
        do
        {
          goto block_21;
        }
        while (0);
      }
    }
    else
      if ((((((u32) ((var_a0 - 0x1B) & 0xFF)) - 1) + 1) < ((5U - 1) + 1)) && ((((var_v1 = arg0 & 0xFF, (*(D_801C7081 + inline_fn2(arg0 & 0xFF))) == 0x3C)) && ((var_v1 = arg0 & 0xFF, (*(D_801C7081 + ((temp_a1 & 0xFF) * 5))) == 0))) || (((*(D_801C7081 + inline_fn2(var_v1))) == 0x78) && ((*(D_801C7081 + inline_fn(temp_a1))) == ((unsigned long long) 0x3C)))))
    {
 do { *arg1 = (*(D_801C7082 + ((arg0 & 0xFF) * 5))) - 1; } while (0);
      temp_v1 = inline_fn2(arg0 & 0xFF);
      *arg2 = *(D_801C7083 + inline_fn2(arg0 & 0xFF));
      block_20:
      var_v0_4 = 1;

      block_21:
      *arg3 = var_v0_4;

    }
  }
}
