extern char D_8011F2FC[];
extern s8 D_80126FF7;
void func_80141BC4(void **arg0, s32 arg1)
{
  u8 temp_a0;
  void *temp_a2;
  temp_a2 = *arg0;
  *arg0 = temp_a2 + 8;
  *((s32 *) (((char *) temp_a2) + 0)) = 0xFA000000;
  temp_a0 = *(D_8011F2FC + (0x64 * (arg1 & 0xFFFF)));
  *((s32 *) (((char *) temp_a2) + 4)) = (s32) ((((~temp_a0) & 0xFF) << 0x10) | (((long long) temp_a0) | 0xFF000000));
  D_80126FF7 = 0xFF;
}

