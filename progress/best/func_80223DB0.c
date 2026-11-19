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

extern unsigned short D_8006FB10;
f32 sqrtf();
extern char D_8006FAF0[];
extern char D_8011F308[];
extern char D_8011F310[];
extern void *D_801C7AB0;
extern char D_802352CC[];
extern char D_80235300[];
extern char D_80235620[];
extern char D_80235940[];

void func_80223DB0(void *arg0) {
    f32 temp_fa0;
    f32 temp_ft0;
    f32 temp_fv0;
    f32 var_fv0;
    s32 temp_a0_2;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_v0;
    u16 temp_a0;
    u8 temp_v1_2;
    void *temp_v1;

    temp_v1 = (*(s32 *)((M2C_FIELD(arg0, u8 *, 0x597) * 2) + *(D_802352CC + (D_8006FB10 * 4))) * 0x6C) + M2C_FIELD(arg0, s32 *, 0x8DC);
    temp_a0 = M2C_FIELD(arg0, u16 *, 2);
    temp_v0 = temp_a0 * 0x64;
    temp_ft0 = *(D_8011F308 + temp_v0) - ((M2C_FIELD(temp_v1, f32 *, 0x28) * 50.0f) + M2C_FIELD(temp_v1, f32 *, 0));
    temp_fv0 = *(D_8011F310 + temp_v0) - ((M2C_FIELD(temp_v1, f32 *, 0x2C) * 50.0f) + M2C_FIELD(temp_v1, f32 *, 4));
    temp_fa0 = (temp_ft0 * temp_ft0) + (temp_fv0 * temp_fv0);
    var_fv0 = sqrtf(temp_fa0);
    if (var_fv0 != var_fv0) {
        var_fv0 = sqrtf(temp_fa0, temp_a0);
    }
    M2C_FIELD(arg0, f32 *, 0x598) = var_fv0;
    if ((D_8006FB10 == 0) && (M2C_FIELD(D_801C7AB0, u8 *, 1) == 6)) {
        temp_v1_2 = M2C_FIELD(arg0, u8 *, 0x879);
        if (temp_v1_2 != 0) {
            var_v0 = 0x12C;
            if (temp_v1_2 != 4) {
                return;
            }
            goto block_9;
        }
        temp_v0_2 = M2C_FIELD(arg0, u8 *, 0x597) * 4;
        M2C_FIELD(arg0, s32 *, 0x59C) = (s32) ((s32) *(D_80235620 + temp_v0_2) + (s32) ((*(D_80235940 + temp_v0_2) - M2C_FIELD(arg0, f32 *, 0x598)) * *(D_80235300 + temp_v0_2)));
        return;
    }
    temp_a0_2 = M2C_FIELD(arg0, u8 *, 0x597) * 4;
    var_v0 = (M2C_FIELD(arg0, s16 *, 0x594) * 0x64) + (s32) *(D_80235620 + temp_a0_2) + (s32) ((*(D_80235940 + temp_a0_2) - M2C_FIELD(arg0, f32 *, 0x598)) * *(D_80235300 + temp_a0_2));
block_9:
    M2C_FIELD(arg0, s32 *, 0x59C) = var_v0;
}
