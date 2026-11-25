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

extern unsigned char D_80190CA8;
extern unsigned short D_80190CA6;
extern unsigned char D_80190CAE;
s32 func_80028100();
s32 func_800DE2E0();
s32 func_800DE38C();
s32 func_800DE41C();
s32 func_801CF468();
s32 func_801D65BC();
s32 func_80203DF8();
s32 func_8021AF20();
s32 func_80231C5C();
extern s8 D_80046832;
extern s16 D_8006F9E8;
extern char D_8011F2F0[];
extern char D_8011F350[];
extern s32 D_80168BB0;
extern u16 D_8018BC3C;
extern u8 D_80190CAA;
extern u8 D_80190CAC;
extern s8 D_80190CB2;
extern s32 D_8021AFDC;
extern s8 D_8021B01A;
extern char D_8021C840[];
extern char D_8021C841[];
extern char D_8021C994[];
extern s16 D_8021E1A6;
extern s32 func_8021AB34;

void func_80219488(s32 arg0) {
    u16 temp_v0;
    u16 temp_v0_2;
    u16 temp_v0_3;
    u16 temp_v0_4;
    u16 temp_v0_5;
    u16 temp_v1;
    u16 var_v0;
    u16 var_v0_2;
    u8 temp_v1_2;
    u8 temp_v1_3;
    void *temp_s0;

    do {
    temp_s0 = ((arg0 & 0xFFFF) * 0x64) + D_8011F2F0;
    D_80190CA8 = (u8) (D_80190CA8 + 1);
    temp_v1 = M2C_FIELD(temp_s0, u16 *, 0x3E);
    } while (0);
    switch (temp_v1) {                              /* switch 1 */
        if (*(s32 *)*(D_8011F350 + (D_8018BC3C * 0x64)) == 0) {
            func_801D65BC(1);
            func_800DE41C(0, 0U, 3, 0, 0x85, 0, 0, &func_8021AB34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
            M2C_FIELD(temp_s0, u8 *, 0) = 0U;
            D_80190CA6 = 5U;
            D_80190CB2 = 0;
            var_v0 = 0x20;
block_42:
            M2C_FIELD(temp_s0, u16 *, 0x3E) = var_v0;
        }
        return;
        temp_v0 = D_80190CA6 - 1;
        D_80190CA6 = temp_v0;
        if (temp_v0 & 0x8000) {
            D_80190CAE = 0;
            M2C_FIELD(temp_s0, u16 *, 0x3E) = 0x21U;
            return;
        }
        break;
        if (D_80190CAE == 0) {
            if ((u8) *(D_8021C994 + M2C_FIELD(temp_s0, u8 *, 0)) < 0xF0U) {
block_22:
                func_800DE41C(0, M2C_FIELD(temp_s0, u8 *, 0), 3, 0, 0x43700000, 0, 0, NULL, 0, 0, 0, 0);
                D_80190CAE = 1;
            } else {
                temp_v1_2 = *(D_8021C994 + M2C_FIELD(temp_s0, u8 *, 0));
                switch (temp_v1_2) {                /* switch 2; irregular */
                    D_80190CA6 = 0x10U;
                    var_v0_2 = 0x20;
block_31:
                    M2C_FIELD(temp_s0, u16 *, 0x3E) = var_v0_2;
                    break;
                    D_80190CA6 = 0x384U;
                    D_80190CB2 = 1;
                    var_v0_2 = 0x22;
                    goto block_31;
                }
            }
block_34:
            M2C_FIELD(temp_s0, u8 *, 0) += 1;
            return;
        }
        break;
        temp_v0_2 = D_80190CA6 - 1;
        D_80190CA6 = temp_v0_2;
        if (temp_v0_2 & 0x8000) {
            D_80190CA6 = 0U;
            M2C_FIELD(temp_s0, u8 *, 0) = 0U;
            M2C_FIELD(temp_s0, u16 *, 0x3E) = 0x28U;
            if (D_8021E1A6 != 3) {
                M2C_FIELD(temp_s0, u16 *, 0x3E) = 0x30U;
                return;
            }
        }
        break;
        temp_v0_3 = D_80190CA6 - 1;
        D_80190CA6 = temp_v0_3;
        if (temp_v0_3 & 0x8000) {
            D_80190CAE = 0;
            M2C_FIELD(temp_s0, u16 *, 0x3E) = 0x29U;
            return;
        }
        break;
        if (D_80190CAE == 0) {
            if ((u8) *(D_8021C840 + (M2C_FIELD(temp_s0, u8 *, 0) * 2)) < 0xF0U) {
                goto block_22;
            }
            temp_v1_3 = *(D_8021C840 + (M2C_FIELD(temp_s0, u8 *, 0) * 2));
            switch (temp_v1_3) {                    /* switch 3; irregular */
                var_v0_2 = 0x30;
                if (temp_v1_3 != 0xFF) {

                } else {
                    goto block_31;
                }
                break;
                D_80190CA6 = (u16) (*(D_8021C841 + (M2C_FIELD(temp_s0, u8 *, 0) * 2)) * 0x10);
                var_v0_2 = 0x28;
                goto block_31;
                D_80190CAA = *(D_8021C841 + (M2C_FIELD(temp_s0, u8 *, 0) * 2));
                break;
                D_80190CAC = *(D_8021C841 + (M2C_FIELD(temp_s0, u8 *, 0) * 2));
                break;
            }
            goto block_34;
        }
        break;
        func_80028100(0, 0x64);
        func_80203DF8(2, 0x5A, 0xFF, 0xFF, 0xFF);
        var_v0 = 0x31;
        goto block_42;
        if (*(s32 *)*(D_8011F350 + (D_8018BC3C * 0x64)) == 0) {
            D_80190CA6 = 4U;
            var_v0 = 0x32;
            goto block_42;
        }
        break;
        temp_v0_4 = D_80190CA6 - 1;
        D_80190CA6 = temp_v0_4;
        if (temp_v0_4 & 0x8000) {
            func_8021AF20(arg0 & 0xFFFF);
            D_80190CA6 = 0x1EU;
            M2C_FIELD(temp_s0, u16 *, 0x3E) = 0x33U;
        }
        /* fallthrough */
        temp_v0_5 = D_80190CA6 - 1;
        D_80190CA6 = temp_v0_5;
        if (temp_v0_5 & 0x8000) {
            func_800DE38C();
            func_800DE2E0();
            func_80231C5C();
            func_801CF468(D_8018BC3C, 0xFF, 0xFF, 0xFF);
            D_8021B01A = 0;
            D_8021AFDC = 0x30;
            D_80046832 = 0;
            D_8006F9E8 = 8;
            D_80168BB0 = 0;
            var_v0 = 0x38;
            goto block_42;
        }
        break;
    }
}
