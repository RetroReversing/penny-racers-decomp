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

extern M2C_UNK D_800DB1B8;
extern u8 D_8011F2E8;
extern u8 D_80126FF6;
extern M2C_UNK D_80220ED8;
extern M2C_UNK D_80220EF0;
extern M2C_UNK D_80220F08;
extern M2C_UNK D_80220F20;
extern M2C_UNK D_80220F38;
extern M2C_UNK D_80220F50;
extern M2C_UNK D_80220F68;

void func_8021FAA4(void **arg0) {
    M2C_UNK *var_v0;
    s16 temp_v1_2;
    void *temp_v1;
    void *temp_v1_10;
    void *temp_v1_11;
    void *temp_v1_12;
    void *temp_v1_3;
    void *temp_v1_4;
    void *temp_v1_5;
    void *temp_v1_6;
    void *temp_v1_7;
    void *temp_v1_8;
    void *temp_v1_9;

    temp_v1 = *arg0;
    *arg0 = temp_v1 + 8;
    M2C_FIELD(temp_v1, s32 *, 0) = 0xE7000000;
    M2C_FIELD(temp_v1, s32 *, 4) = 0;
    temp_v1_2 = *(&D_800DB1B8 + 0x2108 + (D_80126FF6 * 0x28));
    switch (temp_v1_2) {                            /* switch 1; irregular */
    case 2:                                         /* switch 1 */
        if (D_8011F2E8 == 0) {
            temp_v1_3 = *arg0;
            *arg0 = temp_v1_3 + 8;
            M2C_FIELD(temp_v1_3, s32 *, 0) = 0x06000000;
            var_v0 = &D_80220F50;
        } else {
            temp_v1_4 = *arg0;
            *arg0 = temp_v1_4 + 8;
            M2C_FIELD(temp_v1_4, s32 *, 0) = 0x06000000;
            var_v0 = &D_80220F68;
        }
        break;
    case 3:                                         /* switch 1 */
        if (D_8011F2E8 == 0) {
            temp_v1_5 = *arg0;
            *arg0 = temp_v1_5 + 8;
            M2C_FIELD(temp_v1_5, s32 *, 0) = 0x06000000;
            var_v0 = &D_80220EF0;
        } else if (D_8011F2E8 == 1) {
            temp_v1_6 = *arg0;
            *arg0 = temp_v1_6 + 8;
            M2C_FIELD(temp_v1_6, s32 *, 0) = 0x06000000;
            var_v0 = &D_80220F08;
        } else {
            temp_v1_7 = *arg0;
            *arg0 = temp_v1_7 + 8;
            M2C_FIELD(temp_v1_7, s32 *, 0) = 0x06000000;
            var_v0 = &D_80220F20;
        }
        break;
    case 4:                                         /* switch 1 */
        switch (D_8011F2E8) {                       /* switch 2; irregular */
        case 0:                                     /* switch 2 */
            temp_v1_8 = *arg0;
            *arg0 = temp_v1_8 + 8;
            M2C_FIELD(temp_v1_8, s32 *, 0) = 0x06000000;
            var_v0 = &D_80220EF0;
            break;
        case 1:                                     /* switch 2 */
            temp_v1_9 = *arg0;
            *arg0 = temp_v1_9 + 8;
            M2C_FIELD(temp_v1_9, s32 *, 0) = 0x06000000;
            var_v0 = &D_80220F08;
            break;
        case 2:                                     /* switch 2 */
            temp_v1_10 = *arg0;
            *arg0 = temp_v1_10 + 8;
            M2C_FIELD(temp_v1_10, s32 *, 0) = 0x06000000;
            var_v0 = &D_80220F20;
            break;
        default:                                    /* switch 2 */
            temp_v1_11 = *arg0;
            *arg0 = temp_v1_11 + 8;
            M2C_FIELD(temp_v1_11, s32 *, 0) = 0x06000000;
            var_v0 = &D_80220F38;
            break;
        }
        break;
    default:                                        /* switch 1 */
        temp_v1_12 = *arg0;
        *arg0 = temp_v1_12 + 8;
        M2C_FIELD(temp_v1_12, s32 *, 0) = 0x06000000;
        var_v0 = &D_80220ED8;
        break;
    }
    M2C_FIELD(*arg0, M2C_UNK **, 4) = var_v0;
}
