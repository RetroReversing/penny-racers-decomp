s32 func_80146E4C();
extern char D_800DA26A[];
extern char D_80187BF0[];
extern u16 D_80187C00;
extern char D_80203080[];
void func_8014A9F4(s32 arg0, s32 arg1)
{
  s32 temp_a1;
  s32 __repair_phase_temp_a1;
  s32 var_a2;
  s32 var_v1;
  u16 *temp_v1;
  if (!(arg0 & 0x700))
  {
s32 __block_var_a2;

    __block_var_a2 = 0;
    temp_a1 = 0 * 2;
    do
    {
      *(temp_a1 + D_80187BF0) = *(temp_a1 + (((arg0 & 0xFF) * 0x12) + ((arg1 * 0x178) + (D_800DA26A + 0x64))));
      do
      {
        if (arg0)
        {
          __block_var_a2 += 1;
        }
        else
        {
          __block_var_a2 += 1;
        }
      }
      while (0);
      temp_a1 = __block_var_a2 * 2;
    }
    while (__block_var_a2 < 8);
  }
  else
  {
    var_a2 = *(D_80203080 + ((func_80146E4C(arg0 & 0xFFFF) & 0xFFFF) * 4));
    temp_a1 = 0;
    var_v1 = 0 * 2;
    loop_5:
    temp_v1 = (char *)(var_v1); temp_v1 += (s32)(var_a2);

    *(var_v1 + D_80187BF0) = *temp_v1;
    if ((*temp_v1) != 0xFFFF)
    {
      temp_a1 += 1;
      var_v1 = temp_a1 * 2;
      if (temp_a1 >= 8)
      {
      }
      else
      {
        goto loop_5;
      }
    }
  }
  D_80187C00 = 0xFFFF;
}

