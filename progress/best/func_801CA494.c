void func_801CA494(void **arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4_in)
{
  s32 arg4;
  void *temp_v1;
  arg4 &= 0xFF;
  arg4 = arg4_in;
  temp_v1 = *arg0;
  *((s32 *) (((char *) temp_v1) + 0)) = 0xFA000000;
 do { *((s32 *) (((char *) temp_v1) + 4)) = (s32) ((((arg1 << 0x18) | ((arg2 & 0xFF) << 0x10)) | ((arg3 & 0xFF) << 8)) | arg4); } while (0);
  *arg0 = temp_v1 + 8;
}
