extern s32 D_80046838;
void osViSetYScale(f32 arg0);
s32 func_80028BA0(void);
void osViBlack(s32 arg0);

void func_800267FC(void) {
    osViSetYScale(1.0f);
    D_80046838 = 1;
    func_80028BA0();
    osViBlack(1);
}
