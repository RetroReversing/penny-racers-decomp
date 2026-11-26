typedef struct { u8 f0; u8 pad[4]; } Row_D_801C7084;
extern Row_D_801C7084 D_801C7084[];
extern u8 *D_801C7AB0;
extern s8 D_801C5EA8[];
extern s8 D_801C5EB0[];
extern s8 D_801C5EB8[];
extern s8 D_801C5EC0[];
extern s8 D_801C5EC8[];
extern s8 D_801C5ED0[];

s32 func_801C34CC(u8 arg0)
{
    u8 i;
    u8 v;

    if (arg0 == D_801C7AB0[2]) {
        return 0xFF;
    }
    if (D_801C7AB0[0] == 3) {
        v = D_801C7084[arg0].f0;
    } else {
        v = D_801C7084[arg0].f0 - 0x2E;
    }
    for (i = 0; i < 5; i++) {
        if (v < 5) {
            if (D_801C5EA8[i] == (s8) v) break;
        } else if ((u8) (v - 5) < 5) {
            if (D_801C5EB0[i] == (s8) v) break;
        } else if ((u8) (v - 0x16) < 5) {
            if (D_801C5EB8[i] == (s8) v) break;
        } else if ((u8) (v - 0x1B) < 5) {
            if (D_801C5EC0[i] == (s8) v) break;
        } else if ((u8) (v - 0x20) < 5) {
            if (D_801C5EC8[i] == (s8) v) break;
        } else if ((u8) (v - 0x25) < 5) {
            if (D_801C5ED0[i] == (s8) v) break;
        }
    }
    return i;
}
