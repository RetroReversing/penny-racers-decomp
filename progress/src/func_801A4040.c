extern u8 D_801C7084[];
extern u8 *D_801C7AB0;
s32 func_801A4040(s32 arg0) {
    u8 kind;
    if (*D_801C7AB0 == 3) kind = D_801C7084[(u8) arg0 * 5]; else kind = D_801C7084[(u8) arg0 * 5] - 0x2E;
    if ((u8) arg0 == 0xFF) return 0; if ((u8) arg0 == D_801C7AB0[2]) goto yes; if ((u8) kind < 5 || (u8) (kind - 0x16) < 10 || (s8) kind == 0x2C || (s8) kind == 0x2D) { yes: return 1; } return 0;
}
