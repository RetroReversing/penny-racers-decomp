s32 func_800DE41C(s32, s32, s32, s32, s32, s32, s32 *, s32 *, s32 *, f32, f32, f32, s32, s32, s32, f32, f32, f32);
extern s32 D_8011F2F0;
extern s32 D_8011F2F2;
extern s32 D_8011F2FD;
extern s32 D_8011F2FE;
extern s32 D_8011F32E;
extern s32 D_8011F334;
extern s32 D_8011F338;
extern s32 D_8011F33C;
extern s32 D_8011F350;
extern s32 D_8011F4E4;
extern s32 D_802390C8;
extern s32 func_8013AF08;
extern s32 func_8015FD04;
unsigned int func_8015EC58(s32 arg0)
{
  f32 temp_ft0;
  f32 temp_ft0_2;
  f32 temp_ft0_3;
  f32 temp_fv0;
  f32 temp_fv0_2;
  f32 temp_fv1;
  f32 temp_fv1_2;
  s16 var_v0_2;
  s32 temp_a0_2;
  s32 temp_a0_3;
  s32 temp_v0_4;
  s32 temp_v0_8;
  s32 temp_v0_9;
  s32 var_v0;
  s32 var_v1;
  u16 temp_v0_3;
  u16 temp_v1_2;
  void *temp_a0;
  void *temp_a1;
  void *temp_s0;
  void *temp_s2;
  void *temp_v0;
  void *temp_v0_2;
  void *temp_v0_5;
  void *temp_v0_6;
  void *temp_v0_7;
  void *temp_v1;
  void *temp_v1_3;
  void *temp_v1_4;
  void *temp_v1_5;
  void *temp_v1_6;
  temp_s0 = *((&D_8011F350) + ((arg0 & 0xFFFF) * 0x64));
  temp_a0 = *((void **) (((char *) temp_s0) + 4));
  temp_a1 = ((*((u16 *) (((char *) temp_a0) + 2))) * 0x64) + (&D_8011F4E4);
  temp_s2 = *((void **) (((char *) temp_a1) + 0x50));
  *((s8 *) (((char *) temp_a0) + 0x8D1)) = 0x78;
  temp_ft0 = *((f32 *) (((char *) temp_s0) + 8));
  *((f32 *) (((char *) temp_s0) + 8)) = (f32) (((2.0f - temp_ft0) * 0.2f) + temp_ft0);
  temp_v1 = *((void **) (((char *) temp_s0) + 4));
  if ((*((s32 *) (((char *) temp_v1) + 0x890))) != 0)
  {
    if ((*((f32 *) (((char *) temp_v1) + 0x748))) < 3000.0f)
    {
      *((f32 *) (((char *) temp_v1) + 0x748)) = 3000.0f;
    }
    temp_v0 = *((void **) (((char *) temp_s0) + 4));
    *((f32 *) (((char *) temp_v0) + 0x748)) = (f32) ((*((f32 *) (((char *) temp_v0) + 0x748))) + 100.0f);
    temp_v0_2 = *((void **) (((char *) temp_s0) + 4));
    if ((*((f32 *) (((char *) temp_v0_2) + 0x748))) > 7000.0f)
    {
      *((f32 *) (((char *) temp_v0_2) + 0x748)) = 7000.0f;
    }
  }
  temp_v0_3 = (*((u16 *) (((char *) temp_s0) + 0x14))) - 1;
  *((u16 *) (((char *) temp_s0) + 0x14)) = temp_v0_3;
  var_v0 = arg0 & 0xFFFF;
  if ((temp_v0_3 << 0x10) == 0)
  {
    temp_v0_4 = arg0 & 0xFFFF;
    if ((*((s16 *) (((char *) (*((void **) (((char *) temp_s0) + 4)))) + 0x55E))) == 0)
    {
      var_v1 = temp_v0_4 * 0x64;
      var_v0_2 = 1;
    }
    else
    {
      var_v1 = temp_v0_4 * 0x64;
      var_v0_2 = 3;
    }
    *((&D_8011F32E) + var_v1) = var_v0_2;
    var_v0 = arg0 & 0xFFFF;
  }
  temp_v1_2 = *((&D_8011F32E) + (var_v0 * 0x64));
  switch (temp_v1_2)
  {
    case 1:
      temp_ft0_2 = *((f32 *) (((char *) temp_a1) + 0x34));
      temp_fv0 = ((0.7f - temp_ft0_2) * 0.5f) + temp_ft0_2;
      *((f32 *) (((char *) temp_a1) + 0x34)) = temp_fv0;
      *((f32 *) (((char *) temp_a1) + 0x30)) = temp_fv0;
      if ((*((f32 *) (((char *) temp_a1) + 0x34))) < 0.73f)
    {
      *((&D_8011F32E) + ((arg0 & 0xFFFF) * 0x64)) = 2;
    }
      break;

    case 2:
      temp_ft0_3 = *((f32 *) (((char *) temp_a1) + 0x34));
      temp_fv0_2 = ((3.0f - temp_ft0_3) * 0.4f) + temp_ft0_3;
      *((f32 *) (((char *) temp_a1) + 0x34)) = ((3.0f - temp_ft0_3) * 0.4f) + temp_ft0_3;
      *((f32 *) (((char *) temp_a1) + 0x30)) = temp_fv0_2;
      if (temp_fv0_2 > 2.8f)
    {
      *((&D_8011F32E) + ((arg0 & 0xFFFF) * 0x64)) = 3;
    }
      break;

    case 3:
      *((f32 *) (((char *) temp_a1) + 0x34)) = 1.0f;
      *((f32 *) (((char *) temp_a1) + 0x30)) = 1.0f;
      temp_v1_3 = *((void **) (((char *) temp_s0) + 4));
      *((u16 *) (((char *) temp_v1_3) + 0x560)) = (u16) ((*((u16 *) (((char *) temp_v1_3) + 0x560))) & 0xEF);
      func_8013E49C(*((u16 *) (((char *) temp_s0) + 0x76)));
      *((&D_8011F2FD) + ((arg0 & 0xFFFF) * 0x64)) = 2;
      if ((*((s16 *) (((char *) (*((void **) (((char *) temp_s0) + 4)))) + 0x55E))) == 0)
    {
      *((s32 *) (((char *) temp_s2) + 4)) = 0;
    }
      break;

  }

  temp_v1_4 = *((void **) (((char *) temp_s0) + 4));
  if (((*((u8 *) (((char *) temp_v1_4) + 0x860))) != 0) && ((*((s32 *) (((char *) temp_v1_4) + 0x890))) != 0))
  {
    temp_fv1 = *((f32 *) (((char *) temp_v1_4) + 0x7B4));
    *((f32 *) (((char *) temp_v1_4) + 0x7B4)) = (f32) (((((*((f32 *) (((char *) temp_v1_4) + 0x784))) * (*((f32 *) (((char *) temp_s0) + 8)))) - temp_fv1) * 0.2f) + temp_fv1);
    temp_v0_5 = *((void **) (((char *) temp_s0) + 4));
    temp_fv1_2 = *((f32 *) (((char *) temp_v0_5) + 0x7BC));
    *((f32 *) (((char *) temp_v0_5) + 0x7BC)) = (f32) (((((*((f32 *) (((char *) temp_v0_5) + 0x78C))) * (*((f32 *) (((char *) temp_s0) + 8)))) - temp_fv1_2) * 0.2f) + temp_fv1_2);
    temp_v0_6 = *((void **) (((char *) temp_s0) + 4));
    *((f32 *) (((char *) temp_v0_6) + 0x7C0)) = (f32) (*((f32 *) (((char *) temp_v0_6) + 0x7B4)));
    temp_v0_7 = *((void **) (((char *) temp_s0) + 4));
    *((f32 *) (((char *) temp_v0_7) + 0x7C8)) = (f32) (*((f32 *) (((char *) temp_v0_7) + 0x7BC)));
  }
  if ((!((*((u16 *) (((char *) temp_s0) + 0x14))) & 7)) && (((u8) (*((u8 *) (((char *) (*((void **) (((char *) temp_s0) + 4)))) + 0x8A1)))) < 2U))
  {
    temp_v0_8 = func_800DE41C(0, 0, 1, 0, 0x5B, 0x7F, &D_802390C8, &func_8013AF08, &func_8015FD04, *((f32 *) (((char *) (*((void **) (((char *) temp_s0) + 4)))) + 0x714)), *((f32 *) (((char *) (*((void **) (((char *) temp_s0) + 4)))) + 0x718)), *((f32 *) (((char *) (*((void **) (((char *) temp_s0) + 4)))) + 0x71C)), 0, 0, 0, 0.08f, 0.08f, 0.08f);
    if (((u32) ((temp_v0_8 + 2) & 0xFFFF)) >= 2U)
    {
      temp_a0_2 = (temp_v0_8 & 0xFFFF) * 0x64;
      temp_v1_5 = temp_a0_2 + (&D_8011F2F0);
      *((s16 *) (((char *) temp_v1_5) + 8)) = 0x40;
      *((s16 *) (((char *) temp_v1_5) + 6)) = 0x40;
      *((s16 *) (((char *) temp_v1_5) + 4)) = 0x40;
      *((&D_8011F2F2) + temp_a0_2) = 0x40;
      *((&D_8011F334) + temp_a0_2) = *((f32 *) (((char *) (*((void **) (((char *) temp_s0) + 4)))) + 0x7C0));
      *((&D_8011F338) + temp_a0_2) = ((*((f32 *) (((char *) (*((void **) (((char *) temp_s0) + 4)))) + 0x7C4))) * 0.8f) + 1.0f;
      *((&D_8011F33C) + temp_a0_2) = *((f32 *) (((char *) (*((void **) (((char *) temp_s0) + 4)))) + 0x7C8));
      *((&D_8011F32E) + temp_a0_2) = (s16) (*((u8 *) (((char *) (*((void **) (((char *) temp_s0) + 4)))) + 0x7CC)));
      *((&D_8011F2FE) + temp_a0_2) = *((u16 *) (((char *) (*((void **) (((char *) temp_s0) + 4)))) + 2));
    }
    temp_v0_9 = func_800DE41C(0, 0, 1, 0, 0x5B, 0x7F, &D_802390C8, &func_8013AF08, &func_8015FD04, *((f32 *) (((char *) (*((void **) (((char *) temp_s0) + 4)))) + 0x720)), *((f32 *) (((char *) (*((void **) (((char *) temp_s0) + 4)))) + 0x724)), *((f32 *) (((char *) (*((void **) (((char *) temp_s0) + 4)))) + 0x728)), 0, 0, 0, 0.08f, 0.08f, 0.08f);
    if (((u32) ((temp_v0_9 + 2) & 0xFFFF)) >= 2U)
    {
      temp_a0_3 = (temp_v0_9 & 0xFFFF) * 0x64;
      temp_v1_6 = temp_a0_3 + (&D_8011F2F0);
      *((s16 *) (((char *) temp_v1_6) + 8)) = 0x40;
      *((s16 *) (((char *) temp_v1_6) + 6)) = 0x40;
      *((s16 *) (((char *) temp_v1_6) + 4)) = 0x40;
      *((&D_8011F2F2) + temp_a0_3) = 0x40;
      *((&D_8011F334) + temp_a0_3) = *((f32 *) (((char *) (*((void **) (((char *) temp_s0) + 4)))) + 0x7C0));
      *((&D_8011F338) + temp_a0_3) = ((*((f32 *) (((char *) (*((void **) (((char *) temp_s0) + 4)))) + 0x7C4))) * 0.8f) + 1.0f;
      *((&D_8011F33C) + temp_a0_3) = *((f32 *) (((char *) (*((void **) (((char *) temp_s0) + 4)))) + 0x7C8));
      *((&D_8011F32E) + temp_a0_3) = (s16) (*((u8 *) (((char *) (*((void **) (((char *) temp_s0) + 4)))) + 0x7CC)));
      *((&D_8011F2FE) + temp_a0_3) = *((u16 *) (((char *) (*((void **) (((char *) temp_s0) + 4)))) + 2));
    }
  }
}

