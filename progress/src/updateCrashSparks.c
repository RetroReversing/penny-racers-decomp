typedef struct { u8 pad0[8]; f32 x; f32 y; f32 z; u16 timer; u8 pad16[0x60]; u16 node; } Fx;
typedef struct { Fx *p; u8 pad[0x60]; } SlotP;
typedef struct { u16 v; u8 pad[0x62]; } SlotH;
typedef struct { f32 v; u8 pad[0x60]; } SlotF;
typedef struct { u8 v; u8 pad[0x63]; } SlotB;
extern SlotP D_8011F350[];
extern SlotH playerSlots[];
extern SlotF D_8011F320[];
extern SlotB D_8011F2FC[];
extern SlotB D_8011F2FD[];
void func_8013EC48(u16, f32);
void func_8013EBB0(u16, f32, f32, f32);
void func_8013EB20(u16, Fx *, f32, f32, f32);
u32 nextRandom(void);

/* Steps one crash spark through its phases: emit and fade, drop with gravity, then recycle its node. */ void updateCrashSparks(u16 slot) {
    Fx *spark;

    spark = D_8011F350[slot].p;
    switch (playerSlots[slot].v) {
    case 0:
        func_8013EBB0(slot, -spark->x * 0.01f, -spark->y * 0.01f, -spark->z * 0.01f);
        func_8013EC48(slot, (f32)(nextRandom() & 8) * 0.1f + 0.3f);
        func_8013EA18(spark, 0xFF, (nextRandom() & 0x10) + 0xEF, 0xDF);
        if ((s16)--spark->timer < 0) {
            playerSlots[slot].v = 1;
        }
        break;
    case 1:
        func_8013EB20(slot, spark, 0.0f, -0.1f, 0.0f);
        func_8013EA90(spark, 0, (s16)-(nextRandom() & 7), -9);
        func_8013EC48(slot, (3.0f - D_8011F320[slot].v) * 0.2f + D_8011F320[slot].v);
        if (D_8011F320[slot].v > 2.9f) {
            playerSlots[slot].v = 2;
        }
        break;
    case 2:
        func_8013EB20(slot, spark, 0.0f, -0.15f, 0.0f);
        func_8013EA90(spark, 0, (s16)-(nextRandom() & 7), -9);
        func_8013EC48(slot, (0.3f - D_8011F320[slot].v) * 0.05f + D_8011F320[slot].v);
        D_8011F2FC[slot].v -= 4;
        if (D_8011F2FC[slot].v < 5) {
            playerSlots[slot].v = 3;
        }
        break;
    case 3:
        func_8013E49C(spark->node);
        D_8011F2FD[slot].v = 2;
        break;
    }
}
