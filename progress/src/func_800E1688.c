extern volatile char func_801153C8;
void func_800E1688(u16 arg0)
{
  s32 temp_a0;
  u16 temp_v1;
  void *temp_s0;
  void *temp_s1;
  temp_a0 = arg0 & 0xFFFF;
  temp_s0 = (20 * (5 * temp_a0)) + ((&func_801153C8) + 0x9F28);
  temp_s1 = *((void **) (((char *) temp_s0) + 0x50));
  temp_v1 = *((u16 *) (((char *) temp_s0) + 2));
  if (!(temp_v1 & 0x10))
  {
    if (!(temp_v1 & 2))
    {
      (*((s32 (**)(s32)) (((char *) temp_s0) + 0x54)))(temp_a0);
    }
    if ((*((u16 *) (((char *) temp_s1) + 0xC))) != 0xFFFF)
    {
      func_800E1688(*((u16 *) (((char *) temp_s0) + 0x14)));
    }
    if ((*((u16 *) (((char *) temp_s1) + 0xA))) != 0xFFFF)
    {
      func_800E1688(*((u16 *) (((char *) temp_s0) + 0x14)));
    }
  }
}

