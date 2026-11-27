typedef struct { u8 pad0[4]; u16 flags; u8 pad6[5]; u8 xB; u8 padC[0x58]; } Obj;
typedef struct { u8 pad0; u8 y; s8 x; s8 z; s8 tex; } Point;
typedef struct { u8 a; u8 b; u8 pad2[2]; void *tex; u8 pad8[8]; } Link;
typedef struct { u8 a; u8 b; u8 count; } Info;
typedef struct { s8 x; s8 z; u8 tex; u16 cell; u16 id; } Mark;
typedef struct { u8 a; u8 tex; u16 id; } Start;
typedef struct { u32 w0; u32 w1; } Tex;
typedef struct Def Def;
extern Obj D_8011F2F0[];
extern Info D_801C5E9C;
extern Info *trackInfo;
extern Point trackPoints[];
extern Point *D_801C706C;
extern u8 blockFootprint;
extern u16 D_801C746A;
extern u16 D_801C6BB6;
extern Mark blockPos;
extern Mark finishPos;
extern u8 D_801C7AB6;
extern Link D_801C7D30[];
extern Tex D_8031445C[];
extern u16 D_801C6BE0[];
extern u8 D_801C7AD8[];
void func_801B3F08(void);
void func_801B4070(void);
void func_801BFA1C(u8, u8);
void func_801BB1F0(u8);
u16 objCreate(u8, u8, u8, u16, u8, u8, Def *, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32);

/* Builds the track's start and finish marker objects from the track point
 * list, then one object per piece (cell lookup tables are filled in as it
 * goes), and sets each piece's start/middle/end role. */
void initTrackObjects(void) {
    u8 pieceIdx;
    u16 cell;
    u16 pieceObj;

    trackInfo = &D_801C5E9C;
    D_801C706C = trackPoints;
    blockFootprint = trackPoints[0].pad0;
    blockPos.x = trackPoints[0].x;
    blockPos.z = trackPoints[0].z;
    blockPos.tex = trackPoints[0].tex;
    blockPos.cell = blockPos.x + blockPos.z * 24;
    D_801C746A = objCreate(0, 0, 3, 0, 0x5B, 0x64, 0, 0, (s32) func_801B3F08, (f32) blockPos.x * 400.0f * 0.5f, (f32) trackPoints[0].y * 0.5f, (f32) blockPos.z * 400.0f * 0.5f, 0.0f, 0.0f, 0.0f, 0.5f, 0.5f, 0.5f);
    D_8011F2F0[D_801C746A].flags |= 0x20;
    D_8011F2F0[D_801C746A].xB = 0xC;
    finishPos.x = trackPoints[D_801C5E9C.count - 1].x;
    finishPos.z = trackPoints[D_801C5E9C.count - 1].z;
    finishPos.tex = trackPoints[D_801C5E9C.count - 1].tex;
    finishPos.cell = finishPos.x + finishPos.z * 24;
    D_801C6BB6 = objCreate(0, 0, 3, 0, 0x5B, 0x64, 0, 0, (s32) func_801B4070, (f32) finishPos.x * 400.0f * 0.5f, (f32) trackPoints[D_801C5E9C.count - 1].y * 0.5f, (f32) finishPos.z * 400.0f * 0.5f, 0.0f, 0.0f, 0.0f, 0.5f, 0.5f, 0.5f);
    D_8011F2F0[D_801C6BB6].flags |= 0x20;
    D_8011F2F0[D_801C6BB6].xB = 0xC;
    D_801C7AB6 = D_801C5E9C.count;
    for (pieceIdx = 0; pieceIdx < D_801C5E9C.count; pieceIdx++) {
        cell = trackPoints[pieceIdx].x + trackPoints[pieceIdx].z * 24;
        D_801C7D30[cell].a = 0;
        D_801C7D30[cell].b = 1;
        D_801C7D30[cell].tex = &D_8031445C[trackPoints[pieceIdx].tex];
        pieceObj = objCreate(0, 0, 2, 0, 0x5A, 0xFF, (Def *) &D_801C7D30[cell], 0, 0, (f32) trackPoints[pieceIdx].x * 400.0f * 0.5f, (f32) trackPoints[pieceIdx].y * 0.5f, (f32) trackPoints[pieceIdx].z * 400.0f * 0.5f, 0.0f, 0.0f, 0.0f, 0.5f, 0.5f, 0.5f);
        D_8011F2F0[pieceObj].flags |= 8;
        D_801C6BE0[cell] = pieceObj;
        D_801C7AD8[cell] = pieceIdx;
        if (D_801C5E9C.b == 5) {
            if (pieceIdx == D_801C5E9C.count - 1) {
                func_801BFA1C(pieceIdx, 1);
            } else {
                func_801BB1F0(pieceIdx);
            }
        } else if (pieceIdx == 0) {
            func_801BFA1C(0, 0);
        } else if (pieceIdx == D_801C5E9C.count - 1) {
            func_801BFA1C(pieceIdx, 1);
        } else {
            func_801BB1F0(pieceIdx);
        }
    }
}
