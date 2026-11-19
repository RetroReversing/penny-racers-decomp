s32 func_8013E49C(u16);
s32 func_801D7028(u16, s32);

typedef struct { u8 *p; u8 pad[0x60]; } RecP;
typedef struct { u16 v; u8 pad[0x62]; } RecS;
typedef struct { u8 b; u8 pad[0x63]; } RecB;

extern RecP D_8011F350[];
extern RecS D_8011F32E[];
extern RecB D_8011F2FD[];
extern u8 D_8011F4E4[];
extern u8 D_8011F318[];
extern u8 D_802378E4[];
extern u8 D_80237914[];

void func_8016608C(s16 arg0) {
    u8 *s0 = D_8011F350[arg0 & 0xFFFF].p;
    u8 *a0 = D_8011F4E4 + *(u16 *)(*(u8 **)(s0 + 4) + 2) * 0x64;
    u8 *s1 = *(u8 **)(a0 + 0x50);
    s16 t;
    f32 f;
f32 __repair_f_1;
    u32 off;

    t = *(s16 *)(s0 + 0x14);
    if (t != 0) {
        switch ((t & 3) >> 1) {
        case 0:
            *(u8 **)(s1 + 4) = D_802378E4;
            break;
        case 1:
            *(u8 **)(s1 + 4) = D_80237914;
            break;
        }
        *(u16 *)(s0 + 0x14) = *(u16 *)(s0 + 0x14) - 1;
    }
    switch (D_8011F32E[arg0 & 0xFFFF].v) {
    case 0:
        off = *(u16 *)(s0 + 0) * 0x64;
        *(f32 *)(D_8011F318 + off) = *(f32 *)(D_8011F318 + off) + *(f32 *)(s0 + 8);
        *(f32 *)(s0 + 0xC) = *(f32 *)(s0 + 0xC) - *(f32 *)(s0 + 8);
        off = *(u16 *)(s0 + 0) * 0x64;
        f = *(f32 *)(D_8011F318 + off);
        if (f > 359.0f) {
            *(f32 *)(D_8011F318 + off) = f - 360.0f;
        }
        if (*(f32 *)(s0 + 0xC) < 0.0f) {
            __repair_f_1 = *(f32 *)(s0 + 8) * 0.9f;
            *(f32 *)(s0 + 8) = __repair_f_1;
            if (__repair_f_1 < 1.0f) {
                *(f32 *)(*(u8 **)(s0 + 4) + 0x8A4) = 0.7f;
                *(u8 *)(*(u8 **)(s0 + 4) + 0x8A1) = 2;
                *(u8 *)(*(u8 **)(s0 + 4) + 0x8D0) = 0x78;
                if (*(s16 *)(*(u8 **)(s0 + 4) + 0x55E) == 0) {
                    func_801D7028(*(u16 *)(*(u8 **)(s0 + 4) + 2), 0x2A);
                    D_8011F32E[(u16)arg0].v = 1;
                    return;
                }
                D_8011F32E[(u16)arg0].v = 3;
                return;
            }
        } else {
            *(u8 *)(*(u8 **)(s0 + 4) + 0x8A1) = 7;
            f = *(f32 *)(*(u8 **)(s0 + 4) + 0x8D4);
            *(f32 *)(*(u8 **)(s0 + 4) + 0x8D4) = (1.0f - f) * 0.3f + f;
            *(s32 *)(*(u8 **)(s0 + 4) + 0x8D8) = 0;
        }
        return;
    case 1:
        *(u8 **)(s1 + 4) = D_802378E4;
        *(f32 *)(a0 + 0x34) = (3.0f - *(f32 *)(a0 + 0x34)) * 0.4f + *(f32 *)(a0 + 0x34);
        *(f32 *)(a0 + 0x30) = (0.3f - *(f32 *)(a0 + 0x30)) * 0.4f + *(f32 *)(a0 + 0x30);
        if (*(f32 *)(a0 + 0x34) > 2.8f) {
            D_8011F32E[(u16)arg0].v = 2;
        }
        break;
    case 2:
        *(u8 **)(s1 + 4) = D_802378E4;
        *(f32 *)(a0 + 0x34) = (0.3f - *(f32 *)(a0 + 0x34)) * 0.4f + *(f32 *)(a0 + 0x34);
        *(f32 *)(a0 + 0x30) = (3.0f - *(f32 *)(a0 + 0x30)) * 0.4f + *(f32 *)(a0 + 0x30);
        if (*(f32 *)(a0 + 0x30) > 2.8f) {
            D_8011F32E[(u16)arg0].v = 3;
        }
        break;
    case 3:
        *(f32 *)(a0 + 0x34) = 1.0f;
        *(f32 *)(a0 + 0x30) = 1.0f;
        *(u16 *)(*(u8 **)(s0 + 4) + 0x560) =
            *(u16 *)(*(u8 **)(s0 + 4) + 0x560) & 0xF8;
        func_8013E49C(*(u16 *)(s0 + 0x76));
        D_8011F2FD[(u16)arg0].b = 2;
        if (*(s16 *)(*(u8 **)(s0 + 4) + 0x55E) == 0) {
            *(u8 **)(s1 + 4) = 0;
        } else {
            *(u8 **)(s1 + 4) = D_802378E4;
        }
        break;
    }
}
