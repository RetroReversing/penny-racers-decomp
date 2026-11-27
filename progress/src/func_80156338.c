typedef struct { s16 v; s16 pad[7]; } Rec;
f32 __sinf(f32);
extern u16 D_8016D698;
extern u16 D_8016D69A;
extern f64 D_80183820;
extern f64 D_80183828;
extern Rec D_802E90F4[];
extern Rec D_802E8D54[];
extern Rec D_802E8DF4[];
extern Rec D_802E8E94[];
extern Rec D_802E93A4[];
extern Rec D_802E93F4[];
extern Rec D_802E9474[];
extern Rec D_802E9214[];
extern Rec D_802E9274[];

void func_80156338(void)
{
    s16 old;
    s32 i;
    f64 temp_fs0;
    f64 temp_fs1;
    f64 angle;
    f32 fs2;
    f32 fv1;

    old = D_8016D698;
    D_8016D698 = old + 3;
    if ((u16) D_8016D698 >= 0x169U) {
        D_8016D698 = old - 0x165;
    }
    angle = (f64) D_8016D698;
    temp_fs1 = D_80183820;
    angle = angle * temp_fs1;
    temp_fs0 = D_80183828;
    angle = angle / temp_fs0;
    fs2 = (__sinf((f32) angle) * (f32) D_8016D69A) + 400.0f;
    angle = (f64) D_8016D698;
    angle = angle * temp_fs1;
    angle = angle / temp_fs0;
    fv1 = (__sinf((f32) angle) * (f32) D_8016D69A) + 200.0f;

    D_802E90F4[0].v = (s16) (s32) fs2;
    D_802E90F4[1].v = (s16) (s32) fs2;
    D_802E90F4[3].v = (s16) (s32) fs2;
    D_802E90F4[2].v = (s16) (s32) fv1;
    D_802E90F4[4].v = (s16) (s32) fv1;
    D_802E90F4[5].v = (s16) (s32) fv1;

    for (i = 0; i < 6; i++) {
        D_802E9214[i].v = (s16) (s32) fv1;
        D_802E9274[i].v = (s16) (s32) fs2;
    }

    D_802E8D54[0].v = (s16) (s32) fs2;
    D_802E8D54[2].v = (s16) (s32) fv1;
    D_802E8D54[1].v = (s16) (s32) fs2;
    D_802E8D54[4].v = (s16) (s32) fv1;

    D_802E8DF4[0].v = (s16) (s32) fv1;
    D_802E8DF4[1].v = (s16) (s32) fv1;
    D_802E8DF4[2].v = (s16) (s32) fv1;
    D_802E8DF4[3].v = (s16) (s32) fv1;
    D_802E8DF4[4].v = (s16) (s32) fv1;
    D_802E8DF4[6].v = (s16) (s32) fv1;

    D_802E8E94[0].v = (s16) (s32) fs2;
    D_802E8E94[1].v = (s16) (s32) fs2;
    D_802E8E94[2].v = (s16) (s32) fs2;
    D_802E8E94[3].v = (s16) (s32) fs2;
    D_802E8E94[4].v = (s16) (s32) fs2;
    D_802E8E94[5].v = (s16) (s32) fs2;

    D_802E93A4[0].v = (s16) (s32) fv1;
    D_802E93A4[-2].v = (s16) (s32) fs2;
    D_802E93A4[-1].v = (s16) (s32) fv1;
    D_802E93A4[-4].v = (s16) (s32) fs2;

    D_802E93F4[0].v = (s16) (s32) fv1;
    D_802E93F4[2].v = (s16) (s32) fv1;
    D_802E93F4[4].v = (s16) (s32) fv1;
    D_802E93F4[5].v = (s16) (s32) fv1;
    D_802E93F4[6].v = (s16) (s32) fv1;
    D_802E93F4[7].v = (s16) (s32) fv1;

    D_802E9474[0].v = (s16) (s32) fs2;
    D_802E9474[1].v = (s16) (s32) fs2;
    D_802E9474[2].v = (s16) (s32) fs2;
    D_802E9474[3].v = (s16) (s32) fs2;
    D_802E9474[4].v = (s16) (s32) fs2;
    D_802E9474[6].v = (s16) (s32) fs2;
}
