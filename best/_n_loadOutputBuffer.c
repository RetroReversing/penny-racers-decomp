void *_n_loadBuffer(void *, s32, s32, s32, s32);
s32 osVirtualToPhysical(s32);
f32 _doModFunc(void *, s32);
extern f64 D_8004A4A0;
void *_n_loadOutputBuffer(void *arg0, void *arg1, s32 arg2, s32 arg3)
{
  f32 temp_fs0;
  f32 temp_fv0;
  s32 temp_a1;
  s32 temp_fv1;
  unsigned short temp_s0;
  s32 temp_s1;
  void *temp_s4;
  s32 temp_a3;
  void *temp_v0;
  void *var_s4;
  if ((*((void **) (((char *) arg1) + 0x24))) != NULL)
  {
    temp_s0 = (*((s32 *) (((char *) arg1) + 4))) - (*((s32 *) (((char *) arg1) + 0)));
    temp_fs0 = (f32) (D_8004A4A0 - ((f64) (((f32) ((s32) ((_doModFunc(arg1, 0xB8) / ((f32) temp_s0)) * 32768.0f))) / 32768.0f)));
    temp_v0 = *((void **) (((char *) arg1) + 0x24));
    temp_fv0 = (*((f32 *) (((char *) temp_v0) + 0x20))) + (temp_fs0 * ((f32) 0xB8));
    temp_fv1 = (s32) temp_fv0;
    *((f32 *) (((char *) temp_v0) + 0x20)) = (f32) (temp_fv0 - ((f32) temp_fv1));
    temp_a1 = (*((s32 *) (((char *) arg0) + 0x18))) + (((*((s32 *) (((char *) arg1) + 0x18))) - (*((s32 *) (((char *) arg1) + 4)))) * 2);
    temp_a3 = ((s32) (temp_a1 & 7)) >> 1;
    temp_s1 = temp_a3 * 2;
    temp_s4 = _n_loadBuffer(arg0, temp_a1 - temp_s1, 0x2E0, temp_fv1 + temp_a3, arg3);
    *((s32 *) (((char *) temp_s4) + 0)) = (s32) ((osVirtualToPhysical(*((s32 *) (((char *) (*((void **) (((char *) arg1) + 0x24)))) + 0x14))) & 0xFFFFFF) | 0x05000000);
    *((s32 *) (((char *) temp_s4) + 4)) = (s32) (((((*((s32 *) (((char *) (*((void **) (((char *) arg1) + 0x24)))) + 0x24))) << 0x1E) | ((((s32) (temp_fs0 * 32768.0f)) & 0xFFFF) << 0xE)) | ((temp_s1 | 0x2E0) * 4)) | ((arg2 >> 8) & 3));
    *((s32 *) (((char *) (*((void **) (((char *) arg1) + 0x24)))) + 0x24)) = 0;
    var_s4 = temp_s4 + 8;
    *((s32 *) (((char *) arg1) + 0x18)) = (s32) ((*((s32 *) (((char *) arg1) + 0x18))) + (temp_fv1 - 0xB8));
  }
  else
  {
    var_s4 = _n_loadBuffer(arg0, (*((s32 *) (((char *) arg0) + 0x18))) - ((*((s32 *) (((char *) arg1) + 4))) * 2), arg2, 0xB8, arg3);
  }
  return var_s4;
}

