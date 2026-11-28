typedef struct {
    u8 alpha;
    u8 pad1[0x31];
    u16 timer;
    u16 rising;
    u8 pad2[0x64 - 0x36];
} BlinkRec;
extern BlinkRec racerTimerFlags[];
extern s16 racerTimerColor;
/* Advances one racer's timer flag blink: counts a 21-step cycle, ramps alpha up and down, and writes the colour word. */ void pulseRacerTimerFlag(u16 racerIndex) {
    racerTimerFlags[racerIndex].timer++;
    if (racerTimerFlags[racerIndex].timer >= 0x15) {
        racerTimerFlags[racerIndex].timer = 0;
    }
    if (racerTimerFlags[racerIndex].rising == 0) {
        if (racerTimerFlags[racerIndex].alpha >= 0x33) {
            racerTimerFlags[racerIndex].alpha -= 0xA;
        } else {
            racerTimerFlags[racerIndex].rising = 1;
        }
    } else {
        if (racerTimerFlags[racerIndex].alpha < 0xFF) {
            racerTimerFlags[racerIndex].alpha += 0xA;
        } else {
            racerTimerFlags[racerIndex].rising = 0;
        }
    }
    racerTimerColor = ((racerTimerFlags[racerIndex].alpha << 8) & 0xF800) | 1;
}
