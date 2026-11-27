typedef struct { u8 pad0[2]; u16 h2; u16 h4; u16 h6; u16 h8; u8 padA[3]; u8 count; u8 padE[0xA]; f32 x; f32 y; f32 z; u8 pad24[0x1A]; u16 state; u8 pad40[4]; f32 f44; f32 f48; f32 f4C; u8 pad50[0x10]; struct Data *data; } Obj;
typedef struct { u8 f0; u8 f1; u8 f2; u8 f3; s16 s4; s16 s6; f32 x; f32 y; f32 z; } Ball;
typedef struct Data { u8 pad0[8]; f32 vx; f32 vy; f32 vz; s16 timer; u8 pad16[6]; Ball ball; u8 pad30[0x46]; u16 id; } Data;
extern Obj D_8011F2F0[];
extern u8 D_8018A448;
extern u8 sprayDef[];
extern void func_80142894();
u16 objCreate(s32, s32, s32, s32, s32, s32, void *, void *, void *, f32, f32, f32, s32, s32, s32, f32, f32, f32);
void ballMoveCollide(Ball *, f32, f32, f32, f32, f32, f32);
s32 func_8013E49C(u16);
void liftPushCars(s32, void *);
u32 nextRandom(void);

/* Per-frame state machine for a bouncing ball: falls and collides, spawns a ring of sparks on each impact, then waits and releases the ball. */ void updateBouncingBall(u16 ballId)
{
    Data *data;
    Obj *obj;
    s32 i;

    data = D_8011F2F0[ballId].data;
    obj = &D_8011F2F0[ballId];
    switch (D_8011F2F0[ballId].state) {
    case 0:
        data->vy -= 0.1f;
        ballMoveCollide(&data->ball, obj->x, obj->y, obj->z, data->vx, data->vy, data->vz);
        obj->x = data->ball.x;
        obj->y = data->ball.y;
        obj->z = data->ball.z;
        if (data->ball.f2 != 0) {
            for (i = 0; i < 5; i++) {
                u16 sparkId;

                sparkId = objCreate(0, 0, 1, 0, 0x5B, (u8) (i * 10 - 0x80), sprayDef, func_80142894, 0, obj->x, obj->y, obj->z, 0, 0, 0, 3.0f, 3.0f, 3.0f);
                if ((u16) (sparkId + 2) >= 2U) {
                    Obj *spark = &D_8011F2F0[sparkId];

                    spark->h2 = spark->h4 = spark->h6 = spark->h8 = 0x40;
                    spark->f44 = (nextRandom() & 0x1F) - 16.0f;
                    spark->f48 = nextRandom() & 0xF;
                    spark->f4C = (nextRandom() & 0x1F) - 16.0f;
                }
            }
            data->vy = 0.0f;
            D_8011F2F0[ballId].state = 1;
        }
        break;
    case 1:
        data->vx += 0.000424f;
        data->vy -= 0.1f;
        data->vz -= 0.00993f;
        ballMoveCollide(&data->ball, obj->x, obj->y, obj->z, data->vx, data->vy, data->vz);
        obj->x = data->ball.x;
        obj->y = data->ball.y;
        obj->z = data->ball.z;
        if (--data->timer == 0) {
            for (i = 0; i < 5; i++) {
                u16 sparkId;

                sparkId = objCreate(0, 0, 1, 0, 0x5B, (u8) (i * 10 - 0x80), sprayDef, func_80142894, 0, obj->x, obj->y, obj->z, 0, 0, 0, 3.0f, 3.0f, 3.0f);
                if ((u16) (sparkId + 2) >= 2U) {
                    Obj *spark = &D_8011F2F0[sparkId];

                    spark->h2 = spark->h4 = spark->h6 = spark->h8 = 0x40;
                    spark->f44 = (nextRandom() & 0x1F) - 16.0f;
                    spark->f48 = nextRandom() & 0xF;
                    spark->f4C = (nextRandom() & 0x1F) - 16.0f;
                }
            }
            data->timer = 0x28;
            D_8011F2F0[ballId].state = 2;
        }
        break;
    case 2:
        if (--data->timer == 0) {
            data->timer = 0xF0;
            D_8011F2F0[ballId].state = 3;
        }
        break;
    case 3:
        obj->y -= 0.15f;
        if (--data->timer == 0) {
            func_8013E49C(data->id);
            D_8011F2F0[ballId].count = 2;
            D_8018A448--;
        }
        break;
    }
    liftPushCars(ballId, data);
}
