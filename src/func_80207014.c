extern u8 D_8021E19E;
void func_80211C7C(s32);

void func_80207014(void)
{
    u8 *p;

    p = &D_8021E19E;
    *p = *p - 8;
    func_80211C7C(0x14);
}
