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
s32 func_801CAF18();
s32 func_801CB9EC();
s32 func_801CC150();
extern char D_800DB1B8[];
extern char D_8011F2F0[];
extern char D_8011F2FC[];
extern char D_8011F334[];
extern u8 D_80126FF6;
extern char D_8016ED50[];
extern char D_8016EDD8[];
extern char D_8016EE00[];
extern char D_8016EF48[];
extern char D_80170F20[];
extern char D_80171018[];
extern char D_801D51C8[];
extern char D_801D5470[];
extern char D_80220ED8[];
extern char D_8022ACD3[];
extern char D_8022ACD4[];
extern char D_8022ACD6[];
extern char D_8022AFE9[];

void func_801341C0(void **arg0, s32 arg1) {
    s32 sp4C;
    f32 temp_fv1;
    s16 temp_s1_2;
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_s1;
    s32 temp_s2;
    s32 temp_s7_2;
    s32 var_v0;
    u8 temp_fp;
    u8 temp_s7;
    void *temp_v1;

    if (D_80126FF6 == (D_800DD2C0 - 1)) {
        temp_s0 = (arg1 & 0xFFFF) * 0x64;
        temp_fp = *(D_8011F2F0 + temp_s0);
        if (*(D_8022AFE9 + (temp_fp * 0x8F0)) != 5) {
            temp_s7 = *(D_8011F2FC + temp_s0);
            sp4C = temp_fp * 0x6C;
            if ((s32) temp_s7 < 3) {
                sp4C += 0xE;
            }
            temp_fv1 = *(D_8011F334 + ((arg1 & 0xFFFF) * 0x64));
            if (temp_fv1 >= 2.1474836e9f) {
                var_v0 = ((s32) (temp_fv1 - 2.1474836e9f) | 0x80000000) & 8;
            } else {
                var_v0 = (s32) temp_fv1 & 8;
            }
            if (var_v0 == 0) {
                temp_v1 = *arg0;
                *arg0 = temp_v1 + 8;
                M2C_FIELD(temp_v1, s32 *, 0) = 0x06000000;
                M2C_FIELD(temp_v1, s32 **, 4) = &D_80220ED8;
                func_801CA140(arg0);
                temp_s7_2 = -(temp_s7 != 4) & temp_s7;
                temp_s1 = (sp4C + 0x10) & 0xFFFF;
                func_801CAF18(arg0, 0x28, temp_s1, 0xA, &D_801D51C8, &D_801D5470, 0, 8, 0xC, 0x70, 0xC);
                func_801CAF18(arg0, 0x40, temp_s1, 0xB, &D_801D51C8, &D_801D5470, 0, 8, 0xC, 0x70, 0xC);
                if (temp_s7_2 == 4) {
                    func_801CC150(arg0, 0x5C, (s16) (sp4C + 0x11), 0, 0, 0x30, 0xA, 0x30, 0xA, 0x30, 0xA, 0, 0, 0x13F, 0xEF, &D_80170F20, &D_80171018);
                } else {
                    temp_s1_2 = sp4C + 0x12;
                    func_801CC150(arg0, 0x5C, temp_s1_2, 0, 0, 0x20, 8, 0x20, 8, 0x20, 8, 0, 0, 0x13F, 0xEF, &D_8016ED50, &D_8016EDD8);
                    func_801CB9EC(arg0, 0x77, temp_s1_2 & 0xFFFF, 8, &D_8016EE00, &D_8016EF48, 0, 1, 0, 8, 8, 0x50, 8, temp_s7_2 & 0xFFFF);
                }
                temp_s2 = (sp4C + 0x10) & 0xFFFF;
                temp_s0_2 = (temp_s7_2 * 5) + (temp_fp * 0x8F0);
                func_801CB9EC(arg0, 0x18, temp_s2, 9, &D_801D51C8, &D_801D5470, 0, 2, 0, 8, 0xC, 0x70, 0xC, (s32) *(D_8022ACD3 + temp_s0_2));
                func_801CB9EC(arg0, 0x30, temp_s2, 9, &D_801D51C8, &D_801D5470, 0, 2, 0, 8, 0xC, 0x70, 0xC, (s32) *(D_8022ACD4 + temp_s0_2));
                func_801CB9EC(arg0, 0x48, temp_s2, 9, &D_801D51C8, &D_801D5470, 0, 2, 0, 8, 0xC, 0x70, 0xC, (s32) *(D_8022ACD6 + temp_s0_2));
            }
        }
    }
}
