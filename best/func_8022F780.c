extern u16 D_80232840[];
extern u16 D_8006FAF0[];
extern u32 D_802CBF30[];
extern u8 D_8021E144;
extern u8 D_8006FB38[];
extern u8 D_802330B0[];
extern u8 D_802330B1[];
extern u8 D_802330B4[];
extern u8 D_802330B8[];
extern u8 D_802330BA[];
extern u8 D_802330BC[];
extern u8 D_802330BE[];
extern u16 D_80233D30[];
extern u16 D_80233EC0;
extern u8 D_80232C10[];
extern u8 D_802D6890[];
extern u8 D_001F9030[];
extern u8 D_002243D0[];
extern u8 D_002632D0[];
extern u8 D_002AFC80[];
extern u8 D_002D58C0[];
extern u8 D_002FDC40[];
extern u8 D_0032F100[];
extern u8 D_00355850[];
extern u8 D_003836A0[];
extern u8 D_003B7C00[];
extern void alSeqpStop(void *);
extern void func_800294A0(s32, s32, s32);
extern void func_8003DE60(void *);
extern void func_8013D1A4(s32);
extern s32 func_800DE41C(s32, s32, s32, s32, s32, s32, void *, s32, s32, s32,
                         s32, s32, s32, s32, s32, f32, f32, f32);

void func_8022F780(u16 arg0) {
    u16 s2 = arg0;
    u32 v;
    s32 i;
    s32 s3;
    s32 cnt;
    s32 s0;
    s32 hi;
    f32 one;

    if (s2 == 0 || s2 >= 0x14) {
        s2 = 1;
    }
    while (D_80232840[s2] == 0) {
        s2 = s2 + 1;
        if (s2 >= 0x14) {
            s2 = 1;
        }
    }
    D_8006FAF0[0x10] = s2;
    v = D_802CBF30[s2];
    if (D_8021E144 != 1) {
        alSeqpStop(D_8006FB38);
    }
    switch (s2 - 1) {
    case 0:
        func_800294A0((s32) D_001F9030, (s32) D_802D6890,
                      (s32) D_002243D0 - (s32) D_001F9030);
        break;
    case 1:
        func_800294A0((s32) D_002243D0, (s32) D_802D6890,
                      (s32) D_002632D0 - (s32) D_002243D0);
        break;
    case 2:
        func_800294A0((s32) D_002632D0, (s32) D_802D6890,
                      (s32) D_002AFC80 - (s32) D_002632D0);
        break;
    case 3:
        func_800294A0((s32) D_002AFC80, (s32) D_802D6890,
                      (s32) D_002D58C0 - (s32) D_002AFC80);
        break;
    case 4:
        func_800294A0((s32) D_002D58C0, (s32) D_802D6890,
                      (s32) D_002FDC40 - (s32) D_002D58C0);
        break;
    case 5:
        func_800294A0((s32) D_002FDC40, (s32) D_802D6890,
                      (s32) D_0032F100 - (s32) D_002FDC40);
        break;
    case 6:
        func_800294A0((s32) D_0032F100, (s32) D_802D6890,
                      (s32) D_00355850 - (s32) D_0032F100);
        break;
    case 7:
        func_800294A0((s32) D_00355850, (s32) D_802D6890,
                      (s32) D_003836A0 - (s32) D_00355850);
        break;
    case 8:
        func_800294A0((s32) D_003836A0, (s32) D_802D6890,
                      (s32) D_003B7C00 - (s32) D_003836A0);
        break;
    default:
        func_8003DE60(D_80232C10);
        break;
    }
    s0 = s2 & 0xFFFF;
    func_8013D1A4(s0);
    cnt = D_80232840[s2];

    i = 0;
    D_802330B0[0] = 0;
    D_802330B1[0] = (s0 == 2 || s0 == 6 || s0 == 7) ? 6 : 2;
    s0 = i * 16;
    *(u32 *) (D_802330B4 + s0) = v + i * 8;
    s3 = func_800DE41C(0, 0, 2, 0, 0x51, 0xFF, D_802330B0, 0, 0, 0, 0, 0, 0, 0,
                       0, 1.0f, 1.0f, 1.0f);
    D_80233EC0 = (u16) s3;
    D_80233D30[i] = (u16) s3;
    *(u16 *) (D_802330B8 + s0) = (u16) (cnt + s3 - 1);
    *(u16 *) (D_802330BA + s0) = (u16) (s3 + i + 1);
    *(u16 *) (D_802330BC + s0) = 0xFFFF;
    *(u16 *) (D_802330BE + s0) = 0xFFFF;

    one = 1.0f;
    for (i = 1; i < cnt - 1; i++) {
        s0 = i * 16;
        D_802330B0[s0] = 0;
        D_802330B1[s0] = (s2 == 2 || s2 == 6 || s2 == 7) ? 6 : 2;
        if (s2 == 7) {
            D_802330B1[9 * 16] = 2;
            D_802330B1[10 * 16] = 2;
        }
        *(u32 *) (D_802330B4 + s0) = v + i * 8;
        s3 = func_800DE41C(0, 0, 2, 0, 0x51, 0xFF, D_802330B0 + s0, 0, 0, 0, 0, 0,
                           0, 0, 0, one, one, one);
        D_80233D30[i] = (u16) s3;
        *(u16 *) (D_802330B8 + s0) = (u16) (s3 + i - 1);
        *(u16 *) (D_802330BA + s0) = (u16) (s3 + i + 1);
        *(u16 *) (D_802330BC + s0) = 0xFFFF;
        *(u16 *) (D_802330BE + s0) = 0xFFFF;
    }

    s0 = i * 16;
    D_802330B0[s0] = 0;
    D_802330B1[s0] = (s2 == 2 || s2 == 6 || s2 == 7) ? 6 : 2;
    *(u32 *) (D_802330B4 + s0) = v + i * 8;
    s3 = func_800DE41C(0, 0, 2, 0, 0x51, 0xFF, D_802330B0 + s0, 0, 0, 0, 0, 0, 0,
                       0, 0, 1.0f, 1.0f, 1.0f);
    D_80233D30[i] = (u16) s3;
    *(u16 *) (D_802330B8 + s0) = (u16) (cnt + s3 - 2);
    *(u16 *) (D_802330BA + s0) = (u16) s3;
    *(u16 *) (D_802330BC + s0) = 0xFFFF;
    *(u16 *) (D_802330BE + s0) = 0xFFFF;
    hi = 0;
}
