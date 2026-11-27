typedef struct { u8 unk0; u8 unk1; u16 unk2; u16 unk4; u8 pad6[7]; u8 unkD; u8 padE[0x18 - 0xE]; f32 x; f32 y; f32 z; u8 pad24[0x3E - 0x24]; u16 st; u8 pad40[0x24]; } Car;
typedef struct { u8 v; u8 pad[0x63]; } Saved;
typedef struct { s32 v; u8 pad[0x6C]; } PadS;
typedef struct { u8 unk0; u8 unk1; u8 unk2; u8 unk3; u8 unk4; } Slot;
typedef struct { u8 unk0; u8 unk1; u8 unk2; u8 unk3; } MenuState;
typedef struct { u8 pad[8]; } Row;
typedef struct { u8 f0; u8 f1; u8 pad2[2]; Row *f4; u8 pad8[8]; } Part;
typedef struct { s16 a; u8 pad[0x26]; s16 b; } Two;
typedef struct { u16 a[4]; } Four;
extern Car D_8011F2F0[];
extern Saved D_8011F32F[];
typedef struct { u8 pad0[0x2108]; s16 a; u8 pad[0x26]; s16 b; } Mode;
extern Mode D_800DB1B8;
extern PadS D_801E9990[];
extern PadS D_801E9994[];
extern Slot D_801C7080[];
extern MenuState *D_801C7AB0;
extern u8 D_801C5EA0;
extern u16 D_801C5EA4;
extern u16 D_801C6BB4;
extern s8 D_801C6BB9;
extern u16 D_801C6BE0[];
extern u8 D_801C7060;
extern u16 D_801C7066;
extern u8 D_801C7068;
extern u8 D_801C7070;
extern u16 D_801C7074;
extern u16 D_801C7078;
extern u8 D_801C707B;
extern u8 D_801C7468;
extern u16 D_801C7470[][4];
extern u8 D_801C7AB4;
extern s8 D_801C7AB5;
extern u8 D_801C7AB6;
extern u8 D_801C7AB8;
extern u8 D_801C7ABC;
extern Row *D_801C7AC4;
extern u8 D_801C7AD8[];
extern u16 D_801C7D18;
extern u16 D_801C7D1A[];
extern u16 D_801C7D24;
extern Part D_801C7D30[];
extern u8 D_801CA130;
extern s8 D_801CA138;
extern Row D_8031445C[];
void func_8019F7C0(u16);
void func_8019E734(s32);
void func_8019E814(u16);
void func_801A03F4(u16);
u8 func_801C3418(void);
u8 func_801C1CA4(s8);
u16 func_800DE41C(s32, s32, s32, s32, s32, s32, void *, void *, void *, f32, f32, f32, f32, f32, f32, f32, f32, f32);
u8 func_80190D40(s8);
void func_801BB1F0(u8);
void func_801A5610(void);
void func_8014B854(s32);
u8 func_801A0590(void);
void func_801BD7E8(void);
void func_801B727C(u8);

#define SLOT D_801C7080[D_801CA130]
#define VEC D_8011F2F0[D_801C7D18]
#define FX ((f32)(s8)D_801C7068 * 400.0f * 0.5f)
#define FZ ((f32)D_801C6BB9 * 400.0f * 0.5f)
#define OTHERS (D_801C7078 != D_801C6BB4 && D_801C7078 != D_801C7066)
#define CLEAR_NEW() \
    for (i = 0; i < 4; i++) { \
        if (D_801C7D1A[i] != 0xFFFF) { \
            D_8011F2F0[D_801C7D1A[i]].unkD = 2; \
            D_801C7D1A[i] = 0xFFFF; \
        } \
    }
#define CLEAR_SLOT() \
    for (i = 0; i < 4; i++) { \
        if (D_801C7470[D_801CA130][i] != 0xFFFF) { \
            D_8011F2F0[D_801C7470[D_801CA130][i]].unkD = 2; \
            D_801C7470[D_801CA130][i] = 0xFFFF; \
            D_801C7AB6--; \
        } \
    }
