typedef struct { u8 pad0[0xC]; u8 index; u8 mode; u8 padE[0xA]; f32 x; f32 y; f32 z; u8 pad24[0x1A]; u16 state; u8 pad40[0x20]; struct Data *data; } Obj;
typedef struct { u8 f0; u8 f1; u8 f2; u8 f3; s16 s4; s16 s6; f32 x; f32 y; f32 z; } Ball;
typedef struct { u8 pad0[4]; u16 id; u8 pad6[0x22A]; u16 kind; u8 pad232[0x32E]; u16 flags; } Owner;
typedef struct Data { u8 pad0[4]; Owner *owner; f32 vx; f32 vy; f32 vz; s16 timer; u8 pad16[6]; Ball ball; u8 pad30[0x46]; u16 id; } Data;
typedef struct { u8 active; s8 target; u8 pad2[2]; f32 x[8]; f32 y[8]; f32 z[8]; f32 yaw[8]; f32 roll[8]; f32 pitch[8]; } Trail;
typedef struct { u8 pad0[2]; u16 idx; u8 pad4[0x8EC]; } Slot;
extern Obj D_8011F2F0[];
extern Trail D_8018A460[][3];
extern Slot D_8022A770[];
extern u16 D_8006FB10;
extern f32 D_80168574[];
f32 sqrtf(f32);
void func_80129918(Ball *, f32, f32, f32, f32, f32, f32);
u8 func_8013F050(u16, void *);
void func_8015D410(u16, f32, void *, u16);
void func_801D7028(u16, s16);
u16 func_801F9D8C(s32, s32);
s32 func_8013E49C(u16);
void func_80162460(u16 arg0)
{
    Obj *o;
    Data *data;
    Trail *tr;
    s32 i;
    f32 dist;

    o = &D_8011F2F0[arg0];
    data = o->data;
    tr = &D_8018A460[data->owner->id][o->index];
    switch (D_8011F2F0[arg0].state) {
    case 0:
        if (tr->target != -1) {
            f32 dx, dy, dz;
            f32 speed, dot, k, scale;

            Obj *t = &D_8011F2F0[D_8022A770[tr->target].idx];

            dx = t->x - o->x;
            dy = t->y - o->y;
            dz = t->z - o->z;
            dist = sqrtf(dx * dx + dy * dy + dz * dz);
            speed = sqrtf(data->vx * data->vx + data->vy * data->vy + data->vz * data->vz);
            if (dist == 0.0f) {
                dist = 1.0f;
            }
            if (speed == 0.0f) {
                speed = 1.0f;
            }
            dot = (dx * data->vx + dy * data->vy + dz * data->vz) / (dist * speed);
            if (dot > 1.0f) {
                k = 0.2f;
            } else {
                k = 0.2 - dot * 0.15f;
            }
            if (dist < 50.0f) {
                scale = 10.0f / dist;
            } else if (dist < 100.0f) {
                scale = 15.0f / dist;
            } else if (dist < 200.0f) {
                scale = 20.0f / dist;
            } else if (dist < 300.0f) {
                scale = 25.0f / dist;
            } else {
                scale = 30.0f / dist;
            }
            dx *= scale;
            dy *= scale;
            dz *= scale;
            data->vx += (dx - data->vx) * k;
            data->vy += (dy - data->vy) * k * 0.5;
            data->vz += (dz - data->vz) * k;
        } else {
            data->vy -= 0.2f;
        }
        func_80129918(&data->ball, o->x, o->y, o->z, data->vx, data->vy, data->vz);
        o->x = data->ball.x;
        o->y = data->ball.y;
        o->z = data->ball.z;
        for (i = 0; i < 7; i++) {
            tr->x[i] = tr->x[i + 1];
            tr->y[i] = tr->y[i + 1];
            tr->z[i] = tr->z[i + 1];
            tr->yaw[i] = tr->yaw[i + 1];
            tr->roll[i] = tr->roll[i + 1];
            tr->pitch[i] = tr->pitch[i + 1];
        }
        tr->x[7] = o->x;
        tr->y[7] = o->y;
        tr->z[7] = o->z;
        tr->roll[7] = tr->roll[6] + 40.0f;
        if (tr->roll[7] > 359.0f) {
            tr->roll[7] -= 360.0f;
        }
        {
            f32 fx, fy, fz;

            dist = sqrtf(data->vx * data->vx + data->vy * data->vy + data->vz * data->vz);
            if (dist != 0.0f) {
                dist = 1000.0f / dist;
            }
            fx = dist * data->vx;
            fy = dist * data->vy;
            fz = dist * data->vz;
            tr->yaw[7] = func_801F9D8C(fy, fz);
            tr->pitch[7] = -func_801F9D8C(fy, fx);
        }
        if (--data->timer == 0 || o->y < D_80168574[D_8006FB10] || (*(u32 *) &data->ball & 0xFFFF00) || func_8013F050(arg0, data)) {
            func_8015D410(arg0, 0.4f, data->owner, data->owner->kind);
            func_801D7028(arg0, 0x34);
            tr->active = 0;
            data->timer = 7;
            D_8011F2F0[arg0].state = 1;
        }
        break;
    case 1:
        for (i = 0; i < 7; i++) {
            tr->x[i] = tr->x[i + 1];
            tr->y[i] = tr->y[i + 1];
            tr->z[i] = tr->z[i + 1];
            tr->yaw[i] = tr->yaw[i + 1];
            tr->roll[i] = tr->roll[i + 1];
            tr->pitch[i] = tr->pitch[i + 1];
        }
        if (--data->timer == 0) {
            s32 n;

            n = data->owner->flags & 7;
            data->owner->flags &= 0xF8;
            data->owner->flags |= n - 1;
            func_8013E49C(data->id);
            D_8011F2F0[arg0].mode = 2;
        }
        break;
    }
}
