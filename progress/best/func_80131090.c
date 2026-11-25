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

M2C_UNK func_801CA2D4();                            /* extern */
M2C_UNK func_801CA468(void **, M2C_UNK);            /* extern */
M2C_UNK func_801CCE7C(); /* extern */
extern M2C_UNK D_800DB1B8;
extern M2C_UNK D_8011F308;
extern M2C_UNK D_8011F30C;
extern M2C_UNK D_8011F330;
extern u8 D_80126FF6;
extern M2C_UNK D_80171040;
extern M2C_UNK D_80172E48;
extern M2C_UNK D_80220ED8;

void func_80131090(void **arg0, s32 arg1) {
    s32 temp_fp;
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_s0_3;
    s32 temp_s0_4;
    s32 temp_s0_5;
    s32 var_a1;
    s32 var_a2;
    u16 temp_v1_2;
    void *temp_v1;

    if (D_80126FF6 == (M2C_FIELD(&D_800DB1B8, s16 *, 0x2108) - 1)) {
        temp_v1 = *arg0;
        *arg0 = temp_v1 + 8;
        M2C_FIELD(temp_v1, s32 *, 0) = 0x06000000;
        M2C_FIELD(temp_v1, M2C_UNK **, 4) = &D_80220ED8;
        func_801CA2D4();
        func_801CA468(arg0, 0xFF);
        temp_fp = (arg1 & 0xFFFF) * 0x64;
        if (*(&D_8011F330 + temp_fp) != 0) {
            func_801CCE7C(arg0, (s16) (s32) *(&D_8011F308 + temp_fp), (s16) (s32) *(&D_8011F30C + temp_fp), 0, 0, 0x28, (M2C_UNK *)0xF, (M2C_UNK *)0x30, 0xA0, 0x28, 0xF, 0x10, 0xC, 0x13F, 0xEF, &D_80171040, &D_80172E48);
            func_801CCE7C(arg0, (s16) (s32) *(&D_8011F308 + temp_fp), (s16) ((s32) *(&D_8011F30C + temp_fp) + 0x8F), 0, 0x8F, 0x28, (M2C_UNK *)0x11, (M2C_UNK *)0x30, 0xA0, 0x28, 0x11, 0x10, 0xC, 0x13F, 0xEF, &D_80171040, &D_80172E48);
        }
        temp_v1_2 = *(&D_8011F330 + ((arg1 & 0xFFFF) * 0x64));
        switch (temp_v1_2) {
        case 1:
            temp_s0 = (arg1 & 0xFFFF) * 0x64;
            func_801CCE7C(arg0, (s16) (s32) *(&D_8011F308 + temp_s0), (s16) ((s32) *(&D_8011F30C + temp_s0) + 0xF), 0, 0x4F, 0x28, (M2C_UNK *)0x20, (M2C_UNK *)0x30, 0xA0, 0x28, 0x20, 0x10, 0xC, 0x13F, 0xEF, &D_80171040, &D_80172E48);
            func_801CCE7C(arg0, (s16) (s32) *(&D_8011F308 + temp_s0), (s16) ((s32) *(&D_8011F30C + temp_s0) + 0x2F), 0, 0x4F, 0x28, (M2C_UNK *)0x20, (M2C_UNK *)0x30, 0xA0, 0x28, 0x20, 0x10, 0xC, 0x13F, 0xEF, &D_80171040, &D_80172E48);
            func_801CCE7C(arg0, (s16) (s32) *(&D_8011F308 + temp_s0), (s16) ((s32) *(&D_8011F30C + temp_s0) + 0x4F), 0, 0x4F, 0x28, (M2C_UNK *)0x20, (M2C_UNK *)0x30, 0xA0, 0x28, 0x20, 0x10, 0xC, 0x13F, 0xEF, &D_80171040, &D_80172E48);
            var_a2 = ((s32) *(&D_8011F30C + temp_s0) + 0x6F) << 0x10;
            var_a1 = (s32) *(&D_8011F308 + temp_s0) << 0x10;
block_10:
block_11:
            func_801CCE7C(arg0, (s16) (var_a1 >> 0x10), (s16) (var_a2 >> 0x10), 0, 0x13F, 0xEF, &D_80171040, &D_80172E48);
            break;
        case 2:
            temp_s0_2 = (arg1 & 0xFFFF) * 0x64;
            func_801CCE7C(arg0, (s16) (s32) *(&D_8011F308 + temp_s0_2), (s16) ((s32) *(&D_8011F30C + temp_s0_2) + 0xF), 0, 0x6F, 0x28, (M2C_UNK *)0x20, (M2C_UNK *)0x30, 0xA0, 0x28, 0x20, 0x10, 0xC, 0x13F, 0xEF, &D_80171040, &D_80172E48);
            func_801CCE7C(arg0, (s16) (s32) *(&D_8011F308 + temp_s0_2), (s16) ((s32) *(&D_8011F30C + temp_s0_2) + 0x2F), 0, 0x4F, 0x28, (M2C_UNK *)0x20, (M2C_UNK *)0x30, 0xA0, 0x28, 0x20, 0x10, 0xC, 0x13F, 0xEF, &D_80171040, &D_80172E48);
            func_801CCE7C(arg0, (s16) (s32) *(&D_8011F308 + temp_s0_2), (s16) ((s32) *(&D_8011F30C + temp_s0_2) + 0x4F), 0, 0x4F, 0x28, (M2C_UNK *)0x20, (M2C_UNK *)0x30, 0xA0, 0x28, 0x20, 0x10, 0xC, 0x13F, 0xEF, &D_80171040, &D_80172E48);
            var_a1 = (s32) *(&D_8011F308 + temp_s0_2) << 0x10;
            var_a2 = ((s32) *(&D_8011F30C + temp_s0_2) + 0x6F) << 0x10;
            goto block_11;
        case 3:
            temp_s0_3 = (arg1 & 0xFFFF) * 0x64;
            func_801CCE7C(arg0, (s16) (s32) *(&D_8011F308 + temp_s0_3), (s16) ((s32) *(&D_8011F30C + temp_s0_3) + 0xF), 0, 0x4F, 0x28, (M2C_UNK *)0x20, (M2C_UNK *)0x30, 0xA0, 0x28, 0x20, 0x10, 0xC, 0x13F, 0xEF, &D_80171040, &D_80172E48);
            func_801CCE7C(arg0, (s16) (s32) *(&D_8011F308 + temp_s0_3), (s16) ((s32) *(&D_8011F30C + temp_s0_3) + 0x2F), 0, 0x6F, 0x28, (M2C_UNK *)0x20, (M2C_UNK *)0x30, 0xA0, 0x28, 0x20, 0x10, 0xC, 0x13F, 0xEF, &D_80171040, &D_80172E48);
            func_801CCE7C(arg0, (s16) (s32) *(&D_8011F308 + temp_s0_3), (s16) ((s32) *(&D_8011F30C + temp_s0_3) + 0x4F), 0, 0x4F, 0x28, (M2C_UNK *)0x20, (M2C_UNK *)0x30, 0xA0, 0x28, 0x20, 0x10, 0xC, 0x13F, 0xEF, &D_80171040, &D_80172E48);
            var_a2 = ((s32) *(&D_8011F30C + temp_s0_3) + 0x6F) << 0x10;
            var_a1 = (s32) *(&D_8011F308 + temp_s0_3) << 0x10;
            goto block_11;
        case 4:
            temp_s0_4 = (arg1 & 0xFFFF) * 0x64;
            func_801CCE7C(arg0, (s16) (s32) *(&D_8011F308 + temp_s0_4), (s16) ((s32) *(&D_8011F30C + temp_s0_4) + 0xF), 0, 0x4F, 0x28, (M2C_UNK *)0x20, (M2C_UNK *)0x30, 0xA0, 0x28, 0x20, 0x10, 0xC, 0x13F, 0xEF, &D_80171040, &D_80172E48);
            func_801CCE7C(arg0, (s16) (s32) *(&D_8011F308 + temp_s0_4), (s16) ((s32) *(&D_8011F30C + temp_s0_4) + 0x2F), 0, 0x4F, 0x28, (M2C_UNK *)0x20, (M2C_UNK *)0x30, 0xA0, 0x28, 0x20, 0x10, 0xC, 0x13F, 0xEF, &D_80171040, &D_80172E48);
            func_801CCE7C(arg0, (s16) (s32) *(&D_8011F308 + temp_s0_4), (s16) ((s32) *(&D_8011F30C + temp_s0_4) + 0x4F), 0, 0x6F, 0x28, (M2C_UNK *)0x20, (M2C_UNK *)0x30, 0xA0, 0x28, 0x20, 0x10, 0xC, 0x13F, 0xEF, &D_80171040, &D_80172E48);
            var_a2 = ((s32) *(&D_8011F30C + temp_s0_4) + 0x6F) << 0x10;
            var_a1 = (s32) *(&D_8011F308 + temp_s0_4) << 0x10;
            goto block_11;
        case 5:
            temp_s0_5 = (arg1 & 0xFFFF) * 0x64;
            do { func_801CCE7C(arg0, (s16) (s32) *(&D_8011F308 + temp_s0_5), (s16) ((s32) *(&D_8011F30C + temp_s0_5) + 0xF), 0, 0x4F, 0x28, (M2C_UNK *)0x20, (M2C_UNK *)0x30, 0xA0, 0x28, 0x20, 0x10, 0xC, 0x13F, 0xEF, &D_80171040, &D_80172E48); } while (0);
            func_801CCE7C(arg0, (s16) (s32) *(&D_8011F308 + temp_s0_5), (s16) ((s32) *(&D_8011F30C + temp_s0_5) + 0x2F), 0, 0x4F, 0x28, (M2C_UNK *)0x20, (M2C_UNK *)0x30, 0xA0, 0x28, 0x20, 0x10, 0xC, 0x13F, 0xEF, &D_80171040, &D_80172E48);
            func_801CCE7C(arg0, (s16) (s32) *(&D_8011F308 + temp_s0_5), (s16) ((s32) *(&D_8011F30C + temp_s0_5) + 0x4F), 0, 0x4F, 0x28, (M2C_UNK *)0x20, (M2C_UNK *)0x30, 0xA0, 0x28, 0x20, 0x10, 0xC, 0x13F, 0xEF, &D_80171040, &D_80172E48);
            var_a1 = (s32) *(&D_8011F308 + temp_s0_5) << 0x10;
            var_a2 = ((s32) *(&D_8011F30C + temp_s0_5) + 0x6F) << 0x10;
            goto block_10;
        }
    }
}
