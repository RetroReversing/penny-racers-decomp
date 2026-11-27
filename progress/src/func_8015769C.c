/* identical to func_8014F3B0 (matched), with its names changed by decompdecomp */
void liftCopyFlags(u16);
extern u8 playerSlots[];
void func_8015769C(s32 arg0)
{
  u16 temp_s0;
  s32 temp_v1;
 do { temp_s0 = arg0; liftCopyFlags(temp_s0); temp_v1 = temp_s0 * 100; } while (0);
  *((volatile u16 *) (playerSlots + temp_v1)) += 1;
  if ((*((volatile u16 *) (playerSlots + temp_v1))) >= 0x80)
  {
    *((volatile u16 *) (playerSlots + temp_v1)) -= 0x7F;
  }
}
