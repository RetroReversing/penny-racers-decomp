typedef struct { u8 f0, f1; u8 p2[2]; s32 f4; u8 f8, f9, fA, fB, fC, fD, fE, fF; u8 f10; u8 p11[3]; s32 f14; u8 f18, f19; u8 p1A[2]; } Voice;
typedef struct { s16 f0; u8 p2[6]; s32 f8; f32 fC; s16 f10; s16 f12; u8 f14, f15; u8 p16[12]; u8 f22; u8 p23[9]; } Slot;
typedef struct { u8 p0[4]; u16 f4; u16 f6; u16 f8; u8 pA[0x64 - 10]; } Obj;
extern Obj D_8011F2F0[];
extern Voice D_802038E8[];
extern Slot sndTestSlots[];
extern s32 D_80203AA8;
extern s8 D_80203AAD;
extern s32 D_80203AB4;
extern s32 sndTestIndex;
extern s32 soundTestMode;
extern s32 D_80203AC4;
extern s8 sndTestPitchPreset;
extern s32 D_80203ACC;
extern s32 D_802038DC[];
extern u8 D_8006FB38[];
s32 objCreate();
void initObjList();
void initModelTransforms();
void alSeqpStop(void *);
void initRowTable(s32);
void func_80138B1C();
void func_801FD9F8();
void func_801FE908();
void snapshotSoundDriverState();
void appendRowBoardDisplayList();
void func_80220A50();

/* Race scene setup: resets the sound sequence, voice and slot tables, and creates the main objects for the race. */ void initRaceObjects(void) {
    u16 index;
    u16 hudObj;

    initModelTransforms();
    initObjList();
    hudObj = objCreate(0, 0, 3, 0, 0, 0xFF, 0, 0, func_80138B1C, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    D_8011F2F0[hudObj].f4 |= 0x20;
    D_8011F2F0[hudObj].f6 |= 0x20;
    D_8011F2F0[hudObj].f8 |= 0x20;
    objCreate(0, 0, 3, 0, 2, 0xFF, 0, 0, appendRowBoardDisplayList, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    objCreate(0, 0, 3, 0, 4, 0xFF, 0, 0, func_80220A50, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    objCreate(0, 0, 3, 0, 0xC8, 0, 0, 0, func_801FD9F8, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    objCreate(0, 0, 3, 0, 0, 0, 0, func_801FE908, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    objCreate(0, 0, 3, 0, 0, 0, 0, snapshotSoundDriverState, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    initRowTable(1);
    alSeqpStop(D_8006FB38);
    D_80203ACC = 0;
    D_80203AC4 = -1;
    sndTestIndex = 0;
    sndTestPitchPreset = 0;
    soundTestMode = 0;
    D_80203AA8 = 0;
    D_80203AAD = 0;
    D_802038DC[0] = 0;
    *(s16 *) &D_802038DC[2] = 0;
    D_802038DC[-1] = 2;
    for (index = 0; index < 16; index++) {
        D_802038E8[index].f0 = 0x40;
        D_802038E8[index].f1 = 0;
        D_802038E8[index].f4 = 0;
        D_802038E8[index].f8 = 0;
        D_802038E8[index].f9 = 0;
        D_802038E8[index].fA = 0;
        D_802038E8[index].fB = 0;
        D_802038E8[index].fC = 0;
        D_802038E8[index].fD = 0;
        D_802038E8[index].fE = 0;
        D_802038E8[index].fF = 0x40;
        D_802038E8[index].f10 = 0;
        D_802038E8[index].f14 = 0;
        D_802038E8[index].f18 = 0;
        D_802038E8[index].f19 = 0;
    }
    for (index = 0; index < 8; index++) {
        sndTestSlots[index].f0 = -1;
        sndTestSlots[index].f8 = 0;
        sndTestSlots[index].fC = 1.0f;
        sndTestSlots[index].f10 = 0;
        sndTestSlots[index].f12 = 0x7FFF;
        sndTestSlots[index].f14 = 0x40;
        sndTestSlots[index].f22 = 0x40;
        sndTestSlots[index].f15 = 0;
    }
    D_80203AB4 = 0;
}
