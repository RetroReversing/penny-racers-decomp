/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */
#ifndef M2C_DEFINES
#define M2C_DEFINES
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#define M2C_ERROR(desc) (0)
#define M2C_CARRY 0
#define M2C_OVERFLOW(a) (0)
#endif

M2C_UNK func_801CA140(void **, void *, s32, s32);   /* extern */
M2C_UNK func_801CA468(void **, M2C_UNK);            /* extern */
M2C_UNK func_801CB74C(void **, M2C_UNK, s32, M2C_UNK, M2C_UNK *, M2C_UNK *); /* extern */
M2C_UNK func_801CBF48(void **, s32, s32, M2C_UNK, M2C_UNK *, s32, s32); /* extern */
extern M2C_UNK D_801D4FC0;
extern M2C_UNK D_80202580;
extern s32 D_80202624;
extern M2C_UNK D_80203744;
extern M2C_UNK D_80203760;
extern M2C_UNK D_8020376C;
extern M2C_UNK D_80203774;
extern M2C_UNK D_8020377C;
extern M2C_UNK D_80203784;
extern M2C_UNK D_8020378C;
extern M2C_UNK D_80203794;
extern M2C_UNK D_8020379C;
extern M2C_UNK D_802037A4;
extern s16 D_802038DE;
extern s16 D_802038E4;
extern M2C_UNK D_802038E8;
extern M2C_UNK D_802038E9;
extern M2C_UNK D_802038EE;
extern M2C_UNK D_802038F0;
extern M2C_UNK D_802038F1;
extern M2C_UNK D_802038F2;
extern M2C_UNK D_802038F3;
extern M2C_UNK D_802038F4;
extern M2C_UNK D_802038F5;
extern M2C_UNK D_802038F6;
extern s32 D_80203AA8;
extern u8 D_80203AAD;
extern u16 D_80203AB6;
extern s32 D_80203AC4;
extern s16 D_80203AC6;
extern u16 D_80203ACE;

