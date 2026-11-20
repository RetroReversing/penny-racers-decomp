/* identical to func_8002D320 (matched), with its names changed by decompdecomp */
s32 func_80038E1C(void *, u32);
extern f64 D_8004A8E0;
extern f64 D_8004A8E8;

void func_800383D0(u8 *arg0, u8 *arg1) {
    f64 var_ft0;
    s32 temp_v0_2;
    u32 i;
    s32 *p;
    s32 temp_a0;

    *(u8 **)(arg0 + 0) = arg1;
    *(s32 *)(arg0 + 4) = 0;
    *(s32 *)(arg0 + 0x10) = 0;
    *(s32 *)(arg0 + 0xC) = 0;
    *(s32 *)(arg0 + 0x14) = 1;
    p = (s32 *)arg0;
    for (i = 0; i < 0x10; i++) {
        *(u8 *)(arg0 + i + 0xA8) = 0;
        *(s32 *)(arg0 + 0x58 + i * 4) = 0;
        *(u8 *)(arg0 + i + 0x98) = 0;
        temp_a0 = ((s32 *)*(u8 **)arg0)[i];
        if (temp_a0 != 0) {
            *(u32 *)(arg0 + 4) |= 1 << i;
            *(s32 *)(arg0 + 0x18 + i * 4) = (s32)(arg1 + temp_a0);
            *(s32 *)(arg0 + 0xB8 + i * 4) = func_80038E1C(arg0, i);
        } else {
            *(s32 *)(arg0 + 0x18 + i * 4) = 0;
        }
    }
    temp_v0_2 = ((s32 *)*(u8 **)arg0)[0x40 / 4];
    var_ft0 = (f64)temp_v0_2;
    if (temp_v0_2 < 0) {
        var_ft0 += D_8004A8E0;
    }
    *(f32 *)(arg0 + 8) = (f32)(D_8004A8E8 / (f64)(f32)var_ft0);
}
