extern u8 D_801C5EA8[];
extern s32 D_801C5EB8;
extern u8 D_801C7081[];
extern unsigned char D_801C7084;
extern void * volatile D_801C7AB0;
inline static int inline_fn(s32 arg0, int arg1)
{
  return (arg0 & arg1) * 5;
}

inline static int inline_fn2(s32 arg0)
{
  return arg0 - 0x2E;
}

inline static int inline_fn23(s32 arg0)
{
  return arg0 * 5;
}

inline static u8 inline_fn234(u8 arg0)
{
  return arg0;
}

inline static int inline_fn2345(s8 arg0, int arg1)
{
  return inline_fn(arg0, arg1);
}

s32 func_801A445C(short arg0_in, s8 arg1, u8 arg2)
{
  short arg0;
  s32 temp_v1;
  s32 var_a0;
  s32 var_t1;
  s32 var_v0;
  int var_v0_3;
  s32 var_v0_4;
  register s32 var_v0_5;
  unsigned char var_v0_6;
  u32 var_v0_2;
  u8 var_a1;
  s32 var_a3;
  u8 var_v1;
  arg0 = arg0_in;
  var_t1 = 0;
  if ((arg1 & 0xFF) == (*((u8 *) (((char *) D_801C7AB0) + 2))))
  {
    return 0;
  }
  do
  {
    do
    {
      var_v0_4 = arg0 & 0xFF;
      if ((*((u8 *) (((char *) D_801C7AB0) + 0))) == 3)
      {
        var_a3 = *((&D_801C7084) + inline_fn2345(arg0, 0xFF));
        do
        {
          var_v1 = *((&D_801C7084) + inline_fn2345(arg1, 0xFF));
        }
        while (0);
        var_v0_2 = var_v1 & 0xFF;
      }
      else
      {
        var_v0_5 = *((&D_801C7084) + inline_fn2345(arg0, 0xFF));
        do
        {
          var_a3 = inline_fn2(var_v0_5); var_v1 = (*((&D_801C7084) + inline_fn2345(arg1, 0xFF))) - 0x2E;
        }
        while (0);
        var_a0 = var_v1 & 0xFF; var_v0_2 = var_a0;
      }
      if (var_v0_2 < 5U)
      {
        if ((*(D_801C7081 + inline_fn2345(arg1, 0xFF))) == (*(D_801C7081 + inline_fn2345(arg0, 0xFF))))
        {
          var_v0_4 = arg1 & 0xFF;
          if (((((u32) (var_a3 & 0xFF)) < 5U) || ((var_v0_4 = arg1 & 0xFF, (((u32) ((unsigned char) (var_a3 - 0xA))) < 3U) != 0))) || ((var_v0_4 = arg1 & 0xFF, ((((u32) ((unsigned char) (var_a3 - 0x10))) < 3U) | (((s8) var_a3) == 0x2D)) != 0)))
          {
            var_a0 = var_v0_4 * 5;
            *(D_801C7081 + inline_fn23(var_v0_4)) = 0x3C;
            do
            {
              var_a1 = *((&D_801C5EB8) + (arg2 & 0xFF));
              goto block_36;
            }
            while (0);
          }
          goto block_38;
        }
        else
        {
          var_v0_3 = arg0 & 0xFF;
          if ((*(D_801C7081 + inline_fn2345(arg0, 0xFF))) == 0x3C)
          {
            var_v0_6 = arg1 & 0xFF; var_a0 = var_v0_6 * 5;
            do
            {
              var_v0_3 = arg0 & 0xFF;
              if ((*(D_801C7081 + var_a0)) == 0x78)
              {
                if (((u32) ((var_a3 - 0x16) & 0xFF)) < 5U)
                {
                  var_a1 = *((&D_801C5EB8) + (arg2 & 0xFF));
                  *(D_801C7081 + var_a0) = 0x3C;
                  goto block_36;
                }
                goto block_38;
              }
            }
            while (0);
          }
          var_v0 = 0 & 0xFF;
          if ((*(D_801C7081 + inline_fn23(var_v0_3))) == 0)
          {
            var_a0 = inline_fn2345(arg1, 0xFF); var_v0 = 0 & 0xFF;
            if ((*((u16 *) (D_801C7081 + var_a0))) == 0x3C)
            {
              if (((((u32) ((var_a3 - 0x16) & 0xFF)) + 1) - 1) < 5U)
              {
                *(D_801C7081 + var_a0) = 0;
                var_a1 = *((&D_801C5EB8) + (arg2 & ((unsigned long) 0xFF)));
                goto block_36;
              }
              goto block_38;
            }
          }
        }
        if (1)
        {
        }
      }
      else
      {
        do
        {
          if (((u32) ((var_v1 - 0x1B) & 0xFF)) < 5U)
          {
            if (var_a3)
            {
              var_a0 = inline_fn2345(arg1, 0xFF);
            }
            else
            {
              var_a0 = inline_fn2345(arg1, 0xFF);
            }
            if ((*(inline_fn(arg0, 0xFF) + D_801C7081)) != (*(D_801C7081 + var_a0)))
            {
              if ((((*(D_801C7081 + inline_fn23(arg0 & 0xFF))) == 0x78) && ((var_v0_6 = arg0 & 0xFF, (*(D_801C7081 + ((arg1 & 0xFF) * 5))) == 0x3C))) || (((var_v0 = 0 & 0xFF, (*(D_801C7081 + ((var_v0_6 = arg0 & 0xFF) * 5))) == 0x3C)) && ((var_v0 = 0 & 0xFF, (*(D_801C7081 + inline_fn(arg1, 0xFF))) == 0))))
              {
                var_v0_5 = arg1 & 0xFF;
                if (((((u32) (var_a3 & 0xFF)) < 5U) || ((var_v0_5 = arg1 & 0xFF, (((u32) ((var_a3 - 0xA) & 0xFF)) < 3U) != 0))) || ((var_v0_5 = arg1 & 0xFF, ((((u32) ((var_a3 - 0x10) & 0xFF)) < 3U) | (((s8) var_a3) == 0x2D)) != 0)))
                {
                  var_a0 = inline_fn23(var_v0_5); var_v0_6 = arg2 & 0xFF;
                  goto block_35;
                }
                goto block_38;
              }
            }
            else
            {
              s32 var_v1_2;
              var_v0 = 0 & 0xFF;
              if (((u32) ((var_a3 - 0x16) & 0xFF)) < 5U)
              {
                var_v0_6 = arg2 & 0xFF;
                block_35:
                var_a1 = *(D_801C5EA8 + var_v0_6);

                block_36:
                var_t1 = 1;

                *((&D_801C7084) + var_a0) = var_a1;
                if ((*((u8 *) (((char *) D_801C7AB0) + 0))) == 4)
                {
                  *((&D_801C7084) + var_a0) = inline_fn234(var_a1) + 0x2E;
                }
                goto block_38;
              }
            }
          }
          else
          {
            if (1)
            {
            }
            block_38:
            var_v0 = var_t1 & 0xFF;

          }
        }
        while (0);
      }
    }
    while (0);
  }
  while (0);
  return var_v0;
}

