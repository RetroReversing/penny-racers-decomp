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

extern short D_800DD2C0;
s16 func_800DE41C();
s32 func_801D65BC();
s32 func_801D663C();
extern char D_80000000[];
extern char D_800DB1B8[];
extern char D_8011F2F0[];
extern char D_8011F2FD[];
extern char D_8011F32E[];
extern char D_8011F338[];
extern u16 D_80167E60;
extern u16 D_80167E62;
extern char D_80183B4C[];
extern u16 D_80183B50;
extern u8 D_80189CC8;
extern char D_8018A26E[];
extern u16 D_80190C90;
extern char D_8022AD64[];
extern char D_8022AFE9[];
extern s32 func_80135C64;
extern s32 func_80136A28;

void func_80135544(s32 arg0) {
    f32 temp_fv1;
    f32 temp_fv1_2;
    s16 temp_a0;
    s16 temp_v0;
    s16 temp_v1_2;
    s16 var_v1;
    s32 temp_a0_2;
    s32 temp_a1;
    s32 temp_a1_2;
    s32 temp_a1_3;
    s32 temp_s0;
    s32 temp_s1;
    s32 temp_v0_2;
    s32 temp_v1_3;
    s32 var_a0;
    s32 var_s0;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_3;
    s32 var_v0_4;
    s32 var_v0_5;
    s32 var_v1_2;
    s32 var_v1_3;
    u16 temp_v1;
    u8 var_a1;

    temp_v1 = *(D_8011F32E + ((arg0 & 0xFFFF) * 0x64));
    switch (temp_v1) {                              /* irregular */
    case 0:
        var_a1 = *(D_8011F2F0 + ((arg0 & 0xFFFF) * 0x64));
        if (*(D_8022AFE9 + (var_a1 * 0x8F0)) != 5) {
            if (D_80189CC8 != 1) {
                var_a1 = *(D_8011F2F0 + ((arg0 & 0xFFFF) * 0x64));
            } else if (D_80167E62 != 0) {

            } else {
                var_a1 = *(D_8011F2F0 + ((arg0 & 0xFFFF) * 0x64));
            }
            func_800DE41C(0, var_a1, 3, 0, 0, 0, 0, NULL, NULL, 0);
            var_v0 = *(D_8011F2F0 + ((arg0 & 0xFFFF) * 0x64)) * 2;
            var_v1 = 0xC8;
        } else {
            var_v0 = *(D_8011F2F0 + ((arg0 & 0xFFFF) * 0x64)) * 2;
            var_v1 = 0x190;
        }
        *(D_80183B4C + var_v0) = var_v1;
        D_80183B50 = 0;
        *(D_8011F32E + ((arg0 & 0xFFFF) * 0x64)) = 1;
        /* fallthrough */
    case 1:
        temp_a1 = (arg0 & 0xFFFF) * 0x64;
        temp_fv1 = *(D_8011F338 + temp_a1);
        if (temp_fv1 >= 2.1474836e9f) {
            var_v0_2 = (s32) (temp_fv1 - 2.1474836e9f) | (s32) (D_80000000 + 1);
        } else {
            var_v0_2 = (s32) temp_fv1 + 1;
        }
        *(D_8011F338 + temp_a1) = (f32) (var_v0_2 & 0xFFFF);
        var_v1_2 = arg0 & 0xFFFF;
        temp_fv1_2 = *(D_8011F338 + (var_v1_2 * 0x64));
        if (temp_fv1_2 >= 2.1474836e9f) {
            var_a0 = (s32) (temp_fv1_2 - 2.1474836e9f) | 0x80000000;
            var_v1_2 = arg0 & 0xFFFF;
            var_v0_3 = var_v1_2 * 2;
        } else {
            var_a0 = (s32) temp_fv1_2;
            var_v0_3 = var_v1_2 * 2;
        }
        temp_a1_2 = (((var_v0_3 + var_v1_2) * 8) + var_v1_2) * 4;
        if ((u16) *(D_80183B4C + (*(D_8011F2F0 + temp_a1_2) * 2)) < (u32) (var_a0 & 0xFFFF)) {
            *(D_8011F32E + temp_a1_2) = 2;
            var_s0 = 0;
            temp_s1 = (arg0 & 0xFFFF) * 0x64;
            var_v0_4 = 0 * 8;
            do {
                temp_a0 = *(D_8022AD64 + (((var_v0_4 - var_s0) * 8) + (*(D_8011F2F0 + temp_s1) * 0x8F0)));
                var_v1_3 = var_s0 * 8;
                if (temp_a0 != -1) {
                    func_801D663C(temp_a0);
                    var_v1_3 = var_s0 * 8;
                }
                *(D_8022AD64 + (((var_v1_3 - var_s0) * 8) + (*(D_8011F2F0 + temp_s1) * 0x8F0))) = -1;
                var_s0 += 1;
                var_v0_4 = var_s0 * 8;
            } while (var_s0 < 4);
            if ((D_800DD2C0 == D_80167E60) && (D_80183B50 == 0)) {
                func_801D65BC(5);
                D_80183B50 = 1;
                return;
            }
        } else {
            return;
        }
        break;
    case 2:
        temp_a1_3 = (arg0 & 0xFFFF) * 0x64;
        temp_a0_2 = *(D_8011F2F0 + temp_a1_3) * 0x28;
        temp_v0 = *(D_800DB1B8 + 0x2114 + temp_a0_2);
        if (temp_v0 >= 0x91) {
            *(D_800DB1B8 + 0x2114 + temp_a0_2) = temp_v0 - 4;
            temp_v0_2 = *(D_8011F2F0 + temp_a1_3) * 0x28;
            temp_v1_2 = *(D_800DB1B8 + 0x2110 + temp_v0_2) + 4;
            *(D_800DB1B8 + 0x2110 + temp_v0_2) = temp_v1_2;
            *(D_800DB1B8 + 0x2128 + temp_v0_2) = temp_v1_2;
            return;
        }
        *(D_8011F32E + ((arg0 & 0xFFFF) * 0x64)) = 3;
        return;
    case 3:
        temp_v1_3 = (arg0 & 0xFFFF) * 0x64;
        *(D_8011F2FD + (*(D_8018A26E + (*(D_8011F2F0 + temp_v1_3) * 2)) * 0x64)) = 2;
        *(D_8011F2FD + temp_v1_3) = 2;
        var_v0_5 = arg0 & 0xFFFF;
        if (D_80167E60 == D_800DD2C0) {
            *(D_8011F2FD + (D_80190C90 * 0x64)) = 2;
            var_v0_5 = arg0 & 0xFFFF;
        }
        temp_s0 = var_v0_5 * 0x64;
        *(D_8018A26E + (*(D_8011F2F0 + temp_s0) * 2)) = func_800DE41C(0, *(D_8011F2F0 + temp_s0), 3, 0, 0x80, 0, 0, &func_80135C64, &func_80136A28, 0, 0, 0, 0, 0, 0, 0, 0, 0);
        break;
    }
}
