inline static u8 __repair_inline(u8 a)
{
  return a;
}

s32 func_801FA30C();
extern char D_80189CC9[];
extern u8 D_8018A276;
extern char D_8018A277[];
s32 func_80149110(void)
{
  s32 var_a0;
  s32 __repair_phase_var_a0_2;
  s32 __repair_phase_var_a1;
  s32 var_s0;
  u8 var_a2;
  u8 var_a2_2;
  if (__repair_phase_var_a0_2 || __repair_phase_var_a1)
  {
    var_a2 = 0;
    var_s0 = 0;
  }
  else
  {
    var_a2 = 0;
    var_s0 = 0;
  }
  if (!(func_801FA30C() & 1))
  {
    var_a2_2 = 0xFF;
    __repair_phase_var_a0_2 = 0;
    do
    {
      if ((((u32) (var_a2_2 & 0xFF)) >= ((u8) (*(D_80189CC9 + (__repair_phase_var_a0_2 & 0xFF))))) && (!((*((u16 *) (D_8018A277 + (__repair_phase_var_a0_2 & 0xFF)))) & 0x10)))
      {
        var_s0 = __repair_phase_var_a0_2 & 0xFF;
        var_a2_2 = *((u16 *) (D_80189CC9 + var_s0));
        var_s0 = __repair_phase_var_a0_2;
      }
      __repair_phase_var_a0_2 += 1;
    }
    while (((u8) D_8018A276) >= ((u32) (__repair_phase_var_a0_2 & 0xFF)));
    return var_s0 & 0xFF;
  }
  __repair_phase_var_a1 = 0;
  do
  {
    if ((((u8) (*(D_80189CC9 + (__repair_phase_var_a1 & 0xFF)))) >= ((u32) (var_a2 & 0xFF))) && (!((unsigned char) ((*((u16 *) (D_8018A277 + (__repair_phase_var_a1 & 0xFF)))) & 0x10))))
    {
      var_a2 = __repair_inline(*((u16 *) (D_80189CC9 + (__repair_phase_var_a1 & 0xFF))));
      var_s0 = __repair_phase_var_a1;
    }
    do
    {
      do
      {
        do
        {
          __repair_phase_var_a1 += 1;
        }
        while (0);
      }
      while (0);
    }
    while (0);
  }
  while (((u8) D_8018A276) >= ((u32) (__repair_phase_var_a1 & 0xFF)));
  return var_s0 & 0xFF;
}

