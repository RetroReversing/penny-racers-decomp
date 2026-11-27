extern void ballMoveCollide(void *, s32, s32, s32, f32, f32, f32);
s32 func_8013E49C(u16);
extern s32 ballCheckZoneHit(s32, void *);
extern void spawnCrashEffect(s32);
extern void queueObjEvent(s32, s32);
extern u8 D_8006FAF0[];
extern u8 D_8011F2F0[];
extern u8 D_8011F2FD[];
extern f32 D_80168574[];

/* Per-frame update for one ball: counts down its timers, decays its speed, runs collision, and handles crash and event triggers. */ void updateBallState(s32 recIndex) {
    u8 *rec;
    u8 *ball;
    u8 *ctrl;
    u8 *p;
    u16 ctrlWord;
    u16 lowBits;
    s32 i;
    f32 speed;

    rec = D_8011F2F0 + (recIndex & 0xFFFF) * 100;
    ball = *(u8 **)(rec + 0x60);
    if (*(s16 *)(ball + 0x14) > 0) {
        *(s16 *)(ball + 0x14) -= 1;
        if ((*(s16 *)(ball + 0x14) << 16) <= 0) {
            i = 0;
            do {
                p = ball + i;
                p[0x67] = 0;
                i++;
            } while (i < 7);
        }
    }
    speed = *(f32 *)(ball + 0xC);
    if (speed != 0.0f) {
        *(f32 *)(ball + 0xC) = speed - 0.1f;
        ballMoveCollide(ball + 0x1C, *(s32 *)(rec + 0x18), *(s32 *)(rec + 0x1C), *(s32 *)(rec + 0x20),
                      *(f32 *)(ball + 0x8), *(f32 *)(ball + 0xC), *(f32 *)(ball + 0x10));
        *(f32 *)(rec + 0x18) = *(f32 *)(ball + 0x24);
        *(f32 *)(rec + 0x1C) = *(f32 *)(ball + 0x28);
        *(f32 *)(rec + 0x20) = *(f32 *)(ball + 0x2C);
        if (*(s32 *)(ball + 0x1C) & 0xFFFF00) {
            *(f32 *)(ball + 0xC) = 0.0f;
            return;
        }
        if (*(f32 *)(rec + 0x1C) < D_80168574[*(u16 *)(D_8006FAF0 + 0x20)]) {
            ctrl = *(u8 **)(ball + 4);
            ctrlWord = *(u16 *)(ctrl + 0x560);
            lowBits = ctrlWord & 7;
            *(u16 *)(ctrl + 0x560) = ctrlWord & 0xF8;
            ctrl = *(u8 **)(ball + 4);
            *(u16 *)(ctrl + 0x560) = *(u16 *)(ctrl + 0x560) | (lowBits - 1);
            func_8013E49C(*(u16 *)(ball + 0x76));
            D_8011F2FD[(recIndex & 0xFFFF) * 100] = 2;
        }
    } else {
        if (ballCheckZoneHit(recIndex & 0xFFFF, ball) & 0xFF) {
            ctrl = *(u8 **)(ball + 4);
            ctrlWord = *(u16 *)(ctrl + 0x560);
            lowBits = ctrlWord & 7;
            *(u16 *)(ctrl + 0x560) = ctrlWord & 0xF8;
            ctrl = *(u8 **)(ball + 4);
            *(u16 *)(ctrl + 0x560) = *(u16 *)(ctrl + 0x560) | (lowBits - 1);
            func_8013E49C(*(u16 *)(ball + 0x76));
            spawnCrashEffect(recIndex & 0xFFFF);
            queueObjEvent(recIndex & 0xFFFF, 0x33);
            D_8011F2FD[(recIndex & 0xFFFF) * 100] = 2;
        }
    }
}
