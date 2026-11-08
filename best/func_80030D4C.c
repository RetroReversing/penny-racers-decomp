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

M2C_UNK func_8002D164(void *, s16 *, M2C_UNK);      /* extern */
M2C_UNK func_80030E28(void *, s16 *);               /* extern */
M2C_UNK func_80031680(void *, s16 *);               /* extern */
M2C_UNK func_80031EC8(void *);                      /* extern */
M2C_UNK func_80031FA0(s32, s16 *);                  /* extern */
M2C_UNK func_800346B0(M2C_UNK *, M2C_UNK *, M2C_UNK); /* extern */

void func_80030D4C(void *arg0) {
    s16 sp10;
    s32 temp_a0;

    temp_a0 = M2C_FIELD(arg0, s32 *, 0x18);
    if (temp_a0 != 0) {
        func_80031FA0(temp_a0, &sp10);
        switch (sp10) {                             /* irregular */
        case 1:
            func_80030E28(arg0, &sp10);
block_9:
            func_80031EC8(arg0);
            return;
        case 3:
            func_80031680(arg0, &sp10);
            {
            func_80031EC8(arg0);return;}
        case 4:
            M2C_FIELD(arg0, s32 *, 0x2C) = 2;
            sp10 = 0x10;
            func_8002D164(arg0 + 0x48, &sp10, 0x7FFFFFFF);
            return;
        default:
            func_800346B0("EX", "n_seqplayer.c", 0x160);
            break;
        }
    }
}
