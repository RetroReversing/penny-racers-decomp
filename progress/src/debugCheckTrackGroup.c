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

/* Debug helper: prints the vertices of every mesh in a track group, flags degenerate triangles (repeated points) as map errors, and reports the triangle count. */
void debugCheckTrackGroup(Node *node, u16 groupId) {
    Entry *entry;
    Entry **meshList;
    Mesh *mesh;
    u8 *triVerts;
    s32 entryIdx;
    s32 meshIdx;
    s32 vertIdx;
    s32 triIdx;
    s32 triCount;

    debugPrintf(D_8012AA48, groupId);
    meshList = node->top->mid->list;
    triCount = 0;
    for (entryIdx = 0; (*meshList)[entryIdx].mesh != 0; entryIdx++) {
        entry = &(*meshList)[entryIdx];
        for (meshIdx = 0; entry->mesh[meshIdx].ntri != 0; meshIdx++) {
            mesh = &entry->mesh[meshIdx];
            for (vertIdx = 0; vertIdx < mesh->nvert; vertIdx++) {
                D_8012AB98[mesh->base + vertIdx].x = mesh->verts[vertIdx].x + node->x;
                D_8012AB98[mesh->base + vertIdx].y = mesh->verts[vertIdx].y + node->y;
                D_8012AB98[mesh->base + vertIdx].z = mesh->verts[vertIdx].z + node->z;
            }
            for (triIdx = 0; triIdx < mesh->ntri; triIdx++) {
                triVerts = mesh->tris[triIdx];
                D_8012AB64.x = D_8012AB98[triVerts[0]].x;
                D_8012AB64.y = D_8012AB98[triVerts[0]].y;
                D_8012AB64.z = D_8012AB98[triVerts[0]].z;
                D_8012AB4C.x = D_8012AB98[triVerts[1]].x;
                D_8012AB4C.y = D_8012AB98[triVerts[1]].y;
                D_8012AB4C.z = D_8012AB98[triVerts[1]].z;
                D_8012AB7C.x = D_8012AB98[triVerts[2]].x;
                D_8012AB7C.y = D_8012AB98[triVerts[2]].y;
                D_8012AB7C.z = D_8012AB98[triVerts[2]].z;
                triCount++;
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
do { do { do { do { do { do { do { do { do { do { do { do { do { do { do {                 debugPrintf(D_8012AA84, entryIdx);
                debugPrintf(D_8012AA98, D_8012AB64.x, D_8012AB64.y, D_8012AB64.z);
                debugPrintf(D_8012AABC, D_8012AB4C.x, D_8012AB4C.y, D_8012AB4C.z);
                debugPrintf(D_8012AAE0, D_8012AB7C.x, D_8012AB7C.y, D_8012AB7C.z); } while (0); } while (0); } while (0); } while (0); } while (0); } while (0); } while (0); } while (0); } while (0); } while (0); } while (0); } while (0); } while (0); } while (0); } while (0);
            }
        }
    }
    debugPrintf(D_8012AB20, triCount);
}
