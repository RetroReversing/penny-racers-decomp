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
M2C_UNK func_80127148(s32 *, M2C_UNK *, M2C_UNK *); /* extern */
extern M2C_UNK D_8012AB40;
extern M2C_UNK D_8012AB4C;
extern M2C_UNK D_8012AB58;
extern M2C_UNK D_8012AB64;
extern M2C_UNK D_8012AB7C;

s32 func_800E2020(void) {
    union {
        unsigned char bytes[184];
        struct { unsigned char pad[32]; s32 value; } view_sp20;
        struct { unsigned char pad[36]; s32 value; } view_sp24;
        struct { unsigned char pad[40]; s32 value; } view_sp28;
        struct { unsigned char pad[48]; s32 value; } view_sp30;
        struct { unsigned char pad[52]; s32 value; } view_sp34;
        struct { unsigned char pad[56]; s32 value; } view_sp38;
        struct { unsigned char pad[64]; s32 value; } view_sp40;
        struct { unsigned char pad[68]; s32 value; } view_sp44;
        struct { unsigned char pad[72]; s32 value; } view_sp48;
        struct { unsigned char pad[80]; s32 value; } view_sp50;
        struct { unsigned char pad[84]; s32 value; } view_sp54;
        struct { unsigned char pad[88]; s32 value; } view_sp58;
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
    } m2c_initial_frame;

             
             
             
             
             
             
             
             
    s32 var_v0;
    s8 temp_s0;
    s8 temp_v0;

    func_80127148(&m2c_initial_frame.view_sp20.value, &D_8012AB4C, &D_8012AB64);
    func_80127148(&m2c_initial_frame.view_sp30.value, &D_8012AB7C, &D_8012AB64);
    func_80127030(&m2c_initial_frame.view_sp80.value, m2c_initial_frame.view_sp20.value, m2c_initial_frame.view_sp24.value, m2c_initial_frame.view_sp28.value, m2c_initial_frame.view_sp30.value, m2c_initial_frame.view_sp34.value, m2c_initial_frame.view_sp38.value);
    func_80127148(&m2c_initial_frame.view_sp90.value, &D_8012AB58, &D_8012AB64);
    var_v0 = 0 & 0xFF;
    if (func_801270B0(m2c_initial_frame.view_sp90.value, m2c_initial_frame.view_sp94.value, m2c_initial_frame.view_sp98.value, m2c_initial_frame.view_sp80.value, m2c_initial_frame.view_sp84.value, m2c_initial_frame.view_sp88.value) == -1) {
        func_80127148(&m2c_initial_frame.view_sp90.value, &D_8012AB40, &D_8012AB64);
        var_v0 = 0 & 0xFF;
        if (func_801270B0(m2c_initial_frame.view_sp90.value, m2c_initial_frame.view_sp94.value, m2c_initial_frame.view_sp98.value, m2c_initial_frame.view_sp80.value, m2c_initial_frame.view_sp84.value, m2c_initial_frame.view_sp88.value) == 1) {
            func_80127148(&m2c_initial_frame.view_sp40.value, &D_8012AB58, &D_8012AB40);
            func_80127148(&m2c_initial_frame.view_sp50.value, &D_8012AB64, &D_8012AB40);
            func_80127148(&m2c_initial_frame.view_sp60.value, &D_8012AB4C, &D_8012AB40);
            func_80127148(&m2c_initial_frame.view_sp70.value, &D_8012AB7C, &D_8012AB40);
            func_80127030(&m2c_initial_frame.view_sp90.value, m2c_initial_frame.view_sp60.value, m2c_initial_frame.view_sp64.value, m2c_initial_frame.view_sp68.value, m2c_initial_frame.view_sp70.value, m2c_initial_frame.view_sp74.value, m2c_initial_frame.view_sp78.value);
            temp_s0 = func_801270B0(m2c_initial_frame.view_sp40.value, m2c_initial_frame.view_sp44.value, m2c_initial_frame.view_sp48.value, m2c_initial_frame.view_sp90.value, m2c_initial_frame.view_sp94.value, m2c_initial_frame.view_sp98.value);
            func_80127030(&m2c_initial_frame.view_sp90.value, m2c_initial_frame.view_sp50.value, m2c_initial_frame.view_sp54.value, m2c_initial_frame.view_sp58.value, m2c_initial_frame.view_sp60.value, m2c_initial_frame.view_sp64.value, m2c_initial_frame.view_sp68.value);
            temp_v0 = func_801270B0(m2c_initial_frame.view_sp40.value, m2c_initial_frame.view_sp44.value, m2c_initial_frame.view_sp48.value, m2c_initial_frame.view_sp90.value, m2c_initial_frame.view_sp94.value, m2c_initial_frame.view_sp98.value);
            var_v0 = 0 & 0xFF;
            if (temp_v0 == temp_s0) {
                func_80127030(&m2c_initial_frame.view_sp90.value, m2c_initial_frame.view_sp70.value, m2c_initial_frame.view_sp74.value, m2c_initial_frame.view_sp78.value, m2c_initial_frame.view_sp50.value, m2c_initial_frame.view_sp54.value, m2c_initial_frame.view_sp58.value);
                var_v0 = (temp_v0 == func_801270B0(m2c_initial_frame.view_sp40.value, m2c_initial_frame.view_sp44.value, m2c_initial_frame.view_sp48.value, m2c_initial_frame.view_sp90.value, m2c_initial_frame.view_sp94.value, m2c_initial_frame.view_sp98.value)) & 0xFF;
            }
        }
    }
    return var_v0;
}
