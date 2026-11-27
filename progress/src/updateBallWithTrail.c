typedef struct { f32 x, y, z; } Vec1818;
typedef struct {
    u8 pad0[8];
    Vec1818 vel;
    s16 timer;
    u8 pad16[6];
    u8 unk1C[8];
    Vec1818 pos;
    u8 pad30[0x46];
    u16 unk76;
} Extra1818;
typedef struct {
    u16 f0;
    s16 f2, f4, f6, f8;
    u8 padA[3];
    u8 fD;
    u8 padE[0xA];
    Vec1818 pos;
    u8 pad24[0x20];
    Vec1818 vel;
    u8 pad50[0x10];
    Extra1818 *extra;
} Obj1818;
extern Obj1818 D_8011F2F0[];
extern s32 sCars;
extern s32 D_80239818;
extern void updateSmokePuff(s32);
extern void drawSmokePuff(u32 **, s32);
s32 objCreate(s32, s32, s32, s32, s32, s32, s32 *, void *, void *, f32, f32, f32, s32, s32, s32, f32, f32, f32);
s32 ballMoveCollide(void *, f32, f32, f32, f32, f32, f32);
s32 spawnCameraFly(s32, s32, s32 *, s32);
s32 queueObjEvent(s32, s32);
s32 func_8013E49C(u16);

/* Moves a ball with gravity and ground bounce, spawns a smoke puff every fourth frame, and releases its node chain when the trail timer runs out. */ void updateBallWithTrail(u16 objIndex)
{
    Extra1818 *trail;
    Obj1818 *obj;
    s32 puffIndex;

    trail = D_8011F2F0[objIndex].extra;
    obj = &D_8011F2F0[objIndex];
    trail->vel.y += obj->vel.y;
    if (trail->vel.y < 0.0f && obj->pos.y + trail->vel.y < 0.0f) {
        ballMoveCollide(trail->unk1C, obj->pos.x, obj->pos.y, obj->pos.z, trail->vel.x, trail->vel.y, trail->vel.z);
        obj->pos.x = trail->pos.x;
        obj->pos.y = trail->pos.y;
        obj->pos.z = trail->pos.z;
    } else {
        obj->pos.x += trail->vel.x;
        obj->pos.y += trail->vel.y;
        obj->pos.z += trail->vel.z;
    }
    if (!(trail->timer & 3)) {
        puffIndex = objCreate(0, 0, 1, 0, 0x5B, 0xC8, &D_80239818, updateSmokePuff, drawSmokePuff, obj->pos.x, obj->pos.y, obj->pos.z, 0, 0, 0, 5.0f, 5.0f, 5.0f);
        if ((u16)(puffIndex + 2) >= 2) {
            Obj1818 *puff = &D_8011F2F0[(u16)puffIndex];
            puff->f2 = puff->f4 = puff->f6 = puff->f8 = 0x40;
            puff->vel.x = -trail->vel.x * 0.5f;
            puff->vel.y = -trail->vel.y * 0.5f;
            puff->vel.z = -trail->vel.z * 0.5f;
        }
    }
    trail->timer--;
    if (trail->timer == 0) {
        func_8013E49C(trail->unk76);
        D_8011F2F0[objIndex].fD = 2;
        if (obj->vel.x == 1.0f) {
            queueObjEvent(objIndex, 0x34);
            spawnCameraFly(objIndex, 0x3E99999A, &sCars, 0);
        }
    }
}
