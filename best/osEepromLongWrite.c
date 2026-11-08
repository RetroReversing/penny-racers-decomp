s32 osRecvMesg(s32 *, s32, s32);
s32 func_8003EF90(s32 *, s32, s32, s32 *, s32 *);
s32 func_80041410(s32, s32, s32);
extern s32 D_800DA1B0;
extern s32 D_800DAE20;
extern s32 D_800DDEA0;
s32 osEepromLongWrite(s32 arg0, s32 arg1, s32 arg2, s32 arg3)
{
  s32 var_s0;
  s32 var_s1;
  s32 var_s2;
  s32 var_s3;
  unsigned char var_v0;
  s32 __repair_result_var_v0;
  var_s3 = arg2;
  var_s1 = arg3;
  var_s2 = arg1;
  var_s0 = 0;
  if (var_s1 > 0)
  {
    loop_2:
    __repair_result_var_v0 = func_80041410(arg0, var_s2 & 0xFF, var_s3);

    var_s0 = __repair_result_var_v0;
    var_s1 -= 8;
    if (var_s0 == 0)
    {
      var_s2 += 1;
      var_s3 += 8;
      func_8003EF90(&D_800DAE20, 0, 0, &D_800DDEA0, &D_800DA1B0);
      osRecvMesg(&D_800DDEA0, 0, 1);
      if (var_s1 <= 0)
      {
        goto block_4;
      }
      goto loop_2;
    }
  }
  else
  {
    block_4:
    var_v0 = var_s0;

  }
  return var_v0;
}

