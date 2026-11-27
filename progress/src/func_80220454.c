typedef struct { u32 w0; u32 w1; } Cmd;
typedef struct { s32 m[4][4]; } Mat;
typedef struct { s16 cam; u8 pad2[8]; s16 width; s16 height; u8 pad[0x28 - 0xE]; } View;
typedef struct { u8 pad[0x210A]; View views[1]; } Screen;
typedef struct { f32 eyex, eyey, eyez, atx, aty, atz, upx, upy, upz; } Cam;
extern Screen D_800DB1B8;
extern Mat *D_8011F060;
extern u8 D_80126FF6;
extern Cam D_80221080[];
void guLookAt(Mat *, f32, f32, f32, f32, f32, f32, f32, f32, f32);
void guPerspective(Mat *, u16 *, f32, f32, f32, f32, f32);

void func_80220454(Cmd **arg0)
{
  s16 cam;
  u16 perspNorm;
  Cmd *c;
  View *v;

  cam = D_800DB1B8.views[D_80126FF6].cam;
  guPerspective(&D_8011F060[cam], &perspNorm, 50.0f,
                (f32) D_800DB1B8.views[D_80126FF6].width / (f32) D_800DB1B8.views[D_80126FF6].height, 10.0f, 5000.0f, 1.0f);
  c = (*arg0)++;
  c->w0 = 0xBC00000E;
  c->w1 = perspNorm;
  c = (*arg0)++;
  c->w0 = 0x01030040;
  c->w1 = (u32) &D_8011F060[cam];
  guLookAt(&D_8011F060[cam + 12], D_80221080[cam].eyex, D_80221080[cam].eyey, D_80221080[cam].eyez,
           D_80221080[cam].atx, D_80221080[cam].aty, D_80221080[cam].atz,
           D_80221080[cam].upx, D_80221080[cam].upy, D_80221080[cam].upz);
  c = (*arg0)++;
  c->w0 = 0x01010040;
  c->w1 = (u32) &D_8011F060[cam + 12];
}
