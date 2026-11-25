extern char D_8011F2F0[];
extern u8 D_8011F2FC[];
extern u8 D_80126FF6;
extern char D_8018A264[];
void func_8015FD64(void **arg0, unsigned short arg1)
{
  s32 temp_v1;
  u8 temp_a0;
  u8 temp_v1_2;
  void *temp_a0_2;
  void *temp_v1_3;
  void *temp_v1_4;
  void *temp_v1_5;
  arg1 &= 0xFFFF;
  temp_v1 = arg1 * 0x64;
  if ((*(D_8011F2FC + temp_v1)) != 0)
  {
 do { temp_v1_2 = *(D_8011F2F0 + temp_v1); if (temp_v1_2 == D_80126FF6) { temp_a0 = *(D_8018A264 + temp_v1_2); if (temp_a0 == 1) { temp_v1_3 = *arg0; *arg0 = temp_v1_3 + 8; *((s32 *) (((char *) temp_v1_3) + 0)) = 0xE7000000; *((s32 *) (((char *) temp_v1_3) + 4)) = 0; do { temp_v1_4 = *arg0; *arg0 = temp_v1_4 + 8; *((s32 *) (((char *) temp_v1_4) + 0)) = 0xB6000000; *((s32 *) (((char *) temp_v1_4) + 4)) = (s32) temp_a0; temp_v1_5 = *arg0; *arg0 = temp_v1_5 + 8; *((s32 *) (((char *) temp_v1_5) + 0)) = (short) 0xB900031D; } while (0); *((s32 *) (((char *) temp_v1_5) + 4)) = 0x504340; } } temp_a0_2 = *arg0; *arg0 = temp_a0_2 + 8; *((s32 *) (((char *) temp_a0_2) + 0)) = 0xFA000000; } while (0);
    *((s32 *) (((char *) temp_a0_2) + 4)) = (s32) ((*(D_8011F2FC + (arg1 * 0x64))) | 0xFF000000);
  }
}
