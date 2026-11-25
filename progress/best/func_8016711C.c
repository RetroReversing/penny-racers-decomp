s32 func_8013AE60(s32);
s32 func_8013E49C(u16);
extern s32 D_8011F2F0;
extern u8 D_8011F2FD[];
extern u8 D_8011F308[];
extern u8 D_8011F30C[];
extern u8 D_8011F310[];
extern s32 D_8011F320;
extern s32 D_8011F324;
extern s32 D_8011F328;
extern s32 D_8011F32E;
extern u8 D_80233EC1;
inline static int inline_fn(void *arg0)
{
  return (*((u16 *) (((char *) (*((void **) (((char *) arg0) + 4)))) + 2))) * 0x64;
}

void func_8016711C(s32 arg0_in)
{
  s32 arg0;
  f32 temp_ft0;
  f32 temp_ft0_2;
  f32 temp_fv0;
  f32 temp_fv0_2;
  f32 temp_fv0_3;
  f32 temp_fv1;
  long long temp_v0;
  s32 temp_v0_3;
  u16 temp_v0_2;
  u16 temp_v1;
  void *temp_s0;
  void *temp_s1;
  void *temp_v0_4;
  void *temp_v1_2;
  do
  {
    temp_s1 = (char *) ((arg0 & 0xFFFF) * 0x64); arg0 = arg0_in;
  }
  while (0);
  do
  {
    temp_s1 += (s32) (&D_8011F2F0); temp_s0 = *((void **) (((char *) temp_s1) + 0x60));
    *((f32 *) (((char *) temp_s1) + 0x18)) = (f32) (*((f32 *) (D_8011F308 + inline_fn(temp_s0))));
    *((f32 *) (((char *) temp_s1) + 0x1C)) = (f32) ((*((f32 *) (D_8011F30C + inline_fn(temp_s0)))) + (*((f32 *) (((char *) temp_s0) + 0xC))));
    *((f32 *) (((char *) temp_s1) + 0x20)) = (f32) (*((f32 *) (D_8011F310 + ((*((u16 *) (((char *) (*((void **) (((char *) temp_s0) + 4)))) + 2))) * 0x64))));
    do
    {
      temp_fv1 = (*((f32 *) (((char *) temp_s1) + 0x28))) + 5.0f;
    }
    while (0);
    *((f32 *) (((char *) temp_s1) + 0x28)) = temp_fv1;
  }
  while (0);
  if (temp_fv1 > 359.0f)
  {
    *((f32 *) (((char *) temp_s1) + 0x28)) = (f32) (temp_fv1 - 360.0f);
  }
  temp_v1 = *((&D_8011F32E) + ((arg0 & 0xFFFF) * 0x64));
  switch (temp_v1)
  {
    case 0:
      if (temp_s0 || temp_v0_2)
    {
      temp_ft0 = *((f32 *) (((char *) temp_s0) + 0xC));
      temp_fv0 = temp_ft0 + ((10.0f - temp_ft0) * 0.2f);
      *((f32 *) (((char *) temp_s0) + 0xC)) = temp_ft0 + ((10.0f - temp_ft0) * 0.2f);
    }
    else
    {
      temp_ft0 = *((f32 *) (((char *) temp_s0) + 0xC));
      temp_fv0 = ((10.0f - temp_ft0) * 0.2f) + temp_ft0;
      *((f32 *) (((char *) temp_s0) + 0xC)) = temp_ft0 + ((10.0f - temp_ft0) * 0.2f);
    }
      if (temp_fv0 < 30.0f)
    {
      *((f32 *) (((char *) temp_s0) + 0xC)) = 30.0f;
      do
      {
        *((f32 *) (((char *) temp_s0) + 8)) = 1.0f;
      }
      while (0);
      *((&D_8011F32E) + ((arg0 & 0xFFFF) * 0x64)) = 1;
    }
      break;

    case 1:
      *((f32 *) (((char *) temp_s0) + 0xC)) = (f32) ((*((f32 *) (((char *) temp_s0) + 0xC))) + (*((f32 *) (((char *) temp_s0) + 8))));
      *((f32 *) (((char *) temp_s0) + 8)) = (f32) ((*((f32 *) (((char *) temp_s0) + 8))) - 0.1f);
      if (((*((f32 *) (((char *) temp_s0) + 0xC))) - 1) < (30.0f - 1))
    {
      *((f32 *) (((char *) temp_s0) + 0xC)) = 30.0f;
      do
      {
        *((f32 *) (((char *) temp_s0) + 8)) = 1.0f;
      }
      while (0);
    }
      temp_ft0_2 = ((*((f32 *) (((char *) temp_s0) + 0xC))) - 20.0f) * 0.04f;
      *((&D_8011F324) + inline_fn(temp_s0)) = (temp_ft0_2 + 0.4f) * (*((f32 *) (((char *) temp_s0) + 0x10)));
      do { temp_v0 = inline_fn(temp_s0); } while (0);
      temp_fv0_2 = (1.6f - temp_ft0_2) * (*((f32 *) (((char *) temp_s0) + 0x10)));
      *((&D_8011F328) + temp_v0) = temp_fv0_2;
      *((&D_8011F320) + temp_v0) = temp_fv0_2;
      break;

  }

  temp_v0_2 = (*((u16 *) (((char *) temp_s0) + 0x14))) - 1;
  *((u16 *) (((char *) temp_s0) + 0x14)) = temp_v0_2;
  if ((temp_v0_2 << 0x10) == 0)
  {
    temp_v0_3 = (*((u16 *) (((char *) (*((void **) (((char *) temp_s0) + 4)))) + 2))) * 0x64;
    temp_v1_2 = temp_v0_3 + (&D_8011F2F0);
    temp_fv0_3 = *((f32 *) (((char *) temp_s0) + 0x10));
    *((f32 *) (((char *) temp_v1_2) + 0x38)) = temp_fv0_3;
    *((f32 *) (((char *) temp_v1_2) + 0x34)) = temp_fv0_3;
    *((&D_8011F320) + temp_v0_3) = temp_fv0_3;
    temp_v0_4 = *((void **) (((char *) temp_s0) + 4));
    *((f32 *) (((char *) temp_v0_4) + 0x760)) = (f32) ((*((f32 *) (((char *) temp_v0_4) + 0x760))) - 30000.0f);
    func_8013E49C(*((u16 *) (((char *) temp_s0) + 0x76)));
    temp_v1_2 = *((void **) (((char *) temp_s0) + 4));
    *((u16 *) (((char *) temp_v1_2) + 0x560)) = (u16) ((*((u16 *) (((char *) temp_v1_2) + 0x560))) & 0xF7);
    *(D_8011F2FD + ((arg0 & 0xFFFF) * 0x64)) = 2;
  }
  *((s8 *) (((char *) temp_s1) + 0)) = (s8) ((*((u8 *) (((char *) (*((void **) (((char *) temp_s0) + 4)))) + 0x7D1))) - D_80233EC1);
  do
  {
    func_8013AE60(arg0 & 0xFFFF);
  }
  while (0);
}

