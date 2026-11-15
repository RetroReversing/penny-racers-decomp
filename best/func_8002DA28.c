s32 func_8002DA28(s32 arg0, s32 arg1)
{
  unsigned char temp_v1_2;
  u8 *temp_v0;
  u8 *temp_v0_2;
  void *temp_a2;
  void *temp_a3;
  void *temp_t0;
  void *temp_v1;
  void *temp_v1_3;
  temp_t0 = arg0 + arg1;
  if ((*((u8 *) (((char *) temp_t0) + 0x98))) != 0)
  {
    temp_v1 = (arg1 * 4) + arg0;
    temp_v0 = *((u8 **) (((char *) temp_v1) + 0x58));
    arg0 = *temp_v0;
    *((u8 **) (((char *) temp_v1) + 0x58)) = (u8 *) (temp_v0 + 1);
    goto block_5;
  }
  temp_a3 = (arg1 * 4) + arg0;
  temp_a2 = *((void **) (((char *) temp_a3) + 0x18));
  arg0 = *((u8 *) (((char *) temp_a2) + 0));
  *((void **) (((char *) temp_a3) + 0x18)) = (void *) (temp_a2 + 1);
  arg1 = arg0 & 0xFF;
  if (arg1 == 0xFE)
  {
    temp_v1_2 = (*((u8 *) (((char *) temp_a2) + 1))) & 0xFF;
    *((void **) (((char *) temp_a3) + 0x18)) = (void *) (temp_a2 + 2);
    if (temp_v1_2 != arg1)
    {
      arg0 = *((u8 *)temp_a2 + 2);
      *((void **) (((char *) temp_a3) + 0x18)) = (void *) (temp_a2 + 3);
      arg1 = *((u8 *)temp_a2 + 3);
      temp_v1_3 = temp_a2 + 4;
      *((void **) (((char *) temp_a3) + 0x18)) = temp_v1_3;
      *((u8 **) (((char *) temp_a3) + 0x58)) = (u8 *) (temp_v1_3 - ((arg0 | (temp_v1_2 << 8)) + 4));
      *((u8 *) (((char *) temp_t0) + 0x98)) = (u8) arg1;
      temp_v0_2 = *((u8 **) (((char *) temp_a3) + 0x58));
      arg0 = *temp_v0_2;
      *((u8 **) (((char *) temp_a3) + 0x58)) = (u8 *) (temp_v0_2 + 1);
      block_5:
      *((u8 *) (((char *) temp_t0) + 0x98)) = (u8) ((*((u8 *) (((char *) temp_t0) + 0x98))) - 1);

    }
  }
  return arg0;
}
