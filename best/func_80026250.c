/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O1, tried by autopilot */
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

M2C_UNK D_80190D40();                               /* extern */
M2C_UNK D_801F93E0();                               /* extern */
M2C_UNK D_801F9990();                               /* extern */
M2C_UNK D_801FB300();                               /* extern */
M2C_UNK D_80221230();                               /* extern */
M2C_UNK D_80233ED0();                               /* extern */
M2C_UNK D_802376A0();                               /* extern */
M2C_UNK func_80025C50();                            /* extern */
M2C_UNK func_80027B40(M2C_UNK *, s32, M2C_UNK *);   /* extern */
M2C_UNK func_80027BF0(M2C_UNK *);                   /* extern */
M2C_UNK func_80027DF0(M2C_UNK *, s32, M2C_UNK *);   /* extern */
M2C_UNK func_800289C0(M2C_UNK *);                   /* extern */
M2C_UNK func_80028A00();                            /* extern */
M2C_UNK func_80028AB0(M2C_UNK *);                   /* extern */
M2C_UNK func_80028BD0();                            /* extern */
u8 func_80028BE0();                                 /* extern */
M2C_UNK func_800294A0(M2C_UNK *, M2C_UNK (*)(), s32); /* extern */
M2C_UNK func_8003DE60(M2C_UNK *, M2C_UNK *, M2C_UNK (*)(), s32); /* extern */
M2C_UNK func_800DE2E0();                            /* extern */
M2C_UNK func_80127000();                            /* extern */
M2C_UNK func_8012AD20();                            /* extern */
M2C_UNK func_801CA140();                            /* extern */
M2C_UNK func_801D59F0();                            /* extern */
M2C_UNK func_801D7F60();                            /* extern */
M2C_UNK func_80203AD0();                            /* extern */
M2C_UNK func_8021F5F0();                            /* extern */
M2C_UNK func_8021F6A0(M2C_UNK);                     /* extern */
M2C_UNK func_8022E6B0();                            /* extern */
extern M2C_UNK D_101900;
extern M2C_UNK D_10A1F0;
extern M2C_UNK D_10EBE0;
extern M2C_UNK D_111C60;
extern M2C_UNK D_1B0E50;
extern M2C_UNK D_25EA0;
extern M2C_UNK D_29A40;
extern M2C_UNK D_2D580;
extern M2C_UNK D_42A740;
extern M2C_UNK D_42E8E0;
extern M2C_UNK D_52B560;
extern M2C_UNK D_52F020;
extern M2C_UNK D_5758D0;
extern M2C_UNK D_80049870;
extern M2C_UNK D_80049898;
extern M2C_UNK D_800498C0;
extern M2C_UNK D_800498E8;
extern M2C_UNK D_80049910;
extern M2C_UNK D_80049938;
extern M2C_UNK D_80049960;
extern M2C_UNK D_80049988;
extern M2C_UNK D_800499B0;
extern M2C_UNK D_800499D8;
extern M2C_UNK D_80049A00;
extern M2C_UNK D_80049A28;
extern M2C_UNK D_80049A50;
extern M2C_UNK D_80049A78;
extern M2C_UNK D_80049AA0;
extern M2C_UNK D_80049ACC;
extern M2C_UNK D_8006FB14;
extern u16 D_8006FE58;
extern u8 D_801E4420;
extern s8 D_801E87C0;
extern M2C_UNK D_86290;
extern M2C_UNK D_BC070;
extern M2C_UNK D_C78D0;
extern M2C_UNK D_C9C40;
extern M2C_UNK D_DB3B0;
extern M2C_UNK D_DB950;
extern M2C_UNK D_DD2B0;
extern M2C_UNK D_E5840;
extern M2C_UNK D_FFE70;
extern M2C_UNK func_80025DE0;
extern M2C_UNK func_800267FC;

