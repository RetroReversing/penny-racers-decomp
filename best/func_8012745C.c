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

M2C_UNK func_80127030(s32 *, s32, s32, s32, s32, s32, s32); /* extern */
s8 func_801270B0(s32, s32, s32, s32, s32, s32);     /* extern */
M2C_UNK func_80127148(s32 *, f32 *, f32 *);         /* extern */
extern f32 D_8012AB4C;
extern f32 D_8012AB58;
extern f32 D_8012AB64;
extern f32 D_8012AB7C;
extern f32 D_8012AB80;
extern f32 D_8012AB84;

u8 func_8012745C(void *arg0, f32 arg1) {
    union {
        unsigned char bytes[224];
        struct { unsigned char pad[32]; f32 value; } view_sp20;
        struct { unsigned char pad[36]; f32 value; } view_sp24;
        struct { unsigned char pad[40]; f32 value; } view_sp28;
        struct { unsigned char pad[48]; f32 value; } view_sp30;
        struct { unsigned char pad[52]; f32 value; } view_sp34;
        struct { unsigned char pad[56]; f32 value; } view_sp38;
        struct { unsigned char pad[64]; f32 value; } view_sp40;
        struct { unsigned char pad[68]; f32 value; } view_sp44;
        struct { unsigned char pad[72]; f32 value; } view_sp48;
        struct { unsigned char pad[80]; f32 value; } view_sp50;
        struct { unsigned char pad[84]; f32 value; } view_sp54;
        struct { unsigned char pad[88]; f32 value; } view_sp58;
        struct { unsigned char pad[96]; s32 value; } view_sp60;
        struct { unsigned char pad[100]; s32 value; } view_sp64;
        struct { unsigned char pad[104]; s32 value; } view_sp68;
        struct { unsigned char pad[112]; s32 value; } view_sp70;
        struct { unsigned char pad[116]; s32 value; } view_sp74;
        struct { unsigned char pad[120]; s32 value; } view_sp78;
        struct { unsigned char pad[128]; s32 value; } view_sp80;
        struct { unsigned char pad[132]; s32 value; } view_sp84;
        struct { unsigned char pad[136]; s32 value; } view_sp88;
        struct { unsigned char pad[144]; s32 value; } view_sp90;
        struct { unsigned char pad[148]; s32 value; } view_sp94;
        struct { unsigned char pad[152]; s32 value; } view_sp98;
        struct { unsigned char pad[160]; s32 value; } view_spA0;
        struct { unsigned char pad[164]; s32 value; } view_spA4;
        struct { unsigned char pad[168]; s32 value; } view_spA8;
        struct { unsigned char pad[183]; u8 value; } view_spB7;
    } m2c_initial_frame;

             
             
             
             
             
             
             
             
             
             
             
             
             
             
             
             
             
            
    f32 temp_ft0;
    f32 temp_ft1;
    f32 temp_fv1;
    s8 temp_v0;
    s8 temp_v0_2;

    m2c_initial_frame.view_spB7.value = 0;
    temp_ft0 = arg1 * M2C_FIELD(arg0, f32 *, 0);
    m2c_initial_frame.view_sp50.value = temp_ft0;
    temp_ft1 = arg1 * M2C_FIELD(arg0, f32 *, 4);
    m2c_initial_frame.view_sp54.value = temp_ft1;
    temp_fv1 = arg1 * M2C_FIELD(arg0, f32 *, 8);
    m2c_initial_frame.view_sp58.value = temp_fv1;
    m2c_initial_frame.view_sp20.value = M2C_FIELD(&D_8012AB64, f32 *, 0) + temp_ft0;
    m2c_initial_frame.view_sp24.value = M2C_FIELD(&D_8012AB64, f32 *, 4) + temp_ft1;
    m2c_initial_frame.view_sp28.value = M2C_FIELD(&D_8012AB64, f32 *, 8) + temp_fv1;
    m2c_initial_frame.view_sp30.value = M2C_FIELD(&D_8012AB4C, f32 *, 0) + temp_ft0;
    m2c_initial_frame.view_sp34.value = M2C_FIELD(&D_8012AB4C, f32 *, 4) + temp_ft1;
    m2c_initial_frame.view_sp38.value = M2C_FIELD(&D_8012AB4C, f32 *, 8) + temp_fv1;
    m2c_initial_frame.view_sp40.value = D_8012AB7C + temp_ft0;
    m2c_initial_frame.view_sp44.value = D_8012AB80 + temp_ft1;
    m2c_initial_frame.view_sp48.value = D_8012AB84 + temp_fv1;
    func_80127148(&m2c_initial_frame.view_sp60.value, &D_8012AB58, &m2c_initial_frame.view_sp20.value);
    func_80127148(&m2c_initial_frame.view_sp80.value, &m2c_initial_frame.view_sp30.value, &m2c_initial_frame.view_sp20.value);
    func_80127148(&m2c_initial_frame.view_sp90.value, &m2c_initial_frame.view_sp40.value, &m2c_initial_frame.view_sp20.value);
    func_80127030(&m2c_initial_frame.view_sp70.value, m2c_initial_frame.view_sp80.value, m2c_initial_frame.view_sp84.value, m2c_initial_frame.view_sp88.value, m2c_initial_frame.view_sp90.value, m2c_initial_frame.view_sp94.value, m2c_initial_frame.view_sp98.value);
    temp_v0 = func_801270B0(m2c_initial_frame.view_sp60.value, m2c_initial_frame.view_sp64.value, m2c_initial_frame.view_sp68.value, m2c_initial_frame.view_sp70.value, m2c_initial_frame.view_sp74.value, m2c_initial_frame.view_sp78.value);
    if (temp_v0 == -1) {
        func_80127148(&m2c_initial_frame.view_sp60.value, &D_8012AB58, &D_8012AB64);
        func_80127148(&m2c_initial_frame.view_sp80.value, &D_8012AB4C, &D_8012AB64);
        func_80127148(&m2c_initial_frame.view_spA0.value, &D_8012AB7C, &D_8012AB64);
        func_80127030(&m2c_initial_frame.view_sp70.value, m2c_initial_frame.view_sp80.value, m2c_initial_frame.view_sp84.value, m2c_initial_frame.view_sp88.value, m2c_initial_frame.view_spA0.value, m2c_initial_frame.view_spA4.value, m2c_initial_frame.view_spA8.value);
        if (func_801270B0(m2c_initial_frame.view_sp60.value, m2c_initial_frame.view_sp64.value, m2c_initial_frame.view_sp68.value, m2c_initial_frame.view_sp70.value, m2c_initial_frame.view_sp74.value, m2c_initial_frame.view_sp78.value) == 1) {
            func_80127148(&m2c_initial_frame.view_sp60.value, &D_8012AB58, &m2c_initial_frame.view_sp20.value);
            func_80127148(&m2c_initial_frame.view_sp80.value, &D_8012AB64, &m2c_initial_frame.view_sp20.value);
            func_80127148(&m2c_initial_frame.view_sp90.value, &m2c_initial_frame.view_sp30.value, &m2c_initial_frame.view_sp20.value);
            func_80127030(&m2c_initial_frame.view_sp70.value, m2c_initial_frame.view_sp80.value, m2c_initial_frame.view_sp84.value, m2c_initial_frame.view_sp88.value, m2c_initial_frame.view_sp90.value, m2c_initial_frame.view_sp94.value, m2c_initial_frame.view_sp98.value);
            temp_v0_2 = func_801270B0(m2c_initial_frame.view_sp60.value, m2c_initial_frame.view_sp64.value, m2c_initial_frame.view_sp68.value, m2c_initial_frame.view_sp70.value, m2c_initial_frame.view_sp74.value, m2c_initial_frame.view_sp78.value);
            if (temp_v0_2 == temp_v0) {
                func_80127148(&m2c_initial_frame.view_sp60.value, &D_8012AB58, &m2c_initial_frame.view_sp30.value);
                func_80127148(&m2c_initial_frame.view_sp80.value, &D_8012AB4C, &m2c_initial_frame.view_sp30.value);
                func_80127148(&m2c_initial_frame.view_sp90.value, &m2c_initial_frame.view_sp40.value, &m2c_initial_frame.view_sp30.value);
                func_80127030(&m2c_initial_frame.view_sp70.value, m2c_initial_frame.view_sp80.value, m2c_initial_frame.view_sp84.value, m2c_initial_frame.view_sp88.value, m2c_initial_frame.view_sp90.value, m2c_initial_frame.view_sp94.value, m2c_initial_frame.view_sp98.value);
                if (func_801270B0(m2c_initial_frame.view_sp60.value, m2c_initial_frame.view_sp64.value, m2c_initial_frame.view_sp68.value, m2c_initial_frame.view_sp70.value, m2c_initial_frame.view_sp74.value, m2c_initial_frame.view_sp78.value) == temp_v0_2) {
                    func_80127148(&m2c_initial_frame.view_sp60.value, &D_8012AB58, &m2c_initial_frame.view_sp40.value);
                    func_80127148(&m2c_initial_frame.view_sp80.value, &D_8012AB7C, &m2c_initial_frame.view_sp40.value);
                    func_80127148(&m2c_initial_frame.view_sp90.value, &m2c_initial_frame.view_sp20.value, &m2c_initial_frame.view_sp40.value);
                    func_80127030(&m2c_initial_frame.view_sp70.value, m2c_initial_frame.view_sp80.value, m2c_initial_frame.view_sp84.value, m2c_initial_frame.view_sp88.value, m2c_initial_frame.view_sp90.value, m2c_initial_frame.view_sp94.value, m2c_initial_frame.view_sp98.value);
                    m2c_initial_frame.view_spB7.value = ~func_801270B0(m2c_initial_frame.view_sp60.value, m2c_initial_frame.view_sp64.value, m2c_initial_frame.view_sp68.value, m2c_initial_frame.view_sp70.value, m2c_initial_frame.view_sp74.value, m2c_initial_frame.view_sp78.value) == 0;
                }
            }
        }
    }
    return m2c_initial_frame.view_spB7.value;
}
