extern void *func_801CA140(void **);
extern void func_801CA468(void **, u8);
extern void func_801CAF18(void **, s32, s32, s32, void *, void *, s32, s32, s32, s32, s32);
extern void func_801CB9EC(void **, s32, s32, s32, void *, void *, s32, s32, s32, s32, s32, s32, s32, s32);
extern void func_801CC150();
extern u8 D_800DB1B8[];
extern u8 D_8011F2F0[];
extern u8 D_8011F2FC[];
extern u8 D_8011F330[];
extern u8 D_80126FF6;
extern u8 D_80183BA4[];
extern u8 D_80220ED8[];
extern u8 D_8022AD04[];
extern u8 D_8022AD05[];
extern u8 D_8022AFE9[];
extern u8 D_8022ACD3[];
extern u8 D_8022ACD4[];
extern u8 D_8022ACD6[];
extern u8 D_8022AD06[];
extern u8 D_8022ACAA[];
extern u8 D_8022ACCE[];
extern u8 D_8017D2B8[];
extern u8 D_801D51C8[];
extern u8 D_801D5470[];
extern u8 D_8016ED50[];
extern u8 D_8016EDD8[];
extern u8 D_8016EE00[];
extern u8 D_8016EF48[];
extern u8 D_8016F680[];
extern u8 D_80170678[];
extern u8 D_80170F20[];
extern u8 D_80171018[];
extern u8 D_80173050[];
extern u8 D_80173148[];

void func_801337B0(void **arg0, u16 arg1) {
    s32 var_s6;
    s32 sp5C;
    s32 sp54;
    s32 i;
    s32 temp_s1;
    s32 temp_s2;
    s32 temp_s0;
    u8 temp_fp;
    u8 t;
    void *p;

    if (D_80126FF6 == *(s16 *)(D_800DB1B8 + 0x2108) - 1) {
        temp_fp = D_8011F2F0[arg1 * 0x64];
        switch (temp_fp) {
        case 0:
            var_s6 = 0;
            sp5C = 0;
            break;
        case 1:
            var_s6 = 0x90;
            sp5C = 0;
            break;
        case 2:
            var_s6 = 0;
            sp5C = 0x6C;
            break;
        case 3:
            var_s6 = 0x90;
            sp5C = 0x6C;
            break;
        }
        if (D_8011F330[arg1 * 0x64] == 0) {
            for (i = 0; i < 4; i++) {
                D_80183BA4[i] = 1;
            }
            D_8011F330[arg1 * 0x64] = 1;
        }
        p = *arg0;
        *arg0 = (void *)((u8 *)p + 8);
        *(s32 *)p = 0x06000000;
        *((void **)p + 1) = D_80220ED8;
        func_801CA140(arg0);
        func_801CA468(arg0, D_8011F2FC[arg1 * 0x64]);
        t = D_80183BA4[temp_fp];
        if ((s32)t < *(s32 *)(D_8022AD04 + temp_fp * 0x8F0) && t < 4 && D_8022AFE9[temp_fp * 0x8F0] != 5) {
            D_80183BA4[temp_fp] = D_8022AD05[temp_fp * 0x8F0];
        }
        t = D_80183BA4[temp_fp];
        sp54 = (t != 4) ? t : 0;
        temp_s1 = (sp5C + 0x10) & 0xFFFF;
        func_801CAF18(arg0, (var_s6 + 0x28) & 0xFFFF, temp_s1, 0xA, D_801D51C8, D_801D5470, 0, 8, 0xC, 0x70, 0xC);
        func_801CAF18(arg0, (var_s6 + 0x40) & 0xFFFF, temp_s1, 0xB, D_801D51C8, D_801D5470, 0, 8, 0xC, 0x70, 0xC);
        if (D_80183BA4[temp_fp] == 4) {
            func_801CC150(arg0, var_s6 + 0x5C, sp5C + 0x11, 0, 0, 0x30, 0xA, 0x30, 0xA, 0x30, 0xA, 0, 0, 0x13F, 0xEF, D_80170F20, D_80171018);
            temp_s2 = var_s6 + 0x18;
        } else {
            temp_s0 = sp5C + 0x12;
            func_801CC150(arg0, var_s6 + 0x5C, temp_s0, 0, 0, 0x20, 8, 0x20, 8, 0x20, 8, 0, 0, 0x13F, 0xEF, D_8016ED50, D_8016EDD8);
            func_801CB9EC(arg0, (var_s6 + 0x77) & 0xFFFF, temp_s0 & 0xFFFF, 8, D_8016EE00, D_8016EF48, 0, 1, 0, 8, 8, 0x50, 8, 0);
            temp_s2 = var_s6 + 0x18;
        }
        temp_s1 = (sp5C + 0x10) & 0xFFFF;
        temp_s0 = sp54 * 5 + temp_fp * 0x8F0;
        func_801CB9EC(arg0, temp_s2 & 0xFFFF, temp_s1, 9, D_801D51C8, D_801D5470, 0, 2, 0, 8, 0xC, 0x70, 0xC, D_8022ACD3[temp_s0]);
        func_801CB9EC(arg0, (var_s6 + 0x30) & 0xFFFF, temp_s1, 9, D_801D51C8, D_801D5470, 0, 2, 0, 8, 0xC, 0x70, 0xC, D_8022ACD4[temp_s0]);
        func_801CB9EC(arg0, (var_s6 + 0x48) & 0xFFFF, temp_s1, 9, D_801D51C8, D_801D5470, 0, 2, 0, 8, 0xC, 0x70, 0xC, D_8022ACD6[temp_s0]);
        t = D_8011F2FC[arg1 * 0x64];
        if (t >= 0xAA) {
            t = 0x64;
        }
        func_801CA468(arg0, t);
        temp_s0 = temp_fp * 0x8F0;
        func_801CB9EC(arg0, (var_s6 + 0x7B) & 0xFFFF, (sp5C + 0x50) & 0xFFFF, 0x1B, D_8016F680, D_80170678, 0, 1, 0, 0x1A, 0x1E, 0x110, 0x1E, D_8022AD06[temp_s0]);
        if (D_80183BA4[temp_fp] != 4 && D_8017D2B8[D_8022ACAA[temp_s0] * 4] != 0 && D_8022ACCE[temp_s0] != 0) {
            func_801CC150(arg0, var_s6 + 0x16, sp5C + 0x6A, 0, 0, 0x30, 0xA, 0x30, 0xA, 0x30, 0xA, 0, 0, 0x13F, 0xEF, D_80173050, D_80173148);
            func_801CB9EC(arg0, (var_s6 + 0x34) & 0xFFFF, (sp5C + 0x6B) & 0xFFFF, 8, D_8016EE00, D_8016EF48, 0, 2, 1, 8, 8, 0x50, 8, D_8022ACCE[temp_s0]);
        }
    }
}
