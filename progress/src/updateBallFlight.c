typedef struct { u8 pad0[2]; u16 unk2; u8 pad4[0x55C]; u16 flags; } Car;
typedef struct { u8 pad0[4]; Car *car; f32 vx; f32 vy; f32 vz; s16 timer; u8 pad16[6]; s32 hit; u8 pad20[4]; f32 px; f32 py; f32 pz; u8 pad30[0x46]; u16 unk76; } Ctl;
typedef struct { u8 pad0[2]; s16 s2; s16 s4; s16 s6; s16 s8; u8 padA[3]; u8 unkD; u8 padE[0xA]; f32 x; f32 y; f32 z; u8 pad24[0x20]; f32 ax; f32 ay; f32 az; u8 pad50[0x10]; Ctl *ctl; } Obj;
extern Obj D_8011F2F0[];
extern u16 D_8006FAF0[];
extern f32 D_80168574[];
extern u8 D_802390C8[];
void ballMoveCollide(void *, f32, f32, f32, f32, f32, f32);
void spawnCameraFly(u16, f32, Car *, f32);
void queueObjEvent(u16, s32);
void func_80164218(void);
void func_80164364(void);
s32 objCreate(s32, s32, s32, s32, s32, s32, u8 *, void (*)(void), void (*)(void), f32, f32, f32, f32, f32, f32, f32, f32, f32);

/* Per-frame update for a thrown ball: applies gravity, moves it, ends the flight on a hit, timeout or fall (docking one ball from the car), and spawns trail puffs behind it. */
void updateBallFlight(u16 objIndex)
{
    Ctl *flight = D_8011F2F0[objIndex].ctl;
    Obj *obj = &D_8011F2F0[objIndex];
    s32 trailIndex;
    s32 ballsLeft;
    Obj *trail;

    flight->vy -= 0.1f;
    ballMoveCollide(&flight->hit, obj->x, obj->y, obj->z, flight->vx, flight->vy, flight->vz);
    obj->x = flight->px;
    obj->y = flight->py;
    obj->z = flight->pz;
    if ((flight->hit & 0xFFFF00) || --flight->timer == 0 || obj->y < D_80168574[D_8006FAF0[0x10]]) {
        ballsLeft = flight->car->flags & 7;
        flight->car->flags &= 0xF8;
        flight->car->flags |= ballsLeft - 1;
        func_8013E49C(flight->unk76);
        spawnCameraFly(objIndex, 1.0f, flight->car, 0.0f);
        queueObjEvent(objIndex, 0x34);
        D_8011F2F0[objIndex].unkD = 2;
    }
    if (!(flight->timer & 3)) {
        trailIndex = objCreate(0, 0, 1, 0, 0x5B, 0xFA, D_802390C8, func_80164218, func_80164364, obj->x, obj->y, obj->z, 0.0f, 0.0f, 0.0f, 0.08f, 0.08f, 0.08f);
        if ((u16)(trailIndex + 2) >= 2) {
            trail = &D_8011F2F0[(u16)trailIndex];
            trail->s2 = trail->s4 = trail->s6 = trail->s8 = 0x40;
            trail->ax = -flight->vx * 0.5f;
            trail->ay = -flight->vy * 0.5f;
            trail->az = -flight->vz * 0.5f;
        }
    }
}
