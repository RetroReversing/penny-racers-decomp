extern u8 D_801C7469;
extern void *D_801C7AB0;
extern char D_801C7AD8[];
inline static int inline_fn(char arg0)
{
  return (arg0 & 0xFF) == 2;
}

inline static unsigned inline_fn2(int arg0)
{
  return arg0 >> 0x18;
}

u8 func_801C5528(u8 *arg0_in, u8 *arg1, s32 arg2)
{
  u8 *arg0;
  int __repair_constant = 0x7F;
  unsigned char temp_v0;
  unsigned var_a0_2;
  register unsigned char var_a3;
  u8 var_a0;
  register u8 temp_v1;
  u8 var_v0;
  u8 __repair_result_var_v0;
  var_a3 = 0;
  temp_v0 = arg2 & 0xFF;
  arg0 = arg0_in;
  if (D_801C7469 == temp_v0)
  {
    if (D_801C7469 == 0)
    {
      {
        var_a0 = *arg0;
      }
      if (__repair_result_var_v0 || arg0)
      {
        var_a3 = (*arg1) - 1;
        goto block_18;
      }
      else
      {
        var_a3 = (*arg1) - 1;
        goto block_18;
      }
    }
    if (((unsigned char) (arg2 & 0xFF)) == 1)
    {
      var_a0 = (*arg0) - 1;
      goto block_17;
    }
    if (((arg2 & 0xFF) == 2))
    {
      do
      {
        {
          {
            {
              var_a0 = *arg0;
            }
          }
        }
      }
      while (0);
      var_a3 = (*arg1) + 1;
      goto block_18;
    }
    do
    {
      var_a0_2 = 0 << 0x18;
      if ((arg2 & 0xFF) == 3)
      {
        var_a0 = (*arg0) + 1;
        goto block_17;
      }
    }
    while (0);
  }
  else
  {
    if (!temp_v0)
    {
      var_a0 = *arg0;
 do { var_a3 = (*arg1) - 2; } while (0);
      goto block_18;
    }
    if ((arg2 & 0xFF) == 1)
    {
      var_a0 = (*arg0) - 2;
      goto block_17;
    }
    if (((arg2 & 0xFF) == 2))
    {
      if (D_801C7AB0)
      {
        var_a0 = *arg0;
        var_a3 = (*arg1) + 2;
        goto block_18;
      }
      else
      {
        do
        {
          var_a0 = *arg0;
          var_a3 = (*arg1) + 2;
          goto block_18;
        }
        while (0);
      }
    }
    var_a0_2 = 0 << 0x18;
    if ((arg2 & 0xFF) == 3)
    {
      var_a0 = (*arg0) + 2;
      block_17:
      var_a3 = *arg1;

      block_18:
      var_a0_2 = var_a0 << 0x18;

    }
  }
  temp_v1 = *(D_801C7AD8 + (((short) (((s8) var_a3) * 0x18)) + inline_fn2(var_a0_2)));
  var_v0 = temp_v1;
  if (temp_v1 == 0xFF)
  {
    *arg0 = 0x7F;
    *arg1 = 0x7F;
    __repair_result_var_v0 = *((u8 *) (((char *) D_801C7AB0) + 2));
  }
  return __repair_result_var_v0;
}
