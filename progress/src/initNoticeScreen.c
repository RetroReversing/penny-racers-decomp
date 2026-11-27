typedef struct {
    u8 pad0[4];
    u16 flags4;
    u16 flags6;
    u16 flags8;
    u8 padA[0xE];
    f32 x18;
    f32 x1C;
    f32 x20;
    u8 pad24[0x40];
} Obj64;
typedef struct {
    u8 pad0[0x160];
    u8 name[14];
    u8 pad16E[0xA];
} Rec178;
void dmaRomToRam(void *, void *, s32);
u16 objCreate();
void createSceneObjects(void);
void func_80149FA8(s32);
void clearSlotWords(void);
void initRandomSlot(s32);
void func_80203D58(void);
void clearSlotStates(void);
void func_802054D0(void);
void func_80205F64(s32);
void func_80211E9C(s32);
void createNoticeScreenObj(void);
extern u8 D_3E4880[];
extern u8 D_3E9850[];
extern Rec178 D_800DA26A[];
extern Obj64 D_8011F2F0[];
extern u8 D_8021B014[];
extern u8 D_8021B064[];
extern s8 D_8021B079;
extern u16 noticeColorId;
extern u8 D_8030BD90[];
void addPrimColorCmds(void);
void updateNoticeScreen(void);
void func_8021473C(void);

/* Sets up the notice screen: loads its ROM data, resets per-slot state and scene objects, creates the tint object, then the notice callbacks. */ void initNoticeScreen(void)
{
    s32 i;
    s32 j;
    Obj64 *colorObj;
    s32 k;

    dmaRomToRam(D_3E4880, D_8030BD90, D_3E9850 - D_3E4880);
    for (i = 0; i < 4; i++) {
        initRandomSlot(i);
    }
    clearSlotWords();
    func_80203D58();
    clearSlotStates();
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 14; j++) {
            D_800DA26A[i].name[j] = 0;
        }
    }
    D_8021B079 = 0;
    createSceneObjects();
    noticeColorId = objCreate(0, 0, 3, 0, 0, 0xFF, 0, 0, &addPrimColorCmds, 0, 0, 0, 0, 0, 0, 0, 0, 0);

    D_8011F2F0[noticeColorId].flags4 |= 0x20;
    D_8011F2F0[noticeColorId].flags6 |= 0x20;
    D_8011F2F0[noticeColorId].flags8 |= 0x20;
    colorObj = &D_8011F2F0[noticeColorId];
    colorObj->x18 = 255.0f;
    colorObj->x1C = 255.0f;
    colorObj->x20 = 255.0f;
    for (i = 0; i < 4; i++) {
        D_8021B064[i] = 0;
        D_8021B014[i] = 0;
        initRandomSlot(i);
        func_80149FA8(i);
        func_80211E9C(i);
        func_80205F64(i & 0xFF);
    }
    createNoticeScreenObj();
    func_802054D0();
    objCreate(0, 0, 3, 0, 0x40, 0, 0, &updateNoticeScreen, &func_8021473C, 0, 0, 0, 0, 0, 0, 0, 0, 0);
}
