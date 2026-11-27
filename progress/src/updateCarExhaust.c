typedef struct {
    u8 pad0[2];
    u16 h2;
    u8 pad4[0x55A];
    s16 h55E;
    u8 pad560[0x174];
    f32 mtx[4][4];
    u8 pad714[0xAC];
    f32 x7C0;
    f32 y7C4;
    f32 z7C8;
} Car8015F7F8;
typedef struct {
    u8 pad0[4];
    Car8015F7F8 *car;
    u8 pad8[0xC];
    s16 timer;
    u8 pad16[0x60];
    u16 h76;
} Ctx8015F7F8;
typedef struct {
    u8 pad0[0xC];
} Entry8015F7F8;
typedef struct {
    u32 pad0;
    Entry8015F7F8 *entry;
} Node8015F7F8;
typedef struct {
    u8 pad0[2];
    s16 h2;
    s16 h4;
    s16 h6;
    s16 h8;
    u8 padA[2];
    u8 fC;
    u8 fD;
    u8 padE[0xA];
    f32 x;
    f32 y;
    f32 z;
    u8 pad24[0xC];
    f32 sx;
    f32 sy;
    u8 pad38[0xC];
    f32 vx;
    f32 vy;
    f32 vz;
    Node8015F7F8 *node;
    u8 pad54[0xC];
    Ctx8015F7F8 *ctx;
} Obj8015F7F8;
extern Obj8015F7F8 D_8011F2F0[];
extern u8 D_80182E30[];
extern Entry8015F7F8 D_80238C24[];
extern u8 D_802390C8[];
void func_8015FE60(void);
void func_80164218(void);
s16 objCreate(s32, s32, s32, s32, s32, s32, void *, void *, void *, f32, f32, f32, f32, f32, f32, f32, f32, f32);
s32 nextRandom(void);
void guMtxXFMF(void *, f32, f32, f32, f32 *, f32 *, f32 *);
s32 func_8013E49C(u16);

/* Moves the exhaust emitter with its car and, when its timer runs out, spawns smoke particles that inherit the car's velocity. */ void updateCarExhaust(u16 objIndex) {
    f32 x;
    f32 y;
    f32 z;
    Obj8015F7F8 *obj;
    Node8015F7F8 *node;
    Ctx8015F7F8 *ctx;
    Obj8015F7F8 *owner;
    Obj8015F7F8 *particle;
    s32 i;
    s16 partId;

    obj = &D_8011F2F0[objIndex];
    node = obj->node;
    ctx = obj->ctx;
    owner = &D_8011F2F0[ctx->car->h2];
    obj->fC = 0xFF;
    if (obj->vx > 0.0f) {
        obj->vx -= 1.0f;
        node->entry = &D_80238C24[D_80182E30[ctx->timer & 0xF]];
    } else {
        node->entry = D_80238C24;
        obj->sx = obj->sy = (ctx->timer & 1) * 0.3f + 1.0f;
    }
    guMtxXFMF(ctx->car->mtx, 0.0f, 35.0f, -50.0f, &x, &y, &z);
    obj->x = owner->x + x;
    obj->y = owner->y + y;
    obj->z = owner->z + z;
    if (--ctx->timer == 0) {
        func_8013E49C(ctx->h76);
        D_8011F2F0[objIndex].fD = 2;
        if (obj->vy > 0.0f) {
            if (ctx->car->h55E == 0) {
                for (i = 0; i < 5; i++) {
                    partId = objCreate(0, 0, 1, 0, 0x5B, 0xFA, D_802390C8, func_80164218, func_8015FE60,
                                       x + obj->x, y + obj->y, z + obj->z, 0.0f, 0.0f, 0.0f, 0.08f, 0.08f, 0.08f);
                    if (partId != -1 && partId != -2) {
                        particle = &D_8011F2F0[(u16) partId];
                        particle->h2 = particle->h4 = particle->h6 = particle->h8 = 0x40;
                        particle->vx = ctx->car->x7C0 + ((nextRandom() & 0x10U) - 8.0f) * 0.2f;
                        particle->vy = ctx->car->y7C4 + ((nextRandom() & 0x10U) - 8.0f) * 0.2f;
                        particle->vz = ctx->car->z7C8 + ((nextRandom() & 0x10U) - 8.0f) * 0.2f;
                    }
                }
            } else {
                partId = objCreate(0, 0, 1, 0, 0x5B, 0xFA, D_802390C8, func_80164218, func_8015FE60,
                                   x + obj->x, y + obj->y, z + obj->z, 0.0f, 0.0f, 0.0f, 0.08f, 0.08f, 0.08f);
                if (partId != -1 && partId != -2) {
                    particle = &D_8011F2F0[(u16) partId];
                    particle->h2 = particle->h4 = particle->h6 = particle->h8 = 0x40;
                    particle->vx = ctx->car->x7C0;
                    particle->vy = ctx->car->y7C4;
                    particle->vz = ctx->car->z7C8;
                }
            }
        }
    }
}
