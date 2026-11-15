s32 func_801E435C(s32, s32);
extern u8 D_8021B079;
extern u16 D_8021E1AC;

void func_80207DC8(void) {
    s32 var_s0;
    u8 var_s1;
    s32 var_s2;
    s32 nine;
    u16 *cnt;
    u16 *p;

    D_8021E1AC = 0;
    var_s2 = 0;
    nine = 9;
    cnt = &D_8021E1AC;
    var_s1 = 0;
    do {
        var_s0 = 0;
        do {
            if ((u32) (func_801E435C((u8) var_s0, (u8) var_s2) & 0xFF) < 4U) {
                var_s1 += 1;
            }
            var_s0 += 1;
        } while ((u32) (var_s0 & 0xFF) < 9U);
        var_s2 += 1;
        if ((var_s1 & 0xFF) == nine) {
            *cnt += 1;
        }
        var_s1 = 0;
    } while ((u32) (var_s2 & 0xFF) < 4U);
    p = &D_8021E1AC;
    if ((s16) *p >= 4) {
        *p = 3;
    }
    if (D_8021B079 == 1) {
        D_8021E1AC = 3;
    }
}
