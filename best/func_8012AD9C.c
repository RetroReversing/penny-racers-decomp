extern u16 D_8006FAF0[];
extern s16 D_800DB1B8[];
extern u8 D_8011F2F2[];
extern u8 D_8011F2FC[];
extern u8 D_8011F2FD[];
extern u8 D_8011F308[];
extern u8 D_8011F30C[];
extern u8 D_8011F310[];
extern u8 D_8011F314[];
extern u8 D_8011F318[];
extern u8 D_8011F31C[];
extern u8 D_8011F32E[];
extern u8 D_8011F350[];
extern u8 D_8022A772[];
extern u8 D_8022AF3C[];
extern u8 D_80221080[];
extern u8 D_80221084[];
extern u8 D_80221088[];
extern u8 D_8022108C[];
extern u8 D_80221090[];
extern u8 D_80221094[];
extern u8 D_80221098[];
extern u8 D_8022109C[];
extern u8 D_802210A0[];
extern u8 D_801E995C[];
extern u8 D_801E9994[];
extern f32 D_80183A30[];
extern f32 D_80183A40[];
extern f32 D_80183A50[];
extern f32 D_80183A60[];
extern f32 D_80183A78[];
extern f32 D_80183A70;
extern f32 D_80220E40;
extern u8 D_80189CC8;
extern u8 D_8018A264[];
extern u8 D_8018D398[];
extern u8 D_8018D399;
extern u8 D_8022AFE9;
extern u8 D_8022B8D9;
extern u16 D_80167E60, D_80167E62, D_80167E64, D_80167E66;
extern u16 D_8018BC3C;
extern u16 D_8018BC30;
extern u8 D_8018BC33;
extern u16 D_80190C90;
extern u16 D_8018A26E[];
extern u8 *D_801C7AB0;
extern u8 D_8012C4F4[], D_8013095C[], D_80131090[], D_801306B4[];
extern s32 func_80148230();
extern void func_801D65BC();
extern s32 func_800DE41C();
extern void func_80134688();
extern void func_80132004();
extern void func_80132AB0();
extern void func_801337B0();
extern void func_80135108();
extern void func_8013536C();
extern void func_80129FD4();
extern void func_80129C88();
extern f32 func_801F9C8C(f32 a, f32 b);
extern f32 __sinf(f32);
extern f32 __cosf(f32);
#define sinf __sinf
#define cosf __cosf
extern f32 sqrtf(f32);
extern void guRotateF(f32 m[4][4], f32 a, f32 x, f32 y, f32 z);
extern void guMtxCatF(f32 a[4][4], f32 b[4][4], f32 c[4][4]);
extern void guMtxXFMF(f32 m[4][4], f32 x, f32 y, f32 z, f32 *ox, f32 *oy, f32 *oz);

#define OBJ(T, sym, i) (*(T *)((char *)&sym + (u16)(i) * 0x64))
#define PP(T, sym, i) (*(T *)((char *)&sym + (u16)(i) * 36))
#define POS(R, PITCH, YAW) \
    yaw = (YAW) * 3.14f / 180.0f; \
    px = sinf(yaw) * (R); \
    px = px - sinf(yaw) * sinf((PITCH) * 3.14f / 180.0f) * (R) + ox; \
    py = sinf((PITCH) * 3.14f / 180.0f) * (R) + oy; \
    pz = cosf(yaw) * (R); \
    pz = pz - cosf(yaw) * sinf((PITCH) * 3.14f / 180.0f) * (R) + oz;

