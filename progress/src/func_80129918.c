typedef struct {
    u8 f0;
    u8 f1;
    union { u16 h; struct { u8 f2; u8 f3; } b; } u;
    s16 s4;
    s16 s6;
    f32 x;
    f32 y;
    f32 z;
} Ball;
typedef struct { u8 pad[0x64]; } Obj64;
extern Obj64 D_8011F2F0[];
void func_80127AB0(Ball *, Obj64 *, f32, f32, f32, f32, f32, f32, f32, s32);
u8 func_80129348(s16 *, s16 *, f32, f32, f32);

void func_80129918(Ball *b, f32 x, f32 y, f32 z, f32 argX, f32 argY, f32 argZ)
{
    u8 flags = 0;
    u8 count = 0;
    u8 r;
    f32 px, py, pz;
    f32 vx, vy, vz;

    vx = argX;
    vy = argY;
    vz = argZ;

    r = func_80129348(&b->s4, &b->s6, x, y, z);
    if (r == 0 || r == 2) {
        b->x = vx + b->x;
        b->y = vy + b->y;
        b->z = vz + b->z;
        b->f1 = 0;
        b->u.b.f2 = 0;
        return;
    }
    while (1) {
        func_80127AB0(b, &D_8011F2F0[(u16)b->s4], 12.0f, x, y, z, vx, vy, vz, 1);
        px = b->x;
        py = b->y;
        pz = b->z;
        vx = px - x;
        vy = py - y;
        vz = pz - z;
        flags |= b->f1;
        count += b->u.b.f2;
        if (b->u.h == 1) {
            break;
        }
        if (b->u.b.f3 != 0) {
            continue;
        }
        r = func_80129348(&b->s4, &b->s6, px, py, pz);
        if (r == 0) {
            break;
        }
        if (r != 2) {
            continue;
        }
        func_80127AB0(b, &D_8011F2F0[(u16)b->s4], 12.0f, x, y, z, vx, vy, vz, 1);
        px = b->x;
        py = b->y;
        pz = b->z;
        vx = px - x;
        vy = py - y;
        vz = pz - z;
        flags = b->f1 | flags;
        count = b->u.b.f2 + count;
        if (b->u.b.f2 == 0) {
            break;
        }
        if (b->u.b.f3 == 0) {
            func_80129348(&b->s4, &b->s6, px, py, pz);
        }
    }
    b->f1 = flags;
    b->u.b.f2 = count;
}
