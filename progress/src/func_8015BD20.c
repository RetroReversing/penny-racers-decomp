typedef struct { s16 ob[3]; u16 flag; s16 tc[2]; u8 cn[4]; } Vtx;
typedef struct { u8 player; u8 unk1[0xA]; u8 unkB; u8 unkC[0x32]; u16 state; u8 unk40[4]; f32 vx; f32 vy; f32 vz; u8 unk50[0x14]; } Obj;
typedef struct {
    u8 unk0[0x72C]; f32 posA[3]; f32 posB[3]; u8 unk744[0x860 - 0x744]; u8 ground; u8 unk861[3]; f32 grip;
    u8 unk868[0x8A1 - 0x868]; u8 mode; u8 unk8A2[0x8F0 - 0x8A2];
} Car;
extern Obj D_8011F2F0[];
extern Car sCars[];
extern Vtx D_80189970[][4];
extern Vtx D_8018B530[][16];
extern u8 D_8018D66A[];
extern void func_8015C838();
extern void drawSkidMarkQuad();
extern s16 objCreate(s32, s32, s32, s32, s32, s32, void *, void *, void *,
                         f32, f32, f32, f32, f32, f32, f32, f32, f32);

void func_8015BD20(u16 arg0)
{
    u8 p = D_8011F2F0[arg0].player;
    Car *car = &sCars[p];
    Vtx *v;
    Vtx *w;
    s32 i;
    u16 id;
    f32 a[4];
    f32 b[4];

    switch (D_8011F2F0[arg0].state) {
    case 0:
        v = &D_80189970[p][0];
        v->flag = 0;
        v->tc[0] = 0;
        v->tc[1] = 0;
        v->cn[0] = 0;
        v->cn[1] = 0x7F;
        v->cn[2] = 0;
        v->cn[3] = 0xFF;
        v = &D_80189970[p][1];
        v->flag = 0;
        v->tc[0] = 0x800;
        v->tc[1] = 0;
        v->cn[0] = 0;
        v->cn[1] = 0x7F;
        v->cn[2] = 0;
        v->cn[3] = 0xFF;
        v = &D_80189970[p][2];
        v->flag = 0;
        v->tc[0] = 0;
        v->tc[1] = 0x40;
        v->cn[0] = 0;
        v->cn[1] = 0x7F;
        v->cn[2] = 0;
        v->cn[3] = 0xFF;
        v = &D_80189970[p][3];
        v->flag = 0;
        v->tc[0] = 0x800;
        v->tc[1] = 0x40;
        v->cn[0] = 0;
        v->cn[1] = 0x7F;
        v->cn[2] = 0;
        v->cn[3] = 0xFF;
        for (i = 0; i < 4; i++) {
            v = &D_8018B530[p][i * 4 + 0];
            v->flag = 0;
            v->tc[0] = 0;
            v->tc[1] = 0;
            v->cn[0] = 0;
            v->cn[1] = 0x7F;
            v->cn[2] = 0;
            v->cn[3] = 0xFF;
            v = &D_8018B530[p][i * 4 + 1];
            v->flag = 0;
            v->tc[0] = 0x800;
            v->tc[1] = 0;
            v->cn[0] = 0;
            v->cn[1] = 0x7F;
            v->cn[2] = 0;
            v->cn[3] = 0xFF;
            v = &D_8018B530[p][i * 4 + 2];
            v->flag = 0;
            v->tc[0] = 0;
            v->tc[1] = 0x40;
            v->cn[0] = 0;
            v->cn[1] = 0x7F;
            v->cn[2] = 0;
            v->cn[3] = 0xFF;
            v = &D_8018B530[p][i * 4 + 3];
            v->flag = 0;
            v->tc[0] = 0x800;
            v->tc[1] = 0x40;
            v->cn[0] = 0;
            v->cn[1] = 0x7F;
            v->cn[2] = 0;
            v->cn[3] = 0xFF;
        }
        D_8018D66A[p] = 0;
        D_8011F2F0[arg0].state = 1;
        break;
    case 1:
        if (!(car->grip > 0.95 && D_8011F2F0[arg0].vx == 0.0f) && car->ground && car->mode != 4) {
            a[0] = car->posA[0];
            a[1] = car->posA[1];
            a[2] = car->posA[2];
            b[0] = car->posB[0];
            b[1] = car->posB[1];
            b[2] = car->posB[2];
            v = &D_80189970[p][0];
            v->ob[0] = a[0];
            v->ob[1] = a[1] + 1.0f;
            v->ob[2] = a[2];
            v = &D_80189970[p][1];
            v->ob[0] = b[0];
            v->ob[1] = b[1] + 1.0f;
            v->ob[2] = b[2];
            if (D_8011F2F0[arg0].vx == 0.0f) {
                v = &D_80189970[p][2];
                v->ob[0] = a[0];
                v->ob[1] = a[1] + 1.0f;
                v->ob[2] = a[2];
                v = &D_80189970[p][3];
                v->ob[0] = b[0];
                v->ob[1] = b[1] + 1.0f;
                v->ob[2] = b[2];
            }
            if (D_8011F2F0[arg0].vx == 10.0f || car->grip > 0.95 || !car->ground || car->mode == 4) {
                id = objCreate(0, 0, 3, 0, 0x52, 0xAA, 0, func_8015C838, drawSkidMarkQuad,
                                   0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1.0f);
                D_8011F2F0[id].unkB = 0xE;
                D_8011F2F0[id].vx = p;
                D_8011F2F0[id].vy = D_8018D66A[p];
                D_8011F2F0[id].vz = car->grip;
                v = &D_8018B530[p][D_8018D66A[p] * 4 + 0];
                w = &D_80189970[p][0];
                v->ob[0] = w->ob[0];
                v->ob[1] = w->ob[1];
                v->ob[2] = w->ob[2];
                v = &D_8018B530[p][D_8018D66A[p] * 4 + 1];
                w = &D_80189970[p][1];
                v->ob[0] = w->ob[0];
                v->ob[1] = w->ob[1];
                v->ob[2] = w->ob[2];
                v = &D_8018B530[p][D_8018D66A[p] * 4 + 2];
                w = &D_80189970[p][2];
                v->ob[0] = w->ob[0];
                v->ob[1] = w->ob[1];
                v->ob[2] = w->ob[2];
                v = &D_8018B530[p][D_8018D66A[p] * 4 + 3];
                w = &D_80189970[p][3];
                v->ob[0] = w->ob[0];
                v->ob[1] = w->ob[1];
                v->ob[2] = w->ob[2];
                if (D_8018D66A[p] < 3) {
                    D_8018D66A[p]++;
                } else {
                    D_8018D66A[p] = 0;
                }
                v = &D_80189970[p][2];
                w = &D_80189970[p][0];
                v->ob[0] = w->ob[0];
                v->ob[1] = w->ob[1];
                v->ob[2] = w->ob[2];
                v = &D_80189970[p][3];
                w = &D_80189970[p][1];
                v->ob[0] = w->ob[0];
                v->ob[1] = w->ob[1];
                v->ob[2] = w->ob[2];
                if (car->grip > 0.95) {
                reset:
                    D_8011F2F0[arg0].vx = 0.0f;
                } else {
                    D_8011F2F0[arg0].vx = 1.0f;
                }
            } else {
                D_8011F2F0[arg0].vx += 1.0f;
            }
        } else {
            goto reset;
        }
        break;
    }
}
