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

extern unsigned char D_8006FB11;
extern unsigned short D_8006FB10;
s32 func_8003DE60();
u16 func_800DE41C();
s32 func_80232360();
extern char D_8006FAF0[];
extern char D_800DA26A[];
typedef struct { u16 f0; u8 pad[98]; } Slot_8011F2F0;
extern Slot_8011F2F0 D_8011F2F0[];
extern char D_8011F2FC[];
extern char D_8011F32E[];
extern char D_8011F350[];
extern char D_801CE928[];
extern char D_801CEC2C[];
extern s8 D_801D59C4;
extern u8 D_801E87E0;
extern u8 D_801E87E1;
extern s8 D_801E87E2;
extern u8 D_801E87E3;
extern u8 D_801E87E5;
extern u16 D_801E87E6;
extern char D_801E9498[];
extern char D_801E9D80[];
extern char D_801E9D81[];
extern char D_801F1880[];
extern char D_801F18E0[];
extern char D_801F18E1[];
extern char D_8022AFE9[];
extern char D_8022AFEB[];
extern char D_8022AFEC[];
extern char D_8022B000[];
extern char D_8022B004[];
extern char D_8022B008[];
extern char D_8022B00C[];
extern s16 D_8022B5F4;
extern s32 func_801E28BC;
extern s32 func_801E2ABC;

