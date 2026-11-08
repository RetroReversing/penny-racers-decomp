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

extern u8 D_80189B34;
extern M2C_UNK D_8018BC35;
extern M2C_UNK D_8018BC36;
extern u8 D_8018BC37;
extern u8 D_8018BC38;
extern s16 D_8021E1A2;
extern M2C_UNK D_80237632;
extern u8 D_80237633;
extern u8 D_80237635;
extern u8 D_80237637;
extern u8 D_80237639;

void func_8014998C(void) {
    s32 var_v0;
    s32 var_v1;
    s32 var_v1_2;

    var_v1 = 0;
    do {
        *(&D_8018BC35 + var_v1) = 0xFF;
        var_v1 += 1;
    } while (var_v1 < 6);
    if (D_80189B34 == 2) {
        var_v1_2 = 0;
        var_v0 = 0 * 2;
        do {
            *(&D_8018BC35 + var_v1_2) = M2C_FIELD((var_v0 + &D_80237632), u8 *, 1);
            var_v1_2 += 1;
            var_v0 = var_v1_2 * 2;
        } while (var_v1_2 < 6);
    }
    if (D_80189B34 == 1) {
        switch (D_8021E1A2) {                       /* irregular */
        default:
            if (D_8021E1A2 != D_80189B34) {
                return;
            }
block_15:
            M2C_FIELD(&D_8018BC36, u8 *, 0) = (u8) D_80237635;
            M2C_FIELD(&D_8018BC36, u8 *, -1) = (u8) D_80237633;
            break;
        case 3:
            D_8018BC38 = D_80237639;
            /* fallthrough */
        case 2:
            D_8018BC37 = D_80237637;
            goto block_15;
        }
    }
}
