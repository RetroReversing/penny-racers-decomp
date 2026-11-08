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

M2C_UNK func_801E2E00(s32, void *, s32, M2C_UNK *); /* extern */
extern M2C_UNK D_801E9018;
extern M2C_UNK D_801E97A0;
extern M2C_UNK D_801E97CC;

void func_801E2E48(s32 arg0) {
    s32 temp_a0;
    s32 temp_a2;
    s32 temp_v1;
    s32 var_a1;
    s32 var_v0;

    var_a1 = 0;
    temp_v1 = arg0 & 0xFFFF;
    temp_a2 = temp_v1 * 0x30;
    var_v0 = temp_v1 * 0x30;
    __repair_rows: {
        *(var_v0 + &D_801E97A0) = *(var_v0 + &D_801E9018);
        var_a1 += 1;
        var_v0 = temp_a2 + var_a1;
    }
if (var_a1 < 0x30) goto __repair_rows;
    temp_a0 = arg0 & 0xFFFF;
    func_801E2E00(temp_a0, (temp_a0 * 0x30) + &D_801E97CC, temp_a2, &D_801E9018);
}
