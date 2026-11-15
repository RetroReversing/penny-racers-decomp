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

extern unsigned char D_80189B36;
extern unsigned short D_80189CC6;
extern unsigned char D_80189B34;
extern unsigned char D_80189CBE;
extern unsigned short D_80190C9E;
extern unsigned short D_80190CA6;
extern unsigned short D_80190CA0;
extern unsigned char D_80189CB6;
extern unsigned char D_80189CBA;
extern unsigned char D_80189CC2;
extern unsigned char D_80189CB8;
extern unsigned char D_80189CC0;
extern signed char D_80189CB7;
extern short D_80190CAC;
extern short D_80190CAE;
extern signed char D_80190CB0;
extern unsigned char D_8018994A;
extern unsigned char D_8018994C;
extern unsigned char D_80189CC1;
extern signed char D_80189CBF;
extern unsigned char D_8018994B;
extern unsigned char D_8018994D;
s32 func_80028100();
s32 alSeqpStop();
s32 func_800DE2E0();
s32 func_800DE38C();
u16 func_800DE41C();
s32 func_8012AD20();
u8 func_80148260();
s32 func_8014843C();
s32 func_80148B44();
s32 func_80148DBC();
s8 func_80149110();
s16 func_80149220();
s32 func_801493F0();
s32 func_80149778();
s32 func_8014981C();
u16 func_80149B38();
s32 func_8014A870();
u8 func_8014AAE8();
s32 func_8014AB2C();
s32 func_8014B410();
s32 func_8014B854();
s32 func_8014BAC0();
s32 func_8014BCD8();
s32 func_8014BFFC();
s32 func_801CF468();
s32 func_801D65BC();
s32 func_80203DF8();
s32 func_80211C7C();
s32 func_80231C5C();
extern s16 D_8006F9E8;
extern char D_8006FB38[];
extern char D_800DA260[];
extern char D_800DA26A[];
extern char D_8011F2F0[];
extern char D_8011F2FD[];
extern char D_8011F304[];
extern char D_8011F308[];
extern char D_8011F340[];
extern char D_8011F350[];
extern s32 D_80168BB0;
extern f64 D_80183660;
extern u16 D_80189C98;
extern s8 D_80189C9D;
extern u8 D_8018A276;
extern char D_8018A277[];
extern char D_8018A44A[];
extern u8 D_8018BC35;
extern u16 D_8018BC3C;
extern char D_8018FC50[];
extern char D_80190C98[];
extern u16 D_80190CA2;
extern u8 D_80190CA8;
extern u8 D_80190CAA;
extern s32 D_8021AFDC;
extern s32 D_8021AFE0;
extern s8 D_8021B01A;
extern s16 D_8021E1A6;
extern u8 D_8021E1A7;
extern char D_8021F120[];
extern char D_80237DC0[];
extern s32 func_8014674C;
extern s32 func_80146970;
extern s32 func_80146A5C;
extern s32 func_80146EC4;
extern s32 func_801470F8;
extern s32 func_8014730C;
extern s32 func_801478F0;
extern s32 func_8014ABD8;
extern s32 func_8014ACD0;
extern s32 func_8014ADA4;
extern s32 func_8014AFD8;
extern s32 func_8014B048;
extern s32 func_8020FED8;

