s32 func_80129918(void *, f32, f32, f32, f32, f32, f32);
s32 func_8013F050(s32, void *);
s32 func_8015D410(s32, f32, void *, u16);
s32 func_801D7028(s32 arg0, s32, s32);
s32 func_801F9D8C(s32, s32);
f32 sqrtf(f32);
extern s32 D_8006FAF0;
extern s32 D_8011F2F0;
extern s32 D_8011F2FD;
extern s32 D_8011F32E;
extern f32 D_80168574[];
extern f64 D_801839C0;
extern f64 D_801839C8;
extern s32 D_8018A460;
extern s32 D_8022A772;
inline static float inline_fn(f32 arg0, char *arg1)
{
  return arg0 * (*((f32 *) arg1));
}

inline static char *inline_fn2(void *arg0, int arg1)
{
  return ((char *) arg0) + arg1;
}

void func_80162460(s32 arg0)
{
  f32 temp_fa0;
  f32 temp_fa0_2;
  f32 temp_fa0_3;
  f32 temp_fs0;
  f32 temp_fs0_2;
  f32 temp_fs2;
  f32 temp_fs3;
  f32 temp_ft0;
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
  f32 temp_fv1_3;
  f32 var_fs1;
  f32 var_fs1_2;
  f32 var_ft1;
  f32 var_fv0;
  f32 var_fv0_2;
  f32 var_fv1;
  s32 temp_a1;
  s32 temp_ft0_2;
  s32 temp_s0;
  s32 var_v0;
  s32 var_v1;
  s32 var_v1_2;
  s8 temp_v1_2;
  u16 temp_v0_2;
  u16 temp_v0_3;
  u16 temp_v0_6;
  u16 temp_v1;
  void *temp_a0;
  void *temp_a0_2;
  void *temp_s1;
  void *temp_s3;
  void *temp_v0;
  void *temp_v0_4;
  void *temp_v0_5;
  void *temp_v0_7;
  temp_a1 = (arg0 & 0xFFFF) * 0x64;
  temp_s3 = temp_a1 + (&D_8011F2F0);
  temp_s1 = *((void **) inline_fn2(temp_s3, 0x60));
  temp_a0 = (void *) ((*((u16 *) inline_fn2(*((void **) inline_fn2(temp_s1, 4)), 4))) * 0x24C); temp_a0 = (void *) inline_fn2(temp_a0, (s32) (((*((u8 *) inline_fn2(temp_s3, 0xC))) * 0xC4) + (&D_8018A460)));
  temp_v1 = *((&D_8011F32E) + temp_a1);
  if (temp_v1 == 0)
  {
    temp_v1_2 = *((s8 *) inline_fn2(temp_a0, 1));
    if (temp_v1_2 != (-1))
    {
      temp_v0_4 = ((*((&D_8022A772) + (temp_v1_2 * 0x8F0))) * 0x64) + (&D_8011F2F0);
      temp_fs0 = (*((f32 *) inline_fn2(temp_v0_4, 0x18))) - (*((f32 *) inline_fn2(temp_s3, 0x18)));
      temp_fs2 = (*((f32 *) inline_fn2(temp_v0_4, 0x1C))) - (*((f32 *) inline_fn2(temp_s3, 0x1C)));
      temp_fs3 = (*((f32 *) inline_fn2(temp_v0_4, 0x20))) - (*((f32 *) inline_fn2(temp_s3, 0x20)));
      temp_fa0 = ((temp_fs0 * temp_fs0) + (temp_fs2 * temp_fs2)) + (temp_fs3 * temp_fs3);
      temp_fv0 = sqrtf(temp_fa0);
      var_fs1 = temp_fv0;
      if (temp_fv0 != temp_fv0)
      {
        var_fs1 = sqrtf(temp_fa0);
      }
      temp_fv0_2 = *((f32 *) inline_fn2(temp_s1, 8));
      temp_fv0_3 = *((f32 *) inline_fn2(temp_s1, 0xC));
      temp_fv0_4 = *((f32 *) inline_fn2(temp_s1, 0x10));
      temp_fa0_2 = ((temp_fv0_2 * temp_fv0_2) + (temp_fv0_3 * temp_fv0_3)) + (temp_fv0_4 * temp_fv0_4);
      temp_fv0_5 = sqrtf(temp_fa0_2);
      var_fv1 = temp_fv0_5;
      if (temp_fv0_5 != temp_fv0_5)
      {
        var_fv1 = sqrtf(temp_fa0_2);
      }
      if (var_fs1 == 0.0f)
      {
        var_fs1 = 1.0f;
      }
      if (var_fv1 == 0.0f)
      {
        if (1)
        {
          var_fv1 = 1.0f;
        }
      }
      temp_ft0 = (((temp_fs0 * (*((f32 *) inline_fn2(temp_s1, 8)))) + inline_fn(temp_fs2, inline_fn2(temp_s1, 0xC))) + inline_fn(temp_fs3, inline_fn2(temp_s1, 0x10))) / (var_fs1 * var_fv1);
      if (temp_ft0 > 1.0f)
      {
        var_ft1 = 0.2f;
      }
      else
      {
        var_ft1 = (f32) (D_801839C0 - ((f64) (temp_ft0 * 0.15f)));
      }
      if (var_fs1 < 50.0f)
      {
        var_fv0 = 10.0f / var_fs1;
      }
      else
        if (var_fs1 < 100.0f)
      {
        var_fv0 = 15.0f / var_fs1;
      }
      else
        if (var_fs1 < 200.0f)
      {
        var_fv0 = 20.0f / var_fs1;
      }
      else
      {
        var_fv0_2 = 30.0f;
        if (var_fs1 < 300.0f)
        {
          var_fv0_2 = 25.0f;
        }
        var_fv0 = var_fv0_2 / var_fs1;
      }
      temp_fv1 = *((f32 *) inline_fn2(temp_s1, 8));
      *((f32 *) inline_fn2(temp_s1, 8)) = (f32) ((((temp_fs0 * var_fv0) - temp_fv1) * var_ft1) + temp_fv1);
      temp_fv0_6 = *((f32 *) inline_fn2(temp_s1, 0xC));
      *((f32 *) inline_fn2(temp_s1, 0xC)) = (f32) (((f64) temp_fv0_6) + (((f64) (((temp_fs2 * var_fv0) - temp_fv0_6) * var_ft1)) * D_801839C8));
      temp_fv1_2 = *((f32 *) inline_fn2(temp_s1, 0x10));
      *((f32 *) inline_fn2(temp_s1, 0x10)) = (f32) ((((temp_fs3 * var_fv0) - temp_fv1_2) * var_ft1) + temp_fv1_2);
    }
    else
    {
      *((f32 *) inline_fn2(temp_s1, 0xC)) = (f32) ((*((f32 *) inline_fn2(temp_s1, 0xC))) - 0.2f);
    }
    func_80129918(temp_s1 + 0x1C, *((f32 *) inline_fn2(temp_s3, 0x18)), *((f32 *) inline_fn2(temp_s3, 0x1C)), *((f32 *) inline_fn2(temp_s3, 0x20)), *((f32 *) inline_fn2(temp_s1, 8)), *((f32 *) inline_fn2(temp_s1, 0xC)), *((f32 *) inline_fn2(temp_s1, 0x10)));
    *((f32 *) inline_fn2(temp_s3, 0x18)) = (f32) (*((f32 *) inline_fn2(temp_s1, 0x24)));
    *((f32 *) inline_fn2(temp_s3, 0x1C)) = (f32) (*((f32 *) inline_fn2(temp_s1, 0x28)));
    *((f32 *) inline_fn2(temp_s3, 0x20)) = (f32) (*((f32 *) inline_fn2(temp_s1, 0x2C)));
    var_v1_2 = 0;
    __repair_rows:
    {
      do
      {
        ;
        *((f32 *) inline_fn2((var_v1_2 * 4) + temp_a0, 4)) = (f32) (*((f32 *) inline_fn2((var_v1_2 * 4) + temp_a0, 8)));
        do
        {
          *((f32 *) inline_fn2((var_v1_2 * 4) + temp_a0, 0x24)) = (f32) (*((f32 *) inline_fn2((var_v1_2 * 4) + temp_a0, 0x28)));
          *((f32 *) inline_fn2((var_v1_2 * 4) + temp_a0, 0x44)) = (f32) (*((f32 *) inline_fn2((var_v1_2 * 4) + temp_a0, 0x48)));
          *((f32 *) inline_fn2((var_v1_2 * 4) + temp_a0, 0x64)) = (f32) (*((f32 *) inline_fn2((var_v1_2 * 4) + temp_a0, 0x68)));
          *((f32 *) inline_fn2((var_v1_2 * 4) + temp_a0, 0x84)) = (f32) (*((f32 *) inline_fn2((var_v1_2 * 4) + temp_a0, 0x88)));
        }
        while (0);
      }
      while (0);
      *((f32 *) inline_fn2((var_v1_2 * 4) + temp_a0, 0xA4)) = (f32) (*((f32 *) inline_fn2((var_v1_2 * 4) + temp_a0, 0xA8)));
      do
      {
        var_v1_2 += 1;
      }
      while (0);
    }

    if ((var_v0 = var_v1_2) < 7)
    {
      goto __repair_rows;
    }
    *((f32 *) inline_fn2(temp_a0, 0x20)) = (f32) (*((f32 *) inline_fn2(temp_s3, 0x18)));
    *((f32 *) (((char *) ((short) temp_a0)) + 0x40)) = (f32) (*((f32 *) inline_fn2(temp_s3, 0x1C)));
    *((f32 *) inline_fn2(temp_a0, 0x60)) = (f32) (*((f32 *) inline_fn2(temp_s3, 0x20)));
    temp_fv1_3 = (*((f32 *) inline_fn2(temp_a0, 0x9C))) + 40.0f;
    *((f32 *) inline_fn2(temp_a0, 0xA0)) = temp_fv1_3;
    if (temp_fv1_3 > 359.0f)
    {
      *((f32 *) inline_fn2(temp_a0, 0xA0)) = (f32) (temp_fv1_3 - 360.0f);
    }
    temp_fv0_7 = *((f32 *) inline_fn2(temp_s1, 8));
    temp_fv0_8 = *((f32 *) inline_fn2(temp_s1, 0xC));
    temp_fv0_9 = *((f32 *) inline_fn2(temp_s1, 0x10));
    temp_fa0_3 = ((temp_fv0_7 * temp_fv0_7) + (temp_fv0_8 * temp_fv0_8)) + (temp_fv0_9 * temp_fv0_9);
    temp_fv0_10 = sqrtf(temp_fa0_3);
    var_fs1_2 = temp_fv0_10;
    if (temp_fv0_10 != temp_fv0_10)
    {
      var_fs1_2 = sqrtf(temp_fa0_3);
    }
    if (var_fs1_2 != 0.0f)
    {
      var_fs1_2 = 1000.0f / var_fs1_2;
    }
    temp_fs0_2 = inline_fn(var_fs1_2, inline_fn2(temp_s1, 8));
    temp_ft0_2 = (s32) inline_fn(var_fs1_2, inline_fn2(temp_s1, 0xC));
    *((f32 *) inline_fn2(temp_a0, 0x80)) = (f32) (func_801F9D8C(temp_ft0_2, (s32) inline_fn(var_fs1_2, inline_fn2(temp_s1, 0x10))) & 0xFFFF);
    *((f32 *) inline_fn2(temp_a0, 0xC0)) = (f32) (-(func_801F9D8C(temp_ft0_2, (s32) temp_fs0_2) & 0xFFFF));
    temp_v0_6 = (*((u16 *) inline_fn2(temp_s1, 0x14))) - 1;
    *((u16 *) inline_fn2(temp_s1, 0x14)) = temp_v0_6;
    if (((((temp_v0_6 << 0x10) == 0) || ((*((f32 *) inline_fn2(temp_s3, 0x1C))) < D_80168574[*((u16 *) inline_fn2(&D_8006FAF0, 0x20))])) || ((*((s32 *) inline_fn2(temp_s1, 0x1C))) & 0xFFFF00)) || (func_8013F050(arg0 & 0xFFFF, temp_s1) & 0xFF))
    {
      temp_s0 = arg0 & 0xFFFF;
      temp_v0_7 = *((void **) inline_fn2(temp_s1, 4));
      func_8015D410(temp_s0, 0.4f, temp_v0_7, *((u16 *) inline_fn2(temp_v0_7, 0x230)));
      func_801D7028(arg0, temp_s0, 0x34);
      *((s8 *) inline_fn2(temp_a0, 0)) = 0;
      *((u16 *) inline_fn2(temp_s1, 0x14)) = 7U;
      *((&D_8011F32E) + (temp_s0 * 0x64)) = 1;
    }
  }
  else
  {
    var_v1 = 0;
    if (temp_v1 != 1)
    {
      return;
    }
    var_v0 = 0 * 4;
    __repair_rows_:
    {
      temp_v0 = var_v0 + temp_a0;
      *((f32 *) inline_fn2(temp_v0, 4)) = (f32) (*((f32 *) inline_fn2(temp_v0, 8)));
      *((f32 *) inline_fn2(temp_v0, 0x24)) = (f32) (*((f32 *) inline_fn2(temp_v0, 0x28)));
      *((f32 *) inline_fn2(temp_v0, 0x44)) = (f32) (*((f32 *) inline_fn2(temp_v0, 0x48)));
      *((f32 *) inline_fn2(temp_v0, 0x64)) = (f32) (*((f32 *) inline_fn2(temp_v0, 0x68)));
      *((f32 *) inline_fn2(temp_v0, 0x84)) = (f32) (*((f32 *) inline_fn2(temp_v0, 0x88)));
      *((f32 *) inline_fn2(temp_v0, 0xA4)) = (f32) (*((f32 *) inline_fn2(temp_v0, 0xA8)));
      var_v1 += 1;
      var_v0 = var_v1 * 4;
    }

    if (var_v1 < 7)
    {
      goto __repair_rows_;
    }
    temp_v0_2 = (*((u16 *) inline_fn2(temp_s1, 0x14))) - 1;
    *((u16 *) inline_fn2(temp_s1, 0x14)) = temp_v0_2;
    if (((temp_v0_2 << 15) << 1) == 0)
    {
      temp_a0 = *((void **) inline_fn2(temp_s1, 4));
      temp_s0 = (u16) (*((u16 *) inline_fn2(temp_a0, 0x560)));
      *((u16 *) inline_fn2(temp_a0, 0x560)) = (u16) (temp_s0 & 0xF8);
      temp_a0_2 = *((void **) inline_fn2(temp_s1, 4));
      *((u16 *) inline_fn2(temp_a0_2, 0x560)) = (u16) ((*((u16 *) inline_fn2(temp_a0_2, 0x560))) | ((temp_s0 & 7) - 1));
      func_8013E49C(*((u16 *) inline_fn2(temp_s1, 0x76)));
      *((&D_8011F2FD) + ((arg0 & 0xFFFF) * 0x64)) = 2;
    }
  }
}

