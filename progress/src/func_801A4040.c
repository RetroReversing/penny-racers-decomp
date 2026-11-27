extern u8 glyphCode[];
extern u8 *trackInfo;
s32 func_801A4040(s32 arg0) {
    u8 kind;
    if (*trackInfo == 3) kind = glyphCode[(u8) arg0 * 5]; else kind = glyphCode[(u8) arg0 * 5] - 0x2E;
    if ((u8) arg0 == 0xFF) return 0; if ((u8) arg0 == trackInfo[2]) goto yes; if ((u8) kind < 5 || (u8) (kind - 0x16) < 10 || (s8) kind == 0x2C || (s8) kind == 0x2D) { yes: return 1; } return 0;
}
