extern u16 D_8018BC3C;
extern void *D_8021C0F8[];
extern u8 D_8021C110;
extern u8 D_8021C112;
extern s8 D_8021E144;
extern u8 D_8021F260[];
extern u8 D_8022B060[];
extern u8 D_8006FAF0[];

void func_801CF468(u16, s32, s32, s32);
void func_801FA338(s32);
void func_80231A0C(void);
void createStageObjects(void);
void func_8022F780(u16);
void func_800E067C(void);
void func_802312F8(s32);
void func_80217F44(s32);
void initRowTable(s32);
void objCreate(s32, s32, s32, s32, s32, s32, s32, void *, void *, s32, s32, s32, s32, s32, s32, s32, s32, s32);
void func_8013ADA8(void);
void func_80232360(s32, s32);
void func_8013DE3C(void *);
extern void updateChaseCamera(void);
extern void func_80218788(void);
extern void func_802178B4(void);

void func_80217660(void) {
    func_801CF468(D_8018BC3C, 0xFF, 0xFF, 0xFF);
    func_801FA338(0);
    func_80231A0C();
    *(u16 *)(D_8006FAF0 + 0x20) = ((u8 *)D_8021C0F8[D_8021C112])[0x1E];
    createStageObjects();
    D_8021E144 = 1;
    func_8022F780(*(u16 *)(D_8006FAF0 + 0x20));
    func_800E067C();
    func_802312F8(0);
    func_80217F44((s32)D_8021C0F8[D_8021C112]);
    initRowTable(1);
    *(s8 *)(D_8006FAF0 + 0x28) = 1;
    objCreate(0, 0, 3, 0, 0x80, 1, 0, updateChaseCamera, NULL, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    func_8013ADA8();
    func_80232360(0, 1);
    func_80232360(1, 2);
    func_80232360(2, 1);
    func_80232360(3, 2);
    func_80232360(4, 1);
    func_80232360(5, 2);
    objCreate(0, 0, 3, 0, 0x5E, 0, 0, func_802178B4, func_80218788, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (D_8021C112 >= 5) {
        D_8021C112 = 0;
    } else {
        D_8021C112 += 1;
    }
    D_8021C110 += 1;
    D_8021F260[0] = 0;
    D_8021F260[1] = 0;
    D_8021F260[2] = 0;
    D_8021F260[4] = 0;
    if (D_8021C112 == 3) {
        func_8013DE3C(D_8022B060);
    }
}
