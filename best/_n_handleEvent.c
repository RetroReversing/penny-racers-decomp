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

s32 func_8002CC90();
s32 func_8002CD38();
s32 func_8002D164();
s32 func_8002FFD0();
s32 func_800301B0();
s32 func_80030250();
s32 func_800302E0();
s32 func_80030370();
s32 func_80030400();
s32 func_800304B0();
s32 func_80030630();
extern void *D_80046DF4;
extern f64 D_8004A368;

void _n_handleEvent(void *arg0) {
    u16 sp10;
    s16 sp12;
    s8 sp14;
    s16 sp18;
    void *sp1C;
    f32 temp_fs0;
    f32 temp_ft0;
    s16 temp_s1;
    s16 temp_s4;
    s16 temp_v1;
    s16 temp_v1_2;
    s16 temp_v1_3;
    s16 var_v1;
    s16 var_v1_2;
    s32 temp_a0_3;
    
    s32 temp_s5;
    s32 temp_v0;
    s32 temp_v0_2;
    u16 temp_a0_2;
    u8 temp_a0;
    u8 temp_a1;
    union { void * pointer; s32 value; } __repair_phase_storage;
    void *temp_s0;
    void *temp_s3;
    void *temp_v1_4;

    temp_s0 = M2C_FIELD(arg0, void **, 4);
    temp_v1 = M2C_FIELD(arg0, s16 *, 0);
    temp_s5 = M2C_FIELD(D_80046DF4, s32 *, 0xC);
    temp_s3 = M2C_FIELD(temp_s0, void **, 0x1C);
    switch (temp_v1) {
    case 0:
        if (((M2C_FIELD(temp_s0, s32 *, 0x28) != 0) | (temp_s3 == NULL)) == 0) {
            sp12 = 0;
            sp14 = 0;
            sp10 = M2C_FIELD(temp_s0, u16 *, 0x20);
            func_8002FFD0(temp_s0, &sp10);
            __repair_phase_storage.pointer = M2C_FIELD(temp_s3, void **, 0);
            temp_v1_2 = M2C_FIELD(temp_s3, u8 *, 0xC) + (M2C_FIELD(temp_s0, u8 *, 0x2E) + 0xFFC0);
            var_v1 = temp_v1_2 & ((s32) ~temp_v1_2 >> 0x1F);
            temp_s4 = (M2C_FIELD(__repair_phase_storage.pointer, u8 *, 0xC) * M2C_FIELD(temp_s0, s16 *, 0x2C)) / 127;
            if (var_v1 >= 0x80) {
                var_v1 = 0x7F;
            }
            temp_fs0 = M2C_FIELD(temp_s0, f32 *, 0x24);
            __repair_phase_storage.value = func_8002CD38(M2C_FIELD(__repair_phase_storage.pointer, s32 *, 0), temp_fs0, 0x81020409, __repair_phase_storage.pointer);
            func_800304B0(temp_s0, M2C_FIELD(temp_s3, s32 *, 8));
            M2C_FIELD(temp_s0, s32 *, 0x28) = 1;
            func_800302E0(temp_s0, var_v1 & 0xFF);
            func_80030400(temp_s0, temp_s4, __repair_phase_storage.value);
            func_80030370(temp_s0, temp_fs0);
            func_80030250(temp_s0, M2C_FIELD(temp_s0, u8 *, 0x2F));
            sp18 = 6;
            sp1C = temp_s0;
            func_8002D164(temp_s5 + 0x14, &sp18, func_8002CD38(M2C_FIELD(M2C_FIELD(temp_s3, void **, 0), s32 *, 0), M2C_FIELD(temp_s0, f32 *, 0x24)));
            return;
        }
    default:
        return;
    case 1:
        if (((M2C_FIELD(temp_s0, s32 *, 0x28) != 1) | (temp_s3 == NULL)) == 0) {
            temp_v0 = func_8002CD38(M2C_FIELD(M2C_FIELD(temp_s3, void **, 0), s32 *, 8), M2C_FIELD(temp_s0, f32 *, 0x24));
            func_80030400(temp_s0, 0, temp_v0);
            if (temp_v0 != 0) {
                sp18 = 7;
                sp1C = temp_s0;
                func_8002D164(temp_s5 + 0x14, &sp18, temp_v0);
                M2C_FIELD(temp_s0, s32 *, 0x28) = 2;
                return;
            }
        case 7:
            func_80030630(temp_s0);
            func_800301B0(temp_s0);
            func_8002CC90(temp_s5 + 0x14, temp_s0);
            M2C_FIELD(temp_s0, s32 *, 0x28) = 0;
        }
        break;
    case 2:
        temp_a0 = M2C_FIELD(arg0, u8 *, 8);
        M2C_FIELD(temp_s0, u8 *, 0x2E) = temp_a0;
        if ((M2C_FIELD(temp_s0, s32 *, 0x28) == 1) & (temp_s3 != NULL)) {
            temp_v1_3 = M2C_FIELD(temp_s3, u8 *, 0xC) + (temp_a0 + 0xFFC0);
            var_v1_2 = temp_v1_3 & ((s32) ~temp_v1_3 >> 0x1F);
            if (var_v1_2 >= 0x80) {
                var_v1_2 = 0x7F;
            }
            func_800302E0(temp_s0, var_v1_2 & 0xFF);
            return;
        }
        break;
    case 4:
        temp_ft0 = M2C_BITWISE(f32, M2C_FIELD(arg0, u8 *, 8));
        M2C_FIELD(temp_s0, f32 *, 0x24) = temp_ft0;
        if ((f64) temp_ft0 < D_8004A368) {
            M2C_FIELD(temp_s0, f32 *, 0x24) = 0.0001f;
        }
        if (M2C_FIELD(temp_s0, s32 *, 0x28) == 1) {
            func_80030370(temp_s0, M2C_FIELD(temp_s0, f32 *, 0x24));
            return;
        }
        break;
    case 8:
        temp_a1 = M2C_FIELD(arg0, u8 *, 8);
        M2C_FIELD(temp_s0, u8 *, 0x2F) = temp_a1;
        if (M2C_FIELD(temp_s0, s32 *, 0x28) == 1) {
            func_80030250(temp_s0, temp_a1);
            return;
        }
        break;
    case 3:
        temp_a0_2 = (u16) M2C_FIELD(arg0, u8 *, 8);
        M2C_FIELD(temp_s0, s16 *, 0x2C) = (s16) temp_a0_2;
        if ((M2C_FIELD(temp_s0, s32 *, 0x28) == 1) & (temp_s3 != NULL)) {
            func_80030400(temp_s0, (s16) ((M2C_FIELD(M2C_FIELD(temp_s3, void **, 0), u8 *, 0xD) * (s16) temp_a0_2) / 127), 0x3E8);
            return;
        }
        break;
    case 6:
        temp_v1_4 = M2C_FIELD(temp_s3, void **, 0);
        temp_a0_3 = M2C_FIELD(temp_v1_4, s32 *, 4);
        if (temp_a0_3 != -1) {
            temp_s1 = (M2C_FIELD(temp_v1_4, u8 *, 0xD) * M2C_FIELD(temp_s0, s16 *, 0x2C)) / 127;
            temp_v0 = func_8002CD38(temp_a0_3, M2C_FIELD(temp_s0, f32 *, 0x24));
            func_80030400(temp_s0, temp_s1, temp_v0);
            sp18 = 1;
            sp1C = temp_s0;
            func_8002D164(temp_s5 + 0x14, &sp18, temp_v0);
            return;
        }
        break;
    }
}
