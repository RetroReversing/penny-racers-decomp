typedef s32 M2C_UNK;
s32 func_8003DE60(M2C_UNK *, u8);
s32 func_8014A870(M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK func_801D651C(M2C_UNK, M2C_UNK);
M2C_UNK func_801E1EEC(M2C_UNK, M2C_UNK);
M2C_UNK func_802174DC(s32, u8, u8);
M2C_UNK func_80217600();
extern M2C_UNK D_8011F2F0;
extern M2C_UNK D_80190CA8;
extern s8 D_80190CAC;
extern M2C_UNK D_80190CB0;
extern s8 D_80190CB2;
extern M2C_UNK D_801C5E9F;
extern u8 D_801C5EA0;
extern u8 D_801C5EA2;
extern u8 D_801E9B34;
extern M2C_UNK D_8021DEB4;

void func_80216958(s32 arg0) {
    M2C_UNK *__base_D_801C5E9F;
    s8 *__base_D_80190CAC;
    M2C_UNK *__base_D_80190CA8;
    M2C_UNK * __base_D_80190CA8_arm;
    s32 var_s2;
s32 __repair_phase_var_s2;
    s32 var_v0;
    
    s32 var_v0_4;
    u16 var_v0_2;
    u8 *temp_s4;
    u8 temp_v1_2;
    void *temp_s0;
    u16 temp_v1;

    __base_D_80190CA8 = &D_80190CA8;
    temp_s4 = __base_D_80190CA8 - 0xA;
    var_s2 = func_8014A870(0x1E, 7, 0);
    temp_s0 = ((arg0 & 0xFFFF) * 0x64) + &D_8011F2F0;
    temp_v1 = *(u16 *)((s8 *)temp_s0 + 0x3E);
    switch (temp_v1) {
    case 0x0:
        if (D_801C5EA2 == 2) {
            *(u8 *)__base_D_80190CA8_arm = 1;
            *(u16 *)((s8 *)temp_s0 + 0x3E) = 0x30;
            return;
        }
        *(u16 *)((s8 *)temp_s0 + 0x3E) = 0x10;
        return;
    case 0x10:
        *(s16 *)((s8 *)temp_s0 + 0x40) = 1;
        *(u16 *)((s8 *)temp_s0 + 0x3E) = 0x11;
        /* fallthrough */
    case 0x11:
        if (var_s2 & 1) {
            if (*(u8 *)__base_D_80190CA8_arm != 0) {
                *(u8 *)__base_D_80190CA8_arm = *(u8 *)__base_D_80190CA8_arm - 1;
                func_801D651C(7, 0x3B);
            }
        }
        var_v0 = var_s2 & 2;
        if (var_v0 != 0 && *(u8 *)__base_D_80190CA8_arm != 2) {
            *(u8 *)__base_D_80190CA8_arm = *(u8 *)__base_D_80190CA8_arm + 1;
            func_801D651C(7, 0x3B);
        }
        if (var_s2 & 0x10) {
            __repair_phase_var_s2 = 0;
            func_801D651C(7, 0x3D);
            *(u16 *)((s8 *)temp_s0 + 0x3E) = 0xF0;
            if (*(u8 *)__base_D_80190CA8_arm != 0) {
                var_v0_2 = 0x30;
                if (*(u8 *)__base_D_80190CA8_arm != 1) {
                    var_v0 = 0 & 0x20;
                } else {
                    *(u16 *)((s8 *)temp_s0 + 0x3E) = var_v0_2;
                    D_80190CB2 = 0;
                    func_801E1EEC(7, 0);
                    var_v0 = __repair_phase_var_s2 & 0x20;
                }
            } else {
                *(u16 *)((s8 *)temp_s0 + 0x3E) = (0x20);
                D_80190CB2 = 0;
                func_801E1EEC(7, 0);
                var_v0 = __repair_phase_var_s2 & 0x20;
            }
        } else {
            var_v0 = var_s2 & 0x20;
        }
        if (var_v0 != 0) {
            func_801D651C(7, 0x3A);
            *(u16 *)((s8 *)temp_s0 + 0x3E) = 0xF0;
        }
        return;
    __base_D_80190CAC = &D_80190CAC;
    case 0x20:
        (*(&D_80190CAC)) = 0xC;
        func_80217600();
        do {*temp_s4 = 0;}while(0);
        *(u8 *)((s8 *)__base_D_80190CA8_arm + 2) = 0;
        *(s16 *)((s8 *)temp_s0 + 0x40) = 3;
        *(u16 *)((s8 *)temp_s0 + 0x3E) = 0x21;
        /* fallthrough */
    case 0x21:
        func_802174DC(var_s2 & 0xFF, *temp_s4, *(u8 *)((s8 *)__base_D_80190CA8_arm + 2));
        if (var_s2 & 0x10) {
            var_s2 = 0;
            func_801D651C(7, 0x3D);
            temp_v1_2 = (*(u8 *)((s8 *)__base_D_80190CA8_arm + 2)) + (*temp_s4);
            D_801E9B34 = temp_v1_2;
            if (D_801E9B34 >= 8) {
                D_801E9B34 = temp_v1_2 - 8;
                func_8003DE60(&D_8021DEB4, D_801E9B34);
                func_801E1EEC(5, 0);
                __base_D_801C5E9F = &D_801C5E9F;
                (*__base_D_801C5E9F) = *(u8 *)((s8 *)__base_D_801C5E9F - 1);
            } else {
                func_801E1EEC(8, 0);
                (*__base_D_801C5E9F) = *(u8 *)((s8 *)__base_D_801C5E9F - 1);
                do {*(u8 *)temp_s0 = 0;}while(0);
                *(u16 *)((s8 *)temp_s0 + 0x3E) = 0x21;
            }
        }
        var_v0_4 = var_s2 & 0x20;
        if (var_v0_4 != 0) {
            func_801D651C(7, 0x3A);
            *(u16 *)((s8 *)temp_s0 + 0x3E) = 0x10;
        }
        break;
    case 0x30:
        (*(&D_80190CAC)) = 4;
        func_80217600();
        do {*temp_s4 = 0;}while(0);
        *(u8 *)((s8 *)__base_D_80190CA8_arm + 2) = 0;
        *(s16 *)((s8 *)temp_s0 + 0x40) = 5;
        *(u16 *)((s8 *)temp_s0 + 0x3E) = 0x31;
        /* fallthrough */
    case 0x31:
        func_802174DC(var_s2 & 0xFF, *temp_s4, *(u8 *)((s8 *)__base_D_80190CA8_arm + 2));
        if (var_s2 & 0x10) {
            if (D_801C5EA0 == 1) {
                func_801D651C(7, 0x3D);
                D_801E9B34 = *temp_s4;
                func_8003DE60(&D_8021DEB4, D_801E9B34);
                func_801E1EEC(4, 0);
            } else {
                func_801D651C(7, 0x3E);
            }
        }
        var_v0_4 = var_s2 & 0x20;
        if (var_v0_4 != 0) {
            func_801D651C(7, 0x3A);
            *(u16 *)((s8 *)temp_s0 + 0x3E) = 0x10;
        }
        break;
    case 0x40:
        *(u8 *)temp_s0 = *(u8 *)temp_s0 + 1;
        if (*(u8 *)temp_s0 >= 0x15) {
            *(u8 *)temp_s0 = 0;
            *(u16 *)((s8 *)temp_s0 + 0x3E) = 0x41;
            return;
        }
        break;
    case 0x41:
        *(u8 *)temp_s0 = *(u8 *)temp_s0 + 1;
        if (*(u8 *)temp_s0 >= 0x5B) {
            *(u16 *)((s8 *)temp_s0 + 0x3E) = 0x21;
            return;
        }
        break;
    case 0xF0:
        *(s8 *)&D_80190CB0 = 0;
        *(s16 *)((s8 *)&D_80190CB0 - 0x16) = 0x10;
        *(s16 *)((s8 *)temp_s0 + 0x40) = 1;
        D_801C5EA2 = 5;
        break;
    }
}
