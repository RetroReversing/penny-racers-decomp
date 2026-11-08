u8 func_80038D64(s32 arg0, s32 arg1)
{
  s32 temp_a1;
  unsigned short temp_v1_2;
  u8 *temp_v0;
  u8 *temp_v0_2;
  u8 var_a0;
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
    var_a0 = *temp_v0;
    *((u8 **) (((char *) temp_v1) + 0x58)) = (u8 *) (temp_v0 + 1);
    goto block_5;
  }
  temp_a3 = (arg1 * 4) + arg0;
  temp_a2 = *((void **) (((char *) temp_a3) + 0x18));
  var_a0 = *((u8 *) (((char *) temp_a2) + 0));
  *((void **) (((char *) temp_a3) + 0x18)) = (void *) (temp_a2 + 1);
  temp_a1 = var_a0 & 0xFF;
  if (temp_a1 == 0xFE)
  {
    temp_v1_2 = (*((u8 *) (((char *) temp_a2) + 1))) & 0xFF;
    *((void **) (((char *) temp_a3) + 0x18)) = (void *) (temp_a2 + 2);
    if (temp_v1_2 != temp_a1)
    {
      *((void **) (((char *) temp_a3) + 0x18)) = (void *) (temp_a2 + 3);
      temp_v1_3 = temp_a2 + 4;
      *((void **) (((char *) temp_a3) + 0x18)) = temp_v1_3;
      *((u8 **) (((char *) temp_a3) + 0x58)) = (u8 *) (temp_v1_3 - (((*((u8 *) (((char *) temp_a2) + 2))) | (temp_v1_2 << 8)) + 4));
      *((u8 *) (((char *) temp_t0) + 0x98)) = (u8) (*((u8 *) (((char *) temp_a2) + 3)));
      temp_v0_2 = *((u8 **) (((char *) temp_a3) + 0x58));
      var_a0 = *temp_v0_2;
      *((u8 **) (((char *) temp_a3) + 0x58)) = (u8 *) (temp_v0_2 + 1);
      block_5:
      *((u8 *) (((char *) temp_t0) + 0x98)) = (u8) ((*((u8 *) (((char *) temp_t0) + 0x98))) - 1);

    }
  }
  return var_a0;
}