void func_80026250(void) {
    s32 temp_s1;
    s32 temp_s1_10;
    s32 temp_s1_11;
    s32 temp_s1_12;
    s32 temp_s1_13;
    s32 temp_s1_14;
    s32 temp_s1_15;
    s32 temp_s1_16;
    s32 temp_s1_2;
    s32 temp_s1_3;
    s32 temp_s1_4;
    s32 temp_s1_5;
    s32 temp_s1_6;
    s32 temp_s1_7;
    s32 temp_s1_8;
    s32 temp_s1_9;
    s32 var_v0;
    s8 var_v1;

    temp_s1 = &D_29A40 - &D_25EA0;
    func_8003DE60(&D_80049870, &D_25EA0, func_800DE2E0, temp_s1);
    func_800294A0(&D_25EA0, func_800DE2E0, temp_s1);
    temp_s1_2 = &D_2D580 - &D_29A40;
    func_8003DE60(&D_80049898, &D_29A40, func_80127000, temp_s1_2);
    func_800294A0(&D_29A40, func_80127000, temp_s1_2);
    temp_s1_3 = &D_86290 - &D_2D580;
    func_8003DE60(&D_800498C0, &D_2D580, func_8012AD20, temp_s1_3);
    func_800294A0(&D_2D580, func_8012AD20, temp_s1_3);
    temp_s1_4 = &D_BC070 - &D_86290;
    func_8003DE60(&D_800498E8, &D_86290, D_80190D40, temp_s1_4);
    func_800294A0(&D_86290, D_80190D40, temp_s1_4);
    temp_s1_5 = &D_C78D0 - &D_BC070;
    func_8003DE60(&D_80049910, &D_BC070, func_801CA140, temp_s1_5);
    func_800294A0(&D_BC070, func_801CA140, temp_s1_5);
    temp_s1_6 = &D_C9C40 - &D_C78D0;
    func_8003DE60(&D_80049938, &D_C78D0, func_801D59F0, temp_s1_6);
    func_800294A0(&D_C78D0, func_801D59F0, temp_s1_6);
    temp_s1_7 = &D_DB3B0 - &D_C9C40;
    func_8003DE60(&D_80049960, &D_C9C40, func_801D7F60, temp_s1_7);
    func_800294A0(&D_C9C40, func_801D7F60, temp_s1_7);
    temp_s1_8 = &D_DB950 - &D_DB3B0;
    func_8003DE60(&D_80049988, &D_DB3B0, D_801F93E0, temp_s1_8);
    func_800294A0(&D_DB3B0, D_801F93E0, temp_s1_8);
    temp_s1_9 = &D_DD2B0 - &D_DB950;
    func_8003DE60(&D_800499B0, &D_DB950, D_801F9990, temp_s1_9);
    func_800294A0(&D_DB950, D_801F9990, temp_s1_9);
    temp_s1_10 = &D_E5840 - &D_DD2B0;
    func_8003DE60(&D_800499D8, &D_DD2B0, D_801FB300, temp_s1_10);
    func_800294A0(&D_DD2B0, D_801FB300, temp_s1_10);
    temp_s1_11 = &D_FFE70 - &D_E5840;
    func_8003DE60(&D_80049A00, &D_E5840, func_80203AD0, temp_s1_11);
    func_800294A0(&D_E5840, func_80203AD0, temp_s1_11);
    temp_s1_12 = &D_101900 - &D_FFE70;
    func_8003DE60(&D_80049A28, &D_FFE70, func_8021F5F0, temp_s1_12);
    func_800294A0(&D_FFE70, func_8021F5F0, temp_s1_12);
    temp_s1_13 = &D_10A1F0 - &D_101900;
    func_8003DE60(&D_80049A50, &D_101900, D_80221230, temp_s1_13);
    func_800294A0(&D_101900, D_80221230, temp_s1_13);
    temp_s1_14 = &D_10EBE0 - &D_10A1F0;
    func_8003DE60(&D_80049A78, &D_10A1F0, func_8022E6B0, temp_s1_14);
    func_800294A0(&D_10A1F0, func_8022E6B0, temp_s1_14);
    temp_s1_15 = &D_111C60 - &D_10EBE0;
    func_8003DE60(&D_80049AA0, &D_10EBE0, D_80233ED0, temp_s1_15);
    func_800294A0(&D_10EBE0, D_80233ED0, temp_s1_15);
    temp_s1_16 = &D_1B0E50 - &D_111C60;
    func_8003DE60(&D_80049ACC, &D_111C60, D_802376A0, temp_s1_16);
    func_800294A0(&D_111C60, D_802376A0, temp_s1_16);
    func_80028A00();
    M2C_FIELD(&D_8006FB14, s32 *, 0) = 0;
    func_8021F6A0(1);
    M2C_FIELD(&D_8006FB14, s16 *, 6) = 0;
    M2C_FIELD(&D_8006FB14, s16 *, 8) = 0;
    M2C_FIELD(&D_8006FB14, s16 *, 0xA) = 0;
    M2C_FIELD(&D_8006FB14, s16 *, 0xC) = 0;
    M2C_FIELD(&D_8006FB14, s16 *, 0xE) = 0;
    D_801E4420 = func_80028BE0();
    var_v1 = 0;
    var_v0 = (s32) D_801E4420 >> 0;
loop_1:
    if (!(var_v0 & 1)) {
        var_v1 += 1;
        var_v0 = (s32) D_801E4420 >> var_v1;
        if (var_v1 < 4) {
            goto loop_1;
        }
    } else {
        D_801E87C0 = var_v1;
    }
    func_800289C0(&func_800267FC);
    func_801D59F0();
    func_80027DF0(&D_52B560, &D_52F020 - &D_52B560, &D_52F020);
    func_80027B40(&D_42A740, &D_42E8E0 - &D_42A740, &D_42E8E0);
    func_80027BF0(&D_5758D0);
    func_80025C50();
    func_80028AB0(&func_80025DE0);
    func_80028BD0();
    D_8006FE58 = 0;
    if ((s16) D_8006FE58 == (s16) D_8006FE58) {
        do {

        } while ((s16) D_8006FE58 == (s16) D_8006FE58);
    }
loop_9:
    goto loop_9;
}
