s32 func_8013E49C(u16);
unsigned short func_801D7028(u16, s32);
extern u8 D_8011F2FD[];
typedef struct 
{
  u16 f0;
  u8 pad[98];
} Slot_8011F32E;
extern Slot_8011F32E D_8011F32E[];
extern s32 D_8011F350;
extern u8 D_8011F4E4[];
extern s32 D_802378D8;
extern s32 D_80237914;
void func_8016018C(s32 arg0_in)
{
  s32 arg0;
  volatile u64 scratch;
  f32 temp_fv0;
  f32 temp_fv1;
  f32 temp_fv1_2;
  f32 temp_fv1_3;
  f32 temp_fv1_4;
  volatile unsigned char var_v0;
  u32 var_v1;
  int var_v1_2;
  u16 temp_a0_2;
  u16 temp_v0;
  u16 temp_v1_2;
  void *temp_a0;
  void *temp_s0;
  void *temp_s1;
  void *temp_v1_3;
  void *temp_v1;
  void *temp_s3;
  if (temp_s1)
  {
    temp_s1 = *((&D_8011F350) + ((arg0 & 0xFFFF) * 0x64));
    arg0 = arg0_in;
    temp_a0 = *((void **) (((char *) temp_s1) + 4));
    temp_s0 = ((*((u16 *) (((char *) temp_a0) + 2))) * 0x64) + D_8011F4E4;
    temp_s3 = *((void **) (((char *) temp_s0) + 0x50));
    *((s8 *) (((char *) temp_a0) + 0x8D0)) = 0x78;
    temp_a0_2 = *((u16 *) (((char *) temp_s1) + 0x14));
    var_v1 = 0;
  }
  else
  {
    temp_s1 = *((&D_8011F350) + ((arg0 & 0xFFFF) * 0x64));
    arg0 = arg0_in;
    temp_a0 = *((void **) (((char *) temp_s1) + 4));
    temp_s0 = ((*((u16 *) (((char *) temp_a0) + 2))) * 0x64) + D_8011F4E4;
    temp_s3 = *((void **) (((char *) temp_s0) + 0x50));
    *((s8 *) (((char *) temp_a0) + 0x8D0)) = 0x78;
    temp_a0_2 = *((u16 *) (((char *) temp_s1) + 0x14));
    var_v1 = 0;
  }
  if ((((u32) (temp_a0_2 & 3)) >> 1) != 0)
  {
    var_v1 = (temp_a0_2 << 0x10) > 0;
  }
  switch (var_v1)
  {
    case 0:
      *((s32 **) (((char *) temp_s3) + 4)) = &D_802378D8;
      break;

    case 1:
      *((s32 **) (((char *) temp_s3) + 4)) = &D_80237914;
      break;

  }

  var_v1 = *((u16 *) (((char *) temp_s1) + 0x14)); temp_v0 = var_v1 - 1;
  *((u16 *) (((char *) temp_s1) + 0x14)) = temp_v0;
  if ((temp_v0 << 0x10) == 0)
  {
    temp_v1 = *((void **) (((char *) temp_s1) + 4));
    if (!((*((s16 *) (((char *) temp_v1) + 0x55E))) != 0))
    {
      func_801D7028(*((u16 *) (((char *) temp_v1) + 2)), 0x2A);
      var_v1_2 = (arg0 & 0xFFFF) * 0x64;
      D_8011F32E[arg0 & 0xFFFF].f0 = 1;
    }
    else
    {
 do { var_v1_2 = (arg0 & 0xFFFF) * 0x64; } while (0);
      if (1)
      {
        D_8011F32E[arg0 & 0xFFFF].f0 = 3;
      }
    }
  }
  var_v0 = arg0 & 0xFFFF;
  temp_v1_2 = D_8011F32E[var_v0].f0;
  switch (temp_v1_2)
  {
    case 1:
      do
    {
      *((s32 **) (((char *) temp_s3) + 4)) = &D_802378D8; temp_fv1 = *((f32 *) (((char *) temp_s0) + 0x34));
      *((f32 *) (((char *) temp_s0) + 0x34)) = (f32) (((3.0f - temp_fv1) * 0.4f) + temp_fv1);
    }
    while (0);
      temp_fv1_2 = *((f32 *) (((char *) temp_s0) + 0x30));
      *((f32 *) (((char *) temp_s0) + 0x30)) = (f32) (((0.3f - temp_fv1_2) * 0.4f) + temp_fv1_2);
      if ((*((f32 *) (((char *) temp_s0) + 0x34))) > 2.8f)
    {
      D_8011F32E[arg0 & 0xFFFF].f0 = 2;
      return;
    }
      return;

    case 2:
      *((s32 **) (((char *) temp_s3) + 4)) = &D_802378D8;
      temp_fv1_3 = *((f32 *) (((char *) temp_s0) + 0x34));
      *((f32 *) (((char *) ((short) temp_s0)) + 0x34)) = (f32) (((0.3f - temp_fv1_3) * 0.4f) + temp_fv1_3);
      temp_fv1_4 = *((f32 *) (((char *) temp_s0) + 0x30));
      temp_fv0 = ((3.0f - temp_fv1_4) * 0.4f) + temp_fv1_4;
      *((f32 *) (((char *) temp_s0) + 0x30)) = temp_fv0;
      if (temp_fv0 > 2.8f)
    {
      do
      {
        D_8011F32E[arg0 & 0xFFFF].f0 = 3;
        return;
      }
      while (0);
    }
      break;

    case 3:
      *((f32 *) (((char *) temp_s0) + 0x34)) = 1.0f;
      *((f32 *) (((char *) temp_s0) + 0x30)) = 1.0f;
      temp_v1_3 = *((void **) (((char *) temp_s1) + 4));
      *((u16 *) (((char *) temp_v1_3) + 0x560)) = (u16) ((*((u16 *) (((char *) temp_v1_3) + 0x560))) & 0xF8);
      func_8013E49C(*((u16 *) (((char *) temp_s1) + 0x76)));
      *(D_8011F2FD + ((arg0 & 0xFFFF) * 0x64)) = 2;
      if ((*((s16 *) (((char *) (*((void **) (((char *) temp_s1) + 4)))) + 0x55E))) == 0)
    {
      *((s32 **) (((char *) temp_s3) + 4)) = NULL;
    }
      break;

  }

}
