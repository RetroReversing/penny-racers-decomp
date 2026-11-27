typedef struct { f32 x, y, z; } Vec3;
typedef struct { u8 a, b, c; } Tri;
typedef struct { s16 x, y, z; u8 pad[0xA]; } Vtx;
typedef struct { u8 count; Tri *tris; Vtx *verts; u8 nverts; u8 base; } Group;
typedef struct { u8 pad0[0x40]; s16 maxx; u8 pad42[2]; s16 maxz; u8 pad46[0xA]; s16 minx; u8 pad52[2]; s16 minz; } Box;
typedef struct { Group *groups; Box *box; u8 id; } Entry;
typedef struct { u8 pad0[4]; Entry **list; } ModelB;
typedef struct { u8 pad0[4]; ModelB *b; } ModelA;
typedef struct { u8 pad0[0x18]; f32 x; f32 y; f32 z; u8 pad24[0x2C]; ModelA *model; } Obj;
typedef struct { u8 id; u8 hit; u8 count; f32 unk4; f32 x; f32 y; f32 z; Vec3 n; Vec3 p0; Vec3 p1; Vec3 p2; } Result;
extern Vec3 D_8012AB40;
extern Vec3 D_8012AB4C;
extern Vec3 D_8012AB58;
extern Vec3 D_8012AB64;
extern Vec3 D_8012AB70;
extern Vec3 D_8012AB7C;
extern Vec3 D_8012AB88;
extern Vec3 D_8012AB98[];
extern f64 D_8012AA30;
f32 func_80127000(Vec3 *, Vec3 *);
Vec3 vec3Cross(Vec3, Vec3);
Vec3 vec3Sub(Vec3 *, Vec3 *);
s32 func_801271A0(void);
void func_80127870(Vec3 *, Vec3 *, Vec3 *, Vec3 *, Vec3 *);
f32 sqrtf(f32);

void func_80128880(Result *res, Obj *obj, f32 x, f32 y, f32 z, f32 dx, f32 dy, f32 dz) {
    Vec3 n;
    Vec3 a;
    Vec3 b;
    f32 best;
    s32 i;
    Entry **list;
    Entry *e;
    Group *g;
    Tri *tri;
    s32 j;
    s32 k;
    s32 t;
    u8 inside;
    f32 s;
    f32 r;
    f32 h;

    res->hit = 0;
    res->count = 0;
    D_8012AB40.x = x;
    D_8012AB40.y = y;
    D_8012AB40.z = z;
    D_8012AB58.x = x + dx;
    D_8012AB58.y = y + dy;
    D_8012AB58.z = z + dz;
    best = -32000.0f;
    list = obj->model->b->list;
    for (i = 0; (*list)[i].groups != 0; i++) {
        e = &(*list)[i];
        D_8012AB88.x = e->box->minx + obj->x - 30.0f;
        D_8012AB70.x = e->box->maxx + obj->x + 30.0f;
        D_8012AB88.z = e->box->minz + obj->z - 30.0f;
        D_8012AB70.z = e->box->maxz + obj->z + 30.0f;
        inside = 0;
        if (D_8012AB88.x <= D_8012AB40.x && D_8012AB40.x <= D_8012AB70.x && D_8012AB88.z <= D_8012AB40.z && D_8012AB40.z <= D_8012AB70.z) {
            inside = 1;
        }
        if (!inside) {
            if (D_8012AB88.x <= D_8012AB58.x && D_8012AB58.x <= D_8012AB70.x && D_8012AB88.z <= D_8012AB58.z && D_8012AB58.z <= D_8012AB70.z) {
                inside++;
            }
        }
        if (inside) {
            for (j = 0; e->groups[j].count != 0; j++) {
                g = &e->groups[j];
                for (k = 0; k < g->nverts; k++) {
                    D_8012AB98[g->base + k].x = g->verts[k].x + obj->x;
                    D_8012AB98[g->base + k].y = g->verts[k].y + obj->y;
                    D_8012AB98[g->base + k].z = g->verts[k].z + obj->z;
                }
                for (t = 0; t < g->count; t++) {
                    tri = &g->tris[t];
                    D_8012AB64.x = D_8012AB98[tri->a].x;
                    D_8012AB64.y = D_8012AB98[tri->a].y;
                    D_8012AB64.z = D_8012AB98[tri->a].z;
                    D_8012AB4C.x = D_8012AB98[tri->b].x;
                    D_8012AB4C.y = D_8012AB98[tri->b].y;
                    D_8012AB4C.z = D_8012AB98[tri->b].z;
                    D_8012AB7C.x = D_8012AB98[tri->c].x;
                    D_8012AB7C.y = D_8012AB98[tri->c].y;
                    D_8012AB7C.z = D_8012AB98[tri->c].z;
                    func_80127870(&D_8012AB64, &D_8012AB4C, &D_8012AB7C, &D_8012AB88, &D_8012AB70);
                    D_8012AB88.x -= 30.0f;
                    D_8012AB88.z -= 30.0f;
                    D_8012AB70.x += 30.0f;
                    D_8012AB70.z += 30.0f;
                    inside = 0;
                    if (D_8012AB88.x <= D_8012AB40.x && D_8012AB40.x <= D_8012AB70.x && D_8012AB88.z <= D_8012AB40.z && D_8012AB40.z <= D_8012AB70.z) {
                        inside = 1;
                    }
                    if (!inside) {
                        if (D_8012AB88.x <= D_8012AB58.x && D_8012AB58.x <= D_8012AB70.x && D_8012AB88.z <= D_8012AB58.z && D_8012AB58.z <= D_8012AB70.z) {
                            inside++;
                        }
                    }
                    if (inside) {
                        if ((u8) func_801271A0() == 1) {
                            a = vec3Sub(&D_8012AB4C, &D_8012AB64);
                            b = vec3Sub(&D_8012AB7C, &D_8012AB64);
                            n = vec3Cross(a, b);
                            s = D_8012AA30 / sqrtf(func_80127000(&n, &n));
                            n.x = s * n.x;
                            n.y = s * n.y;
                            n.z = s * n.z;
                            s = -(n.x * D_8012AB64.x + n.y * D_8012AB64.y + n.z * D_8012AB64.z);
                            r = -(x * n.x + y * n.y + z * n.z + s) / (dx * n.x + dy * n.y + dz * n.z);
                            h = y + dy * r;
                            if (best < h) {
                                res->id = e->id;
                                res->hit = 1;
                                res->n.x = n.x;
                                res->n.y = n.y;
                                res->n.z = n.z;
                                res->p0 = D_8012AB64;
                                res->p1 = D_8012AB4C;
                                res->p2 = D_8012AB7C;
                                best = h;
                                res->y = best;
                                res->x = x + dx * r;
                                res->z = z + dz * r;
                            }
                            res->count++;
                        }
                    }
                }
            }
        }
    }
}