void func_8012AD9C(u16 id) {
    u16 d;
    u16 t;
    u16 s3;
    u16 i;
    f32 ox, oy, oz;
    f32 yaw, px, py, pz;
    f32 dx, dy, dz, len, sc;
    f32 m0[4][4];
    f32 m1[4][4];
    f32 m2[4][4];
    f32 m3[4][4];
    f32 v[3];
    f32 qx, qy, qz;
    f32 ang, zero;

    t = OBJ(u8, D_8011F2FC, id);
    s3 = t / 3;
    d = *(u16 *)(D_8022A772 + s3 * 2288);
    ox = OBJ(f32, D_8011F308, d);
    oy = OBJ(f32, D_8011F30C, d) + 16.0f;
    oz = OBJ(f32, D_8011F310, d);
    D_80183A60[s3] = OBJ(f32, D_8011F318, d);

    switch (OBJ(u16, D_8011F32E, id)) {
    case 0:
        D_80189CC8 = func_80148230();
        if (D_8006FAF0[16] == 0) {
            D_80189CC8 = 3;
        }
        D_80220E40 = 50.0f;
        for (i = 0; i < 7; i++) {
            D_8018A264[i] = 1;
        }
        if (D_80189CC8 == 3) {
            for (i = 0; i < 4; i++) {
                D_8018D398[i] = i;
            }
        } else {
            for (i = 1; i < 7; i++) {
                D_8018D398[i] = 2;
            }
            if (D_8022AFE9 == 0) {
                D_8018D398[0] = 0;
            }
            if (!D_8022B8D9) {
                D_8018D399 = 1;
            }
        }
        D_80167E60 = 0;
        D_80167E62 = 0;
        D_80167E64 = 0;
        D_80167E66 = 0;
        func_801D65BC(15);
        D_80183A40[s3] = 0;
        D_80183A50[s3] = 5.0f;
        D_80183A30[s3] = 40.0f;
        D_80183A78[s3] = 0;
        D_80183A70 = 1.0f;
        POS(D_80183A30[s3], D_80183A50[s3], D_80183A40[s3] + D_80183A60[s3])
        PP(f32, D_80221080, t) = px;
        PP(f32, D_80221084, t) = py;
        PP(f32, D_8022108C, t) = ox;
        PP(f32, D_80221088, t) = pz;
        PP(f32, D_80221090, t) = oy;
        PP(f32, D_80221094, t) = oz;
        *(u8 *)OBJ(u32, D_8011F350, D_8018BC3C) = 1;
        OBJ(u16, D_8011F32E, id) = 1;
        break;
    case 1:
        D_80183A30[s3] = (300.0f - D_80183A30[s3]) * 0.03f + D_80183A30[s3];
        D_80183A50[s3] += 0.2f;
        if (D_80183A50[s3] >= 24.0f) {
            OBJ(u16, D_8011F32E, id) = 2;
        }
        POS(D_80183A30[s3], D_80183A50[s3], D_80183A40[s3] + D_80183A60[s3])
        PP(f32, D_80221080, t) = px;
        PP(f32, D_80221084, t) = py;
        PP(f32, D_80221088, t) = pz;
        PP(f32, D_8022108C, (u32)t) = ox;
        PP(f32, D_80221094, t) = oz;
        if (PP(f32, D_80221090, t) < oy + 10.0f) {
            PP(f32, D_80221090, t) = PP(f32, D_80221090, t) + 1.0f;
        }
        break;
    case 2:
        D_80183A40[s3] += 1.5f;
        if (D_80183A40[s3] >= 180.0f) {
            OBJ(u16, D_8011F32E, id) = 3;
        }
        D_80183A30[s3] -= 1.0f;
        D_80183A50[s3] -= 0.1f;
        POS(D_80183A30[s3], D_80183A50[s3], D_80183A40[s3] + D_80183A60[s3])
        PP(f32, D_80221088, t) = pz;
        PP(f32, D_80221084, t) = py;
        PP(f32, D_80221080, t) = px;
        PP(f32, D_8022108C, t) = ox;
        PP(f32, D_80221094, t) = oz;
        if (oy < PP(f32, D_80221090, t)) {
            PP(f32, D_80221090, t) = PP(f32, D_80221090, t) - 1.0f;
        }
        break;
    case 3:
        yaw = (D_80183A60[s3] + 180.0f) * 3.14f / 180.0f;
        px = sinf(yaw) * 47.0f;
        px = px - sinf(yaw) * sinf(0.157f) * 47.0f + ox;
        py = sinf(0.157f) * 47.0f + oy;
        pz = cosf(yaw) * 47.0f;
        pz = pz - cosf(yaw) * sinf(0.157f) * 47.0f + oz;
        dx = px - PP(f32, D_80221080, t);
        dy = py - PP(f32, D_80221084, t);
        dz = pz - PP(f32, D_80221088, t);
        len = sqrtf(dx * dx + dy * dy + dz * dz);
        sc = len * 0.06f / len;
        dy *= sc;
        dz *= sc;
        dx *= sc;
        PP(f32, D_80221084, t) = dy + PP(f32, D_80221084, t);
        PP(f32, D_80221080, t) = (u32)dx + PP(f32, D_80221080, t);
        PP(f32, D_80221088, t) = dz + PP(f32, D_80221088, t);
        if (len < D_80183A70) {
            OBJ(u16, D_8011F32E, id) = 20;
        }
        PP(f32, D_8022108C, t) = ox;
        PP(f32, D_80221094, t) = oz;
        PP(f32, D_80221090, t) = oy;
        break;
    case 20:
        i = 0x20;
        OBJ(u8, D_8011F2FD, id) = 1;
        if (s3 == 0 && (D_80189CC8 == 0 || (D_80189CC8 == 3 && D_800DB1B8[0x1084] == 1))) {
            for (i = 0; i < 4; i++) {
                *(u16 *)(D_801E995C + i * 112) |= 0x2000;
            }
        }
        func_800DE41C(0, 0x63, 3, 0, 0x20, t & 0xFF, 0, D_8012C4F4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
        if (s3 == 0) {
            func_800DE41C(0, 0, 3, 0, 0x83, 0xFF, 0, D_8013095C, D_80131090, 0, 0, 0, 0, 0, 0, 0, 0, 0);
            D_80190C90 = func_800DE41C(0, s3 & 0xFF, 3, 0, 0x81, 0xC8, 0, 0, func_80132004, 0, 0, 0, 0, 0, 0, 0, 0, 0);
            if (D_80189CC8 == 3) {
                func_80134688();
            }
        }
        if (D_800DB1B8[0x1084] < 3) {
            D_8018A26E[s3] = func_800DE41C(0, s3 & 0xFF, 3, 0, 0x80, 0xFF, 0, 0, func_80132AB0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
            if (D_800DB1B8[0x1084] == 1) {
                register D_8018BC30 = func_800DE41C(0, 0, 3, 0x200, 0x71, s3 & 0xFF, 0, 0, D_801306B4, 0, 0, 0, 0, 0, 0, 0, 0, 0);
                if (D_80189CC8 != 3) {
                    D_8018BC33 = 1;
                    OBJ(u16, D_8011F2F2, D_8018BC30) |= 8;
                } else {
                    D_8018BC33 = 0;
                }
            }
        } else {
            D_8018A26E[s3] = func_800DE41C(0, s3 & 0xFF, 3, 0, 0x80, 0xFF, 0, 0, func_801337B0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
        }
        if (D_80183A78[s3] != 0.0f) {
            D_80183A40[s3] = 180.0f;
            D_80183A50[s3] = 9.0f;
            D_80183A30[s3] = 47.0f;
            POS(D_80183A30[s3], D_80183A50[s3], D_80183A40[s3] + D_80183A60[s3])
            PP(f32, D_80221080, t) = px;
            PP(f32, D_80221084, t) = py;
            PP(f32, D_8022108C, t) = ox;
            PP(f32, D_80221088, t) = pz;
            PP(f32, D_80221090, t) = oy;
            PP(f32, D_80221094, t) = oz;
        }
        func_800DE41C(0, s3 & 0xFF, 3, 0, 0x81, 0, 0, func_80135108, func_8013536C, 0, 0, 0, 0, 0, 0, 0, 0, 0);
        break;
    default:
        break;
    }

    if (D_8006FAF0[16] == 0 && D_801C7AB0[1] == 6) {
        func_80129FD4(D_8022AF3C + s3 * 2288, 4, s3 & 0xFF);
    } else {
        func_80129C88(D_8022AF3C + s3 * 2288, 4, s3 & 0xFF);
    }

    qx = OBJ(f32, D_8011F314, d);
    qy = OBJ(f32, D_8011F318, d);
    qz = OBJ(f32, D_8011F31C, d);
    guRotateF(m1, qy, 0.0f, 1.0f, 0.0f);
    guRotateF(m0, qx, 1.0f, 0.0f, 0.0f);
    guRotateF(m2, qz, 0.0f, 0.0f, 1.0f);
    guMtxCatF(m1, m0, m3);
    guMtxCatF(m3, m2, m3);
    guMtxXFMF(m3, 0.0f, 1.0f, 0.0f, &qx, &qy, &qz);
    {
        char *p = (char *)&D_80221080 + (u16)t * 36;
#define a98 px
#define a9c py
#define aa0 pz
        a98 = (qx - PP(f32, D_80221098, t)) * 0.05f + PP(f32, D_80221098, t);
        *(f32 *)(p + 0x18) = a98;
        PP(f32, D_80221098, t - 1) = a98;
        a9c = (qy - PP(f32, D_8022109C, t)) * 0.05f + PP(f32, D_8022109C, t);
        *(f32 *)(p + 0x1C) = a9c;
        PP(f32, D_80221098, t - 1) = a9c;
        aa0 = (qz - PP(f32, D_802210A0, t)) * 0.05f + PP(f32, D_802210A0, t);
        *(f32 *)(p + 0x20) = aa0;
        PP(f32, D_80221098, t - 1) = aa0;
    }
    v[0] = PP(f32, D_8022108C, t) - PP(f32, D_80221080, (s32)t);
    v[1] = PP(f32, D_80221090, t) - PP(f32, D_80221084, t);
    v[2] = PP(f32, D_80221094, t) - PP(f32, D_80221088, t);
    len = sqrtf(v[0] * v[0] + v[1] * v[1] + v[2] * v[2]);
    sc = 1.0f / len;
    v[0] = sc * v[0];
    v[2] = (unsigned)sc * v[2];
    v[1] = sc * v[1];
    ang = func_801F9C8C(v[2], -v[0]);
    zero = 0.0f;
    PP(f32, D_80221080, t - 1) = zero;
    PP(f32, D_80221084, t - 1) = zero;
    PP(f32, D_80221088, t - 1) = zero;
    PP(f32, D_8022108C, t - 1) = sinf(ang) * 400.0f - sinf(ang) * sinf(zero) * 400.0f;
    PP(f32, D_80221090, t - 1) = sinf(zero) * 400.0f;
    PP(f32, D_80221094, t - 1) = cosf(ang) * 400.0f - cosf(ang) * sinf(zero) * 400.0f;
    if (D_80189CC8) {
        if (*(s32 *)(D_801E9994 + s3 * 112) == 1 || D_80183A78[s3] == 1.0f) {
            OBJ(u16, D_8011F32E, id) = 20;
            for (i = 0; i < 4; i++) {
                D_80183A78[i] = 1.0f;
            }
        }
    }
}
