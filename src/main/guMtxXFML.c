#include "common.h"

void guMtxL2F(f32 *, s32 *);
void guMtxXFMF(void *, f32, f32, f32, f32 *, f32 *, f32 *);
void guMtxXFML(s32 *m, f32 x, f32 y, f32 z, f32 *ox, f32 *oy, f32 *oz) { f32 mf[4][4]; guMtxL2F(&mf[0][0], m); guMtxXFMF(mf,x,y,z,ox,oy,oz); }
