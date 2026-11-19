s32 __osContRamRead(s32, s32, s32, s32 *);
s32 __osCheckId(void *);
s32 __osPfsSelectBank(void *);
s32 osPfsNumFiles(void *arg0, s32 *arg1, s32 *arg2)
{
  union 
  {
    unsigned char bytes[80];
    struct 
    {
      unsigned char pad[16];
      s32 value;
    } view_sp10;
    struct 
    {
      unsigned char pad[20];
      u16 value;
    } view_sp14;
  } m2c_initial_frame;
  s32 var_s1;
  s32 var_s2;
  volatile unsigned char var_v0;
  s32 __repair_result_var_v0;
  var_s2 = 0;
  if (!((*((s32 *) (((char *) arg0) + 0))) & 1))
  {
    return 5;
  }
  var_v0 = 2;
  if ((__osCheckId(arg0) != 2) && (((*((u8 *) (((char *) arg0) + 0x65))) == 0) || ((*((u8 *) (((char *) arg0) + 0x65)) = 0U, var_v0 = __osPfsSelectBank(arg0), var_v0 == 0))))
  {
    var_s1 = 0;
    if ((*((s32 *) (((char *) arg0) + 0x50))) > 0)
    {
      loop_6:
      __repair_result_var_v0 = __osContRamRead(*((s32 *) (((char *) arg0) + 4)), *((s32 *) (((char *) arg0) + 8)), ((*((s32 *) (((char *) arg0) + 0x5C))) + var_s1) & 0xFFFF, &m2c_initial_frame.view_sp10.value);

      if (__repair_result_var_v0 == 0)
      {
        if (m2c_initial_frame.view_sp14.value != 0)
        {
          var_s2 += m2c_initial_frame.view_sp10.value != 0;
        }
        var_s1 += 1;
        if (var_s1 >= (*((s32 *) (((char *) arg0) + 0x50))))
        {
          goto block_10;
        }
        if (m2c_initial_frame.view_sp14.value)
        {
          goto loop_6;
        }
        else
        {
          goto loop_6;
        }
      }
    }
    else
    {
      block_10:
      *arg2 = var_s2;

      var_v0 = 0;
      *arg1 = *((s32 *) (((char *) arg0) + 0x50));
    }
  }
  return var_v0;
}

