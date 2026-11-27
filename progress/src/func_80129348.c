typedef struct { u8 pad0[0x40]; s16 maxX; u8 pad42[2]; s16 maxZ; u8 pad46[0xA]; s16 minX; u8 pad52[2]; s16 minZ; } Box;
typedef struct { u8 pad0[4]; Box *box; } B2;
typedef struct { u8 pad0[4]; B2 *b2; } B1;
typedef struct { u8 pad0[4]; B1 *b1; u16 h8; u16 hA; u16 hC; u16 hE; } Link;
typedef struct { u8 pad0[0x18]; f32 x; f32 y; f32 z; u8 pad24[0x2C]; Link *link; u8 pad54[0x10]; } Obj;
extern Obj D_8011F2F0[];

s32 func_80129348(u16 *seg, u16 *dir, f32 x, f32 y, f32 z) {
    Box *box;
    Obj *o;
    u16 id;
    box = D_8011F2F0[*seg].link->b1->b2->box;
    if (x <= (box->maxX) + D_8011F2F0[*seg].x && (box->minX) + D_8011F2F0[*seg].x <= x && z <= (box->maxZ) + D_8011F2F0[*seg].z && (box->minZ) + D_8011F2F0[*seg].z <= z) {
        return 1;
    }
    if (*dir == 0) {
        if (D_8011F2F0[*seg].link->hA != 0xFFFF) {
            id = D_8011F2F0[*seg].link->hA;
        } else {
            id = D_8011F2F0[*seg].link->hE;
            *dir = 1;
        }
    } else {
        if (D_8011F2F0[*seg].link->hE != 0xFFFF) {
            id = D_8011F2F0[*seg].link->hE;
        } else {
            id = D_8011F2F0[*seg].link->hA;
            *dir = 0;
        }
    }
    box = D_8011F2F0[id].link->b1->b2->box;
    if (x <= (box->maxX + 30) + D_8011F2F0[id].x && (box->minX - 30) + D_8011F2F0[id].x <= x && z <= (box->maxZ + 30) + D_8011F2F0[id].z && (box->minZ - 30) + D_8011F2F0[id].z <= z) {
        if (x <= (box->maxX) + D_8011F2F0[id].x && (box->minX) + D_8011F2F0[id].x <= x && z <= (box->maxZ) + D_8011F2F0[id].z && (box->minZ) + D_8011F2F0[id].z <= z) {
            *seg = id;
            return 1;
        }
        *seg = id;
        return 2;
    }
    if (*dir == 0) {
        if (D_8011F2F0[*seg].link->h8 != 0xFFFF) {
            id = D_8011F2F0[*seg].link->h8;
        } else {
            id = D_8011F2F0[*seg].link->hC;
            *dir = 1;
        }
    } else {
        if (D_8011F2F0[*seg].link->hC != 0xFFFF) {
            id = D_8011F2F0[*seg].link->hC;
        } else {
            id = D_8011F2F0[*seg].link->h8;
            *dir = 0;
        }
    }
    box = D_8011F2F0[id].link->b1->b2->box;
    if (x <= (box->maxX + 30) + D_8011F2F0[id].x && (box->minX - 30) + D_8011F2F0[id].x <= x && z <= (box->maxZ + 30) + D_8011F2F0[id].z && (box->minZ - 30) + D_8011F2F0[id].z <= z) {
        if (x <= (box->maxX) + D_8011F2F0[id].x && (box->minX) + D_8011F2F0[id].x <= x && z <= (box->maxZ) + D_8011F2F0[id].z && (box->minZ) + D_8011F2F0[id].z <= z) {
            *seg = id;
            return 1;
        }
        *seg = id;
        return 2;
    }
    return 0;
}
