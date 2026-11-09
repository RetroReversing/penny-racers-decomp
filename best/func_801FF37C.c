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

s16 func_80027EE0(s32);                             /* extern */
M2C_UNK func_8002D030(s16);                         /* extern */
M2C_UNK n_alSndpSetPan(s32);                        /* extern */
M2C_UNK n_alSndpSetPitch(f32);                      /* extern */
M2C_UNK n_alSndpSetVol(s16);                        /* extern */
M2C_UNK n_alSndpStop();                             /* extern */
extern M2C_UNK D_801D75E6;
extern M2C_UNK D_801D7DF4;
extern M2C_UNK D_801D7E00;
extern M2C_UNK D_801D7E04;
extern M2C_UNK D_801D7E08;
extern s8 D_801E995A;
extern s8 D_801E995B;
extern s32 D_801E9990;
extern s32 D_801E9994;
extern s32 D_801E999C;
extern s32 D_801E99A0;
extern s32 D_801E99A4;
extern s32 D_801E99A8;
extern s32 D_801E99AC;
extern s32 D_801E99C0;
extern s32 D_801E99C4;
extern M2C_UNK D_802025EC;
extern M2C_UNK D_802025F0;
extern s32 D_80203AB8;
extern u16 D_80203ABA;
extern s32 D_80203ABC;
extern s16 D_80203ABE;
extern s32 D_80203AC0;
extern u8 D_80203ACA;

void func_801FF37C(void) {
    f32 temp_fs1;
    f32 temp_fs1_2;
    f32 temp_fv1;
    f32 temp_fv1_2;
    f32 var_fs0;
    f32 var_fs0_2;
    f32 var_fs1;
    f32 var_fv0;
    f32 var_fv0_2;
    f32 var_fv1;
    f32 var_fv1_2;
    s16 temp_v0;
    s32 temp_v0_2;
    s32 var_a0;
    s32 var_a0_2;
    s32 var_a0_3;
    s32 var_a1;
    s32 var_v0;
    u8 var_v0_2;

    if (D_801E99A0 == 1) {
        if (D_80203AB8 == 0x43) {
            D_80203AB8 = 0;
        } else {
            D_80203AB8 += 1;
        }
    }
    if (D_801E99A4 == 1) {
        var_v0 = D_80203AB8 - 1;
        if (D_80203AB8 == 0) {
            var_v0 = 0x43;
        }
        D_80203AB8 = var_v0;
    }
    if ((D_801E99A8 == 1) && (D_80203ABC < 7)) {
        D_80203ABC += 1;
    }
    if ((D_801E99AC == 1) && (D_80203ABC > 0)) {
        D_80203ABC -= 1;
    }
    if (D_801E9990 == 1) {
        temp_v0 = func_80027EE0(D_80203AB8);
        if (temp_v0 != -1) {
            temp_v0_2 = temp_v0 * 0x2C;
            *(&D_801D7DF4 + temp_v0_2) = temp_v0;
            *(&D_801D7E04 + temp_v0_2) = D_80203ABA;
            func_8002D030(temp_v0);
            n_alSndpSetVol(*(&D_801D75E6 + (D_80203AB8 * 0xC)));
        }
    }
    if (D_801E9994 == 1) {
        func_8002D030(D_80203ABE);
        n_alSndpStop();
        *(&D_801D7DF4 + (D_80203ABC * 0x2C)) = -1;
    }
    if (D_801E999C == 1) {
        if (D_80203ACA == 4) {
            D_80203ACA = 0;
        } else {
            D_80203ACA += 1;
        }
    }
    if (D_801E99C4 == 1) {
        var_v0_2 = 4;
        if (D_80203ACA != 0) {
            var_v0_2 = D_80203ACA - 1;
        }
        D_80203ACA = var_v0_2;
    }
    func_8002D030(D_80203ABE);
    var_fs0 = (f32) D_801E995B;
    if (var_fs0 > 10.0f) {
        if (var_fs0 > 60.0f) {
            var_fs0 = 60.0f;
        }
        var_fs0_2 = var_fs0 - 10.0f;
        var_fv1 = *(&D_802025F0 + (D_80203ACA * 0xC));
        var_fv0 = var_fs0_2 / 50.0f;
        goto block_35;
    }
    if (var_fs0 < -10.0f) {
        if (var_fs0 < -60.0f) {
            var_fs0 = -60.0f;
        }
        var_fs0_2 = var_fs0 + 10.0f;
        var_fv0 = var_fs0_2 / 50.0f;
        var_fv1 = *(&D_802025EC + (D_80203ACA * 0xC));
block_35:
        n_alSndpSetPitch((var_fv0 * var_fv1) + 1.0f);
        *(&D_801D7E00 + (D_80203ABC * 0x2C)) = var_fs0_2;
    } else {
        n_alSndpSetPitch(1.0f);
    }
    func_8002D030(D_80203ABE);
    var_fs1 = (f32) D_801E995A;
    if (var_fs1 > 10.0f) {
        temp_fs1 = var_fs1 - 10.0f;
        temp_fv1 = temp_fs1 + 64.0f;
        if (temp_fv1 >= 2.1474836e9f) {
            var_a0 = (s32) (temp_fv1 - 2.1474836e9f) | 0x80000000;
        } else {
            var_a0 = (s32) temp_fv1;
        }
        n_alSndpSetPan(var_a0 & 0xFF);
        var_fv1_2 = temp_fs1 + 64.0f;
        var_a1 = D_80203ABC * 0x2C;
        if (var_fv1_2 >= 2.1474836e9f) {
            var_fv0_2 = var_fv1_2 - 2.1474836e9f;
            goto block_56;
        }
        goto block_54;
        goto block_57;
    }
    if (var_fs1 < -10.0f) {
        if (var_fs1 < -74.0f) {
            var_fs1 = -74.0f;
        }
        temp_fs1_2 = var_fs1 + 10.0f;
        temp_fv1_2 = temp_fs1_2 + 64.0f;
        if (temp_fv1_2 >= 2.1474836e9f) {
            var_a0_2 = (s32) (temp_fv1_2 - 2.1474836e9f) | 0x80000000;
        } else {
            var_a0_2 = (s32) temp_fv1_2;
        }
        n_alSndpSetPan(var_a0_2 & 0xFF);
        var_fv1_2 = temp_fs1_2 + 64.0f;
        var_a1 = D_80203ABC * 0x2C;
        if (!(var_fv1_2 >= 2.1474836e9f)) {
block_54:
            var_a0_3 = (s32) var_fv1_2;
        } else {
            var_fv0_2 = var_fv1_2 - 2.1474836e9f;
block_56:
            var_a0_3 = (s32) var_fv0_2 | 0x80000000;
        }
block_57:
        *(&D_801D7E08 + var_a1) = (s8) var_a0_3;
    } else {
        n_alSndpSetPan(0x3F);
    }
    if (D_801E99C0 == 1) {
        D_80203AC0 = 0;
    }
}
