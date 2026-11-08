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

s32 func_8002C110(void *arg0, s32 arg1) {
    s32 sp0;
    s32 sp4;
    s32 sp8;
    s32 spC;
    s16 *temp_a3;
    s16 *var_a0;
    s16 temp_v0;
    
    union { void * pointer; s32 value; } __repair_phase_storage;

    temp_a3 = M2C_FIELD(arg0, s16 **, 0x20);
    __repair_phase_storage.pointer = ((arg1 & 0xFF) * 0x10) + M2C_FIELD(arg0, s32 *, 0x60);
    sp0 = M2C_FIELD(__repair_phase_storage.pointer, s32 *, 0);
    sp4 = M2C_FIELD(__repair_phase_storage.pointer, s32 *, 4);
    sp8 = M2C_FIELD(__repair_phase_storage.pointer, s32 *, 8);
    spC = M2C_FIELD(__repair_phase_storage.pointer, s32 *, 0xC);
    temp_v0 = *temp_a3;
    __repair_phase_storage.value = 0;
    if (temp_v0 > 0) {
        var_a0 = temp_a3;
loop_2:
        if (M2C_FIELD(var_a0, s32 *, 0xC) != sp0) {
            __repair_phase_storage.value += 1;
            var_a0 += 4;
            if (__repair_phase_storage.value >= temp_v0) {
                goto block_7;
            }
            goto loop_2;
        }
        return __repair_phase_storage.value;
    }
block_7:
    return -1;
}
