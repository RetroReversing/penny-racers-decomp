typedef struct { s32 w[13]; } Part;
typedef struct {
    u8 unk0[8];
    Part parts[8];
    u8 unk1A8[0x597 - 0x1A8];
    u8 unk597;
    u8 unk598[0x8DC - 0x598];
    void *unk8DC;
    u8 unk8E0[0x10];
} Car;
typedef struct {
    u8 unk0;
    s8 unk1;
    f32 a[8];
    f32 b[8];
    f32 c[8];
    f32 d[8];
    f32 e[8];
    f32 f[8];
} Trail;
typedef struct { u8 unk0; u8 unk1; u8 unk2; } Race;
typedef struct { f32 x; f32 z; f32 unk8; f32 unkC; } Dir;
typedef struct {
    f32 pos[4][2];
    u8 unk20[2];
    s16 unk22;
    s16 unk24;
    s16 unk26;
    Dir dir[4];
    u8 unk68[4];
} Node;
typedef struct { u8 b[4]; } Used;
typedef struct { u8 unk0[0x20]; u16 unk20; } Sel;
typedef struct { u8 unk0[4]; u8 unk4; } Flag;

extern Used D_801C6A38;
extern u8 D_801C6A3C[];
extern Sel D_8006FAF0;
extern Flag D_8006FB14;
extern s16 D_8018A438;
extern Race *trackInfo;
extern Car sCars[];
extern Part D_80238EC0[];
extern u8 D_8031EA70[];
extern u8 D_80236F58[];
extern f32 D_80237070[];
extern Trail D_8018A460[][3];
extern Node *D_802CBEE0[];
extern u8 D_802352F4[];
extern u8 *D_802352CC[];
extern f32 D_80235C60[];
extern f32 D_80235300[];
extern f32 D_80235620[];
extern f32 D_80235940[];
extern u8 D_80323ED0[];
extern void func_80231A0C();
extern void createStageObjects();
extern void func_801B09F0();
extern void func_801B0B60(s32);
extern void placeEdgeObjects(s32, void *, s32, f32, f32);
extern void func_801B7970(void *, s32);
extern void linkTrackPieces(s32);
extern void func_8022132C(void *);
extern void func_8013E188(void);
extern u16 func_801F9D8C(s32, s32);
extern u32 nextRandom(void);
extern void debugPrintf();
extern void func_8022FE50(u8, u8, u8, s32);
extern void initRowTable(s32);
extern void func_8013ADA8(void);
extern f32 sqrtf(f32);
extern s16 objCreate(s32, s32, s32, s32, s32, s32, void *, void *, void *,
                         f32, f32, f32, f32, f32, f32, f32, f32, f32);
extern void func_8012AD9C();
extern void func_80159230();
extern void func_8015A414();
extern void func_8013DD2C();

#define SPAWN(a, b) objCreate(0, 0, 3, 0, a, b, 0, func_8012AD9C, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f)

