extern u8 menuArrowAlpha;
void updateColorCycle(s32);

void func_80207014(void)
{
    u8 *p;

    p = &menuArrowAlpha;
    *p = *p - 8;
    updateColorCycle(0x14);
}
