f32 __cosf(f32);
f32 __sinf(f32);
typedef struct {
    s16 slot;
    u8 pad2[0x26];
} ViewSlot;
typedef struct {
    u8 pad0[0x210C];
    ViewSlot view[2];
} Game;
typedef struct {
    f32 x;
    f32 y;
    f32 distance;
    f32 yaw;
    f32 pitch;
} Orbit;
typedef struct {
    f32 eyeX;
    f32 eyeY;
    f32 eyeZ;
    f32 atX;
    f32 atY;
    f32 atZ;
    u8 pad18[0xC];
} Camera;
extern Game sRowBoard;
extern s8 cursorY;
extern s8 cursorX;
extern Orbit D_801C6BC0;
extern Camera D_80221080[];

/* Places the two board cameras: view 0 orbits the cursor, view 1 looks at the board from a fixed angle. */ void setBoardCameras(void)
{
    s32 i;
    s32 j;
    f32 x;
    f32 z;
    f32 yaw;
    f32 pitch;

    i = sRowBoard.view[0].slot;
    x = D_801C6BC0.x = cursorX;
    z = D_801C6BC0.y = cursorY;
    D_801C6BC0.distance = 2000.0f;
    D_801C6BC0.yaw = 0.0f;
    D_801C6BC0.pitch = 85.0f;
    D_80221080[i].atX = x * 400.0f * 0.5f;
    D_80221080[i].atY = 20.0f;
    D_80221080[i].atZ = z * 400.0f * 0.5f;
    {
    f32 t = __sinf(D_801C6BC0.yaw * 3.1415927f / 180.0f) * D_801C6BC0.distance;
    D_80221080[i].eyeX = t
        - __sinf(D_801C6BC0.yaw * 3.1415927f / 180.0f) * __sinf(D_801C6BC0.pitch * 3.1415927f / 180.0f) * D_801C6BC0.distance
        + D_80221080[i].atX;
    }
    D_80221080[i].eyeY = __sinf(D_801C6BC0.pitch * 3.1415927f / 180.0f) * D_801C6BC0.distance + D_80221080[i].atY;
    {
    f32 t = __cosf(D_801C6BC0.yaw * 3.1415927f / 180.0f) * D_801C6BC0.distance;
    D_80221080[i].eyeZ = t
        - __cosf(D_801C6BC0.yaw * 3.1415927f / 180.0f) * __sinf(D_801C6BC0.pitch * 3.1415927f / 180.0f) * D_801C6BC0.distance
        + D_80221080[i].atZ;
    }

    yaw = 0.0f;
    pitch = 40.0f;
    j = sRowBoard.view[1].slot;
    D_80221080[j].atX = yaw;
    D_80221080[j].atY = -65.0f;
    D_80221080[j].atZ = yaw;
    {
    f32 t = __sinf(yaw * 3.1415927f / 180.0f) * 1050.0f;
    D_80221080[j].eyeX = t
        - __sinf(yaw * 3.1415927f / 180.0f) * __sinf(pitch * 3.1415927f / 180.0f) * 1050.0f + D_80221080[j].atX;
    }
    D_80221080[j].eyeY = __sinf(pitch * 3.1415927f / 180.0f) * 1050.0f + D_80221080[j].atY;
    {
    f32 t = __cosf(yaw * 3.1415927f / 180.0f) * 1050.0f;
    D_80221080[j].eyeZ = t
        - __cosf(yaw * 3.1415927f / 180.0f) * __sinf(pitch * 3.1415927f / 180.0f) * 1050.0f + D_80221080[j].atZ;
    }
}
