s32 freeObject();
extern u8 racerTimerFlags[];

void func_801FCCC4(void **arg0, s32 arg1)
{
  s32 temp_v1;
  void *temp_a0;

  temp_v1 = (arg1 & 0xFFFF) * 0x64;
  if (((u8)(*(racerTimerFlags + temp_v1))) >= 3U)
  {
    *(racerTimerFlags + temp_v1) = (*(racerTimerFlags + temp_v1)) - 2;
    temp_a0 = *arg0;
    *arg0 = temp_a0 + 8;
    *((s32 *)(((char *)temp_a0) + 0)) = 0xFA000000;
    *((s32 *)(((char *)temp_a0) + 4)) = (s32)((*(racerTimerFlags + temp_v1)) | 0xC8C8C800);
    return;
  }
  freeObject(arg1 & 0xFFFF);
}
