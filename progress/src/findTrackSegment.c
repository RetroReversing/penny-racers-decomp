typedef struct { u8 pad0[0x40]; s16 maxX; u8 pad42[2]; s16 maxZ; u8 pad46[0xA]; s16 minX; u8 pad52[2]; s16 minZ; } Box;
typedef struct { u8 pad0[4]; Box *box; } B2;
typedef struct { u8 pad0[4]; B2 *b2; } B1;
typedef struct { u8 pad0[4]; B1 *b1; u16 h8; u16 hA; u16 hC; u16 hE; } Link;
typedef struct { u8 pad0[0x18]; f32 x; f32 y; f32 z; u8 pad24[0x2C]; Link *link; u8 pad54[0x10]; } Obj;
extern Obj D_8011F2F0[];

/* Finds the track segment containing point (x, y, z), starting from *seg and stepping to a neighbouring segment when the point has left the current one; returns 1 if inside, 2 if inside a neighbour's margin, 0 if not found. */ s32 findTrackSegment(u16 *seg, u16 *dir, f32 x, f32 y, f32 z) {
    Box *box;
    Obj *o;
    u16 nextSeg;
    box = D_8011F2F0[*seg].link->b1->b2->box;
    if (x <= (box->maxX) + D_8011F2F0[*seg].x && (box->minX) + D_8011F2F0[*seg].x <= x && z <= (box->maxZ) + D_8011F2F0[*seg].z && (box->minZ) + D_8011F2F0[*seg].z <= z) {
        return 1;
    }
    if (*dir == 0) {
        if (D_8011F2F0[*seg].link->hA != 0xFFFF) {
            nextSeg = D_8011F2F0[*seg].link->hA;
        } else {
            nextSeg = D_8011F2F0[*seg].link->hE;
            *dir = 1;
        }
    } else {
        if (D_8011F2F0[*seg].link->hE != 0xFFFF) {
            nextSeg = D_8011F2F0[*seg].link->hE;
        } else {
            nextSeg = D_8011F2F0[*seg].link->hA;
            *dir = 0;
        }
    }
    box = D_8011F2F0[nextSeg].link->b1->b2->box;
    if (x <= (box->maxX + 30) + D_8011F2F0[nextSeg].x && (box->minX - 30) + D_8011F2F0[nextSeg].x <= x && z <= (box->maxZ + 30) + D_8011F2F0[nextSeg].z && (box->minZ - 30) + D_8011F2F0[nextSeg].z <= z) {
        if (x <= (box->maxX) + D_8011F2F0[nextSeg].x && (box->minX) + D_8011F2F0[nextSeg].x <= x && z <= (box->maxZ) + D_8011F2F0[nextSeg].z && (box->minZ) + D_8011F2F0[nextSeg].z <= z) {
            *seg = nextSeg;
            return 1;
        }
        *seg = nextSeg;
        return 2;
    }
    if (*dir == 0) {
        if (D_8011F2F0[*seg].link->h8 != 0xFFFF) {
            nextSeg = D_8011F2F0[*seg].link->h8;
        } else {
            nextSeg = D_8011F2F0[*seg].link->hC;
            *dir = 1;
        }
    } else {
        if (D_8011F2F0[*seg].link->hC != 0xFFFF) {
            nextSeg = D_8011F2F0[*seg].link->hC;
        } else {
            nextSeg = D_8011F2F0[*seg].link->h8;
            *dir = 0;
        }
    }
    box = D_8011F2F0[nextSeg].link->b1->b2->box;
    if (x <= (box->maxX + 30) + D_8011F2F0[nextSeg].x && (box->minX - 30) + D_8011F2F0[nextSeg].x <= x && z <= (box->maxZ + 30) + D_8011F2F0[nextSeg].z && (box->minZ - 30) + D_8011F2F0[nextSeg].z <= z) {
        if (x <= (box->maxX) + D_8011F2F0[nextSeg].x && (box->minX) + D_8011F2F0[nextSeg].x <= x && z <= (box->maxZ) + D_8011F2F0[nextSeg].z && (box->minZ) + D_8011F2F0[nextSeg].z <= z) {
            *seg = nextSeg;
            return 1;
        }
        *seg = nextSeg;
        return 2;
    }
    return 0;
}
