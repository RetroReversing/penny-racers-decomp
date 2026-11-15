#define AT(T, sym, off) (*(T *)((u8 *)&(sym) + (off)))

extern u8 D_8011F2F4;
extern u8 D_8011F2FB;
extern u8 D_8011F2FD;
extern u8 D_8011F308;
extern u8 D_8011F30C;
extern u8 D_8011F310;
extern u8 D_8011F32F;
extern s16 D_801C5EA4;
extern u8 D_801C6B22;
extern u8 D_801C6B23;
extern u8 D_801C6B27;
extern s8 D_801C6B29;
extern u16 D_801C6BB4;
extern u8 D_801C6BB9;
extern u8 D_801C6BE0;
extern u8 D_801C7066;
extern u8 D_801C7068;
extern u16 D_801C7074;
extern u16 D_801C7078;
extern u8 D_801C7080;
extern u8 D_801C7469;
extern u16 D_801C746A;
extern void *D_801C7AB0;
extern u8 D_801C7AB6;
extern s8 D_801C7AB8;
extern u8 D_801C7AD8;
extern u16 D_801C7D18;
extern u8 D_801C7D30;
extern u8 D_801C7D31;
extern u8 D_801C7D34;
extern u8 D_801E9990;
extern u8 D_801E9994;
extern u8 D_8031445C;
extern u8 func_801B4070;

u16 func_800DE41C(s32, s32, s32, s32, s32, s32, void *, s32, void *, f32, s32, f32, s32, s32, s32, f32, f32, f32);
s32 func_8014B854(s32, u16);
s32 func_80192E00(s32);
s32 func_80199AB0(s32);
s32 func_8019F7C0(s32);

