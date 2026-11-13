s32 func_8013AE60();
extern char D_8011F32E[];
void func_8015426C(s32 arg0)
{
  char *__repair_addr;
  s32 temp_s0;
  s32 temp_v1;
  temp_s0 = arg0 & 0xFFFF;
  do
  {
    func_8013AE60(arg0 & 0xFFFF);
  }
  while (0);
  temp_v1 = (arg0 & 0xFFFF) * 0x64;
  *((u16 *) (D_8011F32E + ((arg0 & 0xFFFF) * 0x64))) = (*((u16 *) (D_8011F32E + temp_v1))) + 1;
  __repair_addr = (char *) (D_8011F32E - (-temp_v1));
  if (((u16) (*((u16 *) __repair_addr))) >= 0x80U)
  {
    *((u16 *) (D_8011F32E + temp_v1)) = (*((u16 *) (D_8011F32E + temp_v1))) - 0x7F;
  }
}

