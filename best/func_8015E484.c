extern s32 D_8011F2FC;
extern s32 D_8011F350;
void func_8015E484(void **arg0, s32 arg1)
{
  s32 temp_a3;
  void *temp_a0;
  void *temp_a1;
  void *temp_v1;
  temp_a3 = (arg1 & 0xFFFF) * 0x64;
  temp_a1 = *((&D_8011F350) + temp_a3);
  if ((*((&D_8011F2FC) + temp_a3)) != 0xFF)
  {
    temp_v1 = *arg0;
    *arg0 = temp_v1 + 8;
 do { *((s32 *) (((char *) temp_v1) + 0)) = 0xB6000000; *((s32 *) (((char *) temp_v1) + 4)) = 0x3000; temp_a0 = *arg0; *arg0 = temp_a0 + 8; *((s32 *) (((char *) temp_a0) + 0)) = 0xFA000000; } while (0);
    *((s32 *) (((char *) temp_a0) + 4)) = (s32) (((((*((u8 *) (((char *) temp_a1) + 0x17))) << 0x18) | ((*((u8 *) (((char *) temp_a1) + 0x18))) << 0x10)) | ((*((u8 *) (((char *) temp_a1) + 0x19))) << 8)) | (*((&D_8011F2FC) + temp_a3)));
  }
}
