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

void func_80163E5C(u16 arg0)
{
    Ctl *ctl = D_8011F2F0[arg0].ctl;
    Obj *obj = &D_8011F2F0[arg0];
    s32 n;
    s32 count;
    Obj *p;

    ctl->vy -= 0.1f;
    ballMoveCollide(&ctl->hit, obj->x, obj->y, obj->z, ctl->vx, ctl->vy, ctl->vz);
    obj->x = ctl->px;
    obj->y = ctl->py;
    obj->z = ctl->pz;
    if ((ctl->hit & 0xFFFF00) || --ctl->timer == 0 || obj->y < D_80168574[D_8006FAF0[0x10]]) {
        count = ctl->car->flags & 7;
        ctl->car->flags &= 0xF8;
        ctl->car->flags |= count - 1;
        func_8013E49C(ctl->unk76);
        spawnCameraFly(arg0, 1.0f, ctl->car, 0.0f);
        queueObjEvent(arg0, 0x34);
        D_8011F2F0[arg0].unkD = 2;
    }
    if (!(ctl->timer & 3)) {
        n = objCreate(0, 0, 1, 0, 0x5B, 0xFA, D_802390C8, func_80164218, func_80164364, obj->x, obj->y, obj->z, 0.0f, 0.0f, 0.0f, 0.08f, 0.08f, 0.08f);
        if ((u16)(n + 2) >= 2) {
            p = &D_8011F2F0[(u16)n];
            p->s2 = p->s4 = p->s6 = p->s8 = 0x40;
            p->ax = -ctl->vx * 0.5f;
            p->ay = -ctl->vy * 0.5f;
            p->az = -ctl->vz * 0.5f;
        }
    }
}