void func_801AFB94(s32 arg0, u8 arg1)
{
    Used used = D_801C6A38;
    u16 i;
    u16 j;
    u16 k;
    s32 pick;
    s32 prev;
    s32 cur;
    f32 dx;
    f32 dz;
    Node *nodes;
    Node *n;
    Node *p;
    Trail *t;

    D_8006FAF0.unk20 = 0;
    func_80231A0C();
    createStageObjects();
    func_801B09F0();
    func_801B0B60(arg0);
    placeEdgeObjects(arg0, D_80323ED0, arg1, 400.0f, 400.0f);
    func_801B7970(trackInfo, arg0);
    linkTrackPieces(arg0);

    for (j = 0; j < arg1; j++) {
        for (i = 0; i < 8; i++) {
            sCars[j].parts[i] = D_80238EC0[i];
        }
    }
    for (i = 0; i < 7; i++) {
        func_8022132C(&sCars[i]);
        sCars[i].unk8DC = D_8031EA70;
    }
    D_8006FB14.unk4 = 0;
    func_8013E188();
    for (i = 0; i < trackInfo->unk2; i++) {
        D_80236F58[i] = 0;
        D_80237070[i] = -10000.0f;
    }
    for (i = 0; i < arg1; i++) {
        for (j = 0; j < 3; j++) {
            t = &D_8018A460[i][j];
            t->unk0 = 0;
            t->unk1 = -1;
            for (k = 0; k < 8; k++) {
                t->a[k] = t->b[k] = t->c[k] = 0.0f;
                t->d[k] = t->e[k] = t->f[k] = 0.0f;
            }
        }
    }

    if (trackInfo->unk1 == 5) {
        nodes = D_802CBEE0[D_8006FAF0.unk20];
        for (i = 0; i < D_802352F4[D_8006FAF0.unk20] + 1; i++) {
            cur = D_802352CC[D_8006FAF0.unk20][i * 2];
            if (i == 0) {
                prev = D_802352CC[D_8006FAF0.unk20][D_802352F4[D_8006FAF0.unk20] * 2 - 2];
            } else {
                prev = D_802352CC[D_8006FAF0.unk20][i * 2 - 2];
            }
            n = &nodes[cur];
            p = &nodes[prev];
            dx = (n->dir[0].x * 50.0f + n->pos[0][0]) - (p->dir[0].x * 50.0f + p->pos[0][0]);
            dz = (n->dir[0].z * 50.0f + n->pos[0][1]) - (p->dir[0].z * 50.0f + p->pos[0][1]);
            if ((dx == 0.0f) & (dz == 0.0f)) {
                dx = dz = 1.0f;
            }
            D_80235C60[i] = func_801F9D8C(dz, dx);
            D_80235300[i] = 100.0f / sqrtf(dx * dx + dz * dz) / (D_802352F4[D_8006FAF0.unk20] + 1);
            D_80235620[i] = 100.0f / (D_802352F4[D_8006FAF0.unk20] + 1) * i;
            D_80235940[i] = sqrtf(dx * dx + dz * dz);
        }
    } else {
        nodes = D_802CBEE0[D_8006FAF0.unk20];
        for (i = 0; i < D_802352F4[D_8006FAF0.unk20] + 1; i++) {
            n = &nodes[i];
            if (n->unk24 != -1) {
                dx = (n->dir[0].x * 50.0f + n->pos[0][0]) - (n->dir[2].x * 50.0f + n->pos[2][0]);
                dz = (n->dir[0].z * 50.0f + n->pos[0][1]) - (n->dir[2].z * 50.0f + n->pos[2][1]);
            } else if (n->unk22 != -1) {
                dx = (n->dir[0].x * 50.0f + n->pos[0][0]) - (n->dir[1].x * 50.0f + n->pos[1][0]);
                dz = (n->dir[0].z * 50.0f + n->pos[0][1]) - (n->dir[1].z * 50.0f + n->pos[1][1]);
            } else if (n->unk26 != -1) {
                dx = (n->dir[0].x * 50.0f + n->pos[0][0]) - (n->dir[3].x * 50.0f + n->pos[3][0]);
                dz = (n->dir[0].z * 50.0f + n->pos[0][1]) - (n->dir[3].z * 50.0f + n->pos[3][1]);
            }
            if ((dx == 0.0f) & (dz == 0.0f)) {
                dx = dz = 1.0f;
            }
            D_80235C60[i] = func_801F9D8C(dz, dx);
            if (i == 0) {
                D_80235300[i] = 0.0f;
                D_80235620[i] = 200.0f;
            } else if (i == 1) {
                D_80235300[i] = 0.0f;
                D_80235620[i] = 90.0f;
            } else {
                D_80235300[i] = 100.0f / sqrtf(dx * dx + dz * dz) / (D_802352F4[D_8006FAF0.unk20] - 1);
                D_80235620[i] = 100.0f / (D_802352F4[D_8006FAF0.unk20] - 1) * (i - 2) + 100.0f;
            }
            D_80235940[i] = sqrtf(dx * dx + dz * dz);
        }
    }

    if (arg1 == 1) {
        pick = 0;
    } else {
        pick = nextRandom() % arg1;
    }
    for (i = 0; i < arg1; i++) {
        while (used.b[pick]) {
            pick = nextRandom() % arg1;
        }
        used.b[pick] = 1;
        debugPrintf(D_801C6A3C, pick);
        func_8022FE50(pick, i, i, 0);
        if (trackInfo->unk1 == 6) {
            sCars[i].unk597 = 1;
        }
    }

    initRowTable(arg1);
    switch (arg1) {
    case 1:
        SPAWN(0x20, 1);
        break;
    case 2:
        SPAWN(0x20, 1);
        SPAWN(0x20, 4);
        break;
    case 3:
        SPAWN(0x20, 1);
        SPAWN(0x20, 4);
        SPAWN(0x20, 7);
        break;
    case 4:
        SPAWN(0x20, 1);
        SPAWN(0x20, 4);
        SPAWN(0x20, 7);
        SPAWN(0x20, 0xA);
        break;
    }
    func_8013ADA8();
    D_8018A438 = objCreate(0, 0, 3, 0, 0xA1, 0xFF, 0, func_80159230, func_8015A414,
                               0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    objCreate(0, 0, 3, 0, 0xA1, 0xFF, 0, 0, func_8013DD2C,
                  0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
}
