extern u8 sSaveData[];

void func_801E2EC4(s32 *arg0) {
    s32 sum;
    u32 i;

    sum = 0;
    i = 0;
    do {
        sum += sSaveData[i];
        i += 1;
    } while (i < 0x1B0U);
    *arg0 = sum;
}
