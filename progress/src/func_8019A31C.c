typedef struct { u8 a, b; } Hdr;
extern u8 func_8019A4F8(void);
extern s8 cursorY;
extern s8 cursorX;
extern Hdr *trackInfo;

u8 func_8019A31C(void)
{
    u8 r;
    if (trackInfo->b == 5) {
        if (cursorX == 0 || cursorX == 0x17) {
            if (cursorY == 0) {
                r = 0;
            } else if (cursorY == 0x17) {
                r = 0;
            } else if (cursorY == 1) {
                r = 1;
            } else {
                r = cursorY == 0x16 ? 2 : 3;
            }
        } else if (cursorX == 1) {
            if (cursorY == 0 || cursorY == 0x17) {
                r = 4;
            } else if (cursorY == 1) {
                r = 5;
            } else {
                r = cursorY == 0x16 ? 6 : 7;
            }
        } else if (cursorX == 0x16) {
            if (cursorY == 0 || cursorY == 0x17) {
                r = 8;
            } else if (cursorY == 1) {
                r = 9;
            } else {
                r = cursorY == 0x16 ? 0xA : 0xB;
            }
        } else {
            if (cursorY == 0 || cursorY == 0x17) {
                r = 0xC;
            } else if (cursorY == 1) {
                r = 0xD;
            } else {
                r = cursorY == 0x16 ? 0xE : 0xF;
            }
        }
    } else {
        r = func_8019A4F8();
    }
    return r;
}
