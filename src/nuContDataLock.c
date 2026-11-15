extern s32 D_8006F9D4;
s32 func_800339C0(s32);

void nuContDataLock(void) {
    s32 temp_v0;

    temp_v0 = func_800339C0(1);
    D_8006F9D4 = 1;
    func_800339C0(temp_v0);
}
