typedef s32 M2C_UNK;
extern u16 func_8002E9A4(f64, f64, s32, s32, void *);
extern void *func_8002F250(void *, u16 *, void *, s32);
extern s32 func_80034640(s32);
extern s16 D_80046F90[];

void *func_8002E784(void *arg0, u16 *arg1, s32 arg3, void *arg4) {
int __repair_literal;

    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a3;
    s32 temp_v1;
    s32 temp_v1_2;
    u32 *temp_s2;
    u32 *temp_s2_2;
    u32 *var_s0;
    u32 *var_s2;
    u8 *b = arg0;

    temp_a3 = arg3 == 0;
    if (((*(s32 *)(b + 0x84) != 1) | temp_a3) != 0) {
        return arg4;
    }
    var_s2 = func_8002F250(arg0, arg1, arg4, temp_a3);
    if (*(s32 *)(b + 0x78) != 0) {
        *(s32 *)(b + 0x78) = 0;
        temp_a0 = *(s32 *)(b + 0x74);
__repair_literal = 2;

        temp_v1 = (s32)(*(s16 *)(b + 0x5A) * *(s16 *)((u8 *)D_80046F90 + (*(s16 *)(b + 0x58) * __repair_literal))) >> 0xF;
        *(u16 *)(b + 0x68) = (u16)temp_v1;
        *(u16 *)(b + 0x66) = func_8002E9A4((f64)*(s16 *)(b + 0x5C), (f64)(s16)temp_v1, temp_a0, temp_a0, b + 0x64);
        temp_a0_2 = *(s32 *)(b + 0x74);
        temp_v1_2 = (s32)(*(s16 *)(b + 0x5A) * *(s16 *)((u8 *)D_80046F90 + ((0x7F - *(s16 *)(b + 0x58)) * 2))) >> 0xF;
        *(u16 *)(b + 0x6E) = (u16)temp_v1_2;
        *(u16 *)(b + 0x6C) = func_8002E9A4((f64)*(s16 *)(b + 0x5E), (f64)(s16)temp_v1_2, temp_a0_2, temp_a0_2, b + 0x6A);
        var_s2[0] = *(u16 *)(b + 0x68) | 0x09000000;
        temp_s2 = var_s2 + 2;
        var_s2[1] = (*(u16 *)(b + 0x66) << 0x10) | *(u16 *)(b + 0x64);
        var_s2[2] = (u16)*(s16 *)(b + 0x5C) | 0x09060000;
        temp_s2_2 = temp_s2 + 2;
        temp_s2[1] = (*(u16 *)(b + 0x60) << 0x10) | *(u16 *)(b + 0x62);
        temp_s2[2] = *(u16 *)(b + 0x6E) | 0x09040000;
        var_s2 = temp_s2_2 + 2;
        temp_s2_2[1] = (*(u16 *)(b + 0x6C) << 0x10) | *(u16 *)(b + 0x6A);
        var_s0 = var_s2;
        var_s0[0] = (u16)*(s16 *)(b + 0x5E) | 0x03010000;
    } else {
        var_s0 = var_s2;
        var_s0[0] = 0x03000000;
    }
    var_s0[1] = func_80034640(*(s32 *)(b + 0x54));
    *arg1 += 0x170;
    *(s32 *)(b + 0x70) = *(s32 *)(b + 0x70) + 0xB8;
    return var_s2 + 2;
}
