void func_8012AD20(u16, void *, u8, u8);
s16 func_80149F40(u8, s32, s8);
void func_80230960(void *);

typedef struct { u8 pad[4]; void *anim; } Script;
typedef struct { u8 flag; } Node;
typedef struct {
    u8 pad0[2];
    u16 flags;
    u8 pad4[0x10];
    u16 link;
    u8 pad16[0x12];
    f32 angle;
    u8 pad2C[0x12];
    u16 state;
    u8 pad40[0x10];
    u8 *script;
    u8 pad54[0x10];
} Obj;
typedef struct {
    u8 pad0[2];
    u16 timer;
    u8 pad4[0x22C];
    s16 f230;
    u8 pad232[0x302];
    s16 f534;
    u8 pad536[2];
    s16 f538;
    s16 f53A;
    u8 pad53C[0x3B4];
} Car;
typedef struct { s8 a[0xAA]; s8 b[0x22]; s8 c[0x22]; s8 d[0x22]; } Parts;
typedef struct { u8 pad[0xC]; } Anim;
typedef struct { u8 id; u8 a; u8 pad[4]; u8 b; u8 c; u8 d; } Sel;

extern Obj D_8011F2F0[];
extern Car sCars[];
extern s8 D_8021E231[];
extern s8 D_8021E2DB[];
extern s8 D_8021E2FD[];
extern s8 D_8021E31F[];
extern Sel D_8021EEA7;
extern u8 D_8021F048[][0xE];
extern u8 D_8021F0A0[][0x20];
extern Anim D_80237DC0[];
extern u16 D_8021E120;
extern f64 D_8021DD18;

void func_8020FC20(u16 arg0)
{
    Obj *obj = &D_8011F2F0[arg0];
    Car *car;
    Sel *sel;
    s32 body;
    s32 row;
    u8 unused[0x18];

    switch (obj->state) {
    case 0:
        obj->flags |= 0x8000;
        obj->state = 0x10;
        break;
    case 0x10:
        do { sel = &D_8021EEA7; } while (0);
        car = &sCars[sel->id];
        car->timer = D_8021E120;
        car->f534 = (u8) func_80149F40(sel->id, 5, D_8021E2DB[(row = sel->id * 0x110) + sel->b]);
        car->f538 = (u8) func_80149F40(sel->id, 6, D_8021E2FD[(row = sel->id * 0x110) + sel->c]);
        car->f53A = (u8) func_80149F40(sel->id, 7, D_8021E31F[(row = sel->id * 0x110) + sel->d]);
        car->f230 = D_8021E231[(row = sel->id * 0x110) + sel->a];
        func_80230960(car);
        body = D_8021E231[(row = sel->id * 0x110) + sel->a];
        ((Script *) D_8011F2F0[D_8011F2F0[D_8021E120].link].script)->anim = &D_80237DC0[body];
        func_8012AD20(D_8011F2F0[D_8021E120].link, D_8021F0A0[sel->id], body, D_8021F048[sel->id][body]);
        if (*obj->script == 0) {
            obj->angle -= D_8021DD18;
            if (obj->angle < 0.0f) {
                obj->angle += 360.0f;
            }
        }
        break;
    }
}
