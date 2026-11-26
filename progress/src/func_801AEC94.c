typedef struct { s8 a, b, c, d, e; } Rec5;
typedef struct { u8 a, b; } Pair;
extern u8 D_8019E400[];
extern u8 D_8019E4B8[];
extern u8 D_801C5E9C[];
extern u8 D_801C5E9E[];
extern u8 D_801C5EA0;
extern u8 D_801C5EA1;
extern u8 D_801C6BB9;
extern u16 D_801C6BE0[];
extern u8 D_801C7068;
extern Rec5 D_801C7080[];
extern Pair D_801C7082[];
extern u8 D_801C7469;
extern u16 D_801C7470[][4];
extern void *D_801C7AB0;
extern u8 D_801C7AB6;
extern u8 D_801C7AB8;
extern u8 D_801C7AD8[];
extern void func_800DE41C();

void func_801AEC94(void)
{
    u16 i;
    u8 j;

    D_801C7AB8 = 4;
    D_801C7469 = 4;
    if (D_801C5EA1 == 0) {
        D_801C6BB9 = 0xB;
        D_801C7068 = 0xB;
        D_801C5EA0 = 0;
        {
            u8 *p = D_801C5E9E;
            *p++ = 0;
            *p = 0;
        }
    } else {
        u8 *p = (u8 *)D_801C7082;
        D_801C7068 = *p++;
        D_801C6BB9 = *p;
    }
    D_801C7AB0 = D_801C5E9C;
    D_801C7AB6 = 0;
    for (i = 0; i < 0x240; i++) {
        D_801C6BE0[i] = 0xFFFF;
        D_801C7AD8[i] = 0xFF;
    }
    for (i = 0; i < 0xC8; i++) {
        for (j = 0; j < 4; j++) {
            D_801C7470[i][j] = 0xFFFF;
        }
        if (D_801C5EA1 == 0) {
            Rec5 *t = D_801C7080;
            Rec5 *r = &t[i];
            r->a = 4;
            r->b = 0;
            r->c = -1;
            r->d = -1;
            r->e = -1;
        }
    }
    func_801D65BC(7);
    func_8021F5F0();
    func_801AEEE8();
    func_801AEFBC();
    func_800DE41C(0, 0, 3, 0, 0x42, 0xFF, 0, 0, D_8019E400, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    func_800DE41C(0, 0, 3, 0, 0x50, 0xFF, 0, 0, D_8019E4B8, 0, 0, 0, 0, 0, 0, 0, 0, 0);
}
