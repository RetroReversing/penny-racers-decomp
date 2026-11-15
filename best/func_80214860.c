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
        if (D_8021B680 != 0x1C && D_8021B680 != 4) {
            func_801D65BC(0);
            D_80168BB0 = 2;
        }
        break;
    default:
        break;
    }
}
