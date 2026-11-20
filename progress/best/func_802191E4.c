extern u8 D_8011F2F0[];
extern u8 D_8011F350[];
extern u8 D_8011F2FD[];
extern u8 D_8006FB38[];
extern u16 D_8018BC3C;
extern u16 D_80190CA6;
extern u8 D_80190CA4;
extern u8 D_80190CB0;
extern u16 D_80190C98[];
extern u32 D_801E9990;
extern u32 D_8021AFDC;
extern u16 D_8006F9E8;
extern u32 D_80168BB0;
extern u8 D_8021B01A;

void alSeqpStop(void *);
void func_801D65BC(int);
void func_80028100(int, int);
void func_80203DF8(int, int, int, int, int);
void func_8021AF20(int);
void func_800DE38C(void);
void func_800DE2E0(void);
void func_80231C5C(void);
void func_801CF468(int, int, int, int);

void func_802191E4(s32 idx) {
    u16 *__base_D_80190CA6;
    u8 *__base_D_80190CA4;
    u8 *rec = D_8011F2F0 + (u32)idx * 100;
    u16 st = *(u16 *)(rec + 0x3E);
    if (st >= 0x33) goto done;
    switch (st) {
    case 0:
        alSeqpStop(D_8006FB38);
        st = 1;
        break;
    case 1:
        if (*(u8 *)(D_8011F350 + D_8018BC3C * 100) == 0) {
            __base_D_80190CA6 = &D_80190CA6;
            /*__repair_pointer_balance*/if ((unsigned long)__base_D_80190CA6 & 0x10000) {
if ((unsigned long)__base_D_80190CA6 & 0x100) {
func_801D65BC(8);
} else {
func_801D65BC(8);
}
} else {
if ((unsigned long)__base_D_80190CA6 & 0x100) {
func_801D65BC(8);
} else {
func_801D65BC(8);
}
}
            (*__base_D_80190CA6) = 0xA8C;
            __base_D_80190CA4 = &D_80190CA4;
            st = 0x10;
            (*__base_D_80190CA4) = 0;
        }
        break;
    case 0x10:
        if (D_801E9990 == 1) {
            if (++(*__base_D_80190CA4) >= 0xB) {
                (*__base_D_80190CA6) = 1;
            }
        }
        (*__base_D_80190CA6)--;
        if ((s16)(*__base_D_80190CA6) < 0) {
            func_80028100(0, 0x1E);
            func_80203DF8(2, 0x2D, 0, 0, 0);
            st = 0x11;
        }
        break;
    case 17:
    case 18:
    case 19:
    case 20:
    case 21:
    case 22:
    case 23:
    case 24:
    case 25:
    case 26:
    case 27:
    case 28:
    case 29:
    case 30:
    case 31:
    case 32:
    case 33:
    case 34:
    case 35:
    case 36:
    case 37:
    case 38:
    case 39:
    case 40:
    case 41:
    case 42:
    case 43:
    case 44:
    case 45:
    case 46:
    case 47:
    case 48:
    case 49:
    case 50:
    default:
        break;
    }
done:
    *(u16 *)((D_8011F2F0 + (u32)idx * 100) + 0x3E) = st;
}
