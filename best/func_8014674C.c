s32 func_8014A870(s32, s32, u8);
void func_8014B854(s32, ...);
extern u8 D_8011F2F0;
extern u8 D_80189B36;
extern u8 D_80189C9A;
extern u8 D_80189CC6;
extern u8 D_8018A276;
extern u8 D_8018A277;

void func_8014674C(u32 arg0) {
    u8 *temp_a0;
    u8 *s0;
    u8 *a1;
    u8 temp_a2;
    s32 var_s1;
    s32 var_s2;
    s32 var_a0;
    u16 temp_v1;

    var_s2 = 0;
    temp_a0 = (u8 *)&D_8011F2F0 + (arg0 & 0xFFFF) * 0x64;
    var_s1 = 0;
    s0 = &D_80189CC6;
    if (*(u16 *)s0 & 0x800) {
        var_s1 = func_8014A870(0x14, 3, s0[-8]);
        if (var_s1 & 1) {
            if (s0[-0x2C] != 0) {
                var_s2 = 1;
                s0[-0x2C]--;
            }
        }
        if (var_s1 & 2) {
            a1 = &D_80189C9A;
            if (*a1 != D_8018A276 - 1) {
                var_s2 = 1;
                (*a1)++;
            }
        }
    } else {
        temp_v1 = *(u16 *)(temp_a0 + 0x3E);
        if (temp_v1 == 1) {
            temp_a2 = *temp_a0 + 1;
            *temp_a0 = temp_a2;
            a1 = &D_80189C9A;
            if (*a1 != a1[2]) {
                if (!(temp_a2 & 0xF)) {
                    var_s2 = 1;
                    (*a1)++;
                }
            } else {
                do {*temp_a0 = 0;}while(0);
                *(u16 *)(temp_a0 + 0x3E) = 2;
            }
        } else if (temp_v1 < 2) {
            if (temp_v1 == 0) {
                (*temp_a0)++;
                if (*temp_a0 >= 0x15) {
                    *temp_a0 = 0;
                    *(u16 *)(temp_a0 + 0x3E) = 1;
                }
            }
        } else if (temp_v1 == 2) {
            (*temp_a0)++;
            if (*temp_a0 >= 0x1F) {
                var_s1 |= 0x10;
            }
        }
    }
    if (var_s2 & 0xFF) {
        func_8014B854(0x3B);
    }
    if (var_s1 & 0x10) {
        var_a0 = 0x3E;
        if (!(*(&D_8018A277 + D_80189C9A) & 0x10)) {
            var_a0 = 0x3D;
            D_80189B36 &= 0xEF;
            *(s16 *)(&D_80189C9A - 2) = 0x30;
        }
        func_8014B854(var_a0, &D_80189C9A);
    }
}
