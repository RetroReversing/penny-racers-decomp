extern char racerTimerFlags[];
extern char D_8011F2FD[];
extern char D_8011F308[];
extern char sPrimColorG[];
extern char sPrimColorB[];
extern char D_8011F320[];
extern char D_8011F324[];
extern char D_8011F328[];
extern char racerTimers[];
extern char racerAnimFrames[];
extern char D_8011F33C[];
#define F(s, i) (*(f32 *)((s) + (i)))
void func_8013AF08(s32 arg0)
{
  s32 i = (arg0 & 0xFFFF) * 0x64;
  if (*(u8 *)(racerTimerFlags + i) >= 0x33U)
  {
    F(D_8011F320, i) = F(D_8011F320, i) + 0.01f;
    F(D_8011F324, i) = F(D_8011F324, i) + 0.01f;
    F(D_8011F328, i) = F(D_8011F328, i) + 0.01f;
    *(u8 *)(racerTimerFlags + i) = *(u8 *)(racerTimerFlags + i) - 8;
    F(D_8011F308, i) = F(D_8011F308, i) + F(racerTimers, i);
    F(sPrimColorG, i) = F(sPrimColorG, i) + F(racerAnimFrames, i);
    F(sPrimColorB, i) = F(sPrimColorB, i) + F(D_8011F33C, i);
    F(racerTimers, i) = F(racerTimers, i) * 0.95f;
    F(racerAnimFrames, i) = F(racerAnimFrames, i) * 0.6f;
    F(D_8011F33C, i) = F(D_8011F33C, i) * 0.95f;
    return;
  }
  *(D_8011F2FD + ((arg0 & 0xFFFF) * 0x64)) = 2;
}
