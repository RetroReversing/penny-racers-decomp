s32 func_801CA140();
s32 func_801CA468(s32, s32);
s32 func_801CB74C(s32, s32, s32, s32, s32, s32);
s32 func_801CBF48(s32, s32, s32, s32, s32, s32, s32);
extern char D_801D4FC0[];
typedef struct { s32 f0; u8 pad[8]; } Slot_801D75E0;
extern Slot_801D75E0 D_801D75E0[];
typedef struct { s16 f0; u8 pad[42]; } Slot_801D7DF4;
extern Slot_801D7DF4 D_801D7DF4[];
extern char D_801D7E00[];
extern char D_801D7E04[];
typedef struct { s16 f0; u8 pad[42]; } Slot_801D7E06;
extern Slot_801D7E06 D_801D7E06[];
extern char D_801D7E08[];
extern char D_801D7E09[];
extern char D_801D7E16[];
extern char D_802025E8[];
extern s32 D_80202628;
extern char D_8020377C[];
extern char D_8020378C[];
extern char D_80203794[];
extern char D_8020379C[];
extern char D_802037A4[];
extern char D_802037AC[];
extern char D_802037C4[];
extern char D_802037D8[];
extern char D_802037EC[];
extern char D_802037FC[];
extern char D_8020380C[];
extern char D_80203820[];
extern char D_80203838[];
extern char D_80203844[];
extern char D_80203854[];
extern char D_8020384C[];
extern s32 D_80203AB8;
extern s16 D_80203ABA;
extern u16 D_80203ABE;
extern u8 D_80203ACA;

void func_801FE364(s32 arg0)
{
    s32 i;
    s32 s3;
    s32 idx;
    s32 y;

    D_80202628 += 1;
    func_801CA140();
    func_801CA468(arg0, 0xFF);
    if (D_80202628 & 0x80) {
        func_801CB74C(arg0, 0x3C, 0xA, 8, (s32)D_801D4FC0, (s32)D_802037AC);
    }
    func_801CB74C(arg0, 0x1E, 0x1E, 8, (s32)D_801D4FC0, (s32)D_802037C4);
    func_801CB74C(arg0, 0x1E, 0x28, 8, (s32)D_801D4FC0, (s32)D_802037D8);
    func_801CB74C(arg0, 0x1E, 0x32, 8, (s32)D_801D4FC0, (s32)D_802037EC);
    func_801CB74C(arg0, 0x1E, 0x3C, 8, (s32)D_801D4FC0, (s32)D_802037FC);
    func_801CB74C(arg0, 0x1E, 0x46, 8, (s32)D_801D4FC0, (s32)D_8020380C);
    func_801CB74C(arg0, 0x1E, 0x50, 8, (s32)D_801D4FC0, (s32)D_80203820);
    func_801CB74C(arg0, 0x1E, 0x64, 8, (s32)D_801D4FC0, (s32)D_80203838);
    func_801CBF48(arg0, 0x6E, 0x64, 8, (s32)D_801D4FC0, 2, D_80203ABA);
    func_801CB74C(arg0, 0x8C, 0x64, 8, (s32)D_801D4FC0, D_801D75E0[D_80203AB8].f0);
    func_801CB74C(arg0, 0x1E, 0x6E, 8, (s32)D_801D4FC0, *(s32 *)(D_802025E8 + D_80203ACA * 12));
    func_801CB74C(arg0, 0x28, 0x8C, 8, (s32)D_801D4FC0, (s32)D_8020377C);
    func_801CB74C(arg0, 0x28, 0x96, 8, (s32)D_801D4FC0, (s32)D_80203844);
    func_801CB74C(arg0, 0x28, 0xA0, 8, (s32)D_801D4FC0, (s32)D_8020378C);
    func_801CB74C(arg0, 0x28, 0xAA, 8, (s32)D_801D4FC0, (s32)D_80203794);
    func_801CB74C(arg0, 0x28, 0xB4, 8, (s32)D_801D4FC0, (s32)D_8020384C);
    func_801CB74C(arg0, 0x28, 0xBE, 8, (s32)D_801D4FC0, (s32)D_8020379C);
    func_801CB74C(arg0, 0x28, 0xC8, 8, (s32)D_801D4FC0, (s32)D_802037A4);
    i = 0;
    do {
        s3 = i + D_80203ABE;
        idx = s3 & 0xFFFF;
        if (idx < 8) {
            y = (((i & 0xFFFF) + 2) * 0x30) & 0xFFFF;
            func_801CBF48(arg0, y, 0x8C, 8, (s32)D_801D4FC0, 5, (s16)s3);
            if (D_801D7DF4[idx].f0 == -1) {
                func_801CB74C(arg0, y, 0x96, 8, (s32)D_801D4FC0, (s32)D_80203854);
            } else {
                func_801CB74C(arg0, y, 0x96, 8, (s32)D_801D4FC0, D_801D75E0[*(u16 *)(D_801D7E04 + idx * 44)].f0);
            }
            y = (((i & 0xFFFF) + 2) * 0x30) & 0xFFFF;
            func_801CBF48(arg0, y, 0xA0, 8, (s32)D_801D4FC0, 5, D_801D7E06[idx].f0);
            func_801CBF48(arg0, y, 0xAA, 8, (s32)D_801D4FC0, 5, *(u8 *)(D_801D7E08 + idx * 44));
            func_801CBF48(arg0, y, 0xB4, 8, (s32)D_801D4FC0, 5, (s16)(s32)*(f32 *)(D_801D7E00 + idx * 44));
            func_801CBF48(arg0, y, 0xBE, 8, (s32)D_801D4FC0, 5, *(u8 *)(D_801D7E09 + idx * 44));
            func_801CBF48(arg0, y, 0xC8, 8, (s32)D_801D4FC0, 5, *(u8 *)(D_801D7E16 + idx * 44));
        }
        i += 1;
    } while ((i & 0xFFFF) < 4);
}
