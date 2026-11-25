extern char D_80000000[];
extern u8 D_8011F2FC[];
extern char D_8011F2FD[];
extern char D_8011F308[];
extern char D_8011F30C[];
extern char D_8011F310[];
extern char D_8011F32E[];
extern char D_8011F334[];
inline static int inline_fn(unsigned short arg0)
{
  return arg0 * 0x64;
}

void func_801348C8(s32 arg0)
{
  f32 temp_fv1;
  f32 temp_fv1_2;
  f32 temp_fv1_3;
  f32 temp_fv1_4;
  f32 temp_fv1_5;
  s32 var_v0_3;
  s32 temp_a2;
  s32 temp_v0;
  unsigned char temp_v0_2;
  s32 temp_v1_2;
  unsigned short temp_v1_3;
  s32 temp_v1_4;
  unsigned char var_v1;
  s32 var_v1_2;
  s32 var_v1_3;
  s32 __repair_result_var_v1_3;
  u16 temp_v1;
  u32 var_v0_2;
  s32 temp_a1;
  temp_v1 = *((u16 *) (D_8011F32E + inline_fn((char) (arg0 & 0xFFFF))));
  switch (temp_v1)
  {
    case 0:
      temp_v1_2 = (arg0 & 0xFFFF) * 0x64;
      temp_a1 = *(D_8011F2FC + temp_v1_2);
      temp_a1 = temp_a1 + 8;
      if (temp_a1 >= 0xFFU)
    {
      *(D_8011F2FC + temp_v1_2) = 0xFF;
      var_v1 = arg0 & 0xFFFF;
    }
    else
    {
      *(D_8011F2FC + inline_fn(arg0 & 0xFFFF)) = temp_a1;
      var_v1 = arg0 & 0xFFFF;
    }
      temp_a2 = inline_fn(var_v1);
      temp_fv1 = *((f32 *) (D_8011F334 + temp_a2));
      if (temp_fv1 <= (2.1474836e9f - 1))
    {
      var_v1 = ((s32) temp_fv1) + 1;
    }
    else
    {
      var_v1 = ((s32) (temp_fv1 - 2.1474836e9f)) | ((s32) (D_80000000 + 1));
    }
      do
    {
      *((f32 *) (D_8011F334 + temp_a2)) = (f32) (var_v1 & 0xFFFF);
    }
    while (0);
      temp_fv1_2 = *((f32 *) (D_8011F334 + inline_fn(arg0 & 0xFFFF)));
      var_v0_2 = ((u32) temp_fv1_2) & 0xFFFF;
      if (var_v0_2 >= 0x79U)
    {
      temp_fv1_3 = *((f32 *) (D_8011F310 + inline_fn(arg0 & 0xFFFF)));
      var_v1_2 = ((u32) temp_fv1_3) & 0xFFFF;
      if (var_v1_2 == 0xFF)
      {
        temp_v1_3 = arg0 & 0xFFFF; temp_a2 = inline_fn(temp_v1_3);
        *(D_8011F2FD + temp_a2) = 2;
        *((u16 *) (D_8011F32E + inline_fn(arg0 & 0xFFFF))) = 3;
        return;
      }
      temp_v1_3 = arg0 & 0xFFFF; var_v1_3 = inline_fn(temp_v1_3);
      var_v0_3 = 1;
      block_38:
      *((u16 *) (D_8011F32E + var_v1_3)) = var_v0_3;

    }
    else
    {
      do
      {
        return;
      }
      while (0);
    }
      break;

    case 1:
      temp_v0_2 = arg0 & 0xFFFF;
      temp_v1_3 = inline_fn(temp_v0_2);
      temp_fv1_4 = *((f32 *) (D_8011F308 + temp_v1_3));
      do
    {
      if (!(temp_fv1_4 > (-80.0f)))
      {
        __repair_result_var_v1_3 = inline_fn(temp_v0_2); var_v0_3 = 2;
        goto block_38;
      }
      *((f32 *) (D_8011F308 + temp_v1_3)) = temp_fv1_4 - 1.0f;
      return;
    }
    while (0);

    case 2:
      temp_a2 = inline_fn(arg0 & 0xFFFF);
      temp_fv1_5 = *((f32 *) (D_8011F30C + temp_a2));
      if (temp_fv1_5 > (-36.0f))
    {
      *((f32 *) (D_8011F30C + temp_a2)) = temp_fv1_5 - 1.0f;
      return;
    }
      var_v1_3 = (((short) arg0) & 0xFFFF) * 0x64;
      var_v0_3 = 3;
      goto block_38;

  }

}

