s32 func_800DE41C(s32, s32, s32, s32, s32, s32, s32 *, s32 *, s32 *, f32, f32, f32, s32, s32, s32, f32, f32, f32);
s32 func_801FA38C(s32);
extern s32 D_8011F2F0;
extern s32 D_8011F2F2;
extern volatile unsigned short D_8011F32E;
extern f64 D_80183880;
extern u16 D_8018D660;
extern s32 D_802393D4;
extern s32 func_80157F6C;
extern s32 func_801580AC;
void func_801580F4(s32 arg0)
{
  int __repair_constant = 0x40;
  f64 temp_fs1;
  f64 var_fv1;
  f64 var_fv1_2;
  s32 temp_v0;
  s32 temp_v0_2;
  s32 temp_v0_4;
  s32 temp_v0_5;
  s32 temp_v1;
  s32 temp_v1_2;
  s32 temp_v1_3;
  s32 var_s1;
  void *temp_v0_3;
  void *temp_v0_6;
  temp_v1 = (arg0 & 0xFFFF) * 0x64;
  if ((*((&D_8011F32E) + temp_v1)) == 0)
  {
    D_8018D660 = 0;
    *((&D_8011F32E) + temp_v1) = 1;
  }
  D_8018D660 += 1;
  var_s1 = 0;
  if (((u16) D_8018D660) >= 0xBU)
  {
    temp_fs1 = D_80183880;
    loop_4:
    temp_v0 = func_801FA38C(0) % 1800;

    var_fv1 = (f64) temp_v0;
    if (temp_v0 < 0)
    {
      var_fv1 += temp_fs1;
    }
    temp_v0_2 = func_800DE41C(0, 0x1E, 1, 0, 0x5B, 0xFF, &D_802393D4, &func_80157F6C, &func_801580AC, 1800.0f, -260.0f, ((f32) var_fv1) + (-1200.0f), 0, 0, 0, 0.2f, 0.2f, 0.2f);
    if (((u32) ((temp_v0_2 + 2) & 0xFFFF)) >= 2U)
    {
      temp_v1_2 = (temp_v0_2 & 0xFFFF) * 0x64;
      temp_v0_3 = temp_v1_2 + (&D_8011F2F0);
      *((s16 *) (((char *) temp_v0_3) + 8)) = __repair_constant;
      *((s16 *) (((char *) temp_v0_3) + 6)) = __repair_constant;
      *((s16 *) (((char *) temp_v0_3) + 4)) = __repair_constant;
      *((&D_8011F2F2) + temp_v1_2) = __repair_constant;
      temp_v0_4 = func_801FA38C(0) % 1800;
      var_fv1_2 = (f64) temp_v0_4;
      if (temp_v0_4 < 0)
      {
        var_fv1_2 += temp_fs1;
      }
      temp_v0_5 = func_800DE41C(0, 0x1E, 1, 0, 0x5B, 0xFF, &D_802393D4, &func_80157F6C, &func_801580AC, 1200.0f, -260.0f, ((f32) var_fv1_2) + (-1200.0f), 0, 0, 0, 0.2f, 0.2f, 0.2f);
      if (((u32) ((temp_v0_5 + 2) & 0xFFFF)) >= 2U)
      {
        temp_v1_3 = (temp_v0_5 & 0xFFFF) * 0x64;
        temp_v0_6 = temp_v1_3 + (&D_8011F2F0);
        *((s16 *) (((char *) temp_v0_6) + 8)) = __repair_constant;
        *((s16 *) (((char *) temp_v0_6) + 6)) = __repair_constant;
        *((s16 *) (((char *) temp_v0_6) + 4)) = __repair_constant;
        *((&(*(s32 *)0x8011f2f0)) + temp_v1_3) = __repair_constant;
        var_s1 += 1;
        if (((u32) (var_s1 & 0xFFFF)) < 2U)
        {
          goto loop_4;
        }
      }
    }
    D_8018D660 = 0;
  }
}

