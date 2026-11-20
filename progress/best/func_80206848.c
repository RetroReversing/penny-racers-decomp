typedef struct { u16 f0; u8 pad[98]; } Slot_8011F32E;
extern Slot_8011F32E D_8011F32E[];
extern u8 D_8011F350[];
extern u16 D_8018BC3C;
extern s32 D_80168BB0;
extern s32 D_8021AFDC;
extern s32 D_8021AFE0;
extern s32 D_8021B060;
extern u8 D_8021B0C0;

s32 func_8014A870(s32, s32, s32);
void func_8014B854(s32);
void func_800DE2E0(void);
void func_800DE38C(void);
void func_80231C5C(void);
void func_801CF468(s32, s32, s32, s32);
void func_80203DF8(s32, s32, s32, s32, s32);

void func_80206848(s32 arg0) {
    s32 s1;
    s32 v1;
    s32 val;
    s32 idx;

    idx = arg0 & 0xFFFF;
    switch (D_8011F32E[idx].f0) {
    case 0:
        if (**(u8 **)(D_8011F350 + D_8018BC3C * 100) == 0) {
            D_8011F32E[idx].f0 = 1;
        }
        return;
    case 1:
        s1 = func_8014A870(0x1E, 7, 0);
        if (s1 & 1) {
            func_8014B854(0x3B);
            D_8021B0C0 -= 1;
        }
        if (s1 & 2) {
            func_8014B854(0x3B);
            D_8021B0C0 += 1;
        }
        D_8021B0C0 &= 3;
        if (s1 & 0x10) {
            func_8014B854(0x3D);
            v1 = D_8021B0C0;
            val = -1;
            if (v1 == 1) {
                func_80203DF8(2, 6, 0, 0, 0);
                D_8021AFDC = 2;
                D_8021AFE0 = 2;
                val = 0x2A;
            } else if (v1 == 0) {
                func_80203DF8(2, 6, 0, 0, 0);
                D_8021AFDC = 2;
                val = 4;
            } else if (v1 == 2) {
                func_80203DF8(2, 6, 0, 0, 0);
                D_8021AFDC = 2;
                D_8021AFE0 = 2;
                val = 0x1C;
            } else if (v1 == 3) {
                func_80203DF8(2, 6, 0, 0, 0);
                D_8021AFDC = 2;
                D_8021AFE0 = 2;
                val = 0x26;
            }
            if (val != -1) {
                D_8021B060 = val;
                D_8011F32E[idx].f0 = 3;
            }
        }
        if (s1 & 0x20) {
            func_8014B854(0x3A);
            func_80203DF8(2, 6, 0, 0, 0);
            D_8021AFDC = 2;
            D_8021B060 = 0;
            D_8011F32E[idx].f0 = 3;
        }
        return;
    case 3:
        if (**(u8 **)(D_8011F350 + D_8018BC3C * 100) == 0) {
            func_800DE38C();
            func_800DE2E0();
            func_80231C5C();
            func_801CF468(D_8018BC3C, 0, 0, 0);
            D_80168BB0 = D_8021B060;
        }
        return;
    }
}
