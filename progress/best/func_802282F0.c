static __inline__ u16 __repair_inline(u16 a) { return a; }
s32 func_801D7028(u16, s32);
f32 func_801F9BE8(f32, f32);
s32 func_801F9D8C(s32, s32);
s32 func_8022976C(s32, s32, s32);
f32 sqrtf();
extern s32 D_8011F2F0;
extern s32 D_8022A720;
extern s32 D_8022A748;
extern s32 D_8022A770;
extern s32 D_8022E600;
extern s32 D_8022E618;
extern s32 D_8022E620;
void func_802282F0(void)
{
  f32 sp14;
  f32 sp1C;
  f32 sp24;
  f32 sp2C;
  void *sp34;
  void *sp3C;
  void *sp44;
  s32 sp4C;
  s32 sp54;
  f32 *sp5C;
  s32 sp64;
  f32 *var_v0_5;
  f32 temp_fa0;
  f32 temp_fa0_2;
  f32 temp_fa0_3;
  f32 temp_fa0_4;
  f32 temp_fa0_5;
  f32 temp_fa0_6;
  f32 temp_fs0;
  f32 temp_fs0_2;
  f32 temp_fs0_3;
  f32 temp_fs0_4;
  f32 temp_fs1;
  f32 temp_fs1_2;
  f32 temp_fs2;
  f32 temp_fs2_2;
  f32 temp_fs3;
  f32 temp_fs4;
  f32 temp_ft0;
  f32 temp_ft1;
  f32 temp_fv0;
  f32 temp_fv0_10;
  f32 temp_fv0_11;
  f32 temp_fv0_12;
  f32 temp_fv0_13;
  f32 temp_fv0_14;
  f32 temp_fv0_15;
  f32 temp_fv0_16;
  f32 temp_fv0_2;
  f32 temp_fv0_3;
  f32 temp_fv0_4;
  f32 temp_fv0_5;
  f32 temp_fv0_6;
  f32 temp_fv0_7;
  f32 temp_fv0_8;
  f32 temp_fv0_9;
  f32 temp_fv1;
  f32 temp_fv1_2;
  f32 temp_fv1_3;
  f32 temp_fv1_4;
  f32 temp_s4_2;
  f32 temp_s5_2;
  f32 var_fs0;
  f32 var_fs0_2;
  f32 var_fs1;
  f32 var_fs3;
  f32 var_fs3_2;
  f32 var_fs4;
  f32 var_fs5;
  f32 var_ft0;
  f32 var_ft0_2;
  f32 var_ft0_3;
  f32 var_ft0_4;
  f32 var_ft0_5;
  f32 var_fv0;
  f32 var_fv0_2;
  f32 var_fv0_3;
  f32 var_fv0_5;
  f32 var_fv1;
  f32 var_fv1_2;
  f32 var_fv1_3;
  f32 var_fv1_4;
  f32 var_s2;
  f32 var_s6;
  f32 var_s6_2;
  s32 temp_a0;
  s32 temp_a3;
  s32 temp_s0;
  s32 temp_s4;
  s32 temp_v0;
  s32 temp_v0_2;
  s32 temp_v1_2;
  s32 temp_v1_6;
  s32 temp_v1_7;
  s32 var_a0;
  s32 var_a0_2;
  s32 var_a0_4;
  s32 var_a0_5;
  s32 var_s3_2;
  s32 var_s3_3;
  s32 var_s7;
  s32 var_s7_2;
  s32 var_s7_3;
  s32 var_s7_4;
  s32 var_s7_5;
  s32 var_v0;
  s32 var_v0_3;
  s32 var_v0_4;
  s32 var_v0_7;
  s32 var_v0_9;
  s32 var_v1;
  s32 var_v1_2;
  s32 var_v1_3;
  s32 var_v1_4;
  s32 var_v1_5;
  s32 var_v1_6;
  s32 var_s3;
  u16 temp_v1;
  u16 temp_v1_3;
  u16 temp_v1_4;
  u16 temp_v1_5;
  u32 var_a0_3;
  u32 var_v0_2;
  u8 temp_v0_3;
  u8 temp_v0_4;
  u8 temp_v0_5;
  
  void *temp_s0_3;
  void *temp_s0_4;
  void *temp_s1;
  void *temp_s1_2;
  void *temp_s2;
  void *temp_s2_2;
  void *temp_s2_3;
  void *temp_s5;
  void *var_v0_6;
  void *var_v0_8;
  sp34 = NULL;
  var_s7 = 0;
  var_v1 = 0 & 0xFFFF;
  do
  {
    *((u8 *) ((&D_8022E618) + var_v1)) = 0;
    temp_v1 = *((u16 *) (((char *) ((var_v1 * 0x8F0) + (&D_8022A770))) + 2));
    var_a0 = 1;
    if (temp_v1 != 0xFFFF)
    {
      sp34 = (temp_v1 * 0x64) + (&D_8011F2F0);
    }
    else
    {
      var_a0 = 0;
    }
    var_s3 = 0;
    temp_s0 = var_s7 & 0xFFFF;
    temp_v1_2 = temp_s0 * 6;
    sp3C = temp_v1_2 + (&D_8022A748);
    sp4C = var_a0;
    sp44 = temp_v1_2 + (&D_8022A720);
    temp_s5 = (temp_s0 * 0x18) + (&D_8022E620);
    temp_v0 = temp_s0 * 6;
    var_a0_2 = 0 & 0xFFFF;
    loop_5:
    temp_v1_3 = *((u16 *) (((char *) ((var_a0_2 * 0x8F0) + (&D_8022A770))) + 2));

    if (temp_v1_3 != 0xFFFF)
    {
      temp_s2 = (temp_v1_3 * 0x64) + (&D_8011F2F0);
      *((u8 *) (sp3C + var_a0_2)) = 0;
      *((u8 *) (sp44 + var_a0_2)) = var_s3;
      temp_v0_2 = var_s3 & 0xFFFF;
      if (!(sp4C & (temp_s0 != var_a0_2)))
      {
        *((u8 *) ((temp_v0_2 * 4) + temp_s5)) = 1e9f;
      }
      else
      {
        temp_ft1 = (*((f32 *) (((char *) sp34) + 0x18))) - (*((f32 *) (((char *) temp_s2) + 0x18)));
        temp_ft0 = (*((f32 *) (((char *) sp34) + 0x1C))) - (*((f32 *) (((char *) temp_s2) + 0x1C)));
        temp_fv0 = (*((f32 *) (((char *) sp34) + 0x20))) - (*((f32 *) (((char *) temp_s2) + 0x20)));
        temp_fa0 = ((temp_ft1 * temp_ft1) + (temp_ft0 * temp_ft0)) + (temp_fv0 * temp_fv0);
        var_fv0 = sqrtf(temp_fa0);
        var_v0 = temp_v0_2 * 4;
        if (var_fv0 != var_fv0)
        {
          var_fv0 = sqrtf(temp_fa0, var_a0_2);
          var_v0 = (var_s3 & 0xFFFF) * 4;
        }
        *((u8 *) (var_v0 + temp_s5)) = var_fv0;
      }
    }
    else
    {
      temp_a0 = var_s3 & 0xFFFF;
      *((u8 *) ((temp_v0 + (&D_8022A748)) + temp_a0)) = 0;
      *((u8 *) ((temp_a0 * 4) + ((temp_s0 * 0x18) + (&D_8022E620)))) = 1e9f;
      *((u8 *) ((temp_v0 + (&D_8022A720)) + temp_a0)) = var_s3;
    }
    var_s3 += 1;
    var_a0_2 = var_s3 & 0xFFFF;
    if (((u32) (var_s3 & 0xFFFF)) < 6U)
    {
      goto loop_5;
    }
    var_s7 += 1;
    var_v1 = var_s7 & 0xFFFF;
  }
  while (((u32) (var_s7 & 0xFFFF)) < 6U);
  var_s7_2 = 0;
  var_v1_2 = 0 & 0xFFFF;
  __repair_rows: {
    sp3C = (var_v1_2 * 0x8F0) + (&D_8022A770);
    temp_v1_4 = __repair_inline(*((u16 *) (((char *) sp3C) + 2)));
    sp34 = (temp_v1_4 * 0x64) + (&D_8011F2F0);
    if ((temp_v1_4 != 0xFFFF) && ((*((f32 *) (((char *) sp3C) + 0x5EC))) > 0.0f))
    {
      temp_v0_3 = *((u8 *) (((char *) sp3C) + 0x8A1));
      var_s3_2 = var_s7_2 + 1;
      if (temp_v0_3 == 7)
      {
        var_fs3 = 3.0f;
        var_v0_2 = var_s3_2 & 0xFFFF;
      }
      else
      {
        var_fs3 = 1.0f;
        var_v0_2 = var_s3_2 & 0xFFFF;
        if (temp_v0_3 == 6)
        {
          var_fs3 = 2.0f;
        }
      }
      var_a0_3 = var_v0_2;
      if (var_v0_2 < 6U)
      {
        temp_s4 = var_s7_2 & 0xFFFF;
        var_v0_3 = var_a0_3 * 8;
        do
        {
          temp_s1 = ((((var_v0_3 + var_a0_3) * 0x10) - var_a0_3) * 0x10) + (&D_8022A770);
          temp_v1_5 = *((u16 *) (((char *) temp_s1) + 2));
          temp_s2_2 = (temp_v1_5 * 0x64) + (&D_8011F2F0);
          if (((temp_v1_5 != 0xFFFF) & (temp_s4 != var_a0_3)) && ((*((f32 *) (((char *) temp_s1) + 0x5EC))) > 0.0f))
          {
            temp_fs1 = *((var_a0_3 * 4) + ((temp_s4 * 0x18) + (&D_8022E620)));
            temp_v0_4 = *((u8 *) (((char *) temp_s1) + 0x8A1));
            if (temp_v0_4 != 7)
            {
              var_fs0 = 1.0f;
              var_fv1 = var_fs3 * 10.0f;
              if (temp_v0_4 == 6)
              {
                var_fs0 = 2.0f;
              }
            }
            else
            {
              var_fs0 = 3.0f;
              var_fv1 = var_fs3 * 10.0f;
            }
            temp_fs2 = var_fv1 + (var_fs0 * 10.0f);
            temp_v1_6 = var_s3_2 & 0xFFFF;
            if (temp_fs1 < temp_fs2)
            {
              *((u8 *) (((temp_s4 * 6) + (&D_8022A748)) + temp_v1_6)) = 1;
              *((u8 *) (((temp_v1_6 * 6) + (&D_8022A748)) + temp_s4)) = 1;
              *((u8 *) ((&D_8022E618) + temp_s4)) = 1;
              *((u8 *) ((&D_8022E618) + temp_v1_6)) = 1;
              func_801D7028(*((u16 *) (((char *) sp3C) + 2)), 0x27);
              if ((*((f32 *) (((char *) temp_s2_2) + 0x18))) < (*((f32 *) (((char *) sp34) + 0x18))))
              {
                *((f32 *) (((char *) sp3C) + 0x854)) = (f32) ((temp_fs2 - temp_fs1) + (*((f32 *) (((char *) sp3C) + 0x854))));
              }
              else
              {
                *((f32 *) (((char *) sp3C) + 0x854)) = (f32) ((*((f32 *) (((char *) sp3C) + 0x854))) - (((var_fs3 * 10.0f) + (var_fs0 * 10.0f)) - temp_fs1));
              }
              temp_fv0_2 = var_fs3 * 10.0f;
              if ((*((f32 *) (((char *) temp_s2_2) + 0x20))) < (*((f32 *) (((char *) sp34) + 0x20))))
              {
                *((f32 *) (((char *) sp3C) + 0x85C)) = (f32) (((temp_fv0_2 + (var_fs0 * 10.0f)) - temp_fs1) + (*((f32 *) (((char *) sp3C) + 0x85C))));
              }
              else
              {
                *((f32 *) (((char *) sp3C) + 0x85C)) = (f32) ((*((f32 *) (((char *) sp3C) + 0x85C))) - ((temp_fv0_2 + (var_fs0 * 10.0f)) - temp_fs1));
              }
            }
          }
          var_s3_2 += 1;
          var_a0_3 = var_s3_2 & 0xFFFF;
          var_v0_3 = var_a0_3 * 8;
        }
        while (var_a0_3 < 6U);
      }
    }
    var_s7_2 += 1;
    var_v1_2 = var_s7_2 & 0xFFFF;
  }
if (((u32) (var_s7_2 & 0xFFFF)) < 5U) goto __repair_rows;
  var_s7_3 = 0;
  var_v1_3 = 0 & 0xFFFF;
  do
  {
    temp_s0_3 = (var_v1_3 * 0x8F0) + (&D_8022A770);
    if ((*((u16 *) (((char *) temp_s0_3) + 2))) != 0xFFFF)
    {
      temp_fv0_3 = *((f32 *) (((char *) temp_s0_3) + 0x7C0));
      temp_fv1 = *((f32 *) (((char *) temp_s0_3) + 0x7C4));
      temp_fv1_2 = *((f32 *) (((char *) temp_s0_3) + 0x7C8));
      temp_fa0_2 = ((temp_fv0_3 * temp_fv0_3) + (temp_fv1 * temp_fv1)) + (temp_fv1_2 * temp_fv1_2);
      var_fv1_2 = sqrtf(temp_fa0_2);
      var_v0_4 = var_s7_3 & 0xFFFF;
      if (var_fv1_2 != var_fv1_2)
      {
        var_fv1_2 = sqrtf(temp_fa0_2);
        var_v0_4 = var_s7_3 & 0xFFFF;
      }
      *((u8 *) ((var_v0_4 * 4) + (&D_8022E600))) = (var_fv1_2 * 150.0f) + (*((f32 *) (((char *) temp_s0_3) + 0x760)));
      temp_v0_5 = *((u8 *) (((char *) temp_s0_3) + 0x8A1));
      switch (temp_v0_5)
      {
        case 1:
          var_v0_5 = ((var_s7_3 & 0xFFFF) * 4) + (&D_8022E600);
          var_fv0_2 = (*var_v0_5) * 1.5f;
          block_53:
        *var_v0_5 = var_fv0_2;

          break;

        case 4:
          var_v0_5 = ((var_s7_3 & 0xFFFF) * 4) + (&D_8022E600);
          var_fv0_2 = (*var_v0_5) * 1.2f;
          goto block_53;

        case 3:
          var_v0_5 = ((var_s7_3 & 0xFFFF) * 4) + (&D_8022E600);
          var_fv0_2 = 2.0f * (*var_v0_5);
          goto block_53;

        case 6:
          var_v0_5 = ((var_s7_3 & 0xFFFF) * 4) + (&D_8022E600);
          var_fv0_2 = (*var_v0_5) * 5.0f;
          goto block_53;

        case 7:
          var_v0_5 = ((var_s7_3 & 0xFFFF) * 4) + (&D_8022E600);
          var_fv0_2 = (*var_v0_5) * 10.0f;
          goto block_53;

      }

      if ((*((u16 *) (((char *) temp_s0_3) + 0x560))) & 0x20)
      {
        *((u8 *) (((var_s7_3 & 0xFFFF) * 4) + (&D_8022E600))) = 1e9f;
      }
    }
    var_s7_3 += 1;
    var_v1_3 = var_s7_3 & 0xFFFF;
  }
  while (((u32) (var_s7_3 & 0xFFFF)) < 6U);
  var_s7_4 = 0;
  var_v1_4 = 0 & 0xFFFF;
  do
  {
    temp_s0_4 = (var_v1_4 * 0x8F0) + (&D_8022A770);
    sp34 = ((*((u16 *) (((char *) temp_s0_4) + 2))) * 0x64) + (&D_8011F2F0);
    var_s3_3 = 0;
    temp_a3 = var_s7_4 & 0xFFFF;
    sp54 = temp_a3;
    sp5C = (temp_a3 * 4) + (&D_8022E600);
    sp64 = temp_a3 * 8;
    var_a0_4 = 0 & 0xFFFF;
    do {
    temp_s1_2 = (var_a0_4 * 0x8F0) + (&D_8022A770);

    temp_s2_3 = ((*((u16 *) (((char *) temp_s1_2) + 2))) * 0x64) + (&D_8011F2F0);
    if ((sp54 != var_a0_4) && ((*(((sp54 * 6) + (&D_8022A748)) + var_a0_4)) != 0))
    {
      temp_s5_2 = *((f32 *) (((char *) temp_s0_4) + 0x7C0));
      temp_s4_2 = *((f32 *) (((char *) temp_s0_4) + 0x7C8));
      temp_fa0_3 = (temp_s5_2 * temp_s5_2) + (temp_s4_2 * temp_s4_2);
      temp_fv0_4 = sqrtf(temp_fa0_3);
      var_fs1 = temp_fv0_4;
      if (temp_fv0_4 != temp_fv0_4)
      {
        var_fs1 = sqrtf(temp_fa0_3, var_a0_4);
      }
      temp_fs4 = ((*((f32 *) (((char *) temp_s2_3) + 0x18))) + (*((f32 *) (((char *) temp_s1_2) + 0x854)))) - ((*((f32 *) (((char *) sp34) + 0x18))) + (*((f32 *) (((char *) temp_s0_4) + 0x854))));
      temp_fs3 = ((*((f32 *) (((char *) temp_s2_3) + 0x20))) + (*((f32 *) (((char *) temp_s1_2) + 0x85C)))) - ((*((f32 *) (((char *) sp34) + 0x20))) + (*((f32 *) (((char *) temp_s0_4) + 0x85C))));
      var_fv0_3 = sqrtf((temp_fs4 * temp_fs4) + (temp_fs3 * temp_fs3));
      if (var_fv0_3 == 0.0f)
      {
        var_fv0_3 = 1.0f;
      }
      temp_fv0_5 = 1.0f / var_fv0_3;
      var_fs4 = temp_fs4 * temp_fv0_5;
      var_fs3_2 = temp_fs3 * temp_fv0_5;
      var_fs5 = -var_fs4;
      var_s2 = -var_fs3_2;
      if (var_fs1 == 0.0f)
      {
        var_fs0_2 = 0.0f;
      }
      else
      {
        var_fs0_2 = ((temp_s5_2 * var_fs4) + (temp_s4_2 * var_fs3_2)) / var_fs1;
        temp_fv0_6 = var_fs1 * var_fs0_2;
        var_fs4 *= temp_fv0_6;
        var_fs3_2 *= temp_fv0_6;
      }
      temp_fs2_2 = *((f32 *) (((char *) temp_s1_2) + 0x7C0));
      temp_fs1_2 = *((f32 *) (((char *) temp_s1_2) + 0x7C8));
      temp_fa0_4 = (temp_fs2_2 * temp_fs2_2) + (temp_fs1_2 * temp_fs1_2);
      temp_fv0_7 = sqrtf(temp_fa0_4);
      var_ft0 = temp_fv0_7;
      if (temp_fv0_7 != temp_fv0_7)
      {
        var_ft0 = sqrtf(temp_fa0_4);
      }
      if (var_ft0 != 0.0f)
      {
        temp_fv0_8 = var_ft0 * (((temp_fs2_2 * var_fs5) + (temp_fs1_2 * var_s2)) / var_ft0);
        var_fs5 *= temp_fv0_8;
        var_s2 *= temp_fv0_8;
      }
      if (((temp_s5_2 * temp_fs2_2) + (temp_s4_2 * temp_fs1_2)) > 0.0f)
      {
 do { if (!(var_fs0_2 < 0.0f)) { var_fs5 = -var_fs5; var_s2 = -var_s2; } else { var_fs3_2 = -var_fs3_2; var_fs4 = -var_fs4; } } while (0);
      }
      sp14 = temp_s5_2 - var_fs4;
      sp2C = temp_fs1_2 - var_s2;
      sp24 = temp_fs2_2 - var_fs5;
      sp1C = temp_s4_2 - var_fs3_2;
      if ((*(((var_s3_3 & 0xFFFF) * 4) + (&D_8022E600))) < (*sp5C))
      {
        temp_fa0_5 = (sp14 * sp14) + (sp1C * sp1C);
        temp_fv0_9 = sqrtf(temp_fa0_5);
        var_fv1_3 = temp_fv0_9;
        if (temp_fv0_9 != temp_fv0_9)
        {
          var_fv1_3 = sqrtf(temp_fa0_5);
        }
        if (var_fv1_3 == 0.0f)
        {
          var_ft0_2 = 0.0f;
        }
        else
        {
          var_ft0_2 = ((sp14 * var_fs4) + (sp1C * var_fs3_2)) / var_fv1_3;
        }
        temp_fv1_3 = *sp5C;
        if (temp_fv1_3 != 0.0f)
        {
          var_s6 = (*(((var_s3_3 & 0xFFFF) * 4) + (&D_8022E600))) / temp_fv1_3;
        }
        else
        {
          var_s6 = 1.0f;
        }
        if ((((u32) ((*((u8 *) (((char *) temp_s0_4) + 0x8A1))) - 6)) < 2U) || ((*((u16 *) (((char *) temp_s0_4) + 0x560))) & 0x20))
        {
          *((u8 *) (((char *) temp_s1_2) + 0x8A1)) = 3U;
          *((s8 *) (((char *) temp_s1_2) + 0x8C8)) = 0;
          *((f32 *) (((char *) temp_s1_2) + 0x8CC)) = 360.0f;
          temp_fs0 = (f32) (func_801F9D8C((s32) temp_fs1_2, (s32) temp_fs2_2) & 0xFFFF);
          if (func_801F9BE8(temp_fs0, (f32) (func_801F9D8C((s32) var_s2, (s32) var_fs5) & 0xFFFF)) < 0.0f)
          {
            *((s8 *) (((char *) temp_s1_2) + 0x8C9)) = 1;
          }
          else
          {
            *((s8 *) (((char *) temp_s1_2) + 0x8C9)) = -1;
          }
          var_v0_6 = temp_s1_2 + sp64;
          var_ft0_3 = *((f32 *) (((char *) var_v0_6) + 0x5B4));
          *((f32 *) (((char *) var_v0_6) + 0x5B4)) = (f32) (((1.0f - var_ft0_3) * (*((f32 *) (((char *) temp_s1_2) + 0x5A0)))) + var_ft0_3);
        }
        else
        {
          var_v0_7 = 1;
          if (!(var_ft0_2 < 0.4f))
          {
            var_v0_7 = 0;
          }
          var_v1_5 = 1;
          if (!(var_ft0_2 > (-0.4f)))
          {
            var_v1_5 = 0;
          }
          if (var_v0_7 & var_v1_5)
          {
            if (var_s6 < 0.7f)
            {
              *((u8 *) (((char *) temp_s1_2) + 0x8A1)) = 3U;
              *((s8 *) (((char *) temp_s1_2) + 0x8C8)) = 0;
              *((f32 *) (((char *) temp_s1_2) + 0x8CC)) = 360.0f;
              temp_fs0_2 = (f32) (func_801F9D8C((s32) temp_fs1_2, (s32) temp_fs2_2) & 0xFFFF);
              if (func_801F9BE8(temp_fs0_2, (f32) (func_801F9D8C((s32) var_s2, (s32) var_fs5) & 0xFFFF)) < 0.0f)
              {
                *((s8 *) (((char *) temp_s1_2) + 0x8C9)) = 1;
              }
              else
              {
                *((s8 *) (((char *) temp_s1_2) + 0x8C9)) = -1;
              }
            }
            var_v0_6 = temp_s1_2 + sp64;
            var_ft0_3 = *((f32 *) (((char *) var_v0_6) + 0x5B4));
            *((f32 *) (((char *) var_v0_6) + 0x5B4)) = (f32) ((((1.0f - var_ft0_3) * (*((f32 *) (((char *) temp_s1_2) + 0x5A0)))) * 0.5f) + var_ft0_3);
          }
          else
          {
            var_v0_6 = temp_s1_2 + sp64;
            var_ft0_3 = *((f32 *) (((char *) var_v0_6) + 0x5B4));
            *((f32 *) (((char *) var_v0_6) + 0x5B4)) = (f32) ((((1.0f - var_ft0_3) * (*((f32 *) (((char *) temp_s1_2) + 0x5A0)))) * 0.1f) + var_ft0_3);
          }
        }
        if (!((*((u16 *) (((char *) temp_s0_4) + 0x560))) & 0x20))
        {
          temp_fv0_10 = sp14 - ((var_fs4 * var_s6) * 0.3f);
          *((f32 *) (((char *) temp_s0_4) + 0x7B4)) = temp_fv0_10;
          *((f32 *) (((char *) temp_s0_4) + 0x7C0)) = temp_fv0_10;
          temp_fv0_11 = sp1C - ((var_fs3_2 * var_s6) * 0.3f);
          *((f32 *) (((char *) temp_s0_4) + 0x7BC)) = temp_fv0_11;
          *((f32 *) (((char *) temp_s0_4) + 0x7C8)) = temp_fv0_11;
        }
        temp_fv0_12 = sp24 + ((var_fs4 * 0.3f) * 0.1f);
        *((f32 *) (((char *) temp_s1_2) + 0x7B4)) = temp_fv0_12;
        *((f32 *) (((char *) temp_s1_2) + 0x7C0)) = temp_fv0_12;
        var_fv0_5 = sp2C + ((var_fs3_2 * 0.3f) * 0.1f);
        goto block_136;
      }
      temp_fa0_6 = (sp24 * sp24) + (sp2C * sp2C);
      temp_fv0_13 = sqrtf(temp_fa0_6);
      var_fv1_4 = temp_fv0_13;
      if (temp_fv0_13 != temp_fv0_13)
      {
        var_fv1_4 = sqrtf(temp_fa0_6);
      }
      if (var_fv1_4 == 0.0f)
      {
        var_ft0_4 = 0.0f;
      }
      else
      {
        var_ft0_4 = ((sp24 * var_fs5) + (sp2C * var_s2)) / var_fv1_4;
      }
      temp_fv1_4 = *(((var_s3_3 & 0xFFFF) * 4) + (&D_8022E600));
      if (temp_fv1_4 != 0.0f)
      {
        var_s6_2 = (*sp5C) / temp_fv1_4;
      }
      else
      {
        var_s6_2 = 1.0f;
      }
      if ((((u32) ((*((u8 *) (((char *) temp_s1_2) + 0x8A1))) - 6)) < 2U) || ((*((u16 *) (((char *) temp_s1_2) + 0x560))) & 0x20))
      {
        *((u8 *) (((char *) temp_s0_4) + 0x8A1)) = 3U;
        *((s8 *) (((char *) temp_s0_4) + 0x8C8)) = 0;
        *((f32 *) (((char *) temp_s0_4) + 0x8CC)) = 360.0f;
        *((s8 *) (((char *) temp_s0_4) + 0x8C9)) = 1;
        temp_fs0_3 = (f32) (func_801F9D8C((s32) temp_s4_2, (s32) temp_s5_2) & 0xFFFF);
        if (func_801F9BE8(temp_fs0_3, (f32) (func_801F9D8C((s32) var_fs3_2, (s32) var_fs4) & 0xFFFF)) < 0.0f)
        {
          *((s8 *) (((char *) temp_s0_4) + 0x8C9)) = 1;
        }
        else
        {
          *((s8 *) (((char *) temp_s0_4) + 0x8C9)) = -1;
        }
        var_v0_8 = temp_s0_4 + ((var_s3_3 & 0xFFFF) * 8);
        var_ft0_5 = *((f32 *) (((char *) var_v0_8) + 0x5B4));
        *((f32 *) (((char *) var_v0_8) + 0x5B4)) = (f32) (((1.0f - var_ft0_5) * (*((f32 *) (((char *) temp_s0_4) + 0x5A0)))) + var_ft0_5);
      }
      else
      {
        var_v0_9 = 1;
        if (!(var_ft0_4 < 0.4f))
        {
          var_v0_9 = 0;
        }
        var_v1_6 = 1;
        if (!(var_ft0_4 > (-0.4f)))
        {
          var_v1_6 = 0;
        }
        if (!(var_v0_9 & var_v1_6))
        {
          var_v0_8 = temp_s0_4 + ((var_s3_3 & 0xFFFF) * 8);
          var_ft0_5 = *((f32 *) (((char *) var_v0_8) + 0x5B4));
          *((f32 *) (((char *) var_v0_8) + 0x5B4)) = (f32) ((((1.0f - var_ft0_5) * (*((f32 *) (((char *) temp_s0_4) + 0x5A0)))) * 0.1f) + var_ft0_5);
        }
        else
        {
          if (var_s6_2 < 0.7f)
          {
            *((u8 *) (((char *) temp_s0_4) + 0x8A1)) = 3U;
            *((s8 *) (((char *) temp_s0_4) + 0x8C8)) = 0;
            *((s8 *) (((char *) temp_s0_4) + 0x8C9)) = 1;
            *((f32 *) (((char *) temp_s0_4) + 0x8CC)) = 360.0f;
            temp_fs0_4 = (f32) (func_801F9D8C((s32) temp_s4_2, (s32) temp_s5_2) & 0xFFFF);
            if (func_801F9BE8(temp_fs0_4, (f32) (func_801F9D8C((s32) var_fs3_2, (s32) var_fs4) & 0xFFFF)) < 0.0f)
            {
              *((s8 *) (((char *) temp_s0_4) + 0x8C9)) = 1;
            }
            else
            {
              *((s8 *) (((char *) temp_s0_4) + 0x8C9)) = -1;
            }
          }
          var_v0_8 = temp_s0_4 + ((var_s3_3 & 0xFFFF) * 8);
          var_ft0_5 = *((f32 *) (((char *) var_v0_8) + 0x5B4));
          *((f32 *) (((char *) var_v0_8) + 0x5B4)) = (f32) ((((1.0f - var_ft0_5) * (*((f32 *) (((char *) temp_s0_4) + 0x5A0)))) * 0.5f) + var_ft0_5);
        }
      }
      temp_fv0_14 = sp14 + ((var_fs5 * 0.3f) * 0.1f);
      *((f32 *) (((char *) temp_s0_4) + 0x7B4)) = temp_fv0_14;
      *((f32 *) (((char *) temp_s0_4) + 0x7C0)) = temp_fv0_14;
      temp_fv0_15 = sp1C + ((var_s2 * 0.3f) * 0.1f);
      *((f32 *) (((char *) temp_s0_4) + 0x7BC)) = temp_fv0_15;
      *((f32 *) (((char *) temp_s0_4) + 0x7C8)) = temp_fv0_15;
      if (!((*((u16 *) (((char *) temp_s1_2) + 0x560))) & 0x20))
      {
        temp_fv0_16 = sp24 - ((var_fs5 * var_s6_2) * 0.3f);
        *((f32 *) (((char *) temp_s1_2) + 0x7B4)) = temp_fv0_16;
        *((f32 *) (((char *) temp_s1_2) + 0x7C0)) = temp_fv0_16;
        var_fv0_5 = sp2C - ((var_s2 * var_s6_2) * 0.3f);
        block_136:
        *((f32 *) (((char *) temp_s1_2) + 0x7BC)) = var_fv0_5;

        *((f32 *) (((char *) temp_s1_2) + 0x7C8)) = var_fv0_5;
      }
      temp_v1_7 = var_s3_3 & 0xFFFF;
      *((u8 *) (((sp54 * 6) + (&D_8022A748)) + temp_v1_7)) = 0;
      *((u8 *) (((temp_v1_7 * 6) + (&D_8022A748)) + sp54)) = 0;
      *((s8 *) (((char *) temp_s0_4) + 0x8D0)) = 0x78;
      *((s8 *) (((char *) temp_s1_2) + 0x8D0)) = 0x78;
    }
    var_s3_3 += 1;
    var_a0_4 = var_s3_3 & 0xFFFF;
    } while (((u32) (var_s3_3 & 0xFFFF)) < 6U);
    var_s7_4 += 1;
    var_v1_4 = var_s7_4 & 0xFFFF;
  }
  while (((u32) (var_s7_4 & 0xFFFF)) < 6U);
  var_s7_5 = 0;
  var_a0_5 = 0 & 0xFFFF;
  do
  {
    func_8022976C(var_a0_5, 0, 5);
    var_s7_5 += 1;
    var_a0_5 = var_s7_5 & 0xFFFF;
  }
  while (((u32) (var_s7_5 & 0xFFFF)) < 6U);
}
