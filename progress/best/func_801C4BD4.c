extern char D_801C7081[];
extern char D_801C7082[];
extern char D_801C7083[];
extern char D_801C7084[];
extern u8 *D_801C7AB0;
extern volatile short D_801C7AD7[];
inline static char *inline_fn(char *arg0, u8 arg1)
{
  return arg0 + ((arg1 & 0xFF) * 5);
}

inline static volatile short *inline_fn2(char *arg0, char *arg1, s32 arg2)
{
  return (((*arg0) * 0x18) + D_801C7AD7) + (*(arg1 + arg2));
}

inline static int inline_fn23(s32 arg0)
{
  return arg0 * 5;
}

inline static int inline_fn234(s32 arg0)
{
  return arg0 * 5;
}

int func_801C4BD4(s32 arg0, s8 *arg1, u8 *arg2, s8 *arg3)
{
  s32 temp_a0;
  s32 temp_v0;
  s32 temp_v1_2;
  s32 var_v0_2;
  s32 var_v0_3;
  s32 var_v1_2;
  volatile unsigned int var_v0_4;
  u32 var_v0;
  char temp_a1;
  u8 var_a0;
  do
  {
    s32 temp_v0_arm;
    if (((*inline_fn(D_801C7082, arg0)) == 0) || ((temp_v0_arm = inline_fn234(arg0 & 0xFF), temp_a1 = *inline_fn2(D_801C7083 + temp_v0_arm, D_801C7082, temp_v0_arm), (temp_a1 & 0xFF) == 0xFF)))
    {
      *arg2 = 0x7F;
      *arg1 = 0x7F;
      return;
    }
    if ((*D_801C7AB0) == 3)
    {
      var_a0 = *inline_fn(D_801C7084, temp_a1); var_v0 = var_a0 & 0xFF;
    }
    else
    {
      do
      {
        var_a0 = (*inline_fn(D_801C7084, temp_a1)) - 0x2E; var_v0 = var_a0 & 0xFF;
      }
      while (0);
    }
    temp_a0 = arg0 & 0xFF;
  }
  while (0);
  if ((var_v0 < 5U) || ((temp_a0 = arg0 & 0xFF, ((((u32) ((unsigned char) (var_a0 - 0x16))) < 5U) | (((s8) var_a0) == 0x2C)) != 0)))
  {
    do
    {
      if ((((*(D_801C7081 + inline_fn23(temp_a0))) == 0) && ((temp_v0 = arg0 & 0xFF, (*inline_fn(D_801C7081, temp_a1)) == 0x3C))) || (((*(D_801C7081 + inline_fn234(temp_v0 = arg0 & 0xFF))) == 0x3C) && ((*inline_fn(D_801C7081, temp_a1)) == 0x78)))
      {
        ;
        *arg1 = (*(D_801C7082 + inline_fn234(arg0 & 0xFF))) - 1;
        *arg2 = *(D_801C7083 + inline_fn234(arg0 & 0xFF));
        goto block_23;
      }
    }
    while (0);
  }
  else
  {
    var_v0_3 = arg0 & 0xFF;
    if ((((u32) ((unsigned char) (var_a0 - 0xD))) < 3U) || ((var_v0_3 = arg0 & 0xFF, (((u32) ((unsigned char) (var_a0 - 0x13))) < 3U) != 0)))
    {
      var_v1_2 = arg0 & 0xFF;
      if ((((*(D_801C7081 + inline_fn234(var_v0_3))) == 0) && ((var_v1_2 = arg0 & 0xFF, (*inline_fn(D_801C7081, temp_a1)) == 0x3C))) || (((*(D_801C7081 - (-inline_fn234(var_v1_2)))) == 0x3C) && ((*inline_fn(D_801C7081, temp_a1)) == 0x78)))
      {
        temp_v1_2 = inline_fn234(arg0 & 0xFF);
        *arg1 = (*(D_801C7082 + temp_v1_2)) - 1;
        *arg2 = *(D_801C7083 + temp_v1_2);
        var_v0_4 = 0xFF;
        do
        {
          goto block_24;
        }
        while (0);
      }
    }
    else
      if (((u32) ((var_a0 - 0x1B) & 0xFF)) < 5U)
    {
      temp_a0 = inline_fn234(arg0 & 0xFF);
      if ((*(D_801C7081 + temp_a0)) == (*(D_801C7081 + inline_fn234(temp_a1 & 0xFF))))
      {
        if (arg1 || D_801C7082)
        {
          if (var_a0)
          {
            *arg1 = (*(D_801C7082 + temp_a0)) - 1;
            *arg2 = *(D_801C7083 + temp_a0);
          }
          else
          {
            *arg1 = (*(D_801C7082 + temp_a0)) - 1;
            *arg2 = *(D_801C7083 + temp_a0);
          }
        }
        else
        {
          *arg1 = (*(D_801C7082 + temp_a0)) - 1;
          *arg2 = *(D_801C7083 + temp_a0);
        }
        block_23:
        var_v0_4 = 1;

        block_24:
        *arg3 = var_v0_4;

      }
    }
  }
}

