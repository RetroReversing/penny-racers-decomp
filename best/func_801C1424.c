f32 __sinf(f32);
s32 func_8013AE60(s32, s32 *);
extern s32 D_8011F32E;
extern s32 D_80167FB8;
extern s32 D_80167FBC;
extern s32 D_801C6AC8;
extern s32 D_801C6B60;
extern s32 D_801C6B80;
extern u8 D_801C6BAC;
void func_801C1424(s32 arg0)
{
  f32 sp10;
  s32 sp14;
  s32 sp18;
  s32 sp1C;
  s32 sp20;
  s32 sp24;
  s32 sp28;
  s32 sp2C;
  f32 *var_v0_2;
  f32 temp_fv0;
  f32 var_fv0;
  s32 temp_fv1;
  s32 var_s2;
  s32 var_s3;
  s32 var_s3_2;
  s32 var_s3_3;
  s32 var_v0;
  s32 var_v0_3;
  s32 var_v1;
  u16 temp_v1;
  sp10 = *((f32 *) (((char *) (&D_801C6AC8)) + 0));
  sp14 = *((s32 *) (((char *) (&D_801C6AC8)) + 4));
  sp18 = *((s32 *) (((char *) (&D_801C6AC8)) + 8));
  sp1C = *((s32 *) (((char *) (&D_801C6AC8)) + 0xC));
  sp20 = *((s32 *) (((char *) (&D_801C6AC8)) + 0x10));
  sp24 = *((s32 *) (((char *) (&D_801C6AC8)) + 0x14));
  sp28 = *((s32 *) (((char *) (&D_801C6AC8)) + 0x18));
  sp2C = *((s32 *) (((char *) (&D_801C6AC8)) + 0x1C));
  var_v1 = arg0 & 0xFFFF;
  if (D_801C6BAC == 0)
  {
    func_8013AE60(arg0 & 0xFFFF, &D_801C6AC8);
    var_v1 = arg0 & 0xFFFF;
  }
  temp_v1 = *((&D_8011F32E) + (var_v1 * 0x64));
  if (temp_v1 != 0)
  {
    var_s3 = 0;
    if (temp_v1 != 1)
    {
      return;
    }
    var_v0 = 0 * 4;
    do
    {
      var_v0_2 = var_v0 + (&D_801C6B60);
      temp_fv0 = *var_v0_2;
      if (!(temp_fv0 < 360.0f))
      {
        var_v0_2 = (var_s3 * 4) + (&D_801C6B60);
        if (1)
        {
        }
        var_fv0 = (*var_v0_2) - 360.0f;
      }
      else
      {
        var_fv0 = temp_fv0 + 4.0f;
      }
      *var_v0_2 = var_fv0;
      var_s3 += 1;
      var_v0 = var_s3 * 4;
    }
    while (var_s3 < 8);
    var_s3_2 = 0;
 do { var_s2 = 0 * 0x10; } while (0);
    do
    {
      temp_fv1 = (s32) (__sinf(((*((var_s3_2 * 4) + (&D_801C6B60))) * 3.1415927f) / 180.0f) * (&sp10)[var_s3_2]);
      *((s16 *) (((char *) (((var_s3_2 + 8) * 0x10) + (&D_80167FB8))) + 4)) = (s16) temp_fv1;
      *((&D_80167FBC) + var_s2) = (s16) temp_fv1;
      var_s3_2 += 1;
      var_s2 = var_s3_2 * 0x10;
    }
    while ((var_v0 = var_s3_2) < 8);
    return;
  }
  var_s3_3 = 0;
  var_v0_3 = 0 * 4;
  do
  {
    *(var_v0_3 + (&D_801C6B60)) = ((f32) var_s3_3) * 45.0f;
    var_s3_3 += 1;
    var_v0_3 = var_s3_3 * 4;
  }
  while ((var_v0 = var_s3_3) < 8);
  D_801C6B80 = 0;
  *((&D_8011F32E) + ((arg0 & 0xFFFF) * 0x64)) = 1;
}
