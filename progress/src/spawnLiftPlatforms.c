typedef struct { f32 x, y, z; } Vec3;
typedef struct { u8 pad0[2]; s16 r, g, b, a; u8 pad0a[3]; u8 flag; u8 pad0e[0x30]; s16 unk3E; s16 unk40; u8 pad42[0x22]; } Obj64;
typedef struct { u8 pad0[4]; void *anim; u8 pad8[0x68]; f32 radius; u8 pad74[8]; } Obj7C;
extern Obj64 D_8011F2F0[];
extern Obj7C hitSlots[];
extern Vec3 D_80168814[];
extern u8 D_802397E4[];
extern u8 sCars[];
extern void updateLiftPlatform();
s32 raceAllocSlot(void);
u16 objCreate(s32, s32, s32, s32, s32, s32, void *, void *, s32, f32, f32, f32, s32, s32, s32, f32, f32, f32);
void initHitSlot(u16, s32, s16, f32, f32, f32, u16);

/* Spawns the four lift platforms below their start points, each with a hit slot, then flags the parent object. */ void spawnLiftPlatforms(u16 parentObj)
{
    s32 liftIdx;
    s32 allocId;
    s32 hitSlot;
    f32 yOffset;
    u16 liftObj;
    Obj64 *liftObjPtr;

    for (liftIdx = 0; liftIdx < 4; liftIdx++) {
        yOffset = 20.0f;
        allocId = raceAllocSlot();
        hitSlot = allocId & 0xFFFF;
        if (hitSlot != 0xFFFF) {
            liftObj = objCreate(0, 0xF, 1, 0, 0x51, 0xFF, D_802397E4, updateLiftPlatform, 0,
                                D_80168814[liftIdx].x, D_80168814[liftIdx].y - yOffset, D_80168814[liftIdx].z, 0, 0, 0, 1.0f, 1.0f, 1.0f);
            if (liftObj != 0xFFFF && liftObj != 0xFFFE) {
                liftObjPtr = &D_8011F2F0[liftObj];
                liftObjPtr->a = 0x80;
                liftObjPtr->b = 0x80;
                liftObjPtr->g = 0x80;
                liftObjPtr->r = 0x80;
                liftObjPtr->unk3E = 0;
                liftObjPtr->unk40 = 100 - liftIdx * 10;
                initHitSlot(hitSlot, liftObj, 0x40, 0.0f, 0.0f, 0.0f, 0);
                hitSlots[hitSlot].radius = 35.0f;
                hitSlots[hitSlot].anim = sCars;
            } else {
                func_8013E49C(allocId);
            }
        }
    }
    D_8011F2F0[parentObj].flag = 2;
}
