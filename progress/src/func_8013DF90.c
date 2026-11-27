typedef struct {
    /* 0x00 */ u16 pad0;
    u16 id;
    u16 pad4;
    u16 flags;
    u8 pad8[0x560 - 8];
    u16 state;
    u8 pad562[0x597 - 0x562];
    u8 zone;
    u8 pad598[0x8F0 - 0x598];
} Car;
typedef struct {
    u8 pad0[0x18];
    f32 x, y, z;
    u8 pad24[0x64 - 0x24];
} Obj;
typedef struct {
    u16 id;
    u16 pad2;
    f32 x, y, z;
} Point;
extern u16 D_8006FAF0[];
extern Obj D_8011F2F0[];
extern Point *D_801687EC[];
extern Car sCars[];
extern f32 sqrtf(f32);
extern void func_8015E8E4(Car *);

void func_8013DF90(void)
{
    Point *points;
    Point *p;
    Obj *obj;
    f32 dx;
    f32 dy;
    f32 dz;
    u16 i;

    points = D_801687EC[D_8006FAF0[0x10]];
    if (points != 0) {
        for (i = 0; i < 7; i++) {
            if (sCars[i].id != 0xFFFF && !(sCars[i].state & 0x18)) {
                obj = &D_8011F2F0[sCars[i].id];
                for (p = points; p->x != 0.0f; p++) {
                    if (sCars[i].zone == p->id) {
                        dx = obj->x - p->x;
                        dy = obj->y - p->y;
                        dz = obj->z - p->z;
                        if (sqrtf(dx * dx + dy * dy + dz * dz) < 26.0f) {
                            func_8015E8E4(&sCars[i]);
                            sCars[i].flags |= 4;
                        }
                    }
                }
            }
        }
    }
}
