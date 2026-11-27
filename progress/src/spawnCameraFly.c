typedef struct { f32 v; u8 pad[0x60]; } SlotF;
typedef struct { u8 pad0[4]; void *owner; u8 pad8[0xE]; u8 unk16; u8 pad17[0x65]; } Row;
extern SlotF D_8011F308[], sPrimColorG[], sPrimColorB[];
extern Row hitSlots[];
extern u8 D_801684D8[], D_802395A8[], D_802395DC[];
extern void updateCameraFlyOut(void), func_8015E240(void), func_8015DC9C(void), func_8015E404(void), updateCameraFlyIn(void), func_8015E484(void);
s32 objCreate(s32, s32, s32, s32, s32, s32, void *, void *, void *, f32, f32, f32, f32, f32, f32, f32, f32, f32);
void func_8013E818(u16, u16, s32, f32, f32, f32, s32);

/* Spawns the three camera fly objects (fly-out, track, fly-in) for the car at carIdx, each owned by ownerPtr and freed if an object cannot be created. */ void spawnCameraFly(u16 carIdx, f32 scale, void *ownerPtr, u8 kind) {
    s32 allocRet;
    s32 slotIdx;
    s32 objId;

    do {
    allocRet = raceAllocSlot();
    slotIdx = allocRet & 0xFFFF;
    if (slotIdx == 0xFFFF) {
        return;
    }
    objId = objCreate(0, 0, 1, 0, 0x5B, 0xFF, D_801684D8, updateCameraFlyOut, func_8015E240, D_8011F308[carIdx].v, sPrimColorG[carIdx].v, sPrimColorB[carIdx].v, 0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1.0f);
    if ((u16) (objId + 2) < 2) {
        goto fail;
    }
    func_8013E818(allocRet, objId, 0, scale, 0.0f, 0.0f, 3);
    hitSlots[(u16) allocRet].owner = ownerPtr;
    hitSlots[(u16) allocRet].unk16 = kind;
    } while (0);
    do {
    allocRet = raceAllocSlot();
    slotIdx = allocRet & 0xFFFF;
    if (slotIdx == 0xFFFF) {
        return;
    }
    objId = objCreate(0, 0, 1, 0, 0x5B, 0xFF, D_802395A8, func_8015DC9C, func_8015E404, D_8011F308[carIdx].v, sPrimColorG[carIdx].v, sPrimColorB[carIdx].v, 0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1.0f);
    if ((u16) (objId + 2) < 2) {
        goto fail;
    }
    func_8013E818(allocRet, objId, 0, scale, 0.0f, 0.0f, 0);
    hitSlots[(u16) allocRet].owner = ownerPtr;
    hitSlots[(u16) allocRet].unk16 = kind;
    } while (0);
    do {
    allocRet = raceAllocSlot();
    slotIdx = allocRet & 0xFFFF;
    if (slotIdx == 0xFFFF) {
        return;
    }
    objId = objCreate(0, 0, 1, 0, 0x5B, 0xFF, D_802395DC, updateCameraFlyIn, func_8015E484, D_8011F308[carIdx].v, sPrimColorG[carIdx].v, sPrimColorB[carIdx].v, 0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1.0f);
    if ((u16) (objId + 2) < 2) {
    fail:
        ((void (*)(s32)) func_8013E49C)(slotIdx);
        return;
    }
    func_8013E818(allocRet, objId, 0, scale, 0.0f, 0.0f, 0);
    hitSlots[(u16) allocRet].owner = ownerPtr;
    hitSlots[(u16) allocRet].unk16 = kind;
    } while (0);
}
