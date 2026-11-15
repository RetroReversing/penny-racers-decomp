extern s32 D_80168BB0;
extern u8 D_8006FB38[];
extern u8 D_8021E678;
extern s32 D_8021B680;
extern s32 D_8021AFDC;
extern s32 D_8021AFE0;
void alSeqpStop(void *);
void func_801D65BC(s32);

void func_80214860(void)
{
    switch (D_80168BB0) {
    case 1:
        alSeqpStop(D_8006FB38);
        D_8021B680 = 0x22;
        break;
    case 2:
        if (D_8021E678 == 1 && D_8021B680 != 2) {
            func_801D65BC(0);
            D_8021E678 = 2;
        }
        break;
    case 3:
        if (D_8021B680 == 0x1C || D_8021B680 == 4)
            func_801D65BC(0);
        D_8021B680 = 2;
        break;
    case 4:
        if (D_8021B680 == 2)
            func_801D65BC(2);
        D_8021B680 = 4;
        break;
    case 5:
        if (D_8021B680 == 6 || D_8021AFE0 == 0xC)
            func_801D65BC(2);
        D_8021B680 = 0xC;
        break;
    case 6:
        D_8021B680 = 0xE;
        break;
    case 7:
        func_801D65BC(3);
        D_8021B680 = 6;
        break;
    case 8:
        D_8021B680 = 0x10;
        break;
    case 9:
        D_8021B680 = 0x16;
        break;
    case 10:
        D_8021B680 = 0x12;
        break;
    case 11:
        D_8021B680 = 0x14;
        break;
    case 12:
        D_8021B680 = 0xA;
        break;
    case 13:
        D_8021B680 = 0x18;
        break;
    case 14:
        D_8021B680 = 0x1A;
        break;
    case 15:
        if (D_8021B680 == 2 || D_8021B680 == 6 || D_8021AFDC == 0x18)
            func_801D65BC(4);
        D_8021B680 = 0x1C;
        break;
    case 16:
        D_8021B680 = 0x1E;
        break;
    case 17:
        D_8021B680 = 0x20;
        break;
    case 36:
        D_8021B680 = 0x24;
        break;
    default:
        break;
    }
}
