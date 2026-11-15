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

extern unsigned char D_80190C9A;
s32 alSeqpSetVol();
s32 func_800DE2E0();
s32 func_800DE38C();
s32 func_8014A870();
s32 func_8014B854();
s32 func_801CF468();
s32 func_801D65BC();
s32 func_801E1EEC();
s32 func_80203DF8();
s32 func_80231C5C();
extern char D_8006FB38[];
extern char D_8011F2F0[];
extern char D_8011F350[];
extern s32 D_80168BB0;
extern u16 D_8018BC3C;
extern u8 D_80190C98;
extern s8 D_80190C9C;
extern s32 D_8021AFDC;
extern s32 D_8021AFE0;
extern u8 D_8021F028;
extern u8 D_8021F02A;

void func_80214B8C(s32 arg0) {
    s32 temp_a0;
    s32 var_s0;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_3;
    s32 var_v0_4;
    s32 var_v0_5;
    s32 var_v0_6;
    u16 temp_v1;
    void *temp_s2;

    temp_a0 = arg0 & 0xFFFF;
    temp_s2 = (temp_a0 * 0x64) + D_8011F2F0;
    temp_v1 = M2C_FIELD(temp_s2, u16 *, 0x3E);
    switch (temp_v1) {                              /* irregular */
    case 0:
        if (*(s32 *)*(D_8011F350 + (D_8018BC3C * 0x64)) == 0) {
            D_80190C9C = 0;
            M2C_FIELD(temp_s2, u16 *, 0x3E) = 0x10U;
            return;
        }
        return;
    case 16:
        var_s0 = func_8014A870(0x1E, 3, 0);
        D_80190C9A = (u8) D_8021F028;
        var_v0 = var_s0 & 2;
        if (var_s0 & 1) {
            var_v0 = var_s0 & 2;
            if (M2C_FIELD(&D_80190C9A, u8 *, -2) != 0) {
                M2C_FIELD(&D_80190C9A, u8 *, -2) -= 1;
                func_8014B854(0x3B);
                var_v0 = var_s0 & 2;
            }
        }
        if ((var_v0 != 0) && (D_80190C98 != 3)) {
            D_80190C98 += 1;
            func_8014B854(0x3B);
        }
        if ((u8) D_80190C98 < 2U) {
            if (var_s0 & 8) {
                var_v0_2 = var_s0 & 4;
                if ((&D_8021F028)[D_80190C98] != 0x15) {
                    (&D_8021F028)[D_80190C98] = (&D_8021F028)[D_80190C98] + 1;
                    func_8014B854(0x3B);
                    var_v0_2 = var_s0 & 4;
                    if (D_80190C98 == 0) {
                        alSeqpSetVol(D_8006FB38, (s16) (D_8021F028 * 0x43E));
                        goto block_21;
                    }
                }
            } else {
block_21:
                var_v0_2 = var_s0 & 4;
            }
            if ((var_v0_2 != 0) && ((&D_8021F028)[D_80190C98] != 0)) {
                (&D_8021F028)[D_80190C98] = (&D_8021F028)[D_80190C98] - 1;
                func_8014B854(0x3B);
                if (D_80190C98 == 0) {
                    alSeqpSetVol(D_8006FB38, (s16) (D_8021F028 * 0x43E));
                }
            }
        }
        if ((D_80190C9A == 0) && (D_8021F028 != 0)) {
            func_801D65BC(0);
        }
        var_v0_3 = var_s0 & 0x10;
        if (D_80190C98 == 2) {
            var_v0_4 = var_s0 & 8;
            if (var_s0 & 4) {
                var_v0_4 = var_s0 & 8;
                if (D_8021F02A != 0) {
                    D_8021F02A = 0;
                    func_8014B854(0x3B);
                    var_v0_4 = var_s0 & 8;
                }
            }
            if ((var_v0_4 != 0) && (D_8021F02A != 1)) {
                D_8021F02A = 1;
                func_8014B854(0x3B);
            }
            var_v0_3 = var_s0 & 0x10;
        }
        var_v0_5 = var_s0 & 0x20;
        if (var_v0_3 != 0) {
            var_v0_6 = var_s0 & 0x10;
            if ((u8) D_80190C98 < 3U) {
                var_s0 = 0;
                func_8014B854(0x3D);
                D_80190C98 = 3;
                var_v0_6 = 0 & 0x10;
            }
            if (var_v0_6 != 0) {
                var_v0_5 = var_s0 & 0x20;
                if (D_80190C98 == 3) {
                    func_8014B854(0x3D);
                    func_80203DF8(2, 6, 0, 0, 0);
                    func_801E1EEC(9, 0);
                    M2C_FIELD(temp_s2, u16 *, 0x3E) = 0x20U;
                    goto block_43;
                }
            } else {
block_43:
                var_v0_5 = var_s0 & 0x20;
            }
        }
        if (var_v0_5 != 0) {
            func_8014B854(0x3D);
            func_80203DF8(2, 6, 0, 0, 0);
            func_801E1EEC(9, 0);
            M2C_FIELD(temp_s2, u16 *, 0x3E) = 0x20U;
            return;
        }
        break;
    case 32:
        if (*(s32 *)*(D_8011F350 + (D_8018BC3C * 0x64)) == 0) {
            func_800DE38C(temp_a0);
            func_800DE2E0();
            func_80231C5C();
            func_801CF468(D_8018BC3C, 0, 0, 0);
            D_8021AFDC = 0x26;
            D_80168BB0 = D_8021AFE0;
        }
        break;
    }
}
