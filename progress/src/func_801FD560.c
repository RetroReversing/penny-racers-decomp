typedef struct { u8 f0, f1; u8 p2[2]; s32 f4; u8 f8, f9, fA, fB, fC, fD, fE, fF; u8 f10; u8 p11[3]; s32 f14; u8 f18, f19; u8 p1A[2]; } Voice;
typedef struct { s16 f0; u8 p2[6]; s32 f8; f32 fC; s16 f10; s16 f12; u8 f14, f15; u8 p16[12]; u8 f22; u8 p23[9]; } Slot;
typedef struct { u8 p0[4]; u16 f4; u16 f6; u16 f8; u8 pA[0x64 - 10]; } Obj;
extern Obj D_8011F2F0[];
extern Voice D_802038E8[];
extern Slot D_801D7DF4[];
extern s32 D_80203AA8;
extern s8 D_80203AAD;
extern s32 D_80203AB4;
extern s32 D_80203AB8;
extern s32 D_80203AC0;
extern s32 D_80203AC4;
extern s8 D_80203ACA;
extern s32 D_80203ACC;
extern s32 D_802038DC[];
extern u8 D_8006FB38[];
s32 func_800DE41C();
void func_800DE2E0();
void func_800DE38C();
void alSeqpStop(void *);
void func_8021F6A0(s32);
void func_80138B1C();
void func_801FD9F8();
void func_801FE908();
void func_801FF978();
void func_8021FAA4();
void func_80220A50();

void func_801FD560(void) {
    u16 i;
    u16 id;

    func_800DE38C();
    func_800DE2E0();
    id = func_800DE41C(0, 0, 3, 0, 0, 0xFF, 0, 0, func_80138B1C, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    D_8011F2F0[id].f4 |= 0x20;
    D_8011F2F0[id].f6 |= 0x20;
    D_8011F2F0[id].f8 |= 0x20;
    func_800DE41C(0, 0, 3, 0, 2, 0xFF, 0, 0, func_8021FAA4, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    func_800DE41C(0, 0, 3, 0, 4, 0xFF, 0, 0, func_80220A50, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    func_800DE41C(0, 0, 3, 0, 0xC8, 0, 0, 0, func_801FD9F8, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    func_800DE41C(0, 0, 3, 0, 0, 0, 0, func_801FE908, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    func_800DE41C(0, 0, 3, 0, 0, 0, 0, func_801FF978, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    func_8021F6A0(1);
    alSeqpStop(D_8006FB38);
    D_80203ACC = 0;
    D_80203AC4 = -1;
    D_80203AB8 = 0;
    D_80203ACA = 0;
    D_80203AC0 = 0;
    D_80203AA8 = 0;
    D_80203AAD = 0;
    D_802038DC[0] = 0;
    *(s16 *) &D_802038DC[2] = 0;
    D_802038DC[-1] = 2;
    for (i = 0; i < 16; i++) {
        D_802038E8[i].f0 = 0x40;
        D_802038E8[i].f1 = 0;
        D_802038E8[i].f4 = 0;
        D_802038E8[i].f8 = 0;
        D_802038E8[i].f9 = 0;
        D_802038E8[i].fA = 0;
        D_802038E8[i].fB = 0;
        D_802038E8[i].fC = 0;
        D_802038E8[i].fD = 0;
        D_802038E8[i].fE = 0;
        D_802038E8[i].fF = 0x40;
        D_802038E8[i].f10 = 0;
        D_802038E8[i].f14 = 0;
        D_802038E8[i].f18 = 0;
        D_802038E8[i].f19 = 0;
    }
    for (i = 0; i < 8; i++) {
        D_801D7DF4[i].f0 = -1;
        D_801D7DF4[i].f8 = 0;
        D_801D7DF4[i].fC = 1.0f;
        D_801D7DF4[i].f10 = 0;
        D_801D7DF4[i].f12 = 0x7FFF;
        D_801D7DF4[i].f14 = 0x40;
        D_801D7DF4[i].f22 = 0x40;
        D_801D7DF4[i].f15 = 0;
    }
    D_80203AB4 = 0;
}
