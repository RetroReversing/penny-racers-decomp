typedef struct { u8 pad[8]; } Entry8;
typedef struct {
    u8 flag;
    u8 color;
    u16 pad;
    Entry8 *ptr;
    u16 x;
    u16 y;
    u16 z;
    u16 w;
} Item;
extern u16 D_80232840[];
extern u8 D_8006FAF0[];
extern Entry8 *D_802CBF30[];
extern u8 D_8021E144;
extern u8 D_8006FB38[];
extern u8 D_802D6890[];
extern u8 D_80232C10[];
extern Item D_802330B0[];
extern u16 D_80233EC0;
extern u16 D_80233D30[];
extern u8 D_1F9030[], D_2243D0[], D_2632D0[], D_2AFC80[], D_2D58C0[], D_2FDC40[], D_32F100[], D_355850[], D_3836A0[], D_3B7C00[];
extern void alSeqpStop(void *);
extern void func_800294A0(void *, void *, s32);
extern void func_8003DE60(void *);
extern void func_8013D1A4(u16);
extern u16 func_800DE41C(s32, s32, s32, s32, s32, s32, void *, s32, s32, s32, s32, s32, s32, s32, s32, f32, f32, f32);
#define CALL(p) func_800DE41C(0, 0, 2, 0, 0x51, 0xFF, p, 0, 0, 0, 0, 0, 0, 0, 0, 1.0f, 1.0f, 1.0f)

u16 func_8022F780(u16 sel)
{
    Entry8 *tbl;
    u16 h;
    s32 i;

    if (sel < 1 || sel >= 0x14) {
        sel = 1;
    }
    if (D_80232840[sel] == 0) {
        while (D_80232840[++sel] == 0) {
            if (sel >= 0x14) {
                sel = 1;
            }
        }
    }
    *(u16 *)(D_8006FAF0 + 0x20) = sel;
    tbl = D_802CBF30[sel];
    if (D_8021E144 != 1) {
        alSeqpStop(D_8006FB38);
    }
    switch (sel) {
    case 1:
        func_800294A0(D_1F9030, D_802D6890, D_2243D0 - D_1F9030);
        break;
    case 2:
        func_800294A0(D_2243D0, D_802D6890, D_2632D0 - D_2243D0);
        break;
    case 3:
        func_800294A0(D_2632D0, D_802D6890, D_2AFC80 - D_2632D0);
        break;
    case 4:
        func_800294A0(D_2AFC80, D_802D6890, D_2D58C0 - D_2AFC80);
        break;
    case 5:
        func_800294A0(D_2D58C0, D_802D6890, D_2FDC40 - D_2D58C0);
        break;
    case 6:
        func_800294A0(D_2FDC40, D_802D6890, D_32F100 - D_2FDC40);
        break;
    case 7:
        func_800294A0(D_32F100, D_802D6890, D_355850 - D_32F100);
        break;
    case 8:
        func_800294A0(D_355850, D_802D6890, D_3836A0 - D_355850);
        break;
    case 9:
        func_800294A0(D_3836A0, D_802D6890, D_3B7C00 - D_3836A0);
        break;
    default:
        func_8003DE60(D_80232C10);
        break;
    }
    func_8013D1A4(sel);
    i = 0;
    D_802330B0[i].flag = 0;
    if (sel == 2 || sel == 6 || sel == 7) {
        D_802330B0[i].color = 6;
    } else {
        D_802330B0[i].color = 2;
    }
    D_802330B0[i].ptr = tbl + i;
    D_80233D30[i] = D_80233EC0 = h = CALL(&D_802330B0[i]);
    D_802330B0[i].x = D_80232840[sel] + (u16)(h - 1);
    D_802330B0[i].y = h + (i + 1);
    D_802330B0[i].z = 0xFFFF;
    D_802330B0[i].w = 0xFFFF;
    for (i = 1; i < D_80232840[sel] - 1; i++) {
        D_802330B0[i].flag = 0;
        if (sel == 2 || sel == 6 || sel == 7) {
            D_802330B0[i].color = 6;
        } else {
            D_802330B0[i].color = 2;
        }
        if (sel == 7) {
            D_802330B0[9].color = 2;
            D_802330B0[10].color = 2;
            D_802330B0[11].color = 2;
        }
        D_802330B0[i].ptr = tbl + i;
        D_80233D30[i] = CALL(&D_802330B0[i]);
        D_802330B0[i].x = h + (i - 1);
        D_802330B0[i].y = h + (i + 1);
        D_802330B0[i].z = 0xFFFF;
        D_802330B0[i].w = 0xFFFF;
    }
    D_802330B0[i].flag = 0;
    if (sel == 2 || sel == 6 || sel == 7) {
        D_802330B0[i].color = 6;
    } else {
        D_802330B0[i].color = 2;
    }
    D_802330B0[i].ptr = tbl + i;
    D_80233D30[i] = CALL(&D_802330B0[i]);
    D_802330B0[i].x = D_80232840[sel] + (u16)(h - 2);
    D_802330B0[i].y = h;
    D_802330B0[i].z = 0xFFFF;
    D_802330B0[i].w = 0xFFFF;
    return sel;
}
