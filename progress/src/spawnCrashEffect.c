typedef struct { u8 pad0[4]; u8 *car; } Ctl;
typedef struct { f32 v; u8 pad[0x60]; } SlotF;
typedef struct { u8 pad0[4]; void *owner; u8 pad8[0xE]; u8 unk16; u8 pad17[0x65]; } Row;
typedef struct { Ctl *v; u8 pad[0x60]; } SlotP;
extern SlotF D_8011F308[], D_8011F30C[], D_8011F310[];
extern SlotP D_8011F350[];
extern Row hitSlots[];
extern u8 D_802390C8[];
extern void func_8015CF2C(void), func_8015CFD8(void), func_8015D368(void);
s32 objCreate(s32, s32, s32, s32, s32, s32, void *, void *, void *, f32, f32, f32, f32, f32, f32, f32, f32, f32);
void func_8013E818(u16, u16, s32, f32, f32, f32, s32);

/* Spawns a crash marker on the car at carIdx, then up to 10 debris particles with random velocities. */ void spawnCrashEffect(u16 carIdx) {
    s32 allocRet;
    s32 slotIdx;
    s32 objId;
    u16 i;
    s16 a, b, c;

    allocRet = raceAllocSlot();
    slotIdx = allocRet & 0xFFFF;
    if (slotIdx != 0xFFFF) {
        objId = objCreate(0, 0, 3, 0, 0x20, 1, 0, func_8015CF2C, 0, D_8011F308[carIdx].v, D_8011F30C[carIdx].v, D_8011F310[carIdx].v, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
        if ((u16) (objId + 2) < 2) {
        fail:
            ((void (*)(s32)) func_8013E49C)(slotIdx);
            return;
        }
        func_8013E818(allocRet, objId, 0, 0.0f, 0.0f, 0.0f, 3);
        hitSlots[(u16) allocRet].owner = D_8011F350[carIdx].v->car;
        for (i = 0; i < 10; i++) {
            allocRet = raceAllocSlot();
            slotIdx = allocRet & 0xFFFF;
            if (slotIdx == 0xFFFF) {
                break;
            }
            objId = objCreate(0, 0, 1, 0, 0x5B, 0xC8, D_802390C8, func_8015CFD8, func_8015D368, D_8011F308[carIdx].v, D_8011F30C[carIdx].v, D_8011F310[carIdx].v, 0.0f, 0.0f, 0.0f, 0.1f, 0.1f, 0.1f);
            if ((u16) (objId + 2) < 2) {
                goto fail;
            }
            a = (f32) (u32) (nextRandom() & 0x3F) - 32.0f;
            b = (f32) (u32) (nextRandom() & 0x1F);
            c = (f32) (u32) (nextRandom() & 0x3F) - 32.0f;
            func_8013E818(allocRet, objId, 0x40, a * 0.2, b * 0.2, c * 0.2, nextRandom() & 8);
            hitSlots[(u16) allocRet].unk16 = 1;
        }
    }
}
