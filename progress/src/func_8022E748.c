typedef struct { u8 pad0[0xC]; u8 unkC; u8 padD[0x64 - 0xD]; } Car;
typedef struct { s32 pad0[0x4A / 4 + 0]; } Dummy;
typedef struct { s32 unk0; s32 unk4; s32 unk8; s32 unkC; s32 pad10[3]; s32 unk1C; } Ready;
typedef struct { u8 pad0[0xE]; u16 unkE; u8 pad10[0x178 - 0x10]; s32 align[0]; } Rec;
typedef struct { s32 w[0x178 / 4]; } Blk;
typedef struct { u8 pad0[0x8F0 - 2]; u8 pad1[2]; } Unused2;
typedef struct { u16 unk0; u8 pad2[0x22]; u16 unk24; u8 pad26[0x8F0 - 0x26]; } Pane;
typedef struct { f32 unk0; f32 unk4; f32 unk8; f32 unkC; u8 pad10[0x3C]; s32 unk4C; } View;
extern Car D_8011F2F0[];
extern u16 D_8006FAF0[];
extern u8 func_80232820;
extern Ready D_801E9A10;
extern Ready btnUpPressed;
extern u8 D_800DA26A[];
extern Pane D_8022ACAA[];
extern u8 D_801E87E1;
extern u8 D_801E87E3;
extern u16 D_801E975A[];
extern u16 D_801E975C[];
extern View D_8022B600;
extern u16 D_8018A438;
void initSceneBackdrop(void);
void createStageObjects(void);
void func_8022F780(u16);
void interpolateObjPositions(void);
void func_802312F8(s32);
void assignCarSlots(u8);
u8 func_80148230(void);
void func_8022FE50(u8, u8, u8, s32);
void func_801E0F10();
void func_8012AD9C();
void func_80159230();
void drawPlayerStatusBars();
void func_8013DD2C();
s32 objCreate(s32, s32, s32, s32, s32, s32, void *, void *, void *, f32, f32, f32, f32, f32, f32, f32, f32, f32);
void initRowTable(u8);
void func_8013ADA8(void);
void spawnSceneFadeObjects(void);

#define SPAWN(a0, a1, a2, a3, b0, b1, p0, p1, p2) \
    objCreate(a0, a1, a2, a3, b0, b1, p0, p1, p2, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f)

void func_8022E748(void)
{
    s32 flag = 0;
    u16 i;

    initSceneBackdrop();
    createStageObjects();
    func_8022F780(D_8006FAF0[0x10]);
    interpolateObjPositions();
    func_802312F8(0);
    if (func_80232820 == 1 || func_80232820 == 2) {
        assignCarSlots(func_80232820);
    }
    switch (func_80232820) {
    case 2:
        if (D_801E9A10.unk0 && D_801E9A10.unk8 && D_801E9A10.unkC && D_801E9A10.unk1C &&
            *(u16 *)&D_800DA26A[0x17C] == 0xF) {
            flag = 1;
        }
    case 1:
        if (btnUpPressed.unk0 && btnUpPressed.unk8 && btnUpPressed.unkC && btnUpPressed.unk1C &&
            *(u16 *)&D_800DA26A[0x4] == 0xF) {
            flag = 1;
        }
        break;
    }
    switch (func_80232820) {
    case 1:
        if (func_80148230()) {
            func_8022FE50(5, 0, 0, 0);
            for (i = 1; i < 6; i++) {
                func_8022FE50(i - 1, i, i, 1);
                if (flag) {
                    D_8022ACAA[i].unk0 = 0xF;
                    D_8022ACAA[i].unk24 = 0x1E;
                }
            }
        } else {
            func_8022FE50(0, 0, 0, 0);
            D_801E975A[0] = SPAWN(0, 0, 3, 0xC0, 0, 0, 0, func_801E0F10, 0);
            D_8011F2F0[D_801E975A[0]].unkC = 1;
            if (D_801E87E3 == 1 && D_801E87E1 == D_8006FAF0[0x10]) {
                *(Blk *)&D_800DA26A[0x16E] = *(Blk *)&D_800DA26A[0x16E + 0x8D0];
                func_8022FE50(0, 0x11, 1, 2);
                D_8022B600.unk4C = 0;
                D_8022B600.unk0 = 1.0f;
                D_8022B600.unk4 = 1.0f;
                D_8022B600.unk8 = 1.0f;
                D_8022B600.unkC = 1.0f;
                D_801E975C[0] = SPAWN(0, 1, 3, 0xC0, 0, 0, 0, func_801E0F10, 0);
                D_8011F2F0[D_801E975C[0]].unkC = 2;
            }
        }
        break;
    case 2:
        if (func_80148230() == 1) {
            func_8022FE50(0, 0, 0, 0);
            func_8022FE50(1, 1, 1, 0);
        } else {
            func_8022FE50(4, 0, 0, 0);
            func_8022FE50(5, 1, 1, 0);
        }
        if (func_80148230() != 1) {
            for (i = 2; i < 6; i++) {
                func_8022FE50(i - 2, i, i, 1);
                if (flag) {
                    D_8022ACAA[i].unk0 = 0xF;
                    D_8022ACAA[i].unk24 = 0x1E;
                }
            }
        }
        break;
    case 3:
        func_8022FE50(3, 0, 0, 0);
        func_8022FE50(4, 1, 1, 0);
        func_8022FE50(5, 2, 2, 0);
        if (func_80148230() != 1) {
            for (i = 3; i < 6; i++) {
                func_8022FE50(i - 3, i, i, 1);
            }
        }
        break;
    case 4:
        func_8022FE50(2, 0, 0, 0);
        func_8022FE50(3, 1, 1, 0);
        func_8022FE50(4, 2, 2, 0);
        func_8022FE50(5, 3, 3, 0);
        if (func_80148230() != 1) {
            for (i = 4; i < 6; i++) {
                func_8022FE50(i - 1, i, i, 1);
            }
        }
        break;
    }
    initRowTable(func_80232820);
    switch (func_80232820) {
    case 1:
        SPAWN(0, 0, 3, 0, 0x20, 1, 0, func_8012AD9C, 0);
        break;
    case 2:
        SPAWN(0, 0, 3, 0, 0x20, 1, 0, func_8012AD9C, 0);
        SPAWN(0, 0, 3, 0, 0x20, 4, 0, func_8012AD9C, 0);
        break;
    case 3:
        SPAWN(0, 0, 3, 0, 0x20, 1, 0, func_8012AD9C, 0);
        SPAWN(0, 0, 3, 0, 0x20, 4, 0, func_8012AD9C, 0);
        SPAWN(0, 0, 3, 0, 0x20, 7, 0, func_8012AD9C, 0);
        break;
    case 4:
        SPAWN(0, 0, 3, 0, 0x20, 1, 0, func_8012AD9C, 0);
        SPAWN(0, 0, 3, 0, 0x20, 4, 0, func_8012AD9C, 0);
        SPAWN(0, 0, 3, 0, 0x20, 7, 0, func_8012AD9C, 0);
        SPAWN(0, 0, 3, 0, 0x20, 10, 0, func_8012AD9C, 0);
        break;
    }
    func_8013ADA8();
    spawnSceneFadeObjects();
    D_8018A438 = SPAWN(0, 0, 3, 0, 0xA1, 0xFF, 0, func_80159230, drawPlayerStatusBars);
    SPAWN(0, 0, 3, 0, 0xA1, 0xFF, 0, 0, func_8013DD2C);
}
