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
s16 func_8012913C();
extern char D_8006FAF0[];
extern char D_8011F2F0[];
extern char D_80168574[];
extern u16 D_80233EC0;
extern char D_80236EA0[];
extern u8 D_80236F58[];
extern char D_80237070[];

void func_80222498(void *arg0) {
    f32 __repair_fzero = 0.0f;

s32 __repair_operand;

    f32 temp_ft0;
    f32 temp_ft1;
    f32 temp_fv0;
    f32 temp_fv1;
    f32 temp_fv1_2;
    f32 var_fa0;
    f32 var_fs0;
    f32 var_fv0;
    f32 var_fv1;
    u16 temp_v1;
    char *var_s0;
    
    u8 *var_s2;
    void *temp_s3;
    void *var_a0;

    temp_s3 = (M2C_FIELD(arg0, u16 *, 2) * 0x64) + D_8011F2F0;
    if ((u8) M2C_FIELD(arg0, u8 *, 0x870) >= 0x79U) {
        M2C_FIELD(arg0, u16 *, 6) |= 0x10;
        var_s0 = *(s32 *)(D_80236EA0 + (D_8006FB10 * 4));
        if (M2C_FIELD(var_s0, u8 *, 1) != M2C_FIELD(arg0, u16 *, 0x8E4)) {
            for (;;) {
                var_s0 += 0x20;
                if (*(u8 *)var_s0 == 0) {
                    break;
                }
                if (M2C_FIELD(var_s0, u8 *, 1) == M2C_FIELD(arg0, u16 *, 0x8E4)) {
                    goto block_5;
                }
            }
            goto block_9;
        }
block_5:
        if (M2C_FIELD(var_s0, u8 *, 0) != 0) {
            M2C_FIELD(arg0, u16 *, 0x8E4) = (u16) M2C_FIELD(var_s0, u8 *, 2);
            M2C_FIELD(arg0, s16 *, 0x8E6) = (s16) (M2C_FIELD(var_s0, u8 *, 2) - 1);
            M2C_FIELD(arg0, s16 *, 0x8E8) = 0;
            M2C_FIELD(arg0, u8 *, 0x597) = (u8) M2C_FIELD(var_s0, u8 *, 3);
            __repair_operand = M2C_FIELD(arg0, s32 *, 0x8DC);
            var_a0 = (M2C_FIELD(var_s0, u8 *, 2) * 0x6C) + __repair_operand;
            var_fa0 = M2C_FIELD(var_s0, f32 *, 4);
            if (M2C_FIELD(arg0, u8 *, 0x879) == 2) {
                M2C_FIELD(temp_s3, f32 *, 0x18) = var_fa0;
                M2C_FIELD(temp_s3, f32 *, 0x1C) = (f32) (M2C_FIELD(var_s0, f32 *, 8) + 20.0f);
                M2C_FIELD(temp_s3, f32 *, 0x20) = (f32) M2C_FIELD(var_s0, f32 *, 0xC);
            } else {
                M2C_FIELD(temp_s3, f32 *, 0x18) = (f32) (((M2C_FIELD(var_s0, f32 *, 0x10) - var_fa0) * 0.2f * (f32) M2C_FIELD(arg0, u16 *, 4)) + M2C_FIELD(var_s0, f32 *, 4));
                M2C_FIELD(temp_s3, f32 *, 0x1C) = (f32) (((M2C_FIELD(var_s0, f32 *, 0x14) - M2C_FIELD(var_s0, f32 *, 8)) * 0.2f * (f32) M2C_FIELD(arg0, u16 *, 4)) + M2C_FIELD(var_s0, f32 *, 8) + 20.0f);
                var_fv1 = M2C_FIELD(var_s0, f32 *, 0xC);
                var_fv0 = (M2C_FIELD(var_s0, f32 *, 0x18) - M2C_FIELD(var_s0, f32 *, 0xC)) * 0.2f * (f32) M2C_FIELD(arg0, u16 *, 4);
                goto block_17;
            }
            goto block_18;
        }
block_9:
        var_fs0 = 1000000.0f;
        var_s0 = *(s32 *)(D_80236EA0 + (D_8006FB10 * 4));
        var_s2 = NULL;
        if (*(u8 *)var_s0 != 0) {
            __repair_rows: {
                temp_ft0 = M2C_FIELD(temp_s3, f32 *, 0x18) - M2C_FIELD(var_s0, f32 *, 4);
                temp_ft1 = M2C_FIELD(temp_s3, f32 *, 0x1C) - M2C_FIELD(var_s0, f32 *, 8);
                temp_fv1 = M2C_FIELD(temp_s3, f32 *, 0x20) - M2C_FIELD(var_s0, f32 *, 0xC);
                temp_fv0 = sqrtf((temp_ft0 * temp_ft0) + (temp_ft1 * temp_ft1) + (temp_fv1 * temp_fv1));
                if (temp_fv0 < var_fs0) {
                    var_fs0 = temp_fv0;
                    var_s2 = var_s0;
                }
                var_s0 += 0x20;
            }
if (*(u8 *)var_s0 != 0) goto __repair_rows;
        }
        if (var_s2 != NULL) {
            M2C_FIELD(arg0, u16 *, 0x8E4) = (u16) M2C_FIELD(var_s2, u8 *, 2);
            M2C_FIELD(arg0, s16 *, 0x8E6) = (s16) (M2C_FIELD(var_s2, u8 *, 2) - 1);
            M2C_FIELD(arg0, s16 *, 0x8E8) = 0;
            M2C_FIELD(arg0, u8 *, 0x597) = (u8) M2C_FIELD(var_s2, u8 *, 3);
            var_a0 = (M2C_FIELD(var_s2, u8 *, 2) * 0x6C) + M2C_FIELD(arg0, s32 *, 0x8DC);
            var_fa0 = M2C_FIELD(var_s2, f32 *, 4);
            if (M2C_FIELD(arg0, u8 *, 0x879) == 2) {
                M2C_FIELD(temp_s3, f32 *, 0x18) = var_fa0;
                M2C_FIELD(temp_s3, f32 *, 0x1C) = (f32) (M2C_FIELD(var_s2, f32 *, 8) + 20.0f);
                M2C_FIELD(temp_s3, f32 *, 0x20) = (f32) M2C_FIELD(var_s2, f32 *, 0xC);
            } else {
                M2C_FIELD(temp_s3, f32 *, 0x18) = (f32) (((M2C_FIELD(var_s2, f32 *, 0x10) - var_fa0) * 0.2f * (f32) M2C_FIELD(arg0, u16 *, 4)) + M2C_FIELD(var_s2, f32 *, 4));
                M2C_FIELD(temp_s3, f32 *, 0x1C) = (f32) (((M2C_FIELD(var_s2, f32 *, 0x14) - M2C_FIELD(var_s2, f32 *, 8)) * 0.2f * (f32) M2C_FIELD(arg0, u16 *, 4)) + M2C_FIELD(var_s2, f32 *, 8) + 20.0f);
                var_fv0 = (M2C_FIELD(var_s2, f32 *, 0x18) - M2C_FIELD(var_s2, f32 *, 0xC)) * 0.2f * (f32) M2C_FIELD(arg0, u16 *, 4);
                var_fv1 = M2C_FIELD(var_s2, f32 *, 0xC);
block_17:
                M2C_FIELD(temp_s3, f32 *, 0x20) = (f32) (var_fv0 + var_fv1);
            }
block_18:
            M2C_FIELD(temp_s3, f32 *, 0x28) = (f32) M2C_FIELD(var_a0, u16 *, 0x68);
            M2C_FIELD(arg0, f32 *, 0x748) = 1000.0f;
            M2C_FIELD(arg0, s8 *, 0x74C) = 0;
            M2C_FIELD(arg0, f32 *, 0x7BC) = __repair_fzero;
            M2C_FIELD(arg0, f32 *, 0x7B8) = __repair_fzero;
            M2C_FIELD(arg0, f32 *, 0x7B4) = __repair_fzero;
            M2C_FIELD(arg0, f32 *, 0x7C4) = __repair_fzero;
            M2C_FIELD(arg0, f32 *, 0x7C8) = __repair_fzero;
            M2C_FIELD(arg0, f32 *, 0x7C0) = __repair_fzero;
            M2C_FIELD(arg0, s16 *, 0x7D0) = func_8012913C(M2C_BITWISE(u16, var_fa0), D_80233EC0, M2C_FIELD(temp_s3, f32 *, 0x18), M2C_FIELD(temp_s3, f32 *, 0x1C), M2C_FIELD(temp_s3, f32 *, 0x20));
            M2C_FIELD(arg0, s16 *, 0x7D2) = 0;
            M2C_FIELD(arg0, s16 *, 0x814) = func_8012913C(D_80233EC0, M2C_BITWISE(u16, M2C_FIELD(temp_s3, f32 *, 0x18)), M2C_FIELD(temp_s3, f32 *, 0x1C), M2C_FIELD(temp_s3, f32 *, 0x20));
            M2C_FIELD(arg0, s16 *, 0x816) = 0;
        }
    }
    temp_v1 = M2C_FIELD(arg0, u16 *, 0x8E4);
    if ((*(D_80236F58 + temp_v1) == 0) && !(M2C_FIELD(temp_s3, f32 *, 0x1C) < *(f32 *)(D_80237070 + (temp_v1 * 4)))) {
        temp_fv1_2 = *(f32 *)(D_80168574 + (D_8006FB10 * 4));
        if (!(M2C_FIELD(temp_s3, f32 *, 0x1C) <= temp_fv1_2)) {
            M2C_FIELD(arg0, u8 *, 0x870) = 0U;
            return;
        }
        M2C_FIELD(temp_s3, f32 *, 0x1C) = temp_fv1_2;
        M2C_FIELD(arg0, f32 *, 0x7BC) = __repair_fzero;
        M2C_FIELD(arg0, f32 *, 0x7B8) = __repair_fzero;
        M2C_FIELD(arg0, f32 *, 0x7B4) = __repair_fzero;
        M2C_FIELD(arg0, f32 *, 0x7C4) = __repair_fzero;
        M2C_FIELD(arg0, f32 *, 0x7C8) = __repair_fzero;
        M2C_FIELD(arg0, f32 *, 0x7C0) = __repair_fzero;
        goto block_25;
    }
block_25:
    M2C_FIELD(arg0, u8 *, 0x870) += 1;
}
