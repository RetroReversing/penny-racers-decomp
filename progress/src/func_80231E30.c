extern void func_800DE41C(s32, s32, s32, s32, s32, s32, s32, void *, s32, f32, f32, f32, s32, s32, s32, s32, s32, s32);
extern u8 func_80148230(void);
extern void func_8003DE60(char *);
extern void func_80233ED0(void);
extern void func_80234484(void);
extern void func_802282F0(void);
extern void func_8013DF90(void);
extern void func_801D5A90(void);
extern void func_801D6670(void);
extern void func_801D69D0(void);
extern void func_801D70A4(void);
extern void func_8013FDC0(void);
extern void func_8013FDEC(void);
extern void func_8013FE18(void);
extern void func_801402B8(void);
extern void func_80140BEC(void);
extern void func_80141268(void);
extern void func_80141C28(void);
extern void func_801429A8(void);
extern void func_80143600(void);
extern char D_80232F54[];
extern char D_80232F70[];
extern char D_80232F88[];
extern char D_80232FA0[];
extern char D_80232FB8[];
extern char D_80232FD0[];
extern char D_80232FE8[];
extern char D_80233000[];
extern char D_80233018[];
extern char D_80233030[];
extern u8 D_8006FAF0[];

void func_80231E30(void)
{
    func_800DE41C(0, 0, 3, 0, 0x7F, 0, 0, func_80233ED0, 0, 0.0f, 0.0f, 0.0f, 0, 0, 0, 0, 0, 0);
    func_800DE41C(0, 0, 3, 0, 0x80, 0, 0, func_80234484, 0, 0.0f, 0.0f, 0.0f, 0, 0, 0, 0, 0, 0);
    func_800DE41C(0, 0, 3, 0, 0x40, 0, 0, func_802282F0, 0, 0.0f, 0.0f, 0.0f, 0, 0, 0, 0, 0, 0);
    func_800DE41C(0, 0, 3, 0, 0x40, 0, 0, func_8013DF90, 0, 0.0f, 0.0f, 0.0f, 0, 0, 0, 0, 0, 0);
    func_800DE41C(0, 255, 3, 0, 0x7F, 0, 0, func_801D5A90, 0, 0.0f, 0.0f, 0.0f, 0, 0, 0, 0, 0, 0);
    func_800DE41C(0, 255, 3, 0, 0x7F, 0, 0, func_801D6670, 0, 0.0f, 0.0f, 0.0f, 0, 0, 0, 0, 0, 0);
    func_800DE41C(0, 255, 3, 0, 0x7F, 0, 0, func_801D69D0, 0, 0.0f, 0.0f, 0.0f, 0, 0, 0, 0, 0, 0);
    func_800DE41C(0, 0, 3, 0, 0x7F, 0, 0, func_801D70A4, 0, 0.0f, 0.0f, 0.0f, 0, 0, 0, 0, 0, 0);
    func_8003DE60(D_80232F54);
    if (func_80148230()) {
        switch (*(u16 *)(D_8006FAF0 + 0x20)) {
        case 1:
            func_8003DE60(D_80232F70);
            func_800DE41C(0, 0, 3, 0, 0x7F, 0, 0, func_8013FDC0, 0, 0.0f, 0.0f, 0.0f, 0, 0, 0, 0, 0, 0);
            break;
        case 2:
            func_8003DE60(D_80232F88);
            func_800DE41C(0, 0, 3, 0, 0x7F, 0, 0, func_8013FDEC, 0, 0.0f, 0.0f, 0.0f, 0, 0, 0, 0, 0, 0);
            break;
        case 3:
            func_8003DE60(D_80232FA0);
            func_800DE41C(0, 0, 3, 0, 0x7F, 0, 0, func_8013FE18, 0, 0.0f, 0.0f, 0.0f, 0, 0, 0, 0, 0, 0);
            break;
        case 4:
            func_8003DE60(D_80232FB8);
            func_800DE41C(0, 0, 3, 0, 0x7F, 0, 0, func_801402B8, 0, -610.0f, 0.0f, 350.0f, 0, 0, 0, 0, 0, 0);
            break;
        case 5:
            func_8003DE60(D_80232FD0);
            func_800DE41C(0, 0, 3, 0, 0x7F, 0, 0, func_80140BEC, 0, 0.0f, 0.0f, 0.0f, 0, 0, 0, 0, 0, 0);
            break;
        case 6:
            func_8003DE60(D_80232FE8);
            func_800DE41C(0, 0, 3, 0, 0x7F, 0, 0, func_80141268, 0, -1199.0f, -20.0f, 615.0f, 0, 0, 0, 0, 0, 0);
            break;
        case 7:
            func_8003DE60(D_80233000);
            func_800DE41C(0, 0, 3, 0, 0x7F, 0, 0, func_80141C28, 0, 0.0f, 0.0f, 0.0f, 0, 0, 0, 0, 0, 0);
            break;
        case 8:
            func_8003DE60(D_80233018);
            func_800DE41C(0, 0, 3, 0, 0x7F, 0, 0, func_801429A8, 0, 0.0f, 0.0f, 0.0f, 0, 0, 0, 0, 0, 0);
            break;
        case 9:
            func_8003DE60(D_80233030);
            func_800DE41C(0, 0, 3, 0, 0x7F, 0, 0, func_80143600, 0, 0.0f, 0.0f, 0.0f, 0, 0, 0, 0, 0, 0);
            break;
        }
    }
}
