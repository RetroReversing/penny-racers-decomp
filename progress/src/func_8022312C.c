typedef struct { f32 x; f32 z; } Pt;
typedef struct { f32 ax; f32 az; f32 nx; f32 nz; } Edge;
typedef struct {
    Pt p[4];
    s16 next[4];
    Edge e[4];
    u8 pad68[4];
} Seg;
typedef struct { f32 t; f32 v; s8 edge; } Mark;
typedef struct {
    u8 pad0[2];
    u16 obj;
    u8 pad4[2];
    u16 flags;
    u8 pad8[0x58C];
    u16 lap;
    u8 pad596;
    u8 idx;
    u8 pad598[0x1D8];
    f32 f770;
    u8 pad774[0x40];
    f32 f7B4;
    f32 f7B8;
    f32 f7BC;
    f32 f7C0;
    f32 f7C4;
    f32 f7C8;
    u8 pad7CC[0x88];
    f32 f854;
    f32 f858;
    f32 f85C;
    u8 pad860[0x10];
    u8 b870;
    u8 pad871[8];
    u8 b879;
    u8 pad87A[0x27];
    u8 b8A1;
    u8 pad8A2[0x2E];
    u8 b8D0;
    u8 pad8D1[0xB];
    Seg *segs;
    Mark *marks;
    u16 cur;
    u16 prev;
    s16 edge;
} Car;
typedef struct {
    u8 pad0[0x18];
    f32 x;
    f32 y;
    f32 z;
    u8 pad24[4];
    f32 ang;
    u8 pad2C[0x38];
} Obj;
typedef struct { u8 pad0[0x20]; u16 unk20; } Game;
typedef struct { u8 b0; u8 b1; u8 b2; } Info;
extern Obj D_8011F2F0[];
extern Game D_8006FAF0;
extern Info *D_801C7AB0;
extern u8 (*D_802352CC[])[2];
extern u8 D_802352F4[];
extern f32 D_80235C60[];
f32 func_801F9BE8(f32, f32);
f32 func_801FA4B0(f32, f32, f32, f32, f32, f32, f32, f32);
f32 sqrtf(f32);
static inline f32 ABSF(f32 x) { return x > 0.0f ? x : -x; }

