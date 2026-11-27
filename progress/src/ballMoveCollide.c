typedef struct {
    u8 f0;
    u8 f1;
    union { u16 h; struct { u8 f2; u8 f3; } b; } u;
    s16 s4;
    s16 s6;
    f32 x;
    f32 y;
    f32 z;
} Ball;
typedef struct { u8 pad[0x64]; } Obj64;
extern Obj64 D_8011F2F0[];
void func_80127AB0(Ball *, Obj64 *, f32, f32, f32, f32, f32, f32, f32, s32);
u8 findTrackSegment(s16 *, s16 *, f32, f32, f32);

/* Moves the ball from (startX, startY, startZ) by (velX, velY, velZ), bouncing off track geometry until the move is used up; updates its track segment and accumulates hit flags and bounce count. */
void ballMoveCollide(Ball *ball, f32 startX, f32 startY, f32 startZ, f32 velX, f32 velY, f32 velZ)
{
    u8 hitFlags = 0;
    u8 bounceCount = 0;
    u8 segResult;
    f32 posX, posY, posZ;
    f32 remX, remY, remZ;

    remX = velX;
    remY = velY;
    remZ = velZ;

    segResult = findTrackSegment(&ball->s4, &ball->s6, startX, startY, startZ);
    if (segResult == 0 || segResult == 2) {
        ball->x = remX + ball->x;
        ball->y = remY + ball->y;
        ball->z = remZ + ball->z;
        ball->f1 = 0;
        ball->u.b.f2 = 0;
        return;
    }
    while (1) {
        func_80127AB0(ball, &D_8011F2F0[(u16)ball->s4], 12.0f, startX, startY, startZ, remX, remY, remZ, 1);
        posX = ball->x;
        posY = ball->y;
        posZ = ball->z;
        remX = posX - startX;
        remY = posY - startY;
        remZ = posZ - startZ;
        hitFlags |= ball->f1;
        bounceCount += ball->u.b.f2;
        if (ball->u.h == 1) {
            break;
        }
        if (ball->u.b.f3 != 0) {
            continue;
        }
        segResult = findTrackSegment(&ball->s4, &ball->s6, posX, posY, posZ);
        if (segResult == 0) {
            break;
        }
        if (segResult != 2) {
            continue;
        }
        func_80127AB0(ball, &D_8011F2F0[(u16)ball->s4], 12.0f, startX, startY, startZ, remX, remY, remZ, 1);
        posX = ball->x;
        posY = ball->y;
        posZ = ball->z;
        remX = posX - startX;
        remY = posY - startY;
        remZ = posZ - startZ;
        hitFlags = ball->f1 | hitFlags;
        bounceCount = ball->u.b.f2 + bounceCount;
        if (ball->u.b.f2 == 0) {
            break;
        }
        if (ball->u.b.f3 == 0) {
            findTrackSegment(&ball->s4, &ball->s6, posX, posY, posZ);
        }
    }
    ball->f1 = hitFlags;
    ball->u.b.f2 = bounceCount;
}
