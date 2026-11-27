typedef struct { u8 pad0[0x18]; f32 pos[3]; u8 pad24[0x20]; f32 vel[3]; u8 pad50[0x14]; } Obj;
typedef struct { u8 pad0; u8 y; s8 x; s8 z; s8 tex; } Point;
typedef struct { u8 a; u8 b; u8 pad2[2]; void *tex; u16 prev; u16 next; u16 c; u16 e; } Link;
typedef struct { u8 pad0[2]; u8 count; } Info;
typedef struct { u32 w0; u32 w1; } Tex;
typedef struct Def Def;
extern Obj D_8011F2F0[];
extern Link D_802330B0[];
extern Tex D_8031445C[];
extern Info *trackInfo;
extern u16 D_80233EC0;
u16 objCreate(u8, u8, u8, u16, u8, u8, Def *, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32);

/* Creates one object per track point (the first in the list is the start),
 * stores each in the link table, and joins them into a loop with prev/next
 * indices. Each object's velocity starts equal to its position. */
void linkTrackPieces(Point *points) {
    u16 firstObj;
    u16 pieceObj;
    u16 i;

    i = 0;
    D_802330B0[i].a = 0;
    D_802330B0[i].b = 1;
    D_802330B0[i].tex = &D_8031445C[points[0].tex];
    firstObj = objCreate(0, 0, 2, 0, 0x51, 0xFF, (Def *) &D_802330B0[i], 0, 0, (f32) points[0].x * 400.0f + 400.0f, (f32) points[0].y, (f32) points[0].z * 400.0f + 400.0f, 0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1.0f);
    D_80233EC0 = firstObj;
    D_802330B0[i].prev = trackInfo->count + (u16) (firstObj - 1);
    D_802330B0[i].next = firstObj + 1;
    D_802330B0[i].c = 0xFFFF;
    D_802330B0[i].e = 0xFFFF;
    D_8011F2F0[firstObj].vel[0] = D_8011F2F0[firstObj].pos[0];
    D_8011F2F0[firstObj].vel[1] = D_8011F2F0[firstObj].pos[1];
    D_8011F2F0[firstObj].vel[2] = D_8011F2F0[firstObj].pos[2];
    for (i = 1; i < trackInfo->count - 1; i++) {
    D_802330B0[i].a = 0;
    D_802330B0[i].b = 1;
    D_802330B0[i].tex = &D_8031445C[points[i].tex];
    pieceObj = objCreate(0, 0, 2, 0, 0x51, 0xFF, (Def *) &D_802330B0[i], 0, 0, (f32) points[i].x * 400.0f + 400.0f, (f32) points[i].y, (f32) points[i].z * 400.0f + 400.0f, 0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1.0f);
    D_802330B0[i].prev = i + (u16) (firstObj - 1);
    D_802330B0[i].next = i + (u16) (firstObj + 1);
    D_802330B0[i].c = 0xFFFF;
    D_802330B0[i].e = 0xFFFF;
    D_8011F2F0[pieceObj].vel[0] = D_8011F2F0[pieceObj].pos[0];
    D_8011F2F0[pieceObj].vel[1] = D_8011F2F0[pieceObj].pos[1];
    D_8011F2F0[pieceObj].vel[2] = D_8011F2F0[pieceObj].pos[2];
    }
    D_802330B0[i].a = 0;
    D_802330B0[i].b = 1;
    D_802330B0[i].tex = &D_8031445C[points[i].tex];
    pieceObj = objCreate(0, 0, 2, 0, 0x51, 0xFF, (Def *) &D_802330B0[i], 0, 0, (f32) points[i].x * 400.0f + 400.0f, (f32) points[i].y, (f32) points[i].z * 400.0f + 400.0f, 0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1.0f);
    D_802330B0[i].prev = trackInfo->count + (u16) (firstObj - 2);
    D_802330B0[i].next = firstObj;
    D_802330B0[i].c = 0xFFFF;
    D_802330B0[i].e = 0xFFFF;
    D_8011F2F0[pieceObj].vel[0] = D_8011F2F0[pieceObj].pos[0];
    D_8011F2F0[pieceObj].vel[1] = D_8011F2F0[pieceObj].pos[1];
    D_8011F2F0[pieceObj].vel[2] = D_8011F2F0[pieceObj].pos[2];
}
