extern u8 racerTimerFlags[];
extern volatile unsigned char lastMaterial;
void func_801435A8(void **arg0, s32 arg1)
{
  void *temp_a2;
  temp_a2 = *arg0;
  *arg0 = temp_a2 + 8;
  *((s32 *) (((char *) temp_a2) + 0)) = 0xFA000000;
  *((s32 *) (((char *) temp_a2) + 4)) = (s32) ((*(racerTimerFlags + ((arg1 & 0xFFFF) * 0x64))) | 0xC8C8E600);
  lastMaterial = 0xFF;
}

