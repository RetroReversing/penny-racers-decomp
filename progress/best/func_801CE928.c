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

extern char D_8011F32E[];
extern char D_8011F350[];

void func_801CE928(s32 arg0) {
    u8 *__base_D_8011F350;
    s32 __index_D_8011F350;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_v0;
    u16 temp_v1;
    void *temp_a1;
    void *temp_a1_2;
    void *var_a0;
    s32 temp;

    __base_D_8011F350 = 0;

    temp = (arg0 & 0xFFFF) * 0x64;
    temp_v1 = *(u16 *)(D_8011F32E + temp);
    if (temp_v1 != 0) {
        if (temp_v1 != 1) {
            return;
        }
        goto block_4;
    }
    *(u16 *)(D_8011F32E + ((arg0 & 0xFFFF) * 0x64)) = 1;
block_4:
    switch ((*(s32 *)*(u32 *)(D_8011F350 + ((arg0 & 0xFFFF) * 0x64)))) {
    case 1:
        temp_v0 = (arg0 & 0xFFFF) * 0x64;
        (*(s16 *)((s8 *)(*(s32 *)(D_8011F350 + temp_v0)) + 4)) = 0;
        (*(u8 *)((s8 *)(*(s32 *)(D_8011F350 + temp_v0)) + 9)) = 0xFF;
        *(s32 *)*(s32 *)(D_8011F350 + temp_v0) = 3;
        return;
    case 2:
        temp_v0_2 = (arg0 & 0xFFFF) * 0x64;
        (*(s16 *)((s8 *)(*(s32 *)(D_8011F350 + temp_v0_2)) + 4)) = 0;
        (*(s8 *)((s8 *)(*(s32 *)(D_8011F350 + temp_v0_2)) + 9)) = 0;
        *(s32 *)*(s32 *)(D_8011F350 + temp_v0_2) = 4;
        return;
    case 3:
        temp_a1 = *(s32 *)(D_8011F350 + ((arg0 & 0xFFFF) * 0x64));
        if ((u16) (*(u16 *)((s8 *)temp_a1 + 4)) >= (u16) (*(u16 *)((s8 *)temp_a1 + 2))) {
            *(s32 *)*(s32 *)(D_8011F350 + ((arg0 & 0xFFFF) * 0x64)) = 0;
        } else {
            (*(u16 *)((s8 *)temp_a1 + 4)) += 1;
        }
        var_v0 = ~((s32) ((*(u16 *)((s8 *)var_a0 + 4)) * 0xFF) / (s32) (*(u16 *)((s8 *)var_a0 + 2)));
        var_a0 = *(s32 *)(D_8011F350 + ((arg0 & 0xFFFF) * 0x64));
block_18:
        (*(s8 *)((s8 *)var_a0 + 9)) = (s8) var_v0;
    case 0:
    default:
        return;
    __index_D_8011F350 = (arg0 & 0xFFFF) * 0x64;
    __base_D_8011F350 = D_8011F350;
    case 4:
        temp_a1_2 = *(__base_D_8011F350 + __index_D_8011F350);
        if ((u16) (*(u16 *)((s8 *)temp_a1_2 + 4)) < (u16) (*(u16 *)((s8 *)temp_a1_2 + 2))) {
            (*(u16 *)((s8 *)temp_a1_2 + 4)) += 1;
        } else {
            *(s32 *)*(s32 *)(D_8011F350 + ((arg0 & 0xFFFF) * 0x64)) = 0;
        }
        var_v0 = (s32) ((*(u16 *)((s8 *)var_a0 + 4)) * 0xFF) / (s32) (*(u16 *)((s8 *)var_a0 + 2));
        var_a0 = *(s32 *)(D_8011F350 + ((arg0 & 0xFFFF) * 0x64));
        goto block_18;
    }
}
