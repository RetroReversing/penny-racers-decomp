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

s32 func_8014B854();
s32 func_80192680();
s32 func_80192B34();
s32 func_80193160();
s32 func_80193A50();
s32 func_80194024();
s32 func_801953F0();
u8 func_8019A5A0();
s32 func_8019F7C0();
s32 func_801AEC94();
s32 func_801AF334();
s32 func_801AF8CC();
s32 func_801B77F8();
s32 func_801C1DC0();
s8 func_801C3418();
extern char D_8011F2F0[];
extern char D_8011F308[];
extern char D_8011F30C[];
extern char D_8011F310[];
extern char D_8011F32E[];
extern char D_8011F32F[];
extern char D_8011F350[];
extern u16 D_8018BC3C;
extern u8 D_801C5EA1;
extern s8 D_801C5EA2;
extern u16 D_801C5EA4;
extern s8 D_801C6B24;
extern s8 D_801C6B25;
extern s8 D_801C6B26;
extern s8 D_801C6B28;
extern s8 D_801C6B29;
extern s8 D_801C6B2A;
extern s8 D_801C6B2B;
extern s8 D_801C6B2C;
extern s8 D_801C6BB9;
extern u8 D_801C7060;
extern u8 D_801C7068;
extern u16 D_801C7078;
extern void *D_801C7AB0;
extern s8 D_801C7AB8;
extern u16 D_801C7ABA;
extern u8 D_801C7ABD;
extern u8 D_801C7AD0;
extern u16 D_801C7D18;
extern s8 D_801CA130;
extern s32 D_801E9990;
extern s32 D_801E9994;
extern s32 D_801E99C0;

