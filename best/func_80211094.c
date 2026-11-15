s32 func_8014A870(u32, s32, s32);
void func_8014B854(s32, s32);
void func_80211B90(void);
void func_800DE2E0(void);
void func_800DE38C(void);
void func_80231C5C(void);
void func_801CF468(u16, s32, s32, s32);
void func_80203DF8(s32, s32, s32, s32, s32);

extern u8 D_8011F32E[];
extern u8 D_8011F350[];
extern s32 D_80168BB0;
extern u8 D_80187BF0[];
extern u16 D_8018BC3C;
extern s32 D_8021AFDC;
extern u8 D_8021B420[];
extern u8 D_8021B430[];
extern s8 D_8021E15F;
extern u8 D_8021E231[];
extern u8 D_8021EEC0[];
extern u8 D_8021EEC1;
extern u8 D_8021EEC2;
extern s32 D_8021EFA0;
extern u8 D_8021F036[];
extern u8 D_8021F048[];
extern u8 D_8021F270[];

void func_80211094(u32 arg0)
{
    s32 s0;
    s32 v;
    s32 i;
    s32 j;
    u16 st;
    u8 nb;
    u8 idx;

    s0 = func_8014A870(0x14, 3, D_8021E15F);
    st = *(u16 *)(D_8011F32E + (arg0 & 0xFFFF) * 0x64);
    switch (st) {
    case 16:
        v = s0 & 0xF;
        break;
    case 32:
        i = 0;
        if (*(D_8011F350 + D_8018BC3C * 0x64) == 0) {
            do {
                j = 0;
                do {
                    *(u16 *)(D_8021F270 + D_8021E15F * 0xE0 + i * 0x10 + j * 2) =
                        *(u16 *)(D_80187BF0 + i * 0x12 + j * 2);
                    j++;
                } while (j < 8);
                D_8021F048[D_8021E15F * 0xE + i] = D_8021F036[i];
                i++;
            } while (i < 0xE);
            func_800DE38C();
            func_800DE2E0();
            func_80231C5C();
            func_801CF468(D_8018BC3C, 0, 0, 0);
            D_8021AFDC = 0x12;
            D_80168BB0 = 0x10;
        }
        return;
    default:
        if (st != 0) {
            return;
        }
        v = s0 & 0xF;
        break;
    }
    idx = D_8021B420[v];
    if (idx != 0xFF) {
        nb = D_8021B430[D_8021EEC1 * 4 + idx];
        if (nb != 0xFF) {
            D_8021EEC1 = nb;
            func_8014B854(0x3B, 0xFF);
        }
    }
    func_80211B90();
    if (s0 & 0x80) {
        if (D_8021EEC2 != 0) {
            D_8021EEC2--;
            func_8014B854(0x3B, 0);
        }
    }
    if (s0 & 0x40) {
        if (D_8021EEC2 != 7) {
            D_8021EEC2++;
            func_8014B854(0x3B, 0);
        }
    }
    if (s0 & 0x10) {
        func_8014B854(0x3D, 0);
        if (D_8021EEC1 == 0x5A) {
            func_80203DF8(2, 6, 0, 0, 0);
            *(u16 *)(D_8011F32E + (arg0 & 0xFFFF) * 0x64) = 0x20;
        }
    }
    if (s0 & 0x20) {
        D_8021EFA0 &= 0xFFFF7FFF;
        func_8014B854(0x3B, 0);
    }
}
