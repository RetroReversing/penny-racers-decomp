extern char D_801C5EA8[];
extern char D_801C5EB0[];
extern char D_801C5EB8[];
extern char D_801C5EC0[];
extern char D_801C5EC8[];
extern char D_801C5ED0[];
extern char D_801C7084[];
extern void * volatile D_801C7AB0;
inline static int inline_fn(s32 arg0)
{
  return (arg0 - 0x25) & 0xFF;
}

s32 func_801C34CC(s32 arg0)
{
  u8 *__base_D_801C7084;
  s32 __index_D_801C7084;
  s32 temp_v0;
  s32 __repair_phase_temp_v0;
  s32 temp_v0_3;
  s32 var_a0;
  unsigned char __repair_phase_var_v0;
  s32 var_v0_2;
  s32 var_v1;
  __base_D_801C7084 = 0;
  temp_v0 = 0xFF;
  if ((arg0 & 0xFF) != (*((u8 *) (((char *) D_801C7AB0) + 2))))
  {
    if ((*((u8 *) (((char *) D_801C7AB0) + 0))) == 3)
    {
      var_a0 = 0;
      var_v1 = *(D_801C7084 + ((arg0 & 0xFF) * 5));
    }
    else
    {
      do
      {
        if (__index_D_801C7084 || D_801C7AB0)
        {
          __index_D_801C7084 = (arg0 & 0xFF) * 5;
          __base_D_801C7084 = D_801C7084;
          var_v1 = (*(__base_D_801C7084 + __index_D_801C7084)) - 0x2E;
        }
        else
        {
          __index_D_801C7084 = (arg0 & 0xFF) * 5;
          __base_D_801C7084 = D_801C7084;
          var_v1 = (*(__base_D_801C7084 + __index_D_801C7084)) - 0x2E;
        }
      }
      while (0);
      var_a0 = 0;
    }
    for (;;)
    {
      __repair_phase_temp_v0 = var_a0 & 0xFF;
      if (((u32) (var_v1 & 0xFF)) < 5U)
      {
        var_v0_2 = *(D_801C5EA8 + __repair_phase_temp_v0);
        goto block_17;
      }
      if (((u32) ((var_v1 - 5) & 0xFF)) < 5U)
      {
        var_v0_2 = *(D_801C5EB0 + __repair_phase_temp_v0);
        goto block_17;
      }
      temp_v0_3 = var_a0 & 0xFF;
      if (((u32) ((var_v1 - 0x16) & 0xFF)) < 5U)
      {
        var_v0_2 = *(D_801C5EB8 + temp_v0_3);
        goto block_17;
      }
      if (((u32) ((var_v1 - 0x1B) & 0xFF)) < 5U)
      {
        var_v0_2 = *(D_801C5EC0 + temp_v0_3);
        goto block_17;
      }
      __repair_phase_var_v0 = var_a0 & 0xFF;
      temp_v0_3 = __repair_phase_var_v0;
      if (((u32) ((var_v1 - 0x20) & 0xFF)) < 5U)
      {
        var_v0_2 = *(D_801C5EC8 + temp_v0_3);
        goto block_17;
      }
      if (((u32) inline_fn(var_v1)) < 5U)
      {
        var_v0_2 = *(D_801C5ED0 + temp_v0_3);
        block_17:
        temp_v0 = var_a0 & 0xFF;

        if (var_v0_2 != ((s8) var_v1))
        {
          goto block_18;
        }
      }
      else
      {
        block_18:
        var_a0 += 1;

        if (arg0)
        {
          temp_v0 = var_a0 & 0xFF;
        }
        else
        {
          temp_v0 = var_a0 & 0xFF;
        }
        if (((u32) (var_a0 & 0xFF)) < 5U)
        {
          continue;
        }
      }
      break;
    }

  }
  return temp_v0;
}

