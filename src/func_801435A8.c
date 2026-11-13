extern u8 D_8011F2FC[];
extern volatile unsigned char D_80126FF7;
void func_801435A8(void **arg0, s32 arg1)
{
  void *temp_a2;
  temp_a2 = *arg0;
  *arg0 = temp_a2 + 8;
  *((s32 *) (((char *) temp_a2) + 0)) = 0xFA000000;
  *((s32 *) (((char *) temp_a2) + 4)) = (s32) ((*(D_8011F2FC + ((arg1 & 0xFFFF) * 0x64))) | 0xC8C8E600);
  D_80126FF7 = 0xFF;
}

