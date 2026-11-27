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
extern void func_80141AD8(s32);
extern void func_80141BC4(u32 **, s32);
s32 objCreate(s32, s32, s32, s32, s32, s32, s32 *, void *, void *, f32, f32, f32, s32, s32, s32, f32, f32, f32);
s32 ballMoveCollide(void *, f32, f32, f32, f32, f32, f32);
s32 spawnCameraFly(s32, s32, s32 *, s32);
s32 queueObjEvent(s32, s32);
s32 func_8013E49C(u16);

void func_80141818(u16 arg0)
{
    Extra1818 *e;
    Obj1818 *o;
    s32 idx;

    e = D_8011F2F0[arg0].extra;
    o = &D_8011F2F0[arg0];
    e->vel.y += o->vel.y;
    if (e->vel.y < 0.0f && o->pos.y + e->vel.y < 0.0f) {
        ballMoveCollide(e->unk1C, o->pos.x, o->pos.y, o->pos.z, e->vel.x, e->vel.y, e->vel.z);
        o->pos.x = e->pos.x;
        o->pos.y = e->pos.y;
        o->pos.z = e->pos.z;
    } else {
        o->pos.x += e->vel.x;
        o->pos.y += e->vel.y;
        o->pos.z += e->vel.z;
    }
    if (!(e->timer & 3)) {
        idx = objCreate(0, 0, 1, 0, 0x5B, 0xC8, &D_80239818, func_80141AD8, func_80141BC4, o->pos.x, o->pos.y, o->pos.z, 0, 0, 0, 5.0f, 5.0f, 5.0f);
        if ((u16)(idx + 2) >= 2) {
            Obj1818 *p = &D_8011F2F0[(u16)idx];
            p->f2 = p->f4 = p->f6 = p->f8 = 0x40;
            p->vel.x = -e->vel.x * 0.5f;
            p->vel.y = -e->vel.y * 0.5f;
            p->vel.z = -e->vel.z * 0.5f;
        }
    }
    e->timer--;
    if (e->timer == 0) {
        func_8013E49C(e->unk76);
        D_8011F2F0[arg0].fD = 2;
        if (o->vel.x == 1.0f) {
            queueObjEvent(arg0, 0x34);
            spawnCameraFly(arg0, 0x3E99999A, &sCars, 0);
        }
    }
}
