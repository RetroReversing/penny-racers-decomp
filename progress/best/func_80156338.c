extern short D_802E90F4;
extern short D_802E9104;
extern short D_802E9124;
extern short D_802E9114;
extern short D_802E9134;
extern short D_802E9144;
extern short D_802E8D54;
extern short D_802E8D74;
extern short D_802E8D64;
extern short D_802E8D94;
extern short D_802E8DF4;
extern short D_802E8E04;
extern short D_802E8E14;
extern short D_802E8E24;
extern short D_802E8E34;
extern short D_802E8E54;
extern short D_802E8E94;
extern short D_802E8EA4;
extern short D_802E8EB4;
extern short D_802E8EC4;
extern short D_802E8ED4;
extern short D_802E8EE4;
extern short D_802E93A4;
extern short D_802E93F4;
extern short D_802E9414;
extern short D_802E9434;
extern short D_802E9444;
extern short D_802E9454;
extern short D_802E9464;
extern short D_802E9474;
extern short D_802E9484;
extern short D_802E9494;
extern short D_802E94A4;
extern short D_802E94B4;
extern short D_802E94D4;
f32 __sinf(f32);
extern u16 D_8016D698;
extern u16 D_8016D69A;
extern f64 D_80183820;
extern f64 D_80183828;
extern char D_802E9214[];
extern char D_802E9274[];
void func_80156338(void)
{
  f32 temp_fs2;
  f32 temp_fv1;
  f64 temp_fs0;
  f64 temp_fs1;
  s32 temp_fv0;
  s32 temp_fv0_2;
  s32 __repair_phase_temp_fv0_2;
  s32 temp_fv0_4;
  s32 var_v0;
  s32 var_v1;
  u16 temp_v1;
  short *__base_D_802E93A4;
  __base_D_802E93A4 = &D_802E93A4;
  __repair_phase_temp_fv0_2 = (u16) D_8016D698;
  D_8016D698 = __repair_phase_temp_fv0_2 + 3;
  if (((u16) D_8016D698) >= 0x169U)
  {
    D_8016D698 = __repair_phase_temp_fv0_2 - 0x165;
  }
  temp_fs1 = D_80183820;
  temp_fs0 = D_80183828;
  temp_fs2 = (((f32) D_8016D69A) * __sinf((f32) ((((f64) D_8016D698) * temp_fs1) / temp_fs0))) + 400.0f;
  temp_fv1 = (((f32) D_8016D69A) * __sinf((f32) ((((f64) D_8016D698) * temp_fs1) / temp_fs0))) + 200.0f;
  temp_fv0 = (s32) temp_fs2;
  D_802E90F4 = (s16) temp_fv0;
  D_802E9104 = (s16) temp_fv0;
  D_802E9124 = (s16) temp_fv0;
  temp_fv0_2 = (s32) temp_fv1;
  D_802E9114 = (s16) temp_fv0_2;
  D_802E9134 = (s16) temp_fv0_2;
  D_802E9144 = (s16) temp_fv0_2;
  var_v1 = 0;
  var_v0 = 0 * 0x10;
  do
  {
    *((s16 *) (D_802E9214 + var_v0)) = (s16) ((s32) temp_fv1);
    *((s16 *) (D_802E9274 + var_v0)) = (s16) ((s32) temp_fs2);
    var_v1 += 1;
    var_v0 = var_v1 * 0x10;
  }
  while (var_v1 < 6);
  if (temp_fs2)
  {
    temp_fv0_2 = (s32) temp_fs2;
    D_802E8D54 = (s16) temp_fv0_2;
    temp_fv0_4 = (s32) temp_fv1;
    D_802E8D74 = (s16) temp_fv0_4;
    D_802E8D64 = (s16) temp_fv0_2;
    D_802E8D94 = (s16) temp_fv0_4;
    D_802E8DF4 = (s16) temp_fv0_4;
    D_802E8E04 = (s16) temp_fv0_4;
    D_802E8E14 = (s16) temp_fv0_4;
    D_802E8E24 = (s16) temp_fv0_4;
    D_802E8E34 = (s16) temp_fv0_4;
    D_802E8E54 = (s16) temp_fv0_4;
    D_802E8E94 = (s16) temp_fv0_2;
    D_802E8EA4 = (s16) temp_fv0_2;
    D_802E8EB4 = (s16) temp_fv0_2;
    D_802E8EC4 = (s16) temp_fv0_2;
    D_802E8ED4 = (s16) temp_fv0_2;
    D_802E8EE4 = (s16) temp_fv0_2;
    *__base_D_802E93A4 = (s16) temp_fv0_4;
    *((s16 *) (((char *) __base_D_802E93A4) + (-0x20))) = (s16) temp_fv0_2;
    *((s16 *) (((char *) __base_D_802E93A4) + (-0x10))) = (s16) temp_fv0_4;
    *((s16 *) (((char *) __base_D_802E93A4) + (-0x40))) = (s16) temp_fv0_2;
    D_802E9414 = (s16) temp_fv0_4;
    D_802E9434 = (s16) temp_fv0_4;
    D_802E93F4 = (s16) temp_fv0_4;
    D_802E9444 = (s16) temp_fv0_4;
    D_802E9454 = (s16) temp_fv0_4;
    D_802E9464 = (s16) temp_fv0_4;
    D_802E9474 = (s16) temp_fv0_2;
    D_802E9484 = (s16) temp_fv0_2;
    D_802E9494 = (s16) temp_fv0_2;
    D_802E94A4 = (s16) temp_fv0_2;
    D_802E94B4 = (s16) temp_fv0_2;
    D_802E94D4 = (s16) temp_fv0_2;
  }
  else
  {
    temp_fv0_2 = (s32) temp_fs2;
    D_802E8D54 = (s16) temp_fv0_2;
    temp_fv0_4 = (s32) temp_fv1;
    D_802E8D74 = (s16) temp_fv0_4;
    D_802E8D64 = (s16) temp_fv0_2;
    D_802E8D94 = (s16) temp_fv0_4;
    D_802E8DF4 = (s16) temp_fv0_4;
    D_802E8E04 = (s16) temp_fv0_4;
    D_802E8E14 = (s16) temp_fv0_4;
    D_802E8E24 = (s16) temp_fv0_4;
    D_802E8E34 = (s16) temp_fv0_4;
    D_802E8E54 = (s16) temp_fv0_4;
    D_802E8E94 = (s16) temp_fv0_2;
    D_802E8EA4 = (s16) temp_fv0_2;
    D_802E8EB4 = (s16) temp_fv0_2;
    D_802E8EC4 = (s16) temp_fv0_2;
    D_802E8ED4 = (s16) temp_fv0_2;
    D_802E8EE4 = (s16) temp_fv0_2;
    *__base_D_802E93A4 = (s16) temp_fv0_4;
    *((s16 *) (((char *) __base_D_802E93A4) + (-0x20))) = (s16) temp_fv0_2;
    *((s16 *) (((char *) __base_D_802E93A4) + (-0x10))) = (s16) temp_fv0_4;
    *((s16 *) (((char *) __base_D_802E93A4) + (-0x40))) = (s16) temp_fv0_2;
    D_802E9414 = (s16) temp_fv0_4;
    D_802E9434 = (s16) temp_fv0_4;
    D_802E93F4 = (s16) temp_fv0_4;
    D_802E9444 = (s16) temp_fv0_4;
    D_802E9454 = (s16) temp_fv0_4;
    D_802E9464 = (s16) temp_fv0_4;
    D_802E9474 = (s16) temp_fv0_2;
    D_802E9484 = (s16) temp_fv0_2;
    D_802E9494 = (s16) temp_fv0_2;
    D_802E94A4 = (s16) temp_fv0_2;
    D_802E94B4 = (s16) temp_fv0_2;
    D_802E94D4 = (s16) temp_fv0_2;
  }
}

