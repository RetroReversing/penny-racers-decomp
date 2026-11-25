extern char D_801C5EB0[];
extern char D_801C5EC8[];
extern char D_801C7081[];
extern char D_801C7084[];
extern void * volatile D_801C7AB0;
inline static char *inline_fn(s8 arg0)
{
  return D_801C7081 + ((arg0 & 0xFF) * 5);
}

inline static char *inline_fn2(int arg0)
{
  return D_801C5EC8 + arg0;
}

inline static int inline_fn23(s8 arg0)
{
  return (arg0 & 0xFF) * 5;
}

inline static int inline_fn234(s32 arg0)
{
  return arg0 * 5;
}

s32 func_801A4E94(s32 arg0_in_in, s32 arg1, s32 arg2)
{
  s32 arg0_in;
  s32 arg0;
  u8 *__base_D_801C7081;
  s32 __index_D_801C7081;
  u8 var_a1;
  s32 var_a0;
  s32 var_t1;
  s32 var_v0;
  s32 var_v0_2;
  s32 var_v0_3;
  s32 var_v0_4;
  s32 var_v0_5;
  short var_v0_6;
  s32 var_v1_2;
  s32 temp_v1;
  u8 var_t0;
  u8 var_v1;
  arg0_in = arg0_in_in;
  arg0 = arg0_in;
  __base_D_801C7081 = 0;
  var_t1 = 0;
  if ((arg1 & 0xFF) == (*((u8 *) (((char *) D_801C7AB0) + 2))))
  {
    return 0;
  }
  var_v0_4 = arg0 & 0xFF;
  if ((*((u8 *) (((char *) D_801C7AB0) + 0))) == 3)
  {
    var_v1 = *(D_801C7084 + inline_fn234(arg1 & 0xFF));
    var_t0 = *(D_801C7084 + inline_fn23(arg0));
    var_v0_2 = var_v1 - 5;
  }
  else
  {
    var_t0 = (*(D_801C7084 + inline_fn234(arg0 & 0xFF))) - 0x2E;
    do
    {
      var_v1 = (*(D_801C7084 + inline_fn234(((unsigned char) arg1) & 0xFF))) - 0x2E;
    }
    while (0);
    var_v0_2 = var_v1 - 5;
  }
  if (((u32) (var_v0_2 & 0xFF)) < 5U)
  {
    s32 __index_D_801C7081_arm;
    s32 var_a0_arm;
    if ((*inline_fn(arg0)) == (*((u16 *) inline_fn(arg1))))
    {
      var_v0 = arg1 & 0xFF;
      do
      {
        if ((((u32) ((unsigned char) (var_t0 - 5))) < 5U) || ((var_v0 = arg1 & 0xFF, ((((u32) ((var_t0 - 0x10) & 0xFF)) < 6U) | (((s8) var_t0) == 0x2B)) != 0)))
        {
          var_a0_arm = inline_fn234(var_v0); var_a1 = *((u16 *) inline_fn2(arg2 & 0xFF));
          *(D_801C7081 + var_a0_arm) = 0x3C;
          goto block_34;
        }
      }
      while (0);
      goto block_36;
    }
    else
    {
      __index_D_801C7081_arm = arg0_in & 0xFF;
      if (((unsigned long) (*inline_fn(arg0))) == 0x3C)
      {
        var_a0_arm = inline_fn23(arg1);
        var_v0_3 = arg0 & 0xFF;
        if ((*(D_801C7081 + var_a0_arm)) == 0x78)
        {
          if (((u32) ((var_t0 - 0x20) & 0xFF)) < 5U)
          {
            if (var_v1)
            {
              *(D_801C7081 + var_a0_arm) = 0x3C;
              var_a1 = *((u16 *) inline_fn2(arg2 & 0xFF));
              goto block_34;
            }
            else
            {
              *(D_801C7081 + var_a0_arm) = 0x3C;
              var_a1 = *((u16 *) inline_fn2(arg2 & 0xFF));
              goto block_34;
            }
          }
          goto block_36;
        }
      }
      var_v0 = 0 & 0xFF;
      if ((*(D_801C7081 + inline_fn234(__index_D_801C7081_arm))) == 0)
      {
        do
        {
          do
          {
            var_v0 = 0 & 0xFF; var_a0_arm = inline_fn23(arg1);
            if (((*(D_801C7081 + var_a0_arm)) & 0xFFFFFFFFFFFFFFFFu) == 0x3C)
            {
              if (((u32) ((var_t0 - 0x20) & 0xFF)) < 5U)
              {
                *(D_801C7081 + var_a0_arm) = 0; var_a1 = *((u16 *) (D_801C5EC8 + (arg2 & 0xFF)));
                goto block_34;
              }
              goto block_36;
            }
          }
          while (0);
        }
        while (0);
      }
    }
  }
  else
  {
    do
    {
      if (((u32) ((var_v1 - 0x25) & 0xFF)) < 5U)
      {
        if (var_a0)
        {
          var_a0 = inline_fn23(arg1);
          __index_D_801C7081 = inline_fn23(arg0);
          __base_D_801C7081 = D_801C7081;
        }
        else
        {
          var_a0 = inline_fn23(arg1);
          __index_D_801C7081 = inline_fn23(arg0);
          __base_D_801C7081 = D_801C7081;
        }
        if ((*(__base_D_801C7081 + __index_D_801C7081)) != (*(D_801C7081 + var_a0)))
        {
          var_a0 = arg0 & 0xFF;
          if ((((*inline_fn(arg0)) == 0x78) && ((var_a0 = arg0 & 0xFF, (*inline_fn(arg1)) == ((u32) 0x3C)))) || (((var_v0 = 0 & 0xFF, (*((u16 *) (D_801C7081 + inline_fn234(arg0 & 0xFF)))) == 0x3C)) && ((var_v0 = 0 & 0xFF, (*inline_fn(arg1)) == 0))))
          {
            var_v0_6 = arg1 & 0xFF;
            if ((((u32) ((var_t0 - 5) & 0xFF)) < 5U) || ((var_v0_6 = arg1 & 0xFF, ((((u32) ((var_t0 - 0x10) & 0xFF)) < 6U) | (((s8) var_t0) == 0x2B)) != 0)))
            {
              var_a0 = inline_fn234(var_v0_6); var_v0_6 = arg2 & 0xFF;
              goto block_33;
            }
            goto block_36;
          }
        }
        else
        {
          var_v0 = 0 & 0xFF;
          if (((u32) ((var_t0 - 0x20) & 0xFF)) < 5U)
          {
            var_v0_6 = arg2 & 0xFF;
            block_33:
            var_a1 = *(D_801C5EB0 + var_v0_6);

            block_34:
            var_t1 = 1;

            *(D_801C7084 + var_a0) = var_a1;
            if ((*((u8 *) (((char *) D_801C7AB0) + 0))) == 4)
            {
              *(D_801C7084 + var_a0) = var_a1 + 0x2E;
            }
            goto block_36;
          }
        }
      }
      else
      {
        block_36:
        var_v0 = var_t1 & 0xFF;

      }
    }
    while (0);
  }
  return var_v0;
}

