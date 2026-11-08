s32 func_8003F5B0();
s32 func_8003FD40();
s32 func_8004077C();
s32 __osBlockSum(void *arg0, u8 arg1, u16 *arg2, s8 arg3)
{
  s32 sp10;
  s32 temp_v0;
  s32 var_s1;
  *((s8 *) (((char *) arg0) + 0x65)) = arg3;
  temp_v0 = func_8004077C();
  var_s1 = 0;
  if (temp_v0 != 0)
  {
    return temp_v0;
  }
  loop_4:
  temp_v0 = func_8003F5B0(*((s32 *) (((char *) arg0) + 4)), *((s32 *) (((char *) arg0) + 8)), (((arg1 & 0xFF) * 8) + var_s1) & 0xFFFF, &sp10);

  if (temp_v0 == 0)
  {/*__repair_loop_weight*/do {do {do {
    var_s1 += 1;} while (0);} while (0);} while (0);
    *arg2 += func_8003FD40(&sp10);
    if (var_s1 >= 8)
    {
      if (arg0 || temp_v0)
      {
        *((s8 *) (((char *) arg0) + 0x65)) = 0;
        return func_8004077C(arg0);
      }
      else
      {
        *((s8 *) (((char *) arg0) + 0x65)) = 0;
        return func_8004077C(arg0);
      }
    }
    goto loop_4;
  }
  *((s8 *) (((char *) arg0) + 0x65)) = 0;
  func_8004077C(arg0);
  return temp_v0;
}

