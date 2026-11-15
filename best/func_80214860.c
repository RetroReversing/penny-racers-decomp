extern s32 D_80168BB0;
extern u8 D_8006FB38[];
extern u8 D_8021E678;
extern s32 D_8021B680;
void alSeqpStop(void *);
void func_801D65BC(s32);

void func_80214860(void)
{
    switch (D_80168BB0 - 1) {
    case 0:
        alSeqpStop(D_8006FB38);
        D_80168BB0 = 0x22;
        break;
    case 1:
        if (D_8021E678 == 1 && D_8021B680 != 2) {
            func_801D65BC(0);
            D_8021E678 = 2;
        }
        break;
    case 2:
        if (D_8021B680 == 0x1C || D_8021B680 == 4) {
            func_801D65BC(0);
            D_80168BB0 = 2;
        }
        break;
    case 3: case 4: case 5: case 6: case 7: case 8: case 9: case 10: case 11: case 12: case 13: case 14: case 15: case 16: case 17: case 18: case 19: case 20: case 21: case 22: case 23: case 24: case 25: case 26: case 27: case 28: case 29: case 30: case 31: case 32: case 33: case 34: case 35:
        break;
    default:
        break;
    }
}
