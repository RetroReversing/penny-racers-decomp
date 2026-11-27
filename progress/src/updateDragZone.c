typedef struct {
    u16 pad0; u16 size[4]; u8 padA[2]; u8 timer; u8 padD[0xB]; f32 pos[3]; u8 pad24[0x1C]; u16 x40; u8 pad42[2]; f32 vel[3]; u8 pad50[0x14];
} Obj;
typedef struct {
    u8 pad0[2]; u16 obj; u8 pad4[0x7B0]; f32 x7B4; u8 pad7B8[4]; f32 x7BC; f32 x7C0; u8 pad7C4[4]; f32 x7C8; u8 pad7CC[0x88]; f32 x854; u8 pad858[4]; f32 x85C; u8 pad860[0x90];
} Car;
typedef struct Def Def;
extern Obj D_8011F2F0[];
extern Car sCars[];
extern f32 waveValue;
extern u8 sprayDef[];
void updateSprayParticle(void);
f32 waveTableLookup(s32);
u32 nextRandom(void);
u16 objCreate(u8, u8, u8, u16, u8, u8, Def *, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32);

/* Slows sCars that are inside a drag zone and spawns spray particles while one is active. */ void updateDragZone(u16 id) {
    Obj *objPtr;
    Obj *offsetPtr;
    Obj *newObjPtr;
    Obj *other;
    Car *car;
    s32 i;
    u8 inZone;
    u16 newId;
    f32 dx;
    f32 dz;
    f32 spawnY;

    objPtr = &D_8011F2F0[id];
    objPtr->timer++;
    waveValue = waveTableLookup(objPtr->timer);
    if (waveValue < 0.0f) {
        waveValue = -waveValue;
    }
    inZone = 0;
    for (i = 0; i < 7; i++) {
        if (sCars[i].obj != 0xFFFF) {
            car = &sCars[i];
            other = &D_8011F2F0[car->obj];
            dx = other->pos[0] - 164.0f;
            dz = other->pos[2] - -3164.0f;
            if (dx * 0.0f + dz < 0.0f) {
                dx = other->pos[0] - -391.0f;
                dz = other->pos[2] - -3825.0f;
                if (dx * -0.01f + dz * -1.0f < 0.0f) {
                    if (dx * 0.97f + dz * -0.24f < 0.0f) {
                        dx = other->pos[0] - -741.0f;
                        dz = other->pos[2] - -3017.0f;
                        if (dx * -0.94f + dz * 0.34f < 0.0f) {
                            car->x854 -= waveValue * 7.65765e-05f;
                            car->x85C -= waveValue * 7.65765e-05f;
                            car->x7B4 -= waveValue * 7.65765e-05f;
                            car->x7BC -= waveValue * 0.009977477f;
                            car->x7C0 -= waveValue * 7.65765e-05f;
                            car->x7C8 -= waveValue * 0.009977477f;
                            inZone = 1;
                        }
                    } else {
                        dx = other->pos[0] - 226.0f;
                        dz = other->pos[2] - -3833.0f;
                        if (dx + dz * 0.09f < 0.0f) {
                            car->x854 -= waveValue * 0.000153153f;
                            car->x85C -= waveValue * 0.000153153f;
                            car->x7B4 -= waveValue * 0.000153153f;
                            car->x7BC -= waveValue * 0.019954953f;
                            car->x7C0 -= waveValue * 0.000153153f;
                            car->x7C8 -= waveValue * 0.019954953f;
                            inZone = 1;
                        } else {
                            dx = other->pos[0] - 676.0f;
                            dz = other->pos[2] - -3598.0f;
                            if (dx * 0.99f + dz * 0.15f < 0.0f) {
                                car->x854 -= waveValue * 7.65765e-05f;
                                car->x85C -= waveValue * 7.65765e-05f;
                                car->x7B4 -= waveValue * 7.65765e-05f;
                                car->x7BC -= waveValue * 0.009977477f;
                                car->x7C0 -= waveValue * 7.65765e-05f;
                                car->x7C8 -= waveValue * 0.009977477f;
                                inZone = 1;
                            }
                        }
                    }
                }
            }
        }
    }
    if (inZone && !(objPtr->timer & 7)) {
        dx = (f32) (nextRandom() & 0x7F) * 3.0787401f + -223.0f;
        spawnY = (f32) (nextRandom() & 0x7F) + -99.0f;
        dz = -3000.0f;
        newId = objCreate(0, 0, 1, 0, 0x5B, 0xC8, (Def *) sprayDef, (s32) updateSprayParticle, 0, dx, spawnY, dz, 0.0f, 0.0f, 0.0f, 0.2f, 0.2f, 0.2f);
        if (newId != 0xFFFF && newId != 0xFFFE) {
            offsetPtr = (Obj *) (newId * sizeof(Obj));
            newObjPtr = (Obj *) ((u32) offsetPtr + (u32) D_8011F2F0);
            newObjPtr->size[0] = newObjPtr->size[1] = newObjPtr->size[2] = newObjPtr->size[3] = 0x40;
            newObjPtr->vel[0] = newObjPtr->vel[1] = newObjPtr->vel[2] = 0.0f;
            newObjPtr->x40 = nextRandom();
        }
    }
}
