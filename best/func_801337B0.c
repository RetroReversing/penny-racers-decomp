typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

M2C_UNK func_801CA140(void **);
M2C_UNK func_801CA468(void **, u8);
M2C_UNK func_801CAF18(void **, s32, s32, M2C_UNK, M2C_UNK *, M2C_UNK *, s32, s32, s32, s32, s32);
M2C_UNK func_801CB9EC(void **, s32, s32, M2C_UNK, M2C_UNK *, M2C_UNK *, s32, s32, s32, s32, s32, s32, s32, s32);
M2C_UNK func_801CC150(void **, s16, s16, M2C_UNK, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, M2C_UNK *, M2C_UNK *);
extern M2C_UNK D_800DB1B8;
extern M2C_UNK D_8011F2F0;
extern M2C_UNK D_8011F2FC;
extern M2C_UNK D_8011F330;
extern u8 D_80126FF6;
extern M2C_UNK D_8016ED50;
extern M2C_UNK D_8016EDD8;
extern M2C_UNK D_8016EE00;
extern M2C_UNK D_8016EF48;
extern M2C_UNK D_8016F680;
extern M2C_UNK D_80170678;
extern M2C_UNK D_80170F20;
extern M2C_UNK D_80171018;
extern M2C_UNK D_80173050;
extern M2C_UNK D_80173148;
extern M2C_UNK D_8017D2B8;
extern M2C_UNK D_80183BA4;
extern M2C_UNK D_801D51C8;
extern M2C_UNK D_801D5470;
extern M2C_UNK D_80220ED8;
extern M2C_UNK D_8022ACAA;
extern M2C_UNK D_8022ACCE;
extern M2C_UNK D_8022ACD3;
extern M2C_UNK D_8022ACD4;
extern M2C_UNK D_8022ACD6;
extern M2C_UNK D_8022AD04;
extern M2C_UNK D_8022AD05;
extern M2C_UNK D_8022AD06;
extern M2C_UNK D_8022AFE9;

