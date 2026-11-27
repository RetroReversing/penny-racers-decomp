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
void func_80143DCC(void);
void func_80149FA8(s32);
void func_80203BAC(void);
void func_80203BDC(s32);
void func_80203D58(void);
void func_80203DA8(void);
void func_802054D0(void);
void func_80205F64(s32);
void func_80211E9C(s32);
void func_80231C5C(void);
extern u8 D_3E4880[];
extern u8 D_3E9850[];
extern Rec178 D_800DA26A[];
extern Obj64 D_8011F2F0[];
extern u8 D_8021B014[];
extern u8 D_8021B064[];
extern s8 D_8021B079;
extern u16 D_8021EEB8;
extern u8 D_8030BD90[];
void func_802040C4(void);
void func_80214504(void);
void func_8021473C(void);

void func_80214260(void)
{
    s32 i;
    s32 j;
    Obj64 *obj;
    s32 k;

    dmaRomToRam(D_3E4880, D_8030BD90, D_3E9850 - D_3E4880);
    for (i = 0; i < 4; i++) {
        func_80203BDC(i);
    }
    func_80203BAC();
    func_80203D58();
    func_80203DA8();
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 14; j++) {
            D_800DA26A[i].name[j] = 0;
        }
    }
    D_8021B079 = 0;
    func_80143DCC();
    D_8021EEB8 = objCreate(0, 0, 3, 0, 0, 0xFF, 0, 0, &func_802040C4, 0, 0, 0, 0, 0, 0, 0, 0, 0);

    D_8011F2F0[D_8021EEB8].flags4 |= 0x20;
    D_8011F2F0[D_8021EEB8].flags6 |= 0x20;
    D_8011F2F0[D_8021EEB8].flags8 |= 0x20;
    obj = &D_8011F2F0[D_8021EEB8];
    obj->x18 = 255.0f;
    obj->x1C = 255.0f;
    obj->x20 = 255.0f;
    for (i = 0; i < 4; i++) {
        D_8021B064[i] = 0;
        D_8021B014[i] = 0;
        func_80203BDC(i);
        func_80149FA8(i);
        func_80211E9C(i);
        func_80205F64(i & 0xFF);
    }
    func_80231C5C();
    func_802054D0();
    objCreate(0, 0, 3, 0, 0x40, 0, 0, &func_80214504, &func_8021473C, 0, 0, 0, 0, 0, 0, 0, 0, 0);
}
