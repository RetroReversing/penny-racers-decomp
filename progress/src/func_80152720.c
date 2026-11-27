typedef struct {
    u8 alpha;
    u8 pad1[0x31];
    u16 timer;
    u16 rising;
    u8 pad2[0x64 - 0x36];
} BlinkRec;
extern BlinkRec racerTimerFlags[];
extern s16 D_802B22D4;
void func_80152720(u16 arg0) {
    racerTimerFlags[arg0].timer++;
    if (racerTimerFlags[arg0].timer >= 0x15) {
        racerTimerFlags[arg0].timer = 0;
    }
    if (racerTimerFlags[arg0].rising == 0) {
        if (racerTimerFlags[arg0].alpha >= 0x33) {
            racerTimerFlags[arg0].alpha -= 0xA;
        } else {
            racerTimerFlags[arg0].rising = 1;
        }
    } else {
        if (racerTimerFlags[arg0].alpha < 0xFF) {
            racerTimerFlags[arg0].alpha += 0xA;
        } else {
            racerTimerFlags[arg0].rising = 0;
        }
    }
    D_802B22D4 = ((racerTimerFlags[arg0].alpha << 8) & 0xF800) | 1;
}
