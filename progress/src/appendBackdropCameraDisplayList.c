typedef struct { u32 w0; u32 w1; } Cmd;
typedef struct { s32 m[4][4]; } Mat;
typedef struct { s16 cam; u8 pad2[8]; s16 width; s16 height; u8 pad[0x28 - 0xE]; } View;
typedef struct { u8 pad[0x210A]; View views[1]; } Screen;
typedef struct { f32 eyex, eyey, eyez, atx, aty, atz, upx, upy, upz; } Cam;
extern Screen sRowBoard;
extern Mat *D_8011F060;
extern u8 viewIndex;
extern Cam D_80221080[];
void guLookAt(Mat *, f32, f32, f32, f32, f32, f32, f32, f32, f32);
void guPerspective(Mat *, u16 *, f32, f32, f32, f32, f32);

/* Appends the perspective and look-at commands for the current view's camera to the display list at *cmdPtr. */
void appendBackdropCameraDisplayList(Cmd **cmdPtr)
{
  s16 camIdx;
  u16 perspNorm;
  Cmd *cmd;

  camIdx = sRowBoard.views[viewIndex].cam;
  guPerspective(&D_8011F060[camIdx], &perspNorm, 50.0f,
                (f32) sRowBoard.views[viewIndex].width / (f32) sRowBoard.views[viewIndex].height, 10.0f, 5000.0f, 1.0f);
  cmd = (*cmdPtr)++;
  cmd->w0 = 0xBC00000E;
  cmd->w1 = perspNorm;
  cmd = (*cmdPtr)++;
  cmd->w0 = 0x01030040;
  cmd->w1 = (u32) &D_8011F060[camIdx];
  guLookAt(&D_8011F060[camIdx + 12], D_80221080[camIdx].eyex, D_80221080[camIdx].eyey, D_80221080[camIdx].eyez,
           D_80221080[camIdx].atx, D_80221080[camIdx].aty, D_80221080[camIdx].atz,
           D_80221080[camIdx].upx, D_80221080[camIdx].upy, D_80221080[camIdx].upz);
  cmd = (*cmdPtr)++;
  cmd->w0 = 0x01010040;
  cmd->w1 = (u32) &D_8011F060[camIdx + 12];
}
