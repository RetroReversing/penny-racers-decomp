extern u8 D_101900[];
extern u8 D_10A1F0[];
extern u8 D_10EBE0[];
extern u8 D_111C60[];
extern u8 D_1B0E50[];
extern u8 D_25EA0[];
extern u8 D_29A40[];
extern u8 D_2D580[];
extern u8 D_42A740[];
extern u8 D_42E8E0[];
extern u8 D_52B560[];
extern u8 D_52F020[];
extern u8 D_5758D0[];
extern u8 D_86290[];
extern u8 D_BC070[];
extern u8 D_C78D0[];
extern u8 D_C9C40[];
extern u8 D_DB3B0[];
extern u8 D_DB950[];
extern u8 D_DD2B0[];
extern u8 D_E5840[];
extern u8 D_FFE70[];
extern u8 D_80049870[];
extern u8 D_80049898[];
extern u8 D_800498C0[];
extern u8 D_800498E8[];
extern u8 D_80049910[];
extern u8 D_80049938[];
extern u8 D_80049960[];
extern u8 D_80049988[];
extern u8 D_800499B0[];
extern u8 D_800499D8[];
extern u8 D_80049A00[];
extern u8 D_80049A28[];
extern u8 D_80049A50[];
extern u8 D_80049A78[];
extern u8 D_80049AA0[];
extern u8 D_80049ACC[];
void D_80190D40(void);
void D_801F93E0(void);
void D_801F9990(void);
void D_801FB300(void);
void D_80221230(void);
void D_80233ED0(void);
void D_802376A0(void);
void func_800DE2E0(void);
void func_80127000(void);
void func_8012AD20(void);
void func_801CA140(void);
void func_801D59F0(void);
void func_801D7F60(void);
void func_80203AD0(void);
void func_8021F5F0(void);
void func_8022E6B0(void);

typedef struct { s32 unk0; u16 unk4; u16 unk6; u16 unk8; u16 unkA; u16 unkC; u16 unkE; } S8006FB14;
extern S8006FB14 D_8006FB14;
extern volatile u16 D_8006FE58;
extern u8 D_801E4420;
extern s8 D_801E87C0;
void func_8003DE60(); void func_800294A0(); void func_800289C0(); void func_80028A00(); void func_80028BD0(); void func_80025C50();
void func_80027DF0(); void func_80027B40(); void func_80027BF0(); void func_8021F6A0(); void nuGfxFuncSet(void *arg0); u8 nuContInit(void);
void func_800267FC(); void func_80025DE0();
#define LOAD(name, s, e, v) size = (s32) e; size -= (s32) s; func_8003DE60(name, s, v, size); func_800294A0(s, v, size);
void func_80026250(void)
{
    s32 size;
    s32 i;
    u16 old;
    LOAD(D_80049870, D_25EA0, D_29A40, func_800DE2E0)
    LOAD(D_80049898, D_29A40, D_2D580, func_80127000)
    LOAD(D_800498C0, D_2D580, D_86290, func_8012AD20)
    LOAD(D_800498E8, D_86290, D_BC070, D_80190D40)
    LOAD(D_80049910, D_BC070, D_C78D0, func_801CA140)
    LOAD(D_80049938, D_C78D0, D_C9C40, func_801D59F0)
    LOAD(D_80049960, D_C9C40, D_DB3B0, func_801D7F60)
    LOAD(D_80049988, D_DB3B0, D_DB950, D_801F93E0)
    LOAD(D_800499B0, D_DB950, D_DD2B0, D_801F9990)
    LOAD(D_800499D8, D_DD2B0, D_E5840, D_801FB300)
    LOAD(D_80049A00, D_E5840, D_FFE70, func_80203AD0)
    LOAD(D_80049A28, D_FFE70, D_101900, func_8021F5F0)
    LOAD(D_80049A50, D_101900, D_10A1F0, D_80221230)
    LOAD(D_80049A78, D_10A1F0, D_10EBE0, func_8022E6B0)
    LOAD(D_80049AA0, D_10EBE0, D_111C60, D_80233ED0)
    LOAD(D_80049ACC, D_111C60, D_1B0E50, D_802376A0)
    func_80028A00();
    D_8006FB14.unk0 = 0;
    func_8021F6A0(1);
    D_8006FB14.unk6 = 0;
    D_8006FB14.unk8 = 0;
    D_8006FB14.unkA = 0;
    D_8006FB14.unkC = 0;
    D_8006FB14.unkE = 0;
    D_801E4420 = nuContInit();
    for (i = 0; i < 4; i++) {
        if ((D_801E4420 >> i) & 1) {
            D_801E87C0 = i;
            break;
        }
    }
    func_800289C0(func_800267FC);
    func_801D59F0();
    { s32 len = (s32) D_52F020; u8 *from = D_52B560; len -= (s32) from; func_80027DF0(from, len, D_52F020); }
    { s32 len = (s32) D_42E8E0; u8 *from = D_42A740; len -= (s32) from; func_80027B40(from, len, D_42E8E0); }
    func_80027BF0(D_5758D0);
    func_80025C50();
    nuGfxFuncSet(func_80025DE0);
    func_80028BD0();
    D_8006FE58 = 0;
    old = D_8006FE58;
    while ((s16) D_8006FE58 == (s16) old) {
    }
    while (1) {
    }
}
