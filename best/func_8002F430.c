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

void *func_8002DB60();                              /* extern */
void *func_8002F930(void *, void *, s16, void *);   /* extern */
void *func_8002FB40(void *, u32, s16, M2C_UNK, void *); /* extern */
void *func_8002FC68(void *, u32, s16, void *);      /* extern */
void *func_8002FD80(s32, s16, void *);              /* extern */
extern void *D_80046DF4;

void *func_8002F430(void) {
    s16 temp_v0_3;
    s16 temp_v0_4;
    s16 temp_v0_5;
    s16 temp_v0_6;
    s16 temp_v1;
    s16 var_s4;
    s16 var_s5;
    s16 var_s7;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 var_s0;
    s32 var_v1;
    u32 temp_a0;
    u32 temp_s3;
    u32 temp_s6;
    u32 temp_v0_8;
    void *temp_s1;
    void *temp_t0;
    void *temp_s2;
    
    
    void *var_t0;
    void *temp_v0_7;

    var_s5 = 0;
    var_s4 = 0x170;
    temp_s2 = M2C_FIELD(M2C_FIELD(D_80046DF4, void **, 0x40), void **, 0x20);
    var_s7 = 0;
    temp_s1 = func_8002DB60();
    temp_t0 = temp_s1 + 8;
    M2C_FIELD(temp_s1, s32 *, 0) = 0x0C00DA83;
    M2C_FIELD(temp_s1, s32 *, 4) = 0x07C007C0;
    M2C_FIELD(temp_s1, s32 *, 8) = 0x0C005A82;
    M2C_FIELD(temp_t0, s32 *, 4) = 0x093007C0;
    temp_s1 = func_8002FC68(temp_s2, M2C_FIELD(temp_s2, u32 *, 0x18), 0x7C0, temp_t0 + 8);
    M2C_FIELD(temp_s1, s32 *, 0) = 0x02000930;
    M2C_FIELD(temp_s1, s32 *, 4) = 0x170;
    var_s0 = 0;
    var_t0 = temp_s1 + 8;
    if ((s32) M2C_FIELD(temp_s2, u8 *, 0x24) > 0) {
        var_v1 = 0 << 0x10;
        __repair_rows: {
            temp_s1 = M2C_FIELD(temp_s2, s32 *, 0x20) + ((var_v1 >> 0x10) * 0x28);
            temp_a0 = M2C_FIELD(temp_s2, u32 *, 0x18);
            temp_s3 = temp_a0 - (M2C_FIELD(temp_s1, s32 *, 0) * 2);
            temp_s6 = temp_a0 - (M2C_FIELD(temp_s1, s32 *, 4) * 2);
            if (temp_s3 == var_s0) {
                temp_v0_4 = var_s4;
                var_s4 = var_s5;
                var_s5 = temp_v0_4;
            } else {
                var_t0 = func_8002FB40(temp_s2, temp_s3, var_s5, 0xB8, var_t0);
            }
            temp_v1 = M2C_FIELD(temp_s1, s16 *, 8);
            var_t0 = func_8002F930(temp_s2, temp_s1, var_s4, var_t0);
            if (temp_v1 != 0) {
                M2C_FIELD(var_t0, s32 *, 0) = (s32) ((temp_v1 & 0xFFFF) | 0x0C000000);
                M2C_FIELD(var_t0, s32 *, 4) = (s32) ((var_s5 << 0x10) | (var_s4 & 0xFFFF));
                var_t0 += 8;
                if ((M2C_FIELD(temp_s1, s32 *, 0x24) == 0) && (M2C_FIELD(temp_s1, s32 *, 0x20) == 0)) {
                    var_t0 = func_8002FC68(temp_s2, temp_s6, var_s4, var_t0);
                }
            }
            temp_v0_5 = M2C_FIELD(temp_s1, s16 *, 0xA);
            if (temp_v0_5 != 0) {
                M2C_FIELD(var_t0, s32 *, 0) = (s32) ((temp_v0_5 & 0xFFFF) | 0x0C000000);
                M2C_FIELD(var_t0, s32 *, 4) = (s32) ((var_s4 << 0x10) | (var_s5 & 0xFFFF));
                var_t0 = func_8002FC68(temp_s2, temp_s3, var_s5, var_t0 + 8);
            }
            temp_a0_2 = M2C_FIELD(temp_s1, s32 *, 0x20);
            if (temp_a0_2 != 0) {
                var_t0 = func_8002FD80(temp_a0_2, var_s4, var_t0);
            }
            if (M2C_FIELD(temp_s1, s32 *, 0x24) == 0) {
                var_t0 = func_8002FC68(temp_s2, temp_s6, var_s4, var_t0);
            }
            temp_v0_6 = M2C_FIELD(temp_s1, s16 *, 0xC);
            if (temp_v0_6 != 0) {
                temp_v0_7 = var_t0;
                var_t0 += 8;
                M2C_FIELD(temp_v0_7, s32 *, 0) = (s32) ((temp_v0_6 & 0xFFFF) | 0x0C000000);
                M2C_FIELD(temp_v0_7, s32 *, 4) = (s32) ((var_s4 << 0x10) | 0x930);
            }
            temp_v0_3 = var_s7 + 1;
            var_s7 = temp_v0_3;
            var_s0 = M2C_FIELD(temp_s2, u32 *, 0x18) + (M2C_FIELD(temp_s1, s32 *, 4) * 2);
            var_v1 = var_s7 << 0x10;
        }
if (temp_v0_3 < (s32) M2C_FIELD(temp_s2, u8 *, 0x24)) goto __repair_rows;
    }
    temp_v0_8 = M2C_FIELD(temp_s2, u32 *, 0x18) + 0x170;
    temp_a0_3 = M2C_FIELD(temp_s2, s32 *, 0x1C) * 2;
    M2C_FIELD(temp_s2, u32 *, 0x18) = temp_v0_8;
    if ((u32) (M2C_FIELD(temp_s2, s32 *, 0x14) + temp_a0_3) < temp_v0_8) {
        M2C_FIELD(temp_s2, u32 *, 0x18) = (u32) (temp_v0_8 - temp_a0_3);
    }
    M2C_FIELD(var_t0, s32 *, 0) = 0x0A000930;
    M2C_FIELD(var_t0, s32 *, 4) = 0x07C00170;
    return var_t0 + 8;
}
