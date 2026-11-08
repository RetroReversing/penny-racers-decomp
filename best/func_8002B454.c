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

M2C_UNK func_8002B534(void *, u16 *);               /* extern */
M2C_UNK func_8002BDBC(void *, u16 *);               /* extern */
M2C_UNK func_8002C010(void *);                      /* extern */
M2C_UNK func_8002D164(void *, u16 *, M2C_UNK);      /* extern */
M2C_UNK func_8002D42C(s32, u16 *);                  /* extern */
M2C_UNK func_800346B0(M2C_UNK *, M2C_UNK *, M2C_UNK); /* extern */

void func_8002B454(void *arg0) {
    u16 sp10;
    s16 temp_v0;
    s32 temp_a0;

    temp_a0 = M2C_FIELD(arg0, s32 *, 0x18);
    if (temp_a0 != 0) {
        func_8002D42C(temp_a0, &sp10);
        temp_v0 = sp10 - 1;
        switch (temp_v0) {
        case 0:
            func_8002B534(arg0, &sp10);
        case 17:
        case 18:
        case 19:
block_6:
            func_8002C010(arg0);
            return;
        case 2:
            func_8002BDBC(arg0, &sp10);
            goto block_6;
        case 3:
            M2C_FIELD(arg0, s32 *, 0x2C) = 2;
            sp10 = 0x10;
            func_8002D164(arg0 + 0x48, &sp10, 0x7FFFFFFF);
            return;
        default:
            func_800346B0("EX", "n_csplayer.c", 0x161);
            break;
        }
    }
}
