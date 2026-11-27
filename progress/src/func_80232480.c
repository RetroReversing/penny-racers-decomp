typedef struct { u16 course; u8 pad2[6]; u8 f8; } Race;
typedef struct { s32 w[13]; } Slot;
typedef struct { Slot slot[8]; u8 rest[0x8F0 - 8 * 52]; } Car;
extern s32 D_80203AB0;
extern s32 D_802038D0;
extern s32 D_802038D4;
extern Race D_8006FB10;
extern Car D_8022A778[];
extern Slot D_80238EC0[];
extern u8 D_8022AFE9;
void func_801FA338(s32);
void func_80231A0C(void);
void func_80231C5C(void);
void createStageObjects(void);
void func_8022F780(u16);
void func_800E067C(void);
void func_8022FE50(u8, u8, u8, s32);
void objCreate(s32, s32, s32, s32, s32, s32, s32, void *, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32);
void func_8012AD9C(void);
void func_8013ADA8(void);
void func_802282F0(void);
void func_8015A728(void);
void func_80232360(s32, s32);

void func_80232480(void) {
    u16 i;
    u16 j;

    func_801FA338(0);
    D_80203AB0 = 0;
    D_802038D0 = 0;
    D_802038D4 = 0;
    D_8006FB10.f8 = 0;
    func_80231A0C();
    func_80231C5C();
    createStageObjects();
    func_8022F780(D_8006FB10.course);
    func_800E067C();
    for (j = 0; j < 6; j++) {
        for (i = 0; i < 8; i++) {
            D_8022A778[j].slot[i] = D_80238EC0[i];
        }
    }
    for (i = 0; i < 6; i++) {
        func_8022FE50(i, i, i, 1);
    }
    D_8022AFE9 = 0;
    objCreate(0, 0, 3, 0, 0x20, 1, 0, func_8012AD9C, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    objCreate(0, 0, 3, 0, 0x20, 4, 0, func_8012AD9C, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    objCreate(0, 0, 3, 0, 0x20, 7, 0, func_8012AD9C, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    objCreate(0, 0, 3, 0, 0x20, 0xA, 0, func_8012AD9C, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    func_8013ADA8();
    objCreate(0, 0, 3, 0, 0x20, 0, 0, func_802282F0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    objCreate(0, 0, 3, 0, 0xC0, 0xFF, 0, func_8015A728, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    func_80232360(1, 0);
    func_80232360(2, 0);
    func_80232360(3, 0);
    func_80232360(4, 0);
    func_80232360(5, 0);
}
