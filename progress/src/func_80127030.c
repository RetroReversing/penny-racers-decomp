typedef struct {f32 x,y,z;} Vec3f;
Vec3f func_80127030(Vec3f a, Vec3f b) {
Vec3f c;
c.x=a.y*b.z-b.y*a.z;
c.y=a.z*b.x-b.z*a.x;
c.z=a.x*b.y-b.x*a.y;
return c;
}
