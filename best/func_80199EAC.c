extern volatile f32 D_801C6BCC;
extern s8 D_801E995A;
extern s8 D_801E995B;
extern u32 D_801E9980;
extern u32 D_801E9984;
extern u32 D_801E9988;
extern u32 D_801E998C;

#define SB(sym, i) (*(s8 *)((u8 *)&(sym) + (i)))
#define SW(sym, i) (*(u32 *)((u8 *)&(sym) + (i)))

s32 func_80199EAC(s32 arg0) {
    s32 var_a1 = 4;

    if (SB(D_801E995B, (u16)arg0 * 0x70) >= 0x3D && SW(D_801E9988, (u16)arg0 * 0x70) % 15 == 1) {
        if (D_801C6BCC == 0.0f) var_a1 = 0;
        else if (D_801C6BCC == 360.0f) var_a1 = 0;
        else if (D_801C6BCC == 90.0f) var_a1 = 1;
        else if (D_801C6BCC == 270.0f) var_a1 = 3;
    } else if (SB(D_801E995B, (u16)arg0 * 0x70) < -0x3C) {
        if (SW(D_801E998C, (u16)arg0 * 0x70) % 15 == 1) {
            if (D_801C6BCC == 90.0f) var_a1 = 3;
            else if (D_801C6BCC == 180.0f) var_a1 = 0;
            else if (D_801C6BCC == 270.0f) var_a1 = 1;
        } else goto l28;
    } else {
l28:
        if (SB(D_801E995A, (u16)arg0 * 0x70) < -0x3C) {
            if (SW(D_801E9984, (u16)arg0 * 0x70) % 15 == 1) {
                if (D_801C6BCC == 0.0f) var_a1 = 1;
                else if (D_801C6BCC == 360.0f) var_a1 = 1;
                else if (D_801C6BCC == 180.0f) var_a1 = 3;
                else if (D_801C6BCC == 270.0f) var_a1 = 0;
            } else goto l44;
        } else {
l44:
            if (SB(D_801E995A, (u16)arg0 * 0x70) >= 0x3D && SW(D_801E9980, (u16)arg0 * 0x70) % 15 == 1) {
                if (D_801C6BCC == 0.0f) var_a1 = 3;
                else if (D_801C6BCC == 360.0f) var_a1 = 3;
                else if (D_801C6BCC == 90.0f) var_a1 = 0;
                else if (D_801C6BCC == 180.0f) var_a1 = 1;
                else if (D_801C6BCC == 270.0f) var_a1 = 2;
            }
        }
    }
    return var_a1 & 0xFF;
}
