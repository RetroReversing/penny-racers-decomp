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

M2C_UNK func_8012AD20(u16, void *, u8, u8);         /* extern */
extern M2C_UNK D_800DA260;
extern M2C_UNK D_8011F2F0;
extern M2C_UNK D_8011F304;
extern M2C_UNK D_80238D24;
extern M2C_UNK D_80238D30;
extern M2C_UNK D_80238D34;
extern M2C_UNK D_80238D38;
extern M2C_UNK D_80238D3C;
extern M2C_UNK D_80238D40;
extern M2C_UNK D_80238D44;

void func_8013DE3C(void *arg0) {
    s32 temp_v0;
    s32 temp_v1_2;
    s32 var_a2;
    void *temp_a0;
    void *temp_v1;

    temp_v1 = (M2C_FIELD(arg0, u16 *, 4) * 0x178) + &D_800DA260;
    M2C_FIELD(temp_v1, u16 *, 0) = 6U;
    M2C_FIELD(temp_v1, s8 *, 0x170) = 0;
    func_8012AD20(*(&D_8011F304 + (M2C_FIELD(arg0, u16 *, 2) * 0x64)), arg0 + 0x210, M2C_FIELD(temp_v1, u8 *, 1), M2C_FIELD((temp_v1 + M2C_FIELD(temp_v1, u16 *, 0)), u8 *, 0x16A));
    var_a2 = 1;
    __repair_rows: {
        temp_v1_2 = var_a2 & 0xFFFF;
        temp_a0 = ((M2C_FIELD(arg0, u16 *, 2) + temp_v1_2) * 0x64) + &D_8011F2F0;
        temp_v0 = temp_v1_2 * 0x34;
        M2C_FIELD(M2C_FIELD(temp_a0, void **, 0x50), s32 *, 4) = (s32) *(&D_80238D24 + temp_v0);
        M2C_FIELD(temp_a0, f32 *, 0x18) = (f32) *(&D_80238D30 + temp_v0);
        M2C_FIELD(temp_a0, f32 *, 0x1C) = (f32) *(&D_80238D34 + temp_v0);
        M2C_FIELD(temp_a0, f32 *, 0x20) = (f32) *(&D_80238D38 + temp_v0);
        M2C_FIELD(temp_a0, f32 *, 0x24) = (f32) *(&D_80238D3C + temp_v0);
        M2C_FIELD(temp_a0, f32 *, 0x28) = (f32) *(&D_80238D40 + temp_v0);
        var_a2 += 1;
        M2C_FIELD(temp_a0, f32 *, 0x2C) = (f32) *(&D_80238D44 + temp_v0);
    }
if ((u32) (var_a2 & 0xFFFF) < 8U) goto __repair_rows;
}
