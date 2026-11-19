#include "common_local_source_339302417517.h"

f32 sqrtf(f32);
void func_801F9C8C(f32, f32);

void func_801FA240(f32 a, f32 b, f32 c, f32 d, f32 e, f32 f) {
    f32 v[3];
    f32 len;
    f32 inv;
    v[0] = a - d;
    v[1] = b - e;
    v[2] = c - f;
    len = sqrtf(v[0] * v[0] + v[1] * v[1] + v[2] * v[2]);
    if (len != 0.0f) {
        inv = 1.0f / len;
        v[0] = inv * v[0];
        v[1] = inv * v[1];
        v[2] = inv * v[2];
        func_801F9C8C(v[0], v[2]);
    }
}
