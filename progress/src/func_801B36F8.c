typedef struct { u8 pad0[0x18]; f32 pos[3]; u8 pad24[0x20]; f32 vel[3]; u8 pad50[0x14]; } Obj;
typedef struct { u8 pad0; u8 y; s8 x; s8 z; s8 tex; } Point;
typedef struct { u8 a; u8 b; u8 pad2[2]; void *tex; u16 prev; u16 next; u16 c; u16 e; } Link;
typedef struct { u8 pad0[2]; u8 count; } Info;
typedef struct { u32 w0; u32 w1; } Tex;
typedef struct Def Def;
extern Obj D_8011F2F0[];
extern Link D_802330B0[];
extern Tex D_8031445C[];
extern Info *D_801C7AB0;
extern u16 D_80233EC0;
u16 func_800DE41C(u8, u8, u8, u16, u8, u8, Def *, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32);

void func_801B36F8(Point *p) {
    u16 first;
    u16 id;
    u16 i;

    i = 0;
    D_802330B0[i].a = 0;
    D_802330B0[i].b = 1;
    D_802330B0[i].tex = &D_8031445C[p[0].tex];
    first = func_800DE41C(0, 0, 2, 0, 0x51, 0xFF, (Def *) &D_802330B0[i], 0, 0, (f32) p[0].x * 400.0f + 400.0f, (f32) p[0].y, (f32) p[0].z * 400.0f + 400.0f, 0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1.0f);
    D_80233EC0 = first;
    D_802330B0[i].prev = D_801C7AB0->count + (u16) (first - 1);
    D_802330B0[i].next = first + 1;
    D_802330B0[i].c = 0xFFFF;
    D_802330B0[i].e = 0xFFFF;
    D_8011F2F0[first].vel[0] = D_8011F2F0[first].pos[0];
    D_8011F2F0[first].vel[1] = D_8011F2F0[first].pos[1];
    D_8011F2F0[first].vel[2] = D_8011F2F0[first].pos[2];
    for (i = 1; i < D_801C7AB0->count - 1; i++) {
    D_802330B0[i].a = 0;
    D_802330B0[i].b = 1;
    D_802330B0[i].tex = &D_8031445C[p[i].tex];
    id = func_800DE41C(0, 0, 2, 0, 0x51, 0xFF, (Def *) &D_802330B0[i], 0, 0, (f32) p[i].x * 400.0f + 400.0f, (f32) p[i].y, (f32) p[i].z * 400.0f + 400.0f, 0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1.0f);
    D_802330B0[i].prev = i + (u16) (first - 1);
    D_802330B0[i].next = i + (u16) (first + 1);
    D_802330B0[i].c = 0xFFFF;
    D_802330B0[i].e = 0xFFFF;
    D_8011F2F0[id].vel[0] = D_8011F2F0[id].pos[0];
    D_8011F2F0[id].vel[1] = D_8011F2F0[id].pos[1];
    D_8011F2F0[id].vel[2] = D_8011F2F0[id].pos[2];
    }
    D_802330B0[i].a = 0;
    D_802330B0[i].b = 1;
    D_802330B0[i].tex = &D_8031445C[p[i].tex];
    id = func_800DE41C(0, 0, 2, 0, 0x51, 0xFF, (Def *) &D_802330B0[i], 0, 0, (f32) p[i].x * 400.0f + 400.0f, (f32) p[i].y, (f32) p[i].z * 400.0f + 400.0f, 0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1.0f);
    D_802330B0[i].prev = D_801C7AB0->count + (u16) (first - 2);
    D_802330B0[i].next = first;
    D_802330B0[i].c = 0xFFFF;
    D_802330B0[i].e = 0xFFFF;
    D_8011F2F0[id].vel[0] = D_8011F2F0[id].pos[0];
    D_8011F2F0[id].vel[1] = D_8011F2F0[id].pos[1];
    D_8011F2F0[id].vel[2] = D_8011F2F0[id].pos[2];
}
