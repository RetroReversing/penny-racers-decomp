typedef struct { u8 a, b; } Hdr;
extern u8 func_8019A4F8(void);
extern s8 cursorY;
extern s8 cursorX;
extern Hdr *trackInfo;

/* Returns which of the 16 cells (4x4 grid) the cursor is on, for track mode 5; otherwise defers to func_8019A4F8. */ u8 getCursorGridCell(void)
{
    u8 cell;
    if (trackInfo->b == 5) {
        if (cursorX == 0 || cursorX == 0x17) {
            if (cursorY == 0) {
                cell = 0;
            } else if (cursorY == 0x17) {
                cell = 0;
            } else if (cursorY == 1) {
                cell = 1;
            } else {
                cell = cursorY == 0x16 ? 2 : 3;
            }
        } else if (cursorX == 1) {
            if (cursorY == 0 || cursorY == 0x17) {
                cell = 4;
            } else if (cursorY == 1) {
                cell = 5;
            } else {
                cell = cursorY == 0x16 ? 6 : 7;
            }
        } else if (cursorX == 0x16) {
            if (cursorY == 0 || cursorY == 0x17) {
                cell = 8;
            } else if (cursorY == 1) {
                cell = 9;
            } else {
                cell = cursorY == 0x16 ? 0xA : 0xB;
            }
        } else {
            if (cursorY == 0 || cursorY == 0x17) {
                cell = 0xC;
            } else if (cursorY == 1) {
                cell = 0xD;
            } else {
                cell = cursorY == 0x16 ? 0xE : 0xF;
            }
        }
    } else {
        cell = func_8019A4F8();
    }
    return cell;
}
