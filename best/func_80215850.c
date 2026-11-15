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

extern unsigned short D_80190C98;
extern unsigned char D_80190CB0;
s32 func_800DE2E0();
s32 func_800DE38C();
u16 func_800DE41C();
s32 func_801CF468();
s32 func_801E1EEC();
s32 func_80203DF8();
s32 func_80231C5C();
extern s16 D_8006F9E8;
extern char D_8011F2F0[];
extern char D_8011F2FD[];
typedef struct { u32 f0; u8 pad[96]; } Slot_8011F350;
extern Slot_8011F350 D_8011F350[];
extern s32 D_80168BB0;
extern u16 D_8018BC3C;
extern u16 D_80190C9A;
extern s8 D_80190CA8;
extern s8 D_80190CB2;
extern u8 D_801C5EA2;
extern s32 D_8021AFDC;
extern s32 D_8021B060;
extern s16 D_8021E19C;
extern s32 func_80215DE0;
extern s32 func_80216128;
extern s32 func_802163B0;
extern s32 func_8021662C;
extern s32 func_80216958;
extern s32 func_80216D80;

void func_80215850(s32 arg0) {
    u16 temp_v1;
    u16 var_v0;
    void *temp_s0;

    temp_s0 = ((arg0 & 0xFFFF) * 0x64) + D_8011F2F0;
    temp_v1 = M2C_FIELD(temp_s0, u16 *, 0x3E);
    switch (temp_v1) {                              /* switch 1; irregular */
    case 0xF0:                                      /* switch 1 */
        func_80203DF8(2, 6, 0, 0);
        M2C_FIELD(temp_s0, u16 *, 0x3E) = 0xF8U;
    case 0xF8:                                      /* switch 1 */
        if (*(s32 *)D_8011F350[D_8018BC3C].f0 == 0) {
            func_800DE38C();
            func_800DE2E0();
            func_80231C5C();
            func_801CF468(D_8018BC3C, 0, 0, 0);
            D_8021AFDC = 0x2A;
            D_8021B060 = 2;
            D_80168BB0 = 2;
            D_8006F9E8 = 0x16;
            return;
        }
        return;
    case 0x0:                                       /* switch 1 */
        if (*(s32 *)D_8011F350[D_8018BC3C].f0 == 0) {
            D_8021E19C = 0;
            M2C_FIELD(temp_s0, u16 *, 0x3E) = 0x10U;
            switch (D_801C5EA2) {                   /* switch 2; irregular */
            case 3:                                 /* switch 2 */
                M2C_FIELD(temp_s0, u16 *, 0x3E) = 0x20U;
                return;
            case 2:                                 /* switch 2 */
                M2C_FIELD(temp_s0, u16 *, 0x3E) = 0x30U;
                D_80190CB2 = 0;
                func_801E1EEC(7, 0);
                return;
            }
        }
        break;
    case 0x10:                                      /* switch 1 */
        D_80190C98 = func_800DE41C(0, 0, 3, 0, 0x4A, 0, 0, &func_80215DE0, &func_80216128, 0, 0, 0, 0, 0, 0, 0, 0, 0);
        D_80190CB0 = 1U;
        var_v0 = 0x18;
block_30:
        M2C_FIELD(temp_s0, u16 *, 0x3E) = var_v0;
    case 0x38:                                      /* switch 1 */
    case 0x18:                                      /* switch 1 */
    case 0x28:                                      /* switch 1 */
        if (D_80190CB0 == 0) {
            *(D_8011F2FD + (D_80190C98 * 0x64)) = 2;
            M2C_FIELD(temp_s0, u16 *, 0x3E) = (u16) D_80190C9A;
            return;
        }
        break;
    case 0x20:                                      /* switch 1 */
        D_80190C98 = func_800DE41C(0, 0, 3, 0, 0x4A, 0, 0, &func_802163B0, &func_8021662C, 0, 0, 0, 0, 0, 0, 0, 0, 0);
        D_80190CB0 = 1U;
        var_v0 = 0x28;
        goto block_30;
    case 0x30:                                      /* switch 1 */
        D_80190CA8 = 0;
        D_80190C98 = func_800DE41C(0, 0, 3, 0, 0x4A, 0, 0, &func_80216958, &func_80216D80, 0, 0, 0, 0, 0, 0, 0, 0, 0);
        D_80190CB0 = 1U;
        var_v0 = 0x38;
        goto block_30;
    case 0xFA:                                      /* switch 1 */
        func_80203DF8(2, 0x14, 0, 0, 0);
        M2C_FIELD(temp_s0, u16 *, 0x3E) = 0xFBU;
        /* fallthrough */
    case 0xFB:                                      /* switch 1 */
        if (*(s32 *)D_8011F350[D_8018BC3C].f0 == 0) {
            func_800DE38C();
            func_800DE2E0();
            func_80231C5C();
            func_801CF468(D_8018BC3C, 0, 0, 0);
            D_8021AFDC = 0x2A;
            D_8021B060 = 2;
            D_80168BB0 = 2;
        }
        break;
    }
}