void func_8022312C(Car *car) {
    Obj *obj;
    u8 (*order)[2];
    u8 count;
    Seg *seg;
    Mark *mark;
    f32 diff;
    f32 dx;
    f32 dz;
    f32 t;
    f32 vx;
    f32 vz;
    f32 len;
    f32 nx;
    f32 nz;
    f32 d;
    f32 px;
    f32 pz;
    u8 last;

    obj = &D_8011F2F0[car->obj];
    order = D_802352CC[D_8006FAF0.unk20];
    count = D_802352F4[D_8006FAF0.unk20];
    seg = &car->segs[car->cur];
    mark = &car->marks[car->cur];
    d = func_801F9BE8(obj->ang, D_80235C60[car->idx]);
    len = (d > 0.0f) ? d : -d;
    if (len > 120.0f && car->b8A1 == 0 && car->b870 == 0 && car->b879 == 0) {
        car->flags |= 2;
    } else {
        car->flags &= ~2;
    }
    px = seg->p[0].x;
    pz = seg->p[0].z;
    dx = obj->x - px;
    dz = obj->z - pz;
    if (dx * seg->e[0].nx + dz * seg->e[0].nz > 0.0f) {
        if (seg->next[0] != -1) {
            if (car->b879 == 0) {
                mark->t = func_801FA4B0(0.0f, 0.0f, seg->e[0].ax * 100.0f, seg->e[0].az * 100.0f, dx, dz, car->f7B4, car->f7BC) * 100.0f;
                mark->v = car->f770;
                mark->edge = 0;
            }
            car->prev = car->cur;
            car->cur = seg->next[0];
            car->edge = 0;
            if ((D_8006FAF0.unk20 == 0 && D_801C7AB0->b1 == 6 && car->prev == D_801C7AB0->b2 - 2 && car->cur == D_801C7AB0->b2 - 1) || (car->cur == 1 && car->prev == 0)) {
                car->lap++;
            }
            if (car->prev == order[car->idx][0] && car->cur == order[car->idx][1]) {
                if (car->idx == count) {
                    car->idx = 0;
                } else {
                    car->idx++;
                }
            } else {
                if (car->idx == 0) {
                    last = count;
                } else {
                    last = car->idx - 1;
                }
                if (car->prev == order[last][1] && car->cur == order[last][0]) {
                    car->idx = last;
                }
            }
            return;
        } else {
            t = func_801FA4B0(0.0f, 0.0f, seg->e[0].ax * 100.0f, seg->e[0].az * 100.0f, dx, dz, car->f7B4, car->f7BC) * 100.0f;
            car->f854 -= t * seg->e[0].ax + seg->p[0].x + seg->e[0].nx * 40.0f - obj->x;
            car->f85C -= t * seg->e[0].az + seg->p[0].z + seg->e[0].nz * 40.0f - obj->z;
            vx = car->f7C0;
            vz = car->f7C8;
            len = sqrtf(vx * vx + vz * vz);
            nx = seg->e[0].nx;
            nz = seg->e[0].nz;
            if (len != 0.0f) {
                d = ((vx * nx + vz * nz) / len) * len * -1.3f;
                vx += nx * d;
                vz += nz * d;
                car->f7B4 = vx;
                car->f7BC = vz;
                car->f7C0 = vx;
                car->f7C8 = vz;
                car->f7C4 = 3.0f;
                car->b8D0 = 0x78;
            }
        }
    }
    dx = obj->x - seg->p[1].x;
    dz = obj->z - seg->p[1].z;
    if (dx * seg->e[1].nx + dz * seg->e[1].nz > 0.0f) {
        if (seg->next[1] != -1) {
            if (car->b879 == 0) {
                mark->t = func_801FA4B0(0.0f, 0.0f, seg->e[1].ax * 100.0f, seg->e[1].az * 100.0f, dx, dz, car->f7B4, car->f7BC) * 100.0f;
                mark->v = car->f770;
                mark->edge = 1;
            }
            car->prev = car->cur;
            car->cur = seg->next[1];
            car->edge = 1;
            if (car->cur == 0 && car->prev == 1) {
                car->lap--;
            }
            if (car->prev == order[car->idx][0] && car->cur == order[car->idx][1]) {
                if (car->idx == count) {
                    car->idx = 0;
                } else {
                    car->idx++;
                }
            } else {
                if (car->idx == 0) {
                    last = count;
                } else {
                    last = car->idx - 1;
                }
                if (car->prev == order[last][1] && car->cur == order[last][0]) {
                    car->idx = last;
                }
            }
            return;
        } else {
            t = func_801FA4B0(0.0f, 0.0f, seg->e[1].ax * 100.0f, seg->e[1].az * 100.0f, dx, dz, car->f7B4, car->f7BC) * 100.0f;
            car->f854 -= t * seg->e[1].ax + seg->p[1].x + seg->e[1].nx * 40.0f - obj->x;
            car->f85C -= t * seg->e[1].az + seg->p[1].z + seg->e[1].nz * 40.0f - obj->z;
            vx = car->f7C0;
            vz = car->f7C8;
            len = sqrtf(vx * vx + vz * vz);
            nx = seg->e[1].nx;
            nz = seg->e[1].nz;
            if (len != 0.0f) {
                d = ((vx * nx + vz * nz) / len) * len * -1.3f;
                vx += nx * d;
                vz += nz * d;
                car->f7B4 = vx;
                car->f7BC = vz;
                car->f7C0 = vx;
                car->f7C8 = vz;
                car->f7C4 = 3.0f;
                car->b8D0 = 0x78;
            }
        }
    }
    dx = obj->x - seg->p[2].x;
    dz = obj->z - seg->p[2].z;
    if (dx * seg->e[2].nx + dz * seg->e[2].nz > 0.0f) {
        if (seg->next[2] != -1) {
            if (car->b879 == 0) {
                mark->t = func_801FA4B0(0.0f, 0.0f, seg->e[2].ax * 100.0f, seg->e[2].az * 100.0f, dx, dz, car->f7B4, car->f7BC) * 100.0f;
                mark->v = car->f770;
                mark->edge = 2;
            }
            car->prev = car->cur;
            car->cur = seg->next[2];
            car->edge = 2;
            if (car->cur == 0 && car->prev == 1) {
                car->lap--;
            }
            if (car->prev == order[car->idx][0] && car->cur == order[car->idx][1]) {
                if (car->idx == count) {
                    car->idx = 0;
                } else {
                    car->idx++;
                }
            } else {
                if (car->idx == 0) {
                    last = count;
                } else {
                    last = car->idx - 1;
                }
                if (car->prev == order[last][1] && car->cur == order[last][0]) {
                    car->idx = last;
                }
            }
            return;
        } else {
            t = func_801FA4B0(0.0f, 0.0f, seg->e[2].ax * 100.0f, seg->e[2].az * 100.0f, dx, dz, car->f7B4, car->f7BC) * 100.0f;
            car->f854 -= t * seg->e[2].ax + seg->p[2].x + seg->e[2].nx * 40.0f - obj->x;
            car->f85C -= t * seg->e[2].az + seg->p[2].z + seg->e[2].nz * 40.0f - obj->z;
            vx = car->f7C0;
            vz = car->f7C8;
            len = sqrtf(vx * vx + vz * vz);
            nx = seg->e[2].nx;
            nz = seg->e[2].nz;
            if (len != 0.0f) {
                d = ((vx * nx + vz * nz) / len) * len * -1.3f;
                vx += nx * d;
                vz += nz * d;
                car->f7B4 = vx;
                car->f7BC = vz;
                car->f7C0 = vx;
                car->f7C8 = vz;
                car->f7C4 = 3.0f;
                car->b8D0 = 0x78;
            }
        }
    }
    dx = obj->x - seg->p[3].x;
    dz = obj->z - seg->p[3].z;
    if (dx * seg->e[3].nx + dz * seg->e[3].nz > 0.0f) {
        if (seg->next[3] != -1) {
            if (car->b879 == 0) {
                mark->t = func_801FA4B0(0.0f, 0.0f, seg->e[3].ax * 100.0f, seg->e[3].az * 100.0f, dx, dz, car->f7B4, car->f7BC) * 100.0f;
                mark->v = car->f770;
                mark->edge = 3;
            }
            car->prev = car->cur;
            car->cur = seg->next[3];
            car->edge = 3;
            if (car->cur == 0 && car->prev == 1) {
                car->lap--;
            }
            if (car->prev == order[car->idx][0] && car->cur == order[car->idx][1]) {
                if (car->idx == count) {
                    car->idx = 0;
                } else {
                    car->idx++;
                }
            } else {
                if (car->idx == 0) {
                    last = count;
                } else {
                    last = car->idx - 1;
                }
                if (car->prev == order[last][1] && car->cur == order[last][0]) {
                    car->idx = last;
                }
            }
            return;
        } else {
            t = func_801FA4B0(0.0f, 0.0f, seg->e[3].ax * 100.0f, seg->e[3].az * 100.0f, dx, dz, car->f7B4, car->f7BC) * 100.0f;
            car->f854 -= t * seg->e[3].ax + seg->p[3].x + seg->e[3].nx * 40.0f - obj->x;
            car->f85C -= t * seg->e[3].az + seg->p[3].z + seg->e[3].nz * 40.0f - obj->z;
            vx = car->f7C0;
            vz = car->f7C8;
            len = sqrtf(vx * vx + vz * vz);
            nx = seg->e[3].nx;
            nz = seg->e[3].nz;
            if (len != 0.0f) {
                d = ((vx * nx + vz * nz) / len) * len * -1.3f;
                vx += nx * d;
                vz += nz * d;
                car->f7B4 = vx;
                car->f7BC = vz;
                car->f7C0 = vx;
                car->f7C8 = vz;
                car->f7C4 = 3.0f;
                car->b8D0 = 0x78;
            }
        }
    }
}
