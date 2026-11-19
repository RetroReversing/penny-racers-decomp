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

M2C_UNK func_80027AB0(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_80027DC0(M2C_UNK *);                   /* extern */
M2C_UNK func_80028030(M2C_UNK *);                   /* extern */
M2C_UNK func_8003DE60(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK nuAuStlMgrInit(M2C_UNK, M2C_UNK, M2C_UNK *); /* extern */
extern M2C_UNK D_801D7590;
extern M2C_UNK D_801D75AC;
extern M2C_UNK D_801D75B8;
extern M2C_UNK D_801D7AA0;
extern M2C_UNK D_801D7AC4;
extern M2C_UNK D_801D7AE8;
extern M2C_UNK func_80028070;

void func_801D59F0(void) {
    func_8003DE60(&D_801D7AA0, 0x2BD10, 0x2BD10);
    func_8003DE60(&D_801D7AC4, 0x40000, 0x40000);
    func_8003DE60(&D_801D7AE8, 0x80375000, 0x40000);
    nuAuStlMgrInit(0x80375000, 0x40000, &D_801D75B8);
    func_80027AB0(&D_801D7590, 0x8000, 0);
    func_80027DC0(&D_801D75AC);
    func_80028030(&func_80028070);
}
