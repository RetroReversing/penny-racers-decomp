void func_8010BDF4(void **arg0)
{
  void *temp_v1;
  if (arg0)
  {
    temp_v1 = *arg0;
    *arg0 = temp_v1 + 8;
    *((s32 *) (((char *) temp_v1) + 0)) = 0xFA000000;
    *((s32 *) (((char *) temp_v1) + 4)) = 0x14141496;
  }
  else
  {
    temp_v1 = *arg0;
    *arg0 = temp_v1 + 8;
    *((s32 *) (((char *) temp_v1) + 0)) = 0xFA000000;
    *((s32 *) (((char *) temp_v1) + 4)) = 0x14141496;
  }
}

