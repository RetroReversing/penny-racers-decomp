typedef struct { u8 total; u8 count; u8 pad[6]; } SideInfo;
extern SideInfo D_80189CB8[2];
extern u16 D_8018D140[][150];
extern u16 D_8018D26C[];
void func_80148B44(u8 arg0, u8 arg1)
{
    s32 i;
    s32 j;
    s32 k;

    for (i = 0; i < 150; i++) {
        switch (D_8018D140[0][i]) {
        case 0x2FFF:
        case 0x3FFF:
        case 0x4FFF:
            break;
        default:
            for (j = 0; j < 150; j++) {
                if ((D_8018D26C[j] & 0xFFF) == (D_8018D140[0][i] & 0xFFF)) {
                    D_8018D140[0][i] |= 0x1000;
                }
            }
            break;
        }
    }
    D_80189CB8[0].count = 0;
    for (i = 0; i < D_80189CB8[0].total; i++) {
        if (!(D_8018D140[0][i] & 0xF000)) {
            D_80189CB8[0].count++;
        }
    }
    for (i = 0; i < 150; i++) {
        switch (D_8018D26C[i]) {
        case 0x2FFF:
        case 0x3FFF:
        case 0x4FFF:
            break;
        default:
            for (j = 0; j < 150; j++) {
                if ((D_8018D140[0][j] & 0xFFF) == (D_8018D26C[i] & 0xFFF)) {
                    D_8018D26C[i] |= 0x1000;
                }
            }
            break;
        }
    }
    D_80189CB8[1].count = 0;
    for (i = 0; i < D_80189CB8[1].total; i++) {
        if (!(D_8018D26C[i] & 0xF000)) {
            D_80189CB8[1].count++;
        }
    }
    if (arg1 == 1) {
        for (k = 0; k < 150; k++) {
            if (!(D_8018D140[arg0][k] & 0x700)) {
                D_8018D140[arg0][k] |= 0x1000;
            }
        }
    }
}
