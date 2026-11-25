s32 func_8013EC14(s32, f32, f32, f32);
s32 func_801FA30C();
extern s32 D_8011F2F0;
extern s32 D_8011F2FD;
extern s32 D_8011F32E;
inline static float inline_fn(f32 arg0)
{
  return arg0 * 12.0f;
}

inline static volatile unsigned short inline_fn2(f32 arg0)
{
  return (s32) arg0;
}

void func_8015DD80(s32 arg0)
{
  f32 temp_ft0;
  f32 temp_ft0_2;
  f32 temp_fv0;
  f32 temp_fv0_2;
  f32 temp_fv1;
  f32 temp_fv1_2;
  f32 temp_fv1_3;
  f32 temp_fv1_4;
  s32 temp_s0_2;
  s32 temp_s0_3;
  s32 temp_s0_4;
  s32 temp_s0_5;
  s32 temp_s0_6;
  s32 temp_s1;
  s32 temp_s1_3;
  s32 temp_s1_4;
  s32 temp_v0;
  s32 var_a1;
  s32 __repair_phase_var_a1;
  s32 var_a2;
  s32 __repair_phase_var_a2;
  s32 var_a3;
  u16 temp_v1;
  u8 *temp_s2;
  u8 temp_v1_2;
  void *temp_s0;
  temp_v0 = (arg0 & 0xFFFF) * 0x64;
  temp_s0 = temp_v0 + (&D_8011F2F0);
  temp_s2 = *((u8 **) (((char *) temp_s0) + 0x60));
  *((f32 *) (((char *) temp_s0) + 0x28)) = (f32) ((*((f32 *) (((char *) temp_s0) + 0x28))) + 10.0f);
  temp_v1 = *((&D_8011F32E) + temp_v0);
  if (!(temp_v1 != 0))
  {
    temp_v0 = arg0 & 0xFFFF;
    temp_ft0_2 = *((f32 *) (((char *) temp_s2) + 8));
    temp_fv1_3 = *((f32 *) (((char *) temp_s0) + 0x30));
    temp_fv0_2 = (((unsigned short) ((temp_ft0_2 * 6.0f) - temp_fv1_3)) * 0.3f) + inline_fn2(temp_fv1_3);
    temp_fv1_4 = *((f32 *) (((char *) temp_s0) + 0x34));
    do
    {
      func_8013EC14(temp_v0, temp_fv0_2, (((temp_ft0_2 * 12.0f) - temp_fv1_4) * 0.3f) + temp_fv1_4, temp_fv0_2);
    }
    while (0);
    if (((*((f32 *) (((char *) temp_s2) + 8))) * 4.2f) < (*((f32 *) (((char *) temp_s0) + 0x30))))
    {
      *((&D_8011F32E) + (temp_v0 * 0x64)) = 1;
    }
  }
  else
  {
    temp_s1 = arg0 & 0xFFFF;
    if (temp_v1 != 1)
    {
    }
    else
    {
      temp_ft0 = *((f32 *) (((char *) temp_s2) + 8));
      temp_fv1 = *((f32 *) (((char *) temp_s0) + 0x30));
      temp_fv0 = (((temp_ft0 * 6.0f) - temp_fv1) * 0.3f) + temp_fv1;
      temp_fv1_2 = *((f32 *) (((char *) temp_s0) + 0x34));
      do
      {
        func_8013EC14(temp_s1, temp_fv0, ((inline_fn(temp_ft0) - temp_fv1_2) * 0.3f) + temp_fv1_2, temp_fv0);
      }
      while (0);
      *((u8 *) (((char *) temp_s0) + 0xC)) = (u8) ((*((u8 *) (((char *) temp_s0) + 0xC))) - 4);
      if (((u8) (*((u8 *) (((char *) temp_s0) + 0xC)))) < 5U)
      {
        func_8013E49C(*((u16 *) (((char *) temp_s2) + 0x76)));
        *((&D_8011F2FD) + (temp_s1 * 0x64)) = 2;
      }
    }
  }
  temp_v1_2 = *((u8 *) (((char *) temp_s2) + 0x16));
  switch (temp_v1_2)
  {
    case 0:
      var_a1 = 0xFF;
      var_a2 = (func_801FA30C() & 0xF) + 0x40;
      var_a3 = 0;
      block_40:
    func_8013EA18(temp_s2, var_a1, var_a2, var_a3);

      return;

    case 1:
      var_a1 = 0xFF;
      var_a2 = 0;
      var_a3 = ((float) (func_801FA30C() & 0xF)) + 0x40;
    {
      func_8013EA18(temp_s2, var_a1, var_a2, var_a3);
      return;
    }

    case 2:
      var_a1 = 0;
      var_a2 = (func_801FA30C() & 0xF) + 0x40;
      var_a3 = 0xFF;
    {
      func_8013EA18(temp_s2, var_a1, var_a2, var_a3);
      return;
    }

    case 3:
      var_a1 = (func_801FA30C() & 0xF) + 0x40;
      var_a2 = 0;
      var_a3 = 0xFF;
    {
      func_8013EA18(temp_s2, var_a1, var_a2, var_a3);
      return;
    }

    case 4:
      var_a1 = (func_801FA30C() & 0xF) + 0x40;
      var_a2 = 0xFF;
      var_a3 = 0;
      goto block_40;

    case 5:
      var_a1 = 0;
      var_a2 = 0xFF;
      var_a3 = (func_801FA30C() & 0xF) + 0x40;
    {
      if (temp_fv1)
      {
        func_8013EA18(temp_s2, var_a1, var_a2, var_a3);
        return;
      }
      else
      {
        func_8013EA18(temp_s2, var_a1, var_a2, var_a3);
        return;
      }
    }

    case 6:
      var_a1 = 0xFF;
      var_a2 = 0xFF;
      var_a3 = (func_801FA30C() & 0xF) + 0x40;
    {
      func_8013EA18(temp_s2, var_a1, var_a2, var_a3);
      return;
    }

    case 7:
      var_a1 = 0xFF;
      var_a2 = (func_801FA30C() & 0xF) + 0x40;
      var_a3 = 0xFF;
    {
      func_8013EA18(temp_s2, var_a1, var_a2, var_a3);
      return;
    }

    case 8:
      var_a1 = (func_801FA30C() & 0xF) + 0x40;
      var_a2 = 0xFF;
      var_a3 = 0xFF;
      goto block_40;

    case 9:
      temp_s0_2 = (func_801FA30C() & 0xF) + 0x40;
      var_a1 = temp_s0_2;
      var_a2 = (func_801FA30C() & 0xF) + 0x40;
      var_a3 = 0xFF;
      goto block_40;

    case 10:
      temp_s0_3 = (func_801FA30C() & 0xF) + 0x40;
      __repair_phase_var_a1 = temp_s0_3;
      if (1)
    {
      var_a2 = 0xFF;
      var_a3 = (func_801FA30C() & 0xF) + 0x40;
    }
    {
      func_8013EA18(temp_s2, __repair_phase_var_a1, var_a2, var_a3);
      return;
    }

    case 11:
      temp_s0_4 = (func_801FA30C() & 0xF) + 0x40;
      __repair_phase_var_a2 = temp_s0_4;
      var_a1 = 0xFF;
      var_a3 = (func_801FA30C() & 0xF) + 0x40;
    {
      func_8013EA18(temp_s2, var_a1, __repair_phase_var_a2, var_a3);
      return;
    }

    case 12:
      temp_s0_5 = (func_801FA30C() & 0xF) + 0x40;
      temp_s1_3 = (func_801FA30C() & 0xF) + 0x40;
      var_a2 = temp_s1_3;
      var_a1 = temp_s0_5;
      var_a3 = (func_801FA30C() & 0xF) + 0x40;
      goto block_40;

    default:
      temp_s1_4 = func_801FA30C() & 0xFF;
      temp_s0_6 = func_801FA30C() & 0xFF;
      var_a1 = temp_s1_4;
      var_a2 = temp_s0_6;
      var_a3 = func_801FA30C() & 0xFF;
      goto block_40;

  }

}

