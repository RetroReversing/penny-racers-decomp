extern u8 D_8006FAF0[];
extern u8 D_800DA260[];
extern u8 D_802D6288[];
extern s16 D_8021E1A6;
extern s32 D_801E99C4;
extern u8 D_80232D34[], D_80232D44[], D_80232D58[], D_80232D6C[], D_80232D80[], D_80232D94[], D_80232DA8[], D_80232DBC[], D_80232DD0[], D_80232DE4[], D_80232DF8[], D_80232E0C[], D_80232E20[];
void func_8003DE60();
void func_80149FA8(u16, void *);
s32 func_801FA38C(s32, void *, void *);

void func_80230BC4(s32 arg0, s16 arg1) {
    s32 temp_a0;
    s32 temp_a1;
    s32 temp_s2;
    s32 temp_v0;
    s32 var_v1;
    u16 temp_s1;
    void *temp_a1_2;
    void *temp_s0;
    void *var_a1;

    temp_a1 = *(s32 *)(D_802D6288 + (*(u16 *)(D_8006FAF0 + 0x20) * 4));
    temp_a0 = (arg0 & 0xFFFF) * 0x178;
    temp_s0 = D_800DA260 + temp_a0;
    if (D_8021E1A6 < 3) {
        var_a1 = (void *)(temp_a1 + (((arg1 & 0xFFFF) + (D_8021E1A6 * 0xE)) * 0x24));
        *(u16 *)(temp_s0 + 6) = *(u16 *)(var_a1 + 4);
        *(u16 *)(temp_s0 + 4) = *(u16 *)(var_a1 + 2);
        *(f32 *)(temp_s0 + 0x1C) = *(f32 *)(var_a1 + 0x18);
        *(u16 *)(temp_s0 + 8) = *(u16 *)(var_a1 + 6);
        *(s16 *)(temp_s0 + 0) = arg1;
    } else {
        var_a1 = (void *)(temp_a1 + (((arg1 & 0xFFFF) * 0x24) + 0x3F0));
        *(u16 *)(D_800DA260 + temp_a0 + 6) = 0xE;
        if (*(u16 *)(D_8006FAF0 + 0x20) == 6) {
            *(u16 *)(D_800DA260 + temp_a0 + 4) = 0xC;
            var_v1 = arg0 & 0xFFFF;
        } else {
            *(u16 *)(D_800DA260 + temp_a0 + 4) = 0xB;
            var_v1 = arg0 & 0xFFFF;
        }
        temp_v0 = var_v1 * 0x178;
        *(f32 *)(D_800DA260 + temp_v0 + 0x12 + 6) = 1.0f;
        *(u16 *)(D_800DA260 + temp_v0 + 8) = 5;
        *(s16 *)(temp_s0 + 0) = arg1;
    }
    *(u16 *)(temp_s0 + 2) = *(u16 *)(var_a1 + 0);
    *(u16 *)(temp_s0 + 0xA) = *(u16 *)(var_a1 + 8);
    *(u16 *)(temp_s0 + 0xC) = *(u16 *)(var_a1 + 0xA);
    *(u16 *)(temp_s0 + 0xE) = *(u16 *)(var_a1 + 0xC);
    *(f32 *)(temp_s0 + 0x14) = *(f32 *)(var_a1 + 0x10);
    *(f32 *)(temp_s0 + 0x18) = *(f32 *)(var_a1 + 0x14);
    *(f32 *)(temp_s0 + 0x20) = *(f32 *)(var_a1 + 0x1C);
    *(u8 *)(temp_s0 + 0x24) = *(u8 *)(var_a1 + 0x20);
    temp_s2 = arg1 & 0xFFFF;
    temp_a1_2 = temp_s0 + temp_s2;
    *(s8 *)(temp_a1_2 + 0x16A) = func_801FA38C(0, var_a1, D_8006FAF0 + 0x20) % 10;
    temp_a1 = (u16)(arg0 & 0xFFFF);
    func_80149FA8(temp_a1, temp_a1_2);
    if (D_801E99C4 != 0) {
        func_8003DE60(D_80232D34, temp_a1, temp_s2);
        func_8003DE60(D_80232D44, *(u16 *)(temp_s0 + 2));
        func_8003DE60(D_80232D58, *(u16 *)(temp_s0 + 4));
        func_8003DE60(D_80232D6C, *(u16 *)(temp_s0 + 6));
        func_8003DE60(D_80232D80, *(u16 *)(temp_s0 + 8));
        func_8003DE60(D_80232D94, *(u16 *)(temp_s0 + 0xA));
        func_8003DE60(D_80232DA8, *(u16 *)(temp_s0 + 0xC));
        func_8003DE60(D_80232DBC, *(u16 *)(temp_s0 + 0xE));
        func_8003DE60(D_80232DD0);
        func_8003DE60(D_80232DE4);
        func_8003DE60(D_80232DF8);
        func_8003DE60(D_80232E0C);
        func_8003DE60(D_80232E20, (u16) *(u8 *)(temp_s0 + 0x24));
    }
}
