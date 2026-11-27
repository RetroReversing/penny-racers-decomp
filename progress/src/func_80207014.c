extern u8 menuArrowAlpha;
void func_80211C7C(s32);

void func_80207014(void)
{
    u8 *p;

    p = &menuArrowAlpha;
    *p = *p - 8;
    func_80211C7C(0x14);
}
