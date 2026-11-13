s32 func_8013AE60(s32);
extern volatile unsigned short D_8011F32E;
void func_80150E48(s32 arg0)
{
  s32 temp_s0;
  s32 temp_v1;
  do
  {
    func_8013AE60(temp_s0 = arg0 & 0xFFFF);
  }
  while (0);
  temp_v1 = temp_s0 * 0x64;
  *((&D_8011F32E) + temp_v1) = (*((&D_8011F32E) + temp_v1)) + 1;
  if (((u16) (*((&D_8011F32E) + temp_v1))) >= 0x80U)
  {
    *((&D_8011F32E) + temp_v1) = (*((&D_8011F32E) + temp_v1)) - 0x7F;
  }
}

