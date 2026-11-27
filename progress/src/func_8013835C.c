typedef struct { u16 pad0; u16 size[4]; u8 padA[0xE]; f32 pos[3]; f32 rot[3]; f32 x30; u8 pad34[4]; f32 x38; u8 pad3C[8]; f32 vel[3]; u8 pad50[0x14]; } Obj;
typedef struct { u8 pad0[0x7D0]; u16 obj; u8 pad[0x11E]; } Car;
typedef struct { u8 x0; u8 flag; u8 pad2[2]; u16 obj; u8 pad6[6]; f32 y; u8 pad10[4]; f32 nx; f32 ax; f32 az; u8 pad20[0x28]; } Hit;
extern Obj D_8011F2F0[];
extern Car sCars[];
void func_80129C1C(void *, f32, f32, f32, f32, f32, f32);
f32 func_801F9AC0(f32);
f32 func_801F9C8C(f32, f32);
f32 sqrtf(f32);

void func_8013835C(u16 id) {
    Hit hit;
    s32 i;
    Obj *o;
    f32 x;
    f32 v;

    hit.obj = sCars[(s32) D_8011F2F0[id].vel[1]].obj;
    func_80129C1C(&hit, D_8011F2F0[(u16) D_8011F2F0[id].vel[0]].pos[0], D_8011F2F0[(u16) D_8011F2F0[id].vel[0]].pos[1], D_8011F2F0[(u16) D_8011F2F0[id].vel[0]].pos[2], 0.0f, -40.0f, 0.0f);
    D_8011F2F0[id].pos[0] = D_8011F2F0[(u16) D_8011F2F0[id].vel[0]].pos[0] + 0.5f;
    D_8011F2F0[id].pos[2] = D_8011F2F0[(u16) D_8011F2F0[id].vel[0]].pos[2] - 0.5f;
    if (hit.flag != 0) {
        for (i = 0; i < 4; i++) {
            D_8011F2F0[id].size[i] = D_8011F2F0[(u16) D_8011F2F0[id].vel[0]].size[i];
        }
        D_8011F2F0[id].pos[1] = hit.y;
        D_8011F2F0[id].rot[1] = D_8011F2F0[(u16) D_8011F2F0[id].vel[0]].rot[1];
        x = -hit.nx;
        D_8011F2F0[id].rot[2] = func_801F9AC0(x / sqrtf(1.0f - x * x)) * 360.0f / 6.28f;
        D_8011F2F0[id].rot[0] = func_801F9C8C(hit.az, hit.ax) * 360.0f / 6.28f;
        o = &D_8011F2F0[id]; D_8011F2F0[id].x30 = o->x38 = D_8011F2F0[id].vel[2] * ((40.0f - (D_8011F2F0[(u16) D_8011F2F0[id].vel[0]].pos[1] - D_8011F2F0[id].pos[1])) / 40.0f);
    } else {
        for (i = 0; i < 4; i++) {
            D_8011F2F0[id].size[i] |= 0x20;
        }
        D_8011F2F0[id].pos[1] = D_8011F2F0[(u16) D_8011F2F0[id].vel[0]].pos[1];
        D_8011F2F0[id].x30 = D_8011F2F0[id].x38 = D_8011F2F0[id].vel[2];
    }
}
