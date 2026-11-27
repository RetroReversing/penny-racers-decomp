extern u8 D_8018994E;
extern u8 D_80189B36;
extern u16 D_8018A288[];
extern u16 D_8018D140[][150];
s32 func_801496B0(u8 arg0, u16 arg1, u8 arg2);

u16 func_80149220(u8 arg0, u8 arg1, u8 arg2, s32 arg3) {
    s32 i;
    u8 found;
    s32 index;
    u16 result;

    result = 0x2FFF;
    if (arg3 == 1) {
        result = 0x4FFF;
    }
    if (arg0 == 8) {
        for (i = 0, found = 0; i < arg2; i++) {
            if ((D_8018D140[arg3][i] & 0x1FFF) == 0xD) {
                result = D_8018D140[arg3][i];
                found = 1;
            }
        }
        if (!found) {
            if (D_8018994E == 0) {
                arg0 = 7;
            } else if (!(D_80189B36 & 0x20)) {
                arg0 = 7;
            }
        }
    }
    if (arg0 < 8) {
        found = 0;
        for (i = 0; i < 8; i++) {
            index = func_801496B0(arg3, arg0, arg2);
            if (D_8018A288[0] != 0xFFFF) {
                found++;
                break;
            }
            if ((D_8018994E == 0) | (arg3 == 1)) {
                arg0 = (arg0 + 1) & 7;
            } else {
                break;
            }
        }
        if (found) {
            if (arg1 == 0) {
                result = D_8018A288[0];
            } else {
                result = D_8018A288[index];
            }
        }
    }
    return result;
}
