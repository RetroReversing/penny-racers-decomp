s32 func_8012AD20(u16, void *, u8, u8);
extern s32 D_800DA260;
extern s32 D_8011F2F0;
extern s32 D_8011F304;
extern s32 D_80238D24;
extern s32 D_80238D30;
extern s32 D_80238D34;
extern s32 D_80238D38;
extern s32 D_80238D3C;
extern s32 D_80238D40;
extern s32 D_80238D44;
void func_8013DE3C(void *arg0)
{
  s32 temp_v0;
  s32 temp_v1_2;
  s32 var_a2;
  void *temp_a0;
  void *temp_v1;
  temp_v1 = ((*((u16 *) (((char *) arg0) + 4))) * 0x178) + (&D_800DA260);
  *((u16 *) (((char *) temp_v1) + 0)) = 6U;
  *((s8 *) (((char *) temp_v1) + 0x170)) = 0;
  func_8012AD20(*((&D_8011F304) + ((*((u16 *) (((char *) arg0) + 2))) * 0x64)), arg0 + 0x210, *((u8 *) (((char *) temp_v1) + 1)), *((u8 *) (((char *) (temp_v1 + (*((u16 *) (((char *) temp_v1) + 0))))) + 0x16A)));
  var_a2 = 1;
  __repair_rows:
  {
    temp_v1_2 = var_a2 & 0xFFFF;
    temp_a0 = (((*((u16 *) (((char *) arg0) + 2))) + temp_v1_2) * 0x64) + (&D_8011F2F0);
    ;
    *((s32 *) (((char *) (*((void **) (((char *) temp_a0) + 0x50)))) + 4)) = (s32) (*((&D_80238D24) + (temp_v1_2 * 0x34)));
    *((f32 *) (((char *) temp_a0) + 0x18)) = (f32) (*((&D_80238D30) + (temp_v1_2 * 0x34)));
    *((f32 *) (((char *) temp_a0) + 0x1C)) = (f32) (*((&D_80238D34) + (temp_v1_2 * 0x34)));
    *((f32 *) (((char *) temp_a0) + 0x20)) = (f32) (*((&D_80238D38) + (temp_v1_2 * 0x34)));
    *((f32 *) (((char *) temp_a0) + 0x24)) = (f32) (*((&D_80238D3C) + (temp_v1_2 * 0x34)));
    *((f32 *) (((char *) temp_a0) + 0x28)) = (f32) (*((&D_80238D40) + (temp_v1_2 * 0x34)));
    var_a2 += 1;
    *((f32 *) (((char *) temp_a0) + 0x2C)) = (f32) (*((&D_80238D44) + (temp_v1_2 * 0x34)));
  }

  if (((u32) (var_a2 & 0xFFFF)) < 8U)
  {
    goto __repair_rows;
  }
}

