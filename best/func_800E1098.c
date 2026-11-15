extern u8 D_800DB1B8[];
extern u8 D_800DE080[];
extern u8 D_800E1852;
extern u16 func_800E1850;
extern u16 D_800E23E0[];
extern s32 D_8011F060;
extern u8 D_8011F2E8;
extern u8 D_8011F2F1[];
extern u8 D_8011F2F2[];
extern u8 D_8011F2FD[];
extern u8 D_80126FF6;
extern u8 D_80126FF7;
extern u8 D_801F9950[];
extern u8 D_801F9958[];
extern u8 D_80221080[];

void func_800DF428(s32, u16, s32, s32, f32, f32, f32, f32, f32);
void func_800DFD64(s32, u16, s32, s32, f32, f32, f32, f32, f32);
void func_800E0274(s32, u16, s32);
void func_800E0B8C(void *, f32, f32, s32, s32 *);

void func_800E1098(s32 arg0, s32 arg1, s32 arg2, u8 arg3, u8 arg4) {
    s32 arr[4];
    s32 i;
    s32 n;
    s32 off;
    u16 racer;
    u8 type;
    u8 *base;
    u8 *s0;
    u8 *s2;
    u8 *s3;
    u32 *dl;

    n = 0;
    for (i = 0; i < 4; i++) {
        if (*(s16 *)(D_800DB1B8 + 0x2108 + i * 0x28) != 0) {
            arr[n++] = i;
        }
    }
    off = *(s16 *)(D_800DB1B8 + 0x210C + arr[arg4] * 0x28) * 0x24;
    base = D_80221080;
    s0 = base + off;
    s3 = base + 0x24 + off;
    s2 = base - 0x24 + off;
    if (func_800E1850 != 0xFFFF) {
        D_8011F060 = arg2;
        D_80126FF6 = arg3;
        D_8011F2E8 = arg4;
        D_80126FF7 = 0xFF;
        func_800E0B8C(base + 0x24, *(f32 *)s0, *(f32 *)(s0 + 4), *(s32 *)(s0 + 8), arr);
        i = 0;
        if (D_800E23E0[0] != 0xFFFF) {
            do {
                racer = D_800E23E0[i & 0xFFFF];
                if (*(u8 *)(D_8011F2FD + racer * 0x64) == 0) {
                    if (D_800E1852 == 1) {
                        D_800E1852 = 0;
                        dl = *(u32 **)(D_800DE080 + 0x64);
                        *(u32 **)(D_800DE080 + 0x64) = dl + 2;
                        dl[0] = 0xBC000002;
                        dl[1] = 0x80000040;
                        *(u32 **)(D_800DE080 + 0x64) = dl + 4;
                        dl[2] = 0x03860010;
                        dl[3] = (u32)D_801F9958;
                        *(u32 **)(D_800DE080 + 0x64) = dl + 6;
                        dl[4] = 0x03880010;
                        dl[5] = (u32)D_801F9950;
                    }
                    type = *(u8 *)(D_8011F2F1 + D_800E23E0[i & 0xFFFF] * 0x64);
                    switch (type) {
                    case 2:
                        func_800DFD64(arg0, D_800E23E0[i & 0xFFFF], arg1 & 0xFF,
                                      *(s32 *)s0, *(f32 *)(s0 + 4), *(f32 *)(s0 + 8),
                                      *(f32 *)(s0 + 0xC), *(f32 *)(s0 + 0x10),
                                      *(f32 *)(s0 + 0x14));
                        break;
                    case 1:
                        racer = D_800E23E0[i & 0xFFFF];
                        if (*(u16 *)(D_8011F2F2 + racer * 0x64 + D_80126FF6 * 2) & 0x100) {
                            func_800DF428(arg0, racer, arg1 & 0xFF,
                                          *(s32 *)s2, *(f32 *)(s2 + 4), *(f32 *)(s2 + 8),
                                          *(f32 *)(s2 + 0xC), *(f32 *)(s2 + 0x10),
                                          *(f32 *)(s2 + 0x14));
                        } else {
                            racer = D_800E23E0[i & 0xFFFF];
                            if (*(u16 *)(D_8011F2F2 + racer * 0x64 + D_80126FF6 * 2) & 0x200) {
                                func_800DF428(arg0, racer, arg1 & 0xFF,
                                              *(s32 *)s3, *(f32 *)(s3 + 4), *(f32 *)(s3 + 8),
                                              *(f32 *)(s3 + 0xC), *(f32 *)(s3 + 0x10),
                                              *(f32 *)(s3 + 0x14));
                            } else {
                                func_800DF428(arg0, D_800E23E0[i & 0xFFFF], arg1 & 0xFF,
                                              *(s32 *)s0, *(f32 *)(s0 + 4), *(f32 *)(s0 + 8),
                                              *(f32 *)(s0 + 0xC), *(f32 *)(s0 + 0x10),
                                              *(f32 *)(s0 + 0x14));
                            }
                        }
                        break;
                    case 3:
                        func_800E0274(arg0, D_800E23E0[i & 0xFFFF], arg1 & 0xFF);
                        break;
                    }
                }
                i++;
            } while (D_800E23E0[i & 0xFFFF] != 0xFFFF);
        }
    }
}
