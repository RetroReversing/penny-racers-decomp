typedef struct { u8 pad0[0x3E]; u16 state; u8 pad40[0x24]; } Obj;
typedef struct { f32 x; f32 y; f32 z; u8 pad[0x18]; } Camera;
typedef struct { s16 active; u8 pad2[2]; s16 view; u8 pad6[0x22]; } Player;
typedef struct { u8 pad0[0x2108]; Player player[4]; } Root;
typedef struct { f32 x; f32 y; f32 z; u16 id; u8 padE[2]; } Spot;
typedef struct { u8 pad0[0x1A]; u16 vol; u8 pad1C[0x10]; } Chan;
typedef struct { u8 pad0[6]; s16 vol; u8 pad8[4]; } Snd;
typedef struct { u8 pad0[4]; u8 x4; } Cfg;
extern Obj D_8011F2F0[];
extern volatile u16 gameState;
extern Cfg D_8006FB14;
extern s32 D_801D7DEC;
extern s16 D_801D7DE8;
extern u16 D_801D7DE0[];
extern Root sRowBoard;
extern Camera D_80221080[];
extern Spot D_801D7D60[];
typedef struct { u16 v; u8 pad[0x2A]; } Out;
typedef struct { u16 v; u8 pad[10]; } In;
extern Out D_801D7E06[];
extern In D_801D75E6[];
f32 sqrtf(f32);
void playStageSound(s32, s16);

void func_801D69D0(u16 id) {
    Obj *o;
    s32 i;
    s32 j;
    Camera *cam;
    Spot *e;
    f32 dx;
    f32 dy;
    f32 dz;
    f32 d;
    f32 vol;
    f32 dist[4];
    s16 best[4];

    o = &D_8011F2F0[id];
    if (gameState != 9 && D_8006FB14.x4 == 1) {
        switch (o->state) {
        case 0:
            D_801D7DEC = 100;
            D_801D7DE8 = 0;
            D_801D7DE0[0] = D_801D7DE0[1] = D_801D7DE0[2] = D_801D7DE0[3] = 0;
            o->state = 1;
            break;
        case 1:
            if (D_801D7DEC != 0) {
                D_801D7DE8 = 0;
                D_801D7DEC--;
                break;
            }
            best[0] = best[1] = best[2] = best[3] = -1;
            for (i = 0; i < sRowBoard.player[0].active; i++) {
                cam = &D_80221080[sRowBoard.player[i].view];
                dist[i] = 1000.0f;
                for (j = D_801D7DE8 - 1; j >= 0; j--) {
                    e = &D_801D7D60[j];
                    dx = cam->x - e->x;
                    dy = cam->y - e->y;
                    dz = cam->z - e->z;
                    d = sqrtf(dx * dx + dy * dy + dz * dz);
                    if (d < dist[i]) {
                        best[i] = e->id;
                        dist[i] = d;
                    }
                }
            }
            switch (sRowBoard.player[0].active) {
            case 1:
                if (best[0] != -1) {
                    dist[0] -= 500.0f;
                    if (dist[0] < 0.0f) {
                        playStageSound((D_801D7DE0[0] & 3) + 2, best[0]);
                        D_801D7E06[(D_801D7DE0[0] & 3) + 2].v = D_801D75E6[best[0]].v;
                    } else if (dist[0] < 900.0f) {
                        playStageSound((D_801D7DE0[0] & 3) + 2, best[0]);
                        vol = (f32) (s16) D_801D75E6[best[0]].v * (1000.0f - dist[0]) / 1000.0f;
                        D_801D7E06[(D_801D7DE0[0] & 3) + 2].v = (s32) vol;
                    }
                    D_801D7DE0[0]++;
                }
                break;
            case 2:
                if (best[0] == best[1] && best[0] != -1) {
                    playStageSound((D_801D7DE0[0] & 1) + 4, best[0]);
                    D_801D7DE0[0]++;
                } else {
                for (i = 0; i < 2; i++) {
                    if (best[i] != -1) {
                        playStageSound((D_801D7DE0[0] & 3) + 4, best[i]);
                        D_801D7DE0[0]++;
                    }
                }
                }
                break;
            case 3:
                if (best[0] == best[1] && best[0] != -1) {
                    best[1] = -1;
                }
                if (best[0] == best[2] && best[0] != -1) {
                    best[2] = -1;
                }
                if (best[1] == best[2] && best[1] != -1) {
                    best[2] = -1;
                }
                for (i = 0; i < 3; i++) {
                    if (best[i] != -1) {
                        playStageSound((D_801D7DE0[0] & 3) + 3, best[i]);
                        D_801D7DE0[0]++;
                    }
                }
                break;
            case 4:
                if (best[0] == best[1] && best[0] != -1) {
                    best[1] = -1;
                }
                if (best[0] == best[2] && best[0] != -1) {
                    best[2] = -1;
                }
                if (best[0] == best[3] && best[0] != -1) {
                    best[3] = -1;
                }
                if (best[1] == best[2] && best[1] != -1) {
                    best[2] = -1;
                }
                if (best[1] == best[3] && best[1] != -1) {
                    best[3] = -1;
                }
                if (best[2] == best[3] && best[2] != -1) {
                    best[3] = -1;
                }
                for (i = 0; i < 4; i++) {
                    if (best[i] != -1) {
                        playStageSound((D_801D7DE0[0] & 3) + 4, best[i]);
                        D_801D7DE0[0]++;
                    }
                }
                break;
            }
            D_801D7DE8 = 0;
            break;
        }
    }
}
