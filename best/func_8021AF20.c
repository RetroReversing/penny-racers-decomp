extern u8 D_8011F2FD;
extern u8 D_8011F300;
extern u16 D_8018BC3C;
extern u16 func_800E1850;
void func_8021AF20(s32 arg0)
{
  u16 idx;
  s32 off;
  idx = func_800E1850;
  if (idx != 0xFFFF)
  {
    do
    {
      off = ((((idx * 2) + idx) * 8) + idx) * 4;
      *((&D_8011F2FD) + off) = 4;
      idx = *((u16 *) ((&D_8011F300) + off));
    }
    while (idx != 0xFFFF);
  }
  off = D_8018BC3C * 0x64;
  *((&D_8011F2FD) + off) = 0;
  off = (arg0 & 0xFFFF) * 0x64;
  *((&D_8011F2FD) + ((arg0 & 0xFFFF) * 0x64)) = 0;
}

