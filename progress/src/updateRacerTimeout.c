extern u8 D_8011F2F0[];
extern u8 racerTimerFlags[];
extern u8 D_8011F2FD[];
typedef struct { f32 f0; u8 pad[96]; } Slot_8011F334;
extern Slot_8011F334 racerTimers[];
extern u8 D_8022AFE9[];

/* Ticks a racer's timeout counter each frame, up to a limit that depends on the racer's kind.
 * A finished car (state 5) or an expired timer sets the racer's status to 2. */
void updateRacerTimeout(u16 racerIndex) {
    if (D_8022AFE9[D_8011F2F0[racerIndex * 0x64] * 0x8F0] == 5) {
        D_8011F2FD[racerIndex * 0x64] = 2;
        return;
    }
    if (racerTimerFlags[racerIndex * 0x64] == 3) {
        if ((u16)(u32)racerTimers[racerIndex].f0 < 0x9E) {
            racerTimers[racerIndex].f0 = (f32)(u16)((u32)racerTimers[racerIndex].f0 + 1);
        } else {
            D_8011F2FD[racerIndex * 0x64] = 2;
        }
    } else {
        if ((u16)(u32)racerTimers[racerIndex].f0 < 0x166) {
            racerTimers[racerIndex].f0 = (f32)(u16)((u32)racerTimers[racerIndex].f0 + 1);
        } else {
            D_8011F2FD[racerIndex * 0x64] = 2;
        }
    }
}