void func_80144808(s32 arg0) {
    s32 *var_s1_3;
    s32 *var_s1_5;
    f32 var_fs0;
    f64 temp_fs1;
    s32 temp_s0;
    s32 var_s0;
    s32 var_s1;
    s32 var_s1_2;
    s32 var_s1_4;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_3;
    u16 temp_a1;
    u16 temp_s1;
    u16 temp_v1;
    u16 temp_v1_2;
    u8 temp_v0;
    void *temp_s2;

    temp_s2 = ((arg0 & 0xFFFF) * 0x64) + D_8011F2F0;
    func_80211C7C(0x14);
    temp_v1 = M2C_FIELD(temp_s2, u16 *, 0x3E);
    switch (temp_v1) {                              /* switch 1; irregular */
    case 0x0:                                       /* switch 1 */
        if (!(D_80189B36 & 0x80) && ((*(D_8018A44A + (D_8021E1A6 * 2)) & 0x1FF) == 0x1FF)) {
            M2C_FIELD(temp_s2, u16 *, 0x3E) = 0x210U;
        } else {
            alSeqpStop(D_8006FB38);
            D_80189CC6 = (u16) (D_80189CC6 | 0x100);
            M2C_FIELD(&D_80189CC6, s8 *, -0x2C) = 0;
            func_8014843C();
            func_80148DBC(D_8021E1A7);
            func_8014BCD8();
            if (((u32) (D_80189B34 - 1) < 2U) && (D_80189B36 & 0x80)) {
                D_80189CC6 = (u16) (D_80189CC6 | 0x200);
                M2C_FIELD(temp_s2, s16 *, 0x40) = 0x20;
            }
            func_8014981C(D_8018BC35);
            func_80203DF8(1, 0x32, 0, 0, 0);
            M2C_FIELD(temp_s2, u16 *, 0x3E) = 1U;
        }
        break;
    case 0x1:                                       /* switch 1 */
        if (*(s32 *)*(D_8011F350 + (D_8018BC3C * 0x64)) == 0) {
            func_801D65BC(6);
            M2C_FIELD(temp_s2, u16 *, 0x3E) = 0x100U;
            if ((D_80189B34 != 0) && (D_80189B36 & 0x80)) {
                M2C_FIELD(temp_s2, u16 *, 0x3E) = 0x20U;
            }
        }
        break;
    default:                                        /* switch 1 */
        D_80189CBE = (u8) (&D_8018BC35)[M2C_FIELD(&D_80189CBE, u8 *, -0x23)];
        temp_v1_2 = (D_80189CC6 & 0xF7FF) | ((func_80149778(D_80189CBE) & 1) << 0xB);
        D_80189CC6 = temp_v1_2;
        if (temp_v1_2 & 0x4000) {
            *(D_8011F2FD + (D_80190C9E * 0x64)) = 2;
            D_80189CC6 = (u16) (D_80189CC6 & 0xBFFF);
        }
        if (!(D_80189CC6 & 0x800)) {
            func_801493F0(M2C_FIELD(&D_80189CC6, u8 *, -8));
        }
        var_s1 = 0;
        func_8014981C(D_80189CBE);
        M2C_FIELD(&D_80189CBE, s8 *, -0x22) = func_80149110();
        D_80190CA6 = func_800DE41C(0, 0, 3, 0, 0x4A, 0, NULL, &func_8014674C, NULL, 0, 0, 0, 0, 0, 0, 0, 0, 0);
        var_fs0 = 0.9f;
        if ((s32) D_8018A276 > 0) {
            temp_fs1 = D_80183660;
            do {
                *(D_80190C98 + (var_s1 * 2)) = func_80149B38(var_s1, *(D_8018A277 + var_s1) & 0xF, 0x3F800000, var_fs0);
                var_s1 += 1;
                var_fs0 = (f32) ((f64) var_fs0 - temp_fs1);
            } while (var_s1 < (s32) D_8018A276);
        }
        if (D_80189CC6 & 0x2000) {
            temp_s1 = *(D_800DA260 + (M2C_FIELD(&D_80189CC6, u8 *, -8) * 0x178));
            temp_s0 = temp_s1 & 0xFF;
            D_80190CA0 = func_800DE41C(0, temp_s0, 1, 0, 0x54, 0xFF, D_8018FC50, &func_8014ABD8, &func_8020FED8, 0xC010A3CF, 0xC040A3CF, 0, 0, 0x43B40000, 0, 0x3D23D70A, 0x3D23D70A, 0x3D23D70A);
            M2C_FIELD(*(D_8011F340 + (*(D_8011F304 + (D_80190CA0 * 0x64)) * 0x64)), void **, 4) = (void *) ((temp_s1 * 0xC) + D_80237DC0);
            func_8012AD20(*(D_8011F304 + (D_80190CA0 * 0x64)), D_8021F120, temp_s0, *((M2C_FIELD(&D_80189CC6, u8 *, -8) * 0x178) + (D_800DA26A + 0x160) + temp_s1));
            D_80189CC6 = (u16) (D_80189CC6 & 0xDFFF);
        }
        *(D_8011F308 + (D_80190CA0 * 0x64)) = -2.259998f;
        func_800DE41C(0, 0, 3, 0, 0x5E, 0xFF, NULL, &func_8014AFD8, &func_8014B048, 0, 0, 0, 0, 0, 0, 0, 0, 0);
        if (D_80189CC6 & 0x1000) {
            D_80190CA2 = func_800DE41C(0, 0, 3, 0, 0x59, 0xFF, NULL, &func_8014ACD0, &func_8014ADA4, 0, 0, 0, 0, 0, 0, 0, 0, 0);
            D_80189CC6 = (u16) (D_80189CC6 & 0xEFFF);
        }
        D_80189B36 = (u8) (D_80189B36 | 0x10);
        M2C_FIELD(temp_s2, u16 *, 0x3E) = 0x22U;
        M2C_FIELD(temp_s2, s16 *, 0x40) = 0x20;
        /* fallthrough */
    case 0x22:                                      /* switch 1 */
        if (!(D_80189B36 & 0x10)) {
            *(D_8011F2FD + (D_80190CA6 * 0x64)) = 2;
            var_s1_2 = 0;
            if ((s32) D_8018A276 > 0) {
                var_v0 = 0 * 2;
                do {
                    *(D_8011F2FD + (*(D_80190C98 + var_v0) * 0x64)) = 2;
                    var_s1_2 += 1;
                    var_v0 = var_s1_2 * 2;
                } while (var_s1_2 < (s32) D_8018A276);
            }
            M2C_FIELD(temp_s2, u16 *, 0x3E) = 0x23U;
        }
        break;
    case 0x30:                                      /* switch 1 */
        D_80189CB6 = (u8) (*(D_8018A277 + M2C_FIELD(&D_80189CB6, u8 *, -0x1C)) & 0xF);
        D_80189CBA = func_8014AAE8(D_80189CB6);
        D_80189CC2 = func_8014AAE8(D_80189CBE);
        D_80189CC6 = (u16) ((D_80189CC6 & 0xFBFF) | ((func_8014AB2C(D_80189CB6, D_80189CBA) & 1) << 0xA));
        D_80189CB8 = func_80148260(D_80189CB6, 0);
        D_80189CC0 = func_80148260(D_80189CBE, 1);
        D_80189CB7 = (s8) (D_80189CB8 - 4);
        D_80190C9E = func_80149B38(3, *(D_8018A277 + M2C_FIELD(&D_80189CB6, u8 *, -0x1C)) & 0xF, 0x3FC00000, 2.3f);
        D_80189CC6 = (u16) (D_80189CC6 | 0x4000);
        /* fallthrough */
    case 0x31:                                      /* switch 1 */
        *(D_8011F308 + (D_80190CA0 * 0x64)) = -2.259998f;
        D_80189B36 = (u8) (D_80189B36 | 0x10);
        func_80148B44(0, D_80189CBA);
        D_80190CAC = 0x40;
        D_80190CAE = 0x21;
        D_80190CB0 = 0;
        var_s1_3 = &func_80146970;
        if (!(D_80189CC6 & 0x800)) {
            var_s1_3 = &func_80146A5C;
            M2C_FIELD(&D_8018994A, s16 *, -2) = func_80149220(D_8018994A, D_8018994C, M2C_FIELD(&D_80189CBA, u8 *, -2), 0);
        }
        D_80190CA6 = func_800DE41C(0, 0, 3, 0, 0x4A, 0, NULL, var_s1_3, NULL, 0, 0, 0, 0, 0, 0, 0, 0, 0);
        M2C_FIELD(temp_s2, u16 *, 0x3E) = 0x32U;
        M2C_FIELD(temp_s2, s16 *, 0x40) = 0x30;
        /* fallthrough */
    case 0x32:                                      /* switch 1 */
        if (!(D_80189B36 & 0x10)) {
            *(D_8011F2FD + (D_80190CA6 * 0x64)) = 2;
            M2C_FIELD(temp_s2, u16 *, 0x3E) = 0x33U;
        }
        break;
    case 0x40:                                      /* switch 1 */
        *(D_8011F308 + (D_80190CA0 * 0x64)) = -10.0f;
        var_s1_4 = 3;
        temp_a1 = (D_80189CC6 & 0xFBFF) | ((func_8014AB2C(D_80189CBE, D_80189CC2) & 1) << 0xA);
        D_80189CC6 = temp_a1;
        D_80189B36 = (u8) (D_80189B36 & 0xDF);
        if ((M2C_FIELD(&D_80189CBE, u16 *, -2) == 0x2FFF) || (M2C_FIELD(&D_80189B36, u8 *, -1) == 0) || (D_80189CC1 == 0) || (temp_a1 & 0x400)) {
            D_80189B36 = (u8) (D_80189B36 | 0x20);
            var_s1_4 = 4;
        }
        temp_v0 = func_80148260(D_80189CBE, 1);
        D_80189CC0 = temp_v0;
        D_80189CBF = (s8) (temp_v0 - var_s1_4);
        /* fallthrough */
    case 0x41:                                      /* switch 1 */
        D_80189B36 = (u8) (D_80189B36 | 0x10);
        func_80148B44(1, D_80189CC2);
        D_80190CAC = 0x44;
        D_80190CAE = 0x31;
        D_80190CB0 = 1;
        var_s1_5 = &func_80146970;
        if (!(D_80189CC6 & 0x800)) {
            var_s1_5 = &func_80146A5C;
            M2C_FIELD(&D_8018994B, s16 *, -3) = func_80149220(D_8018994B, D_8018994D, M2C_FIELD(&D_80189CC2, u8 *, -2), 1);
        }
        D_80190CA6 = func_800DE41C(0, 0, 3, 0, 0x4A, 0, NULL, var_s1_5, NULL, 0, 0, 0, 0, 0, 0, 0, 0, 0);
        M2C_FIELD(temp_s2, u16 *, 0x3E) = 0x42U;
        M2C_FIELD(temp_s2, s16 *, 0x40) = 0x40;
        /* fallthrough */
    case 0x42:                                      /* switch 1 */
        if (!(D_80189B36 & 0x10)) {
            *(D_8011F2FD + (D_80190CA6 * 0x64)) = 2;
            M2C_FIELD(temp_s2, u16 *, 0x3E) = 0x43U;
        }
        break;
    case 0x43:                                      /* switch 1 */
        if (*(D_8011F2FD + (D_80190CA6 * 0x64)) == 0) {
            D_80190CA8 = 1;
            if (!(D_80189CC6 & 0x800)) {
                D_80190CA8 = 0x3C;
            }
            M2C_FIELD(temp_s2, s16 *, 0x40) = 0x50;
block_102:
            M2C_FIELD(temp_s2, u16 *, 0x3E) = (u16) D_80189C98;
        }
        break;
    case 0x44:                                      /* switch 1 */
        if (func_8014BAC0() & 0x10) {
            D_80190CA8 = 1;
        }
        D_80190CA8 -= 1;
        if (D_80190CA8 == 0) {
            M2C_FIELD(temp_s2, u16 *, 0x3E) = 0x46U;
        }
        break;
    case 0x46:                                      /* switch 1 */
        var_s0 = 0x10;
        if (D_80189CC6 & 0x800) {
            var_s0 = func_8014A870(0x14, 3, M2C_FIELD(&D_80189CC6, u8 *, -8));
        }
        var_v0_2 = var_s0 & 0x20;
        if (var_s0 & 0x10) {
            func_8014B854(0x3D);
            M2C_FIELD(temp_s2, u16 *, 0x3E) = 0x50U;
            var_v0_2 = 0 & 0x20;
        }
        if (var_v0_2 != 0) {
            func_8014B854(0x3A);
            M2C_FIELD(temp_s2, u16 *, 0x3E) = 0x41U;
        }
        break;
    case 0x50:                                      /* switch 1 */
        D_80189B36 = (u8) (D_80189B36 | 0x10);
        D_80189CC6 = (u16) (D_80189CC6 & 0x7FFF);
        D_80190CA6 = func_800DE41C(0, 0, 3, 0, 0x5E, 0, NULL, &func_80146EC4, &func_801470F8, 0, 0, 0, 0, 0, 0, 0, 0, 0);
        M2C_FIELD(temp_s2, u16 *, 0x3E) = 0x51U;
        /* fallthrough */
    case 0x51:                                      /* switch 1 */
        if (!(D_80189B36 & 0x10)) {
            *(D_8011F2FD + (D_80190CA6 * 0x64)) = 2;
            M2C_FIELD(temp_s2, u16 *, 0x3E) = 0x52U;
        }
        break;
    case 0x52:                                      /* switch 1 */
    case 0x23:                                      /* switch 1 */
    case 0x33:                                      /* switch 1 */
        if (*(D_8011F2FD + (D_80190CA6 * 0x64)) == 0) {
            goto block_102;
        }
        break;
    case 0x100:                                     /* switch 1 */
        if (D_80189CC6 & 0x4000) {
            *(D_8011F2FD + (D_80190C9E * 0x64)) = 2;
        }
        D_80189CC6 = (u16) (D_80189CC6 & 0xFDFF);
        M2C_FIELD(temp_s2, s16 *, 0x40) = 0x100;
        M2C_FIELD(&D_80189CC6, s8 *, -0x29) = 0;
        D_80189B36 = (u8) (D_80189B36 | 0x10);
        func_800DE41C(0, 0, 3, 0, 0x5E, 0, NULL, &func_8014730C, &func_801478F0, 0, 0xC1A00000, 0, 0, 0, 0, 0, 0, 0);
        M2C_FIELD(temp_s2, u16 *, 0x3E) = 0x105U;
        break;
    case 0x105:                                     /* switch 1 */
        if (!(D_80189B36 & 0x10)) {
            func_8014BFFC();
            func_8014B410();
            M2C_FIELD(temp_s2, u16 *, 0x3E) = 0x210U;
            if ((*(D_8018A44A + (D_8021E1A6 * 2)) & 0x1FF) != 0x1FF) {
                M2C_FIELD(temp_s2, u16 *, 0x3E) = 0x200U;
            }
        }
        break;
    case 0x200:                                     /* switch 1 */
        func_80028100(0, 0x1E);
        func_80203DF8(2, 0x28, 0, 0, 0);
        M2C_FIELD(temp_s2, u16 *, 0x3E) = 0x201U;
        break;
    case 0x201:                                     /* switch 1 */
        if (*(s32 *)*(D_8011F350 + (D_8018BC3C * 0x64)) == 0) {
            alSeqpStop(D_8006FB38);
            func_800DE38C();
            func_800DE2E0();
            func_80231C5C();
            func_801CF468(D_8018BC3C, 0, 0, 0);
            D_8006F9E8 = 8;
            D_8021B01A = 0;
            D_8021AFDC = 0x18;
            D_8021AFE0 = 0xC;
            D_80168BB0 = 0xC;
            var_v0_3 = 0x1C;
            if (D_80189C9D != 0) {
block_116:
                D_80168BB0 = var_v0_3;
            }
        }
        break;
    case 0x210:                                     /* switch 1 */
        func_80028100(0, 0x32);
        func_80203DF8(2, 0x3C, 0, 0, 0);
        M2C_FIELD(temp_s2, u16 *, 0x3E) = 0x211U;
        break;
    case 0x211:                                     /* switch 1 */
        if (*(s32 *)*(D_8011F350 + (D_8018BC3C * 0x64)) == 0) {
            alSeqpStop(D_8006FB38);
            func_800DE38C();
            func_800DE2E0();
            func_80231C5C();
            func_801CF468(D_8018BC3C, 0, 0, 0);
            D_8021B01A = 0;
            D_8021AFDC = 0x18;
            D_8006F9E8 = 8;
            var_v0_3 = 0x2E;
            goto block_116;
        }
        break;
    }
    switch (D_80190CAA) {                           /* switch 2; irregular */
    case 0:                                         /* switch 2 */
        M2C_FIELD(temp_s2, f32 *, 0x1C) = 88.0f;
        M2C_FIELD(temp_s2, f32 *, 0x18) = -2.0f;
        D_80190CAA = 1;
        /* fallthrough */
    case 1:                                         /* switch 2 */
        M2C_FIELD(temp_s2, f32 *, 0x1C) += M2C_FIELD(temp_s2, f32 *, 0x18);
        M2C_FIELD(temp_s2, f32 *, 0x18) += 0.3f;
        if (M2C_FIELD(temp_s2, f32 *, 0x1C) > 88.0f) {
            D_80190CAA = 0;
        }
        return;
    }
}
