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

M2C_UNK func_80129C1C(u8 *, f32, f32, f32, s32, f32, s32); /* extern */
extern M2C_UNK D_8011F2F0;

void func_80140A38(s32 arg0) {
    union {
        unsigned char bytes[120];
        struct { unsigned char pad[32]; u8 value; } view_sp20;
        struct { unsigned char pad[33]; u8 value; } view_sp21;
        struct { unsigned char pad[36]; u16 value; } view_sp24;
        struct { unsigned char pad[44]; f32 value; } view_sp2C;
    } m2c_initial_frame;

            
             
    f32 temp_fv0;
    f32 temp_fv1;
    s32 var_v1;
    void *temp_s0;
    void *temp_s1;

    temp_s1 = ((arg0 & 0xFFFF) * 0x64) + &D_8011F2F0;
    temp_fv1 = M2C_FIELD(temp_s1, f32 *, 0x44);
    if (temp_fv1 >= 2.1474836e9f) {
        var_v1 = ((s32) (temp_fv1 - 2.1474836e9f) | 0x80000000) & 0xFFFF;
    } else {
        var_v1 = (s32) temp_fv1 & 0xFFFF;
    }
    temp_s0 = (var_v1 * 0x64) + &D_8011F2F0;
    m2c_initial_frame.view_sp24.value = M2C_FIELD(M2C_FIELD(temp_s0, void **, 0x60), u16 *, 0x20);
    func_80129C1C(&m2c_initial_frame.view_sp20.value, M2C_FIELD(temp_s0, f32 *, 0x18), M2C_FIELD(temp_s0, f32 *, 0x1C), M2C_FIELD(temp_s0, f32 *, 0x20), 0, -240.0f, 0);
    M2C_FIELD(temp_s1, f32 *, 0x18) = (f32) (M2C_FIELD(temp_s0, f32 *, 0x18) + 0.5f);
    M2C_FIELD(temp_s1, f32 *, 0x20) = (f32) (M2C_FIELD(temp_s0, f32 *, 0x20) - 0.5f);
    if (m2c_initial_frame.view_sp21.value != 0) {
        M2C_FIELD(temp_s1, f32 *, 0x1C) = m2c_initial_frame.view_sp2C.value;
        temp_fv0 = ((240.0f - (M2C_FIELD(temp_s0, f32 *, 0x1C) - m2c_initial_frame.view_sp2C.value)) / 240.0f) * 0.5f;
        M2C_FIELD(temp_s1, f32 *, 0x38) = temp_fv0;
        M2C_FIELD(temp_s1, f32 *, 0x30) = temp_fv0;
        if (m2c_initial_frame.view_sp20.value == 0x13) {
            M2C_FIELD(temp_s1, f32 *, 0x2C) = 0.0f;
            M2C_FIELD(temp_s1, f32 *, 0x24) = 0.0f;
            return;
        }
        M2C_FIELD(temp_s1, f32 *, 0x24) = -12.0f;
        M2C_FIELD(temp_s1, f32 *, 0x2C) = 12.0f;
        return;
    }
    M2C_FIELD(temp_s1, f32 *, 0x1C) = (f32) M2C_FIELD(temp_s0, f32 *, 0x1C);
    M2C_FIELD(temp_s1, f32 *, 0x38) = 0.2f;
    M2C_FIELD(temp_s1, f32 *, 0x30) = 0.2f;
}
