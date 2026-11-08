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
extern M2C_UNK D_8013DD2C;
extern s8 D_80190CAA;
extern M2C_UNK D_801D5A90;
extern M2C_UNK D_80219488;
extern M2C_UNK func_8018D130;
extern M2C_UNK func_8018D158;
extern M2C_UNK func_8021C010;
extern M2C_UNK func_8021EA70;

void func_8021F1EC(void) {
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
        *(var_v0 + (&func_8018D130 + 0x10)) = 0;
        var_v1 += 1;
        var_v0 = var_v1 * 2;
    } while (var_v1 < 0x96);
    var_a2 = 0;
    var_a0 = 0;
    var_v0_2 = 0 * 4;
    __repair_rows: {
        var_a1 = *(var_v0_2 + (&func_8018D158 + 0x248));
        var_v1_2 = 0;
        if ((s32) *(&func_8021C010 + 0xA18 + var_a0) > 0) {
            do {
                if (var_a1 & 1) {
                    *((var_a2 * 2) + (&func_8018D130 + 0x10)) = 1;
                }
                var_a1 = var_a1 >> 1;
                var_v1_2 += 1;
                var_a2 += 1;
            } while (var_v1_2 < (s32) *(&func_8021C010 + 0xA18 + var_a0));
        }
        if (var_a0 == 0) {
            var_a2 += 2;
        }
        var_a0 += 1;
        var_v0_2 = var_a0 * 4;
    }
if (var_a0 < 8) goto __repair_rows;
    D_80190CAA = 0;
    M2C_FIELD(&func_8021EA70, s8 *, 0x442) = 1;
    D_80046832 = 0;
    func_800DE41C(0, 0xFF, 3, 0, 0x7F, 0, 0, &D_801D5A90, NULL, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    func_8021A994();
    func_8021AC64(0x87, 0x52, 0, 0x80, 0x83);
    func_800DE41C(0, 0, 3, 0, 0xA1, 0xFF, 0, NULL, &D_8013DD2C, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    func_800DE41C(0, 0, 3, 0, 0x7A, 0, 0, &D_80219488, NULL, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    func_80203DF8(1, 0x3C, 0, 0, 0);
}
