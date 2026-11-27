typedef struct { u8 unk0; u8 h; s8 x; s8 z; s8 type; } Spot;
typedef struct { u8 unk0[0x34]; } Tex;
typedef struct { u8 unk0[4]; u16 flags; u8 unk6[0x5E]; } Obj;
extern Spot trackPoints[];
extern Tex D_80315A10[];
extern u8 D_801680B8[];
extern u8 D_801C6BAC;
extern u8 D_801C5E9D;
extern u8 blockFootprint;
extern u8 D_801C7AB6;
extern u16 D_801C7470[][4];
extern Obj D_8011F2F0[];
extern void func_801C1424();
extern void func_801C10FC();
extern void updateWaveVertices();
extern void func_801C1680();
extern s16 objCreate(s32, s32, s32, s32, s32, s32, void *, void *, void *,
                         f32, f32, f32, f32, f32, f32, f32, f32, f32);

#define POS(dx, dy, dz) (x + (dx)) * 0.5f, (y + (dy)) * 0.5f, (z + (dz)) * 0.5f

void func_801BFA1C(u8 arg0, u8 arg1)
{
    u16 ids[4];
    u8 i;
    s8 type;
    f32 x;
    f32 y;
    f32 z;

    for (i = 0; i < 4; i++) {
        ids[i] = 0xFFFF;
    }
    type = trackPoints[arg0].type;
    x = trackPoints[arg0].x * 400.0f;
    y = trackPoints[arg0].h;
    z = trackPoints[arg0].z * 400.0f;
    D_801C6BAC = 1;
if (D_801C5E9D == 5) {
if (type == 0 || type == 0x2E) {
if (blockFootprint == 1) {
ids[0] = objCreate(0, arg0, 1, 0x80, 0x5B, 0xFF, &D_80315A10[0], 0, 0,
    POS(-196.0f, 0.0f, 116.0f), 0.0f, 0.0f, 0.0f, 0.5f, 0.5f, 0.5f);
ids[1] = objCreate(0, arg0, 1, 0x80, 0x5B, 0xFF, &D_80315A10[0], 0, 0,
    POS(-196.0f, 0.0f, -116.0f), 0.0f, 0.0f, 0.0f, 0.5f, 0.5f, 0.5f);
ids[2] = objCreate(0, arg0, 1, 0, 0x5B, 0xFF, &D_80315A10[1], 0, 0,
    POS(-196.0f, 2.0f, 0.0f), 0.0f, 90.0f, 0.0f, 0.5f, 0.5f, 0.5f);
ids[3] = objCreate(0, arg0, 2, 0, 0x5B, 0xFF, D_801680B8, func_801C1424, func_801C10FC,
    POS(-196.0f, 108.0f, 112.0f), 0.0f, 90.0f, 0.0f, 0.56f, 0.56f, 0.56f);
} else if (blockFootprint == 3) {
ids[0] = objCreate(0, arg0, 1, 0x80, 0x5B, 0xFF, &D_80315A10[0], 0, 0,
    POS(196.0f, 0.0f, 116.0f), 0.0f, 0.0f, 0.0f, 0.5f, 0.5f, 0.5f);
ids[1] = objCreate(0, arg0, 1, 0x80, 0x5B, 0xFF, &D_80315A10[0], 0, 0,
    POS(196.0f, 0.0f, -116.0f), 0.0f, 0.0f, 0.0f, 0.5f, 0.5f, 0.5f);
ids[2] = objCreate(0, arg0, 1, 0, 0x5B, 0xFF, &D_80315A10[1], 0, 0,
    POS(196.0f, 2.0f, 0.0f), 0.0f, 90.0f, 0.0f, 0.5f, 0.5f, 0.5f);
ids[3] = objCreate(0, arg0, 2, 0, 0x5B, 0xFF, D_801680B8, func_801C1424, func_801C10FC,
    POS(196.0f, 108.0f, -112.0f), 0.0f, -90.0f, 0.0f, 0.56f, 0.56f, 0.56f);
}
} else if (type == 5 || type == 0x33) {
if (blockFootprint == 0) {
ids[0] = objCreate(0, arg0, 1, 0x80, 0x5B, 0xFF, &D_80315A10[0], 0, 0,
    POS(116.0f, 0.0f, -196.0f), 0.0f, 0.0f, 0.0f, 0.5f, 0.5f, 0.5f);
ids[1] = objCreate(0, arg0, 1, 0x80, 0x5B, 0xFF, &D_80315A10[0], 0, 0,
    POS(-116.0f, 0.0f, -196.0f), 0.0f, 0.0f, 0.0f, 0.5f, 0.5f, 0.5f);
ids[2] = objCreate(0, arg0, 1, 0, 0x5B, 0xFF, &D_80315A10[1], 0, 0,
    POS(0.0f, 2.0f, -196.0f), 0.0f, 180.0f, 0.0f, 0.5f, 0.5f, 0.5f);
ids[3] = objCreate(0, arg0, 2, 0, 0x5B, 0xFF, D_801680B8, func_801C1424, func_801C10FC,
    POS(-112.0f, 108.0f, -196.0f), 0.0f, 0.0f, 0.0f, 0.56f, 0.56f, 0.56f);
} else if (blockFootprint == 2) {
ids[0] = objCreate(0, arg0, 1, 0x80, 0x5B, 0xFF, &D_80315A10[0], 0, 0,
    POS(116.0f, 0.0f, 196.0f), 0.0f, 0.0f, 0.0f, 0.5f, 0.5f, 0.5f);
ids[1] = objCreate(0, arg0, 1, 0x80, 0x5B, 0xFF, &D_80315A10[0], 0, 0,
    POS(-116.0f, 0.0f, 196.0f), 0.0f, 0.0f, 0.0f, 0.5f, 0.5f, 0.5f);
ids[2] = objCreate(0, arg0, 1, 0, 0x5B, 0xFF, &D_80315A10[1], 0, 0,
    POS(0.0f, 2.0f, 196.0f), 0.0f, 0.0f, 0.0f, 0.5f, 0.5f, 0.5f);
ids[3] = objCreate(0, arg0, 2, 0, 0x5B, 0xFF, D_801680B8, func_801C1424, func_801C10FC,
    POS(112.0f, 108.0f, 196.0f), 0.0f, 180.0f, 0.0f, 0.56f, 0.56f, 0.56f);
}
}
} else if (type == 0x2A || type == 0x58) {
ids[0] = objCreate(0, arg0, 1, 0x80, 0x5B, 0xFF, &D_80315A10[0], 0, 0,
    POS(116.0f, 0.0f, 196.0f), 0.0f, 0.0f, 0.0f, 0.5f, 0.5f, 0.5f);
ids[1] = objCreate(0, arg0, 1, 0x80, 0x5B, 0xFF, &D_80315A10[0], 0, 0,
    POS(-116.0f, 0.0f, 196.0f), 0.0f, 0.0f, 0.0f, 0.5f, 0.5f, 0.5f);
ids[2] = objCreate(0, arg0, 1, 0, 0x5B, 0xFF, &D_80315A10[1], 0, 0,
    POS(0.0f, 2.0f, 196.0f), 0.0f, 0.0f, 0.0f, 0.5f, 0.5f, 0.5f);
if (arg1 == 0) {
ids[3] = objCreate(0, arg0, 2, 0, 0x5B, 0xFF, D_801680B8, func_801C1424, func_801C10FC,
    POS(112.0f, 108.0f, 196.0f), 0.0f, 180.0f, 0.0f, 0.56f, 0.56f, 0.56f);
} else {
ids[3] = objCreate(0, arg0, 2, 0, 0x5B, 0xFF, D_801680B8, updateWaveVertices, func_801C1680,
    POS(-112.0f, 108.0f, 196.0f), 0.0f, 0.0f, 0.0f, 0.56f, 0.56f, 0.56f);
}
} else if (type == 0x2B || type == 0x59) {
ids[0] = objCreate(0, arg0, 1, 0x80, 0x5B, 0xFF, &D_80315A10[0], 0, 0,
    POS(116.0f, 0.0f, -196.0f), 0.0f, 0.0f, 0.0f, 0.5f, 0.5f, 0.5f);
ids[1] = objCreate(0, arg0, 1, 0x80, 0x5B, 0xFF, &D_80315A10[0], 0, 0,
    POS(-116.0f, 0.0f, -196.0f), 0.0f, 0.0f, 0.0f, 0.5f, 0.5f, 0.5f);
ids[2] = objCreate(0, arg0, 1, 0, 0x5B, 0xFF, &D_80315A10[1], 0, 0,
    POS(0.0f, 2.0f, -196.0f), 0.0f, 0.0f, 0.0f, 0.5f, 0.5f, 0.5f);
if (arg1 == 0) {
ids[3] = objCreate(0, arg0, 2, 0, 0x5B, 0xFF, D_801680B8, func_801C1424, func_801C10FC,
    POS(-112.0f, 108.0f, -196.0f), 0.0f, 0.0f, 0.0f, 0.56f, 0.56f, 0.56f);
} else {
ids[3] = objCreate(0, arg0, 2, 0, 0x5B, 0xFF, D_801680B8, updateWaveVertices, func_801C1680,
    POS(112.0f, 108.0f, -196.0f), 0.0f, 180.0f, 0.0f, 0.56f, 0.56f, 0.56f);
}
} else if (type == 0x2C || type == 0x5A) {
ids[0] = objCreate(0, arg0, 1, 0x80, 0x5B, 0xFF, &D_80315A10[0], 0, 0,
    POS(196.0f, 0.0f, 116.0f), 0.0f, 0.0f, 0.0f, 0.5f, 0.5f, 0.5f);
ids[1] = objCreate(0, arg0, 1, 0x80, 0x5B, 0xFF, &D_80315A10[0], 0, 0,
    POS(196.0f, 0.0f, -116.0f), 0.0f, 0.0f, 0.0f, 0.5f, 0.5f, 0.5f);
ids[2] = objCreate(0, arg0, 1, 0, 0x5B, 0xFF, &D_80315A10[1], 0, 0,
    POS(196.0f, 2.0f, 0.0f), 0.0f, 90.0f, 0.0f, 0.5f, 0.5f, 0.5f);
if (arg1 == 0) {
ids[3] = objCreate(0, arg0, 2, 0, 0x5B, 0xFF, D_801680B8, func_801C1424, func_801C10FC,
    POS(196.0f, 108.0f, -112.0f), 0.0f, 270.0f, 0.0f, 0.56f, 0.56f, 0.56f);
} else {
ids[3] = objCreate(0, arg0, 2, 0, 0x5B, 0xFF, D_801680B8, updateWaveVertices, func_801C1680,
    POS(196.0f, 108.0f, 112.0f), 0.0f, 90.0f, 0.0f, 0.56f, 0.56f, 0.56f);
}
} else if (type == 0x2D || type == 0x5B) {
ids[0] = objCreate(0, arg0, 1, 0x80, 0x5B, 0xFF, &D_80315A10[0], 0, 0,
    POS(-196.0f, 0.0f, 116.0f), 0.0f, 0.0f, 0.0f, 0.5f, 0.5f, 0.5f);
ids[1] = objCreate(0, arg0, 1, 0x80, 0x5B, 0xFF, &D_80315A10[0], 0, 0,
    POS(-196.0f, 0.0f, -116.0f), 0.0f, 0.0f, 0.0f, 0.5f, 0.5f, 0.5f);
ids[2] = objCreate(0, arg0, 1, 0, 0x5B, 0xFF, &D_80315A10[1], 0, 0,
    POS(-196.0f, 2.0f, 0.0f), 0.0f, 90.0f, 0.0f, 0.5f, 0.5f, 0.5f);
if (arg1 == 0) {
ids[3] = objCreate(0, arg0, 2, 0, 0x5B, 0xFF, D_801680B8, func_801C1424, func_801C10FC,
    POS(-196.0f, 108.0f, 112.0f), 0.0f, 90.0f, 0.0f, 0.56f, 0.56f, 0.56f);
} else {
ids[3] = objCreate(0, arg0, 2, 0, 0x5B, 0xFF, D_801680B8, updateWaveVertices, func_801C1680,
    POS(-196.0f, 108.0f, -112.0f), 0.0f, 270.0f, 0.0f, 0.56f, 0.56f, 0.56f);
}
}
    for (i = 0; i < 4; i++) {
        D_801C7470[arg0][i] = ids[i];
        D_8011F2F0[ids[i]].flags |= 0x28;
        D_801C7AB6++;
    }
}
