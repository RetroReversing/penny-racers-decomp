typedef struct { f32 x; f32 y; f32 z; } Vec3;
typedef struct {
    u8 pad0[2];
    u16 id;
    u8 pad1[2];
    u16 flags;
    u8 pad2[1856];
    f32 speed;
    u8 pad3[28];
    f32 x768;
    u8 pad4[8];
    f32 x774;
    u8 pad5[24];
    f32 x790;
    u8 pad6[4];
    f32 x798;
    Vec3 d;
    u8 pad7[12];
    Vec3 vel2;
    Vec3 vel;
    u8 pad8[70];
    u8 x812;
    u8 pad9[5];
    Vec3 pos;
    Vec3 normal;
    u8 pad10[48];
    u8 x860;
    u8 pad11[7];
    f32 x868;
    f32 x86C;
    u8 pad12[49];
    u8 x8A1;
    u8 pad13[30];
    u8 x8C0;
    s8 x8C1;
    u8 pad14[14];
    u8 x8D0;
    u8 x8D1;
} Car;
extern u8 D_8021E144;
f32 sqrtf(f32);
void func_801D7028(u16, s32);

void func_80226280(Car *c) {
    f32 a;
    f32 b;
    f32 e;
    f32 k;
    f32 vx, vz;
    f32 nx, nz;
    f32 dot;
    f32 f;

    c->d.x = c->pos.x - c->d.x - c->vel.x;
    c->d.y = c->pos.y - c->d.y - c->vel.y;
    c->d.z = c->pos.z - c->d.z - c->vel.z;
    a = sqrtf(c->x790 * c->x790 + c->x798 * c->x798);
    b = sqrtf(c->vel.x * c->vel.x + c->vel.z * c->vel.z);
    e = sqrtf(c->d.x * c->d.x + c->d.z * c->d.z);
    if (b != 0) {
        c->x868 = e / b * 100.0f;
    } else {
        c->x868 = 0;
    }
    if (a != 0) {
        c->x86C = b / a * 100.0f;
    } else {
        c->x86C = 100.0f;
    }
    if (c->x868 < 0) {
        c->x868 = 0;
    } else if (c->x868 > 100.0f) {
        c->x868 = 100.0f;
    }
    if (c->x868 > 0 && c->x812 != 0) {
        k = (100.0f - c->x868) * 0.0025f + 0.75f;
        c->speed = k * c->speed;
        vx = c->vel.x;
        b = c->vel.y;
        vz = c->vel.z;
        a = sqrtf(vx * vx + b * b + vz * vz);
        nx = c->normal.x;
        e = c->normal.y;
        nz = c->normal.z;
        if ((a != 0) & (e < 0.5f)) {
            dot = (vx * nx + b * e + vz * nz) / a;
            c->x8D1 = 0x78;
            if ((c->x8A1 == 4) & (dot < -0.9396f)) {
                c->vel2.x *= -0.2f;
                c->vel2.z *= -0.2f;
                c->vel.x *= -0.2f;
                c->vel.z *= -0.2f;
                c->vel.y = c->x774 * 0.014f + c->vel.y;
                c->x8C1 *= -1;
                func_801D7028(c->id, 0x29);
                c->flags |= 1;
                c->x8C0 = 1;
                c->x860 = 0;
            } else {
                if (D_8021E144) {
                    b = dot * a * (-1.0f - k * 0.2f);
                } else {
                    b = dot * a * (-1.0f - k * 0.15f);
                }
                vx += nx * b;
                vz += nz * b;
                c->vel2.x = vx;
                c->vel2.z = vz;
                c->vel.x = vx;
                c->vel.y = 0;
                c->vel.z = vz;
                c->x8D0 = 0x78;
                func_801D7028(c->id, 0x29);
                c->flags |= 1;
            }
        }
    } else {
        c->x768 = 0;
    }
}
