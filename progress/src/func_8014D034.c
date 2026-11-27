extern u8 D_8011F2FC[];
extern unsigned char lastMaterial;
void func_8014D034(void **arg0, s32 arg1)
{
  void *temp_a2;
  void *temp_v1;
  temp_v1 = *arg0;
  *arg0 = temp_v1 + 8;
  *((s32 *) (((char *) temp_v1) + 0)) = 0xB6000000;
  *((s32 *) (((char *) temp_v1) + 4)) = 0x2000;
  temp_a2 = *arg0;
  *arg0 = temp_a2 + 8;
  *((s32 *) (((char *) temp_a2) + 0)) = 0xFA000000;
  *((s32 *) (((char *) temp_a2) + 4)) = (s32) ((*(D_8011F2FC + ((arg1 & 0xFFFF) * 0x64))) | 0xB4FA00);
  lastMaterial = 0xFF;
}

