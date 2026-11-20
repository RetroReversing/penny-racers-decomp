extern unsigned char D_801E87E5;
extern unsigned char D_801E87E0;
extern unsigned char D_801E87E1;
extern signed char D_801E87E2;
extern unsigned char D_801E87E3;
extern unsigned short D_801E87E6;
extern unsigned char D_8011F2F0[];
extern unsigned char D_8011F2FC[];
extern unsigned short D_8011F32E[];
extern unsigned char D_8022AFE9[];
extern unsigned char D_8022AFEB[];
extern unsigned char D_8022AFEC[];
extern unsigned char D_801F1880[];
extern unsigned char D_801F18E0[];
extern unsigned char D_801E9D80[];
extern unsigned char D_8022B000[];
extern unsigned char D_8022B004[];
extern unsigned char D_8022B008[];
extern unsigned char D_8022B00C[];
extern signed short D_8022B5F4;
extern unsigned int D_8011F350[];
extern char D_801D59C4[];
extern u8 D_8006FAF0[];
extern char D_800DA26A[];
extern char D_801E9498[];
extern char D_801CE928[];
extern char D_801CEC2C[];
extern unsigned char D_801F18E1[];
extern unsigned char D_801E9D81[];
extern void func_80232360(unsigned char, int);
extern void func_8003DE60(void *, void *, void *, void *);
extern unsigned short func_800DE41C(int, int, int, int, int, int, int, void *, void *, int, int, int, int, int, int, int, int, int);
extern int func_801E28BC;
extern int func_801E2ABC;

void func_801E0F10(s32 arg0) {
    s32 idx = arg0 & 0xFFFF;
    s32 base = idx * 0x64;
    u16 state;
    s32 k;

    D_801E87E5 = D_8011F2F0[base];
    state = D_8011F32E[idx * 50];
    switch (state) {
    case 0:
        D_801F1880[D_801E87E5 * 4] = 0;
        D_8011F32E[idx * 50] = 1;
        /* fallthrough */
    case 1:
        if (D_8011F2FC[base] == 1) {
            D_801F1880[D_801E87E5 * 4] = 0;
            D_8011F32E[idx * 50] = 2;
        }
        if (D_8011F2FC[base] == 2) {
            D_801F1880[D_801E87E5 * 4] = 0;
            D_8022AFE9[D_801E87E5 * 0x8F0] = 2;
            D_8011F32E[idx * 50] = 3;
        }
        if (D_8011F2FC[base] == 3) {
            D_8011F32E[(arg0 & 0xFFFF) * 50] = 4;
        }
        return;
    case 3:
        if (D_801E87E3 != 1 || D_801E87E1 != D_8006FAF0[0x20]) {
            D_8011F2FC[idx * 100] = 0;
        }
        if (D_8011F2FC[(arg0 & 0xFFFF) * 100] == 2) {
            D_801F1880[D_801E87E5 * 4] += 2;
        }
        return;
    }
}
