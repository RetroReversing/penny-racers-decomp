extern u8 D_80168D38[];

u8 func_80149F40(s32 arg0, u32 arg1, u8 arg2) {
    u8 temp_v1;

    temp_v1 = arg2;
    switch (arg1) {
    case 0:
        temp_v1 = D_80168D38[arg2];
        if (temp_v1 & 0x80) {
            temp_v1 = (temp_v1 & 0x7F) + arg0;
        }
        break;
    case 1:
        if (arg2 == 0x5A) {
            temp_v1 = 0;
        } else {
            temp_v1 += 1;
        }
        break;
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
        temp_v1 += 1;
        break;
    }
    return temp_v1;
}