s32 func_80193160(s32 arg0) {
    s32 var_a0;
    s32 temp_s0;
    s32 temp_a0;
    s32 var_v0;
    u16 var_a1;
    u8 var_s1;
    u16 idx;
    u16 temp_v0;
    u16 temp_v0_2;
    u16 temp_v0_3;
    u16 temp_v0_4;
    u16 temp_a0_3;
    u8 pt;

    var_s1 = AT(u8, D_8011F32F, D_801C7074 * 0x64);
    temp_s0 = arg0 & 0xFFFF;
    func_8019F7C0(temp_s0);
    func_80192E00(func_80199AB0(temp_s0) & 0xFF);
    temp_a0 = temp_s0 * 0x70;
    if (AT(s32, D_801E9990, temp_a0) == 1) {
        if (AT(s32, D_801E9994, temp_a0) == 0) {
            if (D_801C7469 != 4) {
                idx = D_801C6BB4;
                AT(u8, D_801C7D30, idx * 0x10) = 0;
                AT(u8, D_801C7D31, idx * 0x10) = 1;
                AT(void *, D_801C7D34, idx * 0x10) = (((s8 *)&D_801C6BB4)[-2] * 8) + &D_8031445C;
                temp_v0 = func_800DE41C(0, 0, 2, 0, 0x5A, 0xFF, (void *)((idx * 0x10) + &D_801C7D30), 0, NULL, (f32)((s8 *)&D_801C6BB4)[-4] * 400.0f * 0.5f, 0, (f32)((s8 *)&D_801C6BB4)[-3] * 400.0f * 0.5f, 0, 0, 0, 0.5f, 0.5f, 0.5f);
                temp_v0_2 = (temp_v0 & 0xFFFF) * 0x64;
                AT(u8, D_8011F2F4, temp_v0_2) |= 8;
                AT(u16, D_801C6BE0, idx * 2) = temp_v0;
                AT(u8, D_801C7AD8, idx) = ((u8 *)D_801C7AB0)[2];
                pt = ((u8 *)D_801C7AB0)[2];
                AT(u8, D_801C7080, pt * 5) = D_801C7469;
                AT(u8, D_801C7080, pt * 5 + 1) = 0;
                AT(u8, D_801C7080, pt * 5 + 2) = (u8)((s8 *)&D_801C6BB4)[-4];
                AT(u8, D_801C7080, pt * 5 + 3) = (u8)((s8 *)&D_801C6BB4)[-3];
                AT(u8, D_801C7080, pt * 5 + 4) = (u8)((s8 *)&D_801C6BB4)[-2];
                ((u8 *)D_801C7AB0)[2] = 1;
                D_801C7AB6 = 1;
                *(s16 *)&D_801C7066 = (s16)((s8)((u8 *)&D_801C7066)[-4] + (((s8 *)&D_801C7066)[-3] * 0x18));
                AT(u16, D_801C6BB4, 2) = func_800DE41C(0, 0, 3, 0, 0x53, 0xFF, NULL, 0, &func_801B4070, (f32)(s8)((u8 *)&D_801C7066)[-4] * 400.0f * 0.5f, 0, (f32)((s8 *)&D_801C7066)[-3] * 400.0f * 0.5f, 0, 0, 0, 0.5f, 0.5f, 0.5f);
                temp_v0_3 = AT(u16, D_801C6BB4, 2) * 0x64;
                AT(u8, D_8011F2F4, temp_v0_3) |= 0x20;
                AT(u8, D_8011F2FB, temp_v0_3) = 0xC;
                D_801C7AB6 += 4;
                D_801C7068 = D_801C7068 + D_801C6B22;
                D_801C6BB9 = D_801C6BB9 + D_801C6B23;
                D_801C7AB8 = 4;
                D_801C7078 = (s8)D_801C7068 + ((s8)D_801C6BB9 * 0x18);
                AT(u8, D_801C7D30, D_801C7078 * 0x10) = 0;
                AT(u8, D_801C7D31, D_801C7078 * 0x10) = 1;
                AT(void *, D_801C7D34, D_801C7078 * 0x10) = (((s8 *)&D_801C6BB4)[-2] * 8) + &D_8031445C;
                var_a1 = func_800DE41C(0, 0, 2, 0, 0x5A, 0xFF, (void *)((D_801C7078 * 0x10) + &D_801C7D30), 0, NULL, (f32)(s8)D_801C7068 * 400.0f * 0.5f, 0, (f32)(s8)D_801C6BB9 * 400.0f * 0.5f, 0, 0, 0, 0.5f, 0.5f, 0.5f);
                temp_a0_3 = (var_a1 & 0xFFFF) * 0x64;
                AT(u8, D_8011F2F4, temp_a0_3) |= 8;
                AT(u16, D_801C6BE0, D_801C7078 * 2) = var_a1;
                AT(u8, D_801C7AD8, D_801C7078) = ((u8 *)D_801C7AB0)[2];
                pt = ((u8 *)D_801C7AB0)[2];
                AT(u8, D_801C7080, pt * 5) = D_801C7469;
                AT(u8, D_801C7080, pt * 5 + 1) = 0;
                AT(u8, D_801C7080, pt * 5 + 2) = D_801C7068;
                AT(u8, D_801C7080, pt * 5 + 3) = D_801C6BB9;
                AT(u8, D_801C7080, pt * 5 + 4) = (u8)((s8 *)&D_801C6BB4)[-2];
                D_801C6B27 = ((u8 *)D_801C7AB0)[2];
                ((u8 *)D_801C7AB0)[2] = 2;
                D_801C7AB6 += 1;
                AT(f32, D_8011F308, temp_a0_3) = (f32)(s8)D_801C7068 * 400.0f * 0.5f;
                AT(f32, D_8011F30C, temp_a0_3) = 0;
                AT(f32, D_8011F310, temp_a0_3) = (f32)(s8)D_801C6BB9 * 400.0f * 0.5f;
                temp_v0_4 = D_801C7D18 * 0x64;
                AT(f32, D_8011F308, temp_v0_4) = -10000.0f;
                AT(f32, D_8011F30C, temp_v0_4) = -10000.0f;
                AT(f32, D_8011F310, temp_v0_4) = -10000.0f;
                D_801C6B29 = 0;
                var_s1 = 0xB;
                D_801C5EA4 = 0;
                var_a0 = 0x40;
                goto block_7;
            }
            goto block_8;
        }
    }
    if (AT(s32, D_801E9990, temp_a0) == 0) {
        var_v0 = var_s1 & 0xFF;
        if (AT(s32, D_801E9994, temp_a0) == 1) {
            ((u8 *)D_801C7AB0)[2] = 0;
            D_801C7AB6 = 0;
            var_a1 = 4;
            AT(u8, D_801C7080, ((u8 *)D_801C7AB0)[2] * 5) = 4;
            AT(u8, D_801C7080, ((u8 *)D_801C7AB0)[2] * 5 + 1) = 0;
            AT(u8, D_801C7080, ((u8 *)D_801C7AB0)[2] * 5 + 2) = 0xFF;
            AT(u8, D_801C7080, ((u8 *)D_801C7AB0)[2] * 5 + 3) = 0xFF;
            AT(u8, D_801C7080, ((u8 *)D_801C7AB0)[2] * 5 + 4) = 0xFF;
            AT(u8, D_8011F2FD, D_801C746A * 0x64) = 1;
            D_801C7469 = 4;
            var_s1 = 1;
            var_a0 = 0x3F;
block_7:
            func_8014B854(var_a0, var_a1);
block_8:
            var_v0 = var_s1 & 0xFF;
        }
    }
    return var_v0;
}
