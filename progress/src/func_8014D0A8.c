extern u8 racerTimerFlags[];
extern u8 lastMaterial;

void func_8014D0A8(u32 **arg0, u16 arg1)
{
    u32 *temp_a2;
    u32 *temp_v1;
    u32 off;

    temp_v1 = *arg0;
    *arg0 = temp_v1 + 2;
    temp_v1[0] = 0xB6000000;
    temp_v1[1] = 0x2000;
    temp_a2 = *arg0;
    *arg0 = temp_a2 + 2;
    temp_a2[0] = 0xFA000000;
    off = (arg1 & 0xFFFF) * 100;
    temp_a2[1] = racerTimerFlags[off] | 0xFFFF6400;
    lastMaterial = 0xFF;
}
