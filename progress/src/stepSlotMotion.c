extern char racerTimerFlags[];
extern char D_8011F2FD[];
extern char D_8011F308[];
extern char sPrimColorG[];
extern char sPathOffsetZ[];
extern char D_8011F320[];
extern char D_8011F324[];
extern char D_8011F328[];
extern char racerTimers[];
extern char racerAnimFrames[];
extern char D_8011F33C[];
#define F(s, i) (*(f32 *)((s) + (i)))

/* Advances a slot's position by its velocity with damping and growth while its timer flag is high; once the flag drops below 0x33 the slot is marked done (state 2). */
void stepSlotMotion(s32 arg0)
{
  s32 recOff = (arg0 & 0xFFFF) * 0x64;
  if (*(u8 *)(racerTimerFlags + recOff) >= 0x33U)
  {
    F(D_8011F320, recOff) = F(D_8011F320, recOff) + 0.01f;
    F(D_8011F324, recOff) = F(D_8011F324, recOff) + 0.01f;
    F(D_8011F328, recOff) = F(D_8011F328, recOff) + 0.01f;
    *(u8 *)(racerTimerFlags + recOff) = *(u8 *)(racerTimerFlags + recOff) - 8;
    F(D_8011F308, recOff) = F(D_8011F308, recOff) + F(racerTimers, recOff);
    F(sPrimColorG, recOff) = F(sPrimColorG, recOff) + F(racerAnimFrames, recOff);
    F(sPathOffsetZ, recOff) = F(sPathOffsetZ, recOff) + F(D_8011F33C, recOff);
    F(racerTimers, recOff) = F(racerTimers, recOff) * 0.95f;
    F(racerAnimFrames, recOff) = F(racerAnimFrames, recOff) * 0.6f;
    F(D_8011F33C, recOff) = F(D_8011F33C, recOff) * 0.95f;
    return;
  }
  *(D_8011F2FD + ((arg0 & 0xFFFF) * 0x64)) = 2;
}
