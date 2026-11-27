extern u8 D_8011F2F0[];
extern u8 D_8011F308[];
extern u8 sPrimColorG[];
extern u8 sPathOffsetZ[];
extern u8 hitSlots[];
extern u8 slotObjIds[];
extern u8 D_8022AD5C[];
extern u16 D_80233EC0;
s32 findPathNodeContaining();

/* Initializes a launched ball: its record in sSlotRecs, its hit slot, the start position offset from the car, velocity and lifetime, and which cars it can hit. */ void launchBall(u16 hitSlot, u16 ballSlot, u8 *car, s16 timeout, f32 offX, f32 offY, f32 offZ, f32 velX, f32 velY, f32 velZ, s16 lifetime)
{
    u8 *rec;
    u8 *hit;
    u16 carObj;
    s32 i;
    s32 objId;
    s32 slotOff;

    rec = D_8011F2F0 + ballSlot * 100;
    hit = hitSlots + hitSlot * 124;
    *(u8 **)(rec + 0x60) = hit;
    *(s16 *)(rec + 0x8) = timeout;
    *(s16 *)(rec + 0x6) = timeout;
    *(s16 *)(rec + 0x4) = timeout;
    *(s16 *)(rec + 0x2) = timeout;
    carObj = *(u16 *)(car + 2);
    *(f32 *)(rec + 0x18) = offX + *(f32 *)(D_8011F308 + carObj * 100);
    carObj = *(u16 *)(car + 2);
    *(f32 *)(rec + 0x1C) = offY + *(f32 *)(sPrimColorG + carObj * 100);
    carObj = *(u16 *)(car + 2);
    *(f32 *)(rec + 0x20) = offZ + *(f32 *)(sPathOffsetZ + carObj * 100);
    *(f32 *)(hit + 0x8) = velX;
    *(f32 *)(hit + 0xC) = velY;
    *(f32 *)(hit + 0x10) = velZ;
    *(u16 *)(hit + 0x14) = (u16)lifetime;
    *(u8 *)(hit + 0x16) = 0;
    *(u16 *)(hit + 0x74) = *(u16 *)(car + 0x8E4);
    *(u8 **)(hit + 0x4) = car;
    *(s16 *)(hit + 0x20) = findPathNodeContaining(D_80233EC0, *(s32 *)(rec + 0x18), *(s32 *)(rec + 0x1C), *(s32 *)(rec + 0x20));
    *(u16 *)(hit + 0x22) = 0;
    *(u8 *)(hit + 0x1D) = 0;
    *(u8 *)(hit + 0x1E) = 0;
    *(s32 *)(hit + 0x70) = 0;
    for (i = 0; i < 7; i++) {
        *(u8 *)(hit + i + 0x67) = 0;
        slotOff = ((((i << 3) + i) << 4) - i) << 4;
        objId = *(u16 *)(slotObjIds + slotOff);
        if (objId != 0xFFFF) {
            if (0.0f < *(f32 *)(D_8022AD5C + slotOff)) {
                *(s8 *)(hit + i + 0x60) = i;
            } else {
                *(s8 *)(hit + i + 0x60) = -1;
            }
        } else {
            *(s8 *)(hit + i + 0x60) = -1;
        }
    }
}