void func_801337B0(void **arg0, u16 arg1) {
    u16 sp4E;
    s32 sp54;
    s32 sp5C;
    s16 temp_a1;
    s16 temp_s1_2;
    s32 temp_a0;
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_s1;
    s32 temp_s2;
    s32 var_a1;
    s32 var_s6;
    s32 var_v1;
    u8 temp_fp;
    u8 temp_t0;
    u8 temp_v1_2;
    u8 var_a1_2;
    void *temp_v1;

    sp4E = arg1;
    if (D_80126FF6 == (M2C_FIELD(&D_800DB1B8, s16 *, 0x2108) - 1)) {
        temp_fp = *(&D_8011F2F0 + (sp4E * 0x64));
        switch (temp_fp) {
        case 0:
            var_s6 = 0;
            sp5C = 0;
            break;
        case 3:
            var_s6 = 0x90;
            sp5C = 0x6C;
            break;
        case 1:
            var_s6 = 0x90;
            sp5C = 0;
            break;
        case 2:
            var_s6 = 0;
            sp5C = 0x6C;
            break;
        }
        var_v1 = 0;
        if (*(&D_8011F330 + (sp4E * 0x64)) == 0) {
            do {
                *(&D_80183BA4 + var_v1) = 1;
                var_v1 += 1;
            } while (var_v1 < 4);
            *(&D_8011F330 + (sp4E * 0x64)) = 1;
        }
        temp_v1 = *arg0;
        *arg0 = (void *)((s8 *)temp_v1 + 8);
        M2C_FIELD(temp_v1, s32 *, 0) = 0x06000000;
        M2C_FIELD(temp_v1, M2C_UNK **, 4) = &D_80220ED8;
        func_801CA140(arg0);
        func_801CA468(arg0, *(&D_8011F2FC + (sp4E * 0x64)));
        temp_v1_2 = *(&D_80183BA4 + temp_fp);
        temp_a0 = temp_fp * 0x8F0;
        if (((s32) temp_v1_2 < *(&D_8022AD04 + temp_a0)) && (temp_v1_2 < 4U) && (*(&D_8022AFE9 + temp_a0) != 5)) {
            *(&D_80183BA4 + temp_fp) = *(&D_8022AD05 + temp_a0);
        }
        temp_t0 = *(&D_80183BA4 + temp_fp);
        sp54 = -(temp_t0 != 4) & temp_t0;
        temp_s1 = (sp5C + 0x10) & 0xFFFF;
        func_801CAF18(arg0, (var_s6 + 0x28) & 0xFFFF, temp_s1, 0xA, &D_801D51C8, &D_801D5470, 0, 8, 0xC, 0x70, 0xC);
        func_801CAF18(arg0, (var_s6 + 0x40) & 0xFFFF, temp_s1, 0xB, &D_801D51C8, &D_801D5470, 0, 8, 0xC, 0x70, 0xC);
        temp_a1 = var_s6 + 0x5C;
        if (*(&D_80183BA4 + temp_fp) == 4) {
            func_801CC150(arg0, temp_a1, (s16) (sp5C + 0x11), 0, 0, 0x30, 0xA, 0x30, 0xA, 0x30, 0xA, 0, 0, 0x13F, 0xEF, &D_80170F20, &D_80171018);
            var_a1 = var_s6 + 0x18;
        } else {
            temp_s1_2 = sp5C + 0x12;
            func_801CC150(arg0, temp_a1, temp_s1_2, 0, 0, 0x20, 8, 0x20, 8, 0x20, 8, 0, 0, 0x13F, 0xEF, &D_8016ED50, &D_8016EDD8);
            func_801CB9EC(arg0, (var_s6 + 0x77) & 0xFFFF, temp_s1_2 & 0xFFFF, 8, &D_8016EE00, &D_8016EF48, 0, 1, 0, 8, 8, 0x50, 8, 0);
            var_a1 = var_s6 + 0x18;
        }
        temp_s2 = (sp5C + 0x10) & 0xFFFF;
        temp_s0 = (sp54 * 5) + (temp_fp * 0x8F0);
        func_801CB9EC(arg0, var_a1 & 0xFFFF, temp_s2, 9, &D_801D51C8, &D_801D5470, 0, 2, 0, 8, 0xC, 0x70, 0xC, (s32) *(&D_8022ACD3 + temp_s0));
        func_801CB9EC(arg0, (var_s6 + 0x30) & 0xFFFF, temp_s2, 9, &D_801D51C8, &D_801D5470, 0, 2, 0, 8, 0xC, 0x70, 0xC, (s32) *(&D_8022ACD4 + temp_s0));
        func_801CB9EC(arg0, (var_s6 + 0x48) & 0xFFFF, temp_s2, 9, &D_801D51C8, &D_801D5470, 0, 2, 0, 8, 0xC, 0x70, 0xC, (s32) *(&D_8022ACD6 + temp_s0));
        var_a1_2 = *(&D_8011F2FC + (sp4E * 0x64));
        if (var_a1_2 >= 0xAAU) {
            var_a1_2 = 0x64;
        }
        func_801CA468(arg0, var_a1_2);
        temp_s0_2 = temp_fp * 0x8F0;
        func_801CB9EC(arg0, (var_s6 + 0x7B) & 0xFFFF, (sp5C + 0x50) & 0xFFFF, 0x1B, &D_8016F680, &D_80170678, 0, 1, 0, 0x1A, 0x1E, 0x110, 0x1E, (s8) *(&D_8022AD06 + temp_s0_2) & 0xFFFF);
        if ((*(&D_80183BA4 + temp_fp) != 4) && (*(&D_8017D2B8 + (*(&D_8022ACAA + temp_s0_2) * 4)) != 0) && (*(&D_8022ACCE + temp_s0_2) != 0)) {
            func_801CC150(arg0, (s16) (var_s6 + 0x16), (s16) (sp5C + 0x6A), 0, 0, 0x30, 0xA, 0x30, 0xA, 0x30, 0xA, 0, 0, 0x13F, 0xEF, &D_80173050, &D_80173148);
            func_801CB9EC(arg0, (var_s6 + 0x34) & 0xFFFF, (sp5C + 0x6B) & 0xFFFF, 8, &D_8016EE00, &D_8016EF48, 0, 2, 1, 8, 8, 0x50, 8, (s32) *(&D_8022ACCE + temp_s0_2));
        }
    }
}
