typedef struct { f32 x; f32 y; f32 z; } Vec3;
extern Vec3 D_8012AB40;
extern Vec3 D_8012AB4C;
extern Vec3 D_8012AB58;
extern Vec3 D_8012AB64;
extern Vec3 D_8012AB7C;
Vec3 vec3Sub(Vec3 *a, Vec3 *b);
Vec3 vec3Cross(Vec3 a, Vec3 b);
s8 vec3DotSign(Vec3 a, Vec3 b);

/* Returns 1 if the segment from D_8012AB58 to D_8012AB40 crosses the quad, else 0. */
u8 segmentCrossesQuad(void) {
    Vec3 edgeA, edgeB, toCorner0, toCorner1, fromCorner0A, fromCorner0B, normal, tmp;
    s8 sideA;
    s8 sideB;
    u8 hit;

    hit = 0;
    edgeA = vec3Sub(&D_8012AB4C, &D_8012AB64);
    edgeB = vec3Sub(&D_8012AB7C, &D_8012AB64);
    normal = vec3Cross(edgeA, edgeB);
    tmp = vec3Sub(&D_8012AB58, &D_8012AB64);
    if (vec3DotSign(tmp, normal) == -1) {
        tmp = vec3Sub(&D_8012AB40, &D_8012AB64);
        if (vec3DotSign(tmp, normal) == 1) {
            toCorner0 = vec3Sub(&D_8012AB58, &D_8012AB40);
            toCorner1 = vec3Sub(&D_8012AB64, &D_8012AB40);
            fromCorner0A = vec3Sub(&D_8012AB4C, &D_8012AB40);
            fromCorner0B = vec3Sub(&D_8012AB7C, &D_8012AB40);
            tmp = vec3Cross(fromCorner0A, fromCorner0B);
            sideA = vec3DotSign(toCorner0, tmp);
            tmp = vec3Cross(toCorner1, fromCorner0A);
            sideB = vec3DotSign(toCorner0, tmp);
            if (sideB == sideA) {
                tmp = vec3Cross(fromCorner0B, toCorner1);
                hit = sideB == vec3DotSign(toCorner0, tmp);
            }
        }
    }
    return hit;
}
