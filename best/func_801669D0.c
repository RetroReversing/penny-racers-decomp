s32 func_800DE41C(s32, u8, s32, s32, s32, s32, s32 *, s32 *, s32, s32, f32, s32, s32, f32, s32, s32, s32, s32);
s32 func_8013E364();
s32 func_8013E49C(s32, s32);
s32 func_8013E818(s32, s32, s32, s32, s32, s32, s32);
s32 func_801D7028(s32, s32);
extern s32 D_8011F308;
extern s32 D_8011F30C;
extern s32 D_8011F310;
extern s32 D_8011F320;
extern s32 D_8018D6C4;
extern s32 D_8022A770;
extern s32 D_8022A772;
extern volatile unsigned int D_8022ACD0;
extern s32 D_8022AED0;
extern s32 D_80239540;
extern s32 func_80166DC0;
extern s32 func_8016711C;
void func_801669D0(void *arg0)
{
  s16 temp_v0_2;
  s32 temp_s0;
  s32 temp_s0_2;
  s32 temp_s0_3;
  s32 temp_s0_4;
  s32 temp_s1;
  s32 temp_s2;
  s32 temp_v0;
  s32 temp_v0_3;
  s32 var_a1;
  s32 var_s2;
  s32 var_s3;
  s32 var_v0;
  u16 temp_v1;
  temp_s0 = *((s32 *) (((char *) arg0) + 0x898));
  if (((temp_s0 == 1) && (!((*((u16 *) (((char *) arg0) + 0x560))) & 0x4F))) && ((temp_v0 = func_8013E364(), var_s2 = temp_v0 & 0xFFFF, (temp_v0 & 0xFFFF) != 0xFFFF)))
  {
    var_a1 = func_800DE41C(0, 0U, 3, 0, 0x20, temp_s0, NULL, &func_80166DC0, 0, 0, 0.0f, 0, 0, 0.0f, 0, 0, 0, 0);
    temp_s0_2 = temp_v0 & 0xFFFF;
    if (((u32) ((var_a1 + 2) & 0xFFFF)) < 2U)
    {
      goto block_4;
    }
    func_8013E818(temp_s0_2, var_a1 & 0xFFFF, 0, 0, 0, 0, 0x136);
    *((&D_8018D6C4) + (temp_s0_2 * 0x7C)) = arg0;
    *((u16 *) (((char *) arg0) + 0x560)) = (u16) ((*((u16 *) (((char *) arg0) + 0x560))) | 0x40);
    temp_v0_2 = *((s16 *) (((char *) arg0) + 0x55E));
    if (temp_v0_2 > 0)
    {
      *((s16 *) (((char *) arg0) + 0x55E)) = (s16) (temp_v0_2 - 1);
    }
    var_s3 = 0;
    var_v0 = 0 * 8;
    loop_8:
    temp_s0_3 = (((var_v0 + var_s3) * 0x10) - var_s3) * 0x10;

    temp_v1 = *((&D_8022A772) + temp_s0_3);
    if (((temp_v1 != 0xFFFF) && (temp_v1 != (*((u16 *) (((char *) arg0) + 2))))) && (!((*((&D_8022ACD0) + temp_s0_3)) & 0x68)))
    {
      temp_v0_3 = func_8013E364();
      var_s2 = temp_v0_3 & 0xFFFF;
      if (var_s2 != 0xFFFF)
      {
        var_a1 = func_800DE41C(0, *((u8 *) (((char *) arg0) + 5)), 1, 0, 0x51, 0xFF, &D_80239540, &func_8016711C, 0, *((&D_8011F308) + ((*((&(*(s32 *)0x8022a770)) + temp_s0_3)) * 0x64)), (*((&D_8011F30C) + ((*((&D_8022A772) + temp_s0_3)) * 0x64))) + 200, *((&D_8011F310) + ((*((&D_8022A772) + temp_s0_3)) * 0x64)), 0, (f32) (var_s3 * 0x3C), 0, 0x3F800000, 0x3F800000, 0x3F800000);
        if (((u32) ((var_a1 + 2) & 0xFFFF)) >= 2U)
        {
          if (arg0)
          {
            temp_s0_4 = var_s3 * 0x8F0;
            *((&D_8022ACD0) + temp_s0_4) = (*((&D_8022ACD0) + temp_s0_4)) | 8;
            *((&D_8022AED0) + temp_s0_4) = (*((&D_8022AED0) + temp_s0_4)) + 30000.0f;
            temp_s2 = var_a1 & 0xFFFF;
            func_801D7028(temp_s2, 0x36);
            var_v0 = temp_v0_3 & 0xFFFF;
            temp_s1 = var_v0;
            func_8013E818(temp_s1, temp_s2, 0, 0, 0x43480000, *((&D_8011F320) + ((*((&D_8022A772) + temp_s0_4)) * 0x64)), 0x12C);
            *((&D_8018D6C4) + (temp_s1 * 0x7C)) = temp_s0_4 + (&D_8022A770);
            goto block_14;
          }
          else
          {
            temp_s0_4 = var_s3 * 0x8F0;
            *((&D_8022ACD0) + temp_s0_4) = (*((&D_8022ACD0) + temp_s0_4)) | 8;
            *((&D_8022AED0) + temp_s0_4) = (*((&D_8022AED0) + temp_s0_4)) + 30000.0f;
            temp_s2 = var_a1 & 0xFFFF;
            func_801D7028(temp_s2, 0x36);
            var_v0 = temp_v0_3 & 0xFFFF;
            temp_s1 = var_v0;
            func_8013E818(temp_s1, temp_s2, 0, 0, 0x43480000, *((&D_8011F320) + ((*((&D_8022A772) + temp_s0_4)) * 0x64)), 0x12C);
            *((&D_8018D6C4) + (temp_s1 * 0x7C)) = temp_s0_4 + (&D_8022A770);
            goto block_14;
          }
        }
        block_4:
        func_8013E49C(var_s2, var_a1);

      }
    }
    else
    {
      block_14:
      var_s3 += 1;

      var_v0 = var_s3 * 8;
      if (var_s3 >= 7)
      {
      }
      else
      {
        goto loop_8;
      }
    }
  }
}

