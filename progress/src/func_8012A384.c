typedef struct { f32 x; f32 y; f32 z; } Vec;
typedef struct { s16 x; s16 y; s16 z; s16 pad[5]; } Vert;
typedef struct { u8 ntri; u8 pad1[3]; u8 (*tris)[3]; Vert *verts; u8 nvert; u8 base; u8 padE[2]; } Mesh;
typedef struct { Mesh *mesh; u8 pad4[8]; } Entry;
typedef struct { u8 pad0[4]; Entry **list; } Mid;
typedef struct { u8 pad0[4]; Mid *mid; } Top;
typedef struct { u8 pad0[0x18]; f32 x; f32 y; f32 z; u8 pad24[0x2C]; Top *top; } Node;
extern Vec D_8012AB98[];
extern Vec D_8012AB64;
extern Vec D_8012AB4C;
extern Vec D_8012AB7C;
extern char D_8012AA48[], D_8012AA68[], D_8012AB04[], D_8012AA84[], D_8012AA98[], D_8012AABC[], D_8012AAE0[], D_8012AB20[];
void debugPrintf();

#define EQ(a, b) (a.x == b.x && a.y == b.y && a.z == b.z)

void func_8012A384(Node *node, u16 id) {
    Entry *entry;
    Entry **list;
    Mesh *m;
    u8 *tri;
    s32 i;
    s32 j;
    s32 k;
    s32 t;
    s32 count;

    debugPrintf(D_8012AA48, id);
    list = node->top->mid->list;
    count = 0;
    for (i = 0; (*list)[i].mesh != 0; i++) {
        entry = &(*list)[i];
        for (j = 0; entry->mesh[j].ntri != 0; j++) {
            m = &entry->mesh[j];
            for (k = 0; k < m->nvert; k++) {
                D_8012AB98[m->base + k].x = m->verts[k].x + node->x;
                D_8012AB98[m->base + k].y = m->verts[k].y + node->y;
                D_8012AB98[m->base + k].z = m->verts[k].z + node->z;
            }
            for (t = 0; t < m->ntri; t++) {
                tri = m->tris[t];
                D_8012AB64.x = D_8012AB98[tri[0]].x;
                D_8012AB64.y = D_8012AB98[tri[0]].y;
                D_8012AB64.z = D_8012AB98[tri[0]].z;
                D_8012AB4C.x = D_8012AB98[tri[1]].x;
                D_8012AB4C.y = D_8012AB98[tri[1]].y;
                D_8012AB4C.z = D_8012AB98[tri[1]].z;
                D_8012AB7C.x = D_8012AB98[tri[2]].x;
                D_8012AB7C.y = D_8012AB98[tri[2]].y;
                D_8012AB7C.z = D_8012AB98[tri[2]].z;
                count++;
                if (EQ(D_8012AB64, D_8012AB4C)) {
                    if (EQ(D_8012AB64, D_8012AB7C)) {
                        debugPrintf(D_8012AA68);
                    } else {
                        debugPrintf(D_8012AB04);
                    }
                } else if (EQ(D_8012AB64, D_8012AB7C)) {
                    if (EQ(D_8012AB64, D_8012AB4C)) {
                        debugPrintf(D_8012AA68);
                    } else {
                        debugPrintf(D_8012AB04);
                    }
                } else if (EQ(D_8012AB7C, D_8012AB4C)) {
                    if (EQ(D_8012AB64, D_8012AB7C)) {
                        debugPrintf(D_8012AA68);
                    } else {
                        debugPrintf(D_8012AB04);
                    }
                } else {
                    continue;
                }
do { do { do { do { do { do { do { do { do { do { do { do { do { do { do {                 debugPrintf(D_8012AA84, i);
                debugPrintf(D_8012AA98, D_8012AB64.x, D_8012AB64.y, D_8012AB64.z);
                debugPrintf(D_8012AABC, D_8012AB4C.x, D_8012AB4C.y, D_8012AB4C.z);
                debugPrintf(D_8012AAE0, D_8012AB7C.x, D_8012AB7C.y, D_8012AB7C.z); } while (0); } while (0); } while (0); } while (0); } while (0); } while (0); } while (0); } while (0); } while (0); } while (0); } while (0); } while (0); } while (0); } while (0); } while (0);
            }
        }
    }
    debugPrintf(D_8012AB20, count);
}
