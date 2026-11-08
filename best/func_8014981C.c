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

extern M2C_UNK D_80189CC9;
extern u8 D_8018A276;
extern M2C_UNK D_8018A277;
extern M2C_UNK D_8018D3A0;

void func_8014981C(s32 arg0) {
    s32 temp_a2;
    s32 temp_t2;
    s32 temp_t4;
    s32 temp_v0;
    s32 var_a0;
    s32 var_a1;
    s32 var_a1_2;
    s32 var_t0;
    s32 var_t0_2;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v1;
    s32 var_v1_2;
    s8 var_a3;

    var_t0 = 0;
    var_v0 = 0 & 0xFF;
    __repair_rows: {
        *(&D_80189CC9 + var_v0) = 0;
        var_t0 += 1;
        var_v1 = var_t0 & 0xFF;
    var_v0 = var_v1;
    }
if ((u32) (var_t0 & 0xFF) < 3U) goto __repair_rows;
    var_t0_2 = 0;
    if (D_8018A276 != 0) {
        temp_t4 = (arg0 & 0xFF) << 5;
        var_a3 = 0;
        do {
            temp_t2 = *(&D_8018A277 + (var_t0_2 & 0xFF)) & 0xF;
            var_a1 = 0;
            var_a0 = 1;
loop_5:
            temp_v0 = (var_a1 & 0xFF) * 4;
            var_v1 = 0;
do {
            if (*(temp_v0 + ((temp_t2 << 5) + &D_8018D3A0)) & ~*(temp_v0 + (temp_t4 + &D_8018D3A0)) & var_a0) {
                var_a3 += 1;
            }
            var_v1 += 1;
            var_a0 *= 2;
            } while ((u32) (var_v1 & 0xFF) < 0x20U);
            var_a1 += 1;
            var_a0 = 1;
            if ((u32) (var_a1 & 0xFF) < 8U) {
                goto loop_5;
            }
            var_v1_2 = 0;
            temp_a2 = *(&D_8018D3A0 + (temp_t2 << 5));
            var_a1_2 = 0;
loop_11:
            if (temp_a2 & var_a0) {
                var_v1_2 += 1;
            }
            var_a1_2 += 1;
            var_a0 *= 2;
            if ((u32) (var_a1_2 & 0xFF) < 0x20U) {
                goto loop_11;
            }
            var_v0_2 = var_t0_2 & 0xFF;
            if ((var_v1_2 & 0xFF) == 1) {
                if (!(temp_a2 & *(&D_8018D3A0 + temp_t4)) & (var_a3 & 0xFF)) {
                    var_a3 -= 1;
                }
                var_v0_2 = var_t0_2 & 0xFF;
            }
            *(&D_80189CC9 + var_v0_2) = var_a3;
            var_t0_2 += 1;
            var_a3 = 0;
        } while ((u32) (var_t0_2 & 0xFF) < (u8) D_8018A276);
    }
}
