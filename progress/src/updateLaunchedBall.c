extern void ballMoveCollide(void *, s32, f32, s32, f32, f32, f32);
extern void func_8013E49C(u16);
extern s32 ballCheckZoneHit(s32, void *);
extern void spawnCrashEffect(s32);
extern void queueObjEvent(s32, s32);
extern u8 D_8006FAF0[];
extern u8 D_8011F2F0[];
extern u8 D_8011F2FD[];
extern f32 D_80168574[];

/* Per-frame update for a ball fired by a car: moves it, expires it on timeout or zone hit, and releases the owner's active-ball count. */ void updateLaunchedBall(s32 ballSlot) {
    u8 *ball;
    u8 *object;
    u16 life;
    u16 carFlags;
    u16 activeCount;
    u8 *car;
    s32 slot;

    ball = D_8011F2F0 + (ballSlot & 0xFFFF) * 0x64;
    object = *(u8 **)(ball + 0x60);
    ballMoveCollide(object + 0x1C, *(s32 *)(ball + 0x18), *(f32 *)(ball + 0x1C), *(s32 *)(ball + 0x20), *(f32 *)(object + 8), *(f32 *)(object + 0xC), *(f32 *)(object + 0x10));
    *(f32 *)(ball + 0x18) = *(f32 *)(object + 0x24);
    *(f32 *)(ball + 0x1C) = *(f32 *)(object + 0x28);
    *(f32 *)(ball + 0x20) = *(f32 *)(object + 0x2C);
    life = *(u16 *)(object + 0x14) - 1;
    *(u16 *)(object + 0x14) = life;
    if ((life << 16) == 0 || *(f32 *)(ball + 0x1C) < D_80168574[*(u16 *)(D_8006FAF0 + 0x20)]) {
        car = *(u8 **)(object + 4);
        carFlags = *(u16 *)(car + 0x560);
        activeCount = carFlags & 7;
        *(u16 *)(car + 0x560) = carFlags & 0xF8;
        car = *(u8 **)(object + 4);
        *(u16 *)(car + 0x560) = *(u16 *)(car + 0x560) | (activeCount - 1);
        slot = ballSlot & 0xFFFF;
        func_8013E49C(*(u16 *)(object + 0x76));
        spawnCrashEffect(slot);
        D_8011F2FD[slot * 0x64] = 2;
    }
    if ((*(s32 *)(object + 0x1C) & 0xFFFF00) || (ballCheckZoneHit(ballSlot & 0xFFFF, object) & 0xFF)) {
        car = *(u8 **)(object + 4);
        carFlags = *(u16 *)(car + 0x560);
        activeCount = carFlags & 7;
        *(u16 *)(car + 0x560) = carFlags & 0xF8;
        car = *(u8 **)(object + 4);
        *(u16 *)(car + 0x560) = *(u16 *)(car + 0x560) | (activeCount - 1);
        slot = ballSlot & 0xFFFF;
        func_8013E49C(*(u16 *)(object + 0x76));
        spawnCrashEffect(slot);
        queueObjEvent(slot, 0x33);
        D_8011F2FD[slot * 0x64] = 2;
    }
}
