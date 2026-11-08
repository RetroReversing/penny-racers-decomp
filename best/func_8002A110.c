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

M2C_UNK func_80033E30(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_80033F60(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_8003A590(M2C_UNK *);                   /* extern */
M2C_UNK func_8003A610(M2C_UNK *);                   /* extern */
M2C_UNK func_8003A630(M2C_UNK *);                   /* extern */
M2C_UNK func_8003A6B8(M2C_UNK *);                   /* extern */
extern M2C_UNK (*D_80046DA0)(s16);
extern M2C_UNK D_8006F970;
extern s32 D_8006F9D4;
extern M2C_UNK D_8006F9D8;
extern M2C_UNK D_8006FE40;
extern M2C_UNK D_800DE058;
extern M2C_UNK D_800DE2C8;

s32 func_8002A110(void *arg0) {
    M2C_UNK *temp_s0;
    M2C_UNK *var_a0;
    s16 temp_v1;

    temp_v1 = M2C_FIELD(arg0, s16 *, 0);
    if (temp_v1 != 0x1000) {
        if (temp_v1 < 0x1001) {
            if (temp_v1 != 1) {
                return 0;
            }
            if (D_8006F9D4 == 0) {
                func_80033E30(&D_8006F970, 0, 0);
                func_8003A630(&D_800DE058);
                func_80033E30(&D_800DE058, 0, 1);
                if (!(D_8006F9D4 & 1)) {
                    func_80033F60(&D_800DE2C8, 0, 1);
                    func_8003A6B8(&D_8006FE40);
                    func_80033E30(&D_800DE2C8, 0, 1);
                }
                if (D_80046DA0 != NULL) {
                    D_80046DA0(M2C_FIELD(arg0, s16 *, 0));
                }
                func_80033F60(&D_8006F970, 0, 0);
                return 0;
            }
            /* Duplicate return node #21. Try simplifying control flow for better match */
            return 1;
        }
        switch (temp_v1) {                          /* irregular */
        case 0x1001:
            func_80033E30(&D_8006F970, 0, 0);
            func_8003A630(&D_800DE058);
            func_80033E30(&D_800DE058, 0, 1);
            func_80033F60(&D_800DE2C8, 0, 1);
            func_8003A6B8(&D_8006FE40);
            func_80033E30(&D_800DE2C8, 0, 1);
            if (D_80046DA0 == NULL) {
                var_a0 = &D_8006F970;
            } else {
                D_80046DA0(M2C_FIELD(arg0, s16 *, 0));
                var_a0 = &D_8006F970;
            }
            goto block_20;
        case 0x1002:
            func_8003A590(&D_800DE058);
            func_80033E30(&D_800DE058, 0, 1);
            func_8003A610(&D_8006F9D8);
            goto block_19;
        default:
            return 0;
        }
    } else {
        temp_s0 = M2C_FIELD(arg0, M2C_UNK **, 8);
        func_8003A630(&D_800DE058);
        func_80033E30(&D_800DE058, 0, 1);
        func_80033F60(&D_800DE2C8, 0, 1);
        func_8003A6B8(temp_s0);
        func_80033E30(&D_800DE2C8, 0, 1);
block_19:
        var_a0 = M2C_FIELD(arg0, M2C_UNK **, 4);
block_20:
        func_80033F60(var_a0, 0, 0);
        return 1;
    }
}
