extern char D_801C7080[];
extern char D_801C7082[];
extern char D_801C7083[];
extern char D_801C7084[];
extern u8 *D_801C7AB0;
inline static int inline_fn(s32 arg0, int arg1)
{
  return (arg0 & arg1) * 5;
}

void func_801C2FFC(s32 arg0, u8 arg1, u8 *arg2, u8 *arg3)
{
  char *__base_D_801C7084;
  s32 temp_a0;
  s32 temp_v1;
  s32 var_a0;
  s32 var_v0;
  s32 var_v0_2;
  s32 var_v0_4;
  s32 var_v0_5;
  s32 var_v1;
  s32 __repair_result_var_v1;
  s32 var_v1_2;
  s8 var_v0_3;
  s32 var_t0;
  u8 var_v0_6;
  u8 var_v0_7;
  if ((*D_801C7AB0) != 3)
  {
    var_t0 = (*(__base_D_801C7084 + inline_fn(arg1, 0xFF))) - 0x2E;
    var_v0 = arg0 & 0xFF;
  }
  else
  {
    __base_D_801C7084 = D_801C7084;
    var_t0 = *(__base_D_801C7084 + inline_fn(arg1, 0xFF));
    var_v0 = arg0 & 0xFF;
  }
  if ((*(D_801C7080 + (var_v0 * 5))) != 0)
  {
    s32 var_a0_arm;
    s8 var_v0_3_arm;
    if (!((*((u16 *) (D_801C7080 + inline_fn(arg0, 0xFF)))) != 1))
    {
      var_a0 = arg1 & 0xFF;
      if (((((u32) (var_t0 & 0xFF)) + 1) <= 5U) || ((var_a0 = arg1 & 0xFF, (((u32) ((var_t0 - 0x16) & 0xFF)) < 0xAU) != 0)))
      {
        var_v1 = var_a0 * 5;
        var_v0_3_arm = 1;
        goto block_45;
      }
      if (((u32) ((var_t0 - 0xD) & 0xFF)) < 3U)
      {
        var_v1 = inline_fn(arg1, 0xFF);
        var_v0_3_arm = 2;
        goto block_45;
      }
      var_v1_2 = arg1 & 0xFF;
      if (((((u32) ((var_t0 - 0x13) & 0xFF)) + 1) - 1) >= ((3U + 1) - 1))
      {
        var_v0_2 = arg1 & 0xFF;
        if (((s8) var_t0) == 0x2C)
        {
          var_v1 = var_v0_2 * 5;
          var_v0_3_arm = 1;
          goto block_45;
        }
      }
      else
      {
        goto block_42;
      }
    }
    else
      if ((*(D_801C7080 + inline_fn(arg0, 0xFF))) != 2)
    {
      var_v0_2 = arg1 & 0xFF;
      if ((*(D_801C7080 + inline_fn(arg0, 0xFF))) == 3)
      {
        var_v0_2 = arg1 & 0xFF;
        if ((((u32) (var_t0 & 0xFF)) >= 5U) && ((var_v0_2 = arg1 & 0xFF, (((u32) ((var_t0 - 0x16) & 0xFF)) < 0xAU) == 0)))
        {
          if (((u32) ((var_t0 - 0xA) & 0xFF)) < 3U)
          {
            var_v1 = inline_fn(arg1, 0xFF);
            var_v0_3_arm = 2;
            goto block_45;
          }
          if (((u32) ((var_t0 - 0x10) & 0xFF)) < 3U)
          {
            goto block_41;
          }
          var_v0_2 = arg1 & 0xFF;
          if (((s8) var_t0) == 0x2D)
          {
            if (var_t0)
            {
              goto block_44;
            }
            else
            {
              goto block_44;
            }
          }
        }
        else
        {
          goto block_44;
        }
      }
    }
    else
    {
      var_v0_4 = arg1 & 0xFF;
      if ((((u32) ((var_t0 - 5) & 0xFF)) < 5U) || ((var_v0_4 = arg1 & 0xFF, (((u32) ((var_t0 - 0x20) & 0xFF)) < 0xAU) != 0)))
      {
        do
        {
          var_v1 = var_v0_4 * 5;
        }
        while (0);
        var_v0_3_arm = 2;
        goto block_45;
      }
      if (((u32) ((var_t0 - 0x10) & 0xFF)) < 3U)
      {
        var_v1 = inline_fn(arg1, 0xFF);
        var_v0_3_arm = 1;
        goto block_45;
      }
      var_v0_2 = (unsigned short) (arg1 & 0xFF);
      if (((u32) ((var_t0 - 0x13) & 0xFF)) >= 3U)
      {
        var_v0_2 = arg1 & 0xFF;
        if (((s8) var_t0) == 0x2B)
        {
          var_v1 = var_v0_2 * 5;
          var_v0_3_arm = 2;
          goto block_45;
        }
      }
      else
      {
        goto block_44;
      }
    }
  }
  else
    if ((((u32) ((var_t0 - 5) & 0xFF)) >= 5U) && (((u32) ((var_t0 - 0x20) & 0xFF)) >= 0xAU))
  {
    if (((u32) ((var_t0 - 0xA) & 0xFF)) < 3U)
    {
      var_v0_3 = 1;
      __repair_result_var_v1 = inline_fn(arg1, 0xFF);
      goto block_45;
    }
    if (var_t0)
    {
      var_v0_2 = arg1 & 0xFF;
    }
    else
    {
      var_v0_2 = arg1 & 0xFF;
    }
    if (((u32) ((((short) var_t0) - 0xD) & 0xFF)) < 3U)
    {
      block_44:
      var_v1 = var_v0_2 * 5;

      var_v0_3 = 3;
      block_45:
      *(D_801C7080 + var_v1) = var_v0_3;

      var_v0_2 = arg1 & 0xFF;
    }
    else
    {
      var_v0_2 = arg1 & 0xFF;
      if (((s8) var_t0) == 0x2A)
      {
        var_v1_2 = arg1 & 0xFF;
        goto block_42;
      }
    }
  }
  else
  {
    block_41:
    var_v1_2 = arg1 & 0xFF;

    block_42:
    *(D_801C7080 + (var_v1_2 * 5)) = 0;

    var_v0_2 = arg1 & 0xFF;
  }
  var_v0_2 *= 5;
  if ((*(D_801C7080 + var_v0_2)) != 0)
  {
    var_a0 = inline_fn(arg1, 0xFF);
    if ((*(D_801C7080 + var_a0)) != 1)
    {
      temp_a0 = inline_fn(arg1, 0xFF);
      if ((*(D_801C7080 + temp_a0)) != 2)
      {
        var_a0 = inline_fn(arg1, 0xFF);
        if ((*(D_801C7080 + var_a0)) == 3)
        {
          var_v0_6 = (*((u16 *) (D_801C7082 + var_a0))) + 1;
          goto block_60;
        }
      }
      else
      {
        do
        {
          var_v0_7 = (*(D_801C7083 + temp_a0)) + 1;
        }
        while (0);
        *arg2 = *(D_801C7082 + temp_a0);
        goto block_61;
      }
    }
    else
    {
      var_v0_6 = (*(D_801C7082 + var_a0)) - 1;
      block_60:
      *arg2 = var_v0_6;

      var_v0_7 = *(D_801C7083 + var_a0);
      goto block_61;
    }
  }
  else
  {
    *arg2 = *(D_801C7082 + var_v0_2);
    var_v0_7 = (*(D_801C7083 + var_v0_2)) - 1;
    block_61:
    *arg3 = var_v0_7;

  }
}

