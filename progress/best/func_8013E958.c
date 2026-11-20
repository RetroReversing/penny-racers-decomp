s16 func_8012913C(u16, s32, s32, s32);
extern s32 D_8011F2F0;
extern s32 D_8011F350;
extern s32 D_8018D6C0;
extern u16 D_80233EC0;
void func_8013E958(s32 arg0, s32 arg1, s16 arg2, s32 arg3, f32 arg4, f32 arg5, u16 arg6)
{
  s32 temp_v0;
  void *temp_s0;
  void *temp_t0;
  arg1 &= 0xFFFF;
  if (temp_s0 || arg4)
  {
    temp_v0 = arg1 * 0x64;
    temp_t0 = temp_v0 + (&D_8011F2F0);
    temp_s0 = (char *) ((arg0 & 0xFFFF) * 0x7C);
    temp_s0 += (s32) (&D_8018D6C0);
    *((&D_8011F350) + temp_v0) = temp_s0;
    *((s16 *) (((char *) temp_t0) + 8)) = arg2;
    *((s16 *) (((char *) temp_t0) + 6)) = arg2;
    *((s16 *) (((char *) temp_t0) + 4)) = arg2;
    *((s16 *) (((char *) temp_t0) + 2)) = arg2;
    *((s32 *) (((char *) temp_s0) + 8)) = arg3;
    *((f32 *) (((char *) temp_s0) + 0xC)) = arg4;
    *((f32 *) (((char *) temp_s0) + 0x10)) = arg5;
    *((u16 *) (((char *) temp_s0) + 0x14)) = arg6;
    *((s8 *) (((char *) temp_s0) + 0x16)) = 0;
    *((s16 *) (((char *) temp_s0) + 0x20)) = func_8012913C(D_80233EC0, *((s32 *) (((char *) temp_t0) + 0x18)), *((s32 *) (((char *) temp_t0) + 0x1C)), *((s32 *) (((char *) temp_t0) + 0x20)));
    *((s16 *) (((char *) temp_s0) + 0x22)) = 0;
    *((s8 *) (((char *) temp_s0) + 0x1D)) = 0;
    *((s8 *) (((char *) temp_s0) + 0x1E)) = 0;
  }
  else
  {
    temp_v0 = arg1 * 0x64;
    temp_t0 = temp_v0 + (&D_8011F2F0);
    temp_s0 = (char *) ((arg0 & 0xFFFF) * 0x7C);
    temp_s0 += (s32) (&D_8018D6C0);
    *((&D_8011F350) + temp_v0) = temp_s0;
    *((s16 *) (((char *) temp_t0) + 8)) = arg2;
    *((s16 *) (((char *) temp_t0) + 6)) = arg2;
    *((s16 *) (((char *) temp_t0) + 4)) = arg2;
    *((s16 *) (((char *) temp_t0) + 2)) = arg2;
    *((s32 *) (((char *) temp_s0) + 8)) = arg3;
    *((f32 *) (((char *) temp_s0) + 0xC)) = arg4;
    *((f32 *) (((char *) temp_s0) + 0x10)) = arg5;
    *((u16 *) (((char *) temp_s0) + 0x14)) = arg6;
    *((s8 *) (((char *) temp_s0) + 0x16)) = 0;
    *((s16 *) (((char *) temp_s0) + 0x20)) = func_8012913C(D_80233EC0, *((s32 *) (((char *) temp_t0) + 0x18)), *((s32 *) (((char *) temp_t0) + 0x1C)), *((s32 *) (((char *) temp_t0) + 0x20)));
    *((s16 *) (((char *) temp_s0) + 0x22)) = 0;
    *((s8 *) (((char *) temp_s0) + 0x1D)) = 0;
    *((s8 *) (((char *) temp_s0) + 0x1E)) = 0;
  }
}

