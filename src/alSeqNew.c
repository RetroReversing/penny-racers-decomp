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

s16 read16();
s32 read32();
extern f64 D_8004A8B0;

void alSeqNew(void *arg0, s32 arg1, s32 arg2) {
    s16 temp_v0;

    M2C_FIELD(arg0, s32 *, 0) = arg1;
    M2C_FIELD(arg0, s32 *, 0x10) = arg2;
    M2C_FIELD(arg0, s16 *, 0x1A) = 0;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    M2C_FIELD(arg0, s32 *, 8) = arg1;
    if (read32() == 0x4D546864) {
        read32(arg0);
        if (((read16(arg0) << 0x10) == 0) && (read16(arg0) == 1)) {
            temp_v0 = read16(arg0);
            M2C_FIELD(arg0, s16 *, 0x18) = temp_v0;
            if (!(temp_v0 & 0x8000)) {
                M2C_FIELD(arg0, f32 *, 0x14) = (f32) (D_8004A8B0 / (f64) (f32) temp_v0);
                if (read32(arg0) == 0x4D54726B) {
                    read32(arg0);
                    M2C_FIELD(arg0, s32 *, 4) = (s32) M2C_FIELD(arg0, s32 *, 8);
                }
            }
        }
    }
}
