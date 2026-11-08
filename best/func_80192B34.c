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

u16 func_800DE41C(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32, s32, s32, M2C_UNK *, f32, s32, f32, s32, s32, s32, f32, f32, f32); /* extern */
M2C_UNK func_8014B854(M2C_UNK);                     /* extern */
M2C_UNK func_8019E734(s32);                         /* extern */
M2C_UNK func_8019F7C0(s32);                         /* extern */
extern M2C_UNK D_8011F2F4;
extern M2C_UNK D_8011F2FB;
extern M2C_UNK D_8011F308;
extern M2C_UNK D_8011F30C;
extern M2C_UNK D_8011F310;
extern M2C_UNK D_8011F32F;
extern s16 D_801C5EA4;
extern M2C_UNK D_801C6BB0;
extern s8 D_801C6BB9;
extern s8 D_801C7068;
extern u16 D_801C7074;
extern u16 D_801C746A;
extern void *D_801C7AB0;
extern u16 D_801C7D18;
extern M2C_UNK D_801E9990;
extern M2C_UNK func_801B3F08;

s32 func_80192B34(s32 arg0) {
    s32 temp_s0;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_v0;
    u8 var_s1;

    var_s1 = *(&D_8011F32F + (D_801C7074 * 0x64));
    temp_s0 = arg0 & 0xFFFF;
    func_8019E734(temp_s0);
    func_8019F7C0(temp_s0);
    temp_v0 = D_801C7D18 * 0x64;
    *(&D_8011F308 + temp_v0) = (f32) D_801C7068 * 400.0f * 0.5f;
    *(&D_8011F30C + temp_v0) = 0;
    *(&D_8011F310 + temp_v0) = (f32) D_801C6BB9 * 400.0f * 0.5f;
    var_v0 = var_s1 & 0xFF;
    if (*(&D_801E9990 + (temp_s0 * 0x70)) == 1) {
        if (M2C_FIELD(D_801C7AB0, u8 *, 1) == 5) {
            if ((D_801C7068 != 0) || (var_v0 = var_s1 & 0xFF, (((D_801C6BB9 != 0) & (D_801C6BB9 != 0x17)) != 0))) {
                if (D_801C7068 == 0x17) {
                    if (D_801C6BB9 != 0) {
                        var_v0 = var_s1 & 0xFF;
                        if (D_801C6BB9 != D_801C7068) {
                            goto block_7;
                        }
                    } else {
                        goto block_8;
                    }
                } else {
                    goto block_7;
                }
            }
        } else {
block_7:
            M2C_FIELD(&D_801C6BB0, u8 *, 0) = (u8) D_801C7068;
            M2C_FIELD(&D_801C6BB0, u8 *, 1) = (u8) D_801C6BB9;
            M2C_FIELD(&D_801C6BB0, s16 *, 4) = (s16) ((s8) (u8) D_801C7068 + ((s8) (u8) D_801C6BB9 * 0x18));
            D_801C746A = func_800DE41C(0, 0, 3, 0, 0x53, 0xFF, 0, 0, &func_801B3F08, (f32) (s8) M2C_FIELD(&D_801C6BB0, u8 *, 0) * 400.0f * 0.5f, 0, (f32) (s8) M2C_FIELD(&D_801C6BB0, u8 *, 1) * 400.0f * 0.5f, 0, 0, 0, 0.5f, 0.5f, 0.5f);
            temp_v0_2 = D_801C746A * 0x64;
            *(&D_8011F2F4 + temp_v0_2) = *(&D_8011F2F4 + temp_v0_2) | 0x20;
            *(&D_8011F2FB + temp_v0_2) = 0xC;
            var_s1 = 6;
            D_801C5EA4 = 0;
            func_8014B854(0x3D);
block_8:
            var_v0 = var_s1 & 0xFF;
        }
    }
    return var_v0;
}
