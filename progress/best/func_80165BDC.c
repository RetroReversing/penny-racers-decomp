s32 func_8013E49C(u16);
s32 func_801D7028(u16, s32);
extern s32 D_8011F2FD;
extern s32 D_8011F318;
extern s32 D_8011F32E;
extern s32 D_8011F350;
extern s32 D_8011F4E4;
extern s32 D_802378CC;
extern s32 D_80237914;
inline static int inline_fn(u16 arg0)
{
  return arg0 * 0x64;
}

void func_80165BDC(s32 arg0)
{
  f32 temp_ft0;
  f32 temp_fv0;
  f32 temp_fv0_2;
  f32 temp_fv0_3;
  f32 temp_fv1;
  f32 temp_fv1_2;
  f32 temp_fv1_3;
  f32 temp_fv1_4;
  f32 temp_fv1_5;
  s16 temp_v0;
  s32 temp_v0_2;
  s32 temp_v0_3;
  s32 var_v0;
  u16 temp_v1_2;
  u32 temp_v1;
  void *temp_a0;
  void *temp_s0;
  void *temp_s1;
  void *temp_v0_4;
  void *temp_v1_3;
  void *temp_v1_4;
  temp_s0 = *((&D_8011F350) + inline_fn(arg0 & 0xFFFF));
  temp_a0 = inline_fn(*((u16 *) (((char *) (*((void **) (((char *) temp_s0) + 4)))) + 2))) + (&D_8011F4E4);
  temp_s1 = *((void **) (((char *) temp_a0) + 0x50));
  temp_v0 = *((s16 *) (((char *) temp_s0) + 0x14));
  if (temp_v0 != 0)
  {
    temp_v1 = ((u32) (temp_v0 & 3)) >> 1;
    switch (temp_v1)
    {
      case 0:
        *((s32 **) (((char *) temp_s1) + 4)) = &D_802378CC;
        break;

      case 1:
        *((s32 **) (((char *) temp_s1) + 4)) = &D_80237914;
        break;

    }

    *((s16 *) (((char *) temp_s0) + 0x14)) = (s16) (((u16) (*((s16 *) (((char *) temp_s0) + 0x14)))) - 1);
  }
  temp_v1_2 = *((&D_8011F32E) + inline_fn(arg0 & 0xFFFF));
  switch (temp_v1_2)
  {
    case 0:
      temp_v0_2 = inline_fn(*((u16 *) (((char *) temp_s0) + 0)));
      *((&D_8011F318) + temp_v0_2) = (*((&D_8011F318) + temp_v0_2)) + (*((f32 *) (((char *) temp_s0) + 8)));
      temp_v0_3 = inline_fn(*((u16 *) (((char *) temp_s0) + 0)));
      temp_fv1 = *((&D_8011F318) + temp_v0_3);
      if (temp_fv1 > 359.0f)
    {
      *((&D_8011F318) + temp_v0_3) = temp_fv1 - 360.0f;
    }
      temp_fv0 = (*((f32 *) (((char *) temp_s0) + 0xC))) - (*((f32 *) (((char *) temp_s0) + 8)));
      *((f32 *) (((char *) temp_s0) + 0xC)) = temp_fv0;
      if (temp_fv0 < 0.0f)
    {
      temp_fv0_2 = (*((f32 *) (((char *) temp_s0) + 8))) * 0.9f;
      *((f32 *) (((char *) temp_s0) + 8)) = temp_fv0_2;
      if (temp_fv0_2 < 1.0f)
      {
        *((f32 *) (((char *) (*((void **) (((char *) temp_s0) + 4)))) + 0x8A4)) = 0.7f;
        *((s8 *) (((char *) (*((void **) (((char *) temp_s0) + 4)))) + 0x8A1)) = 2;
        *((s8 *) (((char *) (*((void **) (((char *) temp_s0) + 4)))) + 0x8D0)) = 0x78;
        temp_v1_3 = *((void **) (((char *) temp_s0) + 4));
        var_v0 = arg0 & 0xFFFF;
        if ((*((s16 *) (((char *) temp_v1_3) + 0x55E))) == 0)
        {
          func_801D7028(*((u16 *) (((char *) temp_v1_3) + 2)), 0x2A);
          *((&D_8011F32E) + ((arg0 & 0xFFFF) * 0x64)) = 1;
          return;
        }
        block_27:
        *((&D_8011F32E) + inline_fn(var_v0)) = 3;

        return;
      }
      return;
    }
      *((s8 *) (((char *) (*((void **) (((char *) temp_s0) + 4)))) + 0x8A1)) = 6;
      temp_v0_4 = *((void **) (((char *) temp_s0) + 4));
      temp_ft0 = *((f32 *) (((char *) temp_v0_4) + 0x8D4));
      *((f32 *) (((char *) temp_v0_4) + 0x8D4)) = (f32) (((1.0f - temp_ft0) * 0.3f) + temp_ft0);
      *((s32 *) (((char *) (*((void **) (((char *) temp_s0) + 4)))) + 0x8D8)) = 0;
      return;

    case 1:
      *((s32 **) (((char *) temp_s1) + 4)) = &D_802378CC;
      temp_fv1_2 = *((f32 *) (((char *) temp_a0) + 0x34));
      *((f32 *) (((char *) temp_a0) + 0x34)) = (f32) (((3.0f - temp_fv1_2) * 0.4f) + temp_fv1_2);
      temp_fv1_3 = *((f32 *) (((char *) temp_a0) + 0x30));
      *((f32 *) (((char *) temp_a0) + 0x30)) = (f32) (((0.3f - temp_fv1_3) * 0.4f) + temp_fv1_3);
      if ((*((f32 *) (((char *) temp_a0) + 0x34))) > 2.8f)
    {
      *((&D_8011F32E) + inline_fn(arg0 & 0xFFFF)) = 2;
      return;
    }
      break;

    case 2:
      *((s32 **) (((char *) temp_s1) + 4)) = &D_802378CC;
      temp_fv1_4 = *((f32 *) (((char *) temp_a0) + 0x34));
      *((f32 *) (((char *) temp_a0) + 0x34)) = (f32) (((0.3f - temp_fv1_4) * 0.4f) + temp_fv1_4);
      temp_fv1_5 = *((f32 *) (((char *) temp_a0) + 0x30));
      temp_fv0_3 = ((3.0f - temp_fv1_5) * 0.4f) + temp_fv1_5;
      *((f32 *) (((char *) temp_a0) + 0x30)) = temp_fv0_3;
      if (temp_fv0_3 > 2.8f)
    {
      var_v0 = arg0 & 0xFFFF;
      goto block_27;
    }
      break;

    case 3:
      *((f32 *) (((char *) temp_a0) + 0x34)) = 1.0f;
      *((f32 *) (((char *) temp_a0) + 0x30)) = 1.0f;
      temp_v1_4 = *((void **) (((char *) temp_s0) + 4));
      *((u16 *) (((char *) temp_v1_4) + 0x560)) = (u16) ((*((u16 *) (((char *) temp_v1_4) + 0x560))) & 0xF8);
      func_8013E49C(*((u16 *) (((char *) temp_s0) + 0x76)));
      *((&D_8011F2FD) + ((arg0 & 0xFFFF) * 0x64)) = 2;
      if ((*((s16 *) (((char *) (*((void **) (((char *) temp_s0) + 4)))) + 0x55E))) == 0)
    {
      *((s32 **) (((char *) temp_s1) + 4)) = NULL;
      return;
    }
      *((s32 **) (((char *) temp_s1) + 4)) = &D_802378CC;
      break;

  }

}

