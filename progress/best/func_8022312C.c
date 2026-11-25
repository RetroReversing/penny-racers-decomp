f32 func_801F9BE8(f32, f32, u16);
f32 func_801FA4B0(s32, s32, f32, f32, f32, f32, f32, f32);
f32 sqrtf(f32);
extern s32 D_8006FAF0;
extern u8 D_8011F2F0[];
extern void *D_801C7AB0;
extern s32 D_802352CC;
extern s32 D_802352F4;
extern s32 D_80235C60;
void func_8022312C(void *arg0_in)
{
  void *arg0;
  s32 __repair_operand;
  f32 temp_fa0;
  f32 temp_fa0_2;
  f32 temp_fa0_3;
  f32 temp_fa0_4;
  f32 temp_fs0;
  f32 temp_fs0_2;
  f32 temp_fs0_3;
  f32 temp_fs0_4;
  f32 temp_fs0_5;
  f32 temp_fs0_6;
  f32 temp_fs0_7;
  f32 temp_fs0_8;
  f32 temp_fs1;
  f32 temp_fs1_2;
  f32 temp_fs1_3;
  f32 temp_fs1_4;
  f32 temp_fs1_5;
  f32 temp_fs1_6;
  f32 temp_fs1_7;
  f32 temp_fs1_8;
  f32 temp_ft1;
  f32 temp_ft1_10;
  f32 temp_ft1_11;
  f32 temp_ft1_12;
  f32 temp_ft1_2;
  f32 temp_ft1_3;
  f32 temp_ft1_4;
  f32 temp_ft1_5;
  f32 temp_ft1_6;
  f32 temp_ft1_7;
  f32 temp_ft1_8;
  f32 temp_ft1_9;
  f32 temp_ft2;
  f32 temp_ft2_2;
  f32 temp_ft2_3;
  f32 temp_ft2_4;
  f32 temp_ft2_5;
  f32 temp_ft2_6;
  f32 temp_ft2_7;
  f32 temp_ft2_8;
  f32 temp_fv0;
  f32 temp_fv0_2;
  f32 temp_fv0_3;
  f32 temp_fv0_4;
  f32 temp_fv0_5;
  f32 temp_fv1;
  f32 temp_fv1_2;
  f32 temp_fv1_3;
  f32 temp_fv1_4;
  f32 var_ft0;
  f32 var_ft0_2;
  f32 var_ft0_3;
  f32 var_ft0_4;
  f32 var_ft0_5;
  s16 var_v0_3;
  s32 temp_s5;
  s32 var_v0_2;
  s32 __repair_phase_var_v0_2;
  u16 temp_a0;
  u8 temp_a0_2;
  u8 temp_a1;
  u8 temp_s4;
  u8 var_a0;
  void *temp_a0_3;
  void *temp_a0_4;
  void *temp_a0_5;
  void *temp_a1_2;
  void *temp_s1;
  void *temp_s2;
  void *temp_s3;
  temp_s2 = ((*((u16 *) (((char *) arg0) + 2))) * 0x64) + D_8011F2F0;
  arg0 = arg0_in;
  temp_s5 = *((s32 *) (((s8 *) (&D_802352CC)) + ((*((u16 *) (((char *) (&D_8006FAF0)) + 0x20))) * 4)));
  temp_s4 = *((u8 *) (((s8 *) (&D_802352F4)) + (*((u16 *) (((char *) (&D_8006FAF0)) + 0x20)))));
  temp_a0 = *((u16 *) (((char *) arg0) + 0x8E4));
  __repair_operand = *((s32 *) (((char *) arg0) + 0x8DC));
  temp_s1 = (temp_a0 * 0x6C) + __repair_operand;
  __repair_phase_var_v0_2 = *((s32 *) (((char *) arg0) + 0x8E0)); temp_s3 = (temp_a0 * 0xC) + __repair_phase_var_v0_2;
  temp_fv0 = func_801F9BE8(*((f32 *) (((char *) temp_s2) + 0x28)), *((f32 *) (((s8 *) (&D_80235C60)) + ((*((u8 *) (((char *) arg0) + 0x597))) * 4))), temp_a0);
  var_ft0 = temp_fv0;
  if (!(temp_fv0 > 0.0f))
  {
    var_ft0 = -temp_fv0;
  }
  if ((((var_ft0 > 120.0f) && ((*((u8 *) (((char *) arg0) + 0x8A1))) == 0)) && ((*((u8 *) (((char *) arg0) + 0x870))) == 0)) && ((*((u8 *) (((char *) arg0) + 0x879))) == 0))
  {
    temp_a0 = (*((u16 *) (((char *) arg0) + 6))) | 2;
  }
  else
  {
    temp_a0 = (*((u16 *) (((char *) arg0) + 6))) & 0xFFFD;
  }
  *((u16 *) (((char *) arg0) + 6)) = temp_a0;
  temp_ft2 = (*((f32 *) (((char *) temp_s2) + 0x18))) - (*((f32 *) (((char *) temp_s1) + 0)));
  temp_ft1 = (*((f32 *) (((char *) temp_s2) + 0x20))) - (*((f32 *) (((char *) temp_s1) + 4)));
  if (((temp_ft2 * (*((f32 *) (((char *) temp_s1) + 0x30)))) + (temp_ft1 * (*((f32 *) (((char *) temp_s1) + 0x34))))) > 0.0f)
  {
    if ((*((s16 *) (((char *) temp_s1) + 0x20))) != (-1))
    {
      if ((*((u8 *) (((char *) arg0) + 0x879))) == 0)
      {
        *((f32 *) (((char *) temp_s3) + 0)) = (f32) (func_801FA4B0(0, 0, (*((f32 *) (((char *) temp_s1) + 0x28))) * 100.0f, (*((f32 *) (((char *) temp_s1) + 0x2C))) * 100.0f, temp_ft2, temp_ft1, *((f32 *) (((char *) arg0) + 0x7B4)), *((f32 *) (((char *) arg0) + 0x7BC))) * 100.0f);
 do { *((f32 *) (((char *) temp_s3) + 4)) = (f32) (*((f32 *) (((char *) arg0) + 0x770))); *((s8 *) (((char *) temp_s3) + 8)) = 0; } while (0);
      }
      *((u16 *) (((char *) arg0) + 0x8E6)) = (u16) (*((u16 *) (((char *) arg0) + 0x8E4)));
      *((u16 *) (((char *) arg0) + 0x8E4)) = (u16) (*((s16 *) (((char *) temp_s1) + 0x20)));
      *((s16 *) (((char *) arg0) + 0x8E8)) = 0;
      if ((((((*((u16 *) (((char *) (&D_8006FAF0)) + 0x20))) == 0) && ((*((u8 *) (((char *) D_801C7AB0) + 1))) == 6)) && ((temp_a0_2 = *((u8 *) (((char *) D_801C7AB0) + 2)), (*((u16 *) (((char *) arg0) + 0x8E6))) == (temp_a0_2 - 2)))) && ((*((u16 *) (((char *) arg0) + 0x8E4))) == (temp_a0_2 - 1))) || (((s32) (*((u16 *) (((char *) arg0) + 0x8E4)))) == 0x10000))
      {
        *((u16 *) (((char *) arg0) + 0x594)) = (u16) ((*((u16 *) (((char *) arg0) + 0x594))) + 1);
      }
      temp_a0_3 = ((*((u8 *) (((char *) arg0) + 0x597))) * 2) + temp_s5;
      if ((*((u16 *) (((char *) arg0) + 0x8E6))) == (*((u8 *) (((char *) temp_a0_3) + 0))))
      {
        var_v0_2 = temp_s4 & 0xFF;
        if ((*((u16 *) (((char *) arg0) + 0x8E4))) == (*((u8 *) (((char *) temp_a0_3) + 1))))
        {
          goto block_20;
        }
      }
      goto block_24;
    }
    temp_ft1_2 = func_801FA4B0(0, 0, (*((f32 *) (((char *) temp_s1) + 0x28))) * 100.0f, (*((f32 *) (((char *) temp_s1) + 0x2C))) * 100.0f, temp_ft2, temp_ft1, *((f32 *) (((char *) arg0) + 0x7B4)), *((f32 *) (((char *) arg0) + 0x7BC))) * 100.0f;
    *((f32 *) (((char *) arg0) + 0x854)) = (f32) ((*((f32 *) (((char *) arg0) + 0x854))) - ((((temp_ft1_2 * (*((f32 *) (((char *) temp_s1) + 0x28)))) + (*((f32 *) (((char *) temp_s1) + 0)))) + ((*((f32 *) (((char *) temp_s1) + 0x30))) * 40.0f)) - (*((f32 *) (((char *) temp_s2) + 0x18)))));
    *((f32 *) (((char *) arg0) + 0x85C)) = (f32) ((*((f32 *) (((char *) arg0) + 0x85C))) - ((((temp_ft1_2 * (*((f32 *) (((char *) temp_s1) + 0x2C)))) + (*((f32 *) (((char *) temp_s1) + 4)))) + ((*((f32 *) (((char *) temp_s1) + 0x34))) * 40.0f)) - (*((f32 *) (((char *) temp_s2) + 0x20)))));
    temp_fs0 = *((f32 *) (((char *) arg0) + 0x7C0));
    temp_fs1 = *((f32 *) (((char *) arg0) + 0x7C8));
    temp_fa0 = (temp_fs0 * temp_fs0) + (temp_fs1 * temp_fs1);
    temp_fv0_2 = sqrtf(temp_fa0);
    var_ft0_2 = temp_fv0_2;
    do
    {
      if (temp_fv0_2 != temp_fv0_2)
      {
        var_ft0_2 = sqrtf(temp_fa0);
      }
      temp_ft1_3 = *((f32 *) (((char *) temp_s1) + 0x30)); temp_ft2_2 = *((f32 *) (((char *) temp_s1) + 0x34));
    }
    while (0);
    if (var_ft0_2 != 0.0f)
    {
      temp_fv1 = ((((temp_fs0 * temp_ft1_3) + (temp_fs1 * temp_ft2_2)) / var_ft0_2) * var_ft0_2) * (-1.3f);
      temp_fs0_2 = temp_fs0 + (temp_ft1_3 * temp_fv1);
      temp_fs1_2 = temp_fs1 + (temp_ft2_2 * temp_fv1);
      *((f32 *) (((char *) arg0) + 0x7B4)) = temp_fs0_2;
      *((f32 *) (((char *) arg0) + 0x7BC)) = temp_fs1_2;
      *((f32 *) (((char *) arg0) + 0x7C0)) = temp_fs0_2;
      *((f32 *) (((char *) arg0) + 0x7C8)) = temp_fs1_2;
      do
      {
        *((f32 *) (((char *) arg0) + 0x7C4)) = 3.0f;
        *((s8 *) (((char *) arg0) + 0x8D0)) = 0x78;
      }
      while (0);
    }
    goto block_30;
  }
  block_30:
  temp_ft2_3 = (*((f32 *) (((char *) temp_s2) + 0x18))) - (*((f32 *) (((char *) temp_s1) + 8)));

  temp_ft1_4 = (*((f32 *) (((char *) temp_s2) + 0x20))) - (*((f32 *) (((char *) temp_s1) + 0xC)));
  if (((temp_ft2_3 * (*((f32 *) (((char *) temp_s1) + 0x40)))) + (temp_ft1_4 * (*((f32 *) (((char *) temp_s1) + 0x44))))) > 0.0f)
  {
    if ((*((s16 *) (((char *) temp_s1) + 0x22))) != (-1))
    {
      if ((*((u8 *) (((char *) arg0) + 0x879))) == 0)
      {
        *((f32 *) (((char *) temp_s3) + 0)) = (f32) (func_801FA4B0(0, 0, (*((f32 *) (((char *) temp_s1) + 0x38))) * 100.0f, (*((f32 *) (((char *) temp_s1) + 0x3C))) * 100.0f, temp_ft2_3, temp_ft1_4, *((f32 *) (((char *) arg0) + 0x7B4)), *((f32 *) (((char *) arg0) + 0x7BC))) * 100.0f);
        do
        {
          *((f32 *) (((char *) temp_s3) + 4)) = (f32) (*((f32 *) (((char *) arg0) + 0x770)));
        }
        while (0);
        *((s8 *) (((char *) temp_s3) + 8)) = 1;
      }
      *((u16 *) (((char *) arg0) + 0x8E6)) = (u16) (*((u16 *) (((char *) arg0) + 0x8E4)));
      *((u16 *) (((char *) arg0) + 0x8E4)) = (u16) (*((s16 *) (((char *) temp_s1) + 0x22)));
      var_v0_3 = 1;
      goto block_44;
    }
    temp_ft1_5 = func_801FA4B0(0, 0, (*((f32 *) (((char *) temp_s1) + 0x38))) * 100.0f, (*((f32 *) (((char *) temp_s1) + 0x3C))) * 100.0f, temp_ft2_3, temp_ft1_4, *((f32 *) (((char *) arg0) + 0x7B4)), *((f32 *) (((char *) arg0) + 0x7BC))) * 100.0f;
    *((f32 *) (((char *) arg0) + 0x854)) = (f32) ((*((f32 *) (((char *) arg0) + 0x854))) - ((((temp_ft1_5 * (*((f32 *) (((char *) temp_s1) + 0x38)))) + (*((f32 *) (((char *) temp_s1) + 8)))) + ((*((f32 *) (((char *) temp_s1) + 0x40))) * 40.0f)) - (*((f32 *) (((char *) temp_s2) + 0x18)))));
    *((f32 *) (((char *) arg0) + 0x85C)) = (f32) ((*((f32 *) (((char *) arg0) + 0x85C))) - ((((temp_ft1_5 * (*((f32 *) (((char *) temp_s1) + 0x3C)))) + (*((f32 *) (((char *) temp_s1) + 0xC)))) + ((*((f32 *) (((char *) temp_s1) + 0x44))) * 40.0f)) - (*((f32 *) (((char *) temp_s2) + 0x20)))));
    temp_fs0_3 = *((f32 *) (((char *) arg0) + 0x7C0));
    temp_fs1_3 = *((f32 *) (((char *) arg0) + 0x7C8));
    temp_fa0_2 = (temp_fs0_3 * temp_fs0_3) + (temp_fs1_3 * temp_fs1_3);
    temp_fv0_3 = sqrtf(temp_fa0_2);
    var_ft0_3 = temp_fv0_3;
    if (temp_fv0_3 != temp_fv0_3)
    {
      var_ft0_3 = sqrtf(temp_fa0_2);
    }
    temp_ft1_6 = *((f32 *) (((char *) temp_s1) + 0x40));
    temp_ft2_4 = *((f32 *) (((char *) temp_s1) + 0x44));
    if (var_ft0_3 != 0.0f)
    {
      temp_fv1_2 = ((((temp_fs0_3 * temp_ft1_6) + (temp_fs1_3 * temp_ft2_4)) / var_ft0_3) * var_ft0_3) * (-1.3f);
      temp_fs0_4 = temp_fs0_3 + (temp_ft1_6 * temp_fv1_2);
      temp_fs1_4 = temp_fs1_3 + (temp_ft2_4 * temp_fv1_2);
      *((f32 *) (((char *) arg0) + 0x7B4)) = temp_fs0_4;
      *((f32 *) (((char *) arg0) + 0x7BC)) = temp_fs1_4;
      *((f32 *) (((char *) arg0) + 0x7C0)) = temp_fs0_4;
      *((f32 *) (((char *) arg0) + 0x7C8)) = temp_fs1_4;
      *((f32 *) (((char *) arg0) + 0x7C4)) = 3.0f;
      *((s8 *) (((char *) arg0) + 0x8D0)) = 0x78;
    }
    goto block_39;
  }
  block_39:
  temp_ft2_5 = (*((f32 *) (((char *) temp_s2) + 0x18))) - (*((f32 *) (((char *) temp_s1) + 0x10)));

  temp_ft1_7 = (*((f32 *) (((char *) temp_s2) + 0x20))) - (*((f32 *) (((char *) temp_s1) + 0x14)));
  if (((temp_ft2_5 * (*((f32 *) (((char *) temp_s1) + 0x50)))) + (temp_ft1_7 * (*((f32 *) (((char *) temp_s1) + 0x54))))) > 0.0f)
  {
    u8 var_a0_arm;
    if ((*((s16 *) (((char *) temp_s1) + 0x24))) != (-1))
    {
      if ((*((u8 *) (((char *) arg0) + 0x879))) == 0)
      {
        *((f32 *) (((char *) temp_s3) + 0)) = (f32) (func_801FA4B0(0, 0, (*((f32 *) (((char *) temp_s1) + 0x48))) * 100.0f, (*((f32 *) (((char *) temp_s1) + 0x4C))) * 100.0f, temp_ft2_5, temp_ft1_7, *((f32 *) (((char *) arg0) + 0x7B4)), *((f32 *) (((char *) arg0) + 0x7BC))) * 100.0f);
        *((f32 *) (((char *) temp_s3) + 4)) = (f32) (*((f32 *) (((char *) arg0) + 0x770)));
        *((s8 *) (((char *) temp_s3) + 8)) = 2;
      }
      *((u16 *) (((char *) arg0) + 0x8E6)) = (u16) (*((u16 *) (((char *) arg0) + 0x8E4)));
      *((u16 *) (((char *) arg0) + 0x8E4)) = (u16) (*((s16 *) (((char *) temp_s1) + 0x24)));
      var_v0_3 = 2;
      block_44:
      *((s16 *) (((char *) arg0) + 0x8E8)) = var_v0_3;

      if (((s32) (*((u16 *) (((char *) arg0) + 0x8E4)))) == 1)
      {
        *((u16 *) (((char *) arg0) + 0x594)) = (u16) ((*((u16 *) (((char *) arg0) + 0x594))) - 1);
      }
      temp_a0_4 = ((*((u8 *) (((char *) arg0) + 0x597))) * 2) + temp_s5;
      if ((*((u16 *) (((char *) arg0) + 0x8E6))) == (*((u8 *) (((char *) temp_a0_4) + 0))))
      {
        var_v0_2 = temp_s4 & 0xFF;
        if ((*((u16 *) (((char *) arg0) + 0x8E4))) != (*((u8 *) (((char *) temp_a0_4) + 1))))
        {
          goto block_24;
        }
        block_20:
        if ((*((u8 *) (((char *) arg0) + 0x597))) == var_v0_2)
        {
          *((u8 *) (((char *) arg0) + 0x597)) = 0U;
          return;
        }

        goto block_63;
      }
      block_24:
      var_a0_arm = temp_s4;

      if ((*((u8 *) (((char *) arg0) + 0x597))) != 0)
      {
        if (temp_s1)
        {
          goto block_65;
        }
        else
        {
          goto block_65;
        }
      }
      goto block_66;
    }
    temp_ft1_8 = func_801FA4B0(0, 0, (*((f32 *) (((char *) temp_s1) + 0x48))) * 100.0f, (*((f32 *) (((char *) temp_s1) + 0x4C))) * 100.0f, temp_ft2_5, temp_ft1_7, *((f32 *) (((char *) arg0) + 0x7B4)), *((f32 *) (((char *) arg0) + 0x7BC))) * 100.0f;
    *((f32 *) (((char *) arg0) + 0x854)) = (f32) ((*((f32 *) (((char *) arg0) + 0x854))) - ((((temp_ft1_8 * (*((f32 *) (((char *) temp_s1) + 0x48)))) + (*((f32 *) (((char *) temp_s1) + 0x10)))) + ((*((f32 *) (((char *) temp_s1) + 0x50))) * 40.0f)) - (*((f32 *) (((char *) temp_s2) + 0x18)))));
    *((f32 *) (((char *) arg0) + 0x85C)) = (f32) ((*((f32 *) (((char *) arg0) + 0x85C))) - ((((*((f32 *) (((char *) temp_s1) + 0x14))) + (temp_ft1_8 * (*((f32 *) (((char *) temp_s1) + 0x4C))))) + ((*((f32 *) (((char *) temp_s1) + 0x54))) * 40.0f)) - (*((f32 *) (((char *) temp_s2) + 0x20)))));
    temp_fs0_5 = *((f32 *) (((char *) arg0) + 0x7C0));
    temp_fs1_5 = *((f32 *) (((char *) arg0) + 0x7C8));
    temp_fa0_3 = (temp_fs0_5 * temp_fs0_5) + (temp_fs1_5 * temp_fs1_5);
    temp_fv0_4 = sqrtf(temp_fa0_3);
    var_ft0_4 = temp_fv0_4;
    if (temp_fv0_4 != temp_fv0_4)
    {
      var_ft0_4 = sqrtf(temp_fa0_3);
    }
    temp_ft1_9 = *((f32 *) (((char *) temp_s1) + 0x50));
    temp_ft2_6 = *((f32 *) (((char *) temp_s1) + 0x54));
    if (var_ft0_4 != 0.0f)
    {
      if (temp_s1 || arg0)
      {
        temp_fv1_3 = ((((temp_fs0_5 * temp_ft1_9) + (temp_fs1_5 * temp_ft2_6)) / var_ft0_4) * var_ft0_4) * (-1.3f);
        temp_fs0_6 = temp_fs0_5 + (temp_ft1_9 * temp_fv1_3);
        temp_fs1_6 = temp_fs1_5 + (temp_ft2_6 * temp_fv1_3);
        *((f32 *) (((char *) arg0) + 0x7B4)) = temp_fs0_6;
        *((f32 *) (((char *) arg0) + 0x7BC)) = temp_fs1_6;
        *((f32 *) (((char *) arg0) + 0x7C0)) = temp_fs0_6;
        *((f32 *) (((char *) arg0) + 0x7C8)) = temp_fs1_6;
        *((f32 *) (((char *) arg0) + 0x7C4)) = 3.0f;
        *((s8 *) (((char *) arg0) + 0x8D0)) = 0x78;
      }
      else
      {
        temp_fv1_3 = ((((temp_fs0_5 * temp_ft1_9) + (temp_fs1_5 * temp_ft2_6)) / var_ft0_4) * var_ft0_4) * (-1.3f);
        temp_fs0_6 = temp_fs0_5 + (temp_ft1_9 * temp_fv1_3);
        temp_fs1_6 = temp_fs1_5 + (temp_ft2_6 * temp_fv1_3);
        *((f32 *) (((char *) arg0) + 0x7B4)) = temp_fs0_6;
        *((f32 *) (((char *) arg0) + 0x7BC)) = temp_fs1_6;
        *((f32 *) (((char *) arg0) + 0x7C0)) = temp_fs0_6;
        *((f32 *) (((char *) arg0) + 0x7C8)) = temp_fs1_6;
        *((f32 *) (((char *) arg0) + 0x7C4)) = 3.0f;
        *((s8 *) (((char *) arg0) + 0x8D0)) = 0x78;
      }
    }
    goto block_53;
  }
  block_53:
  temp_ft2_7 = (*((f32 *) (((char *) temp_s2) + 0x18))) - (*((f32 *) (((char *) temp_s1) + 0x18)));

  temp_ft1_10 = (*((f32 *) (((char *) temp_s2) + 0x20))) - (*((f32 *) (((char *) temp_s1) + 0x1C)));
  if (((temp_ft2_7 * (*((f32 *) (((char *) temp_s1) + 0x60)))) + (temp_ft1_10 * (*((f32 *) (((char *) temp_s1) + 0x64))))) > 0.0f)
  {
    if ((*((s16 *) (((char *) temp_s1) + 0x26))) != (-1))
    {
      if ((*((u8 *) (((char *) arg0) + 0x879))) == 0)
      {
        *((f32 *) (((char *) temp_s3) + 0)) = (f32) (func_801FA4B0(0, 0, (*((f32 *) (((char *) temp_s1) + 0x58))) * 100.0f, (*((f32 *) (((char *) temp_s1) + 0x5C))) * 100.0f, temp_ft2_7, temp_ft1_10, *((f32 *) (((char *) arg0) + 0x7B4)), *((f32 *) (((char *) arg0) + 0x7BC))) * 100.0f);
        *((f32 *) (((char *) temp_s3) + 4)) = (f32) (*((f32 *) (((char *) arg0) + 0x770)));
        *((s8 *) (((char *) temp_s3) + 8)) = 3;
      }
      *((u16 *) (((char *) arg0) + 0x8E6)) = (u16) (*((u16 *) (((char *) arg0) + 0x8E4)));
      *((u16 *) (((char *) arg0) + 0x8E4)) = (u16) (*((s16 *) (((char *) temp_s1) + 0x26)));
      *((s16 *) (((char *) arg0) + 0x8E8)) = 3;
      if (((s32) (*((u16 *) (((char *) arg0) + 0x8E4)))) == 1)
      {
        *((u16 *) (((char *) arg0) + 0x594)) = (u16) ((*((u16 *) (((char *) arg0) + 0x594))) - 1);
      }
      temp_a1 = *((u8 *) (((char *) arg0) + 0x597));
      temp_a0_5 = (temp_a1 * 2) + temp_s5;
      if (((*((u16 *) (((char *) arg0) + 0x8E6))) == (*((u8 *) (((char *) temp_a0_5) + 0)))) && ((*((u16 *) (((char *) arg0) + 0x8E4))) == (*((u8 *) (((char *) temp_a0_5) + 1)))))
      {
        if (temp_a1 == (temp_s4 & 0xFF))
        {
          if (arg0)
          {
            *((u8 *) (((char *) arg0) + 0x597)) = 0U;
            return;
          }
          else
          {
            *((u8 *) (((char *) arg0) + 0x597)) = 0U;
            return;
          }
        }
        block_63:
        *((u8 *) (((char *) arg0) + 0x597)) = (u8) ((*((u8 *) (((char *) arg0) + 0x597))) + 1);

        return;
      }
      var_a0 = temp_s4;
      if ((*((u8 *) (((char *) arg0) + 0x597))) != 0)
      {
        block_65:
        var_a0 = (*((u8 *) (((char *) arg0) + 0x597))) - 1;

      }
      block_66:
      temp_a1_2 = ((var_a0 & 0xFF) * 2) + temp_s5;

      if ((*((u16 *) (((char *) arg0) + 0x8E6))) == (*((u8 *) (((char *) temp_a1_2) + 1))))
      {
        if ((*((u16 *) (((char *) arg0) + 0x8E4))) == (*((u8 *) (((char *) temp_a1_2) + 0))))
        {
          *((u8 *) (((char *) arg0) + 0x597)) = var_a0;
        }
      }
    }
    else
    {
      if (arg0 || temp_s1)
      {
        temp_ft1_11 = func_801FA4B0(0, 0, (*((f32 *) (((char *) temp_s1) + 0x58))) * 100.0f, (*((f32 *) (((char *) temp_s1) + 0x5C))) * 100.0f, temp_ft2_7, temp_ft1_10, *((f32 *) (((char *) arg0) + 0x7B4)), *((f32 *) (((char *) arg0) + 0x7BC))) * 100.0f;
        *((f32 *) (((char *) arg0) + 0x854)) = (f32) ((*((f32 *) (((char *) arg0) + 0x854))) - ((((temp_ft1_11 * (*((f32 *) (((char *) temp_s1) + 0x58)))) + (*((f32 *) (((char *) temp_s1) + 0x18)))) + ((*((f32 *) (((char *) temp_s1) + 0x60))) * 40.0f)) - (*((f32 *) (((char *) temp_s2) + 0x18)))));
        *((f32 *) (((char *) arg0) + 0x85C)) = (f32) ((*((f32 *) (((char *) arg0) + 0x85C))) - ((((temp_ft1_11 * (*((f32 *) (((char *) temp_s1) + 0x5C)))) + (*((f32 *) (((char *) temp_s1) + 0x1C)))) + ((*((f32 *) (((char *) temp_s1) + 0x64))) * 40.0f)) - (*((f32 *) (((char *) temp_s2) + 0x20)))));
        temp_fs0_7 = *((f32 *) (((char *) arg0) + 0x7C0));
        temp_fs1_7 = *((f32 *) (((char *) arg0) + 0x7C8));
        temp_fa0_4 = (temp_fs0_7 * temp_fs0_7) + (temp_fs1_7 * temp_fs1_7);
        temp_fv0_5 = sqrtf(temp_fa0_4);
        var_ft0_5 = temp_fv0_5;
      }
      else
      {
        temp_ft1_11 = func_801FA4B0(0, 0, (*((f32 *) (((char *) temp_s1) + 0x58))) * 100.0f, (*((f32 *) (((char *) temp_s1) + 0x5C))) * 100.0f, temp_ft2_7, temp_ft1_10, *((f32 *) (((char *) arg0) + 0x7B4)), *((f32 *) (((char *) arg0) + 0x7BC))) * 100.0f;
        *((f32 *) (((char *) arg0) + 0x854)) = (f32) ((*((f32 *) (((char *) arg0) + 0x854))) - ((((temp_ft1_11 * (*((f32 *) (((char *) temp_s1) + 0x58)))) + (*((f32 *) (((char *) temp_s1) + 0x18)))) + ((*((f32 *) (((char *) temp_s1) + 0x60))) * 40.0f)) - (*((f32 *) (((char *) temp_s2) + 0x18)))));
        *((f32 *) (((char *) arg0) + 0x85C)) = (f32) ((*((f32 *) (((char *) arg0) + 0x85C))) - ((((temp_ft1_11 * (*((f32 *) (((char *) temp_s1) + 0x5C)))) + (*((f32 *) (((char *) temp_s1) + 0x1C)))) + ((*((f32 *) (((char *) temp_s1) + 0x64))) * 40.0f)) - (*((f32 *) (((char *) temp_s2) + 0x20)))));
        temp_fs0_7 = *((f32 *) (((char *) arg0) + 0x7C0));
        temp_fs1_7 = *((f32 *) (((char *) arg0) + 0x7C8));
        temp_fa0_4 = (temp_fs0_7 * temp_fs0_7) + (temp_fs1_7 * temp_fs1_7);
        temp_fv0_5 = sqrtf(temp_fa0_4);
        var_ft0_5 = temp_fv0_5;
      }
      if (temp_fv0_5 != temp_fv0_5)
      {
        var_ft0_5 = sqrtf(temp_fa0_4);
      }
      temp_ft2_8 = *((f32 *) (((char *) temp_s1) + 0x64));
      temp_ft1_12 = *((f32 *) (((char *) temp_s1) + 0x60));
      if (var_ft0_5 != 0.0f)
      {
        do
        {
          temp_fv1_4 = ((((temp_fs0_7 * temp_ft1_12) + (temp_fs1_7 * temp_ft2_8)) / var_ft0_5) * var_ft0_5) * (-1.3f); temp_fs0_8 = temp_fs0_7 + (temp_ft1_12 * temp_fv1_4); temp_fs1_8 = temp_fs1_7 + (temp_ft2_8 * temp_fv1_4);
          *((f32 *) (((char *) arg0) + 0x7B4)) = temp_fs0_8;
          *((f32 *) (((char *) arg0) + 0x7BC)) = temp_fs1_8;
          *((f32 *) (((char *) arg0) + 0x7C0)) = temp_fs0_8;
        }
        while (0);
        *((f32 *) (((char *) arg0) + 0x7C8)) = temp_fs1_8;
        *((f32 *) (((char *) arg0) + 0x7C4)) = 3.0f;
        *((s8 *) (((char *) arg0) + 0x8D0)) = 0x78;
      }
    }
  }
}
