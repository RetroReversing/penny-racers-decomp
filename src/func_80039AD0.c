s32 func_8003EAC0(void);
void func_8003EAE0(s32);
extern s32 *D_800481F0;

s32 func_80039AD0(void) {
    s32 temp_s0;
    s32 temp_v0;

    temp_v0 = func_8003EAC0();
    temp_s0 = D_800481F0[1];
    func_8003EAE0(temp_v0);
    return temp_s0;
}
