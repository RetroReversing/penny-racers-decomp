extern u8 D_8021B650[];
extern u8 D_8021B651[];
extern u8 D_8021B652[];
extern u8 D_8021B653[];
extern u8 D_8021F264;

void func_80211C7C(s32 arg0) {
    u8 *p;
    s32 temp_a1;
    s32 temp_a1_2;
    s32 temp_a2;
    s32 temp_a3;
    s32 temp_v0;
    u32 temp_a0;
    u8 temp_v0_2;

    p = &D_8021F264;
    temp_a0 = arg0 & 0xFF;
    temp_a3 = (*p % temp_a0) & 0xFF;
    temp_a1 = (*p / temp_a0) & 0xFF;
    temp_v0 = temp_a1 + 1;
    temp_a1_2 = (temp_a1 *= 4);
    temp_a2 = (-(temp_v0 < 4) & temp_v0) * 4;
    *(s8 *)(p - 4) = (s8) (D_8021B650[temp_a1_2] - ((s32) (temp_a3 * (D_8021B650[temp_a1_2] - D_8021B650[temp_a2])) / (s32) temp_a0));
    *(s8 *)(p - 3) = (s8) (D_8021B651[temp_a1_2] - ((s32) (temp_a3 * (D_8021B651[temp_a1_2] - D_8021B651[temp_a2])) / (s32) temp_a0));
    *(s8 *)(p - 2) = (s8) (D_8021B652[temp_a1_2] - ((s32) (temp_a3 * (D_8021B652[temp_a1_2] - D_8021B652[temp_a2])) / (s32) temp_a0));
    *(s8 *)(p - 1) = (s8) (D_8021B653[temp_a1_2] - ((s32) (temp_a3 * (D_8021B653[temp_a1_2] - D_8021B653[temp_a2])) / (s32) temp_a0));
    temp_v0_2 = *p + 1;
    *p = temp_v0_2;
    if ((temp_v0_2 & 0xFF) >= (temp_a0 * 4)) {
        *p = 0;
    }
}
