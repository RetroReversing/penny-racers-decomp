typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;

M2C_UNK func_801CA140(void **, void *, s32, s32);
M2C_UNK func_801CA468(void **, M2C_UNK);
M2C_UNK func_801CB74C(void **, M2C_UNK, s32, M2C_UNK, M2C_UNK *, M2C_UNK *);
M2C_UNK func_801CBF48(void **, s32, s32, M2C_UNK, M2C_UNK *, s32, s32);
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

#define GW(a, w0, w1) do { s32 *gp_ = (s32 *) *(a); *(a) = gp_ + 2; gp_[0] = (w0); gp_[1] = (w1); } while (0)

void func_801FDA44(void **arg0) {
    s32 i;
s32 __repair_phase_i;
    s32 a2;
    s32 a3;
    
    
    s32 s1;
s32 __repair_phase_s1;
    u32 idx;
    s32 *q;

    D_80202624 += 1;
    GW(arg0, 0xE7000000, 0);
    GW(arg0, 0xBA001402, 0x300000);
    GW(arg0, 0xF7000000, 0x210021);
    switch (D_80203AA8) {
    case 0:
        GW(arg0, 0xF63FC17C, 0xA00E0);
        break;
    case 1:
        GW(arg0, 0xF643C2FC, 0xA01A0);
        break;
    }
    GW(arg0, 0xF7000000, 0x80218021);
    for (i = 0; i < 5; i++) {
        idx = (D_80203AB6 + i) & 0xFFFF;
        if (idx < 0x10) {
            if (*(&D_802038F4 + idx * 0x1C) != 0) {
                GW(arg0, (((i * 0x28 + 0x6F) & 0x3FF) << 0xE) | 0xF600027C, (((i * 0x28 + 0x58) & 0x3FF) << 0xE) | 0x260);
            }
            if (*(&D_802038F3 + idx * 0x1C) != 0) {
                GW(arg0, (((i * 0x28 + 0x6F) & 0x3FF) << 0xE) | 0xF6000B5C, (((i * 0x28 + 0x58) & 0x3FF) << 0xE) | 0x280);
            }
            if (*(&D_802038F2 + idx * 0x1C) != 0) {
                GW(arg0, (((i * 0x28 + 0x6F) & 0x3FF) << 0xE) | 0xF60002BC, (((i * 0x28 + 0x58) & 0x3FF) << 0xE) | 0x2A0);
            }
            if (*(&D_802038F5 + idx * 0x1C) != 0) {
                GW(arg0, (((i * 0x28 + 0x6F) & 0x3FF) << 0xE) | 0xF60002DC, (((i * 0x28 + 0x58) & 0x3FF) << 0xE) | 0x2C0);
            }
            if (*(&D_802038F6 + idx * 0x1C) != 0) {
                GW(arg0, (((i * 0x28 + 0x6F) & 0x3FF) << 0xE) | 0xF60002FC, (((i * 0x28 + 0x58) & 0x3FF) << 0xE) | 0x2E0);
            }
        }
    }
    GW(arg0, 0xE7000000, 0);
    __repair_phase_i = D_80202624 * 2;
    a2 = ((u32) (__repair_phase_i + 0x40) >> 2) & 0x1E;
    a3 = ((__repair_phase_i - 0x80) * 8) & 0x3C0;
    GW(arg0, 0xF7000000,
       (((((__repair_phase_i << 8) & 0x7800) | (((__repair_phase_i + 0x20) * 8) & 0x3C0) | a2 | 1) << 0x10) | 1
        | ((((__repair_phase_i + 0x60) << 8) & 0x7800) | a3 | (((u32) (__repair_phase_i - 0x60) >> 2) & 0x1E))));
    q = (s32 *) *arg0;
    GW(arg0, (((D_80203AAD * 8) + 0x9F) & 0x3FF) * 4 | 0xF61BC000,
       ((D_80203AAD + 0x13) << 5) & 0xFE0 | 0x160000);
    GW(arg0, 0xE7000000, 0);
    func_801CA140(arg0, q, a2, a3);
    func_801CA468(arg0, 0xFF);
    if (D_80202624 & 0x10) {
        func_801CB74C(arg0, 0x38, 0x28, 8, &D_801D4FC0, &D_80203744);
    }
    func_801CB74C(arg0, 0x28, 0x38, 8, &D_801D4FC0, &D_80203760);
    for (i = 0; i < 5; i++) {
        s1 = (i + D_80203ACE) & 0xFFFF;
        if (s1 < 0x1A) {
            __repair_phase_i = (((i & 0xFFFF) + 7) * 8) & 0xFFFF;
            func_801CBF48(arg0, 0x88, __repair_phase_i, 8, &D_801D4FC0, 2, (s32) (i + D_80203ACE));
            func_801CB74C(arg0, 0xA0, __repair_phase_i, 8, &D_801D4FC0, *(&D_80202580 + s1 * 4));
        }
    }
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
    for (i = 0; i < 5; i++) {
        idx = (i + D_80203AB6) & 0xFFFF;
        if (idx < 0x10) {
            __repair_phase_s1 = ((i & 0xFFFF) * 0x28 + 0x48) & 0xFFFF;
            func_801CBF48(arg0, __repair_phase_s1, 0x90, 8, &D_801D4FC0, 5, (s32) (i + D_80203AB6));
            __repair_phase_i = idx * 0x1C;
            func_801CBF48(arg0, __repair_phase_s1, 0x98, 8, &D_801D4FC0, 5, (s32) *(&D_802038EE + __repair_phase_i));
            func_801CBF48(arg0, __repair_phase_s1, 0xA0, 8, &D_801D4FC0, 5, (s32) *(&D_802038E9 + __repair_phase_i));
            func_801CBF48(arg0, __repair_phase_s1, 0xA8, 8, &D_801D4FC0, 5, (s32) *(&D_802038E8 + __repair_phase_i));
            func_801CBF48(arg0, __repair_phase_s1, 0xB0, 8, &D_801D4FC0, 5, (s32) *(&D_802038F0 + __repair_phase_i));
            func_801CBF48(arg0, __repair_phase_s1, 0xB8, 8, &D_801D4FC0, 5, (s32) *(&D_802038F1 + __repair_phase_i));
        }
    }
}
