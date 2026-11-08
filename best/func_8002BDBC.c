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

s32 func_8002BF4C();
s32 func_8002BFDC();
s32 func_800382AC();
s32 func_800382CC();

void func_8002BDBC(void *arg0, void *arg1) {
    s32 temp_a0;
    s32 temp_s5;
    s32 temp_v1;
    s32 var_s2;
    void *temp_s1;
    void *temp_s1_2;
    void *var_s0;
    void *var_s0_2;
    void *var_s3;

    var_s2 = 0;
    var_s3 = NULL;
    if ((M2C_FIELD(arg1, u8 *, 8) == 0xFF) && (M2C_FIELD(arg1, u8 *, 9) == 0x51)) {
        temp_s5 = M2C_FIELD(arg0, s32 *, 0x24);
        func_8002BFDC(arg0, (f32) ((M2C_FIELD(arg1, u8 *, 0xB) << 0x10) | (M2C_FIELD(arg1, u8 *, 0xC) << 8) | M2C_FIELD(arg1, u8 *, 0xD)));
        var_s0 = M2C_FIELD(arg0, void **, 0x50);
        if (var_s0 != NULL) {
            do {
                temp_s1 = M2C_FIELD(var_s0, void **, 0);
                var_s2 += M2C_FIELD(var_s0, s32 *, 8);
                if (M2C_FIELD(var_s0, s16 *, 0xC) == 0x15) {/*__repair_call_balance*/if(var_s2){
                    func_800382CC(var_s0);}else{
                    func_800382CC(var_s0);}
                    if (var_s3 == NULL) {
                        var_s3 = var_s0;
                        M2C_FIELD(var_s0, void **, 0) = NULL;
                        M2C_FIELD(var_s0, s32 *, 4) = 0;
                    } else {
                        func_800382AC(var_s0);
                    }
                    temp_a0 = var_s2;
                    if (temp_s1 != NULL) {
                        temp_v1 = M2C_FIELD(var_s0, s32 *, 8);
                        var_s2 = temp_a0 - temp_v1;
                        M2C_FIELD(temp_s1, s32 *, 8) += temp_v1;
                    }
                    M2C_FIELD(var_s0, s32 *, 8) = temp_a0;
                }
                var_s0 = temp_s1;
            } while (var_s0 != NULL);
        }
        var_s0_2 = var_s3;
        if (var_s0_2 != NULL) {
            do {
                temp_s1_2 = M2C_FIELD(var_s0_2, void **, 0);
                M2C_FIELD(var_s0_2, s32 *, 8) = (s32) (((s32) M2C_FIELD(var_s0_2, s32 *, 8) / temp_s5) * M2C_FIELD(arg0, s32 *, 0x24));
                func_8002BF4C(arg0 + 0x48);
                var_s0_2 = temp_s1_2;
            } while (var_s0_2 != NULL);
        }
    }
}
