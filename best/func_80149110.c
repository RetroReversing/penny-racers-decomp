s32 func_801FA30C();
extern char D_80189CC9[];
extern u8 D_8018A276;
extern char D_8018A277[];
inline static char *inline_fn(s32 arg0)
{
  return D_80189CC9 + arg0;
}

s32 func_80149110(void)
{
  s32 var_a0;
  s32 var_a0_2;
  s32 var_a1;
  s32 var_s0;
  u8 var_a2;
  u8 var_a2_2;
  var_s0 = 0;
  var_a2 = 0;
  if (!(func_801FA30C() & 1))
  {
    var_a2_2 = 0xFF;
    var_a1 = 0;
    var_a0 = 0 & 0xFF;
    do
    {
      if ((((u32) (var_a2_2 & 0xFF)) >= ((u8) (*(D_80189CC9 + var_a0)))) && (!((*(D_8018A277 + var_a0)) & 0x10)))
      {
        var_a2_2 = *(D_80189CC9 - (-var_a0));
        var_s0 = var_a1;
      }
      var_a1 += 1;
      var_a0 = var_a1 & 0xFF;
    }
    while (((u8) D_8018A276) >= ((u32) (var_a1 & 0xFF)));
    return var_s0 & 0xFF;
  }
  var_a0 = 0;
  var_a0_2 = 0 & 0xFF;
  do
  {
    if ((((u8) (*(D_80189CC9 + var_a0_2))) >= ((u32) (var_a2 & 0xFF))) && (!((*(D_8018A277 + var_a0_2)) & 0x10)))
    {
      var_a2 = *inline_fn(var_a0_2);
      var_s0 = var_a0;
    }
    var_a0 += 1;
    var_a0_2 = var_a0 & 0xFF;
  }
  while (((u8) D_8018A276) >= ((u32) (var_a0 & 0xFF)));
  return var_s0 & 0xFF;
}

