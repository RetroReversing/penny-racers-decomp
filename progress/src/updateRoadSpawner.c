typedef struct Obj { u8 pad0[0xC]; u8 frameCount; u8 padD[0xB]; f32 x; f32 y; f32 z; u8 pad24[0x20]; f32 f44; f32 f48; u8 pad4C[0x18]; } Obj;
typedef struct { u8 pad0[2]; u16 idx; u8 pad4[0x8EC]; } Slot;
typedef struct { f32 a; f32 b; f32 c; u8 d; u8 pad[3]; } Param;
extern Obj D_8011F2F0[];
extern Slot sCars[];
extern Param D_80168844[];
extern u8 D_80239818[];
extern void updateBallWithTrail(), drawSmokePuff();
u16 objCreate(s32, s32, s32, s32, s32, s32, void *, void *, void *, f32, f32, f32, s32, s32, s32, f32, f32, f32);
u16 raceAllocSlot(void);
void func_8013E958(u16, s32, s16, f32, f32, f32, u16);
void queueObjEvent(u16, s32);
u32 nextRandom(void);
f32 sqrtf(f32);

/* Per-frame spawner for one object: every 32 frames, if any car is within
 * 1500 units, it spawns a new object at a random spot off the road edge and
 * gives it a velocity from the spawn table. Does nothing when no slot is free. */
void updateRoadSpawner(u16 index)
{
    s32 nearCar = 0;
    Obj *obj = &D_8011F2F0[index];
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
            if (sqrtf(x * x + y * y + z * z) < 1500.0f) {
                nearCar = 1;
            }
        }
    }
    obj->frameCount++;
    if ((obj->frameCount & 0x1F) == 0 & nearCar != 0) {
        u16 id = raceAllocSlot();
        if (id != 0xFFFF) {
            f32 x2;
            f32 z2;
            u16 e;

            if ((nextRandom() & 0xFF) >= 0x80) {
                x = -850.0f - (nextRandom() & 0x7F);
                nearCar = 0;
            } else {
                x = -1425.0f - (nextRandom() & 0x7F);
                nearCar = 1;
            }
            y = -30.0f;
            z = nextRandom() % 827 + 59.0f;
            if ((nextRandom() & 0xFF) >= 0x80) {
                x2 = -1196.0f;
            } else {
                if (nearCar) {
                    x2 = -850.0f - (nextRandom() & 0x7F);
                } else {
                    x2 = -1425.0f - (nextRandom() & 0x7F);
                }
            }
            z2 = nextRandom() % 827 + 59.0f;
            nearCar = nextRandom() & 7;
            e = objCreate(0, 0, 1, 0, 0x5B, 0xC8, D_80239818, updateBallWithTrail, drawSmokePuff, x, y, z, 0, 0, 0, 5.0f, 5.0f, 5.0f);
            if ((u16) (e + 2) >= 2U) {
                func_8013E958(id, e, 0x40, (x2 - x) * D_80168844[nearCar].c, D_80168844[nearCar].a, (z2 - z) * D_80168844[nearCar].c, D_80168844[nearCar].d);
                D_8011F2F0[e].f48 = D_80168844[nearCar].b;
                if (x2 == -1196.0f) {
                    D_8011F2F0[e].f44 = 1.0f;
                } else {
                    D_8011F2F0[e].f44 = 0.0f;
                }
                queueObjEvent(e, 0x1E);
            } else {
                func_8013E49C(id);
            }
        }
    }
}
