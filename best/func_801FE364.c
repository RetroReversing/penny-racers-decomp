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

s32 func_801CA140();
s32 func_801CA468();
s32 func_801CB74C();
s32 func_801CBF48();
extern char D_801D4FC0[];
extern char D_801D75E0[];
extern char D_801D7DF4[];
extern char D_801D7E00[];
extern char D_801D7E06[];
extern char D_801D7E08[];
extern char D_801D7E09[];
extern char D_801D7E16[];
extern char D_802025E8[];
extern s32 D_80202628;
extern char D_8020377C[];
extern char D_8020378C[];
extern char D_80203794[];
extern char D_8020379C[];
extern char D_802037A4[];
extern char D_802037AC[];
extern char D_802037C4[];
extern char D_802037D8[];
extern char D_802037EC[];
extern char D_802037FC[];
extern char D_8020380C[];
extern char D_80203820[];
extern char D_80203838[];
extern char D_80203844[];
extern char D_8020384C[];
extern s32 D_80203AB8;
extern s16 D_80203ABA;
extern u16 D_80203ABE;
extern u8 D_80203ACA;

void func_801FE364(s32 arg0) {
    s16 temp_a0;
    s32 temp_s0_2;
    s32 temp_s1;
    s32 temp_s1_2;
    s32 var_a1;
    s32 var_s4;
    u32 temp_s0;

    D_80202628 += 1;
    func_801CA140();
    func_801CA468(arg0, 0xFF);
    if (D_80202628 & 0x80) {
        func_801CB74C(arg0, 0x3C, 0xA, 8, &D_801D4FC0, &D_802037AC);
    }
    func_801CB74C(arg0, 0x1E, 0x1E, 8, &D_801D4FC0, &D_802037C4);
    func_801CB74C(arg0, 0x1E, 0x28, 8, &D_801D4FC0, &D_802037D8);
    func_801CB74C(arg0, 0x1E, 0x32, 8, &D_801D4FC0, &D_802037EC);
    func_801CB74C(arg0, 0x1E, 0x3C, 8, &D_801D4FC0, &D_802037FC);
    func_801CB74C(arg0, 0x1E, 0x46, 8, &D_801D4FC0, &D_8020380C);
    func_801CB74C(arg0, 0x1E, 0x50, 8, &D_801D4FC0, &D_80203820);
    func_801CB74C(arg0, 0x1E, 0x64, 8, &D_801D4FC0, &D_80203838);
    func_801CBF48(arg0, 0x6E, 0x64, 8, &D_801D4FC0, 2, (s32) D_80203ABA);
    func_801CB74C(arg0, 0x8C, 0x64, 8, &D_801D4FC0, *(D_801D75E0 + (D_80203AB8 * 0xC)));
    func_801CB74C(arg0, 0x1E, 0x6E, 8, &D_801D4FC0, *(D_802025E8 + (D_80203ACA * 0xC)));
    func_801CB74C(arg0, 0x28, 0x8C, 8, &D_801D4FC0, &D_8020377C);
    func_801CB74C(arg0, 0x28, 0x96, 8, &D_801D4FC0, &D_80203844);
    func_801CB74C(arg0, 0x28, 0xA0, 8, &D_801D4FC0, &D_8020378C);
    func_801CB74C(arg0, 0x28, 0xAA, 8, &D_801D4FC0, &D_80203794);
    func_801CB74C(arg0, 0x28, 0xB4, 8, &D_801D4FC0, &D_8020384C);
    func_801CB74C(arg0, 0x28, 0xBE, 8, &D_801D4FC0, &D_8020379C);
    func_801CB74C(arg0, 0x28, 0xC8, 8, &D_801D4FC0, &D_802037A4);
    var_s4 = 0;
    do {
        temp_a0 = var_s4 + D_80203ABE;
        temp_s0 = temp_a0 & 0xFFFF;
        if (temp_s0 < 8U) {
            temp_s1 = (((var_s4 & 0xFFFF) + 2) * 0x30) & 0xFFFF;
            func_801CBF48(arg0, temp_s1, 0x8C, 8, &D_801D4FC0, 5, (s32) temp_a0);
            if (*(D_801D7DF4 + (temp_s0 * 0x2C)) == -1) {
                var_a1 = temp_s1;
            } else {
                var_a1 = (((var_s4 & 0xFFFF) + 2) * 0x30) & 0xFFFF;
            }
            func_801CB74C(arg0, var_a1, 0x96, 8);
            temp_s1_2 = (((var_s4 & 0xFFFF) + 2) * 0x30) & 0xFFFF;
            temp_s0_2 = (temp_a0 & 0xFFFF) * 0x2C;
            func_801CBF48(arg0, temp_s1_2, 0xA0, 8, &D_801D4FC0, 5, (s32) *(D_801D7E06 + temp_s0_2));
            func_801CBF48(arg0, temp_s1_2, 0xAA, 8, &D_801D4FC0, 5, (s32) *(D_801D7E08 + temp_s0_2));
            func_801CBF48(arg0, temp_s1_2, 0xB4, 8, &D_801D4FC0, 5, (s32) (s16) (s32) *(D_801D7E00 + temp_s0_2));
            func_801CBF48(arg0, temp_s1_2, 0xBE, 8, &D_801D4FC0, 5, (s32) *(D_801D7E09 + temp_s0_2));
            func_801CBF48(arg0, temp_s1_2, 0xC8, 8, &D_801D4FC0, 5, (s32) *(D_801D7E16 + temp_s0_2));
        }
        var_s4 += 1;
    } while ((u32) (var_s4 & 0xFFFF) < 4U);
}
