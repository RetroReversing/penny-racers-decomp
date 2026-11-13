s32 func_800339C0();
extern s8 *D_80046DF4;

void n_alSynAddSndPlayer(s8 *arg0) {
    s32 temp_v0;
    s8 *temp_a1;

    temp_v0 = func_800339C0(1);
    temp_a1 = D_80046DF4;
    *(s32 *)(arg0 + 0x10) = *(s32 *)(temp_a1 + 0x2C);
    *(s8 **)(arg0 + 0) = *(s8 **)(temp_a1 + 0);
    *(s8 **)(temp_a1 + 0) = arg0;
    if (*(s8 **)(temp_a1 + 0xC) == NULL) {
        *(s8 **)(temp_a1 + 0xC) = arg0;
    }
    func_800339C0(temp_v0, temp_a1);
}
