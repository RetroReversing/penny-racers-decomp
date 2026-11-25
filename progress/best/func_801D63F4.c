s32 func_8002D030(s32, s32, s32, s32);
s32 n_alSndpStop();
extern s32 D_801D7DF0;
extern s32 D_801D7DF1;
extern s32 D_801D7DF2;
extern u8 D_801D7DF4[];
extern s32 D_801D7DF8;
extern s32 D_801D7DFC;
extern u8 D_801D7E00[];
extern s32 D_801D7E04;
extern s32 D_801D7E06;
extern s32 D_801D7E08;
extern s32 D_801D7E09;
extern s32 D_801D7E16;
extern s32 D_801D7E18;
inline static s32 *inline_fn(s32 *arg0)
{
  return arg0;
}

inline static int inline_fn2(s32 arg0, int arg1)
{
  return arg0 & arg1;
}

void func_801D63F4(void)
{
  s32 temp_v1;
  s32 var_a0;
  s32 var_s0;
  
  unsigned short var_v0;
  do
  {
    var_s0 = 0;
  }
  while (0);
  var_v0 = inline_fn2(0, 0xFFFF);
  __repair_rows:
  {
    temp_v1 = var_v0 * 0xb;
    *((&D_801D7DF0) + temp_v1) = 0;
    *((&D_801D7DF1) + temp_v1) = 0;
    *((&D_801D7DF2) + temp_v1) = 0;
    *(D_801D7DF4 + temp_v1) = -1;
    *((&D_801D7DF8) + temp_v1) = 0;
    *((&D_801D7DFC) + temp_v1) = 0;
    *((D_801D7E00) + temp_v1) = 1.0f;
    *((&D_801D7E04) + temp_v1) = 0;
    *inline_fn((&D_801D7E06) + temp_v1) = 0x7FFF;
    *((&D_801D7E08) + temp_v1) = 0x40;
    *((&D_801D7E16) + temp_v1) = 0xFF;
    *((&D_801D7E09) + temp_v1) = 0;
    *((&D_801D7E18) + temp_v1) = 0;
    do
    {
      var_s0 += 1;
    }
    while (0);
    var_v0 = inline_fn2(var_s0, 0xFFFF);
  }

  if (((u32) inline_fn2(var_s0, 0xFFFF)) < 8U)
  {
    goto __repair_rows;
  }
var_s0 = 0;
do
  {
    func_8002D030((var_s0 << 0x10) >> 0x10, 0x40, 0x7FFF, -1);
    var_s0 += 1;
    n_alSndpStop();
  }
  while (((u32) inline_fn2(var_s0, 0xFFFF)) < 8U);
}

