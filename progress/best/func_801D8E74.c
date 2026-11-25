extern s32 D_8011F350;
extern u16 D_801E9B32;
void func_801D8E74(s32 arg0, s32 arg1, s32 arg2, s32 arg3, u8 arg4)
{
  register void *temp_v1;
  *((s16 *) (((char *) temp_v1) + 0xA)) = (s16) (arg0 + 1);
  do
  {
    temp_v1 = *((&D_8011F350) + (D_801E9B32 * 0x19));
    *((s16 *) (((char *) temp_v1) + 0xE)) = (s16) ((((arg2 & 0xFFFF) + 2) * 0x18) - 2);
 do { *((s16 *) (((char *) temp_v1) + 0x10)) = (s16) ((((((u32) arg3) & 0xFFFF) + 2) * 0x18) - 2); } while (0);
    *((s16 *) (((char *) temp_v1) + 0xC)) = (s16) (arg1 + 1);
    *((u8 *) (((char *) temp_v1) + 9)) = arg4;
  }
  while (0);
}
