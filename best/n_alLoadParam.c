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

M2C_UNK func_80038390(void *, s32, M2C_UNK, void *); /* extern */

void n_alLoadParam(void *arg0, s32 arg1, s32 *arg2) {
    s32 *temp_a0;
    s32 *temp_v0;
    s32 *temp_v0_2;
    s32 *temp_v0_3;
    s32 *temp_v1_3;
    s32 *var_v0;
    u8 temp_v0_4;
    u8 temp_v1;
    void *temp_v1_2;

    switch (arg1) {                                 /* switch 1; irregular */
    case 5:                                         /* switch 1 */
        M2C_FIELD(arg0, s32 **, 0x20) = arg2;
        temp_a0 = M2C_FIELD(arg0, s32 **, 0x20);
        M2C_FIELD(arg0, s32 *, 0x30) = 0;
        M2C_FIELD(arg0, s32 *, 0x3C) = (s32) *arg2;
        temp_v1 = M2C_FIELD(temp_a0, u8 *, 8);
        switch (temp_v1) {                          /* switch 2; irregular */
        case 0:                                     /* switch 2 */
            M2C_FIELD(temp_a0, s32 *, 4) = (s32) ((M2C_FIELD(temp_a0, s32 *, 4) / 9) * 9);
            temp_v1_2 = M2C_FIELD(M2C_FIELD(arg0, s32 **, 0x20), void **, 0x10);
            M2C_FIELD(arg0, s32 *, 0x24) = (s32) (M2C_FIELD(temp_v1_2, s32 *, 0) * (M2C_FIELD(temp_v1_2, s32 *, 4) * 2) * 8);
            temp_v0 = M2C_FIELD(M2C_FIELD(arg0, s32 **, 0x20), s32 **, 0xC);
            if (temp_v0 != NULL) {
                M2C_FIELD(arg0, s32 *, 0x14) = (s32) *temp_v0;
                M2C_FIELD(arg0, s32 *, 0x18) = (s32) M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, s32 **, 0x20), s32 **, 0xC), s32 *, 4);
                M2C_FIELD(arg0, s32 *, 0x1C) = (s32) M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, s32 **, 0x20), s32 **, 0xC), s32 *, 8);
                func_80038390(M2C_FIELD(M2C_FIELD(arg0, s32 **, 0x20), s32 **, 0xC) + 0xC, M2C_FIELD(arg0, s32 *, 0x10), 0x20, arg0);
                return;
            }
block_9:
            M2C_FIELD(arg0, s32 *, 0x1C) = 0;
            M2C_FIELD(arg0, s32 *, 0x18) = 0;
            M2C_FIELD(arg0, s32 *, 0x14) = 0;
            return;
        case 1:                                     /* switch 2 */
            temp_v0_2 = M2C_FIELD(temp_a0, s32 **, 0xC);
            if (temp_v0_2 != NULL) {
                M2C_FIELD(arg0, s32 *, 0x14) = (s32) *temp_v0_2;
                M2C_FIELD(arg0, s32 *, 0x18) = (s32) M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, s32 **, 0x20), s32 **, 0xC), s32 *, 4);
                var_v0 = M2C_FIELD(M2C_FIELD(arg0, s32 **, 0x20), s32 **, 0xC);
block_14:
                M2C_FIELD(arg0, s32 *, 0x1C) = (s32) M2C_FIELD(var_v0, s32 *, 8);
                return;
            }
            goto block_9;
        }
        break;
    case 4:                                         /* switch 1 */
        temp_v0_3 = M2C_FIELD(arg0, s32 **, 0x20);
        M2C_FIELD(arg0, s32 *, 0x34) = 0;
        M2C_FIELD(arg0, s32 *, 0x38) = 1;
        M2C_FIELD(arg0, s32 *, 0x30) = 0;
        if ((temp_v0_3 != NULL) && ((temp_v1_3 = M2C_FIELD(arg0, s32 **, 0x20), M2C_FIELD(arg0, s32 *, 0x3C) = (s32) M2C_FIELD(temp_v0_3, s32 *, 0), temp_v0_4 = M2C_FIELD(temp_v1_3, u8 *, 8), (temp_v0_4 == 0)) || (temp_v0_4 == 1))) {
            var_v0 = M2C_FIELD(temp_v1_3, s32 **, 0xC);
            if (var_v0 != NULL) {
                goto block_14;
            }
        }
        break;
    }
}
