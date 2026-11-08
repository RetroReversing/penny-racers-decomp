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
extern u8 D_80189B36;
extern M2C_UNK D_8018A276;
extern M2C_UNK D_8018BC36;
extern u8 D_8018BC37;
extern M2C_UNK D_8018BC38;
extern s16 D_8021E1A2;

void func_8014843C(void) {
    s32 var_v1;

    var_v1 = 0;
    __repair_rows: {
        *(&D_8018A276 + var_v1) = 0xFF;
        var_v1 += 1;
    }
if (var_v1 < 6) goto __repair_rows;
    if (D_80189B34 == 2) {
        M2C_FIELD(&D_8018A276, s8 *, 0) = 3;
        M2C_FIELD(&D_8018A276, u8 *, 1) = (u8) M2C_FIELD(&D_8018BC38, u8 *, 0);
        M2C_FIELD(&D_8018A276, u8 *, 2) = (u8) M2C_FIELD(&D_8018BC38, u8 *, 1);
        M2C_FIELD(&D_8018A276, u8 *, 3) = (u8) M2C_FIELD(&D_8018BC38, u8 *, 2);
    }
    if (D_80189B34 == 1) {
        switch (D_8021E1A2) {                       /* irregular */
        default:
            if (D_8021E1A2 != D_80189B34) {
                return;
            }
            M2C_FIELD(&D_8018A276, s8 *, 0) = 1;
            M2C_FIELD(&D_8018A276, u8 *, 1) = (u8) M2C_FIELD(&D_8018BC36, u8 *, 0);
            return;
        case 2:
            if (!(D_80189B36 & 0x40)) {
                M2C_FIELD(&D_8018A276, s8 *, 0) = 1;
                M2C_FIELD(&D_8018A276, u8 *, 1) = (u8) D_8018BC37;
                return;
            }
            M2C_FIELD(&D_8018A276, s8 *, 0) = 2;
            M2C_FIELD(&D_8018A276, u8 *, 1) = (u8) M2C_FIELD(&D_8018BC36, u8 *, 0);
            M2C_FIELD(&D_8018A276, u8 *, 2) = (u8) M2C_FIELD(&D_8018BC36, u8 *, 1);
            return;
        case 3:
            if (!(D_80189B36 & 0x40)) {
                M2C_FIELD(&D_8018A276, s8 *, 0) = 1;
                M2C_FIELD(&D_8018A276, u8 *, 1) = (u8) M2C_FIELD(&D_8018BC38, u8 *, 0);
                return;
            }
            M2C_FIELD(&D_8018A276, s8 *, 0) = 3;
            M2C_FIELD(&D_8018A276, u8 *, 1) = (u8) M2C_FIELD(&D_8018BC36, u8 *, 0);
            M2C_FIELD(&D_8018A276, u8 *, 2) = (u8) M2C_FIELD(&D_8018BC36, u8 *, 1);
            M2C_FIELD(&D_8018A276, u8 *, 3) = (u8) M2C_FIELD(&D_8018BC36, u8 *, 2);
            break;
        }
    }
}
