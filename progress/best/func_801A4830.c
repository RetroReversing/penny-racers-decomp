extern char D_801C5EA8[];
extern volatile int D_801C5EC0[];
extern char D_801C7081[];
extern char D_801C7084[];
extern void * volatile D_801C7AB0;
inline static int inline_fn(s32 arg0, int arg1, int arg2)
{
  return (arg0 & arg1) * arg2;
}

inline static int inline_fn2(s32 arg0)
{
  return (arg0 & 0xFF) * 5;
}

inline static int inline_fn23(u8 arg0, int arg1)
{
  return arg0 & arg1;
}

s32 func_801A4830(u8 arg0, s32 arg1, s32 arg2)
{
  char *__base_D_801C5EA8;
  u8 *__base_D_801C7081;
  s32 __index_D_801C7081;
  u8 *__base_D_801C5EC0;
  s32 __index_D_801C5EC0;
  s32 temp_v1;
  s32 var_a0;
  s32 var_t1;
  volatile unsigned short var_v0;
  s32 var_v0_3;
  s32 __repair_phase_var_v0_3;
  s32 __repair_phase_var_v0_4;
  s32 var_v0_6;
  s32 var_v1_2;
  u32 var_v0_2;
  u8 var_a1;
  u8 var_a3;
  u8 var_v1;
  __base_D_801C7081 = 0;
  __base_D_801C5EC0 = 0;
  var_t1 = 0;
  if ((arg1 & 0xFF) == (*((u8 *) (((char *) D_801C7AB0) + 2))))
  {
    return 0;
  }
  var_v0_3 = arg0 & 0xFF;
  if ((*((u8 *) (((char *) D_801C7AB0) + 0))) == 3)
  {
    do
    {
      var_a3 = *(D_801C7084 + (var_v0_3 * 5));
    }
    while (0);
    var_v1 = *(D_801C7084 + ((arg1 & 0xFF) * 5));
    var_v0_2 = var_v1 & 0xFF;
  }
  else
  {
    var_a3 = (*(D_801C7084 + (var_v0_3 * 5))) - 0x2E;
    var_v1 = (*(D_801C7084 + ((arg1 & 0xFF) * 5))) - 0x2E;
    var_v0_2 = var_v1 & 0xFF;
  }
  if (var_v0_2 < 5U)
  {
    u8 var_a1_arm;
    s32 var_a0_arm;
    do
    {
      var_v0_2 = arg0 & 0xFF; __index_D_801C7081 = var_v0_2 * 5;
      __base_D_801C7081 = D_801C7081;
      if ((*(__base_D_801C7081 + __index_D_801C7081)) == (*(D_801C7081 + inline_fn((double) arg1, 0xFF, 5))))
      {
        var_v0_3 = arg1 & 0xFF;
        if (1)
        {
          if (((((((u32) (var_a3 & 0xFF)) + 1) - 1) < 5U) || ((var_v0_3 = arg1 & 0xFF, (((u32) ((unsigned char) (var_a3 - 0xD))) < 3U) != 0))) || ((var_v0_3 = arg1 & 0xFF, ((((u32) ((unsigned char) (var_a3 - 0x13))) < 3U) | (((s8) var_a3) == 0x2C)) != 0)))
          {
            var_a0_arm = var_v0_3 * 5;
            *((u16 *) (D_801C7081 + var_a0_arm)) = 0x3C; __index_D_801C5EC0 = arg2 & 0xFF;
            __base_D_801C5EC0 = D_801C5EC0;
            var_a1_arm = *(__base_D_801C5EC0 + __index_D_801C5EC0);
            goto block_36;
          }
          goto block_38;
        }
      }
      else
      {
        var_v0_3 = arg0 & 0xFF;
        if ((*(D_801C7081 + inline_fn2(arg0))) == 0x3C)
        {
          __index_D_801C7081 = arg1 & 0xFF; var_a0_arm = __index_D_801C7081 * 5; var_v0_3 = arg0 & 0xFF;
          if ((*(D_801C7081 + var_a0_arm)) == 0x78)
          {
            if (((u32) ((var_a3 - 0x1B) & 0xFF)) < 5U)
            {
              *(D_801C7081 + var_a0_arm) = 0x3C; var_a1_arm = *(D_801C5EC0 + (arg2 & 0xFF));
              goto block_36;
            }
            goto block_38;
          }
        }
        var_v0 = 0 & 0xFF;
        if ((*(D_801C7081 + ((unsigned char) (((unsigned char) var_v0_3) * 5)))) == 0)
        {
          do
          {
            var_a0_arm = (arg1 & 0xFF) * 5; var_v0 = 0 & 0xFF;
            if ((*(D_801C7081 + var_a0_arm)) == 0x3C)
            {
              if (((u32) ((var_a3 - 0x1B) & 0xFF)) < 5U)
              {
                *(D_801C7081 + var_a0_arm) = 0; var_a1_arm = *(D_801C5EC0 + (arg2 & 0xFF));
                goto block_36;
              }
              goto block_38;
            }
          }
          while (0);
        }
      }
    }
    while (0);
  }
  else
    if (((u32) ((var_v1 - 0x16) & 0xFF)) < 5U)
  {
    var_a1 = arg1 & 0xFF; var_a0 = var_a1 * 5;
    if ((*(D_801C7081 + (((arg0 & 0xFF) * 5) & 0xFFFF))) != (*(D_801C7081 + var_a0)))
    {
      var_v1_2 = arg0 & 0xFF;
      if ((((*(D_801C7081 + ((arg0 & 0xFF) * 5))) == 0x78) && ((var_v1_2 = inline_fn23(arg0, 0xFF), (*(D_801C7081 + ((arg1 & 0xFF) * 5))) == 0x3C))) || (((var_v0 = 0 & 0xFF, (*(D_801C7081 + (var_v1_2 * 5))) == 0x3C)) && ((var_v0 = 0 & 0xFF, (*(D_801C7081 + ((arg1 & 0xFF) * 5))) == 0))))
      {
        __repair_phase_var_v0_3 = arg1 & 0xFF;
        if (((((u32) (var_a3 & 0xFF)) < 5U) || ((__repair_phase_var_v0_3 = arg1 & 0xFF, (((u32) ((var_a3 - 0xD) & 0xFF)) < 3U) != 0))) || ((__repair_phase_var_v0_3 = arg1 & 0xFF, ((((u32) ((char) ((var_a3 - 0x13) & 0xFF))) < 3U) | (((s8) var_a3) == 0x2C)) != 0)))
        {
          var_a0 = __repair_phase_var_v0_3 * 5;
          var_v0_6 = arg2 & 0xFF;
          goto block_35;
        }
        goto block_38;
      }
    }
    else
    {
      var_v0 = 0 & 0xFF;
      if (((u32) ((var_a3 - 0x1B) & 0xFF)) < 5U)
      {
        var_v0_6 = arg2 & 0xFF;
        __base_D_801C5EA8 = D_801C5EA8;
        block_35:
        var_a1 = *(__base_D_801C5EA8 + var_v0_6);

        block_36:
        *(D_801C7084 + var_a0) = var_a1;

        var_t1 = 1;
        if ((*((u8 *) (((char *) D_801C7AB0) + 0))) == 4)
        {
          *(D_801C7084 + var_a0) = var_a1 + 0x2E;
        }
        goto block_38;
      }
    }
  }
  else
  {
    block_38:
    var_v0 = var_t1 & 0xFF;

  }
  return var_v0;
}

