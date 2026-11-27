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
extern Info *D_801C7AB0;
extern Point D_801C7080[];
extern Point *D_801C706C;
extern u8 D_801C7469;
extern u16 D_801C746A;
extern u16 D_801C6BB6;
extern Mark D_801C6BB0;
extern Mark D_801C7062;
extern u8 D_801C7AB6;
extern Link D_801C7D30[];
extern Tex D_8031445C[];
extern u16 D_801C6BE0[];
extern u8 D_801C7AD8[];
void func_801B3F08(void);
void func_801B4070(void);
void func_801BFA1C(u8, u8);
void func_801BB1F0(u8);
u16 func_800DE41C(u8, u8, u8, u16, u8, u8, Def *, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32);

void func_801AF334(void) {
    u8 i;
    u16 cell;
    u16 id;

    D_801C7AB0 = &D_801C5E9C;
    D_801C706C = D_801C7080;
    D_801C7469 = D_801C7080[0].pad0;
    D_801C6BB0.x = D_801C7080[0].x;
    D_801C6BB0.z = D_801C7080[0].z;
    D_801C6BB0.tex = D_801C7080[0].tex;
    D_801C6BB0.cell = D_801C6BB0.x + D_801C6BB0.z * 24;
    D_801C746A = func_800DE41C(0, 0, 3, 0, 0x5B, 0x64, 0, 0, (s32) func_801B3F08, (f32) D_801C6BB0.x * 400.0f * 0.5f, (f32) D_801C7080[0].y * 0.5f, (f32) D_801C6BB0.z * 400.0f * 0.5f, 0.0f, 0.0f, 0.0f, 0.5f, 0.5f, 0.5f);
    D_8011F2F0[D_801C746A].flags |= 0x20;
    D_8011F2F0[D_801C746A].xB = 0xC;
    D_801C7062.x = D_801C7080[D_801C5E9C.count - 1].x;
    D_801C7062.z = D_801C7080[D_801C5E9C.count - 1].z;
    D_801C7062.tex = D_801C7080[D_801C5E9C.count - 1].tex;
    D_801C7062.cell = D_801C7062.x + D_801C7062.z * 24;
    D_801C6BB6 = func_800DE41C(0, 0, 3, 0, 0x5B, 0x64, 0, 0, (s32) func_801B4070, (f32) D_801C7062.x * 400.0f * 0.5f, (f32) D_801C7080[D_801C5E9C.count - 1].y * 0.5f, (f32) D_801C7062.z * 400.0f * 0.5f, 0.0f, 0.0f, 0.0f, 0.5f, 0.5f, 0.5f);
    D_8011F2F0[D_801C6BB6].flags |= 0x20;
    D_8011F2F0[D_801C6BB6].xB = 0xC;
    D_801C7AB6 = D_801C5E9C.count;
    for (i = 0; i < D_801C5E9C.count; i++) {
        cell = D_801C7080[i].x + D_801C7080[i].z * 24;
        D_801C7D30[cell].a = 0;
        D_801C7D30[cell].b = 1;
        D_801C7D30[cell].tex = &D_8031445C[D_801C7080[i].tex];
        id = func_800DE41C(0, 0, 2, 0, 0x5A, 0xFF, (Def *) &D_801C7D30[cell], 0, 0, (f32) D_801C7080[i].x * 400.0f * 0.5f, (f32) D_801C7080[i].y * 0.5f, (f32) D_801C7080[i].z * 400.0f * 0.5f, 0.0f, 0.0f, 0.0f, 0.5f, 0.5f, 0.5f);
        D_8011F2F0[id].flags |= 8;
        D_801C6BE0[cell] = id;
        D_801C7AD8[cell] = i;
        if (D_801C5E9C.b == 5) {
            if (i == D_801C5E9C.count - 1) {
                func_801BFA1C(i, 1);
            } else {
                func_801BB1F0(i);
            }
        } else if (i == 0) {
            func_801BFA1C(0, 0);
        } else if (i == D_801C5E9C.count - 1) {
            func_801BFA1C(i, 1);
        } else {
            func_801BB1F0(i);
        }
    }
}
