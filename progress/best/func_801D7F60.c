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

M2C_UNK func_8003DAA0(M2C_UNK *, M2C_UNK *, M2C_UNK); /* extern */
extern M2C_UNK D_8006FE40;
extern u8 D_801E4420;
extern M2C_UNK D_801E96E0;
extern M2C_UNK D_801E9958;
extern M2C_UNK D_801E995A;
extern M2C_UNK D_801E995B;
extern M2C_UNK D_801E995C;
extern M2C_UNK D_801E995E;
extern M2C_UNK D_801E9960;
extern M2C_UNK D_801E9962;
extern M2C_UNK D_801E9964;
extern M2C_UNK D_801E9966;
extern M2C_UNK D_801E9968;
extern M2C_UNK D_801E996E;
extern M2C_UNK D_801E9970;
extern M2C_UNK D_801E9972;
extern M2C_UNK D_801E9974;
extern M2C_UNK D_801E9976;
extern M2C_UNK D_801E9978;
extern M2C_UNK D_801E997A;
extern M2C_UNK D_801E997C;
extern M2C_UNK D_801E9980;
extern M2C_UNK D_801E9984;
extern M2C_UNK D_801E9988;
extern M2C_UNK D_801E998C;
extern M2C_UNK D_801E9990;
extern M2C_UNK D_801E9994;
extern M2C_UNK D_801E9998;
extern M2C_UNK D_801E999C;
extern M2C_UNK D_801E99A0;
extern M2C_UNK D_801E99A4;
extern M2C_UNK D_801E99A8;
extern M2C_UNK D_801E99AC;
extern M2C_UNK D_801E99B0;
extern M2C_UNK D_801E99B4;
extern M2C_UNK D_801E99B8;
extern M2C_UNK D_801E99BC;
extern M2C_UNK D_801E99C0;
extern M2C_UNK D_801E99C4;

