typedef struct {
    u8 unk0;
    u8 hitFlags;
    union { u16 h; struct { u8 bounces; u8 unk3; } b; } u;
    s16 s4;
    s16 s6;
    f32 x;
    f32 y;
    f32 z;
} Ball;

typedef struct {
    u8 pad0[8];
    f32 vx;
    f32 vy;
    f32 vz;
    u8 pad14[8];
    Ball ball;
    u8 pad30[0x46];
    u16 chainHead;
} BallInfo;

typedef struct {
    u8 pad0[0xD];
    u8 state;
    u8 padE[0xA];
    f32 x;
    f32 y;
    f32 z;
    u8 pad24[0x20];
    f32 partnerIdx;
    u8 pad48[8];
    u8 *activeFlag;
    u8 pad54[0xC];
    BallInfo *info;
} BallObj;

extern BallObj D_8011F2F0[];
s32 func_8013E49C(u16 arg0);
void ballMoveCollide(void *, f32, f32, f32, s32, f32, s32);
void liftPushCars(s32, void *);
void queueObjEvent(s32, s16);

/* Advances one ball object while it is active: applies gravity and velocity, moves it through track collision, plays the bounce event, resets it when it falls below the track, and pushes nearby cars. */
void updateBall(s32 objIndex)
{
    s32 idx = objIndex & 0xFFFF;
    BallInfo *info;
    BallObj *obj;

    if (*D_8011F2F0[idx].activeFlag == 0) {
        info = D_8011F2F0[idx].info;
        obj = &D_8011F2F0[idx];
        info->vy -= 0.2f;
        obj->x += info->vx;
        obj->z += info->vz;
        ballMoveCollide(&info->ball, obj->x, obj->y, obj->z, 0, info->vy, 0);
        obj->y = info->ball.y;
        if (info->ball.u.b.bounces != 0) {
            queueObjEvent(idx, 0x19);
            info->vy *= -0.7f;
        }
        if (obj->y < -200.0f) {
            func_8013E49C(info->chainHead);
            D_8011F2F0[objIndex & 0xFFFF].state = 2;
            D_8011F2F0[(u16) (u32) obj->partnerIdx].state = 2;
        }
        liftPushCars(objIndex & 0xFFFF, info);
    }
}
