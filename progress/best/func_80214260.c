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
/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

s32 func_800294A0();
u16 func_800DE41C();
s32 func_80143DCC();
s32 func_80149FA8();
s32 func_80203BAC();
s32 func_80203BDC();
s32 func_80203D58();
s32 func_80203DA8();
s32 func_802054D0();
s32 func_80205F64();
s32 func_80211E9C();
s32 func_80231C5C();
extern char D_3E4880[];
extern char D_3E9850[];
extern char D_800DA26A[];
extern char D_8011F2F0[];
extern char D_8011F2F4[];
extern char D_8011F2F8[];
extern char D_8021B014[];
extern char D_8021B064[];
extern s8 D_8021B079;
extern u16 D_8021EEB8;
extern char D_8030BD90[];
extern s32 func_802040C4;
extern s32 func_80214504;
extern s32 func_8021473C;

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

    func_800294A0(D_3E4880, D_8030BD90, D_3E9850 - D_3E4880);
    var_s0 = 0;
    do {
        func_80203BDC(var_s0);
        var_s0 += 1;
    } while (var_s0 < 4);
    var_s0_2 = 0;
    func_80203BAC();
    func_80203D58();
    func_80203DA8();
    temp_a1 = D_800DA26A + 0x160;
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
    *(u16 *)(D_8011F2F4 + temp_v0) = *(u16 *)(D_8011F2F4 + temp_v0) | 0x20;
    *(u16 *)(D_8011F2F4 + 2 + temp_v0) = *(u16 *)(D_8011F2F4 + 2 + temp_v0) | 0x20;
    *(u16 *)(D_8011F2F8 + temp_v0) = *(u16 *)(D_8011F2F8 + temp_v0) | 0x20;
    temp_v0_2 = temp_v0 + D_8011F2F0;
    M2C_FIELD(temp_v0_2, f32 *, 0x18) = 255.0f;
    M2C_FIELD(temp_v0_2, f32 *, 0x1C) = 255.0f;
    M2C_FIELD(temp_v0_2, f32 *, 0x20) = 255.0f;
    do {
        *(u16 *)(D_8021B064 + var_s0_3) = 0;
        *(u16 *)(D_8021B014 + var_s0_3) = 0;
        func_80203BDC(var_s0_3);
        func_80149FA8(var_s0_3);
        func_80211E9C(var_s0_3);
        func_80205F64(var_s0_3 & 0xFF);
        var_s0_3 += 1;
    } while (var_s0_3 < 4);
    func_80231C5C();
    func_802054D0();
    func_800DE41C(0, 0, 3, 0, 0x40, 0, 0, &func_80214504, &func_8021473C, 0, 0, 0, 0, 0, 0, 0, 0, 0);
}