void func_801FDA44(void **arg0) {
    s16 temp_v1_14;
    s16 temp_v1_15;
    s32 temp_a2;
    s32 temp_a2_2;
    s32 temp_a3;
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_s1_2;
    s32 temp_v0;
    s32 temp_v1_10;
    s32 temp_v1_11;
    s32 temp_v1_12;
    s32 temp_v1_8;
    s32 temp_v1_9;
    s32 var_s4;
    s32 var_s4_2;
    s32 var_s4_3;
    s32 var_v0;
    u32 temp_s1;
    u32 temp_s2;
    u32 temp_v1_7;
    void *temp_a1;
    void *temp_a1_2;
    void *temp_a1_3;
    void *temp_a1_4;
    void *temp_a1_5;
    void *temp_a1_6;
    void *temp_t1;
    void *temp_v0_2;
    void *temp_v1;
    void *temp_v1_13;
    void *temp_v1_2;
    void *temp_v1_3;
    void *temp_v1_4;
    void *temp_v1_5;
    void *temp_v1_6;

    D_80202624 += 1;
    temp_v1 = *arg0;
    *arg0 = temp_v1 + 8;
    M2C_FIELD(temp_v1, s32 *, 0) = 0xE7000000;
    M2C_FIELD(temp_v1, s32 *, 4) = 0;
    temp_v1_2 = *arg0;
    *arg0 = temp_v1_2 + 8;
    M2C_FIELD(temp_v1_2, s32 *, 0) = 0xBA001402;
    M2C_FIELD(temp_v1_2, s32 *, 4) = 0x300000;
    temp_v1_3 = *arg0;
    *arg0 = temp_v1_3 + 8;
    M2C_FIELD(temp_v1_3, s32 *, 0) = 0xF7000000;
    M2C_FIELD(temp_v1_3, s32 *, 4) = 0x210021;
    switch (D_80203AA8) {                           /* irregular */
    case 0:
        temp_v1_4 = *arg0;
        *arg0 = temp_v1_4 + 8;
        M2C_FIELD(temp_v1_4, s32 *, 0) = 0xF63FC17C;
        var_v0 = 0xA00E0;
block_5:
        M2C_FIELD(*arg0, s32 *, 4) = var_v0;
        break;
    case 1:
        temp_v1_5 = *arg0;
        *arg0 = temp_v1_5 + 8;
        M2C_FIELD(temp_v1_5, s32 *, 0) = 0xF643C2FC;
        var_v0 = 0xA01A0;
        goto block_5;
    }
    temp_v1_6 = *arg0;
    *arg0 = temp_v1_6 + 8;
    M2C_FIELD(temp_v1_6, s32 *, 0) = 0xF7000000;
    M2C_FIELD(temp_v1_6, s32 *, 4) = 0x80218021;
    var_s4 = 0;
    do {
        temp_a2 = D_80203AB6 + var_s4;
        temp_v1_7 = temp_a2 & 0xFFFF;
        if (temp_v1_7 < 0x10U) {
            if (*(&D_802038F4 + (temp_v1_7 * 0x1C)) != 0) {
                temp_a1 = *arg0;
                *arg0 = temp_a1 + 8;
                temp_v1_8 = (var_s4 & 0xFFFF) * 0x28;
                M2C_FIELD(temp_a1, s32 *, 0) = (s32) ((((temp_v1_8 + 0x6F) & 0x3FF) << 0xE) | 0xF600027C);
                M2C_FIELD(temp_a1, s32 *, 4) = (s32) ((((temp_v1_8 + 0x58) & 0x3FF) << 0xE) | 0x260);
            }
            if (*(&D_802038F3 + ((temp_a2 & 0xFFFF) * 0x1C)) != 0) {
                temp_a1_2 = *arg0;
                *arg0 = temp_a1_2 + 8;
                temp_v1_9 = (var_s4 & 0xFFFF) * 0x28;
                M2C_FIELD(temp_a1_2, s32 *, 0) = (s32) ((((temp_v1_9 + 0x6F) & 0x3FF) << 0xE) | 0xF6000B5C);
                M2C_FIELD(temp_a1_2, s32 *, 4) = (s32) ((((temp_v1_9 + 0x58) & 0x3FF) << 0xE) | 0x280);
            }
            if (*(&D_802038F2 + ((temp_a2 & 0xFFFF) * 0x1C)) != 0) {
                temp_a1_3 = *arg0;
                *arg0 = temp_a1_3 + 8;
                temp_v1_10 = (var_s4 & 0xFFFF) * 0x28;
                M2C_FIELD(temp_a1_3, s32 *, 0) = (s32) ((((temp_v1_10 + 0x6F) & 0x3FF) << 0xE) | 0xF60002BC);
                M2C_FIELD(temp_a1_3, s32 *, 4) = (s32) ((((temp_v1_10 + 0x58) & 0x3FF) << 0xE) | 0x2A0);
            }
            if (*(&D_802038F5 + ((temp_a2 & 0xFFFF) * 0x1C)) != 0) {
                temp_a1_4 = *arg0;
                *arg0 = temp_a1_4 + 8;
                temp_v1_11 = (var_s4 & 0xFFFF) * 0x28;
                M2C_FIELD(temp_a1_4, s32 *, 0) = (s32) ((((temp_v1_11 + 0x6F) & 0x3FF) << 0xE) | 0xF60002DC);
                M2C_FIELD(temp_a1_4, s32 *, 4) = (s32) ((((temp_v1_11 + 0x58) & 0x3FF) << 0xE) | 0x2C0);
            }
            if (*(&D_802038F6 + ((temp_a2 & 0xFFFF) * 0x1C)) != 0) {
                temp_a1_5 = *arg0;
                *arg0 = temp_a1_5 + 8;
                temp_v1_12 = (var_s4 & 0xFFFF) * 0x28;
                M2C_FIELD(temp_a1_5, s32 *, 0) = (s32) ((((temp_v1_12 + 0x6F) & 0x3FF) << 0xE) | 0xF60002FC);
                M2C_FIELD(temp_a1_5, s32 *, 4) = (s32) ((((temp_v1_12 + 0x58) & 0x3FF) << 0xE) | 0x2E0);
            }
        }
        var_s4 += 1;
    } while ((u32) (var_s4 & 0xFFFF) < 5U);
    temp_v1_13 = *arg0;
    *arg0 = temp_v1_13 + 8;
    M2C_FIELD(temp_v1_13, s32 *, 0) = 0xE7000000;
    M2C_FIELD(temp_v1_13, s32 *, 4) = 0;
    temp_v0 = D_80202624 * 2;
    temp_t1 = *arg0;
    *arg0 = temp_t1 + 8;
    M2C_FIELD(temp_t1, s32 *, 0) = 0xF7000000;
    temp_a2_2 = ((u32) (temp_v0 + 0x40) >> 2) & 0x1E;
    temp_a3 = ((temp_v0 - 0x80) * 8) & 0x3C0;
    M2C_FIELD(temp_t1, s32 *, 4) = (s32) (((((temp_v0 << 8) & 0x7800) | (((temp_v0 + 0x20) * 8) & 0x3C0) | temp_a2_2 | 1) << 0x10) | 1 | ((((temp_v0 + 0x60) << 8) & 0x7800) | temp_a3 | (((u32) (temp_v0 - 0x60) >> 2) & 0x1E)));
    temp_a1_6 = *arg0;
    *arg0 = temp_a1_6 + 8;
    M2C_FIELD(temp_a1_6, s32 *, 0) = (s32) (((((D_80203AAD * 8) + 0x9F) & 0x3FF) * 4) | 0xF61BC000);
    M2C_FIELD(temp_a1_6, s32 *, 4) = (s32) ((((D_80203AAD + 0x13) << 5) & 0xFE0) | 0x160000);
    temp_v0_2 = *arg0;
    *arg0 = temp_v0_2 + 8;
    M2C_FIELD(temp_v0_2, s32 *, 0) = 0xE7000000;
    M2C_FIELD(temp_v0_2, s32 *, 4) = 0;
    func_801CA140(arg0, temp_a1_6, temp_a2_2, temp_a3);
    func_801CA468(arg0, 0xFF);
    if (D_80202624 & 0x10) {
        func_801CB74C(arg0, 0x38, 0x28, 8, &D_801D4FC0, &D_80203744);
    }
    func_801CB74C(arg0, 0x28, 0x38, 8, &D_801D4FC0, &D_80203760);
    var_s4_2 = 0;
    __repair_rows: {
        temp_v1_14 = var_s4_2 + D_80203ACE;
        temp_s1 = temp_v1_14 & 0xFFFF;
        if (temp_s1 < 0x1AU) {
            temp_s0 = (((var_s4_2 & 0xFFFF) + 7) * 8) & 0xFFFF;
            func_801CBF48(arg0, 0x88, temp_s0, 8, &D_801D4FC0, 2, (s32) temp_v1_14);
            func_801CB74C(arg0, 0xA0, temp_s0, 8, &D_801D4FC0, *(&D_80202580 + (temp_s1 * 4)));
        }
        var_s4_2 += 1;
    }
if ((u32) (var_s4_2 & 0xFFFF) < 5U) goto __repair_rows;
    func_801CB74C(arg0, 0x28, 0x68, 8, &D_801D4FC0, &D_80203760);
    if (D_80203AC4 != -1) {
        func_801CBF48(arg0, 0x88, 0x68, 8, &D_801D4FC0, 2, (s32) D_80203AC6);
        func_801CB74C(arg0, 0xA0, 0x68, 8, &D_801D4FC0, *(&D_80202580 + (D_80203AC4 * 4)));
    }
    func_801CB74C(arg0, 0x28, 0x78, 8, &D_801D4FC0, &D_8020376C);
    func_801CBF48(arg0, 0x70, 0x78, 8, &D_801D4FC0, 5, (s32) D_802038DE);
    func_801CB74C(arg0, 0x28, 0x80, 8, &D_801D4FC0, &D_80203774);
    func_801CBF48(arg0, 0x70, 0x80, 8, &D_801D4FC0, 5, (s32) D_802038E4);
    func_801CB74C(arg0, 0x28, 0x90, 8, &D_801D4FC0, &D_8020377C);
    func_801CB74C(arg0, 0x28, 0x98, 8, &D_801D4FC0, &D_80203784);
    func_801CB74C(arg0, 0x28, 0xA0, 8, &D_801D4FC0, &D_8020378C);
    func_801CB74C(arg0, 0x28, 0xA8, 8, &D_801D4FC0, &D_80203794);
    func_801CB74C(arg0, 0x28, 0xB0, 8, &D_801D4FC0, &D_8020379C);
    func_801CB74C(arg0, 0x28, 0xB8, 8, &D_801D4FC0, &D_802037A4);
    var_s4_3 = 0;
    do {
        temp_v1_15 = var_s4_3 + D_80203AB6;
        temp_s2 = temp_v1_15 & 0xFFFF;
        if (temp_s2 < 0x10U) {
            temp_s1_2 = (((var_s4_3 & 0xFFFF) * 0x28) + 0x48) & 0xFFFF;
            func_801CBF48(arg0, temp_s1_2, 0x90, 8, &D_801D4FC0, 5, (s32) temp_v1_15);
            temp_s0_2 = temp_s2 * 0x1C;
            func_801CBF48(arg0, temp_s1_2, 0x98, 8, &D_801D4FC0, 5, (s32) *(&D_802038EE + temp_s0_2));
            func_801CBF48(arg0, temp_s1_2, 0xA0, 8, &D_801D4FC0, 5, (s32) *(&D_802038E9 + temp_s0_2));
            func_801CBF48(arg0, temp_s1_2, 0xA8, 8, &D_801D4FC0, 5, (s32) *(&D_802038E8 + temp_s0_2));
            func_801CBF48(arg0, temp_s1_2, 0xB0, 8, &D_801D4FC0, 5, (s32) *(&D_802038F0 + temp_s0_2));
            func_801CBF48(arg0, temp_s1_2, 0xB8, 8, &D_801D4FC0, 5, (s32) *(&D_802038F1 + temp_s0_2));
        }
        var_s4_3 += 1;
    } while ((u32) (var_s4_3 & 0xFFFF) < 5U);
}
