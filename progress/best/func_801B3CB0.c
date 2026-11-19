extern char D_8011F2FC[];
extern char D_803147E8[];
void func_801B3CB0(void **arg0, s32 arg1)
{
  void *temp_a2;
  void *temp_v0;
  void *temp_v0_2;
  void *temp_v1;
  void *temp_v1_2;
  void *temp_v1_3;
  void *temp_v1_4;
  void *temp_v1_5;
  void *temp_v1_6;
  void *temp_v1_7;
  void *temp_v1_8;
  temp_v1 = *arg0;
 do { *arg0 = temp_v1 + 8; do { *((s32 *) (((char *) temp_v1) + 0)) = 0xE7000000; *((s32 *) (((char *) temp_v1) + 4)) = 0; temp_v1_2 = *arg0; *arg0 = temp_v1_2 + 8; *((s32 *) (((char *) temp_v1_2) + 0)) = 0xBA001402; *((s32 *) (((char *) temp_v1_2) + 4)) = 0; temp_v1_3 = *arg0; *arg0 = temp_v1_3 + 8; *((s32 *) (((char *) temp_v1_3) + 0)) = 0xB6000000; *((s32 *) (((char *) temp_v1_3) + 4)) = 0x2001; temp_v1_4 = *arg0; *arg0 = temp_v1_4 + 8; *((s32 *) (((char *) temp_v1_4) + 0)) = 0xB900031D; *((s32 *) (((char *) temp_v1_4) + 4)) = 0x5049C8; temp_v1_5 = *arg0; *arg0 = temp_v1_5 + 8; *((s32 *) (((char *) temp_v1_5) + 0)) = 0xFCFFFFFF; *((s32 *) (((char *) temp_v1_5) + 4)) = 0xFFFDF6FB; temp_v0 = *arg0; *arg0 = temp_v0 + 8; *((s32 *) (((char *) temp_v0) + 0)) = 0xE7000000; *((s32 *) (((char *) temp_v0) + 4)) = 0; temp_a2 = *arg0; *arg0 = temp_a2 + 8; *((s32 *) (((char *) temp_a2) + 0)) = 0xFA000000; *((s32 *) (((char *) temp_a2) + 4)) = (s32) ((*(D_8011F2FC + ((arg1 & 0xFFFF) * 0x64))) | 0xFF000000); temp_v1_6 = *arg0; *arg0 = temp_v1_6 + 8; *((s32 *) (((char *) temp_v1_6) + 0)) = 0xF9000000; *((s32 *) (((char *) temp_v1_6) + 4)) = 1; temp_v1_7 = *arg0; *arg0 = temp_v1_7 + 8; *((s32 *) (((char *) temp_v1_7) + 0)) = 0x0400103F; *((s32 *) (((char *) temp_v1_7) + 4)) = (s32) (&D_803147E8); temp_v1_8 = *arg0; *arg0 = temp_v1_8 + 8; } while (0); } while (0);
  *((s32 *) (((char *) temp_v1_8) + 0)) = 0xB1000204;
  *((s32 *) (((char *) temp_v1_8) + 4)) = 0x406;
  temp_v0_2 = *arg0;
  *arg0 = temp_v0_2 + 8;
  *((s32 *) (((char *) temp_v0_2) + 0)) = 0xE7000000;
  *((s32 *) (((char *) temp_v0_2) + 4)) = 0;
}
