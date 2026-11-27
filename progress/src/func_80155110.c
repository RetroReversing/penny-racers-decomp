void liftCopyFlags(u16);
extern volatile u8 playerSlots[];
void func_80155110(s32 arg0)
{
  u16 temp_s0;
  s32 temp_v1;
  u16 temp_a0;
  if (temp_v1)
  {
    temp_s0 = arg0;
    liftCopyFlags(temp_s0);
    temp_v1 = temp_s0 * 100;
    temp_a0 = *((volatile u16 *) (playerSlots + temp_v1));
    *((volatile u16 *) (playerSlots + temp_v1)) = temp_a0 + 4;
  }
  else
  {
    temp_s0 = arg0;
    liftCopyFlags(temp_s0);
    temp_v1 = temp_s0 * 100;
    temp_a0 = *((volatile u16 *) (playerSlots + temp_v1));
    *((volatile u16 *) (playerSlots + temp_v1)) = temp_a0 + 4;
  }
  if ((*((volatile u16 *) (playerSlots + temp_v1))) >= 0x80)
  {
    *((volatile u16 *) (playerSlots + temp_v1)) = temp_a0 - 0x7B;
  }
}
