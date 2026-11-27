typedef struct { u8 pad0[2]; u16 h2; u16 h4; u16 h6; u16 h8; u8 padA[3]; u8 count; u8 padE[0xA]; f32 x; f32 y; f32 z; u8 pad24[0x1A]; u16 state; u8 pad40[4]; f32 f44; f32 f48; f32 f4C; u8 pad50[0x10]; struct Data *data; } Obj;
typedef struct { u8 f0; u8 f1; u8 f2; u8 f3; s16 s4; s16 s6; f32 x; f32 y; f32 z; } Ball;
typedef struct Data { u8 pad0[8]; f32 vx; f32 vy; f32 vz; s16 timer; u8 pad16[6]; Ball ball; u8 pad30[0x46]; u16 id; } Data;
extern Obj D_8011F2F0[];
extern u8 D_8018A448;
extern u8 D_8023936C[];
extern void func_80142894();
u16 func_800DE41C(s32, s32, s32, s32, s32, s32, void *, void *, void *, f32, f32, f32, s32, s32, s32, f32, f32, f32);
void func_80129918(Ball *, f32, f32, f32, f32, f32, f32);
s32 func_8013E49C(u16);
void func_8013F44C(s32, void *);
u32 func_801FA30C(void);
void func_80142288(u16 arg0)
{
    Data *data;
    Obj *o;
    s32 i;

    data = D_8011F2F0[arg0].data;
    o = &D_8011F2F0[arg0];
    switch (D_8011F2F0[arg0].state) {
    case 0:
        data->vy -= 0.1f;
        func_80129918(&data->ball, o->x, o->y, o->z, data->vx, data->vy, data->vz);
        o->x = data->ball.x;
        o->y = data->ball.y;
        o->z = data->ball.z;
        if (data->ball.f2 != 0) {
            for (i = 0; i < 5; i++) {
                u16 e;

                e = func_800DE41C(0, 0, 1, 0, 0x5B, (u8) (i * 10 - 0x80), D_8023936C, func_80142894, 0, o->x, o->y, o->z, 0, 0, 0, 3.0f, 3.0f, 3.0f);
                if ((u16) (e + 2) >= 2U) {
                    Obj *p = &D_8011F2F0[e];

                    p->h2 = p->h4 = p->h6 = p->h8 = 0x40;
                    p->f44 = (func_801FA30C() & 0x1F) - 16.0f;
                    p->f48 = func_801FA30C() & 0xF;
                    p->f4C = (func_801FA30C() & 0x1F) - 16.0f;
                }
            }
            data->vy = 0.0f;
            D_8011F2F0[arg0].state = 1;
        }
        break;
    case 1:
        data->vx += 0.000424f;
        data->vy -= 0.1f;
        data->vz -= 0.00993f;
        func_80129918(&data->ball, o->x, o->y, o->z, data->vx, data->vy, data->vz);
        o->x = data->ball.x;
        o->y = data->ball.y;
        o->z = data->ball.z;
        if (--data->timer == 0) {
            for (i = 0; i < 5; i++) {
                u16 e;

                e = func_800DE41C(0, 0, 1, 0, 0x5B, (u8) (i * 10 - 0x80), D_8023936C, func_80142894, 0, o->x, o->y, o->z, 0, 0, 0, 3.0f, 3.0f, 3.0f);
                if ((u16) (e + 2) >= 2U) {
                    Obj *p = &D_8011F2F0[e];

                    p->h2 = p->h4 = p->h6 = p->h8 = 0x40;
                    p->f44 = (func_801FA30C() & 0x1F) - 16.0f;
                    p->f48 = func_801FA30C() & 0xF;
                    p->f4C = (func_801FA30C() & 0x1F) - 16.0f;
                }
            }
            data->timer = 0x28;
            D_8011F2F0[arg0].state = 2;
        }
        break;
    case 2:
        if (--data->timer == 0) {
            data->timer = 0xF0;
            D_8011F2F0[arg0].state = 3;
        }
        break;
    case 3:
        o->y -= 0.15f;
        if (--data->timer == 0) {
            func_8013E49C(data->id);
            D_8011F2F0[arg0].count = 2;
            D_8018A448--;
        }
        break;
    }
    func_8013F44C(arg0, data);
}