#define FULL() \
    func_8014B854(0x3E); \
    D_801C5EA4 = 0; \
    D_8011F2F0[D_801C7074].unk0 = D_8011F32F[D_801C7074].v; \
    D_8011F2F0[D_801C7074].st = 0xD
#define KEEP() \
    SLOT.unk0 = D_801C7AB8
#define FINISH() \
    SLOT.unk2 = D_801C7068; \
    SLOT.unk3 = D_801C6BB9; \
    SLOT.unk4 = D_801C7AB4; \
    func_801BB1F0(D_801CA130)
#define DONE() \
    D_801C7AB0->unk3 = 0; \
    D_801C5EA0 = 0; \
    func_8014B854(0x40)
#define TAIL() \
    D_8011F2F0[D_801C6BE0[D_801C7078]].y = (f32)D_801C7070 * 0.5f; \
    KEEP(); \
    SLOT.unk1 = D_801C7070; \
    FINISH(); \
    DONE()
#define PICK() \
    D_801C7AC4 = &D_8031445C[(s8)D_801C7AB4]; \
    func_801BD7E8()

void func_801C1DC0(u16 arg0)
{
    u8 cost;
    u8 next;
    u8 id;
    u8 i;
    u16 e;
    u8 unused[0x50];

    if (D_801C707B == 0) {
        D_800DB1B8.a = 1;
        D_800DB1B8.b = 1;
        func_8019F7C0(arg0);
        func_8019E734(arg0);
        D_8011F2F0[D_801C7D24].x = 0.0f;
        D_8011F2F0[D_801C7D24].y = 10000.0f;
        D_8011F2F0[D_801C7D24].z = 0.0f;
        D_801C7078 = (s8)D_801C7068 + D_801C6BB9 * 0x18;
        D_801CA130 = func_801C3418();
        D_801C7AB8 = SLOT.unk0;
        cost = func_801C1CA4(SLOT.unk4);
        if (D_801CA130 == D_801C7AB0->unk2) {
            VEC.x = FX;
            VEC.y = 0.0f;
            VEC.z = FZ;
        } else {
            if (D_801C7AB0->unk0 == 3) {
                id = SLOT.unk4;
            } else {
                id = SLOT.unk4 - 0x2E;
            }
            if ((u8)(id - 0x16) < 0x14) {
                VEC.x = FX;
                VEC.y = (f32)(SLOT.unk1 + 0x3C) * 0.5f;
                VEC.z = FZ;
            } else {
                VEC.x = FX;
                VEC.y = (f32)SLOT.unk1 * 0.5f;
                VEC.z = FZ;
            }
        }
        if (D_801CA138 != 0) {
            next = func_801C1CA4(D_801C7AB4);
            if (D_801CA130 == D_801C7AB0->unk2) {
                if (D_801C7AB6 + next + 1 < 0xC9) {
                    D_801C7D30[D_801C7078].f0 = 0;
                    D_801C7D30[D_801C7078].f1 = 1;
                    D_801C7D30[D_801C7078].f4 = &D_8031445C[(s8)D_801C7AB4];
                    e = func_800DE41C(0, 0, 2, 0, 0x5A, 0xFF, &D_801C7D30[D_801C7078], 0, 0,
                                      FX, 0.0f, FZ, 0.0f, 0.0f, 0.0f, 0.5f, 0.5f, 0.5f);
                    D_8011F2F0[e].unk4 |= 8;
                    D_801C6BE0[D_801C7078] = e;
                    D_801C7AD8[D_801C7078] = D_801C7AB0->unk2;
                    D_8011F2F0[e].y = (f32)func_80190D40(D_801C7AB4) * 0.5f;
                    (&SLOT)->unk0 = D_801C7AB8;
                    (&SLOT)->unk1 = (u8)D_8011F2F0[D_801C6BE0[D_801C7078]].y * 2;
                    FINISH();
                    D_801C7AB0->unk2++;
                    D_801C7AB6++;
                    DONE();
                } else {
                    FULL();
                }
            } else {
                if (D_801C7AB5 != 0) {
                    func_801A5610();
                    if (OTHERS) {
                        D_801C7D30[D_801C7078].f4 = &D_8031445C[(s8)D_801C7AB4];
                        CLEAR_SLOT();
                    }
                    D_801C7AB5 = 0;
                    TAIL();
                } else if (D_801C7AB6 - cost + next >= 0xC9) {
                    FULL();
                } else {
                    if (OTHERS) {
                        D_801C7D30[D_801C7078].f4 = &D_8031445C[(s8)D_801C7AB4];
                        CLEAR_SLOT();
                    }
                    TAIL();
                }
            }
            D_801CA138 = 0;
        }
        if (D_801E9990[arg0].v == 1 && D_801E9994[arg0].v == 0) {
            if (D_801CA130 == D_801C7AB0->unk2) {
                if (D_801C7AB6 >= 0xC8) {
                    FULL();
                } else {
                    func_8014B854(0x3D);
                    D_801C7ABC = 0;
                    if (D_801C7AB0->unk0 == 3) {
                        D_801C7AB4 = 0;
                    } else {
                        D_801C7AB4 = 0x2E;
                    }
                    D_801C7468 = D_801C7070 = func_80190D40(D_801C7AB4);
                    CLEAR_NEW();
                    PICK();
                    D_801C707B = 1;
                }
            } else {
                func_8014B854(0x3D);
                D_801C7ABC = func_801A0590();
                D_801C7AB4 = SLOT.unk4;
                D_801C7468 = D_801C7070 = SLOT.unk1;
                CLEAR_NEW();
                PICK();
                D_801C707B = 1;
            }
        } else if (D_801E9990[arg0].v == 0 && D_801E9994[arg0].v == 1) {
            if (D_801CA130 != D_801C7AB0->unk2 && OTHERS) {
                CLEAR_SLOT();
                if (D_801C6BE0[D_801C7078] != 0xFFFF) {
                    D_8011F2F0[D_801C6BE0[D_801C7078]].unkD = 2;
                }
                D_801C6BE0[D_801C7078] = 0xFFFF;
                D_801C7AD8[D_801C7078] = 0xFF;
                func_801B727C(D_801CA130);
                func_8014B854(0x3F);
                D_801C7AB0->unk3 = 0;
                D_801C5EA0 = 0;
            }
        }
        D_801C7060 = 0;
    } else if (D_801C707B == 1) {
        D_800DB1B8.a = 2;
        D_800DB1B8.b = 2;
        func_8019E814(arg0);
        func_801A03F4(arg0);
        D_8011F2F0[D_801C7D24].x = 0.0f;
        D_8011F2F0[D_801C7D24].y = 0.0f;
        D_8011F2F0[D_801C7D24].z = 0.0f;
        if (D_801E9990[arg0].v == 1 && D_801E9994[arg0].v == 0) {
            if (D_801CA130 == D_801C7AB0->unk2) {
                D_801CA138 = 1;
            }
            CLEAR_NEW();
            D_801C707B = 0;
        } else if (D_801E9990[arg0].v == 0 && D_801E9994[arg0].v == 1) {
            if (D_801CA138 != 0) {
                if (D_801CA130 == D_801C7AB0->unk2) {
                    if (D_801C7AB0->unk0 == 3) {
                        D_801C7AB4 = 0;
                    } else {
                        D_801C7AB4 = 0x2E;
                    }
                    D_801C7070 = 0;
                } else {
                    D_801C7AB4 = SLOT.unk4;
                    D_801C7070 = SLOT.unk1;
                }
                CLEAR_NEW();
                PICK();
                D_801CA138 = 0;
                if (D_801C7AB5 != 0) {
                    D_801C7AB5 = 0;
                }
                if (D_801C7ABC == 0) {
                    D_801C7ABC = func_801A0590();
                }
            } else {
                CLEAR_NEW();
                D_801C707B = 0;
            }
            func_8014B854(0x3A);
        }
        D_801C7060 = 1;
    }
}
