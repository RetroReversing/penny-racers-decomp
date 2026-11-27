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
void queueObjEvent(u16, s32);

/* Wall collision response for one car: updates its slip and grip values, damps its speed, then either bounces it off the wall or slides it along the wall. */ void carWallCollide(Car *car) {
    f32 refSpeed;
    f32 horizSpeed;
    f32 slipDist;
    f32 dampFactor;
    f32 vx, vz;
    f32 nx, nz;
    f32 normalVel;
    f32 f;

    car->d.x = car->pos.x - car->d.x - car->vel.x;
    car->d.y = car->pos.y - car->d.y - car->vel.y;
    car->d.z = car->pos.z - car->d.z - car->vel.z;
    refSpeed = sqrtf(car->x790 * car->x790 + car->x798 * car->x798);
    horizSpeed = sqrtf(car->vel.x * car->vel.x + car->vel.z * car->vel.z);
    slipDist = sqrtf(car->d.x * car->d.x + car->d.z * car->d.z);
    if (horizSpeed != 0) {
        car->x868 = slipDist / horizSpeed * 100.0f;
    } else {
        car->x868 = 0;
    }
    if (refSpeed != 0) {
        car->x86C = horizSpeed / refSpeed * 100.0f;
    } else {
        car->x86C = 100.0f;
    }
    if (car->x868 < 0) {
        car->x868 = 0;
    } else if (car->x868 > 100.0f) {
        car->x868 = 100.0f;
    }
    if (car->x868 > 0 && car->x812 != 0) {
        dampFactor = (100.0f - car->x868) * 0.0025f + 0.75f;
        car->speed = dampFactor * car->speed;
        vx = car->vel.x;
        horizSpeed = car->vel.y;
        vz = car->vel.z;
        refSpeed = sqrtf(vx * vx + horizSpeed * horizSpeed + vz * vz);
        nx = car->normal.x;
        slipDist = car->normal.y;
        nz = car->normal.z;
        if ((refSpeed != 0) & (slipDist < 0.5f)) {
            normalVel = (vx * nx + horizSpeed * slipDist + vz * nz) / refSpeed;
            car->x8D1 = 0x78;
            if ((car->x8A1 == 4) & (normalVel < -0.9396f)) {
                car->vel2.x *= -0.2f;
                car->vel2.z *= -0.2f;
                car->vel.x *= -0.2f;
                car->vel.z *= -0.2f;
                car->vel.y = car->x774 * 0.014f + car->vel.y;
                car->x8C1 *= -1;
                queueObjEvent(car->id, 0x29);
                car->flags |= 1;
                car->x8C0 = 1;
                car->x860 = 0;
            } else {
                if (D_8021E144) {
                    horizSpeed = normalVel * refSpeed * (-1.0f - dampFactor * 0.2f);
                } else {
                    horizSpeed = normalVel * refSpeed * (-1.0f - dampFactor * 0.15f);
                }
                vx += nx * horizSpeed;
                vz += nz * horizSpeed;
                car->vel2.x = vx;
                car->vel2.z = vz;
                car->vel.x = vx;
                car->vel.y = 0;
                car->vel.z = vz;
                car->x8D0 = 0x78;
                queueObjEvent(car->id, 0x29);
                car->flags |= 1;
            }
        }
    } else {
        car->x768 = 0;
    }
}