void func_801D7F60(void) {
    s32 temp_a0;
    s32 temp_a0_10;
    s32 temp_a0_11;
    s32 temp_a0_12;
    s32 temp_a0_13;
    s32 temp_a0_14;
    s32 temp_a0_15;
    s32 temp_a0_16;
    s32 temp_a0_17;
    s32 temp_a0_18;
    s32 temp_a0_19;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_a0_4;
    s32 temp_a0_5;
    s32 temp_a0_6;
    s32 temp_a0_7;
    s32 temp_a0_8;
    s32 temp_a0_9;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 temp_v1_3;
    s32 var_a1;
    s32 var_t0;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v1;
    s32 var_v1_2;
    void *temp_a2;

    func_8003DAA0(&D_8006FE40, &D_801E96E0, 0x18);
    var_a1 = 0;
    var_t0 = 0;
    __repair_rows: {
        temp_v1 = var_t0 & 0xFFFF;
        if (((s32) D_801E4420 >> temp_v1) & 1) {
            temp_a2 = (temp_v1 * 6) + &D_801E96E0;
            temp_a0 = (var_a1 & 0xFFFF) * 0x70;
            *(&D_801E9958 + temp_a0) = ~*(&D_801E995C + temp_a0) & M2C_FIELD(temp_a2, u16 *, 0);
            if (M2C_FIELD(temp_a2, u8 *, 4) != 0) {
                *(&D_801E9958 + temp_a0) = 0;
            }
            temp_v1_2 = (var_a1 & 0xFFFF) * 0x70;
            var_v0 = var_a1 & 0xFFFF;
            if (*(&D_801E995C + temp_v1_2) & 0x40) {
                *(&D_801E995A + temp_v1_2) = 0;
                var_v1 = var_v0 * 8;
            } else {
                *(&D_801E995A + (var_v0 * 0x70)) = M2C_FIELD(temp_a2, u8 *, 2);
                var_v0 = var_a1 & 0xFFFF;
                var_v1 = var_v0 * 8;
            }
            temp_v1_3 = (var_v1 - var_v0) * 0x10;
            var_v0_2 = var_a1 & 0xFFFF;
            if (*(&D_801E995C + temp_v1_3) & 0x80) {
                *(&D_801E995B + temp_v1_3) = 0;
                var_v1_2 = var_v0_2 * 8;
            } else {
                *(&D_801E995B + (var_v0_2 * 0x70)) = M2C_FIELD(temp_a2, u8 *, 3);
                var_v0_2 = var_a1 & 0xFFFF;
                var_v1_2 = var_v0_2 * 8;
            }
            temp_a0_2 = (var_v1_2 - var_v0_2) * 0x10;
            if (*(&D_801E995A + temp_a0_2) >= 0x3D) {
                M2C_FIELD((temp_a0_2 + &D_801E9958), s32 *, 0x28) = (s32) (*(&D_801E9980 + temp_a0_2) + 1);
            } else {
                *(&D_801E9980 + ((var_a1 & 0xFFFF) * 0x70)) = 0;
            }
            temp_a0_3 = (var_a1 & 0xFFFF) * 0x70;
            if (*(&D_801E995A + temp_a0_3) < -0x3C) {
                M2C_FIELD((temp_a0_3 + &D_801E9958), s32 *, 0x2C) = (s32) (*(&D_801E9984 + temp_a0_3) + 1);
            } else {
                *(&D_801E9984 + ((var_a1 & 0xFFFF) * 0x70)) = 0;
            }
            temp_a0_4 = (var_a1 & 0xFFFF) * 0x70;
            if (*(&D_801E995B + temp_a0_4) >= 0x3D) {
                M2C_FIELD((temp_a0_4 + &D_801E9958), s32 *, 0x30) = (s32) (*(&D_801E9988 + temp_a0_4) + 1);
            } else {
                *(&D_801E9988 + ((var_a1 & 0xFFFF) * 0x70)) = 0;
            }
            temp_a0_5 = (var_a1 & 0xFFFF) * 0x70;
            if (*(&D_801E995B + temp_a0_5) < -0x3C) {
                M2C_FIELD((temp_a0_5 + &D_801E9958), s32 *, 0x34) = (s32) (*(&D_801E998C + temp_a0_5) + 1);
            } else {
                *(&D_801E998C + ((var_a1 & 0xFFFF) * 0x70)) = 0;
            }
            temp_a0_6 = (var_a1 & 0xFFFF) * 0x70;
            if (*(&D_801E9958 + temp_a0_6) & *(&D_801E9976 + temp_a0_6)) {
                M2C_FIELD((temp_a0_6 + &D_801E9958), s32 *, 0x68) = (s32) (*(&D_801E99C0 + temp_a0_6) + 1);
            } else {
                *(&D_801E99C0 + ((var_a1 & 0xFFFF) * 0x70)) = 0;
            }
            temp_a0_7 = (var_a1 & 0xFFFF) * 0x70;
            if (*(&D_801E9958 + temp_a0_7) & *(&D_801E997C + temp_a0_7)) {
                M2C_FIELD((temp_a0_7 + &D_801E9958), s32 *, 0x38) = (s32) (*(&D_801E9990 + temp_a0_7) + 1);
            } else {
                *(&D_801E9990 + ((var_a1 & 0xFFFF) * 0x70)) = 0;
            }
            temp_a0_8 = (var_a1 & 0xFFFF) * 0x70;
            if (*(&D_801E9958 + temp_a0_8) & *(&D_801E997A + temp_a0_8)) {
                M2C_FIELD((temp_a0_8 + &D_801E9958), s32 *, 0x3C) = (s32) (*(&D_801E9994 + temp_a0_8) + 1);
            } else {
                *(&D_801E9994 + ((var_a1 & 0xFFFF) * 0x70)) = 0;
            }
            temp_a0_9 = (var_a1 & 0xFFFF) * 0x70;
            if (*(&D_801E9958 + temp_a0_9) & *(&D_801E9964 + temp_a0_9)) {
                M2C_FIELD((temp_a0_9 + &D_801E9958), s32 *, 0x48) = (s32) (*(&D_801E99A0 + temp_a0_9) + 1);
            } else {
                *(&D_801E99A0 + ((var_a1 & 0xFFFF) * 0x70)) = 0;
            }
            temp_a0_10 = (var_a1 & 0xFFFF) * 0x70;
            if (*(&D_801E9958 + temp_a0_10) & *(&D_801E9962 + temp_a0_10)) {
                M2C_FIELD((temp_a0_10 + &D_801E9958), s32 *, 0x4C) = (s32) (*(&D_801E99A4 + temp_a0_10) + 1);
            } else {
                *(&D_801E99A4 + ((var_a1 & 0xFFFF) * 0x70)) = 0;
            }
            temp_a0_11 = (var_a1 & 0xFFFF) * 0x70;
            if (*(&D_801E9958 + temp_a0_11) & *(&D_801E9960 + temp_a0_11)) {
                M2C_FIELD((temp_a0_11 + &D_801E9958), s32 *, 0x54) = (s32) (*(&D_801E99AC + temp_a0_11) + 1);
            } else {
                *(&D_801E99AC + ((var_a1 & 0xFFFF) * 0x70)) = 0;
            }
            temp_a0_12 = (var_a1 & 0xFFFF) * 0x70;
            if (*(&D_801E9958 + temp_a0_12) & *(&D_801E995E + temp_a0_12)) {
                M2C_FIELD((temp_a0_12 + &D_801E9958), s32 *, 0x50) = (s32) (*(&D_801E99A8 + temp_a0_12) + 1);
            } else {
                *(&D_801E99A8 + ((var_a1 & 0xFFFF) * 0x70)) = 0;
            }
            temp_a0_13 = (var_a1 & 0xFFFF) * 0x70;
            if (*(&D_801E9958 + temp_a0_13) & *(&D_801E9974 + temp_a0_13)) {
                M2C_FIELD((temp_a0_13 + &D_801E9958), s32 *, 0x58) = (s32) (*(&D_801E99B0 + temp_a0_13) + 1);
            } else {
                *(&D_801E99B0 + ((var_a1 & 0xFFFF) * 0x70)) = 0;
            }
            temp_a0_14 = (var_a1 & 0xFFFF) * 0x70;
            if (*(&D_801E9958 + temp_a0_14) & *(&D_801E9972 + temp_a0_14)) {
                M2C_FIELD((temp_a0_14 + &D_801E9958), s32 *, 0x5C) = (s32) (*(&D_801E99B4 + temp_a0_14) + 1);
            } else {
                *(&D_801E99B4 + ((var_a1 & 0xFFFF) * 0x70)) = 0;
            }
            temp_a0_15 = (var_a1 & 0xFFFF) * 0x70;
            if (*(&D_801E9958 + temp_a0_15) & *(&D_801E9970 + temp_a0_15)) {
                M2C_FIELD((temp_a0_15 + &D_801E9958), s32 *, 0x64) = (s32) (*(&D_801E99BC + temp_a0_15) + 1);
            } else {
                *(&D_801E99BC + ((var_a1 & 0xFFFF) * 0x70)) = 0;
            }
            temp_a0_16 = (var_a1 & 0xFFFF) * 0x70;
            if (*(&D_801E9958 + temp_a0_16) & *(&D_801E996E + temp_a0_16)) {
                M2C_FIELD((temp_a0_16 + &D_801E9958), s32 *, 0x60) = (s32) (*(&D_801E99B8 + temp_a0_16) + 1);
            } else {
                *(&D_801E99B8 + ((var_a1 & 0xFFFF) * 0x70)) = 0;
            }
            temp_a0_17 = (var_a1 & 0xFFFF) * 0x70;
            if (*(&D_801E9958 + temp_a0_17) & *(&D_801E9978 + temp_a0_17)) {
                M2C_FIELD((temp_a0_17 + &D_801E9958), s32 *, 0x6C) = (s32) (*(&D_801E99C4 + temp_a0_17) + 1);
            } else {
                *(&D_801E99C4 + ((var_a1 & 0xFFFF) * 0x70)) = 0;
            }
            temp_a0_18 = (var_a1 & 0xFFFF) * 0x70;
            if (*(&D_801E9958 + temp_a0_18) & *(&D_801E9968 + temp_a0_18)) {
                M2C_FIELD((temp_a0_18 + &D_801E9958), s32 *, 0x40) = (s32) (*(&D_801E9998 + temp_a0_18) + 1);
            } else {
                *(&D_801E9998 + ((var_a1 & 0xFFFF) * 0x70)) = 0;
            }
            temp_a0_19 = (var_a1 & 0xFFFF) * 0x70;
            if (*(&D_801E9958 + temp_a0_19) & *(&D_801E9966 + temp_a0_19)) {
                M2C_FIELD((temp_a0_19 + &D_801E9958), s32 *, 0x44) = (s32) (*(&D_801E999C + temp_a0_19) + 1);
            } else {
                *(&D_801E999C + ((var_a1 & 0xFFFF) * 0x70)) = 0;
            }
            var_a1 += 1;
        }
        var_t0 += 1;
    }
if ((u32) (var_t0 & 0xFFFF) < 4U) goto __repair_rows;
}
