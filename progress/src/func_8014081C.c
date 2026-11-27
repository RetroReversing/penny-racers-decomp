typedef struct { u8 pad0[0xC]; f32 vy; } Dummy;
typedef struct {
    s32 f0;
    u8 pad4[2];
    u8 f6;
    u8 pad7[5];
    f32 fC;
} Sub1C;
typedef struct {
    u8 pad0[8];
    f32 vx;
    f32 vy;
    f32 vz;
    u8 pad14[8];
    u8 sub[2];
    u8 hit;
    u8 pad1F[9];
    f32 ground;
    u8 pad2C[0x4A];
    u16 f76;
} Info;
typedef struct {
    u8 pad0[0xD];
    u8 state;
    u8 padE[0xA];
    f32 x;
    f32 y;
    f32 z;
    u8 pad24[0x20];
    f32 f44;
    u8 pad48[8];
    u8 *f50;
    u8 pad54[0xC];
    Info *info;
} Obj;
extern Obj D_8011F2F0[];
void ballMoveCollide(void *, f32, f32, f32, s32, f32, s32);
void liftPushCars(s32, void *);
void queueObjEvent(s32, s16);

void func_8014081C(s32 arg0)
{
    s32 idx = arg0 & 0xFFFF;
    Info *info;
    Obj *obj;

    if (*D_8011F2F0[idx].f50 == 0) {
        info = D_8011F2F0[idx].info;
        obj = &D_8011F2F0[idx];
        info->vy -= 0.2f;
        obj->x += info->vx;
        obj->z += info->vz;
        ballMoveCollide(info->sub, obj->x, obj->y, obj->z, 0, info->vy, 0);
        obj->y = info->ground;
        if (info->hit != 0) {
            queueObjEvent(idx, 0x19);
            info->vy *= -0.7f;
        }
        if (obj->y < -200.0f) {
            func_8013E49C(info->f76);
            D_8011F2F0[arg0 & 0xFFFF].state = 2;
            D_8011F2F0[(u16) (u32) obj->f44].state = 2;
        }
        liftPushCars(arg0 & 0xFFFF, info);
    }
}
