extern u8 D_8011F2F4[];
extern u8 D_8011F2FD[];
extern u8 D_8011F32F[];
extern u16 D_801C7074;
extern u32 D_801E9990[];
extern u32 D_801E9994[];
extern u8 D_801C7469;
extern u16 D_801C746A;
extern u16 D_801C6BB4;
extern u8 D_801C6B22;
extern u8 D_801C6B23;
extern u8 D_801C6BB9;
extern u8 D_801C6BE0[];
extern s8 D_801C7068;
extern s16 D_801C7078;
extern u8 D_801C7AB6;
extern u8 D_801C7AB8;
extern s16 D_801C5EA4;
extern u16 D_801C7AD8[];
extern u8 D_801C7080[];
extern u8 D_801C7D30[];
extern u32 D_801C7D34[];
extern u8 D_8031445C[];
extern void *D_801C7AB0;
extern s16 func_800DE41C(s32, s32, s32, s32, s32, s32, void *, s32, s32, f32, s32, f32, s32, s32, s32, f32, f32, f32);
extern void func_8014B854(s32);
extern s32 func_80199AB0(s32);
extern void func_8019F7C0(s32);
extern void func_80192E00(s32);
extern void func_801BFA1C(s32, s32);

s32 func_80193A50(s32 arg0) {
    u8 var_s1;
    s32 temp_s0;
    s32 temp_v1;
    s32 var_v0;
    s32 var_a0;
    s16 temp_v0;
    u8 temp_v1_2;

    var_s1 = D_8011F32F[D_801C7074 * 0x64];
    temp_s0 = arg0 & 0xFFFF;
    do { func_8019F7C0(temp_s0); } while (0);
    func_80192E00(func_80199AB0(temp_s0) & 0xFF);
    if (D_801E9990[temp_s0 * 0x1C] == 1 && D_801E9994[temp_s0 * 0x1C] == 0 && D_801C7469 != 4) {
        D_801C7D30[D_801C6BB4 * 0x10] = 0;
        D_801C7D30[D_801C6BB4 * 0x10 + 1] = 1;
        temp_v0 = func_800DE41C(0, 0, 2, 0, 0x5A, 0xFF, &D_801C7D30[D_801C6BB4 * 0x10], 0, 0, 0.5f, 0, 0.5f, 0, 0, 0, 0.5f, 0.5f, 0.5f);
        temp_v1 = (temp_v0 & 0xFFFF) * 0x64;
        D_8011F2F4[temp_v1] |= 8;
        D_801C6BE0[D_801C6BB4 * 2] = temp_v0;
        D_801C7AD8[(unsigned char)D_801C6BB4] = *((u8 *)D_801C7AB0 + 2);
        D_801C7AB6 += 1;
        D_801C5EA4 = 0;
        do { func_8014B854(0x40); } while (0);
        return 0;
    }
    if (D_801E9990[temp_s0 * 0x1C] == 0 && D_801E9994[temp_s0 * 0x1C] == 1) {
        *((u8 *)D_801C7AB0 + 2) = 0;
        D_801C7AB6 = 0;
        D_8011F2FD[D_801C746A * 0x64] = 1;
        D_801C7469 = 4;
        func_8014B854(0x3F);
        return 1;
    }
    return var_s1;
}
