extern void *D_80046DF4;
s32 n_alSndpAllocate(void *arg0)
{
  s16 temp_v0;
  int var_a3;
  s32 temp_a2;
  s32 var_v0;
  void *temp_a1;
  void *temp_t0;
  temp_t0 = *((void **) (((char *) D_80046DF4) + 0xC));
  var_a3 = 0;
  if ((*((s32 *) (((char *) temp_t0) + 0x44))) > 0)
  {
    var_v0 = 0 << 0x10;
    loop_2:
    temp_a2 = var_v0 >> 0x10;

    temp_a1 = (temp_a2 * 0x30) + (*((s32 *) (((char *) temp_t0) + 0x40)));
    temp_v0 = var_a3 + 1;
    if ((*((void **) (((char *) temp_a1) + 0x1C))) == NULL)
    {
 do { *((void **) (((char *) temp_a1) + 0x1C)) = arg0; *((s16 *) (((char *) temp_a1) + 0x20)) = 5; *((s32 *) (((char *) temp_a1) + 0x28)) = 0; } while (0);
      *((f32 *) (((char *) temp_a1) + 0x24)) = 1.0f;
      *((s8 *) (((char *) temp_a1) + 0x2E)) = 0x40;
      *((s8 *) (((char *) temp_a1) + 0x2F)) = 0;
      *((s16 *) (((char *) temp_a1) + 0x2C)) = (s16) (((*((u8 *) (((char *) arg0) + 0xD))) * 0x7FFF) / 127);
      return temp_a2;
    }
    var_a3 = temp_v0;
    var_v0 = var_a3 << 0x10;
    if (temp_v0 >= (*((s32 *) (((char *) temp_t0) + 0x44))))
    {
      goto block_5;
    }
    goto loop_2;
  }
  block_5:
  return -1;

}
