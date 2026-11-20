static __inline__ s8 __repair_inline(s8 a) { return a; }
extern unsigned char D_8021EEC0;
extern int D_8021EFA0;
extern float D_8021EECC;
extern unsigned char D_8021EEC3;
/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

s32 func_800DE41C(s32, s32, s32, s32, s32, s32, s32, void *, s32, f32, s32, s32, s32, s32, s32, f32, s32, s32);
s32 func_8014A870();
s32 func_8014B854();
s32 func_80211C08();
extern f64 D_8021DDC0;
extern f64 D_8021DDC8;
extern s8 D_8021E15F;
extern char D_8021E231[];
extern char D_8021F036[];
extern s32 func_80211A84;

void func_802117AC(void) {
    u32 var_v0_2;
    unsigned char *__base_D_8021EEC0;
    s32 var_s0;
    register s32 temp_a0;
    int *__base_D_8021EFA0;
    register u32 var_v0;
    unsigned int var_v1;
    s32 var_v0_3;

    
    __base_D_8021EFA0 = &(s32)D_8021EFA0;
    if (!((*__base_D_8021EFA0) & 0x2000)) {
        var_s0 = func_8014A870(0x14, 3, (u32)D_8021E15F);
    } else { var_s0=0; }
    if (var_s0 & 4) {
        __base_D_8021EEC0 = &D_8021EEC0;
        if ((*__base_D_8021EEC0) != 0) {
            (*__base_D_8021EFA0) = (s32) ((*(&D_8021EFA0)) | 0x2000);
            func_8014B854(0x3B);
            (*__base_D_8021EEC0) = (u8) ((*__base_D_8021EEC0) - 1);
            func_800DE41C(0, 0, 3, 0, 0x50, 0, 0, &func_80211A84, 0, (f32) ((f64) D_8021EECC - D_8021DDC0), 0, 0, 0, 0, 0, -0.5f, 0, 0);
        }
    }
    var_v0 = var_s0 & 8;
    if ((var_v0 != 0) && ((*__base_D_8021EEC0) != (D_8021EEC3 - 1))) {
        (*__base_D_8021EFA0) = (s32) ((*__base_D_8021EFA0) | 0x2000);
        func_800DE41C(0, 0, 3, 0, 0x50, 0, 0, &func_80211A84, 0, (f32) ((f64) D_8021EECC + D_8021DDC8), 0, 0, 0, 0, 0, 0.5f, 0, 0);
        (*__base_D_8021EEC0) = (u8) ((*__base_D_8021EEC0) + 1);
        func_8014B854(0x3B);
    }
    do { temp_a0 = __repair_inline(*(D_8021E231 + ((D_8021E15F * 0x110) + (*__base_D_8021EEC0)))); } while (0);
    var_v0_2 = var_s0 & 2;
    if (var_s0 & 1) {
        *(D_8021F036 + temp_a0) = *(D_8021F036 + temp_a0) + 1;
        var_v0_2 = var_s0 & 2;
        if ((u8) *(D_8021F036 + temp_a0) >= 0xAU) {
            *(D_8021F036 + temp_a0) = 0;
        }
    }
    var_v1 = var_s0 & 3;
    if (var_v0_2 != 0) {
        *(D_8021F036 + temp_a0) = *(D_8021F036 + temp_a0) - 1;
        var_v1 = var_s0 & 3;
        if (*(D_8021F036 + temp_a0) == 0xFF) {
            *(D_8021F036 + temp_a0) = 9;
        }
    }
    if ((var_v1 != 0) & ((unsigned)temp_a0 != 0xD)) {
        func_8014B854(0x3C);
    }
    var_v0_3 = var_s0 & 0x10;
    if (var_v0_3 != 0) {
        (*__base_D_8021EFA0) &= 0xFFFF7FFF;
        func_8014B854(0x3B);
    }
    func_80211C08();
}
