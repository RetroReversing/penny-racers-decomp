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

M2C_UNK func_800294A0(M2C_UNK *, M2C_UNK *, s32);   /* extern */
s16 func_800DE41C(M2C_UNK, s32, M2C_UNK, M2C_UNK, s32, s32, s32, M2C_UNK *, M2C_UNK *, s32, s32, s32, s32, s32, s32, s32, s32, s32); /* extern */
M2C_UNK func_80143DCC();                            /* extern */
s32 func_80149F40(u16, s32, s8);                    /* extern */
s32 func_801FD530(s32, s32);                        /* extern */
M2C_UNK func_80203DF8(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_8020A160(s32);                         /* extern */
M2C_UNK func_8021F6A0(M2C_UNK);                     /* extern */
extern M2C_UNK D_400E00;
extern M2C_UNK D_404F10;
extern u16 D_800DA260;
extern M2C_UNK D_800DB1B8;
extern M2C_UNK D_80168C60;
extern s32 D_8021AFE4;
extern s32 D_8021AFEC;
extern u8 D_8021B00C;
extern u8 D_8021B010;
extern s8 D_8021B014;
extern s32 D_8021B01C;
extern s32 D_8021B020;
extern s8 D_8021B084;
extern M2C_UNK D_8021B128;
extern M2C_UNK D_8021B190;
extern M2C_UNK D_8021B192;
extern s8 D_8021B1B4;
extern M2C_UNK D_8021E16C;
extern M2C_UNK D_8021E1A2;
extern s16 D_8021E1A6;
extern M2C_UNK D_8021E20B;
extern M2C_UNK D_8021E20C;
extern M2C_UNK D_8021E22F;
extern s16 D_8021EFA4;
extern M2C_UNK D_8021F260;
extern M2C_UNK D_8030BD90;
extern M2C_UNK func_80208444;
extern M2C_UNK func_80208DEC;
extern M2C_UNK func_80209310;

void func_80207EC0(void) {
    M2C_UNK var_a0;
    s32 temp_a0;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 var_s0;
    s32 var_s0_2;
    s32 var_s0_3;
    s32 var_s0_4;
    s32 var_v0;
    s32 var_v0_2;
    u8 temp_v1_3;

    func_800294A0(&D_400E00, &D_8030BD90, &D_404F10 - &D_400E00);
    D_8021B01C = 0;
    D_8021B020 = 0;
    var_s0 = 0;
    func_80143DCC();
    M2C_FIELD(&D_8021B128, s32 *, 0) = 0;
    M2C_FIELD(&D_8021B128, s32 *, 4) = 0;
    var_v0 = 0 * 8;
    __repair_rows: {
        temp_v0 = var_v0 + var_s0;
        *(&D_8021E20C + temp_v0) = 0;
        *(&D_8021E20B + temp_v0) = 0;
        (&D_8021AFEC)[var_s0] = 0;
        var_s0 += 1;
        var_v0 = var_s0 * 8;
    }
if (var_s0 < 4) goto __repair_rows;
    D_8021B1B4 = 0;
    var_a0 = 4;
    if (M2C_FIELD(&D_8021E1A2, s16 *, 0) == 0) {
        var_a0 = 1;
    }
    var_s0_2 = 0;
    func_8021F6A0(var_a0);
    do {
        temp_a0 = var_s0_2 * 4;
        switch (M2C_FIELD(&D_8021E1A2, s16 *, 0)) { /* irregular */
        case 0:
            temp_v1 = var_s0_2 * 0x28;
            *(&D_800DB1B8 + 0x2110 + temp_v1) = *(&D_8021B190 + temp_a0);
            *(&D_800DB1B8 + 0x2112 + temp_v1) = *(&D_8021B192 + temp_a0);
            *(&D_800DB1B8 + 0x2114 + temp_v1) = 0x120;
            *(&D_800DB1B8 + 0x2116 + temp_v1) = 0xD8;
            var_v0_2 = var_s0_2 * 4;
            break;
        case 1:
            temp_v0_2 = var_s0_2 * 0x28;
            *(&D_800DB1B8 + 0x2112 + temp_v0_2) = 0x3E;
            *(&D_800DB1B8 + 0x2114 + temp_v0_2) = 0x90;
            *(&D_800DB1B8 + 0x2116 + temp_v0_2) = 0x6C;
            var_v0_2 = var_s0_2 * 4;
            break;
        default:
            temp_v1_2 = var_s0_2 * 0x28;
            *(&D_800DB1B8 + 0x2110 + temp_v1_2) = *(&D_8021B190 + temp_a0);
            *(&D_800DB1B8 + 0x2112 + temp_v1_2) = *(&D_8021B192 + temp_a0);
            *(&D_800DB1B8 + 0x2114 + temp_v1_2) = 0x90;
            *(&D_800DB1B8 + 0x2116 + temp_v1_2) = 0x6C;
            var_v0_2 = var_s0_2 * 4;
            break;
        }
        temp_v0_3 = (var_v0_2 + var_s0_2) * 8;
        *(&D_800DB1B8 + 0x2128 + temp_v0_3) = 0;
        *(&D_800DB1B8 + 0x212A + temp_v0_3) = 0;
        *(&D_800DB1B8 + 0x212C + temp_v0_3) = 0x140;
        *(&D_800DB1B8 + 0x212E + temp_v0_3) = 0xF0;
        var_s0_2 += 1;
    } while (var_s0_2 < 4);
    var_s0_3 = 0;
    if (M2C_FIELD(&D_8021E1A2, s16 *, 0) >= 0) {
        do {
            *((var_s0_3 * 2) + &D_8021E16C) = func_800DE41C(0, var_s0_3 & 0xFF, 3, 0, 0x78, 0, 0, NULL, &func_80209310, 0, 0, 0, 0, 0, 0, 0, 0, 0);
            func_8020A160(var_s0_3);
            *(&D_8021E20C + (var_s0_3 * 9)) = 0;
            var_s0_3 += 1;
        } while (M2C_FIELD(&D_8021E1A2, s16 *, 0) >= var_s0_3);
    }
    D_8021EFA4 = func_800DE41C(0, 0, 3, 0, 0x40, 0, 0, &func_80208444, &func_80208DEC, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (M2C_FIELD(&D_8021E1A2, s16 *, 0) == 1) {
        D_8021AFE4 = 0x28;
    } else {
        D_8021AFE4 = 0;
    }
    func_80203DF8(1, 6, 0, 0);
    if ((M2C_FIELD(&D_8021E1A2, s16 *, 0) == 0) && (D_8021B00C == 1)) {
        M2C_FIELD(&D_8021B128, s32 *, 0) = (s32) D_8021B00C;
        M2C_FIELD(&D_8021E1A2, s8 *, 0x69) = 1;
        D_8021AFEC = 0;
        D_8021B010 = 0;
        var_s0_4 = 0;
        do {
            temp_v0_4 = var_s0_4 * 0x22;
            temp_v1_3 = D_8021B010 + func_801FD530(var_s0_4, func_80149F40(D_800DA260, var_s0_4, M2C_FIELD((temp_v0_4 + &D_8021E22F + *(&D_8021E22F + temp_v0_4)), s8 *, 2)) & 0xFF);
            var_s0_4 += 1;
            D_8021B010 = temp_v1_3;
        } while (var_s0_4 < 8);
        if ((u8) *(&D_80168C60 + D_8021E1A6) < (u8) D_8021B010) {
            D_8021B014 = 1;
        } else {
            D_8021B014 = 0;
        }
    }
    M2C_FIELD(&D_8021F260, s8 *, 0) = 0;
    M2C_FIELD(&D_8021F260, s8 *, 1) = 0;
    M2C_FIELD(&D_8021F260, s8 *, 2) = 0;
    M2C_FIELD(&D_8021F260, s8 *, 4) = 0;
    D_8021B084 = 0;
}
