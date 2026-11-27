extern u8 racerTimerFlags[];
extern u8 D_8011F2FD[];
void func_8015C838(s32 arg0)
{
  s32 off;
  s32 t;
  off = (arg0 & 0xFFFF) * 0x64;
 t = racerTimerFlags[off]; t -= 2; if (t <= 0) { D_8011F2FD[off] = 2; } else { racerTimerFlags[((u16) arg0) * 0x64] = t; }
}
