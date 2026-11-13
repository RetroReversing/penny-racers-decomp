typedef struct { u16 a; u16 b; u16 c; u8 pad[94]; } Slot;
extern Slot D_8011F2F4[];
extern u8 D_801D5A90[];
extern s8 D_003B7C00[];
extern s8 D_003E4880[];
extern s8 D_0040A890[];
extern s8 D_00412160[];
extern u8 D_802D6890[];
extern u8 D_8030BD90[];
extern u8 D_8021FE04[];
extern u8 D_8022026C[];
extern u8 D_80145A6C[];
extern f32 D_80220E40;
extern u8 D_8021F260[];
extern u8 D_80189B35;
extern u8 D_80189B36;
extern u8 D_80189B34;
extern s32 D_8021B668;
extern s32 D_8021B664;
extern u16 D_80189CC6;
extern u8 D_80190CAA;
extern u8 D_8018D678;
extern u16 D_8018A27C;
extern u16 D_8018A43A;
extern u16 D_8018A44A[];
extern s16 D_8021E1A6;
extern u8 D_80183630[];
extern u8 D_80183644[];
extern u8 D_80189CB7[];
extern u16 D_80189C9E[];
extern u16 D_80189CAA[];
extern s32 D_8018A3B8[4][8];
extern s32 D_8018D3A0[4][8];
extern s32 D_8018F5D0[14][8][13];
extern s32 D_80238EC0[8][13];
extern u16 D_80190CB4;
extern void func_801DDA5C();
extern void func_8021FCA4();
extern void func_800294A0();
extern u16 func_800DE41C();
extern void func_80138B1C();
extern void func_80149A80();
extern void func_80144808();
extern void func_8013DD2C();
extern u8 func_80148230();
extern void func_8014998C();
extern u16 func_8014B108();
extern u16 func_8014BB30();
extern void func_8003DE60();

void func_801441E0(void) {
    u16 idx;
    s32 i, j, k;
    func_801DDA5C();
    func_800DE41C(0, 0xFF, 3, 0, 0x7F, 0, 0, (s32)D_801D5A90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    func_800294A0(D_003B7C00, D_802D6890, D_003E4880 - D_003B7C00);
    func_800294A0(D_0040A890, D_8030BD90, D_00412160 - D_0040A890);
    idx = func_800DE41C(0, 0, 3, 0, 0x40, 0xFF, 0, 0, (s32)func_80138B1C, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    D_8011F2F4[idx].a |= 0x20;
    D_8011F2F4[idx].b |= 0x20;
    D_8011F2F4[idx].c |= 0x20;
    func_8021FCA4();
    func_800DE41C(0, 0, 3, 0, 0x42, 0xFF, 0, 0, (s32)D_8021FE04, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    D_80220E40 = 10.0f;
    func_800DE41C(0, 0, 3, 0, 0x44, 0xFF, 0, 0, (s32)D_8022026C, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    func_800DE41C(0, 0, 3, 0, 0x40, 1, 0, (s32)func_80149A80, 0, 0, 0, 0, 0, 30.0f, 50.0f, 0, 0, 0);
    D_8021F260[0] = 0;
    D_8021F260[1] = 0;
    D_8021F260[2] = 0;
    D_8021F260[4] = 0;
    D_80189B35 = 0;
    if (D_8021B668 == 0) {
        D_80189B35 = 1;
    }
    D_80189B36 &= 0x7F;
    if (D_8021B664 == 0) {
        D_80189B36 |= 0x80;
    }
    D_80189CC6 = (D_80189CC6 | 0x3000) & 0xBCFF;
    D_80189B36 &= 0xBF;
    D_80189B34 = func_80148230();
    D_80190CAA = 0;
    D_8018D678++;
    if (D_8018D678 >= 0x1F) {
        D_8018D678 = 0;
    }
    func_8014998C();
    D_8018A27C = func_8014B108();
    D_8018A43A = func_8014BB30(0);
    D_8018A27C &= ~D_8018A43A;
    func_8003DE60(D_80183630, D_8018A44A[D_8021E1A6]);
    func_8003DE60(D_80183644, D_8018A27C, D_8018A43A);
    D_80189CB7[0] = 0;
    D_80189CB7[8] = 0;
    D_80189CB7[-0x1C] = 0;
    D_80189CB7[-0x1D] = 0;
    for (i = 0; i < 6; i++) {
        D_80189C9E[i] = 0x2FFF;
        D_80189CAA[i] = 0x2FFF;
    }
    i = 0;
loop_b:
    j = 0;
loop_b_inner:
    D_8018A3B8[i][j] = D_8018D3A0[i][j];
    j++;
    if (j < 8) {
        goto loop_b_inner;
    }
    i++;
    if (i < 4) {
        goto loop_b;
    }
    j = 0;
loop_c:
    i = 0;
loop_c_mid:
    k = 0;
loop_c_inner:
    D_8018F5D0[j][i][k] = D_80238EC0[i][k];
    k++;
    if (k < 13) {
        goto loop_c_inner;
    }
    i++;
    if (i < 8) {
        goto loop_c_mid;
    }
    j++;
    if (j < 14) {
        goto loop_c;
    }
    D_80190CB4 = func_800DE41C(0, 0, 3, 0, 0x4F, 0xFF, 0, (s32)func_80144808, (s32)D_80145A6C, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    func_800DE41C(0, 0, 3, 0, 0xA1, 0xFF, 0, 0, (s32)func_8013DD2C, 0, 0, 0, 0, 0, 0, 0, 0, 0);
}
