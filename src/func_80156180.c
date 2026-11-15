void func_8013AE60(u16);
extern volatile u8 D_8011F32E[];
void func_80156180(s32 arg0)
{
  u16 temp_s0;
  s32 temp_v1;
  u16 temp_a0;
  if (temp_v1)
  {
    temp_s0 = arg0;
    func_8013AE60(temp_s0);
    temp_v1 = temp_s0 * 100;
    temp_a0 = *((volatile u16 *) (D_8011F32E + temp_v1));
    *((volatile u16 *) (D_8011F32E + temp_v1)) = temp_a0 + 2;
  }
  else
  {
    temp_s0 = arg0;
    func_8013AE60(temp_s0);
    temp_v1 = temp_s0 * 100;
    temp_a0 = *((volatile u16 *) (D_8011F32E + temp_v1));
    *((volatile u16 *) (D_8011F32E + temp_v1)) = temp_a0 + 2;
  }
  if ((*((volatile u16 *) (D_8011F32E + temp_v1))) >= 0x80)
  {
    *((volatile u16 *) (D_8011F32E + temp_v1)) = temp_a0 - 0x7D;
  }
}
