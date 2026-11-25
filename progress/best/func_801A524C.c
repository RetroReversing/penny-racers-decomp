extern char D_801C5EB0[];
extern char D_801C5ED0[];
extern char D_801C7081[];
extern char D_801C7084[];
extern void * volatile D_801C7AB0;
inline static int inline_fn(s32 arg0)
{
  return (arg0 & 0xFF) * 5;
}

unsigned int func_801A524C(s32 arg0, s32 arg1, s32 arg2)
{
  s32 __index_D_801C7081;
  u8 *__base_D_801C5ED0;
  s32 __index_D_801C5ED0;
  char *__base_D_801C7081;
  char *__base_D_801C5EB0;
  s32 temp_v1;
  s32 var_t1;
  s32 var_v0;
  s32 var_v0_2;
  s32 var_v0_3;
  s32 var_v0_4;
  s32 var_v0_5;
  s32 var_v0_6;
  s32 var_v1_2;
  register u8 var_a1;
  u8 var_t0;
  u8 var_v1;
  __base_D_801C5ED0 = 0;
  var_t1 = 0;
  if ((arg1 & 0xFF) == (*((u8 *) (((char *) D_801C7AB0) + 2))))
  {
    return 0;
  }
  temp_v1 = arg0 & 0xFF;
  if ((*((u8 *) (((char *) D_801C7AB0) + 0))) == 3)
  {
    var_t0 = *(D_801C7084 + inline_fn(arg0));
    var_v1 = *(D_801C7084 + ((arg1 & 0xFF) * 5));
    var_v0_2 = var_v1 - 5;
  }
  else
  {
    var_t0 = (*(D_801C7084 + inline_fn(arg0))) - 0x2E;
    var_v0_2 = var_v1 - 5;
    var_v1 = (*(D_801C7084 + inline_fn(arg1))) - 0x2E;
  }
  if (((u32) (var_v0_2 & 0xFF)) < 5U)
  {
    __base_D_801C7081 = 0;
    do
    {
      var_a1 = arg1 & 0xFF; __index_D_801C7081 = var_a1 * 5;
      __base_D_801C7081 = D_801C7081;
      if ((*(__base_D_801C7081 + inline_fn(arg0))) == (*(__base_D_801C7081 + __index_D_801C7081)))
      {
        var_v0_4 = arg1 & 0xFF;
        do
        {
          if ((((u32) ((unsigned char) (var_t0 - 5))) < 5U) || ((var_v0_4 = arg1 & 0xFF, ((((u32) ((var_t0 - 0xA) & 0xFF)) < 6U) | (((s8) var_t0) == 0x2A)) != 0)))
          {
            temp_v1 = ((long long) var_v0_4) * 5;
            do
            {
              *(__base_D_801C7081 + temp_v1) = 0x3C; __index_D_801C5ED0 = arg2 & 0xFF; __base_D_801C5ED0 = D_801C5ED0; var_a1 = *((u16 *) (__base_D_801C5ED0 + __index_D_801C5ED0));
            }
            while (0);
            goto block_34;
          }
        }
        while (0);
        goto block_36;
      }
      else
      {
        var_v0_5 = ((char) arg0) & 0xFF;
        if ((*(__base_D_801C7081 + inline_fn(arg0))) == 0x3C)
        {
          temp_v1 = inline_fn(arg1); var_v0_3 = arg0 & 0xFF;
          do
          {
            if ((*(__base_D_801C7081 + temp_v1)) == 0x78)
            {
              if (((u32) ((var_t0 - 0x25) & 0xFF)) < 5U)
              {
                *(__base_D_801C7081 + temp_v1) = 0x3C; var_a1 = *(D_801C5ED0 + (arg2 & ((unsigned int) 0xFF)));
                goto block_34;
              }
              goto block_36;
            }
          }
          while (0);
        }
        var_v0 = 0 & 0xFF;
        if ((*(__base_D_801C7081 + (var_v0_5 * 5))) == 0)
        {
          temp_v1 = (arg1 & 0xFF) * 5; var_v0 = 0 & 0xFF;
          if ((*(__base_D_801C7081 + temp_v1)) == (0x3C & 0xFFFFu))
          {
            if (((u32) ((var_t0 - 0x25) & 0xFF)) < 5U)
            {
              *(__base_D_801C7081 + temp_v1) = 0; var_a1 = *(D_801C5ED0 + (arg2 & 0xFF));
              goto block_34;
            }
            goto block_36;
          }
        }
      }
    }
    while (0);
  }
  else
    if (((u32) ((var_v1 - 0x20) & 0xFF)) < 5U)
  {
    temp_v1 = (arg1 & 0xFF) * 5;
    if ((*(__base_D_801C7081 + inline_fn(arg0))) != (*(__base_D_801C7081 + temp_v1)))
    {
      temp_v1 = arg0 & 0xFF;
      if ((((*(__base_D_801C7081 + ((arg0 & 0xFF) * 5))) == 0x78) && ((temp_v1 = arg0 & 0xFF, (*(__base_D_801C7081 + inline_fn(arg1))) == 0x3C))) || (((var_v0 = ((*((u8 *) (((char *) D_801C7AB0) + 0))) * 0) & 0xFF, (*(__base_D_801C7081 + (temp_v1 * 5))) == 0x3C)) && ((var_v0 = 0 & 0xFF, (*(__base_D_801C7081 + ((arg1 & 0xFF) * 5))) == 0))))
      {
        var_v0_5 = arg1 & 0xFF;
        if ((((u32) ((var_t0 - 5) & 0xFF)) < 5U) || ((var_v0_5 = arg1 & 0xFF, ((((((u32) ((var_t0 - 0xA) & 0xFF)) + 1) - 1) < 6U) | (((s8) var_t0) == 0x2A)) != 0)))
        {
          temp_v1 = var_v0_5 * 5;
          var_v0_6 = arg2 & 0xFF;
          goto block_33;
        }
        goto block_36;
      }
    }
    else
    {
      var_v0 = 0 & 0xFF;
      if (((u32) ((var_t0 - 0x25) & 0xFF)) < 5U)
      {
        var_v0_6 = arg2 & 0xFF;
        __base_D_801C5EB0 = D_801C5EB0;
        block_33:
        var_a1 = *(__base_D_801C5EB0 + var_v0_6);

        block_34:
        *(D_801C7084 + temp_v1) = var_a1;

        var_t1 = 1;
        if ((*((u8 *) (((char *) D_801C7AB0) + 0))) == 4)
        {
          *(D_801C7084 + temp_v1) = var_a1 + 0x2E;
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
  return var_v0;
}