void func_80196448(s32 arg0) {
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_s0_3;
    s32 temp_s0_4;
    s32 temp_v0;
    s32 temp_v0_10;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 temp_v0_5;
    s32 temp_v0_6;
    s32 temp_v0_7;
    s32 temp_v0_8;
    s32 temp_v0_9;
    s32 var_v0_3;
    s32 var_v0_4;
    s32 var_v0_4_2;
    s32 var_v0_4_3;
    s32 var_v0_4_4;
    s32 var_v0_4_5;
    s32 var_v0_4_6;
    s32 var_v0_5;
    s32 var_v0_6;
    s32 var_v0_7;
    s32 var_v0_8;
    s32 var_v1;
    s8 temp_a0;
    s8 temp_a0_2;
    s8 temp_a0_3;
    s8 temp_a0_4;
    s8 var_a0;
    s8 var_v1_2;
    u16 temp_v1;
    u8 var_v0;
    u8 var_v0_2;

    var_a0 = D_801C6BB9;
    D_801C7078 = (s8) D_801C7068 + (var_a0 * 0x18);
    if ((u8) D_801C7AD0 < 0x14U) {
        var_v0 = D_801C7ABD - 0xC;
        goto block_4;
    }
    if ((u32) (D_801C7AD0 - 0x14) < 0x14U) {
        var_v0 = D_801C7ABD + 0xC;
block_4:
        D_801C7ABD = var_v0;
    }
    D_801C7AD0 += 1;
    if (D_801C7AD0 == 0x28) {
        D_801C7AD0 = 0;
    }
    temp_v1 = *(D_8011F32E + ((arg0 & 0xFFFF) * 0x64));
    switch (temp_v1) {
    case 0:
        func_801AEC94(var_a0);
        D_801C6B24 = 0;
        D_801C6B25 = 4;
        D_801C6B26 = 4;
        D_801C6B2C = 0;
        D_801C6B2B = 0;
        D_801C6B2A = 0;
        D_801C6B29 = 0;
        D_801C6B28 = 0;
        *(D_8011F32E + ((arg0 & 0xFFFF) * 0x64)) = 1;
        return;
    case 1:
        func_80192680(0);
        if (D_801C5EA1 != 0) {
            *(D_8011F32E + ((arg0 & 0xFFFF) * 0x64)) = 2;
            return;
        }

        *(D_8011F32E + ((arg0 & 0xFFFF) * 0x64)) = 3;
        return;
    case 2:
        func_801AF334(var_a0);
        {
*(D_8011F32E + ((arg0 & 0xFFFF) * 0x64)) = 3;
return;
}
    case 3:
        if (*(s32 *)*(D_8011F350 + (D_8018BC3C * 0x64)) == 0) {
            temp_v0 = arg0 & 0xFFFF;
            if (D_801C5EA1 != 0) {
                *(D_8011F32E + (temp_v0 * 0x64)) = 0xE;
                return;
            }
            var_v1 = temp_v0 * 0x64;
            var_v0_2 = 4;

            *(D_8011F32E + var_v1) = (s16) var_v0_2;

            D_801C5EA4 = 0;
            return;
        }
    default:
        return;
    case 4:
        func_8019F7C0(0);
        D_801C5EA4 += 1;
        if (D_801C5EA4 == 0xB4) {
            var_v1 = (arg0 & 0xFFFF) * 0x64;
            var_v0_2 = 5;
            {
*(D_8011F32E + var_v1) = (s16) var_v0_2;
D_801C5EA4 = 0;
return;
}
        }
        var_v0_3 = arg0 & 0xFFFF;
        if ((D_801E9990 == 1) || (var_v0_3 = arg0 & 0xFFFF, (D_801E9994 == 1))) {
            var_v1 = var_v0_3 * 0x64;
            var_v0_2 = 5;
            {
*(D_8011F32E + var_v1) = (s16) var_v0_2;
D_801C5EA4 = 0;
return;
}
        }
        break;
    case 5:
        temp_a0 = arg0 & 0xFFFF;
        temp_s0 = temp_a0 * 0x64;
        *(D_8011F32E + temp_s0) = func_80192B34(0 & 0xFFFF) & 0xFF;
        if (D_801E99C0 == 1) {
            func_801B77F8(temp_a0);
            *(D_8011F2F0 + temp_s0) = *(D_8011F32F + temp_s0);
            *(D_8011F32E + temp_s0) = 0x14;
            var_v0_4 = D_801C7ABA * 0x64;
            *(D_8011F32E + var_v0_4) = 1;
            D_801C5EA2 = 3;
            var_v1_2 = 0x60;

            *(D_8011F2F0 + var_v0_4) = var_v1_2;
            func_8014B854(0x41);
            return;
        }
        break;
    case 6:
        func_8019F7C0(0);
        temp_v0_2 = D_801C7D18 * 0x64;
        *(D_8011F308 + temp_v0_2) = (f32) (s8) D_801C7068 * 400.0f * 0.5f;
        *(D_8011F30C + temp_v0_2) = 0;
        *(D_8011F310 + temp_v0_2) = (f32) D_801C6BB9 * 400.0f * 0.5f;
        D_801C5EA4 += 1;
        if (D_801C5EA4 == 0xF0) {
            temp_v0_3 = arg0 & 0xFFFF;
            if (M2C_FIELD(D_801C7AB0, u8 *, 1) == 5) {
                var_v1 = temp_v0_3 * 0x64;
                var_v0_2 = 7;
            } else {
                var_v1 = temp_v0_3 * 0x64;
                var_v0_2 = 8;
            }
            {
*(D_8011F32E + var_v1) = (s16) var_v0_2;
D_801C5EA4 = 0;
return;
}
        }
        if ((D_801E9990 == 1) || (D_801E9994 == 1)) {
            temp_v0_4 = arg0 & 0xFFFF;
            if (M2C_FIELD(D_801C7AB0, u8 *, 1) == 5) {
                var_v1 = temp_v0_4 * 0x64;
                var_v0_2 = 7;
            } else {
                var_v1 = temp_v0_4 * 0x64;
                var_v0_2 = 8;
            }
            {
*(D_8011F32E + var_v1) = (s16) var_v0_2;
D_801C5EA4 = 0;
return;
}
        }
        break;
    case 7:
        temp_a0_2 = arg0 & 0xFFFF;
        temp_s0_2 = temp_a0_2 * 0x64;
        *(D_8011F32E + temp_s0_2) = func_80193160(0 & 0xFFFF) & 0xFF;
        if (D_801E99C0 == 1) {
            func_801B77F8(temp_a0_2);
            *(D_8011F2F0 + temp_s0_2) = *(D_8011F32F + temp_s0_2);
            *(D_8011F32E + temp_s0_2) = 0x14;
            var_v0_4_2 = D_801C7ABA * 0x64;
            *(D_8011F32E + var_v0_4_2) = 1;
            D_801C5EA2 = 3;
            var_v1_2 = 0x60;
            {
*(D_8011F2F0 + var_v0_4_2) = var_v1_2;
func_8014B854(0x41);
return;
}
        }
        break;
    case 8:
        temp_a0_3 = arg0 & 0xFFFF;
        temp_s0_3 = temp_a0_3 * 0x64;
        *(D_8011F32E + temp_s0_3) = func_80193A50(0 & 0xFFFF) & 0xFF;
        if (D_801E99C0 == 1) {
            func_801B77F8(temp_a0_3);
            *(D_8011F2F0 + temp_s0_3) = *(D_8011F32F + temp_s0_3);
            *(D_8011F32E + temp_s0_3) = 0x14;
            var_v0_4_3 = D_801C7ABA * 0x64;
            *(D_8011F32E + var_v0_4_3) = 1;
            D_801C5EA2 = 3;
            var_v1_2 = 0x60;
            {
*(D_8011F2F0 + var_v0_4_3) = var_v1_2;
func_8014B854(0x41);
return;
}
        }
        break;
    case 9:
        func_8019F7C0(0);
        temp_v0_5 = D_801C7D18 * 0x64;
        *(D_8011F308 + temp_v0_5) = (f32) (s8) D_801C7068 * 400.0f * 0.5f;
        *(D_8011F30C + temp_v0_5) = 0;
        *(D_8011F310 + temp_v0_5) = (f32) D_801C6BB9 * 400.0f * 0.5f;
        D_801C5EA4 += 1;
        if (D_801C5EA4 == 0xB4) {
            var_v1 = (arg0 & 0xFFFF) * 0x64;
            var_v0_2 = 0xA;
            {
*(D_8011F32E + var_v1) = (s16) var_v0_2;
D_801C5EA4 = 0;
return;
}
        }
        var_v0_5 = arg0 & 0xFFFF;
        if ((D_801E9990 == 1) || (var_v0_5 = arg0 & 0xFFFF, (D_801E9994 == 1))) {
            var_v1 = var_v0_5 * 0x64;
            var_v0_2 = 0xA;
            {
*(D_8011F32E + var_v1) = (s16) var_v0_2;
D_801C5EA4 = 0;
return;
}
        }
        break;
    case 10:
        temp_a0_4 = arg0 & 0xFFFF;
        temp_s0_4 = temp_a0_4 * 0x64;
        *(D_8011F32E + temp_s0_4) = func_80194024(0 & 0xFFFF) & 0xFF;
        if (D_801E99C0 == 1) {
            func_801B77F8(temp_a0_4);
            *(D_8011F2F0 + temp_s0_4) = *(D_8011F32F + temp_s0_4);
            *(D_8011F32E + temp_s0_4) = 0x14;
            var_v0_4_4 = D_801C7ABA * 0x64;
            *(D_8011F32E + var_v0_4_4) = 1;
            D_801C5EA2 = 3;
            var_v1_2 = 0x60;
            {
*(D_8011F2F0 + var_v0_4_4) = var_v1_2;
func_8014B854(0x41);
return;
}
        }
        break;
    case 11:
        func_8019F7C0(0);
        D_801C5EA4 += 1;
        if (D_801C5EA4 == 0xF0) {
            var_v1 = (arg0 & 0xFFFF) * 0x64;
            var_v0_2 = 0xC;
            {
*(D_8011F32E + var_v1) = (s16) var_v0_2;
D_801C5EA4 = 0;
return;
}
        }
        var_v0_6 = arg0 & 0xFFFF;
        if ((D_801E9990 == 1) || (var_v0_6 = arg0 & 0xFFFF, (D_801E9994 == 1))) {
            var_v1 = var_v0_6 * 0x64;
            var_v0_2 = 0xC;
            {
*(D_8011F32E + var_v1) = (s16) var_v0_2;
D_801C5EA4 = 0;
return;
}
        }
        break;
    case 12:
        func_801953F0(0 & 0xFFFF);
        if (D_801E99C0 == 1) {
            func_801B77F8();
            temp_v0_6 = (arg0 & 0xFFFF) * 0x64;
            *(D_8011F2F0 + temp_v0_6) = *(D_8011F32F + temp_v0_6);
            *(D_8011F32E + temp_v0_6) = 0x14;
            var_v0_4_5 = D_801C7ABA * 0x64;
            *(D_8011F32E + var_v0_4_5) = 1;
            D_801C5EA2 = 3;
            var_v1_2 = 0x60;
            {
*(D_8011F2F0 + var_v0_4_5) = var_v1_2;
func_8014B854(0x41);
return;
}
        }
        break;
    case 13:
        D_801C5EA4 += 1;
        if (D_801C5EA4 == 0xB4) {
            var_v1 = (arg0 & 0xFFFF) * 0x64;
            var_v0_2 = *(D_8011F2F0 + var_v1);
            {
*(D_8011F32E + var_v1) = (s16) var_v0_2;
D_801C5EA4 = 0;
return;
}
        }
        var_v0_7 = arg0 & 0xFFFF;
        if ((D_801E9990 == 1) || (var_v0_7 = arg0 & 0xFFFF, (D_801E9994 == 1))) {
            var_v1 = var_v0_7 * 0x64;
            var_v0_2 = *(D_8011F2F0 + var_v1);
            {
*(D_8011F32E + var_v1) = (s16) var_v0_2;
D_801C5EA4 = 0;
return;
}
        }
        break;
    case 14:
        func_8019F7C0(0);
        func_801AF8CC();
        D_801C5EA4 = 0;
        *(D_8011F32E + ((arg0 & 0xFFFF) * 0x64)) = 0xF;
        return;
    case 15:
        func_8019F7C0(0);
        temp_v0_7 = D_801C7D18 * 0x64;
        *(D_8011F308 + temp_v0_7) = (f32) (s8) D_801C7068 * 400.0f * 0.5f;
        *(D_8011F30C + temp_v0_7) = 0;
        *(D_8011F310 + temp_v0_7) = (f32) D_801C6BB9 * 400.0f * 0.5f;
        D_801C7078 = (s8) D_801C7068 + (D_801C6BB9 * 0x18);
        D_801CA130 = func_801C3418(D_801C7078);
        D_801C5EA4 += 1;
        if (D_801C5EA4 != 0x12C) {
            var_v0_8 = arg0 & 0xFFFF;
            if (D_801E9990 != 1) {
                var_v0_8 = arg0 & 0xFFFF;
                if (D_801E9994 == 1) {
                    goto block_80;
                }
            } else {
                goto block_80;
            }
        } else {
            var_v0_8 = arg0 & 0xFFFF;
block_80:
            var_v0_2 = 0x10;
            var_v1 = var_v0_8 * 0x64;
            {
*(D_8011F32E + var_v1) = (s16) var_v0_2;
D_801C5EA4 = 0;
return;
}
        }
        break;
    case 16:
        func_801C1DC0(0 & 0xFFFF);
        if ((D_801C7060 == 0) && (D_801E99C0 == 1)) {
            func_801B77F8();
            D_801C7AB8 = 4;
            temp_v0_8 = (arg0 & 0xFFFF) * 0x64;
            *(D_8011F2F0 + temp_v0_8) = *(D_8011F32F + temp_v0_8);
            *(D_8011F32E + temp_v0_8) = 0x14;
            if (M2C_FIELD(D_801C7AB0, u8 *, 3) == M2C_FIELD(D_801C7AB0, u8 *, 2)) {
                var_v0_4_6 = D_801C7ABA * 0x64;
                *(D_8011F32E + var_v0_4_6) = 3;
                D_801C5EA2 = 1;
                var_v1_2 = 0x60;
            } else {
                var_v0_4_6 = D_801C7ABA * 0x64;
                *(D_8011F32E + var_v0_4_6) = 2;
                D_801C5EA2 = 0;
                var_v1_2 = 0x50;
            }
            {
*(D_8011F2F0 + var_v0_4_6) = var_v1_2;
func_8014B854(0x41);
return;
}
        }
        break;
    case 17:
        M2C_FIELD(D_801C7AB0, u8 *, 3) = func_8019A5A0(var_a0);
        *(D_8011F32E + ((arg0 & 0xFFFF) * 0x64)) = 0x12;
        return;
    case 18:
        D_801C5EA4 += 1;
        if (D_801C5EA4 == 0xB4) {
            D_801C7078 = (s8) D_801C7068 + (D_801C6BB9 * 0x18);
            D_801CA130 = func_801C3418((s16) D_801C6BB9);
            *(D_8011F32E + ((arg0 & 0xFFFF) * 0x64)) = 0x13;
            D_801C5EA4 = 0;
            if (M2C_FIELD(D_801C7AB0, u8 *, 3) != M2C_FIELD(D_801C7AB0, u8 *, 2)) {
                func_8014B854(0x3E);
                return;
            }
        }
        break;
    case 19:
        D_801C5EA4 += 1;
        if (D_801C5EA4 == 0xB4) {
            var_v0_8 = arg0 & 0xFFFF;
            if (M2C_FIELD(D_801C7AB0, u8 *, 3) != M2C_FIELD(D_801C7AB0, u8 *, 2)) {
                goto block_80;
            }
            goto block_78;
            {
D_801C5EA4 = 0;
return;
}
        }
        var_a0 = 1;
        if ((D_801E9990 == 1) || (D_801E9994 == 1)) {
            var_v0_8 = arg0 & 0xFFFF;
            if (M2C_FIELD(D_801C7AB0, u8 *, 3) == M2C_FIELD(D_801C7AB0, u8 *, 2)) {
block_78:
                func_801B77F8(var_a0);
                D_801C7AB8 = 4;
                temp_v0_9 = (arg0 & 0xFFFF) * 0x64;
                *(D_8011F2F0 + temp_v0_9) = 0x10;
                *(D_8011F32E + temp_v0_9) = 0x14;
                temp_v0_10 = D_801C7ABA * 0x64;
                *(D_8011F32E + temp_v0_10) = 3;
                D_801C5EA2 = 1;
                *(D_8011F2F0 + temp_v0_10) = 0x60;
            } else {
                goto block_80;
            }
            {
D_801C5EA4 = 0;
return;
}
        }
        break;
    case 20:
        func_8019F7C0(0);
        break;
    }
}
