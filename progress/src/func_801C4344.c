typedef struct { u8 a; u8 b; s8 c; s8 d; u8 e; } Rec407C;
extern Rec407C D_801C7080[];
extern u8 D_801C7AF0[][24];
extern u8 *D_801C7AB0;

void func_801C4344(u8 arg0, s8 *arg1, u8 *arg2, u8 *arg3)
{
    u8 n;
    s8 kind;
    s32 col;
    s32 row;

    do {
    if (D_801C7080[arg0].d == 0x17) { *arg1 = *arg2 = 0x7F; return; }
    } while (0);
    col = D_801C7080[arg0].c;
    row = D_801C7080[arg0].d;
    n = D_801C7AF0[row][col];
    if (n == 0xFF) { *arg1 = *arg2 = 0x7F; return; }
    if (*D_801C7AB0 == 3) {
        kind = D_801C7080[n].e;
    } else {
        kind = D_801C7080[n].e - 0x2E;
    }
    if ((kind >= 5 && kind <= 5+4) || (kind >= 0x25 && kind <= 0x25+4) || kind == 0x2B) {
        if (D_801C7080[arg0].b == D_801C7080[n].b) {
            *arg1 = D_801C7080[arg0].c;
            *arg2 = D_801C7080[arg0].d + 1;
            *arg3 = 2;
        }
    } else if (kind >= 0x10 && kind <= 0x10+5) {
        if (D_801C7080[arg0].b == D_801C7080[n].b) {
            *arg1 = D_801C7080[arg0].c;
            *arg2 = D_801C7080[arg0].d + 1;
            *arg3 = 0xFF;
        }
    } else if (kind >= 0x20 && kind <= 0x20+4) {
        if ((D_801C7080[arg0].b == 0x3C && D_801C7080[n].b == 0) || (D_801C7080[arg0].b == 0x78 && D_801C7080[n].b == 0x3C)) {
            *arg1 = D_801C7080[arg0].c;
            *arg2 = D_801C7080[arg0].d + 1;
            *arg3 = 2;
        }
    }
}

