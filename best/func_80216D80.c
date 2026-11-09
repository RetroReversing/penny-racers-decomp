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

M2C_UNK func_8014A4C8(s32, M2C_UNK, s16, M2C_UNK, s32); /* extern */
M2C_UNK func_801CA140(s32);                         /* extern */
M2C_UNK func_801CA468(s32, M2C_UNK);                /* extern */
M2C_UNK func_801CA494(s32, u8, u8, u8, s32);        /* extern */
M2C_UNK func_801CABF4(s32, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK *, s32, s32, M2C_UNK *, s32, s32, s32, s32); /* extern */
M2C_UNK func_801D8BD0(s32, M2C_UNK, M2C_UNK, M2C_UNK, s32, M2C_UNK *, M2C_UNK *); /* extern */
extern M2C_UNK D_8011F2F0;
extern u8 D_80190C9E;
extern u8 D_80190CA8;
extern u8 D_80190CAA;
extern u8 D_80190CAE;
extern u8 D_80190CB2;
extern u8 D_80190CB4;
extern M2C_UNK D_801CF4C8;
extern M2C_UNK D_801D4390;
extern M2C_UNK D_801E6B68;
extern M2C_UNK D_801E7470;
extern s32 D_802036BC;
extern M2C_UNK D_8021B690;
extern M2C_UNK D_8021F080;

