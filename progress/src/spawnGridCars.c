typedef struct { u8 pad0[0xD]; u8 flag; u8 pad0e[0xE]; f32 y1C; u8 pad20[0x20]; s16 unk40; u8 pad42[2]; s32 unk44; u8 pad48[0x1C]; } Obj64;
typedef struct { u8 pad0[4]; void *anim; u8 pad8[0x68]; f32 radius; u8 pad74[8]; } Obj7C;
typedef struct { u8 pad0[4]; s16 index; s16 other; u8 pad8[4]; } Hit;
typedef struct { f32 x, y, z; f32 unkC; s16 unk10; u8 pad12[2]; Hit hit; f32 unk20; u8 pad24[0x34]; f32 unk58; } Rec5C;
extern Obj64 D_8011F2F0[];
extern Obj7C hitSlots[];
extern Rec5C D_801688C4[];
extern u8 D_8016D658[];
extern u8 sCars[];
extern u16 D_80233EC0;
extern void updateProximityBounce();
s32 raceAllocSlot(void);
u16 objCreate(s32, s32, s32, s32, s32, s32, void *, void *, s32, f32, f32, f32, s32, s32, s32, f32, f32, f32);
s32 func_8012913C(u16, f32, f32, f32);
void func_80129C1C(void *, f32, f32, f32, f32, f32, f32);
void initHitSlot(s32, s32, s16, f32, f32, f32, u16);

/* Spawns up to eight car objects at the grid positions, links each to its hit slot and the owner object, and marks the owner as spawned. */ void spawnGridCars(u16 ownerObj)
{
    s32 gridIndex;
    s32 allocId;
    s32 slotIndex;
    u16 carObj;
    Obj64 *carObjPtr;

    for (gridIndex = 0; gridIndex < 8; gridIndex++) {
        allocId = raceAllocSlot();
        slotIndex = allocId & 0xFFFF;
        if (slotIndex != 0xFFFF) {
            carObj = objCreate(0, 0x10, 2, 0, 0x51, 0xFF, D_8016D658, updateProximityBounce, 0,
                                D_801688C4[gridIndex].x, D_801688C4[gridIndex].y, D_801688C4[gridIndex].z, 0, 0, 0, 1.0f, 1.0f, 1.0f);
            if (carObj != 0xFFFF && carObj != 0xFFFE) {
                carObjPtr = &D_8011F2F0[carObj];
                carObjPtr->unk44 = 0;
                carObjPtr->unk40 = gridIndex;
                D_801688C4[gridIndex].unkC = carObjPtr->y1C;
                D_801688C4[gridIndex].unk10 = gridIndex * 40 + 10;
                D_801688C4[gridIndex].hit.index = func_8012913C(D_80233EC0, D_801688C4[gridIndex].x, D_801688C4[gridIndex].y, D_801688C4[gridIndex].z);
                D_801688C4[gridIndex].hit.other = 0;
                func_80129C1C(&D_801688C4[gridIndex].hit, D_801688C4[gridIndex].x, D_801688C4[gridIndex].y, D_801688C4[gridIndex].z, 0.0f, -300.0f, 0.0f);
                D_801688C4[gridIndex].unk58 = D_801688C4[gridIndex].unk20;
                initHitSlot(slotIndex, carObj, 0, 0.0f, 0.0f, 0.0f, 0);
                hitSlots[slotIndex].anim = sCars;
                hitSlots[slotIndex].radius = 50.0f;
            } else {
                func_8013E49C(allocId);
            }
        }
    }
    D_8011F2F0[ownerObj].flag = 2;
}
