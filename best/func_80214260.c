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
u16 func_800DE41C(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32, s32, M2C_UNK *, M2C_UNK *, s32, s32, s32, s32, s32, s32, s32, s32, s32); /* extern */
M2C_UNK func_80143DCC(s8 *, void *);                /* extern */
M2C_UNK func_80149FA8(s32);                         /* extern */
M2C_UNK func_80203BAC();                            /* extern */
M2C_UNK func_80203BDC(s32);                         /* extern */
M2C_UNK func_80203D58();                            /* extern */
M2C_UNK func_80203DA8();                            /* extern */
M2C_UNK func_802054D0();                            /* extern */
M2C_UNK func_80205F64(s32);                         /* extern */
M2C_UNK func_80211E9C(s32);                         /* extern */
M2C_UNK func_80231C5C();                            /* extern */
extern M2C_UNK D_3E4880;
extern M2C_UNK D_3E9850;
extern M2C_UNK D_800DA26A;
extern M2C_UNK D_8011F2F0;
extern M2C_UNK D_8011F2F4;
extern M2C_UNK D_8011F2F8;
extern M2C_UNK D_8021B014;
extern M2C_UNK D_8021B064;
extern s8 D_8021B079;
extern u16 D_8021EEB8;
extern M2C_UNK D_8030BD90;
extern M2C_UNK func_802040C4;
extern M2C_UNK func_80214504;
extern M2C_UNK func_8021473C;

void func_80214260(void) {
    s32 temp_v0;
    s32 var_s0;
    s32 var_s0_2;
    s32 var_s0_3;
    s32 var_v1;
    s8 *temp_a0;
    s8 *var_v0;
    void *temp_a1;
    void *temp_v0_2;

    func_800294A0(&D_3E4880, &D_8030BD90, &D_3E9850 - &D_3E4880);
    var_s0 = 0;
    do {
        func_80203BDC(var_s0);
        var_s0 += 1;
    } while (var_s0 < 4);
    var_s0_2 = 0;
    func_80203BAC();
    func_80203D58();
    func_80203DA8();
    temp_a1 = &D_800DA26A + 0x160;
    var_v1 = 0;
    do {
        temp_a0 = (var_s0_2 * 0x178) + temp_a1;
        var_v0 = temp_a0;
loop_4:
        *var_v0 = 0;
        var_v1 += 1;
        var_v0 = temp_a0 + var_v1;
        if (var_v1 < 0xE) {
            goto loop_4;
        }
        var_s0_2 += 1;
        var_v1 = 0;
    } while (var_s0_2 < 3);
    D_8021B079 = 0;
    var_s0_3 = 0;
    func_80143DCC(temp_a0, temp_a1);
    D_8021EEB8 = func_800DE41C(0, 0, 3, 0, 0, 0xFF, 0, NULL, &func_802040C4, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    temp_v0 = D_8021EEB8 * 0x64;
    *(&D_8011F2F4 + temp_v0) = *(&D_8011F2F4 + temp_v0) | 0x20;
    *(&D_8011F2F4 + 2 + temp_v0) = *(&D_8011F2F4 + 2 + temp_v0) | 0x20;
    *(&D_8011F2F8 + temp_v0) = *(&D_8011F2F8 + temp_v0) | 0x20;
    temp_v0_2 = temp_v0 + &D_8011F2F0;
    M2C_FIELD(temp_v0_2, f32 *, 0x18) = 255.0f;
    M2C_FIELD(temp_v0_2, f32 *, 0x1C) = 255.0f;
    M2C_FIELD(temp_v0_2, f32 *, 0x20) = 255.0f;
    __repair_rows: {
        *(&D_8021B064 + var_s0_3) = 0;
        *(&D_8021B014 + var_s0_3) = 0;
        func_80203BDC(var_s0_3);
        func_80149FA8(var_s0_3);
        func_80211E9C(var_s0_3);
        func_80205F64(var_s0_3 & 0xFF);
        var_s0_3 += 1;
    }
if (var_s0_3 < 4) goto __repair_rows;
    func_80231C5C();
    func_802054D0();
    func_800DE41C(0, 0, 3, 0, 0x40, 0, 0, &func_80214504, &func_8021473C, 0, 0, 0, 0, 0, 0, 0, 0, 0);
}