void func_801E0F10(s32 arg0) {
    s32 *temp_v0_7;
    s32 *temp_v1_4;
    s32 temp_a1_2;
    s32 temp_s0;
    s32 temp_v0;
    
    s32 temp_v0_4;
    s32 temp_v0_5;
s32 __repair_phase_temp_v0_5;
    s32 temp_v0_6;
    s32 temp_v1_3;
    s32 temp_v1_5;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v1;
    s32 var_v1_2;
    s32 var_v1_3;
    s8 var_a1;
    u16 temp_v1;
    u32 *temp_a0_2;
    u32 *temp_v1_2;
    u32 temp_a0;
    u8 temp_a0_3;
    u8 temp_a0_4;
    u8 temp_t0;
    void *temp_a1;
    void *temp_t0_2;
    void *temp_v0_2;
    void *var_a2;
    void *var_a3;

    temp_v0 = (arg0 & 0xFFFF) * 0x64;
    D_801E87E5 = D_8011F2F0[arg0 & 0xFFFF].f0;
    temp_t0 = *(D_8011F2FC + temp_v0);
    temp_v1 = *(D_8011F32E + temp_v0);
    switch (temp_v1) {                              /* irregular */
    case 0:
        *(D_801F1880 + (D_801E87E5 * 4)) = 0;
        *(D_8011F32E + ((arg0 & 0xFFFF) * 0x64)) = 1;
        /* fallthrough */
    case 1:
        var_v1 = temp_t0 & 0xFF;
        if (var_v1 == 1) {
            *(D_801F1880 + (D_801E87E5 * 4)) = 0;
            *(D_8011F32E + ((arg0 & 0xFFFF) * 0x64)) = 2;
            var_v1 = temp_t0 & 0xFF;
        }
        var_v1_2 = temp_t0 & 0xFF;
        if (var_v1 == 2) {
            *(D_8022AFE9 + (D_801E87E5 * 0x8F0)) = 2;
            *(D_801F1880 + (D_801E87E5 * 4)) = 0;
            *(D_8011F32E + ((arg0 & 0xFFFF) * 0x64)) = 3;
            var_v1_2 = temp_t0 & 0xFF;
        }
        if (var_v1_2 == 3) {
            *(D_8011F32E + ((arg0 & 0xFFFF) * 0x64)) = 4;
            return;
        }
        return;
    case 2:
        var_a1 = 0;
        if (*(D_8022AFEC + (D_801E87E5 * 0x8F0)) < -0x20) {
            var_a1 = 1;
        }
        if (*(D_8022B000 + (D_801E87E5 * 0x8F0)) != 0) {
            var_a1 |= 2;
        }
        if (*(D_8022B004 + (D_801E87E5 * 0x8F0)) != 0) {
            var_a1 |= 4;
        }
        if (*(D_8022B008 + (D_801E87E5 * 0x8F0)) != 0) {
            var_a1 |= 0x10;
        }
        if (*(D_8022B00C + (D_801E87E5 * 0x8F0)) != 0) {
            var_a1 |= 8;
        }
        *(D_801F18E0 + *(D_801F1880 + (D_801E87E5 * 4))) = var_a1;
        temp_a1 = D_801F18E0 + 1;
        *(s32 *)(*(D_801F1880 + (D_801E87E5 * 4)) + temp_a1) = *(D_8022AFEB + (D_801E87E5 * 0x8F0));
        temp_v1_2 = (D_801E87E5 * 4) + D_801F1880;
        *temp_v1_2 += 2;
        D_801E87E2 = 0;/*__repair_loop_weight*/do {
        temp_a0 = *temp_v1_2;} while (0);
        if (((temp_a0 >= 0x7AFAU) | (temp_t0 == 0)) != 0) {
            *(temp_a0 + D_801F18E0) = 0xFF;
            *(s32 *)(*((D_801E87E5 * 4) + D_801F1880) + temp_a1) = 0xFF;
            temp_a0_2 = (D_801E87E5 * 4) + D_801F1880;
            if ((u32) *temp_a0_2 < 0x7AFAU) {
                D_801E87E0 = D_8006FB11;
                D_801E87E2 = 1;
                var_v0 = arg0 & 0xFFFF;
                if (D_8022B5F4 < 4) {
                    *temp_a0_2 = 0;
                    D_801E87E3 = 1;
                    D_801E87E1 = D_8006FB11;
                    temp_v0_2 = D_800DA26A + 0xA3E;
                    var_a3 = temp_v0_2;
                    var_a2 = (D_801E87E5 * 0x178) + (temp_v0_2 - 0xA48);
                    temp_t0_2 = var_a2 + 0x170;
                    do {
                        M2C_FIELD(var_a3, s32 *, 0) = (s32) M2C_FIELD(var_a2, s32 *, 0);
                        M2C_FIELD(var_a3, s32 *, 4) = (s32) M2C_FIELD(var_a2, s32 *, 4);
                        M2C_FIELD(var_a3, s32 *, 8) = (s32) M2C_FIELD(var_a2, s32 *, 8);
                        M2C_FIELD(var_a3, s32 *, 0xC) = (s32) M2C_FIELD(var_a2, s32 *, 0xC);
                        var_a2 += 0x10;
                        var_a3 += 0x10;
                    } while (var_a2 != temp_t0_2);
                    M2C_FIELD(var_a3, s32 *, 0) = (s32) M2C_FIELD(var_a2, s32 *, 0);
                    M2C_FIELD(var_a3, s32 *, 4) = (s32) M2C_FIELD(var_a2, s32 *, 4);
loop_32:
                    temp_v0 = *((D_801E87E5 * 4) + D_801F1880);
                    *(temp_v0 + D_801E9D80) = *(temp_v0 + D_801F18E0);
                    temp_v0_4 = *((D_801E87E5 * 4) + D_801F1880);
                    *(temp_v0_4 + D_801E9D81) = *(temp_v0_4 + D_801F18E1);
                    temp_v1_3 = *((D_801E87E5 * 4) + D_801F1880);
                    temp_a0_3 = *(temp_v1_3 + D_801F18E0);
                    if (temp_a0_3 != 0xFF) {
block_34:
                        temp_v1_4 = (D_801E87E5 * 4) + D_801F1880;
                        *temp_v1_4 += 2;
                        goto loop_32;
                    }
                    if (*(temp_v1_3 + D_801F18E1) != temp_a0_3) {
                        goto block_34;
                    }
                    func_8003DE60(D_801E9498, D_801F1880, D_801F18E1, D_801F18E0);
                    var_v0 = arg0 & 0xFFFF;
                }
            } else {
                func_800DE41C(0, 0, 3, 0, 0x9F, 0xFF, 0, &func_801E28BC, &func_801E2ABC, 0, 0, 0, 0, 0, 0, 0, 0, 0);
                D_801E87E6 = func_800DE41C(0, 0, 3, 0, 0x9E, 0xFF, 0, D_801CE928, D_801CEC2C, 0, 0, 0, 0, 0, 0, 0, 0, 0);
                temp_v0_5 = D_801E87E6 * 0x64;
                *(D_8011F350 + temp_v0_5) = &D_801D59C4;
                D_801D59C4 = 0;
                M2C_FIELD(*(D_8011F350 + temp_v0_5), s16 *, 2) = 0x14;
                M2C_FIELD(*(D_8011F350 + temp_v0_5), s16 *, 4) = 0;
                M2C_FIELD(*(D_8011F350 + temp_v0_5), s8 *, 6) = 0;
                M2C_FIELD(*(D_8011F350 + (D_801E87E6 * 0x64)), s8 *, 7) = 0;
                M2C_FIELD(*(D_8011F350 + (D_801E87E6 * 0x64)), s8 *, 8) = 0;
                M2C_FIELD(*(D_8011F350 + (D_801E87E6 * 0x64)), s8 *, 9) = 0;
                temp_v0_6 = D_801E87E6 * 0x64;
                M2C_FIELD(*(D_8011F350 + temp_v0_6), s16 *, 0xA) = 0;
                M2C_FIELD(*(D_8011F350 + temp_v0_6), s16 *, 0xC) = 0;
                M2C_FIELD(*(D_8011F350 + temp_v0_6), s16 *, 0xE) = 0;
                M2C_FIELD(*(D_8011F350 + temp_v0_6), s16 *, 0x10) = 0;
                var_v0 = arg0 & 0xFFFF;
            }
            temp_v1_5 = var_v0 * 0x64;
            *(D_8011F2FC + temp_v1_5) = 0;
            *(D_8011F32E + temp_v1_5) = 1;
            return;
        }
        break;
    case 3:
        var_v1_3 = arg0 & 0xFFFF;
        if ((D_801E87E3 != 1) || (var_v1_3 = arg0 & 0xFFFF, (D_801E87E1 != D_8006FB10))) {
            *(D_8011F2FC + (var_v1_3 * 0x64)) = 0;
        }
        if (*(D_8011F2FC + ((arg0 & 0xFFFF) * 0x64)) == 2) {
            temp_v0_7 = (D_801E87E5 * 4) + D_801F1880;
            *temp_v0_7 += 2;
        }
        temp_a1_2 = *(D_801F1880 + (D_801E87E5 * 4));
        temp_a0_4 = *(D_801E9D80 + temp_a1_2);
        if (((temp_a0_4 == 0xFF) && (var_v0_2 = arg0 & 0xFFFF, (M2C_FIELD((D_801E9D80 + temp_a1_2), u8 *, 1) == temp_a0_4))) || (var_v0_2 = arg0 & 0xFFFF, (temp_t0 == 0))) {
            __repair_phase_temp_v0_5 = var_v0_2 * 0x64;
            *(D_8011F2FC + __repair_phase_temp_v0_5) = 0;
            *(D_8022AFE9 + (D_801E87E5 * 0x8F0)) = 1;
            func_80232360(D_801E87E5, 0);
            *(D_8011F32E + __repair_phase_temp_v0_5) = 1;
        }
        break;
    }
}
