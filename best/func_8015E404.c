extern unsigned char D_8011F2FC[];
void func_8015E404(s32 **arg0, s32 arg1)
{
  s32 *temp_v1;
  s32 idx;
  idx = (arg1 & 0xFFFF) * 0x64;
  if (D_8011F2FC[idx] != 0xFF) {
    temp_v1 = *arg0;
    *arg0 = temp_v1 + 2;
    temp_v1[0] = 0xB6000000;
    temp_v1[1] = 0x3000;
    temp_v1 = *arg0;
    *arg0 = temp_v1 + 2;
    temp_v1[0] = 0xFA000000;
    temp_v1[1] = D_8011F2FC[idx] | ~0xFF;
  }
}
