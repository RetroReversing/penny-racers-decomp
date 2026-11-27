typedef struct { u8 pad0[0xC]; u8 alpha; u8 padD[0xB]; f32 x; f32 y; f32 z; u8 pad24[0xC]; f32 sx; f32 sy; f32 sz; u8 pad3C[2]; u16 state; u16 idx; u8 pad42[2]; f32 vy; u8 pad48[4]; f32 acc; u8 pad50[0x10]; u8 *link; } Rec;
typedef struct { u8 pad0[0xC]; f32 base; u16 timer; u8 pad12[0x4A]; } Ent;
typedef struct { u16 rec; u8 pad[0x8EE]; } CarA;
typedef struct { f32 size; u8 pad[0x8EC]; } CarB;
typedef struct { u8 pad[0x67]; u8 f[7]; } Link;
extern Rec D_8011F2F0[];
extern Ent D_801688C4[];
extern CarA D_8022A772[];
extern CarB D_8022AEE4[];
extern float sqrtf(float);
void func_80143250(u16, f32, f32, f32, f32, f32, s32, s32, s32, s32);
void func_801D7028(u16, s32);
u8 func_8013F1D4(u16, u8 *);

void func_80142C6C(u16 id) {
    Rec *r;
    Ent *e;
    Rec *o;
    u8 *link;
    u8 hit;
    s32 i;
    f32 dx;
    f32 dy;
    f32 dz;

    r = &D_8011F2F0[id];
    link = r->link;
    e = &D_801688C4[r->idx];
    hit = 0;
    for (i = 0; i < 7; i++) {
        if (D_8022A772[i].rec != 0xFFFF) {
            o = &D_8011F2F0[D_8022A772[i].rec];
            dx = o->x - r->x;
            dy = o->y - r->y;
            dz = o->z - r->z;
            if (sqrtf(dx * dx + dy * dy + dz * dz) < D_8022AEE4[i].size * 80.0f * 0.05f + 160.0f) {
                hit = 1;
            }
        }
    }
    switch (D_8011F2F0[id].state) {
    case 0:
        r->sy = r->sz = r->sx = (1.0f - r->sx) * 0.01f + r->sx;
        if (0.99f < r->sx) {
        if (hit) {
            r->acc = 0.0f;
            r->vy = 0.0f;
            e->timer = 0x5F;
            D_8011F2F0[id].state = 1;
            func_80143250(id, 0.0f, 6.0f, 1.0f, 43.0f, 0.0f, 8, 1, 0xFF, 0);
            func_801D7028(id, 0x27);
        }
        }
        break;
    case 1:
        r->acc += 0.001f;
        r->vy -= r->acc;
        r->y += r->vy;
        if (--e->timer == 0) {
            e->timer = 4;
            D_8011F2F0[id].state = 2;
            func_801D7028(id, 0x34);
        }
        if ((e->timer & 3) == 0 && e->timer < 0x19) {
            func_80143250(id, (e->timer & 7) * 2, 6.0f, 2.0f, (0x64 - e->timer) * 0.5f, e->timer * 3, 4, 1, 0xFF, 1);
        }
        if (func_8013F1D4(id, link)) {
            for (i = 0; i < 7; i++) {
                ((Link *)link)->f[i] = 0;
            }
        }
        break;
    case 2:
        r->vy *= 0.7f;
        r->y += r->vy;
        if (--e->timer == 0) {
            e->timer = 0x64;
            D_8011F2F0[id].state = 3;
        }
        if (func_8013F1D4(id, link)) {
            for (i = 0; i < 7; i++) {
                ((Link *)link)->f[i] = 0;
            }
        }
        break;
    case 3:
        r->vy *= 0.95f;
        r->y += r->vy;
        if (--e->timer == 0) {
            D_8011F2F0[id].state = 4;
        }
        break;
    case 4:
        r->vy = 0.0f;
        r->alpha -= 10;
        if (r->alpha < 0xB) {
            r->sx = r->sy = r->sz = 0.01f;
            r->alpha = 0xFF;
            r->y = e->base;
            e->timer = 0x64;
            D_8011F2F0[id].state = 0;
        }
        break;
    }
}
