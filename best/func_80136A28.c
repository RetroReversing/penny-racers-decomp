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

extern short D_800DD2C0;
s32 func_801CA140();
s32 func_801CA468();
s32 func_801CAF18();
s32 func_801CB9EC();
s32 func_801CC150();
extern char D_800DB1B8[];
extern char D_8011F2F0[];
extern char D_8011F2FC[];
extern char D_8011F32E[];
extern u8 D_80126FF6;
extern char D_80167FA0[];
extern char D_80167FA8[];
extern char D_8016ED50[];
extern char D_8016EDD8[];
extern char D_8016EE00[];
extern char D_8016EF48[];
extern char D_8016F680[];
extern char D_80170678[];
extern char D_80170F20[];
extern char D_80171018[];
extern char D_80183BA4[];
extern u8 D_80189CC8;
extern char D_8018A250[];
extern char D_8018A254[];
extern char D_8018A452[];
extern char D_801D51C8[];
extern char D_801D5470[];
extern u8 D_801E9738;
extern u8 D_801E9740;
extern char D_80220ED8[];
extern char D_8022ACD2[];
extern char D_8022ACD3[];
extern char D_8022ACD4[];
extern char D_8022ACD6[];
extern char D_8022AD06[];
extern char D_8022AFE9[];

void func_80136A28(void **arg0, u16 arg1) {
    u16 sp4E;
    s32 sp54;
    s32 sp5C;
    s32 sp64;
    s32 sp6C;
    s32 sp74;
    s32 sp7C;
    s16 var_a1;
    s16 var_a2;
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_s0_3;
    s32 temp_s0_4;
    s32 temp_s1;
    s32 temp_s5;
    s32 temp_v0;
    s32 var_s2;
    s32 var_v0;
    s32 var_v0_2;
    u16 var_fp;
    u8 temp_s7;
    u8 temp_v0_2;
    void *temp_v1;

    sp4E = arg1;
    temp_s7 = *(D_8011F2F0 + (sp4E * 0x64));
    if ((D_80189CC8 == 3) && (temp_v0 = temp_s7 * 2, ((D_800DD2C0 < 3) == 0))) {
        var_fp = *(D_80167FA0 + temp_v0);
        sp54 = (s32) *(D_80167FA8 + temp_v0);
    } else {
        temp_v0_2 = *(D_8011F2F0 + (sp4E * 0x64));
        sp54 = (s32) temp_v0_2;
        sp54 = ((((temp_v0_2 * 8) - sp54) * 4) - sp54) * 4;
        var_fp = 0;
        if (D_800DD2C0 == 1) {
            sp54 += 0x31;
        }
    }
    if ((D_80126FF6 == (D_800DD2C0 - 1)) && (*(D_8011F32E + (sp4E * 0x64)) != 0)) {
        sp64 = 5;
        if (*(D_8022AFE9 + (temp_s7 * 0x8F0)) == 5) {
            sp64 = (s32) *(D_80183BA4 + temp_s7);
        }
        temp_v1 = *arg0;
        *arg0 = temp_v1 + 8;
        M2C_FIELD(temp_v1, s32 *, 0) = 0x06000000;
        M2C_FIELD(temp_v1, s32 **, 4) = &D_80220ED8;
        func_801CA140(arg0);
        if (*(D_8011F2FC + (sp4E * 0x64)) != 0) {
            func_801CA468(arg0, *(D_8018A254 + (temp_s7 * 5)));
            if (D_80189CC8 != 1) {
                switch ((s32) D_80189CC8) {         /* irregular */
                case 0:
                    var_a1 = 0x28;
                    var_a2 = 0x3F;
block_26:
                    func_801CC150(arg0, (s32) var_a1, var_a2, 0);
                    break;
                case 3:
                    var_v0 = temp_s7 * 8;
                    if (D_800DD2C0 == 1) {
                        var_a1 = 0x28;
                        var_a2 = 0x3F;
                    } else {
block_25:
                        func_801CB9EC(arg0, (var_fp + 0x3E) & 0xFFFF, (sp54 + 0x10) & 0xFFFF, 0x1B, &D_8016F680, &D_80170678, 0, 1, 0, 0x1A, 0x1E, 0x110, 0x1E, *(D_8022AD06 + ((((var_v0 + temp_s7) * 0x10) - temp_s7) * 0x10)) & 0xFFFF);
                        var_a1 = var_fp + 0x5C;
                        var_a2 = sp54 + 0x1B;
                    }
                    goto block_26;
                case 2:
                    var_v0 = temp_s7 * 8;
                    goto block_25;
                }
            }
        }
        var_s2 = 0;
        if ((s32) *(D_8011F2FC + (sp4E * 0x64)) > 0) {
            sp6C = temp_s7 * 0x90;
            sp6C = temp_s7 * 0x8F;
            sp74 = temp_s7 * 9;
            sp7C = (var_fp + 0x64) << 0x10;
            do {
                sp5C = 1;
                if ((D_80189CC8 == 0) || ((var_v0_2 = temp_s7 * 4, (D_80189CC8 == 2)) && (var_v0_2 = temp_s7 * 4, (D_800DD2C0 == sp5C)))) {
                    var_v0_2 = temp_s7 * 4;
                    if (*(D_8022AFE9 + (temp_s7 * 0x8F0)) != 5) {
                        var_v0_2 = temp_s7 * 4;
                        if ((u8) *(D_8018A452 + temp_s7) >= 0x11U) {
                            sp5C = -(D_801E9740 != (var_s2 + 1)) & (-(((D_801E9738 == 1) & (var_s2 == 3)) == 0) & sp5C);
                            var_v0_2 = temp_s7 * 4;
                        }
                    }
                }
                func_801CA468(arg0, *(var_v0_2 + temp_s7 + D_8018A250 + var_s2));
                temp_s5 = -(var_s2 != 3) & (var_s2 + 1);
                temp_s0 = ((var_s2 * 0xE) + 0x38 + sp54) & 0xFFFF;
                func_801CAF18(arg0, (var_fp + 0x30) & 0xFFFF, temp_s0, 0xA, &D_801D51C8, &D_801D5470, 0, 8, 0xC, 0x70, 0xC);
                func_801CAF18(arg0, (var_fp + 0x48) & 0xFFFF, temp_s0, 0xB, &D_801D51C8, &D_801D5470, 0, 8, 0xC, 0x70, 0xC);
                if (((var_s2 + 1) >= sp64) || (*(D_8022ACD2 + ((temp_s5 * 5) + (sp6C * 0x10))) != 0)) {
                    temp_s0_2 = ((var_s2 * 0xE) + 0x38 + sp54) & 0xFFFF;
                    func_801CAF18(arg0, (var_fp + 0x20) & 0xFFFF, temp_s0_2, 0xC, &D_801D51C8, &D_801D5470, 0, 8, 0xC, 0x70, 0xC);
                    func_801CAF18(arg0, (var_fp + 0x28) & 0xFFFF, temp_s0_2, 0xC, &D_801D51C8, &D_801D5470, 0, 8, 0xC, 0x70, 0xC);
                    func_801CAF18(arg0, (var_fp + 0x38) & 0xFFFF, temp_s0_2, 0xC, &D_801D51C8, &D_801D5470, 0, 8, 0xC, 0x70, 0xC);
                    func_801CAF18(arg0, (var_fp + 0x40) & 0xFFFF, temp_s0_2, 0xC, &D_801D51C8, &D_801D5470, 0, 8, 0xC, 0x70, 0xC);
                    func_801CAF18(arg0, (var_fp + 0x50) & 0xFFFF, temp_s0_2, 0xC, &D_801D51C8, &D_801D5470, 0, 8, 0xC, 0x70, 0xC);
                    func_801CAF18(arg0, (var_fp + 0x58) & 0xFFFF, temp_s0_2, 0xC, &D_801D51C8, &D_801D5470, 0, 8, 0xC, 0x70, 0xC);
                } else {
                    temp_s0_3 = ((var_s2 * 0xE) + 0x38 + sp54) & 0xFFFF;
                    temp_s1 = (temp_s5 * 5) + (((sp74 * 0x10) - temp_s7) * 0x10);
                    func_801CB9EC(arg0, (var_fp + 0x20) & 0xFFFF, temp_s0_3, 9, &D_801D51C8, &D_801D5470, 0, 2, 0, 8, 0xC, 0x70, 0xC, (s32) *(D_8022ACD3 + temp_s1));
                    func_801CB9EC(arg0, (var_fp + 0x38) & 0xFFFF, temp_s0_3, 9, &D_801D51C8, &D_801D5470, 0, 2, 0, 8, 0xC, 0x70, 0xC, (s32) *(D_8022ACD4 + temp_s1));
                    func_801CB9EC(arg0, (var_fp + 0x50) & 0xFFFF, temp_s0_3, 9, &D_801D51C8, &D_801D5470, 0, 2, 0, 8, 0xC, 0x70, 0xC, (s32) *(D_8022ACD6 + temp_s1));
                }
                if (sp5C != 0) {
                    if (var_s2 == 3) {
                        func_801CC150(arg0, sp7C >> 0x10, (s16) (sp54 + 0x63), 0, 0, 0x30, 0xA, 0x30, 0xA, 0x30, 0xA, 0, 0, 0x13F, 0xEF, &D_80170F20, &D_80171018);
                        var_s2 += 1;
                    } else {
                        temp_s0_4 = var_s2 * 0xE;
                        func_801CC150(arg0, sp7C >> 0x10, (s16) (temp_s0_4 + (sp54 + 0x3A)), 0, 0, 0x20, 8, 0x20, 8, 0x20, 8, 0, 0, 0x13F, 0xEF, &D_8016ED50, &D_8016EDD8);
                        func_801CB9EC(arg0, (var_fp + 0x7F) & 0xFFFF, (temp_s0_4 + 0x3A + sp54) & 0xFFFF, 8, &D_8016EE00, &D_8016EF48, 0, 1, 0, 8, 8, 0x50, 8, temp_s5 & 0xFFFF);
                        goto block_43;
                    }
                } else {
block_43:
                    var_s2 += 1;
                }
            } while (var_s2 < (s32) *(D_8011F2FC + (sp4E * 0x64)));
        }
    }
}
