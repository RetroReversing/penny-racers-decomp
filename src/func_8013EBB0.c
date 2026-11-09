extern unsigned char D_8011F2F0;
void func_8013EBB0(s32 arg0, f32 arg1, f32 arg2, f32 arg3)
{
  void *temp_v0;
  temp_v0 = ((arg0 & 0xFFFF) * 0x64) + (&D_8011F2F0);
  *((f32 *) (((char *) temp_v0) + 0x18)) = (f32) ((*((f32 *) (((char *) temp_v0) + 0x18))) - arg1);
  *((f32 *) (((char *) temp_v0) + 0x1C)) = (f32) ((*((f32 *) (((char *) temp_v0) + 0x1C))) - arg2);
  *((f32 *) (((char *) temp_v0) + 0x20)) = (f32) ((*((f32 *) (((char *) temp_v0) + 0x20))) - arg3);
}

