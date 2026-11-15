typedef struct {
    s16 v;
    u8 pad[0x26];
} Unk28;

typedef struct {
    s32 a;
    f32 b;
    f32 c;
    f32 d;
    f32 e;
    f32 f;
    u8 pad[0xC];
} Unk24;

extern Unk28 D_800DD2C0[];
extern Unk28 D_800DD2C4[];
extern Unk24 D_80221080[];
extern u16 D_800E23E0[];
extern u8 D_8011F2FD[];
extern u8 D_8011F2F1[];
extern u8 D_8011F2F2[];
extern u8 D_800E1852;
extern u16 func_800E1850;
extern u8 D_80126FF6;
extern s8 D_80126FF7;
extern s32 D_8011F060;
extern u8 D_8011F2E8;
extern u8 *D_800DE0E4;
extern u8 D_801F9958;
extern u8 D_801F9950;

void func_800E0B8C(f32, f32, s32);
void func_800DF428(s32, u16, s32, s32, f32, f32, f32, f32, f32);
void func_800DFD64(s32, u16, s32, s32, f32, f32, f32, f32, f32);
void func_800E0274(s32, u16, s32);

void func_800E1098(s32 arg0, s32 arg1, s32 arg2, u8 arg3, u8 arg4) {
    s32 sel[4];
    s32 n;
    s32 i;
    s32 s1;
    s32 idx;
    u8 type;
    Unk24 *e0;
    Unk24 *e1;
    Unk24 *e2;
    u32 *dl;
    u8 *p2;

    n = 0;
    for (i = 0; i < 4; i++) {
        if (D_800DD2C0[i].v != 0) {
            sel[n] = i;
            n++;
        }
    }
    idx = D_800DD2C4[sel[arg4]].v;
    e0 = &D_80221080[idx];
    e1 = &D_80221080[idx] + 1;
    e2 = &D_80221080[idx] - 1;
    if (func_800E1850 != 0xFFFF) {
        D_8011F060 = arg2;
        D_80126FF6 = arg3;
        D_8011F2E8 = arg4;
        D_80126FF7 = 0xFF;
        func_800E0B8C(*(f32 *)&e0->a, e0->b, e0->c);
        s1 = 0;
        p2 = D_8011F2F2;
        while (D_800E23E0[s1 & 0xFFFF] != 0xFFFF) {
            if (D_8011F2FD[D_800E23E0[s1 & 0xFFFF] * 0x64] == 0) {
                if (D_800E1852 == 1) {
                    D_800E1852 = 0;
                    dl = (u32 *)D_800DE0E4;
                    D_800DE0E4 = (u8 *)(dl + 2);
                    dl[0] = 0xBC000002;
                    dl[1] = 0x80000040;
                    D_800DE0E4 = (u8 *)(dl + 4);
                    dl[2] = 0x03860010;
                    dl[3] = (u32)&D_801F9958;
                    D_800DE0E4 = (u8 *)(dl + 6);
                    dl[4] = 0x03880010;
                    dl[5] = (u32)&D_801F9950;
                }
                type = D_8011F2F1[D_800E23E0[s1 & 0xFFFF] * 0x64];
                switch (type) {
                case 2:
                    func_800DFD64(arg0, D_800E23E0[s1 & 0xFFFF], arg1 & 0xFF,
                                  e0->a, e0->b, e0->c, e0->d, e0->e, e0->f);
                    s1++;
                    break;
                case 1:
                    if (*(u16 *)(p2 + D_800E23E0[s1 & 0xFFFF] * 0x64 + D_80126FF6 * 2) & 0x100) {
                        func_800DF428(arg0, D_800E23E0[s1 & 0xFFFF], arg1 & 0xFF,
                                      e2->a, e2->b, e2->c, e2->d, e2->e, e2->f);
                        s1++;
                    } else if (*(u16 *)(p2 + D_800E23E0[s1 & 0xFFFF] * 0x64 + D_80126FF6 * 2) & 0x200) {
                        func_800DF428(arg0, D_800E23E0[s1 & 0xFFFF], arg1 & 0xFF,
                                      e1->a, e1->b, e1->c, e1->d, e1->e, e1->f);
                        s1++;
                    } else {
                        func_800DF428(arg0, D_800E23E0[s1 & 0xFFFF], arg1 & 0xFF,
                                      e0->a, e0->b, e0->c, e0->d, e0->e, e0->f);
                        s1++;
                    }
                    break;
                case 3:
                    func_800E0274(arg0, D_800E23E0[s1 & 0xFFFF], arg1 & 0xFF);
                    s1++;
                    break;
                default:
                    s1++;
                    break;
                }
            } else {
                s1++;
            }
        }
    }
}
