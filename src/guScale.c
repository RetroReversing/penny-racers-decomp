void guMtxIdentF(f32 *);
void guMtxF2L(f32 *, void *);

void guScale(void *arg0, f32 arg1, f32 arg2, f32 arg3)
{
    f32 mtx[4][4];
    f32 *m;

    m = &mtx[0][0];
    guMtxIdentF(m);
    m[0] = arg1;
    m[5] = arg2;
    m[10] = arg3;
    m[15] = 1.0f;
    guMtxF2L(m, arg0);
}
