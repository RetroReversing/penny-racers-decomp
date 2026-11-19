extern u8 D_8011F33C;
extern u8 D_8021CA6C[];
void func_8021A050(u32 **arg0, s32 arg1)
{
  u32 *p = *arg0;
  u32 *q;
  *arg0 = p + 2;
  q = p;
  q[0] = 0xFA000000;
  q[1] = (D_8021CA6C[(u8)(u32) *(f32 *)(&D_8011F33C + (arg1 & 0xFFFF) * 0x64) * 3] << 24)
       | (D_8021CA6C[(u8)(u32) *(f32 *)(&D_8011F33C + (arg1 & 0xFFFF) * 0x64) * 3 + 1] << 16)
       | (D_8021CA6C[(u8)(u32) *(f32 *)(&D_8011F33C + (arg1 & 0xFFFF) * 0x64) * 3 + 2] << 8) | 0xFF;
}
