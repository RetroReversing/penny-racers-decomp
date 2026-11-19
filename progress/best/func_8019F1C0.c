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

extern signed char D_801C6BB0;
extern signed char D_801C6BB1;
s32 func_8014B854();
s32 func_80199EAC();
extern s8 D_801C6BB9;
extern s8 D_801C7068;
extern u8 D_801C7469;

void func_8019F1C0(s32 arg0) {
    s32 temp_v0;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 temp_v1_3;
    s32 temp_v1_4;
    s32 var_v1;
    s32 var_v1_2;
    s8 var_v0;
    s8 var_v0_2;
    s8 var_v1_3;

    temp_v0 = func_80199EAC(arg0 & 0xFFFF);
    if (!(temp_v0 & 0xFF)) {
        if (D_801C6BB9 > 0) {
            switch (D_801C7469) {                   /* switch 1; irregular */
            case 0:                                 /* switch 1 */
                if ((D_801C6BB0 != D_801C7068) || (D_801C6BB1 != (D_801C6BB9 - 1))) {
                    D_801C6BB9 = (u8) D_801C6BB9 - 1;
                    goto block_93;
                }
                break;
            case 1:                                 /* switch 1 */
                if (((D_801C6BB0 != D_801C7068) && ((D_801C6BB0 - 1) != D_801C7068)) || (D_801C6BB1 != (D_801C6BB9 - 1))) {
                    D_801C6BB9 = (u8) D_801C6BB9 - 1;
                    goto block_93;
                }
                break;
            case 2:                                 /* switch 1 */
                if ((D_801C6BB0 != D_801C7068) || ((temp_v1 = D_801C6BB9 - 1, (D_801C6BB1 != temp_v1)) && ((D_801C6BB1 + 1) != temp_v1))) {
                    D_801C6BB9 = (u8) D_801C6BB9 - 1;
                    goto block_93;
                }
                break;
            case 3:                                 /* switch 1 */
                if (((D_801C6BB0 != D_801C7068) && ((D_801C6BB0 + 1) != D_801C7068)) || (D_801C6BB1 != (D_801C6BB9 - 1))) {
                    D_801C6BB9 = (u8) D_801C6BB9 - 1;
                    goto block_93;
                }
                break;
            }
        } else {
            goto block_22;
        }
    } else {
block_22:
        if ((temp_v0 & 0xFF) != 1) {
            var_v1 = temp_v0 & 0xFF;
            goto block_47;
        }
        if (D_801C7068 <= 0) {
            var_v1 = temp_v0 & 0xFF;
block_47:
            if (var_v1 != 2) {
                var_v1_2 = temp_v0 & 0xFF;
                goto block_72;
            }
            if (D_801C6BB9 >= 0x17) {
                var_v1_2 = temp_v0 & 0xFF;
block_72:
                if ((var_v1_2 == 3) && (D_801C7068 < 0x17)) {
                    switch (D_801C7469) {           /* switch 4; irregular */
                    case 0:                         /* switch 4 */
                        if (D_801C6BB0 == (D_801C7068 + 1)) {
                            var_v1_3 = D_801C6BB9;
                            var_v0 = D_801C6BB1 - 1;
                            if (D_801C6BB1 != var_v1_3) {
block_90:
                                if (var_v1_3 != var_v0) {
                                    goto block_91;
                                }
                            }
                        } else {
block_91:
                            var_v0_2 = (u8) D_801C7068 + 1;
                            goto block_92;
                        }
                        break;
                    case 1:                         /* switch 4 */
                        temp_v1_2 = D_801C7068 + 1;
                        if ((D_801C6BB0 == temp_v1_2) || ((D_801C6BB0 - 1) == temp_v1_2)) {
                            var_v1_3 = D_801C6BB1;
block_89:
                            var_v0 = D_801C6BB9;
                            goto block_90;
                        }
                        goto block_91;
                    case 2:                         /* switch 4 */
                        if (D_801C6BB0 == (D_801C7068 + 1)) {
                            var_v1_3 = D_801C6BB9;
                            var_v0 = D_801C6BB1 + 1;
                            if (D_801C6BB1 != var_v1_3) {
                                goto block_90;
                            }
                        } else {
                            goto block_91;
                        }
                        break;
                    case 3:                         /* switch 4 */
                        if (D_801C6BB0 == (D_801C7068 + 1)) {
                            var_v1_3 = D_801C6BB1;
                            goto block_89;
                        }
                        goto block_91;
                    }
                }
            } else {
                switch (D_801C7469) {               /* switch 3; irregular */
                case 0:                             /* switch 3 */
                    temp_v1_3 = D_801C6BB9 + 1;
                    if ((D_801C6BB0 != D_801C7068) || ((D_801C6BB1 != temp_v1_3) && ((D_801C6BB1 - 1) != temp_v1_3))) {
                        D_801C6BB9 = (u8) D_801C6BB9 + 1;
                        goto block_93;
                    }
                    break;
                case 1:                             /* switch 3 */
                    if (((D_801C6BB0 != D_801C7068) && ((D_801C6BB0 - 1) != D_801C7068)) || (D_801C6BB1 != (D_801C6BB9 + 1))) {
                        D_801C6BB9 = (u8) D_801C6BB9 + 1;
                        goto block_93;
                    }
                    break;
                case 2:                             /* switch 3 */
                    if ((D_801C6BB0 != D_801C7068) || (D_801C6BB1 != (D_801C6BB9 + 1))) {
                        D_801C6BB9 = (u8) D_801C6BB9 + 1;
                        goto block_93;
                    }
                    break;
                case 3:                             /* switch 3 */
                    if (((D_801C6BB0 != D_801C7068) && ((D_801C6BB0 + 1) != D_801C7068)) || (D_801C6BB1 != (D_801C6BB9 + 1))) {
                        D_801C6BB9 = (u8) D_801C6BB9 + 1;
                        goto block_93;
                    }
                    break;
                }
            }
        } else {
            switch (D_801C7469) {                   /* switch 2; irregular */
            case 0:                                 /* switch 2 */
                if ((D_801C6BB0 != (D_801C7068 - 1)) || ((D_801C6BB1 != D_801C6BB9) && ((D_801C6BB1 - 1) != D_801C6BB9))) {
                    var_v0_2 = (u8) D_801C7068 - 1;
block_92:
                    D_801C7068 = var_v0_2;
block_93:
                    func_8014B854(0x3B);
                }
                break;
            case 1:                                 /* switch 2 */
                if ((D_801C6BB0 != (D_801C7068 - 1)) || (D_801C6BB1 != D_801C6BB9)) {
                    var_v0_2 = (u8) D_801C7068 - 1;
                    goto block_92;
                }
                break;
            case 2:                                 /* switch 2 */
                if ((D_801C6BB0 != (D_801C7068 - 1)) || ((D_801C6BB1 != D_801C6BB9) && ((D_801C6BB1 + 1) != D_801C6BB9))) {
                    var_v0_2 = (u8) D_801C7068 - 1;
                    goto block_92;
                }
                break;
            case 3:                                 /* switch 2 */
                temp_v1_4 = D_801C7068 - 1;
                if (((D_801C6BB0 != temp_v1_4) && ((D_801C6BB0 + 1) != temp_v1_4)) || (D_801C6BB1 != D_801C6BB9)) {
                    var_v0_2 = (u8) D_801C7068 - 1;
                    goto block_92;
                }
                break;
            }
        }
    }
}
