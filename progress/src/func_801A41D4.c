extern u8 D_801C5EA8[];
extern u8 D_801C5EC0[];
typedef struct { u8 f0; u8 pad[4]; } Row_D_801C7081;
extern Row_D_801C7081 D_801C7081[];
typedef struct { u8 f0; u8 pad[4]; } Row_D_801C7084;
extern Row_D_801C7084 D_801C7084[];
extern u8 *D_801C7AB0;

s32 func_801A41D4(s32 arg0, u8 arg1, s32 arg2)
{
    s32 t0;
    u8 a1;
    u8 a3;

    t0 = 0;
    if ((arg1) == D_801C7AB0[2]) {
        return 0;
    }
    if (D_801C7AB0[0] == 3) {
        a3 = D_801C7084[arg1].f0;
    } else {
        a3 = D_801C7084[arg1].f0 - 0x2E;
    }
    if (D_801C7081[arg0 & 0xFF].f0 == D_801C7081[arg1].f0) {
        if (a3 < 5) {
            a1 = D_801C5EC0[arg2 & 0xFF];
            D_801C7084[arg1].f0 = a1;
            t0 = 1;
            if (D_801C7AB0[0] == 4) {
                D_801C7084[arg1].f0 = a1 + 0x2E;
            }
        } else {
            if ((u8) (a3 - 0x16) < 5) {
                D_801C7081[arg1].f0 = 0x3C;
                a1 = D_801C5EA8[arg2 & 0xFF];
                D_801C7084[arg1].f0 = a1;
                t0 = 1;
                if (D_801C7AB0[0] == 4) {
                    D_801C7084[arg1].f0 = a1 + 0x2E;
                }
            }
        }
    }
    return t0 & 0xFF;
}
