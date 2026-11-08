s16 func_8012913C(f32, u16, f32, f32, f32);
extern s32 D_8011F2F0;
extern s32 D_8011F308;
extern s32 D_8011F30C;
extern s32 D_8011F310;
extern s32 D_8018D6C0;
extern s32 D_8022A772;
extern s32 D_8022AD5C;
extern u16 D_80233EC0;
void func_8013E640(s32 arg0, s32 arg1, void *arg2, s16 arg3, f32 arg4, f32 arg5, f32 arg6, f32 arg7, f32 arg8, f32 arg9, u16 arg10)
{
  s32 temp_a0;
  volatile int var_v1;
  void *temp_s0;
  void *temp_t0;
  void *var_a1;
  temp_t0 = (char *) ((arg1 & 0xFFFF) * 0x64); temp_t0 += (s32) (&D_8011F2F0);
  temp_s0 = ((arg0 & 0xFFFF) * 0x7C) + (&D_8018D6C0);
  *((void **) (((char *) temp_t0) + 0x60)) = temp_s0;
  *((s16 *) (((char *) temp_t0) + 8)) = arg3;
  *((s16 *) (((char *) temp_t0) + 6)) = arg3;
  *((s16 *) (((char *) temp_t0) + 4)) = arg3;
  *((s16 *) (((char *) temp_t0) + 2)) = arg3;
  *((f32 *) (((char *) temp_t0) + 0x18)) = (f32) (arg4 + (*((&D_8011F308) + ((*((u16 *) (((char *) arg2) + 2))) * 0x64))));
  *((f32 *) (((char *) temp_t0) + 0x1C)) = (f32) (arg5 + (*((&D_8011F30C) + ((*((u16 *) (((char *) arg2) + 2))) * 0x64))));
  *((f32 *) (((char *) temp_t0) + 0x20)) = (f32) (arg6 + (*((&D_8011F310) + ((*((u16 *) (((char *) arg2) + 2))) * 0x64))));
  *((f32 *) (((char *) temp_s0) + 8)) = arg7;
  *((f32 *) (((char *) temp_s0) + 0xC)) = arg8;
  *((f32 *) (((char *) temp_s0) + 0x10)) = arg9;
  *((u16 *) (((char *) temp_s0) + 0x14)) = arg10;
  *((s8 *) (((char *) temp_s0) + 0x16)) = 0;
  *((u16 *) (((char *) temp_s0) + 0x74)) = (u16) (*((u16 *) (((char *) arg2) + 0x8E4)));
  *((void **) (((char *) temp_s0) + 4)) = arg2;
  *((s16 *) (((char *) temp_s0) + 0x20)) = func_8012913C(arg9, D_80233EC0, *((f32 *) (((char *) temp_t0) + 0x18)), *((f32 *) (((char *) temp_t0) + 0x1C)), *((f32 *) (((char *) temp_t0) + 0x20)));
  *((s16 *) (((char *) temp_s0) + 0x22)) = 0;
  *((s8 *) (((char *) temp_s0) + 0x1D)) = 0;
  *((s8 *) (((char *) temp_s0) + 0x1E)) = 0;
  *((s32 *) (((char *) temp_s0) + 0x70)) = 0;
  var_v1 = 0;
  var_a1 = temp_s0;
  __repair_rows:
  {
    *((s8 *) (((char *) var_a1) + 0x67)) = 0;
    temp_a0 = var_v1 * 0x8F0;
    if (((*((&D_8022A772) + temp_a0)) != 0xFFFF) && ((*((&D_8022AD5C) + temp_a0)) > 0.0f))
    {
      *((s8 *) (((char *) var_a1) + 0x60)) = var_v1;
    }
    else
    {
      *((s8 *) (((char *) (temp_s0 + var_v1)) + 0x60)) = -1;
    }
    var_v1 += 1;
    var_a1 = (char *) temp_s0; var_a1 += (s32) var_v1;
  }

  if (var_v1 < 7)
  {
    goto __repair_rows;
  }
}

