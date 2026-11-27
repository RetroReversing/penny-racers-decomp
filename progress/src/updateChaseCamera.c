f32 __sinf(f32);
f32 __cosf(f32);
f32 sqrtf(f32);
typedef struct {
    u8 pad0[0xC];
    u8 slot;
    u8 padD[0xB];
    f32 x;
    f32 y;
    f32 z;
    f32 rotX;
    f32 rotY;
    f32 rotZ;
    u8 pad30[0x34];
} Sprite;
typedef struct {
    u16 sprite;
    u8 pad2[0x8EE];
} Racer;
typedef struct {
    f32 eyeX;
    f32 eyeY;
    f32 eyeZ;
    f32 atX;
    f32 atY;
    f32 atZ;
    f32 upX;
    f32 upY;
    f32 upZ;
} Camera;
extern Sprite D_8011F2F0[];
extern Racer D_8022A772[];
extern f32 D_802210A4, D_802210A8, D_802210AC, D_802210B0, D_802210B4, D_802210B8, D_802210BC, D_802210C0, D_802210C4;
extern u16 D_8022B062;
extern u8 D_8022AF3C[];
extern Camera D_80221080[];
void func_80129C88(void *, s32, s32);
void guRotateF(f32 [4][4], f32, f32, f32, f32);
void guMtxCatF(f32 [4][4], f32 [4][4], f32 [4][4]);
void guMtxXFMF(f32 [4][4], f32, f32, f32, f32 *, f32 *, f32 *);
f32 func_801F9C8C(f32, f32);

/* Moves the chase camera for a view slot toward a point behind the lead car, easing its up vector toward the car's orientation. */ void updateChaseCamera(u16 id)
{
    f32 spinY[4][4];
    f32 spinX[4][4];
    f32 spinZ[4][4];
    f32 spin[4][4];
    f32 ux;
    f32 uy;
    f32 uz;
    Camera *cam;
    f32 dx;
    f32 dy;
    f32 dz;
    f32 len;
    f32 inv;
    f32 yaw;
    f32 pitch;
    f32 dist;
    u16 n;
    u16 lead;
    f32 zero;
    f32 ry;
    f32 rz;
    Sprite *first;
    Sprite *second;

    zero = 0.0f;
    first = &D_8011F2F0[D_8022A772[0].sprite];
    second = &D_8011F2F0[D_8022B062];
    D_802210A4 = first->x;
    D_802210A8 = first->y + 30.0f;
    D_802210AC = first->z;
    D_802210B0 = second->x;
    D_802210B4 = second->y + 15.0f;
    D_802210B8 = second->z;
    D_802210BC = zero;
    D_802210C0 = 1.0f;
    D_802210C4 = zero;
    func_80129C88(D_8022AF3C, 4, 0);
    n = D_8011F2F0[id].slot;
    lead = D_8022A772[n / 3].sprite;
    zero = D_8011F2F0[lead].rotX;
    ry = D_8011F2F0[lead].rotY;
    rz = D_8011F2F0[lead].rotZ;
    guRotateF(spinX, zero, 1.0f, 0.0f, 0.0f);
    guRotateF(spinY, ry, 0.0f, 1.0f, 0.0f);
    guRotateF(spinZ, rz, 0.0f, 0.0f, 1.0f);
    guMtxCatF(spinY, spinX, spin);
    guMtxCatF(spin, spinZ, spin);
    guMtxXFMF(spin, 0.0f, 1.0f, 0.0f, &ux, &uy, &uz);
    D_80221080[n - 1].upX = (cam = &D_80221080[n])->upX = D_80221080[n].upX + (ux - D_80221080[n].upX) * 0.05;
    D_80221080[n - 1].upX = cam->upY = D_80221080[n].upY + (uy - D_80221080[n].upY) * 0.05;
    D_80221080[n - 1].upX = cam->upZ = D_80221080[n].upZ + (uz - D_80221080[n].upZ) * 0.05;
    dx = D_80221080[n].atX - D_80221080[n].eyeX;
    dy = D_80221080[n].atY - D_80221080[n].eyeY;
    dz = D_80221080[n].atZ - D_80221080[n].eyeZ;
    len = sqrtf(dx * dx + dy * dy + dz * dz);
    pitch = 0.0f;
    inv = 1.0f / len;
    dx *= inv;
    dz *= inv;
    yaw = func_801F9C8C(dz, -dx);
    dist = 400.0f;
    D_80221080[n - 1].eyeX = pitch;
    D_80221080[n - 1].eyeY = pitch;
    D_80221080[n - 1].eyeZ = pitch;
    {
        f32 t = __sinf(yaw) * dist;
        D_80221080[n - 1].atX = t - __sinf(yaw) * __sinf(pitch) * dist;
    }
    D_80221080[n - 1].atY = __sinf(pitch) * dist;
    {
        f32 t = __cosf(yaw) * dist;
        D_80221080[n - 1].atZ = t - __cosf(yaw) * __sinf(pitch) * dist;
    }
}
