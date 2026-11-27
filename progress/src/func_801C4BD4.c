typedef struct { u8 a; u8 b; s8 c; s8 d; u8 e; } Rec407C;
extern Rec407C D_801C7080[];
extern u8 D_801C7AD7[][24];
extern u8 *D_801C7AB0;

void func_801C4BD4(u8 arg0, s8 *arg1, u8 *arg2, u8 *arg3)
{
    u8 n;
    s8 kind;
    s32 col;
    s32 row;

    do {
    if (D_801C7080[arg0].c == 0) { *arg1 = *arg2 = 0x7F; return; }
    } while (0);
    col = D_801C7080[arg0].c;
    row = D_801C7080[arg0].d;
    n = D_801C7AD7[row][col];
    if (n == 0xFF) { *arg1 = *arg2 = 0x7F; return; }
    if (*D_801C7AB0 == 3) {
        kind = D_801C7080[n].e;
    } else {
        kind = D_801C7080[n].e - 0x2E;
    }
    if ((kind >= 0 && kind <= 4) || (kind >= 0x16 && kind <= 0x1A) || kind == 0x2C) {
        if ((D_801C7080[arg0].b == 0 && D_801C7080[n].b == 0x3C) || (D_801C7080[arg0].b == 0x3C && D_801C7080[n].b == 0x78)) {
            *arg1 = D_801C7080[arg0].c - 1;
            *arg2 = D_801C7080[arg0].d;
            *arg3 = 1;
        }
    } else if ((kind >= 0xD && kind <= 0xF) || (kind >= 0x13 && kind <= 0x15)) {
        if ((D_801C7080[arg0].b == 0 && D_801C7080[n].b == 0x3C) || (D_801C7080[arg0].b == 0x3C && D_801C7080[n].b == 0x78)) {
            *arg1 = D_801C7080[arg0].c - 1;
            *arg2 = D_801C7080[arg0].d;
            *arg3 = 0xFF;
        }
    } else if (kind >= 0x1B && kind <= 0x1F) {
        if (D_801C7080[arg0].b == D_801C7080[n].b) {
            *arg1 = D_801C7080[arg0].c - 1;
            *arg2 = D_801C7080[arg0].d;
            *arg3 = 1;
        }
    }
}

