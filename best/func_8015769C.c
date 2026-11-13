s32 func_8013AE60();
extern char D_8011F32E[];
void func_8015769C(s32 arg0)
{
  s32 temp_s0;
  s32 temp_v1;
  temp_s0 = arg0 & 0xFFFF;
  func_8013AE60(temp_s0);
  temp_v1 = temp_s0 * 0x64;
  *(D_8011F32E + (temp_s0 * 0x64)) = (*(D_8011F32E + temp_v1)) + 1;
  if (((u16) (*(D_8011F32E + temp_v1))) >= 0x80U)
  {
    *(D_8011F32E + temp_v1) = (*(D_8011F32E + temp_v1)) - 0x7F;
  }
}

