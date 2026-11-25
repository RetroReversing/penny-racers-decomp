u16 func_800DE41C();
extern char D_8011F2F4[];
extern char D_801C7081[];
extern char D_801C7082[];
extern char D_801C7083[];
extern char D_801C7084[];
extern char D_801C7470[];
extern u8 D_801C7AB6;
extern char D_803157D4[];
extern char D_80315808[];
extern char D_8031583C[];
extern char D_80315870[];
extern char D_803159DC[];
inline static float inline_fn(f32 arg0)
{
  return (arg0 + 150.0f) * 0.5f;
}

void func_801BB1F0(s32 arg0)
{
  int __repair_constant = 0x80;
  u8 arg0_byte;
  u8 *__base_D_801C7470;
  s32 __index_D_801C7470;
  s32 sp48[16];
  u16 sp4A;
  u16 sp4C;
  u16 sp4E;
  s32 *var_s0;
  s32 var_a3;
  s32 var_a3_2;
  f32 temp_fs0;
  f32 temp_fs0_2;
  f32 temp_fs0_3;
  f32 temp_fs0_4;
  f32 temp_fs0_5;
  f32 temp_fs0_6;
  f32 temp_fs0_7;
  f32 temp_fs0_8;
  f32 temp_fs1;
  f32 temp_fs2;
  f32 temp_fs2_2;
  f32 temp_fs3;
  f32 temp_ft0;
  s32 temp_s2;
  s32 temp_s2_10;
  s32 temp_s2_11;
  s32 temp_s2_12;
  s32 temp_s2_13;
  s32 temp_s2_2;
  s32 temp_s2_3;
  s32 temp_s2_4;
  s32 temp_s2_5;
  s32 temp_s2_6;
  s32 temp_s2_7;
  s32 temp_s2_8;
  s32 temp_s2_9;
  s32 temp_v0;
  s32 temp_v1;
  s32 var_a1;
  s32 var_a1_3;
  s32 var_a1_4;
  s32 var_s2;
  s32 var_s3;
  s32 var_v0;
  s32 var_v0_2;
  s8 temp_v1_2;
  u16 *temp_a0;
  do
  {
    arg0_byte = arg0;
  }
  while (0);
  __base_D_801C7470 = 0;
  var_a1 = 0;
  var_v0 = 0 & 0xFF;
  do
  {
    (&sp48[0])[var_v0] = 0xFFFF;
    var_a1 += 1;
    var_v0 = var_a1 & 0xFF;
  }
  while (((u32) (var_a1 & 0xFF)) < 4U);
  temp_v1 = (arg0 & 0xFF) * 5;
  temp_fs3 = (*((f32 *) (D_801C7082 + temp_v1))) * 400.0f;
  temp_fs2 = *((f32 *) (D_801C7081 + temp_v1));
  temp_ft0 = (*((f32 *) (D_801C7083 + temp_v1))) * 400.0f;
  temp_v1_2 = *(D_801C7084 + temp_v1);
  if (((temp_v1_2 == 2) | (temp_v1_2 == 0x30)) != 0)
  {
    goto block_43;
  }
  if (temp_v1_2 == 3)
  {
    var_s3 = arg0_byte & 0xFF;
    temp_s2 = 0x5B & 0xFF;
    temp_fs1 = (temp_fs2 * 0.5f) + 0.5f;
    sp48[0] = func_800DE41C(0, var_s3, 1, 0x80, temp_s2, 0xFF, D_80315870, 0.0f, 0.0f, (temp_fs3 + 50.0f) * 0.5f, temp_fs1, (temp_ft0 + (-74.0f)) * 0.5f, 0, 0, 0, 0.5f, 0x3F000000, 0.5f);
    temp_fs0 = (temp_ft0 + (-10.0f)) * 0.5f;
    sp4A = func_800DE41C(0, var_s3, 1, 0x80, temp_s2, 0xFF, D_80315870, 0.0f, 0.0f, (temp_fs3 + (-50.0f)) * 0.5f, temp_fs1, temp_fs0, 0, 0, 0, 0.5f, 0x3F000000, 0.5f);
    sp4C = func_800DE41C(0, var_s3, 1, 0x80, temp_s2, 0xFF, D_80315870, 0.0f, 0.0f, inline_fn(temp_fs3), temp_fs1, temp_fs0, 0, 0, 0, 0.5f, 0x3F000000, 0.5f);
    goto block_56;
  }
  var_s3 = arg0_byte & 0xFF;
  if (((temp_v1_2 == 4) | (temp_v1_2 == 0x32)) != 0)
  {
    temp_s2_2 = 0x5B & 0xFF;
    ;
    sp48[0] = func_800DE41C(0, var_s3, 1, 0x80, temp_s2_2, 0xFF, D_80315808, 0.0f, 0.0f, (temp_fs3 + 50.0f) * 0.5f, (temp_fs2 * 0.5f) + 0.5f, (temp_ft0 + 20.0f) * 0.5f, 0, 0, 0, 0.5f, 0x3F000000, 0.5f);
    sp4A = func_800DE41C(0, var_s3, 1, 0x80, temp_s2_2, 0xFF, D_80315808, 0.0f, 0.0f, (temp_fs3 + (-50.0f)) * 0.5f, temp_fs1, (temp_ft0 + 73.0f) * 0.5f, 0, 0, 0, 0.5f, 0x3F000000, 0.5f);
    sp4C = func_800DE41C(0, var_s3, 1, 0x80, temp_s2_2, 0xFF, D_80315808, 0.0f, 0.0f, inline_fn(temp_fs3), temp_fs1, (temp_ft0 + 45.0f) * 0.5f, 0, 0, 0, 0.5f, 0x3F000000, 0.5f);
    goto block_57;
  }
  if (((temp_v1_2 == 7) | (temp_v1_2 == 0x35)) != 0)
  {
    goto block_42;
  }
  var_s3 = arg0_byte & 0xFF;
  if (((temp_v1_2 == 8) | (temp_v1_2 == 0x36)) != 0)
  {
    temp_s2_3 = 0x5B & 0xFF;
    temp_fs2_2 = (temp_fs2 + 0.0f) * 0.5f;
    sp48[0] = func_800DE41C(0, var_s3, 1, 0, temp_s2_3, 0xFF, D_803159DC, 0.0f, 0.0f, (temp_fs3 + (-10.0f)) * 0.5f, temp_fs2_2, (temp_ft0 + 50.0f) * 0.5f, 0, 0, 0, 0.5f, 0x3F000000, 0.5f);
    sp4A = func_800DE41C(0, var_s3, 1, 0, temp_s2_3, 0xFF, D_803159DC, 0.0f, 0.0f, (temp_fs3 + (-45.0f)) * 0.5f, temp_fs2_2, (temp_ft0 + (-150.0f)) * 0.5f, 0, 0, 0, 0.5f, 0x3F000000, 0.5f);
    sp4C = func_800DE41C(0, var_s3, 1, 0, temp_s2_3, 0xFF, D_803159DC, 0.0f, 0.0f, (temp_fs3 + (-70.0f)) * 0.5f, temp_fs2_2, (temp_ft0 + (-50.0f)) * ((unsigned short) 0.5f), 0, 0, 0, 0.5f, 0x3F000000, 0.5f);
    var_a1_3 = var_s3;
    var_a3 = 0;
    sp4E = func_800DE41C(0, var_a1_3, 1, var_a3);
    goto block_59;
  }
  if (((temp_v1_2 == 9) | (temp_v1_2 == 0x37)) != 0)
  {
    temp_s2_4 = 0x5B & 0xFF;
    temp_fs0_2 = (temp_fs3 + 20.0f) * 0.5f;
    temp_fs1 = (temp_fs2 * 0.5f) + 0.5f;
    sp48[0] = func_800DE41C(0, var_s3, 1, 0x80, temp_s2_4, 0xFF, D_8031583C, 0.0f, 0.0f, temp_fs0_2, temp_fs1, (temp_ft0 + (-50.0f)) * 0.5f, 0, 0, 0, 0.5f, 0x3F000000, 0.5f);
    sp4A = func_800DE41C(0, var_s3, 1, 0x80, temp_s2_4, 0xFF, D_8031583C, 0.0f, 0.0f, temp_fs0_2, temp_fs1, inline_fn(temp_ft0), 0, 0, 0, 0.5f, 0x3F000000, 0.5f);
    sp4C = func_800DE41C(0, var_s3, 1, 0x80, temp_s2_4, 0xFF, D_8031583C, 0.0f, 0.0f, (temp_fs3 + 47.0f) * 0.5f, temp_fs1, (temp_ft0 + 50.0f) * 0.5f, 0, 0, 0, 0.5f, 0x3F000000, 0.5f);
    goto block_56;
  }
  if (((temp_v1_2 == 0xB) | (temp_v1_2 == 0x39)) != 0)
  {
    var_a3_2 = __repair_constant;
    goto block_44;
  }
  if (((temp_v1_2 == 0xE) | (temp_v1_2 == 0x3C)) != 0)
  {
    do
    {
      var_a3_2 = __repair_constant;
    }
    while (0);
    goto block_44;
  }
  if (((temp_v1_2 == 0x11) | (temp_v1_2 == 0x3F)) != 0)
  {
    var_a3_2 = __repair_constant;
    goto block_44;
  }
  if (((temp_v1_2 == 0x14) | (temp_v1_2 == 0x42)) != 0)
  {
    var_a3_2 = __repair_constant;
    sp48[0] = func_800DE41C(0, arg0 & 0xFF, 1, var_a3_2);
    goto block_59;
  }
  if (((temp_v1_2 == 0x18) | (temp_v1_2 == 0x46)) != 0)
  {
    goto block_42;
  }
  if (temp_v1_2 == 0x19)
  {
    var_s3 = arg0_byte & 0xFF;
    temp_s2_5 = 0x5B & 0xFF;
    sp48[0] = func_800DE41C(0, var_s3, 1, 0x80, temp_s2_5, 0xFF, D_80315870, 0.0f, 0.0f, (temp_fs3 + 50.0f) * 0.5f, (temp_fs2 + 22.5f) * 0.5f, (temp_ft0 + 10.0f) * 0.5f, 0, 0, 0, 0.5f, 0x3F000000, 0.5f);
    sp4A = func_800DE41C(0, var_s3, 1, 0x80, temp_s2_5, 0xFF, D_80315870, 0.0f, 0.0f, (temp_fs3 + (-50.0f)) * 0.5f, (temp_fs2 + 37.5f) * 0.5f, (temp_ft0 + 76.5f) * 0.5f, 0, 0, 0, 0.5f, 0x3F000000, 0.5f);
    sp4C = func_800DE41C(0, var_s3, 1, 0x80, temp_s2_5, 0xFF, D_80315870, 0.0f, 0.0f, inline_fn(temp_fs3), (temp_fs2 + 7.5f) * 0.5f, (temp_ft0 + 48.5f) * 0.5f, 0, 0, 0, 0.5f, 0x3F000000, 0.5f);
    goto block_57;
  }
  var_s3 = arg0_byte & 0xFF;
  if (((temp_v1_2 == 0x1A) | (temp_v1_2 == 0x48)) != 0)
  {
    temp_s2_6 = 0x5B & 0xFF;
    sp48[0] = func_800DE41C(0, var_s3, 1, 0x80, temp_s2_6, 0xFF, D_80315808, 0.0f, 0.0f, (temp_fs3 + 50.0f) * 0.5f, (temp_fs2 + 22.5f) * 0.5f, (temp_ft0 + 20.0f) * 0.5f, 0, 0, 0, 0.5f, 0x3F000000, 0.5f);
    sp4A = func_800DE41C(0, var_s3, 1, 0x80, temp_s2_6, 0xFF, D_80315808, 0.0f, 0.0f, (temp_fs3 + (-50.0f)) * 0.5f, (temp_fs2 + 37.5f) * 0.5f, (temp_ft0 + 47.0f) * 0.5f, 0, 0, 0, 0.5f, 0x3F000000, 0.5f);
    sp4C = func_800DE41C(0, var_s3, 1, 0x80, temp_s2_6, 0xFF, D_80315808, 0.0f, 0.0f, inline_fn(temp_fs3), (temp_fs2 + 7.5f) * 0.5f, (temp_ft0 + 74.0f) * 0.5f, 0, 0, 0, 0.5f, 0x3F000000, 0.5f);
    goto block_57;
  }
  if (((temp_v1_2 == 0x1D) | (temp_v1_2 == 0x4B)) != 0)
  {
    goto block_42;
  }
  if (temp_v1_2 == 0x1E)
  {
    var_s3 = arg0_byte & 0xFF;
    var_s2 = 0x5B & 0xFF;
    var_s0 = D_80315870;
    goto block_55;
  }
  var_s3 = arg0_byte & 0xFF;
  if (((temp_v1_2 == 0x1F) | (temp_v1_2 == 0x4D)) != 0)
  {
    temp_s2_7 = 0x5B & 0xFF;
    sp48[0] = func_800DE41C(0, var_s3, 1, 0x80, temp_s2_7, 0xFF, D_80315808, 0.0f, 0.0f, (temp_fs3 + 50.0f) * 0.5f, (temp_fs2 + 37.5f) * 0.5f, (temp_ft0 + (-76.0f)) * 0.5f, 0, 0, 0, 0.5f, 0x3F000000, 0.5f);
    sp4A = func_800DE41C(0, var_s3, 1, 0x80, temp_s2_7, 0xFF, D_80315808, 0.0f, 0.0f, (temp_fs3 + (-50.0f)) * 0.5f, (temp_fs2 + 22.5f) * 0.5f, (temp_ft0 + (-20.0f)) * 0.5f, 0, 0, 0, 0.5f, 0x3F000000, 0.5f);
    sp4C = func_800DE41C(0, var_s3, 1, 0x80, temp_s2_7, 0xFF, D_80315808, 0.0f, 0.0f, inline_fn(temp_fs3), (temp_fs2 + 52.5f) * 0.5f, (temp_ft0 + 14.0f) * 0.5f, 0, 0, 0, 0.5f, 0x3F000000, 0.5f);
    goto block_56;
  }
  if (((temp_v1_2 == 0x22) | (temp_v1_2 == 0x50)) != 0)
  {
    goto block_42;
  }
  var_s3 = arg0_byte & 0xFF;
  if (((temp_v1_2 == 0x23) | (temp_v1_2 == 0x51)) != 0)
  {
    temp_s2_8 = 0x5B & 0xFF;
    temp_fs0_3 = (temp_fs3 + 24.0f) * 0.5f;
    sp48[0] = func_800DE41C(0, var_s3, 1, 0, temp_s2_8, 0xFF, D_803159DC, 0.0f, 0.0f, temp_fs0_3, (temp_fs2 + 7.5f) * 0.5f, inline_fn(temp_ft0), 0x41087AE1, 0, 0, 0.5f, 0x3F000000, 0.5f);
    sp4A = func_800DE41C(0, var_s3, 1, 0, temp_s2_8, 0xFF, D_803159DC, 0.0f, 0.0f, temp_fs0_3, (temp_fs2 + 52.5f) * 0.5f, (temp_ft0 + (-150.0f)) * 0.5f, 0x41087AE1, 0, 0, 0.5f, 0x3F000000, 0.5f);
    sp4C = func_800DE41C(0, var_s3, 1, 0, temp_s2_8, 0xFF, D_803159DC, 0.0f, 0.0f, (temp_fs3 + (-10.0f)) * 0.5f, (temp_fs2 + 22.5f) * 0.5f, (temp_ft0 + 50.0f) * 0.5f, 0x41087AE1, 0, 0, 0.5f, 0x3F000000, 0.5f);
    var_a1_3 = var_s3;
    var_a3 = 0;
    sp4E = func_800DE41C(0, var_a1_3, 1, var_a3);
    goto block_59;
  }
  if (((temp_v1_2 == 0x24) | (temp_v1_2 == 0x52)) != 0)
  {
    temp_s2_9 = 0x5B & 0xFF;
    temp_fs0_4 = (temp_fs3 + (-20.0f)) * 0.5f;
    sp48[0] = func_800DE41C(0, var_s3, 1, 0x80, temp_s2_9, 0xFF, D_8031583C, 0.0f, 0.0f, temp_fs0_4, (temp_fs2 + 22.5f) * 0.5f, (temp_ft0 + 50.0f) * 0.5f, 0, 0, 0, 0.5f, 0x3F000000, 0.5f);
    sp4A = func_800DE41C(0, var_s3, 1, 0x80, temp_s2_9, 0xFF, D_8031583C, 0.0f, 0.0f, temp_fs0_4, (temp_fs2 + 52.5f) * 0.5f, (temp_ft0 + (-150.0f)) * 0.5f, 0, 0, 0, 0.5f, 0x3F000000, 0.5f);
    sp4C = func_800DE41C(0, var_s3, 1, 0x80, temp_s2_9, 0xFF, D_8031583C, 0.0f, 0.0f, (temp_fs3 + (-48.5f)) * 0.5f, (temp_fs2 + 7.5f) * 0.5f, inline_fn(temp_ft0), 0, 0, 0, 0.5f, 0x3F000000, 0.5f);
    goto block_56;
  }
  if (((temp_v1_2 == 0x27) | (temp_v1_2 == 0x55)) != 0)
  {
    block_42:
    block_43:
    var_a3_2 = 0;


    block_44:
    sp48[0] = func_800DE41C(0, arg0 & 0xFF, 1, var_a3_2);

    goto block_59;
  }
  var_s3 = arg0_byte & 0xFF;
  if (((temp_v1_2 == 0x28) | (temp_v1_2 == 0x56)) != 0)
  {
    temp_s2_10 = 0x5B & 0xFF;
    temp_fs0_5 = (temp_fs3 + 10.0f) * 0.5f;
    sp48[0] = func_800DE41C(0, var_s3, 1, 0, temp_s2_10, 0xFF, D_803159DC, 0.0f, 0.0f, temp_fs0_5, (temp_fs2 + 22.5f) * 0.5f, (temp_ft0 + (-50.0f)) * 0.5f, 0xC1087AE1, 0, 0, 0.5f, 0x3F000000, 0.5f);
    sp4A = func_800DE41C(0, var_s3, 1, 0, temp_s2_10, 0xFF, D_803159DC, 0.0f, 0.0f, temp_fs0_5, (temp_fs2 + 52.5f) * 0.5f, inline_fn(temp_ft0), 0xC1087AE1, 0, 0, 0.5f, 0x3F000000, 0.5f);
    sp4C = func_800DE41C(0, var_s3, 1, 0, temp_s2_10, 0xFF, D_803159DC, 0.0f, 0.0f, (temp_fs3 + 47.0f) * 0.5f, (temp_fs2 + 37.5f) * 0.5f, (temp_ft0 + 50.0f) * 0.5f, 0xC1087AE1, 0, 0, 0.5f, 0x3F000000, 0.5f);
    var_a1_3 = var_s3;
    var_a3 = 0;
    sp4E = func_800DE41C(0, var_a1_3, 1, var_a3);
    goto block_59;
  }
  if (((temp_v1_2 == 0x29) | (temp_v1_2 == 0x57)) != 0)
  {
    temp_s2_11 = 0x5B & 0xFF;
    temp_fs0_6 = (temp_fs3 + 20.0f) * 0.5f;
    sp48[0] = func_800DE41C(0, var_s3, 1, 0x80, temp_s2_11, 0xFF, D_8031583C, 0.0f, 0.0f, temp_fs0_6, (temp_fs2 + 22.5f) * 0.5f, (temp_ft0 + (-50.0f)) * 0.5f, 0, 0, 0, 0.5f, 0x3F000000, 0.5f);
    sp4A = func_800DE41C(0, var_s3, 1, 0x80, temp_s2_11, 0xFF, D_8031583C, 0.0f, 0.0f, temp_fs0_6, (temp_fs2 + 52.5f) * 0.5f, inline_fn(temp_ft0), 0, 0, 0, 0.5f, 0x3F000000, 0.5f);
    sp4C = func_800DE41C(0, var_s3, 1, 0x80, temp_s2_11, 0xFF, D_8031583C, 0.0f, 0.0f, (temp_fs3 + 48.0f) * 0.5f, (temp_fs2 + 7.5f) * 0.5f, (temp_ft0 + (-150.0f)) * 0.5f, 0, 0, 0, 0.5f, 0x3F000000, 0.5f);
    goto block_56;
  }
  if (temp_v1_2 == 0x31)
  {
    var_s3 = arg0_byte & 0xFF;
    ;
    temp_fs1 = (temp_fs2 * 0.5f) + 0.5f;
    sp48[0] = func_800DE41C(0, arg0_byte & 0xFF, 1, 0x80, 0x5B & 0xFF, 0xFF, D_803157D4, 0.0f, 0.0f, (temp_fs3 + 50.0f) * 0.5f, temp_fs1, (temp_ft0 + (-74.0f)) * 0.5f, 0, 0, 0, 0.5f, 0x3F000000, 0.5f);
    temp_fs0_7 = (temp_ft0 + (-10.0f)) * 0.5f;
    sp4A = func_800DE41C(0, var_s3, 1, 0x80, temp_s2_12, 0xFF, D_803157D4, 0.0f, 0.0f, (temp_fs3 + (-50.0f)) * 0.5f, temp_fs1, temp_fs0_7, 0, 0, 0, 0.5f, 0x3F000000, 0.5f);
    sp4C = func_800DE41C(0, var_s3, 1, 0x80, temp_s2_12, 0xFF, D_803157D4, 0.0f, 0.0f, inline_fn(temp_fs3), temp_fs1, temp_fs0_7, 0, 0, 0, 0.5f, 0x3F000000, 0.5f);
    goto block_56;
  }
  if (temp_v1_2 == 0x47)
  {
    var_s3 = arg0_byte & 0xFF;
    temp_s2_13 = 0x5B & 0xFF;
    sp48[0] = func_800DE41C(0, var_s3, 1, 0x80, temp_s2_13, 0xFF, D_803157D4, 0.0f, 0.0f, (temp_fs3 + 50.0f) * 0.5f, (temp_fs2 + 22.5f) * 0.5f, (temp_ft0 + 10.0f) * 0.5f, 0, 0, 0, 0.5f, 0x3F000000, 0.5f);
    sp4A = func_800DE41C(0, var_s3, 1, 0x80, temp_s2_13, 0xFF, D_803157D4, 0.0f, 0.0f, (temp_fs3 + (-50.0f)) * 0.5f, (temp_fs2 + 37.5f) * 0.5f, (temp_ft0 + 76.5f) * 0.5f, 0, 0, 0, 0.5f, 0x3F000000, 0.5f);
    sp4C = func_800DE41C(0, var_s3, 1, 0x80, temp_s2_13, 0xFF, D_803157D4, 0.0f, 0.0f, inline_fn(temp_fs3), (temp_fs2 + 7.5f) * 0.5f, (temp_ft0 + 48.5f) * 0.5f, 0, 0, 0, 0.5f, 0x3F000000, 0.5f);
    goto block_57;
  }
  var_a1_4 = 0;
  if (temp_v1_2 == 0x4C)
  {
    var_s3 = arg0_byte & 0xFF;
    var_s0 = D_803157D4;
    var_s2 = 0x5B & 0xFF;
    block_55:
    sp48[0] = func_800DE41C(0, var_s3, 1, 0x80, (s32) var_s0, 0, NULL, (temp_fs3 + 50.0f) * 0.5f, (temp_fs2 + 37.5f) * 0.5f, (temp_ft0 + (-76.5f)) * 0.5f, 0.0f, 0.0f, 0, 0x3F000000, 0x3F000000, 0.5f);

    temp_fs0_8 = (temp_ft0 + (-10.0f)) * 0.5f;
    sp4A = func_800DE41C(0, var_s3, 1, 0x80, var_s2, 0xFF, var_s0, 0.0f, 0.0f, (temp_fs3 + (-50.0f)) * 0.5f, (temp_fs2 + 22.5f) * 0.5f, temp_fs0_8, 0, 0, 0, 0.5f, 0x3F000000, 0.5f);
    sp4C = func_800DE41C(0, var_s3, 1, 0x80, var_s2, 0xFF, var_s0, 0.0f, 0.0f, (temp_fs3 + 150.0f) * 0.5f, (temp_fs2 + 52.5f) * 0.5f, temp_fs0_8, 0, 0, 0, 0.5f, 0x3F000000, 0.5f);
    block_56:
    block_57:
    var_a1_3 = var_s3;


    var_a3 = __repair_constant;
    block_58:
    sp4E = func_800DE41C(0, var_a1_3, 1, var_a3);

    block_59:
    var_a1_4 = 0;

  }
  var_v0_2 = 0 & 0xFF;
  do
  {
    temp_a0 = &(&sp48[0])[var_v0_2];
    if ((*temp_a0) != 0xFFFF)
    {
      __index_D_801C7470 = (arg0 & 0xFF) * 8;
      __base_D_801C7470 = D_801C7470;
      *((s32 *) ((var_v0_2 * 2) + (__base_D_801C7470 + ((arg0 & 0xFF) * 8)))) = *temp_a0;
      temp_v0 = (*temp_a0) * 0x64;
      *((u16 *) (D_8011F2F4 + temp_v0)) = (*((u16 *) (D_8011F2F4 + temp_v0))) | 0x28;
      D_801C7AB6 += 1;
    }
    var_a1_4 += 1;
    var_v0_2 = var_a1_4 & 0xFF;
  }
  while (((u32) (var_a1_4 & 0xFF)) < 4U);
}

