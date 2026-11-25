s32 func_800DE41C(s32, s32, s32, s32, s32, s32, s32 *, s32 *, s32 *, f32, f32, f32, s32, s32, s32, f32, f32, f32);
s32 func_8013E364();
s32 func_8013E49C(u16);
s32 func_8013E818(s32, s32, s32, f32, f32, f32, s32);
s32 func_801D7028(u16, s32);
s32 func_801FA30C();
extern u8 D_8011F2FD[];
extern s32 D_8011F308;
extern s32 D_8011F30C;
extern s32 D_8011F310;
extern s32 D_8011F32E;
extern s32 D_8011F350;
extern s32 D_8011F4E4;
extern f64 D_80183A10;
extern f64 D_80183A18;
extern f64 D_80183A20;
extern s32 D_802378F0;
extern s32 D_80237914;
extern s32 D_802390C8;
extern s32 func_801655A8;
extern s32 func_801657F0;
void func_80164FC0(volatile unsigned int arg0)
{
  f32 temp_fv0;
  f32 temp_fv1_2;
  f32 temp_fv1_3;
  f32 temp_fv1_4;
  f64 var_fv1;
  f64 var_fv1_2;
  f64 var_fv1_3;
  s32 temp_v0_2;
  s32 temp_v0_3;
  s32 temp_v0_4;
  s32 temp_v0_6;
  s32 temp_v0_7;
  s32 var_v0;
  s32 var_v1;
  s32 var_v1_2;
  u16 temp_a0;
  u16 temp_s3_2;
  u16 temp_v0;
  u16 temp_v0_8;
  u16 temp_v1_2;
  void *temp_a0_2;
  void *temp_a0_3;
  void *temp_s0;
  void *temp_s1;
  void *temp_s3;
  void *temp_v1;
  temp_s1 = *((&D_8011F350) + ((arg0 & 0xFFFF) * 0x64));
  temp_s0 = (char *) ((*((u16 *) (((char *) (*((void **) (((char *) temp_s1) + 4)))) + 2))) * 0x64);
  do
  {
    temp_s0 += (s32) (&D_8011F4E4); temp_s3 = *((void **) (((char *) temp_s0) + 0x50)); temp_a0 = *((u16 *) (((char *) temp_s1) + 0x14)); var_v1 = 0;
    if ((((u32) (temp_a0 & 3)) >> 1) != 0)
    {
      var_v1 = (temp_a0 << 0x10) > 0;
    }
  }
  while (0);
  switch (var_v1)
  {
    case 0:
      *((s32 **) (((char *) temp_s3) + 4)) = &D_802378F0;
      do
    {
      break;
    }
    while (0);

    case 1:
      *((s32 **) (((char *) temp_s3) + 4)) = &D_80237914;
      break;

  }

  temp_v0_4 = *((u16 *) (((char *) temp_s1) + 0x14)); temp_v0 = temp_v0_4 - 1;
  *((u16 *) (((char *) temp_s1) + 0x14)) = temp_v0;
  if ((temp_v0 << 0x10) == 0)
  {
    temp_v1 = *((void **) (((char *) temp_s1) + 4));
    if ((*((s16 *) (((char *) temp_v1) + 0x55E))) == 0)
    {
      func_801D7028(*((u16 *) (((char *) temp_v1) + 2)), 0x2A);
      var_v1_2 = (arg0 & 0xFFFF) * 0x64;
      *((&D_8011F32E) + var_v1_2) = 1;
    }
    else
    {
      var_v1_2 = (arg0 & 0xFFFF) * 0x64;
      *((&D_8011F32E) + var_v1_2) = 3;
    }
  }
  var_v0 = arg0 & 0xFFFF;
  temp_v1_2 = *((&D_8011F32E) + (var_v0 * 0x64));
  switch (temp_v1_2)
  {
    case 0:
      temp_v0_2 = func_8013E364();
      temp_s3_2 = temp_v0_2 & 0xFFFF;
      if (temp_s3_2 != 0xFFFF)
    {
      temp_v0_3 = (arg0 & 0xFFFF) * 0x64;
      temp_v0_4 = func_800DE41C(0, 0, 1, 0, 0x5B, 0xA, &D_802390C8, &func_801655A8, &func_801657F0, *((&D_8011F308) + temp_v0_3), *((&D_8011F30C) + temp_v0_3), *((&D_8011F310) + temp_v0_3), 0, 0, 0, 0.01f, 0.01f, 0.01f);
      if (((u32) ((temp_v0_4 + 2) & 0xFFFF)) < 2U)
      {
        func_8013E49C(temp_s3_2);
        return;
      }
      if (temp_v0_3 || temp_s1)
      {
        temp_v0_3 = func_801FA30C() & 0x1F;
        var_fv1 = (f64) temp_v0_3;
      }
      else
      {
        temp_v0_3 = func_801FA30C() & 0x1F;
        var_fv1 = (f64) temp_v0_3;
      }
      if (temp_v0_3 < 0)
      {
        var_fv1 += D_80183A10;
      }
      temp_v0_6 = func_801FA30C() & 0xF;
      var_fv1_2 = (f64) temp_v0_6;
      if (temp_v0_6 < ((0 - 1) + 1))
      {
        var_fv1_2 += D_80183A18;
      }
      temp_v0_7 = func_801FA30C() & 0x1F;
      var_fv1_3 = (f64) temp_v0_7;
      if (temp_v0_7 < 0)
      {
        var_fv1_3 += D_80183A20;
      }
      func_8013E818(temp_v0_2 & 0xFFFF, temp_v0_4 & 0xFFFF, 0x40, ((((f32) var_fv1) - 16.0f) * 0.5f) - (*((f32 *) (((char *) temp_s1) + 8))), (((f32) var_fv1_2) * 0.5f) - (*((f32 *) (((char *) temp_s1) + 0xC))), ((((f32) var_fv1_3) - 16.0f) * 0.5f) - (*((f32 *) (((char *) temp_s1) + 0x10))), ((0xA - ((s16) (*((u16 *) (((char *) temp_s1) + 0x14))))) * 2) & 0xFFFF);
      *((f32 *) (((char *) temp_s1) + 8)) = (f32) ((*((f32 *) (((char *) temp_s1) + 8))) * 0.9f);
      *((f32 *) (((char *) temp_s1) + 0xC)) = (f32) ((*((f32 *) (((char *) temp_s1) + 0xC))) * 0.9f);
      *((f32 *) (((char *) temp_s1) + 0x10)) = (f32) ((*((f32 *) (((char *) temp_s1) + 0x10))) * 0.9f);
      return;
    }
      return;

    case 1:
      *((s32 **) (((char *) temp_s3) + 4)) = &D_802378F0;
      temp_fv0 = *((f32 *) (((char *) temp_s0) + 0x34));
      *((f32 *) (((char *) temp_s0) + 0x34)) = (f32) (((3.0f - temp_fv0) * 0.4f) + temp_fv0);
      do
    {
      if (temp_s1)
      {
        temp_fv1_2 = *((f32 *) (((char *) temp_s0) + 0x30));
        *((f32 *) (((char *) temp_s0) + 0x30)) = (f32) (((0.3f - temp_fv1_2) * 0.4f) + temp_fv1_2);
      }
      else
      {
        temp_fv1_2 = *((f32 *) (((char *) temp_s0) + 0x30));
        *((f32 *) (((char *) temp_s0) + 0x30)) = (f32) (((0.3f - temp_fv1_2) * 0.4f) + temp_fv1_2);
      }
    }
    while (0);
      if ((*((f32 *) (((char *) temp_s0) + 0x34))) > 2.8f)
    {
      *((&D_8011F32E) + ((arg0 & 0xFFFF) * 0x64)) = 2;
      return;
    }
      break;

    case 2:
      *((s32 **) (((char *) temp_s3) + 4)) = &D_802378F0;
      temp_fv1_3 = *((f32 *) (((char *) temp_s0) + 0x34));
      *((f32 *) (((char *) temp_s0) + 0x34)) = (f32) (((0.3f - temp_fv1_3) * 0.4f) + temp_fv1_3);
      temp_fv1_4 = *((f32 *) (((char *) temp_s0) + 0x30));
      do
    {
      temp_fv0 = ((3.0f - temp_fv1_4) * 0.4f) + temp_fv1_4;
    }
    while (0);
      *((f32 *) (((char *) temp_s0) + 0x30)) = ((3.0f - temp_fv1_4) * 0.4f) + temp_fv1_4;
      if (temp_fv0 > 2.8f)
    {
      *((&D_8011F32E) + ((arg0 & 0xFFFF) * 0x64)) = 3;
      return;
    }
      break;

    case 3:
      *((f32 *) (((char *) temp_s0) + 0x34)) = 1.0f;
      *((f32 *) (((char *) temp_s0) + 0x30)) = 1.0f;
      temp_a0_2 = *((void **) (((char *) temp_s1) + 4));
      temp_v0_8 = *((u16 *) (((char *) temp_a0_2) + 0x560));
      *((u16 *) (((char *) temp_a0_2) + 0x560)) = (u16) (temp_v0_8 & 0xF8);
      temp_a0_3 = *((void **) (((char *) temp_s1) + 4));
      do
    {
      *((u16 *) (((char *) temp_a0_3) + 0x560)) = (u16) ((*((u16 *) (((char *) temp_a0_3) + 0x560))) | ((temp_v0_8 & 7) - 1));
    }
    while (0);
      func_8013E49C(*((u16 *) (((char *) temp_s1) + 0x76)));
      *(D_8011F2FD + ((arg0 & 0xFFFF) * 0x64)) = 2;
      if ((*((s16 *) (((char *) (*((void **) (((char *) temp_s1) + 4)))) + 0x55E))) == 0)
    {
      *((s32 **) (((char *) temp_s3) + 4)) = NULL;
    }
      break;

  }

}

