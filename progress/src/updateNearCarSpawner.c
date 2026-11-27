typedef struct Obj { u8 pad0[0xC]; u8 count; u8 padD[0xB]; f32 x; f32 y; f32 z; u8 pad24[0x20]; f32 f44; s32 f48; u8 pad4C[0x18]; } Obj;
typedef struct { u8 pad0[2]; u16 idx; u8 pad4[0x8EC]; } Slot;
typedef struct { f32 f0; u8 pad[0x78]; } Rec;
extern Obj D_8011F2F0[];
extern Slot sCars[];
extern Rec slotRadius[];
extern u8 D_8023977C[];
extern u8 D_80239950[];
extern void func_8014081C(), func_80140A0C(), func_80140A38(), func_80138304();
u16 objCreate(s32, s32, s32, s32, s32, s32, void *, void *, void *, f32, f32, f32, s32, s32, s32, f32, f32, f32);
u16 raceAllocSlot(void);
void initHitSlot(u16, s32, s16, f32, f32, f32, u16);
u32 nextRandom(void);
f32 sqrtf(f32);
/* Every 64 frames, while a car is within range, spawns a pair of linked objects that fly toward a target. */ void updateNearCarSpawner(u16 objIndex)
{
    s32 nearCar = 0;
    Obj *obj = &D_8011F2F0[objIndex];
    s32 i;
    f32 x;
    f32 y;
    f32 z;

    for (i = 0; i < 7; i++) {
        if (sCars[i].idx != 0xFFFF) {
            Slot *slot = &sCars[i];
            Obj *other = &D_8011F2F0[slot->idx];
            x = obj->x - other->x;
            y = obj->y - other->y;
            z = obj->z - other->z;
            if (sqrtf(x * x + y * y + z * z) < 1400.0f) {
                nearCar = 1;
            }
        }
    }
    obj->count++;
    if (nearCar > 0 & (obj->count & 0x3F) == 0) {
        u16 slotId = raceAllocSlot();
        if (slotId != 0xFFFF) {
            f32 randStep;
            f32 targetX;
            f32 targetZ;
            u16 objIdx;

            randStep = nextRandom() & 0x7F;
            x = randStep * -2.74f + -700.0f;
            y = 240.0f;
            z = randStep * 2.72f + 737.0f;
            randStep = nextRandom() & 0x7F;
            targetX = randStep * -1.433f + -965.0f;
            targetZ = randStep * 1.417f + 531.0f;
            objIdx = objCreate(0, 0, 1, 0, 0x51, 0xC8, D_8023977C, func_8014081C, func_80140A0C, x, y, z, 0, 0, 0, 2.0f, 2.0f, 2.0f);
            if ((u16) (objIdx + 2) >= 2U) {
                f32 speed = (nextRandom() & 0x1F) * 0.01f + 0.5f;
                f32 height = (nextRandom() & 0xF) * 0.1f + 4.0f;
                u16 partnerIdx;

                initHitSlot(slotId, objIdx, 0x40, (targetX - x) * 0.008f * speed, height, (targetZ - z) * 0.008f * speed, 0xC8);
                D_8011F2F0[objIdx].f48 = 0;
                slotRadius[slotId].f0 = 25.0f;
                partnerIdx = objCreate(0, 0, 1, 0, 0x52, 0x9B, D_80239950, func_80140A38, func_80138304, 0.0f, 0.0f, 0.0f, 0, 0, 0, 0.2f, 0.2f, 0.2f);
                if ((u16) (partnerIdx + 2) >= 2U) {
                    D_8011F2F0[partnerIdx].f44 = objIdx;
                    D_8011F2F0[objIdx].f44 = partnerIdx;
                }
            } else {
                func_8013E49C(slotId);
            }
        }
    }
}
