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

M2C_UNK func_800DE41C(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32, s32, M2C_UNK *, M2C_UNK *, s32, s32, s32, s32, s32, s32, s32, s32, s32); /* extern */
M2C_UNK func_80203DF8(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32); /* extern */
M2C_UNK func_8021A994();                            /* extern */
M2C_UNK func_8021AC64(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32); /* extern */
extern s8 D_80046832;
extern M2C_UNK D_8018D140;
extern M2C_UNK D_8018D3A0;
extern s8 D_80190CAA;
extern M2C_UNK D_801D5A90;
extern M2C_UNK D_8021CA28;
extern s8 D_8021EEB2;
extern M2C_UNK func_8013DD2C;
extern M2C_UNK func_80219488;

void func_80218FBC(void) {
    s32 var_a0;
    s32 var_a2;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v1;
    s32 var_v1_2;
    u32 var_a1;

    var_v1 = 0;
    var_v0 = 0 * 2;
    do {
        *(var_v0 + &D_8018D140) = 0;
        var_v1 += 1;
        var_v0 = var_v1 * 2;
    } while (var_v1 < 0x96);
    var_a2 = 0;
    var_a0 = 0;
    var_v0_2 = 0 * 4;
    do {
        var_a1 = *(var_v0_2 + &D_8018D3A0);
        var_v1_2 = 0;
        if ((s32) *(&D_8021CA28 + var_a0) > 0) {
            do {
                if (var_a1 & 1) {
                    *((var_a2 * 2) + &D_8018D140) = 1;
                }
                var_a1 = var_a1 >> 1;
                var_v1_2 += 1;
                var_a2 += 1;
            } while (var_v1_2 < (s32) *(&D_8021CA28 + var_a0));
        }
        if (var_a0 == 0) {
            var_a2 += 2;
        }
        var_a0 += 1;
        var_v0_2 = var_a0 * 4;
    } while (var_a0 < 8);
    D_80190CAA = 0;
    D_8021EEB2 = 1;
    D_80046832 = 0;
    func_800DE41C(0, 0xFF, 3, 0, 0x7F, 0, 0, &D_801D5A90, NULL, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    func_8021A994();
    do { func_8021AC64(0x87, 0x52, 0, 0x80, 0x83); } while (0);
    func_800DE41C(0, 0, 3, 0, 0xA1, 0xFF, 0, NULL, &func_8013DD2C, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    func_800DE41C(0, 0, 3, 0, 0x7A, 0, 0, &func_80219488, NULL, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    func_80203DF8(1, 0x3C, 0, 0, 0);
}
