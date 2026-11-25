extern unsigned short D_8006FB10;
extern char D_8006FAF0[];
extern char D_800DB1B8[];
extern u8 D_80126FF6;
void func_80138CC0(void **arg0)
{
  f32 temp_fa0;
  f32 temp_fv0;
  f32 temp_fv1;
  f32 temp_fv1_10;
  f32 temp_fv1_11;
  f32 temp_fv1_2;
  f32 temp_fv1_3;
  f32 temp_fv1_4;
  f32 temp_fv1_5;
  f32 temp_fv1_6;
  f32 temp_fv1_7;
  f32 temp_fv1_8;
  f32 temp_fv1_9;
  f32 var_fs0;
  f32 var_fs1;
  f32 var_fs2;
  f32 var_fs3;
  f32 var_ft0;
  f32 var_ft0_2;
  f32 var_ft0_3;
  f32 var_ft1;
  f32 var_ft1_2;
  f32 var_ft2;
  f32 var_ft2_2;
  f32 var_ft4;
  f32 var_ft5;
  f32 var_fv0;
  f32 var_fv1;
  f32 var_fv1_2;
  f32 var_fv1_3;
  s32 temp_v1_8;
  s32 var_a1;
  s32 var_a2;
  s32 var_t2;
  s32 var_t3;
  s32 var_t4;
  s32 var_v0;
  s32 var_v0_10;
  s32 var_v0_11;
  s32 var_v0_13;
  s32 var_v0_14;
  s32 var_v0_15;
  s32 var_v0_16;
  s32 var_v0_17;
  s32 var_v0_18;
  s32 var_v0_19;
  s32 var_v0_20;
  s32 var_v0_22;
  s32 var_v0_23;
  s32 var_v0_25;
  s32 var_v0_26;
  s32 var_v0_27;
  s32 var_v0_29;
  s32 var_v0_2;
  s32 var_v0_30;
  s32 var_v0_31;
  s32 var_v0_32;
  s32 var_v0_33;
  s32 var_v0_34;
  s32 var_v0_4;
  s32 var_v0_5;
  s32 var_v0_7;
  s32 var_v0_8;
  s32 var_v1;
  s32 var_v1_2;
  u32 var_v0_12;
  u32 var_v0_21;
  u32 var_v0_24;
  u32 var_v0_3;
  u32 var_v0_9;
  void *temp_a0;
  void *temp_v0;
  void *temp_v0_2;
  void *temp_v1;
  void *temp_v1_10;
  void *temp_v1_11;
  void *temp_v1_2;
  void *temp_v1_3;
  void *temp_v1_4;
  void *temp_v1_5;
  void *temp_v1_6;
  void *temp_v1_7;
  void *temp_v1_9;
  var_ft0 = 0.5f;
  switch (D_8006FB10)
  {
    case 0:

    case 1:

    case 3:

    case 4:
      var_ft4 = 100.0f;
      var_ft5 = 250.0f;
      var_fs0 = 50.0f;
      var_fs1 = 255.0f;
      var_fs3 = 255.0f;
      var_fs2 = 255.0f;
      block_12:
    var_t4 = 0xFF;

      var_t3 = 0xFF;
      var_t2 = 0xFF;
      break;

    case 5:
      var_ft0 = 0.2f;
      var_ft4 = 10.0f;
      var_fs0 = 10.0f;
      var_ft5 = 50.0f;
      var_fs1 = 0.0f;
      var_fs3 = 0.0f;
      block_11:
    var_fs2 = 0.0f;

      goto block_12;

    case 6:
      var_ft0 = 0.2f;
      var_fs0 = 236.0f;
      var_ft4 = 152.0f;
      var_ft5 = 0.0f;
      var_fs3 = 196.0f;
      var_fs2 = 38.0f;
      var_fs1 = 0.0f;
      block_7:
    var_t4 = 0xBE;

      var_t3 = 0xBE;
      var_t2 = 0xBE;
      break;

    case 2:
      var_ft0 = 0.0f;
      var_ft4 = 150.0f;
      var_fs0 = 150.0f;
      var_ft5 = 150.0f;
      var_fs3 = 150.0f;
      var_fs1 = 150.0f;
      var_fs2 = 150.0f;
      var_t4 = 0xA0;
      var_t3 = 0xA0;
      var_t2 = 0xA0;
      break;

    case 7:
      var_ft0 = 0.0f;
      var_ft4 = 170.0f;
      var_fs0 = 170.0f;
      var_ft5 = 170.0f;
      var_fs3 = 170.0f;
      var_fs1 = 170.0f;
      var_fs2 = 170.0f;
      goto block_7;

    case 8:

    case 9:
      var_fs0 = 50.0f;
      var_ft4 = 100.0f;
      var_ft5 = 250.0f;
      var_fs1 = 255.0f;
      var_fs3 = 255.0f;
      var_fs2 = 255.0f;
      goto block_12;

    case 10:
      var_ft4 = 50.0f;
      var_fs0 = 50.0f;
      var_ft5 = 100.0f;
      var_fs3 = 100.0f;
      var_fs2 = 250.0f;
      var_fs1 = 100.0f;
      goto block_12;

    default:
      var_ft4 = 0.0f;
      var_fs0 = 0.0f;
      var_ft5 = 250.0f;
      var_fs3 = 0.0f;
      var_fs1 = 0.0f;
      goto block_11;

  }

  temp_v1 = *arg0;
  *arg0 = temp_v1 + 8;
  *((s32 *) (((char *) temp_v1) + 0)) = 0xE7000000;
  *((s32 *) (((char *) temp_v1) + 4)) = 0;
  temp_v1_2 = *arg0;
  *arg0 = temp_v1_2 + 8;
  *((s32 *) (((char *) temp_v1_2) + 0)) = 0xBA001402;
  *((s32 *) (((char *) temp_v1_2) + 4)) = 0x300000;
  temp_v1_3 = *arg0;
  *arg0 = temp_v1_3 + 8;
  *((s32 *) (((char *) temp_v1_3) + 0)) = 0xF7000000;
  if (!(var_fs0 >= 2.1474836e9f))
  {
    var_v0 = ((s32) var_fs0) << 8;
  }
  else
  {
    var_v0 = (((s32) (var_fs0 - 2.1474836e9f)) | 0x80000000) << 8;
  }
  if (!(var_ft4 >= 2.1474836e9f))
  {
    var_v0_2 = ((s32) var_ft4) * 8;
  }
  else
  {
    var_v0_2 = (((s32) (var_ft4 - 2.1474836e9f)) | 0x80000000) * 8;
  }
  if (!(var_ft5 >= 2.1474836e9f))
  {
    var_v0_3 = ((u32) ((s32) var_ft5)) >> 2;
  }
  else
  {
    var_v0_3 = ((u32) (((s32) (var_ft5 - 2.1474836e9f)) | 0x80000000)) >> 2;
  }
  if (!(var_fs0 >= 2.1474836e9f))
  {
    var_v0_4 = ((s32) var_fs0) << 8;
  }
  else
  {
    var_v0_4 = (((s32) (var_fs0 - 2.1474836e9f)) | 0x80000000) << 8;
  }
  if (!(var_ft4 >= 2.1474836e9f))
  {
    var_v0_5 = ((s32) var_ft4) * 8;
  }
  else
  {
    var_v0_5 = (((s32) (var_ft4 - 2.1474836e9f)) | 0x80000000) * 8;
  }
  *((s32 *) (((char *) temp_v1_3) + 4)) = (s32) (((((((var_v0 & 0xF800) | (var_v0_2 & 0x7C0)) | (var_v0_3 & 0x3E)) | 1) << 0x10) | 1) | (((var_v0_4 & 0xF800) | (var_v0_5 & 0x7C0)) | ((!(var_ft5 >= 2.1474836e9f)) ? ((u32) (((u32) ((s32) var_ft5)) >> 2)) : (((u32) (((u32) (((s32) (var_ft5 - 2.1474836e9f)) | 0x80000000)) >> 2)) & 0x3E))));
  var_a2 = 0;
  if ((*((D_800DB1B8 + 0x2108) + (D_80126FF6 * 0x28))) == 1)
  {
    temp_fa0 = var_ft0 * 216.0f;
    temp_fv0 = (f32) 0;
    var_fv1 = temp_fv0;
    if (temp_fv0 < temp_fa0)
    {
      do
      {
        if (!(var_fs3 < var_fs0))
        {
          var_ft2 = var_fs0 + (((var_fs3 - var_fs0) * ((f32) var_a2)) / temp_fa0);
        }
        else
        {
          var_ft2 = var_fs0 - (((var_fs0 - var_fs3) * var_fv1) / temp_fa0);
        }
        if (!(var_fs1 < var_ft4))
        {
          var_ft0_2 = var_ft4 + (((var_fs1 - var_ft4) * ((f32) var_a2)) / temp_fa0);
        }
        else
        {
          var_ft0_2 = var_ft4 - (((var_ft4 - var_fs1) * ((f32) var_a2)) / temp_fa0);
        }
        if (!(var_fs2 < var_ft5))
        {
          var_ft1 = var_ft5 + (((var_fs2 - var_ft5) * ((f32) var_a2)) / temp_fa0);
        }
        else
        {
          var_ft1 = var_ft5 - (((var_ft5 - var_fs2) * ((f32) var_a2)) / temp_fa0);
        }
        temp_v0 = *arg0;
        *arg0 = temp_v0 + 8;
        *((s32 *) (((char *) temp_v0) + 0)) = 0xF7000000;
        if (!(var_ft2 >= 2.1474836e9f))
        {
          var_v0_7 = ((s32) var_ft2) << 8;
        }
        else
        {
          var_v0_7 = (((s32) (var_ft2 - 2.1474836e9f)) | 0x80000000) << 8;
        }
        if (!(var_ft0_2 >= 2.1474836e9f))
        {
          var_v0_8 = ((s32) var_ft0_2) * 8;
        }
        else
        {
          var_v0_8 = (((s32) (var_ft0_2 - 2.1474836e9f)) | 0x80000000) * 8;
        }
        if (!(var_ft1 >= 2.1474836e9f))
        {
          var_v0_9 = ((u32) ((s32) var_ft1)) >> 2;
        }
        else
        {
          var_v0_9 = ((u32) (((s32) (var_ft1 - 2.1474836e9f)) | 0x80000000)) >> 2;
        }
        if (!(var_ft2 >= 2.1474836e9f))
        {
          var_v0_10 = ((s32) var_ft2) << 8;
        }
        else
        {
          var_v0_10 = (((s32) (var_ft2 - 2.1474836e9f)) | 0x80000000) << 8;
        }
        if (!(var_ft0_2 >= 2.1474836e9f))
        {
          var_v0_11 = ((s32) var_ft0_2) * 8;
        }
        else
        {
          var_v0_11 = (((s32) (var_ft0_2 - 2.1474836e9f)) | 0x80000000) * 8;
        }
        if (!(var_ft1 >= 2.1474836e9f))
        {
          var_v0_12 = ((u32) ((s32) var_ft1)) >> 2;
        }
        else
        {
          var_v0_12 = ((u32) (((s32) (var_ft1 - 2.1474836e9f)) | 0x80000000)) >> 2;
        }
        *((s32 *) (((char *) temp_v0) + 4)) = (s32) (((((((var_v0_7 & 0xF800) | (var_v0_8 & 0x7C0)) | (var_v0_9 & 0x3E)) | 1) << 0x10) | 1) | (((var_v0_10 & 0xF800) | (var_v0_11 & 0x7C0)) | (var_v0_12 & 0x3E)));
        temp_v1_4 = *arg0;
        *arg0 = temp_v1_4 + 8;
        temp_fv1 = (16.0f + 288.0f) - 1.0f;
        if (!(temp_fv1 >= 2.1474836e9f))
        {
          var_v0_13 = ((s32) temp_fv1) & 0x3FF;
        }
        else
        {
          var_v0_13 = (((s32) (temp_fv1 - 2.1474836e9f)) | 0x80000000) & 0x3FF;
        }
        temp_fv1_2 = 12.0f + ((f32) var_a2);
        if (!(temp_fv1_2 >= 2.1474836e9f))
        {
          var_v0_14 = ((s32) temp_fv1_2) & 0x3FF;
        }
        else
        {
          var_v0_14 = (((s32) (temp_fv1_2 - 2.1474836e9f)) | 0x80000000) & 0x3FF;
        }
        *((s32 *) (((char *) temp_v1_4) + 0)) = (s32) ((var_v0_13 << 0xE) | ((var_v0_14 * 4) | 0xF6000000));
        if (!(2.1474836e9f <= 16.0f))
        {
          var_v0_15 = ((s32) 16.0f) & 0x3FF;
        }
        else
        {
          var_v0_15 = (((s32) (16.0f - 2.1474836e9f)) | 0x80000000) & 0x3FF;
        }
        temp_fv1_3 = 12.0f + ((f32) var_a2);
        if (!(temp_fv1_3 >= 2.1474836e9f))
        {
          var_v0_16 = ((s32) temp_fv1_3) & 0x3FF;
        }
        else
        {
          var_v0_16 = (((s32) (temp_fv1_3 - 2.1474836e9f)) | 0x80000000) & 0x3FF;
        }
        var_a2 += 1;
        var_fv1 = (f32) var_a2;
        *((s32 *) (((char *) temp_v1_4) + 4)) = (s32) ((var_v0_15 << 0xE) | (var_v0_16 * 4));
      }
      while (var_fv1 < temp_fa0);
    }
    temp_v1_5 = *arg0;
    *arg0 = temp_v1_5 + 8;
    temp_fv1_4 = (16.0f + 288.0f) - 1.0f;
    if (!(temp_fv1_4 >= 2.1474836e9f))
    {
      var_v0_17 = ((s32) temp_fv1_4) & 0x3FF;
    }
    else
    {
      var_v0_17 = (((s32) (temp_fv1_4 - 2.1474836e9f)) | 0x80000000) & 0x3FF;
    }
    *((s32 *) (((char *) temp_v1_5) + 0)) = (s32) ((var_v0_17 << 0xE) | 0xF600038C);
    if (!(2.1474836e9f <= 16.0f))
    {
      var_v0_18 = ((s32) 16.0f) & 0x3FF;
    }
    else
    {
      var_v0_18 = (((s32) (16.0f - 2.1474836e9f)) | 0x80000000) & 0x3FF;
    }
    var_fv1_2 = 12.0f + ((f32) var_a2);
    var_a1 = var_v0_18 << 0xE;
    if (var_fv1_2 >= 2.1474836e9f)
    {
      var_fv0 = var_fv1_2 - 2.1474836e9f;
      goto block_160;
    }
    goto block_158;
  }
  temp_fa0 = var_ft0 * 108.0f;
  temp_fv0 = (f32) 0;
  var_fv1_3 = temp_fv0;
  if (temp_fv0 < temp_fa0)
  {
    do
    {
      if (!(var_fs3 < var_fs0))
      {
        var_ft2_2 = var_fs0 + (((var_fs3 - var_fs0) * ((f32) var_a2)) / temp_fa0);
      }
      else
      {
        var_ft2_2 = var_fs0 - (((var_fs0 - var_fs3) * var_fv1_3) / temp_fa0);
      }
      if (!(var_fs1 < var_ft4))
      {
        var_ft0_3 = var_ft4 + (((var_fs1 - var_ft4) * ((f32) var_a2)) / temp_fa0);
      }
      else
      {
        var_ft0_3 = var_ft4 - (((var_ft4 - var_fs1) * ((f32) var_a2)) / temp_fa0);
      }
      if (!(var_fs2 < var_ft5))
      {
        var_ft1_2 = var_ft5 + (((var_fs2 - var_ft5) * ((f32) var_a2)) / temp_fa0);
      }
      else
      {
        var_ft1_2 = var_ft5 - (((var_ft5 - var_fs2) * ((f32) var_a2)) / temp_fa0);
      }
      temp_v0_2 = *arg0;
      *arg0 = temp_v0_2 + 8;
      *((s32 *) (((char *) temp_v0_2) + 0)) = 0xF7000000;
      if (!(var_ft2_2 >= 2.1474836e9f))
      {
        var_v0_19 = ((s32) var_ft2_2) << 8;
      }
      else
      {
        var_v0_19 = (((s32) (var_ft2_2 - 2.1474836e9f)) | 0x80000000) << 8;
      }
      if (!(var_ft0_3 >= 2.1474836e9f))
      {
        var_v0_20 = ((s32) var_ft0_3) * 8;
      }
      else
      {
        var_v0_20 = (((s32) (var_ft0_3 - 2.1474836e9f)) | 0x80000000) * 8;
      }
      if (!(var_ft1_2 >= 2.1474836e9f))
      {
        var_v0_21 = ((u32) ((s32) var_ft1_2)) >> 2;
      }
      else
      {
        var_v0_21 = ((u32) (((s32) (var_ft1_2 - 2.1474836e9f)) | 0x80000000)) >> 2;
      }
      if (!(var_ft2_2 >= 2.1474836e9f))
      {
        var_v0_22 = ((s32) var_ft2_2) << 8;
      }
      else
      {
        var_v0_22 = (((s32) (var_ft2_2 - 2.1474836e9f)) | 0x80000000) << 8;
      }
      if (!(var_ft0_3 >= 2.1474836e9f))
      {
        var_v0_23 = ((s32) var_ft0_3) * 8;
      }
      else
      {
        var_v0_23 = (((s32) (var_ft0_3 - 2.1474836e9f)) | 0x80000000) * 8;
      }
      if (!(var_ft1_2 >= 2.1474836e9f))
      {
        *((s32 *) (((char *) temp_v0_2) + 4)) = (s32) (((((((var_v0_19 & 0xF800) | (var_v0_20 & 0x7C0)) | (var_v0_21 & 0x3E)) | 1) << 0x10) | 1) | (((var_v0_22 & 0xF800) | (var_v0_23 & 0x7C0)) | ((((u32) ((s32) var_ft1_2)) >> 2) & 0x3E)));
      }
      else
      {
        u32 var_v0_24_2;
        var_v0_24_2 = ((u32) (((s32) (var_ft1_2 - 2.1474836e9f)) | 0x80000000)) >> 2;
        *((s32 *) (((char *) temp_v0_2) + 4)) = (s32) (((((((var_v0_19 & 0xF800) | (var_v0_20 & 0x7C0)) | (var_v0_21 & 0x3E)) | 1) << 0x10) | 1) | (((var_v0_22 & 0xF800) | (var_v0_23 & 0x7C0)) | ((((u32) (((s32) (var_ft1_2 - 2.1474836e9f)) | 0x80000000)) >> 2) & 0x3E)));
      }
      temp_v1_6 = *arg0;
      temp_fv1_5 = (16.0f + 288.0f) - 1.0f;
      *arg0 = temp_v1_6 + 8;
      if (!(temp_fv1_5 >= 2.1474836e9f))
      {
        var_v0_25 = ((s32) temp_fv1_5) & 0x3FF;
      }
      else
      {
        var_v0_25 = (((s32) (temp_fv1_5 - 2.1474836e9f)) | 0x80000000) & 0x3FF;
      }
      temp_fv1_6 = 12.0f + ((f32) var_a2);
      if (!(temp_fv1_6 >= 2.1474836e9f))
      {
        var_v0_26 = ((s32) temp_fv1_6) & 0x3FF;
      }
      else
      {
        var_v0_26 = (((s32) (temp_fv1_6 - 2.1474836e9f)) | 0x80000000) & 0x3FF;
      }
      *((s32 *) (((char *) temp_v1_6) + 0)) = (s32) ((var_v0_25 << 0xE) | ((var_v0_26 * 4) | 0xF6000000));
      if (!(2.1474836e9f <= 16.0f))
      {
        var_v0_27 = ((s32) 16.0f) & 0x3FF;
      }
      else
      {
        var_v0_27 = (((s32) (16.0f - 2.1474836e9f)) | 0x80000000) & 0x3FF;
      }
      temp_fv1_7 = 12.0f + ((f32) var_a2);
      if (!(temp_fv1_7 >= 2.1474836e9f))
      {
        *((s32 *) (((char *) temp_v1_6) + 4)) = (s32) ((var_v0_27 << 0xE) | ((((s32) temp_fv1_7) & 0x3FF) * 4));
      }
      else
      {
        *((s32 *) (((char *) temp_v1_6) + 4)) = (s32) ((var_v0_27 << 0xE) | (((((s32) (temp_fv1_7 - 2.1474836e9f)) | 0x80000000) & 0x3FF) * 4));
      }
      temp_v1_7 = *arg0;
      *arg0 = temp_v1_7 + 8;
      temp_fv1_8 = (16.0f + 288.0f) - 1.0f;
      if (!(temp_fv1_8 >= 2.1474836e9f))
      {
        var_v1 = ((s32) temp_fv1_8) & 0x3FF;
      }
      else
      {
        var_v1 = (((s32) (temp_fv1_8 - 2.1474836e9f)) | 0x80000000) & 0x3FF;
      }
      *((s32 *) (((char *) temp_v1_7) + 0)) = (s32) ((var_v1 << 0xE) | ((((var_a2 + 0x78) & 0x3FF) * 4) | 0xF6000000));
      if (!(2.1474836e9f <= 16.0f))
      {
        var_v1_2 = ((s32) 16.0f) & 0x3FF;
      }
      else
      {
        var_v1_2 = (((s32) (16.0f - 2.1474836e9f)) | 0x80000000) & 0x3FF;
      }
      temp_v1_8 = (var_v1_2 << 0xE) | (((var_a2 + 0x78) & 0x3FF) * 4);
      var_a2 += 1;
      var_fv1_3 = (f32) var_a2;
      *((s32 *) (((char *) temp_v1_7) + 4)) = temp_v1_8;
    }
    while (var_fv1_3 < temp_fa0);
  }
  temp_v1_9 = *arg0;
  *arg0 = temp_v1_9 + 8;
  temp_fv1_9 = (16.0f + 288.0f) - 1.0f;
  if (!(temp_fv1_9 >= 2.1474836e9f))
  {
    var_v0_29 = ((s32) temp_fv1_9) & 0x3FF;
  }
  else
  {
    var_v0_29 = (((s32) (temp_fv1_9 - 2.1474836e9f)) | 0x80000000) & 0x3FF;
  }
  *((s32 *) (((char *) temp_v1_9) + 0)) = (s32) ((var_v0_29 << 0xE) | 0xF60001DC);
  if (!(2.1474836e9f <= 16.0f))
  {
    var_v0_30 = ((s32) 16.0f) & 0x3FF;
  }
  else
  {
    var_v0_30 = (((s32) (16.0f - 2.1474836e9f)) | 0x80000000) & 0x3FF;
  }
  temp_fv1_10 = 12.0f + ((f32) var_a2);
  if (!(temp_fv1_10 >= 2.1474836e9f))
  {
    var_v0_31 = ((s32) temp_fv1_10) & 0x3FF;
  }
  else
  {
    var_v0_31 = (((s32) (temp_fv1_10 - 2.1474836e9f)) | 0x80000000) & 0x3FF;
  }
  *((s32 *) (((char *) temp_v1_9) + 4)) = (s32) ((var_v0_30 << 0xE) | (var_v0_31 * 4));
  temp_v1_10 = *arg0;
  *arg0 = temp_v1_10 + 8;
  temp_fv1_11 = (16.0f + 288.0f) - 1.0f;
  if (!(temp_fv1_11 >= 2.1474836e9f))
  {
    var_v0_32 = ((s32) temp_fv1_11) & 0x3FF;
  }
  else
  {
    var_v0_32 = (((s32) (temp_fv1_11 - 2.1474836e9f)) | 0x80000000) & 0x3FF;
  }
  *((s32 *) (((char *) temp_v1_10) + 0)) = (s32) ((var_v0_32 << 0xE) | 0xF600038C);
  if (!(2.1474836e9f <= 16.0f))
  {
    var_v0_33 = ((s32) 16.0f) & 0x3FF;
  }
  else
  {
    var_v0_33 = (((s32) (16.0f - 2.1474836e9f)) | 0x80000000) & 0x3FF;
  }
  var_fv1_2 = ((12.0f + ((f32) var_a2)) + 120.0f) - 12.0f;
  var_a1 = var_v0_33 << 0xE;
  if (!(var_fv1_2 >= 2.1474836e9f))
  {
    block_158:
    var_v0_34 = ((s32) var_fv1_2) & 0x3FF;

  }
  else
  {
    var_fv0 = var_fv1_2 - 2.1474836e9f;
    block_160:
    var_v0_34 = (((s32) var_fv0) | 0x80000000) & 0x3FF;

  }
  *((s32 *) (((char *) (*arg0)) + 4)) = (s32) (var_a1 | (var_v0_34 * 4));
  if (((D_8006FB10 == 2) | (D_8006FB10 == 7)) != 0)
  {
    temp_a0 = *arg0;
    *arg0 = temp_a0 + 8;
    *((s32 *) (((char *) temp_a0) + 0)) = 0xF8000000;
    *((s32 *) (((char *) temp_a0) + 4)) = (s32) ((((var_t4 << 0x18) | (var_t3 << 0x10)) | (var_t2 << 8)) | 0xFF);
    temp_v1_11 = *arg0;
    *arg0 = temp_v1_11 + 8;
    *((s32 *) (((char *) temp_v1_11) + 0)) = 0xBC000008;
    *((s32 *) (((char *) temp_v1_11) + 4)) = 0x0500FC00;
  }
}

