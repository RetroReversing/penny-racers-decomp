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

s32 func_80026D40();
s32 func_8003DE60();
extern char D_80046850[];
extern char D_800469A0[];
extern char D_80046B14[];
extern char D_80049ED4[];
extern char D_80049EEC[];
extern char D_80049F08[];
extern char D_80049F1C[];
extern char D_80049F44[];
extern char D_80049F6C[];
extern char D_80049F94[];
extern char D_80049FBC[];
extern char D_80049FE4[];
extern char D_8004A00C[];
extern char D_8004A034[];
extern char D_8004A05C[];
extern char D_8004A084[];
extern char D_8004A0A8[];
extern char D_8004A0D0[];
extern char D_8004A0F8[];
extern char D_8004A120[];
extern char D_8004A148[];
extern char D_8004A160[];
extern char D_8004A178[];
extern char D_8004A190[];
extern char D_8004A1A8[];
extern char D_8004A1C0[];
extern char D_8004A1D8[];
extern char D_8004A1F0[];

void func_800268C0(void *arg0) {
    func_8003DE60(&D_80049ED4, M2C_FIELD(arg0, s32 *, 0x14));
    func_8003DE60(&D_80049EEC, M2C_FIELD(arg0, s32 *, 0x11C));
    func_80026D40(M2C_FIELD(arg0, s32 *, 0x120), "cause", &D_80046850);
    func_80026D40(M2C_FIELD(arg0, s32 *, 0x118), "sr", &D_800469A0);
    func_8003DE60(&D_80049F08, M2C_FIELD(arg0, s32 *, 0x124));
    func_8003DE60(&D_80049F1C, M2C_FIELD(arg0, s32 *, 0x28), M2C_FIELD(arg0, s32 *, 0x2C), M2C_FIELD(arg0, s32 *, 0x30), M2C_FIELD(arg0, s32 *, 0x34));
    func_8003DE60(&D_80049F44, M2C_FIELD(arg0, s32 *, 0x40), M2C_FIELD(arg0, s32 *, 0x44), M2C_FIELD(arg0, s32 *, 0x48), M2C_FIELD(arg0, s32 *, 0x4C));
    func_8003DE60(&D_80049F6C, M2C_FIELD(arg0, s32 *, 0x58), M2C_FIELD(arg0, s32 *, 0x5C), M2C_FIELD(arg0, s32 *, 0x60), M2C_FIELD(arg0, s32 *, 0x64));
    func_8003DE60(&D_80049F94, M2C_FIELD(arg0, s32 *, 0x70), M2C_FIELD(arg0, s32 *, 0x74), M2C_FIELD(arg0, s32 *, 0x78), M2C_FIELD(arg0, s32 *, 0x7C));
    func_8003DE60(&D_80049FBC, M2C_FIELD(arg0, s32 *, 0x88), M2C_FIELD(arg0, s32 *, 0x8C), M2C_FIELD(arg0, s32 *, 0x90), M2C_FIELD(arg0, s32 *, 0x94));
    func_8003DE60(&D_80049FE4, M2C_FIELD(arg0, s32 *, 0xA0), M2C_FIELD(arg0, s32 *, 0xA4), M2C_FIELD(arg0, s32 *, 0xA8), M2C_FIELD(arg0, s32 *, 0xAC));
    func_8003DE60(&D_8004A00C, M2C_FIELD(arg0, s32 *, 0xB8), M2C_FIELD(arg0, s32 *, 0xBC), M2C_FIELD(arg0, s32 *, 0xC0), M2C_FIELD(arg0, s32 *, 0xC4));
    func_8003DE60(&D_8004A034, M2C_FIELD(arg0, s32 *, 0xD0), M2C_FIELD(arg0, s32 *, 0xD4), M2C_FIELD(arg0, s32 *, 0xD8), M2C_FIELD(arg0, s32 *, 0xDC));
    func_8003DE60(&D_8004A05C, M2C_FIELD(arg0, s32 *, 0xE8), M2C_FIELD(arg0, s32 *, 0xEC), M2C_FIELD(arg0, s32 *, 0xF0), M2C_FIELD(arg0, s32 *, 0xF4));
    func_8003DE60(&D_8004A084, M2C_FIELD(arg0, s32 *, 0x100), M2C_FIELD(arg0, s32 *, 0x104));
    func_80026D40(M2C_FIELD(arg0, s32 *, 0x12C), "fpcsr", &D_80046B14);
    func_8003DE60(&D_8004A0A8, M2C_BITWISE(s32, (f64) M2C_FIELD(arg0, f32 *, 0x13C)), M2C_BITWISE(s32, (f64) M2C_FIELD(arg0, f32 *, 0x144)), M2C_BITWISE(s32, (f64) M2C_FIELD(arg0, f32 *, 0x14C)));
    func_8003DE60(&D_8004A0D0, M2C_BITWISE(s32, (f64) M2C_FIELD(arg0, f32 *, 0x15C)), M2C_BITWISE(s32, (f64) M2C_FIELD(arg0, f32 *, 0x164)), M2C_BITWISE(s32, (f64) M2C_FIELD(arg0, f32 *, 0x16C)));
    func_8003DE60(&D_8004A0F8, M2C_BITWISE(s32, (f64) M2C_FIELD(arg0, f32 *, 0x17C)), M2C_BITWISE(s32, (f64) M2C_FIELD(arg0, f32 *, 0x184)), M2C_BITWISE(s32, (f64) M2C_FIELD(arg0, f32 *, 0x18C)));
    func_8003DE60(&D_8004A120, M2C_BITWISE(s32, (f64) M2C_FIELD(arg0, f32 *, 0x19C)), M2C_BITWISE(s32, (f64) M2C_FIELD(arg0, f32 *, 0x1A4)), M2C_BITWISE(s32, (f64) M2C_FIELD(arg0, f32 *, 0x1AC)));
    func_8003DE60(&D_8004A148, (s32) M2C_FIELD(arg0, f64 *, 0x138));
    func_8003DE60(&D_8004A160, (s32) M2C_FIELD(arg0, f64 *, 0x148));
    func_8003DE60(&D_8004A178, (s32) M2C_FIELD(arg0, f64 *, 0x158));
    func_8003DE60(&D_8004A190, (s32) M2C_FIELD(arg0, f64 *, 0x168));
    func_8003DE60(&D_8004A1A8, (s32) M2C_FIELD(arg0, f64 *, 0x178));
    func_8003DE60(&D_8004A1C0, (s32) M2C_FIELD(arg0, f64 *, 0x188));
    func_8003DE60(&D_8004A1D8, (s32) M2C_FIELD(arg0, f64 *, 0x198));
    func_8003DE60(&D_8004A1F0, (s32) M2C_FIELD(arg0, f64 *, 0x1A8));
}
