typedef struct {
    u8 unk0;
    u8 b1;
    u8 pad2[2];
    void *unk4;
    u8 pad8[0x2C];
} Def;
typedef struct {
    u8 pad0[0x14];
    u16 child;
    u8 pad16[0x3A];
    Def *def;
    u8 pad54[0x10];
} Obj;
typedef struct {
    s8 sel;
    s8 pad1;
    s8 car[0x10E];
} Ply;
typedef struct { u8 b[0xC]; } Gx;
extern Obj D_8011F2F0[];
extern Ply D_8021E22F[];
extern s8 D_8021E231[];
extern Gx D_80237DC0[];
extern Def D_8021E680[][8];
extern Def D_80238EC0[];
extern u16 D_8021EFF0[];
extern u16 D_8021F090[];
extern u16 D_8021E146;
extern u16 D_8021F024;
extern u16 D_8021F026;
extern u16 D_8021EFF8;
extern s16 D_8021E1A2;
extern f32 D_8021B024[];
extern f32 D_8021B038[];
extern f32 D_8021B04C[];
extern f32 D_8021B2D8[];
extern f32 D_8021B2E8[];
extern void func_8020AAB0();
extern void func_8020B3CC();
extern void func_8013DD2C();
extern void func_8020AA48();
extern void func_8020FED8();
s32 func_800DE41C(u8 arg0, u8 arg1, u8 arg2, u16 arg3, u8 arg4, u8 arg5, void *arg6, void *arg7, void *arg8, f32 arg9, f32 arg10, f32 arg11, f32 arg12, f32 arg13, f32 arg14, f32 arg15, f32 arg16, f32 arg17);

void func_8020A160(s32 arg0) {
    s32 i;
    s32 j;
    f32 y;


    D_8021EFF0[arg0] = func_800DE41C(0, arg0, 3, 0, 0x6E, 0, 0, func_8020AAB0, func_8020B3CC, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    if (D_8021E1A2 == 0) {
        for (i = 0; i < 5; i++) {
            for (j = 0; j < 8; j++) {
                D_8021E680[i][j] = D_80238EC0[j];
            }
        }
        func_800DE41C(0, 0, 3, 0, 0xA1, 0xFF, 0, 0, func_8013DD2C, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
        D_8021F090[0] = func_800DE41C(0, 0, 1, 0, 0x64, 0xFF, D_8021E680[0], func_8020AA48, func_8020FED8, D_8021B024[0], D_8021B038[0], D_8021B04C[0], 15.0f, 0.0f, 0.0f, 0.3f, 0.3f, 0.3f);
        D_8011F2F0[D_8011F2F0[D_8021F090[arg0]].child].def->unk4 = &D_80237DC0[D_8021E231[arg0 * 0x110 + D_8021E22F[arg0].sel]];
        D_8021E146 = func_800DE41C(0, 0, 1, 0, 0x64, 0xFF, D_8021E680[1], 0, func_8020FED8, D_8021B024[1], 0.0f, D_8021B04C[1], 15.0f, 0.0f, 0.0f, 0.3f, 0.3f, 0.3f);
        D_8011F2F0[D_8011F2F0[D_8021E146].child].def->unk4 = &D_80237DC0[D_8021E231[arg0 * 0x110 + D_8021E22F[arg0].sel]];
        D_8021F024 = func_800DE41C(0, 0, 1, 0, 0x64, 0xFF, D_8021E680[2], 0, func_8020FED8, D_8021B024[2], 0.0f, D_8021B04C[2], 15.0f, 0.0f, 0.0f, 0.3f, 0.3f, 0.3f);
        D_8011F2F0[D_8011F2F0[D_8021F024].child].def->unk4 = &D_80237DC0[D_8021E231[arg0 * 0x110 + D_8021E22F[arg0].sel]];
        D_8021F026 = func_800DE41C(0, 0, 1, 0, 0x64, 0xFF, D_8021E680[3], 0, func_8020FED8, D_8021B024[3], 0.0f, D_8021B04C[3], 15.0f, 0.0f, 0.0f, 0.3f, 0.3f, 0.3f);
        D_8011F2F0[D_8011F2F0[D_8021F026].child].def->unk4 = &D_80237DC0[D_8021E231[arg0 * 0x110 + D_8021E22F[arg0].sel]];
        D_8021EFF8 = func_800DE41C(0, 0, 1, 0, 0x64, 0xFF, D_8021E680[4], 0, func_8020FED8, D_8021B024[4], 0.0f, D_8021B04C[4], 15.0f, 0.0f, 0.0f, 0.3f, 0.3f, 0.3f);
        D_8011F2F0[D_8011F2F0[D_8021EFF8].child].def->unk4 = &D_80237DC0[D_8021E231[arg0 * 0x110 + D_8021E22F[arg0].sel]];
    } else {
        if (D_8021E1A2 == 1) {
            y = 5.0f;
        } else {
            y = 0.0f;
        }
        for (j = 0; j < 8; j++) {
            D_8021E680[arg0][j] = D_80238EC0[j];
        }
        func_800DE41C(0, 0, 3, 0, 0xA1, 0xFF, 0, 0, func_8013DD2C, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
        D_8021F090[arg0] = func_800DE41C(0, arg0, 1, 0, 0x64, 0xFF, D_8021E680[arg0], func_8020AA48, func_8020FED8, 12.0f, y + D_8021B2D8[arg0], 0.0f, D_8021B2E8[arg0], 0.0f, 0.0f, 0.4f, 0.4f, 0.4f);
        D_8011F2F0[D_8011F2F0[D_8021F090[arg0]].child].def->unk4 = &D_80237DC0[D_8021E231[arg0 * 0x110 + D_8021E22F[arg0].sel]];
    }
}
