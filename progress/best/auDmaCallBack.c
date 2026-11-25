extern s32 D_80046C30;
extern s32 D_8005D088;
extern s32 D_8005D1A0;
extern s32 D_8005D7A4;
extern s32 D_8005D7A8;
extern s32 D_8005DCB0;
inline static s32 inline_fn(s32 *arg0, int arg1)
{
  return arg0[arg1];
}

s32 auDmaCallBack(s32 arg0_in, s32 arg1)
{
  s32 arg0;
  s32 *__base_D_8005D7A8;
  s32 *var_s1;
  s32 *var_s0;
  s32 temp_s2;
  s32 temp_s3;
  s32 temp_s0;
  s32 temp_a0_2;
  s32 *temp_a1;
  u8 *temp;
  var_s1 = (s32 *) D_8005D7A4;
  arg0 = arg0_in;
  var_s0 = NULL;
  while (var_s1 != NULL)
  {
    temp_s2 = inline_fn(var_s1, 2);
    if (arg0 >= temp_s2)
    {
      var_s0 = var_s1;
      if ((temp_s2 + 0x400) < (arg0 + arg1))
      {
        var_s1 = (s32 *) inline_fn(var_s1, 0);
        continue;
      }
      var_s1[3] = D_80046C30;
      return osVirtualToPhysical((inline_fn(var_s1, 4) + arg0) - inline_fn(var_s1, 2));
    }
    break;
  }

  __base_D_8005D7A8 = &D_8005D7A8;
  var_s1 = (s32 *) (*__base_D_8005D7A8);
  if (var_s1 == NULL)
  {
    return inline_fn((s32 *) D_8005D7A4, 4) - 0x80000000;
  }
  *__base_D_8005D7A8 = (s32) inline_fn(var_s1, 0);
  alUnlink(var_s1);
  if (var_s0 != NULL)
  {
    alLink(var_s1, (struct N **) var_s0);
  }
  else
  {
    var_s0 = (s32 *) D_8005D7A4;
    if (D_8005D7A4 != NULL)
    {
      D_8005D7A4 = (s32) var_s1;
      var_s1[0] = (s32) var_s0;
      var_s1[1] = 0;
      var_s0[1] = (s32) var_s1;
    }
    else
    {
      D_8005D7A4 = (s32) var_s1;
      var_s1[0] = 0;
      var_s1[1] = 0;
    }
  }
  temp_s0 = arg0 & 1;
  temp_a0_2 = osCartRomInit();
  temp = (u8 *) D_8005D1A0;
  temp_a1 = (s32 *) (temp + (D_8005DCB0 * 0x18));
  temp_s2 = inline_fn(var_s1, 4);
  temp_s3 = arg0 - temp_s0;
  var_s1[2] = temp_s3;
  do
  {
    D_8005DCB0 += 1; var_s1[3] = D_80046C30; temp_a1[1] = (s32) (&D_8005D088);
    ((s8 *) temp_a1)[2] = 0; temp_a1[2] = temp_s2; temp_a1[3] = temp_s3;
  }
  while (0);
  temp_a1[4] = 0x400;
  osEPiStartDma(temp_a0_2, (u8 *) temp_a1, 0);
  return osVirtualToPhysical(temp_s2) + temp_s0;
}

