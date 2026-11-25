s32 func_80129C1C(u8 *, f32, f32, f32, s32, f32, s32);
extern u8 D_8011F2F0[];
void func_80140A38(s32 arg0)
{
  union 
  {
    unsigned char bytes[72];
    struct 
    {
      u8 value;
    } view_sp20;
    struct 
    {
      unsigned char pad[1];
      u8 value;
    } view_sp21;
    struct 
    {
      unsigned char pad[4];
      u16 value;
    } view_sp24;
    struct 
    {
      unsigned char pad[12];
      f32 value;
    } view_sp2C;
  } m2c_initial_frame;
  f32 temp_fv0;
  f32 temp_fv1;
  s32 var_v1;
  void *temp_s0;
  void *temp_s1;
  do
  {
    temp_s1 = ((arg0 & 0xFFFF) * 0x64) + D_8011F2F0; temp_fv1 = *((f32 *) (((char *) temp_s1) + 0x44)); var_v1 = ((u32) temp_fv1) & 0xFFFF; temp_s0 = (var_v1 * 0x64) + D_8011F2F0; m2c_initial_frame.view_sp24.value = *((u16 *) (((char *) (*((void **) (((char *) temp_s0) + 0x60)))) + 0x20));
    do
    {
      func_80129C1C(&m2c_initial_frame.view_sp20.value, *((f32 *) (((char *) temp_s0) + 0x18)), *((f32 *) (((char *) temp_s0) + 0x1C)), *((f32 *) (((char *) temp_s0) + 0x20)), 0, -240.0f, 0);
    }
    while (0);
    *((f32 *) (((char *) temp_s1) + 0x18)) = (f32) ((*((f32 *) (((char *) temp_s0) + 0x18))) + 0.5f);
  }
  while (0);
  *((f32 *) (((char *) temp_s1) + 0x20)) = (f32) ((*((f32 *) (((char *) temp_s0) + 0x20))) - 0.5f);
  if (m2c_initial_frame.view_sp21.value != 0)
  {
    *((f32 *) (((char *) temp_s1) + 0x1C)) = m2c_initial_frame.view_sp2C.value;
    temp_fv0 = ((240.0f - ((*((f32 *) (((char *) temp_s0) + 0x1C))) - m2c_initial_frame.view_sp2C.value)) / 240.0f) * 0.5f;
    *((f32 *) (((char *) temp_s1) + 0x38)) = temp_fv0;
    *((f32 *) (((char *) temp_s1) + 0x30)) = temp_fv0;
    if (m2c_initial_frame.view_sp20.value == 0x13)
    {
      f32 __repair_fzero = 0.0f;
      *((f32 *) (((char *) temp_s1) + 0x2C)) = __repair_fzero;
      *((f32 *) (((char *) temp_s1) + 0x24)) = __repair_fzero;
      return;
    }
    *((f32 *) (((char *) temp_s1) + 0x24)) = -12.0f;
    do
    {
      *((f32 *) (((char *) temp_s1) + 0x2C)) = 12.0f;
    }
    while (0);
    return;
  }
  *((f32 *) (((char *) temp_s1) + 0x1C)) = (f32) (*((f32 *) (((char *) temp_s0) + 0x1C)));
  do
  {
    *((f32 *) (((char *) temp_s1) + 0x38)) = 0.2f;
    *((f32 *) (((char *) temp_s1) + 0x30)) = 0.2f;
  }
  while (0);
}

