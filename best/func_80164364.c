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

extern unsigned short D_8006FB1C;
s32 func_8003DE60();
extern char D_8006FB14[];
extern char D_8011F2FC[];
extern char D_801839E0[];

void func_80164364(void **arg0, s32 arg1) {
    s32 var_a2;
    s32 var_a3;
    s32 var_t0;
    u8 temp_v1;
    u8 var_a1;
    void *temp_a0;

    temp_v1 = *(D_8011F2FC + ((arg1 & 0xFFFF) * 0x64));
    if ((s32) temp_v1 < 0xB4) {
        if ((s32) temp_v1 < 0xA0) {
            if ((s32) temp_v1 < 0x8C) {
                var_t0 = 0xC8;
                if ((s32) temp_v1 < 0x78) {
                    var_t0 = 0xFF;
                    if ((s32) temp_v1 >= 0) {
                        var_a3 = 0xFF;
                        var_a2 = 0xFF;
                        goto block_17;
                    }
                    goto block_16;
                }
                var_a3 = 0xC8;
                var_a2 = 0xC8;
                goto block_17;
            }
            var_t0 = 0xA0;
            var_a3 = 0xA0;
            var_a2 = 0xA0;
            goto block_17;
        }
        var_t0 = 0x50;
        var_a3 = 0x50;
        var_a2 = 0x50;
        goto block_17;
    }
    if ((s32) temp_v1 < 0xDC) {
        var_t0 = 0x80;
        if ((s32) temp_v1 < 0xC8) {
            var_t0 = 0;
        }
        goto block_15;
    }
    var_t0 = 0xFF;
    if ((s32) temp_v1 < 0x100) {
block_15:
        var_a3 = 0;
        var_a2 = 0;
block_17:
        var_a1 = *(D_8011F2FC + ((arg1 & 0xFFFF) * 0x64));
        if (!(D_8006FB1C & 1)) {
            var_a2 = 0xFF;
            var_a3 = 0xFF;
            var_a1 += 0x64;
            var_t0 = 0xFF;
            if (var_a1 >= 0x100U) {
                var_a1 = 0xFF;
            }
        }
        temp_a0 = *arg0;
        *arg0 = temp_a0 + 8;
        M2C_FIELD(temp_a0, s32 *, 0) = 0xFA000000;
        M2C_FIELD(temp_a0, s32 *, 4) = (s32) ((var_t0 << 0x18) | (var_a3 << 0x10) | (var_a2 << 8) | (var_a1 & 0xFF));
        return;
    }
block_16:
    func_8003DE60(&D_801839E0);
}
