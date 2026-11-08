s32 func_8003F5B0(s32, s32, s32, void *);
s32 func_8003F980(s32, s32, s32, void *, s32);
s32 func_8004077C();
s32 __osPfsRWInode(void *arg0, void *arg1, s32 arg2, s32 arg3)
{
  s32 temp_a2;
  s32 temp_a3;
  
  s32 var_a1_2;
  s32 var_s0;
  s32 var_s0_2;
  s32 var_s0_3;
  s32 var_s5;
s32 __repair_phase_var_s5;
  s32 var_v0;
  s32 var_v0_2;
  s32 var_v1;
  s32 __repair_result_var_v1;
  u8 *var_a1;
  u8 *var_a2;
  u8 temp_v0;
  u8 temp_v0_2;
  u8 var_v1_2;
  void *temp_a3_2;
  
  void *temp_a3_4;
  void *temp_s2;
  void *var_s2;
  void *var_s2_2;
  void *var_s2_3;
  if (((*((u8 *) (((char *) arg0) + 0x65))) == 0) || ((*((u8 *) (((char *) arg0) + 0x65)) = 0U, var_v0 = func_8004077C(), var_v0 == 0)))
  {
    var_s5 = 1;
    if (!(arg3 & 0xFF))
    {
      var_s5 = *((s32 *) (((char *) arg0) + 0x60));
    }
    var_s0 = 0;
    if ((arg2 & 0xFF) == 1)
    {
      var_a1 = (var_s5 * 2) + arg1;
      temp_a3 = 0;
      temp_a2 = (0x80 - var_s5) * 2;
      var_v1_2 = 0;
      if (temp_a2 > 0)
      {
        __repair_rows:
        {
          temp_v0 = *var_a1;
          var_a1 += 1;
          temp_a3 += 1;
          var_v1_2 = (var_v1_2 + temp_v0) & 0xFFFF;
        }

        if (temp_a3 < temp_a2)
        {
          goto __repair_rows;
        }
      }
      *((u8 *) (((char *) arg1) + 1)) = var_v1_2;
      var_s0 = 0;
    }
    temp_a2 = (arg3 & 0xFF) * 8;
    var_v0_2 = 0 << 5;
    loop_9:
    temp_s2 = arg1 + var_v0_2;

    if ((arg2 & 0xFF) == 1)
    {
      func_8003F980(*((s32 *) (((char *) arg0) + 4)), *((s32 *) (((char *) arg0) + 8)), (((*((s32 *) (((char *) arg0) + 0x54))) + temp_a2) + var_s0) & 0xFFFF, temp_s2, 0);
      __repair_result_var_v1 = func_8003F980(*((s32 *) (((char *) arg0) + 4)), *((s32 *) (((char *) arg0) + 8)), (((*((s32 *) (((char *) arg0) + 0x58))) + temp_a2) + var_s0) & 0xFFFF, temp_s2, 0);
    }
    else
    {
      var_v1 = func_8003F5B0(*((s32 *) (((char *) arg0) + 4)), *((s32 *) (((char *) arg0) + 8)), (((*((s32 *) (((char *) arg0) + 0x54))) + temp_a2) + var_s0) & 0xFFFF, temp_s2);
    }
    var_s0 += 1;
    if (var_v1 == 0)
    {
      var_v0_2 = var_s0 << 5;
      if (var_s0 >= 8)
      {
        var_v0 = 0;
        if (!(arg2 & 0xFF))
        {
          temp_a2 = 0;
          var_a2 = (var_s5 * 2) + arg1;
          temp_a3 = (0x80 - var_s5) * 2;
          var_a1_2 = 0;
          if (var_v1 <= (temp_a3 - 1))
          {
            __repair_rows_: {
              __repair_phase_var_s5 = (u8) (*var_a2);
              var_a2 += 1;
              var_a1_2 += 1;
              temp_a2 = (temp_a2 + __repair_phase_var_s5) & 0xFFFF;
            }
if (var_a1_2 < temp_a3) goto __repair_rows_;
          }
          var_s0_2 = 0;
          if ((temp_a2 & 0xFF) != (*((u8 *) (((char *) arg1) + 1))))
          {
            var_s2 = arg1;
            do
            {
              temp_a3_2 = var_s2;
              var_s2 += 0x20;
              func_8003F5B0(*((s32 *) (((char *) arg0) + 4)), *((s32 *) (((char *) arg0) + 8)), (((*((s32 *) (((char *) arg0) + 0x58))) + ((arg3 & 0xFF) * 8)) + var_s0_2) & 0xFFFF, temp_a3_2);
              var_s0_2 += 1;
            }
            while (var_s0_2 < 8);
            var_v0 = 3;
            if ((temp_a2 & 0xFF) == (*((u8 *) (((char *) arg1) + 1))))
            {
              var_s0_3 = 0;
              var_s2_2 = arg1;
              do
              {
                temp_a3_2 = var_s2_2;
                var_s2_2 += 0x20;
                func_8003F980(*((s32 *) (((char *) arg0) + 4)), *((s32 *) (((char *) arg0) + 8)), (((*((s32 *) (((char *) arg0) + 0x54))) + ((arg3 & 0xFF) * 8)) + var_s0_3) & 0xFFFF, temp_a3_2, 0);
                var_s0_3 += 1;
              }
              while (var_s0_3 < 8);
              return 0;
            }
            return var_v0;
          }
          var_s2_3 = arg1;
          do
          {
            temp_a3_4 = var_s2_3;
            var_s2_3 += 0x20;
            func_8003F980(*((s32 *) (((char *) arg0) + 4)), *((s32 *) (((char *) arg0) + 8)), (((*((s32 *) (((char *) arg0) + 0x58))) + ((arg3 & 0xFF) * 8)) + var_s0_2) & 0xFFFF, temp_a3_4, 0);
            var_s0_2 += 1;
            var_v0 = 0;
          }
          while (var_s0_2 < 8);
          return var_v0;
        }
        return var_v0;
      }
      goto loop_9;
    }
    return var_v1;
  }
  return var_v0;
}

