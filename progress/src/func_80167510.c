typedef struct { u8 b0; u8 pad1; u16 h2; u16 h4; u16 h6; u16 h8; u8 padA[0xE]; f32 x; f32 y; f32 z; u8 pad24[0x1A]; u16 state; u8 pad40[4]; f32 f44; f32 f48; f32 f4C; u8 pad50[0x10]; struct Data *data; } Obj;
typedef struct { u8 f0; u8 f1; u8 f2; u8 f3; s16 s4; s16 s6; f32 x; f32 y; f32 z; f32 nx; f32 ny; f32 nz; } Ball;
typedef struct Data { u8 pad0[8]; f32 vx; f32 vy; f32 vz; s16 timer; u8 pad16[6]; Ball ball; u8 pad3C[0x2B]; u8 hit[7]; } Data;
typedef struct { f32 f0; u8 pad[0x78]; } Rec;
typedef struct { void *p; u8 pad[0x78]; } Rec2;
typedef struct { u8 pad0[0x774]; f32 speed; u8 pad778[0x48]; f32 vx; f32 vy; f32 vz; u8 pad7CC[0x124]; } Slot;
extern Obj D_8011F2F0[];
extern Rec slotRadius[];
extern Rec2 slotOwner[];
extern Slot sCars[];
extern u16 liftHitIndex;
extern u16 D_80233EC0;
extern u8 D_802390C8[];
extern void func_80164218(), func_80167DD4();
f32 sqrtf(f32);
u16 objCreate(s32, s32, s32, s32, s32, s32, void *, void *, void *, f32, f32, f32, s32, s32, s32, f32, f32, f32);
u16 raceAllocSlot(void);
void initHitSlot(u16, s32, s16, f32, f32, f32, u16);
void ballMoveCollide(Ball *, f32, f32, f32, f32, f32, f32);
u8 ballCheckZoneHit(u16, void *);
u8 liftHitCars(u16, void *);
void queueObjEvent(u16, s16);
u16 findPathNodeContaining(u16, f32, f32, f32);
void liftCopyFlags(u16);
void func_80167510(u16 arg0)
{
    Obj *o;
    Data *data;
    s32 i;
    u16 e;
    Obj *p;

    o = &D_8011F2F0[arg0];
    switch (o->state) {
    case 0: {
        u16 id;

        id = raceAllocSlot();
        if (id == 0xFFFF) {
            return;
        }
        initHitSlot(id, arg0, 0, 0.0f, 0.0f, 0.0f, 4);
        o->state = 2;
        slotRadius[id].f0 = 15.0f;
        slotOwner[id].p = sCars;
        o->f44 = o->x;
        o->f48 = o->y;
        o->f4C = o->z;
        o->y += 100.0f;
        break;
    }
    case 1:
        data = o->data;
        if (ballCheckZoneHit(arg0, data)) {
            Slot *s;
            f32 t;

            queueObjEvent(arg0, 0x29);
            o->state = 2;
            s = &sCars[liftHitIndex];
            t = s->speed * 0.01f;
            data->vx = s->vx * 1.5f;
            data->vy = s->vy * 1.5f + 2.0f + t;
            data->vz = s->vz * 1.5f;
            e = objCreate(0, 0, 1, 0, 0x5B, 0x8C, D_802390C8, func_80164218, func_80167DD4, o->x, o->y + 5.0f, o->z, 0, 0, 0, 0.08f, 0.08f, 0.08f);
            if ((u16) (e + 2) >= 2U) {
                p = &D_8011F2F0[e];
                p->h2 = p->h4 = p->h6 = p->h8 = 0x40;
                p->f44 = s->vx;
                p->f48 = s->vy;
                p->f4C = s->vz;
            }
        }
        break;
    case 2:
        data = o->data;
        data->vy -= 0.15f;
        ballMoveCollide(&data->ball, o->x, o->y, o->z, data->vx, data->vy, data->vz);
        o->x = data->ball.x;
        o->y = data->ball.y;
        o->z = data->ball.z;
        o->b0 = data->ball.s4 - D_80233EC0;
        if (data->ball.f2 != 0) {
            for (i = 0; i < 7; i++) {
                data->hit[i] = 0;
            }
            e = objCreate(0, 0, 1, 0, 0x5B, 0x8C, D_802390C8, func_80164218, func_80167DD4, o->x, o->y + 5.0f, o->z, 0, 0, 0, 0.08f, 0.08f, 0.08f);
            if ((u16) (e + 2) >= 2U) {
                p = &D_8011F2F0[e];
                p->h2 = p->h4 = p->h6 = p->h8 = 0x40;
                p->f44 = 0.0f;
                p->f48 = 0.3f;
                p->f4C = 0.0f;
            }
            if (--data->timer == 0) {
                e = objCreate(0, 0, 1, 0, 0x5B, 0xFA, D_802390C8, func_80164218, func_80167DD4, o->x, o->y, o->z, 0, 0, 0, 0.08f, 0.08f, 0.08f);
                if ((u16) (e + 2) >= 2U) {
                    p = &D_8011F2F0[e];
                    p->h2 = p->h4 = p->h6 = p->h8 = 0x40;
                    p->f44 = data->vx * 0.8f;
                    p->f48 = data->vy * 0.8f;
                    p->f4C = data->vz * 0.8f;
                }
                data->timer = 5;
                o->state = 1;
                return;
            }
            {
                f32 vx, vz, len, nx, nz;

                vx = data->vx;
                vz = data->vz;
                len = sqrtf(vx * vx + vz * vz);
                nx = data->ball.nx;
                nz = data->ball.nz;
                if (len != 0.0f) {
                    f32 d;

                    d = (vx * nx + vz * nz) / len * len * -1.3f;
                    vx += nx * d;
                    vz += nz * d;
                    data->vx = vx;
                    data->vz = vz;
                    data->vy *= 0.8f;
                    if (data->vy < 0.0f) {
                        data->vy = -data->vy;
                    }
                }
            }
        }
        if (liftHitCars(arg0, data)) {
            for (i = 0; i < 7; i++) {
                data->hit[i] = 0;
            }
            e = objCreate(0, 0, 1, 0, 0x5B, 0xFA, D_802390C8, func_80164218, func_80167DD4, o->x, o->y, o->z, 0, 0, 0, 0.08f, 0.08f, 0.08f);
            if ((u16) (e + 2) >= 2U) {
                p = &D_8011F2F0[e];
                p->h2 = p->h4 = p->h6 = p->h8 = 0x40;
                p->f44 = data->vx * 0.8f;
                p->f48 = data->vy * 0.8f;
                p->f4C = data->vz * 0.8f;
            }
            o->x = o->f44;
            o->y = o->f48 + 150.0f;
            o->z = o->f4C;
            data->ball.s4 = findPathNodeContaining(D_80233EC0, o->x, o->y, o->z);
            data->ball.s6 = 0;
            data->ball.f1 = 0;
            data->ball.f2 = 0;
            data->vx = 0.0f;
            data->vy = 0.0f;
            data->vz = 0.0f;
        }
        if (o->y < -200.0f) {
            o->x = o->f44;
            o->y = o->f48;
            o->z = o->f4C;
            data->ball.s4 = findPathNodeContaining(D_80233EC0, o->x, o->y, o->z);
            data->ball.s6 = 0;
            data->ball.f1 = 0;
            data->ball.f2 = 0;
            data->vx = 0.0f;
            data->vy = 0.0f;
            data->vz = 0.0f;
            o->state = 1;
        }
        break;
    }
    liftCopyFlags(arg0);
}
