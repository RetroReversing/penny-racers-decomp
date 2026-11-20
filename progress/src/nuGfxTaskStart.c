extern u32 D_80046D90;
extern s32 *D_8006A140;
extern u16 D_8006A144;
extern u16 D_8006A146;
extern u32 D_8006FB24;
extern s32 *D_8006FF68;
extern volatile s32 D_80092C00;
extern s32 D_800DB1B0;
extern s32 *D_800DD3D8;
extern s32 D_800DD85C;

s32 func_800339C0();
void osWritebackDCacheAll();
void osSendMesg();

void nuGfxTaskStart(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 *msg;
    s32 *entry;
    s32 *var_a1;
    s32 flag;
    s32 ret;
    u32 idx;

    msg = D_8006A140;
    entry = (s32 *)(arg2 * 8 + (u32)D_8006FF68);
    msg[16] = arg0;
    msg[17] = arg1;
    msg[8] = entry[0];
    msg[10] = entry[1];
    msg[2] = arg3;
    msg[3] = D_800DB1B0;
    flag = arg3 & 1;
    var_a1 = (s32 *)arg1;
    if (flag != 0) {
        idx = D_8006FB24 + 1;
        var_a1 = D_800DD3D8;
        msg[21] = (s32)&D_8006A146;
        D_8006FB24 = idx;
        D_800DB1B0 = var_a1[idx % D_80046D90];
    } else {
        msg[21] = (s32)&D_8006A144;
    }
    ret = func_800339C0(1, var_a1, entry, flag);
    D_80092C00 += 1;
    D_80092C00;
    func_800339C0(ret);
    osWritebackDCacheAll();
    osSendMesg(&D_800DD85C, D_8006A140, 1);
    D_8006A140 = (s32 *)*D_8006A140;
}
