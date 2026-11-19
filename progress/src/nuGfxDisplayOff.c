extern s32 D_8006FB30;
void osViBlack(s32);

void nuGfxDisplayOff(void) {
    D_8006FB30 = 0;
    osViBlack(1);
}
