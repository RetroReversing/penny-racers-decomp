void playMenuSound(s32);
unsigned long getCursorDirection(s32);
extern s8 cursorY;
extern s8 cursorX;

void func_8019E734(s32 arg0)
{
    s32 cmd;

    cmd = getCursorDirection(arg0 & 0xFFFF);
    if ((u8)cmd == 0 && cursorY > 0) {
        cursorY = cursorY - 1;
        playMenuSound(0x3B);
    } else if ((u8)cmd == 2 && cursorY < 0x17) {
        cursorY = cursorY + 1;
        playMenuSound(0x3B);
    } else if ((u8)cmd == 1 && cursorX > 0) {
        cursorX = cursorX - 1;
        playMenuSound(0x3B);
    } else if ((u8)cmd == 3 && cursorX < 0x17) {
        cursorX = cursorX + 1;
        playMenuSound(0x3B);
    }
}
