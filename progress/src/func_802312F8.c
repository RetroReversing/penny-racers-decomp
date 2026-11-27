typedef struct { s32 w[13]; } Rec;
typedef struct { u8 pad0[8]; Rec rec[8]; u8 pad1A8[0x748]; } Car;
typedef struct { f32 a; f32 b; u8 c; u8 d; u8 pad[2]; } Part;
typedef struct { u8 pad0[0x20]; u16 id; } Snd;
typedef struct { u8 pad0[4]; u8 x4; } Cfg;
typedef struct { u8 type; u8 idx; u8 pad2[0x1A]; f32 val; } Ev;
typedef struct { u8 a; s8 b; u8 pad[2]; f32 p0[8]; f32 p1[8]; f32 p2[8]; f32 p3[8]; f32 p4[8]; f32 p5[8]; } Trail;
typedef struct { f32 x; f32 y; u8 pad8[0x20]; f32 dx; f32 dy; u8 pad30[0x3C]; } Node;
extern Snd D_8006FAF0;
extern Car D_8022A770[];
extern Rec D_80238EC0[];
extern Part D_80229B20[];
extern Cfg D_8006FB14;
extern u8 D_80236F58[];
extern f32 D_80237070[];
extern Ev *D_80236EA0[];
extern Trail D_8018A460[7][3];
extern char D_80232EC0[], D_80232EDC[], D_80232F08[], D_80232F2C[];
extern Node *D_802CBEE0[];
extern u8 D_802352F4[];
extern u8 *D_802352CC[];
extern f32 D_80235C60[];
extern f32 D_80235300[];
extern f32 D_80235620[];
extern f32 D_80235940[];
void func_8022132C(Car *);
void func_8013E188(void);
s32 func_801F9D8C(s32, s32);
void func_8003DE60();
f32 sqrtf(f32);

void func_802312F8(void) {
    s32 count;
    s32 i;
    s32 j;
    s32 k;
    s32 idx;
    Ev *ev;
    Trail *t;
    Node *nodes;
    Node *p;
    Node *q;
    s32 a;
    s32 b;
    f32 dx;
    f32 dy;

    switch (D_8006FAF0.id) {
    case 1:
        count = 0x6E;
        break;
    case 2:
        count = 0xB3;
        break;
    case 3:
        count = 0xA9;
        break;
    case 4:
        count = 0x45;
        break;
    case 5:
        count = 0x69;
        break;
    case 6:
        count = 0xE1;
        break;
    case 7:
        count = 0x4C;
        break;
    case 8:
        count = 0x6B;
        break;
    case 9:
        count = 0xB4;
        break;
    }
    for (j = 0; j < 7; j++) {
        for (i = 0; i < 8; i++) {
            D_8022A770[j].rec[i] = D_80238EC0[i];
        }
    }
    for (i = 0; i < 7; i++) {
        func_8022132C(&D_8022A770[i]);
    }
    for (i = 0; i < 0x100; i++) {
        D_80229B20[i].a = 50.0f;
        D_80229B20[i].b = 60.0f;
        D_80229B20[i].c = 0;
        D_80229B20[i].d = 2;
    }
    D_8006FB14.x4 = 0;
    func_8013E188();
    for (i = 0; i < count; i++) {
        D_80236F58[i] = 0;
        D_80237070[i] = -10000.0f;
    }
    ev = D_80236EA0[D_8006FAF0.id];
    while (ev->type != 0) {
        switch (ev->type) {
        case 1:
            D_80237070[ev->idx] = ev->val;
            break;
        case 2:
            D_80236F58[ev->idx] = 1;
            break;
        }
        ev++;
    }
    for (i = 0; i < 7; i++) {
        for (j = 0; j < 3; j++) {
            t = &D_8018A460[i][j];
            t->a = 0;
            t->b = -1;
            for (k = 0; k < 8; k++) {
                t->p0[k] = t->p1[k] = t->p2[k] = 0.0f;
                t->p3[k] = t->p4[k] = t->p5[k] = 0.0f;
            }
        }
    }
    func_8003DE60(D_80232EC0);
    func_8003DE60(D_80232EDC);
    nodes = D_802CBEE0[D_8006FAF0.id];
    for (i = 0; i < D_802352F4[D_8006FAF0.id] + 1; i++) {
        a = D_802352CC[D_8006FAF0.id][i * 2];
        if (i == 0) {
            b = D_802352CC[D_8006FAF0.id][D_802352F4[D_8006FAF0.id] * 2 - 2];
        } else {
            b = D_802352CC[D_8006FAF0.id][i * 2 - 2];
        }
        p = &nodes[a];
        q = &nodes[b];
        dx = (p->dx * 50.0f + p->x) - (q->dx * 50.0f + q->x);
        dy = (p->dy * 50.0f + p->y) - (q->dy * 50.0f + q->y);
        if ((dx == 0.0f) & (dy == 0.0f)) {
            dx = dy = 1.0f;
        }
        D_80235C60[i] = (u16) func_801F9D8C(dy, dx);
        D_80235300[i] = 100.0f / sqrtf(dx * dx + dy * dy) / (D_802352F4[D_8006FAF0.id] + 1);
        D_80235620[i] = 100.0f / (D_802352F4[D_8006FAF0.id] + 1) * i;
        D_80235940[i] = sqrtf(dx * dx + dy * dy);
        func_8003DE60(D_80232F08, i, D_80235300[i], D_80235620[i], D_80235940[i], D_80235C60[i]);
    }
    func_8003DE60(D_80232F2C);
}
