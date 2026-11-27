typedef struct { u8 pad0[0xC]; u8 alpha; u8 padD[0xB]; f32 x; f32 y; f32 z; u8 pad24[0xC]; f32 sx; f32 sy; f32 sz; u8 pad3C[2]; u16 state; u16 idx; u8 pad42[2]; f32 vy; u8 pad48[4]; f32 acc; u8 pad50[0x10]; u8 *link; } Rec;
typedef struct { u8 pad0[0xC]; f32 base; u16 timer; u8 pad12[0x4A]; } Ent;
typedef struct { u16 rec; u8 pad[0x8EE]; } CarA;
typedef struct { f32 size; u8 pad[0x8EC]; } CarB;
typedef struct { u8 pad[0x67]; u8 f[7]; } Link;
extern Rec D_8011F2F0[];
extern Ent D_801688C4[];
extern CarA slotObjIds[];
extern CarB D_8022AEE4[];
extern float sqrtf(float);
void spawnRingEffects(u16, f32, f32, f32, f32, f32, s32, s32, s32, s32);
void queueObjEvent(u16, s32);
u8 liftHitCars(u16, u8 *);

/* Per-frame update for a proximity bounce object: waits until a car gets close, bounces up and falls, then fades out and resets. */ void updateProximityBounce(u16 objId) {
    Rec *self;
    Ent *ent;
    Rec *other;
    u8 *link;
    u8 carNear;
    s32 i;
    f32 dx;
    f32 dy;
    f32 dz;

    self = &D_8011F2F0[objId];
    link = self->link;
    ent = &D_801688C4[self->idx];
    carNear = 0;
    for (i = 0; i < 7; i++) {
        if (slotObjIds[i].rec != 0xFFFF) {
            other = &D_8011F2F0[slotObjIds[i].rec];
            dx = other->x - self->x;
            dy = other->y - self->y;
            dz = other->z - self->z;
            if (sqrtf(dx * dx + dy * dy + dz * dz) < D_8022AEE4[i].size * 80.0f * 0.05f + 160.0f) {
                carNear = 1;
            }
        }
    }
    switch (D_8011F2F0[objId].state) {
    case 0:
        self->sy = self->sz = self->sx = (1.0f - self->sx) * 0.01f + self->sx;
        if (0.99f < self->sx) {
        if (carNear) {
            self->acc = 0.0f;
            self->vy = 0.0f;
            ent->timer = 0x5F;
            D_8011F2F0[objId].state = 1;
            spawnRingEffects(objId, 0.0f, 6.0f, 1.0f, 43.0f, 0.0f, 8, 1, 0xFF, 0);
            queueObjEvent(objId, 0x27);
        }
        }
        break;
    case 1:
        self->acc += 0.001f;
        self->vy -= self->acc;
        self->y += self->vy;
        if (--ent->timer == 0) {
            ent->timer = 4;
            D_8011F2F0[objId].state = 2;
            queueObjEvent(objId, 0x34);
        }
        if ((ent->timer & 3) == 0 && ent->timer < 0x19) {
            spawnRingEffects(objId, (ent->timer & 7) * 2, 6.0f, 2.0f, (0x64 - ent->timer) * 0.5f, ent->timer * 3, 4, 1, 0xFF, 1);
        }
        if (liftHitCars(objId, link)) {
            for (i = 0; i < 7; i++) {
                ((Link *)link)->f[i] = 0;
            }
        }
        break;
    case 2:
        self->vy *= 0.7f;
        self->y += self->vy;
        if (--ent->timer == 0) {
            ent->timer = 0x64;
            D_8011F2F0[objId].state = 3;
        }
        if (liftHitCars(objId, link)) {
            for (i = 0; i < 7; i++) {
                ((Link *)link)->f[i] = 0;
            }
        }
        break;
    case 3:
        self->vy *= 0.95f;
        self->y += self->vy;
        if (--ent->timer == 0) {
            D_8011F2F0[objId].state = 4;
        }
        break;
    case 4:
        self->vy = 0.0f;
        self->alpha -= 10;
        if (self->alpha < 0xB) {
            self->sx = self->sy = self->sz = 0.01f;
            self->alpha = 0xFF;
            self->y = ent->base;
            ent->timer = 0x64;
            D_8011F2F0[objId].state = 0;
        }
        break;
    }
}
