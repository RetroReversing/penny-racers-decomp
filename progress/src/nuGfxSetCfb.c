extern s32 D_80046D90;
extern s32 D_8006FB24;
extern s32 D_800DB1B0;
extern s32 *D_800DD3D8;

void nuGfxSetCfb(s32 *arg0, s32 arg1) {
    D_800DD3D8 = arg0;
    D_80046D90 = arg1;
    D_8006FB24 = 0;
    D_800DB1B0 = *arg0;
}
