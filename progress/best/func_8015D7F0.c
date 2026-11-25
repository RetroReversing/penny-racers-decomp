s32 func_8013EC48(s32, f32);
s32 func_801FA30C();
extern char D_8011F2F0[];
extern char D_8011F2FD[];
extern char D_8011F32E[];
inline static f32 *inline_fn(void *arg0)
{
  return (f32 *) (((char *) arg0) + 0x28);
}

void func_8015D7F0(unsigned char arg0_in)
{
  s32 arg0;
  char *__base_D_8011F32E;
  f32 temp_ft0_2;
  s32 temp_s0_2;
  f32 temp_ft0;
  s32 temp_s0_3;
  s32 temp_s0_4;
  s32 temp_s0_5;
  s32 temp_s0_6;
  s32 temp_s1;
  s32 temp_s1_2;
  s32 temp_s1_3;
  s32 temp_s1_4;
  s32 temp_v0;
  s32 var_a1_0;
  short var_a1_1;
  s32 var_a1_2;
  s32 var_a1_3;
  s32 var_a1_4;
  s32 var_a1_5;
  s32 var_a1_6;
  s32 var_a1_7;
  s32 var_a1_8;
  s32 var_a1_9;
  s32 var_a1_10;
  s32 var_a1_11;
  s32 var_a1_12;
  int var_a1_default;
  s32 var_a2;
  s32 __repair_phase_var_a2;
  s32 var_a3;
  u16 temp_v1;
  u8 *temp_s2;
  u8 temp_v1_2;
  volatile unsigned char pad;
  void *temp_s0;
  if (var_a3)
  {
    temp_s0_2 = arg0 & 0xFFFF;
    temp_v0 = temp_s0_2 * 0x64;
    arg0 = arg0_in;
    temp_s0 = temp_v0 + D_8011F2F0;
    temp_s2 = *((u8 **) (((char *) temp_s0) + 0x60));
    *inline_fn(temp_s0) -= 10.0f;
    __base_D_8011F32E = D_8011F32E;
    temp_v1 = *((u16 *) (D_8011F32E + temp_v0));
  }
  else
  {
    temp_s0_2 = arg0 & 0xFFFF;
    temp_v0 = temp_s0_2 * 0x64;
    arg0 = arg0_in;
    temp_s0 = temp_v0 + D_8011F2F0;
    temp_s2 = *((u8 **) (((char *) temp_s0) + 0x60));
    *inline_fn(temp_s0) -= 10.0f;
    __base_D_8011F32E = D_8011F32E;
    temp_v1 = *((u16 *) (D_8011F32E + temp_v0));
  }
  if (!(temp_v1 != 0))
  {
    temp_s1_2 = arg0 & 0xFFFF;
    temp_ft0_2 = *((f32 *) (((char *) temp_s0) + 0x30));
    func_8013EC48(temp_s1_2, temp_ft0_2 + ((((*((f32 *) (((char *) temp_s2) + 8))) * 12.0f) - temp_ft0_2) * 0.3f));
    *((f32 *) (((char *) temp_s2) + 0x70)) = (f32) ((*((f32 *) (((char *) temp_s0) + 0x30))) * 15.0f);
    func_8013EDFC(temp_s1_2, temp_s2);
    if (((*((f32 *) (((char *) temp_s2) + 8))) * 9.8f) < (*((f32 *) (((char *) temp_s0) + 0x30))))
    {
      *((u16 *) (D_8011F32E + (temp_s1_2 * 0x64))) = 1;
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
      temp_ft0 = *((f32 *) (((char *) temp_s0) + 0x30));
      func_8013EC48(temp_s1, ((((*((f32 *) (((char *) temp_s2) + 8))) * 12.0f) - temp_ft0) * 0.3f) + temp_ft0);
      *((f32 *) (((char *) temp_s2) + 0x70)) = (f32) ((*((f32 *) (((char *) temp_s0) + 0x30))) * 15.0f);
      *((u8 *) (((char *) temp_s0) + 0xC)) -= 4;
      if (((u8) (*((u8 *) (((char *) temp_s0) + 0xC)))) < 5U)
      {
        func_8013E49C(*((u16 *) (((char *) temp_s2) + 0x76)));
        *(D_8011F2FD + (temp_s1 * 0x64)) = 2;
      }
    }
  }
  temp_v1_2 = *((u8 *) (((char *) temp_s2) + 0x16));
  switch (temp_v1_2)
  {
    case 0:
      var_a1_0 = 0xFF;
      temp_s0_2 = func_801FA30C() & 0xF;
      var_a2 = temp_s0_2 + 0xB4;
      var_a3 = 0;
      func_8013EA18(temp_s2, var_a1_0, var_a2, var_a3);
      return;

    case 1:
      var_a1_1 = 0xFF;
      var_a2 = 0;
      var_a3 = (func_801FA30C() & 0xF) + 0xB4;
      do
    {
      func_8013EA18(temp_s2, var_a1_1, var_a2, var_a3);
      return;
    }
    while (0);

    case 2:
      var_a1_2 = 0;
      var_a2 = (func_801FA30C() & 0xF) + 0xB4;
      var_a3 = 0xFF;
      func_8013EA18(temp_s2, var_a1_2, var_a2, var_a3);
      return;

    case 3:
      var_a1_3 = (func_801FA30C() & 0xF) + 0xB4;
      var_a2 = 0;
      var_a3 = 0xFF;
      func_8013EA18(temp_s2, var_a1_3, var_a2, var_a3);
      return;

    case 4:
      var_a1_4 = (func_801FA30C() & 0xF) + 0xB4;
      var_a3 = 0;
      var_a2 = 0xFF;
      func_8013EA18(temp_s2, var_a1_4, var_a2, var_a3);
      return;

    case 5:
      var_a1_5 = 0;
      var_a2 = 0xFF;
      var_a3 = (func_801FA30C() & 0xF) + 0xB4;
 do { func_8013EA18(temp_s2, var_a1_5, var_a2, var_a3); } while (0);
      return;

    case 6:
      var_a1_6 = 0xFF;
      var_a2 = 0xFF;
      temp_s1_4 = func_801FA30C() & 0xF;
      var_a3 = temp_s1_4 + 0xB4;
      func_8013EA18(temp_s2, var_a1_6, var_a2, var_a3);
      return;

    case 7:
      var_a1_7 = 0xFF;
      var_a2 = (func_801FA30C() & 0xF) + 0xB4;
      var_a3 = 0xFF;
      func_8013EA18(temp_s2, var_a1_7, var_a2, var_a3);
      return;

    case 8:
      var_a1_8 = (func_801FA30C() & 0xF) + 0xB4;
      var_a2 = 0xFF;
      var_a3 = 0xFF;
      func_8013EA18(temp_s2, var_a1_8, var_a2, var_a3);
      return;

    case 9:
      temp_s0_2 = (func_801FA30C() & 0xF) + 0xB4;
      var_a1_9 = temp_s0_2;
      var_a2 = (func_801FA30C() & 0xF) + 0xB4;
      var_a3 = 0xFF;
      func_8013EA18(temp_s2, var_a1_9, var_a2, var_a3);
      return;

    case 10:
      temp_s0_3 = (func_801FA30C() & 0xF) + 0xB4;
      var_a1_10 = temp_s0_3;
      var_a2 = 0xFF;
      var_a3 = (func_801FA30C() & 0xF) + 0xB4;
      func_8013EA18(temp_s2, var_a1_10, var_a2, var_a3);
      return;

    case 11:
      temp_s0_4 = (func_801FA30C() & 0xF) + 0xB4;
      var_a1_11 = 0xFF;
      var_a2 = temp_s0_4;
      var_a3 = (func_801FA30C() & 0xF) + 0xB4;
      do
    {
      func_8013EA18(temp_s2, var_a1_11, var_a2, var_a3);
      return;
    }
    while (0);

    case 12:
      temp_s0_5 = (func_801FA30C() & 0xF) + 0xB4;
      do
    {
      temp_s1_3 = (func_801FA30C() & 0xF) + 0xB4; var_a2 = temp_s1_3; var_a1_12 = temp_s0_5; var_a3 = (func_801FA30C() & 0xF) + 0xB4;
    }
    while (0);
      func_8013EA18(temp_s2, var_a1_12, var_a2, var_a3);
      return;

    default:
      temp_s1_4 = func_801FA30C() & 0xFF;
      temp_s0_6 = func_801FA30C() & 0xFF;
      var_a1_default = temp_s1_4;
      __repair_phase_var_a2 = temp_s0_6;
      var_a3 = func_801FA30C() & 0xFF;
      func_8013EA18(temp_s2, var_a1_default, __repair_phase_var_a2, var_a3);
      return;

  }

}
