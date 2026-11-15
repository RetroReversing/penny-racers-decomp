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

void func_802191E4(u16 idx) {
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
            func_801D65BC(8);
            D_80190CA6 = 0xA8C;
            D_80190CA4 = 0;
            st = 0x10;
        }
        break;
    default:
        break;
    }
done:
    *(u16 *)(rec + 0x3E) = st;
}