void func_80216D80(s32 arg0, s32 arg1) {
    void *sp34;
    s16 temp_s0;
    s32 temp_a1;
    s32 temp_s4;
    s32 var_a2;
    s32 var_s1_2;
    s32 var_s1_3;
    s32 var_v0;
    u8 temp_a3;
    u8 temp_a3_2;
    u8 temp_s2;
    u8 var_a3;
    u8 var_s1;
    u8 var_s2;
    u8 var_s2_2;

    temp_a1 = arg1 & 0xFFFF;
    sp34 = (temp_a1 * 0x64) + &D_8011F2F0;
    func_801CA140(temp_a1);
    if (M2C_FIELD(sp34, u16 *, 0x40) & 1) {
        func_801CA468(arg0, 0xC0);
        func_8014A4C8(arg0, 0x36, 0x39, 0xA, 0x17);
        func_8014A4C8(arg0, 0x36, 0x8B, 0xA, 0x18);
        func_8014A4C8(arg0, 0xD8, 0x39, 0xA, 0x19);
        func_8014A4C8(arg0, 0xD8, 0x8B, 0xA, 0x1A);
        func_801CA468(arg0, 0xFF);
        func_8014A4C8(arg0, 0x4B, 0x42, 0xA, 0xC);
        var_s1 = 0x7F;
        var_s2 = 0x7F;
        if (D_80190CA8 != 1) {
            if (D_80190CA8 != 2) {
                var_a3 = D_80190CB4 & 0xFF;
            } else {
                var_s2 = D_80190CB4;
                goto block_6;
            }
        } else {
            var_s1 = D_80190CB4;
block_6:
            var_a3 = 0x7F & 0xFF;
        }
        func_801CA494(arg0, var_a3, var_a3, var_a3, 0xFF);
        func_8014A4C8(arg0, 0x4B, 0x54, 0xA, 9);
        temp_a3 = var_s1 & 0xFF;
        func_801CA494(arg0, temp_a3, temp_a3, temp_a3, 0xFF);
        func_8014A4C8(arg0, 0x4B, 0x66, 0xA, 0xA);
        temp_a3_2 = var_s2 & 0xFF;
        func_801CA494(arg0, temp_a3_2, temp_a3_2, temp_a3_2, 0xFF);
        func_8014A4C8(arg0, 0x4B, 0x78, 0xA, 0xB);
        func_801CA468(arg0, 0xFF);
    }
    if (M2C_FIELD(sp34, u16 *, 0x40) & 2) {
        func_801CA468(arg0, 0xC0);
        func_8014A4C8(arg0, 0x90, 0x54, 0xA, 0x1B);
        func_8014A4C8(arg0, 0x90, 0xC1, 0xA, 0x1C);
        func_8014A4C8(arg0, 0x10B, 0x54, 0xA, 0x1D);
        func_8014A4C8(arg0, 0x10B, 0xC1, 0xA, 0x1E);
        func_801CA494(arg0, D_80190CB4, D_80190CB4, D_80190CB4, 0xFF);
        func_8014A4C8(arg0, 0x7D, 0x54, 0xA, 0x2B);
        func_801CA468(arg0, 0xFF);
        var_s1_2 = 0;
        __repair_rows: {
            var_s2_2 = *(D_80190CAA + var_s1_2 + &D_8021F080);
            if (var_s2_2 != 0xFF) {
                if ((s32) var_s2_2 < 8) {
                    var_a2 = ((var_s1_2 * 0x12) + 0x63) << 0x10;
                    var_v0 = 7;
                } else {
                    var_s2_2 -= 8;
                    if (D_80190CB2 & *(&D_8021B690 + var_s2_2)) {
                        func_8014A4C8(arg0, 0xDE, (s16) ((var_s1_2 * 0x12) + 0x68), 0xA, 0x2D);
                    }
                    var_a2 = ((var_s1_2 * 0x12) + 0x63) << 0x10;
                    var_v0 = 8;
                }
                func_8014A4C8(arg0, 0xAD, (s16) (var_a2 >> 0x10), 0xA, var_v0);
                func_8014A4C8(arg0, 0xD3, (s16) ((var_s1_2 * 0x12) + 0x63), 0xA, var_s2_2 + 0x21);
            }
            var_s1_2 += 1;
        }
if (var_s1_2 < 5) goto __repair_rows;
        if (D_80190CAE & 0xF0) {
            func_8014A4C8(arg0, 0xCB, 0x54, 0xA, 0x13);
        }
        if (D_80190CAE & 0xF) {
            func_8014A4C8(arg0, 0xCB, 0xBE, 0xA, 0x14);
        }
        func_801CA494(arg0, D_80190CB4, D_80190CB4, D_80190CB4, 0xFF);
        func_8014A4C8(arg0, 0x9D, (D_80190C9E * 0x12) + 0x63, 0xA, 0x2B);
        func_801CA468(arg0, 0xFF);
    }
    if (M2C_FIELD(sp34, u16 *, 0x40) & 4) {
        func_801CA468(arg0, 0xC0);
        func_8014A4C8(arg0, 0x90, 0x68, 0xA, 0x1B);
        func_8014A4C8(arg0, 0x90, 0xD5, 0xA, 0x1C);
        func_8014A4C8(arg0, 0x10B, 0x68, 0xA, 0x1D);
        func_8014A4C8(arg0, 0x10B, 0xD5, 0xA, 0x1E);
        func_801CA494(arg0, D_80190CB4, D_80190CB4, D_80190CB4, 0xFF);
        func_8014A4C8(arg0, 0x7D, 0x66, 0xA, 0x2B);
        func_801CA468(arg0, 0xFF);
        var_s1_3 = 0;
        do {
            temp_s2 = *(D_80190CAA + var_s1_3 + &D_8021F080);
            if (temp_s2 != 0xFF) {
                temp_s4 = var_s1_3 * 0x12;
                temp_s0 = temp_s4 + 0x75;
                func_8014A4C8(arg0, 0xAD, temp_s0, 0xA, 8);
                func_8014A4C8(arg0, 0xD3, temp_s0, 0xA, temp_s2 + 0x21);
                if (D_80190CB2 & *(&D_8021B690 + temp_s2)) {
                    func_8014A4C8(arg0, 0xDE, (s16) (temp_s4 + 0x7A), 0xA, 0x2D);
                }
            }
            var_s1_3 += 1;
        } while (var_s1_3 < 5);
        func_801CA494(arg0, D_80190CB4, D_80190CB4, D_80190CB4, 0xFF);
        func_8014A4C8(arg0, 0x9D, (D_80190C9E * 0x12) + 0x75, 0xA, 0x2B);
        func_801CA468(arg0, 0xFF);
    }
    if (M2C_FIELD(sp34, u16 *, 0x3E) == 0x41) {
        func_801D8BD0(arg0, 0x10, 0x4C, 0xA, 2, &D_801E6B68, &D_801E7470);
        func_801CABF4(arg0, 0x28, 0x64, 0xA, &D_801D4390, D_802036BC, 0, &D_801CF4C8, 0xA, 0xE, 0xA0, 0xFC);
    }
}
