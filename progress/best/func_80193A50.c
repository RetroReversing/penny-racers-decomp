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
extern s8 D_801C6BB9;
extern u8 D_801C6BE0[];
extern s8 D_801C7068;
extern s16 D_801C7078;
extern u8 D_801C7AB6;
extern u8 D_801C7AB8;
extern s16 D_801C5EA4;
extern u8 D_801C7AD8[];
extern u8 D_801C7080[];
extern u8 D_801C7081[];
extern u8 D_801C7082[];
extern u8 D_801C7083[];
extern u8 D_801C7084[];
extern u8 D_801C7D30[];
extern u8 D_801C7D34[];
extern u8 D_8031445C[];
extern void *D_801C7AB0;
extern s16 func_800DE41C(s32, s32, s32, s32, s32, s32, void *, s32, s32, f32, s32, f32, s32, s32, s32, f32, f32, f32);
extern void func_8014B854(s32);
extern s32 func_80199AB0(s32);
extern void func_8019F7C0(s32);
extern void func_80192E00(s32);
extern void func_801BFA1C(s32, s32);

s32 func_80193A50(s32 arg0) {
char *__repair_addr;

    s32 var_s1;
    s32 t;
    s32 v;
    register s16 temp_v0;
    u8 buf[0x48];

    var_s1 = D_8011F32F[D_801C7074 * 100];
    func_8019F7C0(arg0 & 0xFFFF);
    func_80192E00(func_80199AB0(arg0 & 0xFFFF) & 0xFF);
    if (D_801E9990[(arg0 & 0xFFFF) * 28] == 1 && D_801E9994[(arg0 & 0xFFFF) * 28] == 0 && D_801C7469 != 4) {
        D_801C7D30[D_801C6BB4 * 16] = 0;
        D_801C7D30[D_801C6BB4 * 16 + 1] = (var_s1 = 1);
        *(u32 *)(D_801C7D34 + D_801C6BB4 * 16) = (u32)(D_8031445C + ((s8 *)&D_801C6BB4)[-2] * 8);
        temp_v0 = func_800DE41C(0, 0, 2, 0, 0x5A, 0xFF, &D_801C7D30[D_801C6BB4 * 16], 0, 0,
            ((f32)((s8 *)&D_801C6BB4)[-4] * 400.0f) * 0.5f, 0,
            ((f32)((s8 *)&D_801C6BB4)[-3] * 400.0f) * 0.5f, 0, 0, 0, 0.5f, 0.5f, 0.5f);
__repair_addr = (char *)(D_8011F2F4 + (temp_v0 & 0xFFFF) * 100);

        *(u16 *)(__repair_addr) |= 8;
        *(s16 *)(D_801C6BE0 + D_801C6BB4 * 2) = temp_v0;
        D_801C7AD8[D_801C6BB4] = *((u8 *)D_801C7AB0 + 2);
        v = *((u8 *)D_801C7AB0 + 2);
        D_801C7080[v * 5] = D_801C7469;
        D_801C7081[v * 5] = 0;
        D_801C7082[v * 5] = ((s8 *)&D_801C6BB4)[-4];
        D_801C7083[v * 5] = ((s8 *)&D_801C6BB4)[-3];
        D_801C7084[v * 5] = ((s8 *)&D_801C6BB4)[-2];
        func_801BFA1C(0, 0);
        *((u8 *)D_801C7AB0 + 2) = var_s1;
        D_801C7AB6 += 1;
        D_801C7068 = ((u8 *)&D_801C6BB4)[-4] + D_801C6B22;
        t = ((u8 *)&D_801C6BB4)[-3] + D_801C6B23;
        D_801C6BB9 = t;
        if (D_801C7469 == 0) {
            if ((s8)t > 0) {
                D_801C6BB9 = t - 1;
            } else {
                D_801C6BB9 = t + 2;
            }
        } else if (D_801C7469 == 1) {
            if (D_801C7068 > 0) {
                D_801C7068 = D_801C7068 - 1;
            } else {
                D_801C7068 = D_801C7068 + 2;
            }
        } else if (D_801C7469 == 2) {
            if (D_801C6BB9 < 0x17) {
                D_801C6BB9 = D_801C6BB9 + 1;
            } else {
                D_801C6BB9 = D_801C6BB9 - 2;
            }
        } else if (D_801C7469 == 4) {
            if (D_801C7068 < 0x17) {
                D_801C7068 = D_801C7068 + 1;
            } else {
                D_801C7068 = D_801C7068 - 2;
            }
        }
        D_801C7AB8 = 4;
        D_801C7078 = (s16)(D_801C7068 + D_801C6BB9 * 24);
        var_s1 = 9;
        D_801C5EA4 = 0;
        func_8014B854(0x40);
    } else if (D_801E9990[(arg0 & 0xFFFF) * 28] == 0 && D_801E9994[(arg0 & 0xFFFF) * 28] == 1) {
        *((u8 *)D_801C7AB0 + 2) = 0;
        v = *((u8 *)D_801C7AB0 + 2);
        D_801C7AB6 = 0;
        D_801C7081[v * 5] = 0;
        D_801C7080[v * 5] = 4;
        D_801C7082[v * 5] = -1;
        D_801C7083[v * 5] = -1;
        D_801C7084[v * 5] = -1;
        D_8011F2FD[D_801C746A * 100] = 1;
        D_801C7469 = 4;
        var_s1 = 1;
        func_8014B854(0x3F);
    }
    return var_s1;
}
