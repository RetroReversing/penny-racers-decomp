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

s32 func_8014A4C8(); /* extern */
s32 func_801B7160(s32);                         /* extern */
s32 func_801CA140(s32, s32);                    /* extern */
s32 func_801CABF4(); /* extern */
typedef struct { u16 f0; u8 pad[98]; } Slot_8011F32E;
extern Slot_8011F32E D_8011F32E[];
extern s32 D_801C5C44;
extern s32 D_801C5C68;
extern s32 D_801C5C84;
extern s32 D_801C5CAC;
extern s32 D_801C5CD8;
extern s32 D_801C5D28;
extern s32 D_801C5D58;
extern s32 D_801C5D84;
extern s32 D_801C5DA4;
extern u8 D_801C707B;
extern void *D_801C7AB0;
extern s32 D_801CF4C8;
extern s32 D_801D4390;

void func_801B63E4(s32 arg0, s32 arg1) {
    s32 *var_v0;
    s32 var_a1;
    s32 var_a2;
    s32 temp_a1;
    u16 temp_v0;
    s32 join_arg;

    temp_a1 = arg1 & 0xFFFF;
    temp_v0 = D_8011F32E[temp_a1].f0;
    switch (temp_v0) {
    case 4:
        func_801CA140(arg0, temp_a1);
        func_801B7160(arg0);
        if ((*(u8 *)((s8 *)D_801C7AB0 + 1)) == 5) {

        }
        func_801CABF4(arg0, 0x1D, 0xB9, 9, NULL, &D_801CF4C8, (s32 *)0xA, (s32 *)0xE, 0xA0, 0xFC);
        func_8014A4C8(arg0, 0x1B, 0xD7, 0xD, 0x1F);
        func_8014A4C8(arg0, 0x2B, 0xD9, 0xD, 0x1A);
        func_8014A4C8(arg0, 0x4E, 0xD7, 0xD, 0x20);
        func_8014A4C8(arg0, 0x5C, 0xD9, 0xD, 0x1B);
        func_8014A4C8(arg0, 0x81, 0xD7, 0xD, 0x21);
        var_a2 = arg0;
        var_a1 = 0x8F;
block_22:
        func_8014A4C8(var_a2, var_a1, 0xD9, 0xD);
        return;
    case 5:
        func_801CA140(arg0, temp_a1);
        func_8014A4C8(arg0, 0x1B, 0xD7, 0xD, 0x1F);
        func_8014A4C8(arg0, 0x2B, 0xD9, 0xD, 0x1A);
        func_8014A4C8(arg0, 0x4E, 0xD7, 0xD, 0x20);
        func_8014A4C8(arg0, 0x5C, 0xD9, 0xD, 0x1B);
        func_8014A4C8(arg0, 0x81, 0xD7, 0xD, 0x21);
        join_arg = arg0;
        var_a1 = 0x8F;
        goto block_22;
    case 6:
        func_801CA140(arg0, temp_a1);
        func_801B7160(arg0);
        func_801CABF4(arg0, 0x1D, 0xB9, 9, &D_801D4390, &D_801C5C68, NULL, &D_801CF4C8, 0xA, 0xE, 0xA0, 0xFC);
        func_8014A4C8(arg0, 0x1B, 0xD7, 0xD, 0x1F);
        func_8014A4C8(arg0, 0x2B, 0xD9, 0xD, 0x1A);
        func_8014A4C8(arg0, 0x4E, 0xD7, 0xD, 0x20);
        func_8014A4C8(arg0, 0x5C, 0xD9, 0xD, 0x1B);
        func_8014A4C8(arg0, 0x81, 0xD7, 0xD, 0x21);
        var_a1 = 0x8F;
        join_arg = arg0;
        goto block_22;
    case 7:
        func_801CA140(arg0, temp_a1);
        func_8014A4C8(arg0, 0x1B, 0xD7, 0xD, 0x1F);
        func_8014A4C8(arg0, 0x2B, 0xD9, 0xD, 0x1A);
        func_8014A4C8(arg0, 0x4E, 0xD7, 0xD, 0x20);
        func_8014A4C8(arg0, 0x5C, 0xD9, 0xD, 0x1B);
        func_8014A4C8(arg0, 0x81, 0xD7, 0xD, 0x21);
        join_arg = arg0;
        var_a1 = 0x8F;
        goto block_22;
    case 8:
        func_801CA140(arg0, temp_a1);
        func_8014A4C8(arg0, 0x1B, 0xD7, 0xD, 0x1F);
        func_8014A4C8(arg0, 0x2B, 0xD9, 0xD, 0x1A);
        func_8014A4C8(arg0, 0x4E, 0xD7, 0xD, 0x20);
        func_8014A4C8(arg0, 0x5C, 0xD9, 0xD, 0x1B);
        func_8014A4C8(arg0, 0x81, 0xD7, 0xD, 0x21);
        join_arg = arg0;
        var_a1 = 0x8F;
        goto block_22;
    case 9:
        func_801CA140(arg0, temp_a1);
        func_801B7160(arg0);
        func_801CABF4(arg0, 0x1D, 0xB9, 9, &D_801D4390, &D_801C5C44, NULL, &D_801CF4C8, 0xA, 0xE, 0xA0, 0xFC);
        func_8014A4C8(arg0, 0x1B, 0xD7, 0xD, 0x1F);
        func_8014A4C8(arg0, 0x2B, 0xD9, 0xD, 0x1A);
        func_8014A4C8(arg0, 0x4E, 0xD7, 0xD, 0x20);
        func_8014A4C8(arg0, 0x5C, 0xD9, 0xD, 0x1B);
        func_8014A4C8(arg0, 0x81, 0xD7, 0xD, 0x21);
        join_arg = arg0;
        var_a1 = 0x8F;
        goto block_22;
    case 10:
        func_801CA140(arg0, temp_a1);
        func_8014A4C8(arg0, 0x1B, 0xD7, 0xD, 0x1F);
        func_8014A4C8(arg0, 0x2B, 0xD9, 0xD, 0x1A);
        func_8014A4C8(arg0, 0x4E, 0xD7, 0xD, 0x20);
        func_8014A4C8(arg0, 0x5C, 0xD9, 0xD, 0x1B);
        func_8014A4C8(arg0, 0x81, 0xD7, 0xD, 0x21);
        join_arg = arg0;
        var_a1 = 0x8F;
        goto block_22;
    case 11:
        func_801CA140(arg0, temp_a1);
        func_801B7160(arg0);
        if ((*(u8 *)((s8 *)D_801C7AB0 + 1)) == 5) {
            func_801CABF4(arg0, 0x1D, 0xB9, 9, &D_801D4390, &D_801C5CD8, NULL, &D_801CF4C8, 0xA, 0xE, 0xA0, 0xFC);
            var_v0 = &D_801C5C84;
        } else {
            func_801CABF4(arg0, 0x1D, 0xB9, 9, &D_801D4390, &D_801C5D58, NULL, &D_801CF4C8, 0xA, 0xE, 0xA0, 0xFC);
            var_v0 = &D_801C5CAC;
        }
        func_801CABF4(arg0, 0x1D, 0xC8, 9, var_v0, NULL, &D_801CF4C8, (s32 *)0xA, 0xE, 0xA0, 0xFC);
        func_8014A4C8(arg0, 0x1B, 0xD7, 0xD, 0x1F);
        func_8014A4C8(arg0, 0x2B, 0xD9, 0xD, 0x1A);
        func_8014A4C8(arg0, 0x4E, 0xD7, 0xD, 0x20);
        func_8014A4C8(arg0, 0x5C, 0xD9, 0xD, 0x1B);
        func_8014A4C8(arg0, 0x81, 0xD7, 0xD, 0x21);
        join_arg = arg0;
        var_a1 = 0x8F;
        goto block_22;
    case 12:
        func_801CA140(arg0, temp_a1);
        func_8014A4C8(arg0, 0x1B, 0xD7, 0xD, 0x1F);
        func_8014A4C8(arg0, 0x2B, 0xD9, 0xD, 0x1A);
        func_8014A4C8(arg0, 0x4E, 0xD7, 0xD, 0x20);
        func_8014A4C8(arg0, 0x5C, 0xD9, 0xD, 0x1B);
        func_8014A4C8(arg0, 0x81, 0xD7, 0xD, 0x21);
        join_arg = arg0;
        var_a1 = 0x8F;
        goto block_22;
    case 13:
        func_801CA140(arg0, temp_a1);
        func_801B7160(arg0);
        join_arg = 0xB9;
for (;;)
{
        func_801CABF4(arg0, 0x1D, join_arg, 9);
    default:
        return;
    case 15:
        func_801CA140(arg0, temp_a1);
        func_801B7160(arg0);
        func_801CABF4(arg0, 0x1D, 0xB9, 9, &D_801D4390, &D_801C5D28, NULL, &D_801CF4C8, 0xA, 0xE, 0xA0, 0xFC);

        func_8014A4C8(arg0, 0x1B, 0xD7, 0xD, 0x1F);
        func_8014A4C8(arg0, 0x2B, 0xD9, 0xD, 0x1A);
        func_8014A4C8(arg0, 0x4E, 0xD7, 0xD, 0x20);
        func_8014A4C8(arg0, 0x5C, 0xD9, 0xD, 0x1B);
        func_8014A4C8(arg0, 0x81, 0xD7, 0xD, 0x21);
        func_8014A4C8(arg0, 0x8F, 0xD9, 0xD, 0x1E);
        func_8014A4C8(arg0, 0xBE, 0xD7, 0xD, 0x22);
        join_arg = arg0;
        var_a1 = 0xCD;
        goto block_22;
    case 16:
        func_801CA140(arg0, temp_a1);
        if (D_801C707B == 1) {
            func_801B7160(arg0);
            func_801CABF4(arg0, 0x1D, 0xB9, 9, &D_801D4390, &D_801C5D84, NULL, &D_801CF4C8, 0xA, 0xE, 0xA0, 0xFC);
            func_801CABF4(arg0, 0x1D, 0xC8, 9, &D_801D4390, &D_801C5DA4, NULL, &D_801CF4C8, 0xA, 0xE, 0xA0, 0xFC);
            func_8014A4C8(arg0, 0x1B, 0xD7, 0xD, 0x1F);
            func_8014A4C8(arg0, 0x2B, 0xD9, 0xD, 0x1A);
            func_8014A4C8(arg0, 0x4E, 0xD7, 0xD, 0x20);
            func_8014A4C8(arg0, 0x5C, 0xD9, 0xD, 0x1B);
            func_8014A4C8(arg0, 0x81, 0xD7, 0xD, 0x21);
            do { join_arg = arg0; } while (0);
            join_arg = arg0;
            var_a1 = 0x8F;
        } else {
            func_8014A4C8(arg0, 0x1B, 0xD7, 0xD, 0x1F);
        func_8014A4C8(arg0, 0x2B, 0xD9, 0xD, 0x1A);
        func_8014A4C8(arg0, 0x4E, 0xD7, 0xD, 0x20);
        func_8014A4C8(arg0, 0x5C, 0xD9, 0xD, 0x1B);
        func_8014A4C8(arg0, 0x81, 0xD7, 0xD, 0x21);
        func_8014A4C8(arg0, 0x8F, 0xD9, 0xD, 0x1E);
        func_8014A4C8(arg0, 0xBE, 0xD7, 0xD, 0x22);
        var_a1 = 0xCD;
        goto block_22;
        }
        goto block_22;
    case 18:
        func_801CA140(arg0, temp_a1);
        func_801B7160(arg0);
        var_a2 = 0xB9;
        continue;
    case 19:
        func_801CA140(arg0, temp_a1);
        func_801B7160(arg0);
        if ((*(u8 *)((s8 *)D_801C7AB0 + 3)) != (*(u8 *)((s8 *)D_801C7AB0 + 2))) {

        }
        func_801CABF4(arg0, 0x1D, 0xB9, 9, NULL, &D_801CF4C8, (s32 *)0xA, (s32 *)0xE, 0xA0, 0xFC);
        var_a2 = 0xC8;
        continue;
break;
}
    }
}
