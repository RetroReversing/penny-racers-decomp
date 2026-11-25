s32 func_801D7028(u16, s32);
f32 sqrtf(f32);
extern u8 D_8021E144;
inline static f32 inline_fn(f32 *arg0)
{
  return *arg0;
}

void func_80226280(void *arg0)
{
  f32 temp_fa0;
  f32 temp_fa0_2;
  f32 temp_fa0_3;
  f32 temp_fa0_4;
  f32 temp_fs0;
  f32 temp_fs0_2;
  f32 temp_fs1;
  f32 temp_fs2;
  f32 temp_fs2_2;
  f32 temp_fs3;
  f32 temp_fs3_2;
  f32 temp_ft0;
  f32 temp_ft1;
  f32 temp_ft2;
  f32 temp_fv0;
  f32 temp_fv0_10;
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
  f32 var_fs0;
  f32 __repair_var_fs0_1;
  f32 var_fs4;
  f32 __repair_var_fs4_1;
  f32 var_fs4_2;
  f32 var_ft0;
  f32 var_fv1;
  f32 var_fv1_2;
  s32 var_v0;
  s32 var_v1;
  s32 var_v1_2;
  *((f32 *) (((char *) arg0) + 0x79C)) = (f32) (((*((f32 *) (((char *) arg0) + 0x818))) - inline_fn((f32 *) (((char *) arg0) + 0x79C))) - inline_fn((f32 *) (((char *) arg0) + 0x7C0)));
  *((f32 *) (((char *) arg0) + 0x7A0)) = (f32) ((inline_fn((f32 *) (((char *) arg0) + 0x81C)) - inline_fn((f32 *) (((char *) arg0) + 0x7A0))) - (*((f32 *) (((char *) arg0) + 0x7C4))));
  *((f32 *) (((char *) arg0) + 0x7A4)) = (f32) ((inline_fn((f32 *) (((char *) arg0) + 0x820)) - (*((f32 *) (((char *) arg0) + 0x7A4)))) - (*((f32 *) (((char *) arg0) + 0x7C8))));
  temp_fv0 = *((f32 *) (((char *) arg0) + 0x790));
  temp_fv0_2 = inline_fn((f32 *) (((char *) arg0) + 0x798));
  temp_fa0 = (temp_fv0 * temp_fv0) + (temp_fv0_2 * temp_fv0_2);
  temp_fv0_3 = sqrtf(temp_fa0);
  var_fs4 = temp_fv0_3;
  if (temp_fv0_3 != temp_fv0_3)
  {
    __repair_var_fs4_1 = sqrtf(temp_fa0);
  }
  temp_fv0_4 = inline_fn((f32 *) (((char *) arg0) + 0x7C0));
  temp_fv0_5 = *((f32 *) (((char *) arg0) + 0x7C8));
  temp_fa0_2 = (temp_fv0_4 * temp_fv0_4) + (temp_fv0_5 * temp_fv0_5);
  temp_fv0_6 = sqrtf(temp_fa0_2);
  var_fs0 = temp_fv0_6;
  if (temp_fv0_6 != temp_fv0_6)
  {
    __repair_var_fs0_1 = sqrtf(temp_fa0_2);
  }
  temp_fv0_7 = inline_fn((f32 *) (((char *) arg0) + 0x79C));
  temp_fv0_8 = inline_fn((f32 *) (((char *) arg0) + 0x7A4));
  temp_fa0_3 = (temp_fv0_7 * temp_fv0_7) + (temp_fv0_8 * temp_fv0_8);
  temp_fv0_9 = sqrtf(temp_fa0_3);
  var_ft0 = temp_fv0_9;
  if (temp_fv0_9 != temp_fv0_9)
  {
    var_ft0 = sqrtf(temp_fa0_3);
  }
  if (__repair_var_fs0_1 != 0.0f)
  {
    *((f32 *) (((char *) arg0) + 0x868)) = (f32) ((var_ft0 / __repair_var_fs0_1) * 100.0f);
  }
  else
  {
    *((f32 *) (((char *) arg0) + 0x868)) = 0.0f;
  }
  if (__repair_var_fs4_1 != 0.0f)
  {
    *((f32 *) (((char *) arg0) + 0x86C)) = (__repair_var_fs0_1 / __repair_var_fs4_1) * 100.0f;
  }
  else
  {
    *((f32 *) (((char *) arg0) + 0x86C)) = 100.0f;
  }
  var_fv1 = 0.0f;
  if (((*((f32 *) (((char *) arg0) + 0x868))) < 0.0f) || ((var_fv1 = 100.0f, (*((f32 *) (((char *) arg0) + 0x868))) > 100.0f)))
  {
    *((f32 *) (((char *) arg0) + 0x868)) = var_fv1;
  }
  temp_fv1 = *((f32 *) (((char *) arg0) + 0x868));
  if (!(temp_fv1 > 0.0f))
  {
    *((s32 *) (((char *) arg0) + 0x768)) = 0;
    return;
  }
  if ((*((u8 *) (((char *) arg0) + 0x812))) != 0)
  {
    temp_fv1 = ((100.0f - temp_fv1) * 0.0025f) + 0.75f;
    *((f32 *) (((char *) arg0) + 0x748)) = (f32) (temp_fv1 * inline_fn((f32 *) (((char *) arg0) + 0x748)));
    temp_fs2 = inline_fn((f32 *) (((char *) arg0) + 0x7C0));
    temp_fs0 = *((f32 *) (((char *) arg0) + 0x7C4));
    temp_fs3 = inline_fn((f32 *) (((char *) arg0) + 0x7C8));
    temp_fa0_4 = ((temp_fs2 * temp_fs2) + (temp_fs0 * temp_fs0)) + (temp_fs3 * temp_fs3);
    temp_fv0_10 = sqrtf(temp_fa0_4);
    var_fs4_2 = temp_fv0_10;
    if (temp_fv0_10 != temp_fv0_10)
    {
      var_fs4_2 = sqrtf(temp_fa0_4);
    }
    temp_ft1 = inline_fn((f32 *) (((char *) arg0) + 0x824));
    temp_ft0 = inline_fn((f32 *) (((char *) arg0) + 0x828));
    temp_ft2 = inline_fn((f32 *) (((char *) arg0) + 0x82C));
    var_v0 = 1;
    if (var_fs4_2 == 0.0f)
    {
      var_v0 = 0;
    }
    var_v1 = 1;
    if (!(temp_ft0 < 0.5f))
    {
      var_v1 = 0;
    }
    if (var_v0 & var_v1)
    {
      temp_fv1_2 = (((temp_fs2 * temp_ft1) + (temp_fs0 * temp_ft0)) + (temp_fs3 * temp_ft2)) / var_fs4_2;
      *((s8 *) (((char *) arg0) + 0x8D1)) = 0x78;
      var_v1_2 = 1;
      if (!(temp_fv1_2 < (-0.9396f)))
      {
        var_v1_2 = 0;
      }
      if ((inline_fn((u8 *) (((char *) arg0) + 0x8A1)) == 4) & var_v1_2)
      {
        *((f32 *) (((char *) arg0) + 0x7B4)) = (f32) (inline_fn((f32 *) (((char *) arg0) + 0x7B4)) * (-0.2f));
        *((f32 *) (((char *) arg0) + 0x7BC)) = (f32) ((*((f32 *) (((char *) arg0) + 0x7BC))) * (-0.2f));
        *((f32 *) (((char *) arg0) + 0x7C0)) = (f32) (inline_fn((f32 *) (((char *) arg0) + 0x7C0)) * (-0.2f));
        *((f32 *) (((char *) arg0) + 0x7C8)) = (f32) (inline_fn((f32 *) (((char *) arg0) + 0x7C8)) * (-0.2f));
        *((f32 *) (((char *) arg0) + 0x7C4)) = (f32) ((inline_fn((f32 *) (((char *) arg0) + 0x774)) * 0.014f) + inline_fn((f32 *) (((char *) arg0) + 0x7C4)));
        *((s8 *) (((char *) arg0) + 0x8C1)) = (s8) (-(*((s8 *) (((char *) arg0) + 0x8C1))));
        func_801D7028((unsigned long long) inline_fn((u16 *) (((char *) arg0) + 2)), 0x29);
        *((u16 *) (((char *) arg0) + 6)) = (u16) ((*((u16 *) (((char *) arg0) + 6))) | 1);
        *((s8 *) (((char *) arg0) + 0x8C0)) = 1;
        *((s8 *) (((char *) arg0) + 0x860)) = 0;
        return;
      }
      if (D_8021E144 == 0)
      {
        var_fv1_2 = temp_fv1 * 0.15f;
      }
      else
      {
        var_fv1_2 = temp_fv1 * 0.2f;
      }
      temp_fs0_2 = (temp_fv1_2 * var_fs4_2) * ((-1.0f) - var_fv1_2);
      temp_fs2_2 = temp_fs2 + (temp_ft1 * temp_fs0_2);
      temp_fs3_2 = temp_fs3 + (temp_ft2 * temp_fs0_2);
      *((f32 *) (((char *) arg0) + 0x7B4)) = temp_fs2_2;
      *((f32 *) (((char *) arg0) + 0x7BC)) = temp_fs3_2;
      *((f32 *) (((char *) arg0) + 0x7C0)) = temp_fs2_2;
      *((f32 *) (((char *) arg0) + 0x7C4)) = 0.0f;
      *((f32 *) (((char *) arg0) + 0x7C8)) = temp_fs3_2;
      *((s8 *) (((char *) arg0) + 0x8D0)) = 0x78;
      func_801D7028(*((u16 *) (((char *) arg0) + 2)), 0x29);
      *((u16 *) (((char *) arg0) + 6)) = (u16) ((*((u16 *) (((char *) arg0) + 6))) | 1);
    }
  }
  else
  {
    *((s32 *) (((char *) arg0) + 0x768)) = 0;
  }
}

