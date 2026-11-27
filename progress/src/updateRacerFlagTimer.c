extern u8 D_8011F2F0[];
extern u8 racerTimerFlags[];
extern u8 racerTimers[];
extern u8 carStateTable[];

inline static int racerByteOffset(s32 racerIndex, int mask)
{
  return (racerIndex & mask) * 100;
}

/* Counts a racer's timer while its car-state bit 2 is set, toggling racerTimerFlags
   at 16 and 33 ticks; clears the flag and timer when that bit is off. */
void updateRacerFlagTimer(s32 racerIndex)
{
  if ((*((u16 *) (carStateTable + (D_8011F2F0[racerByteOffset(racerIndex, 0xFFFF)] * 0x8F0)))) & 2)
  {
    *((f32 *) (racerTimers + racerByteOffset(racerIndex, 0xFFFF))) = (f32) ((u16) (((u32) (*((f32 *) (racerTimers + racerByteOffset(racerIndex, 0xFFFF))))) + 1));
    if (((u16) ((u32) (*((f32 *) (racerTimers + ((racerIndex & 0xFFFF) * 100)))))) < 0x10)
    {
      racerTimerFlags[(racerIndex & 0xFFFF) * 100] = 0;
      return;
    }
    if (((u16) ((u32) (*((f32 *) (racerTimers + ((racerIndex & 0xFFFF) * 100)))))) >= 0x21)
    {
      *((s32 *) (racerTimers + racerByteOffset(racerIndex, 0xFFFF))) = 0;
    }
    racerTimerFlags[(racerIndex & 0xFFFF) * 100] = 1;
    return;
  }
  racerTimerFlags[racerByteOffset(racerIndex, 0xFFFF)] = 0;
  *((s32 *) (racerTimers + ((racerIndex & 0xFFFF) * 100))) = 0;
}
