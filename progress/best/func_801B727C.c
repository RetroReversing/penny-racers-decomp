extern char D_801C7080[];
extern char D_801C7081[];
extern char D_801C7082[];
extern char D_801C7083[];
extern char D_801C7084[];
extern char D_801C7470[];
extern void *D_801C7AB0;
extern u8 D_801C7AB6;
extern char D_801C7AD8[];
void func_801B727C(s32 arg0)
{
  u8 sp[256];
  char sp640[0x3E8];
  s32 temp_a1;
  s32 temp_v0;
  s32 temp_v0_2;
  s32 temp_v0_3;
  s32 temp_v1;
  s32 var_a0;
  s32 var_a1_2;
  s32 var_a1_3;
  s32 var_a2;
  s32 var_v0;
  s32 var_v0_2;
  s32 var_v0_3;
  s32 var_v0_4;
  s32 var_v0_5;
  s32 var_v0_6;
  s8 var_a2_2;
  u16 *temp_v1_3;
  u32 temp_v0_4;
  u32 var_v1;
  u8 var_a1;
  void *temp_a0;
  void *temp_a0_2;
  void *temp_v0_5;
  void *temp_v1_2;
  var_a1 = 0;
  var_a2 = 0;
  if ((*((u8 *) (((char *) D_801C7AB0) + 2))) != 0)
  {
    loop_2:
    var_v0 = var_a1 & 0xFF;

    if (((var_a2 & 0xFF) != (arg0 & 0xFF)) || ((var_a2 += 1, var_v0 = var_a1 & 0xFF, (var_a2 & 0xFF) != (*((u8 *) (((char *) D_801C7AB0) + 2))))))
    {
      temp_a0 = (var_v0 * 5) + sp;
      temp_v1 = (var_a2 & 0xFF) * 5;
      do
      {
        *((u8 *) (((char *) temp_a0) + 0x640)) = (u8) (*(D_801C7080 + temp_v1));
        *((u8 *) (((char *) temp_a0) + 0x641)) = (u8) (*(D_801C7081 + temp_v1));
        *((u8 *) (((char *) temp_a0) + 0x642)) = (u8) (*(D_801C7082 + temp_v1));
        *((u8 *) (((char *) temp_a0) + 0x643)) = (u8) (*(D_801C7083 + temp_v1));
        *((u8 *) (((char *) temp_a0) + 0x644)) = (u8) (*(D_801C7084 + temp_v1));
      }
      while (0);
      var_v0_2 = 0 & 0xFF;
      var_a0 = 0;
      do
      {
        temp_v0 = var_v0_2 * 2;
        *((s32 *) (temp_v0 + (((var_a1 & 0xFF) * 8) + sp))) = *((s32 *) (temp_v0 + (((var_a2 & 0xFF) * 8) + D_801C7470)));
        var_a0 += 1;
        var_v0_2 = var_a0 & 0xFF;
      }
      while (((u32) (var_a0 & 0xFF)) < 4U);
      var_a2 += 1;
      var_a1 += 1;
      if (((u32) (var_a2 & 0xFF)) < ((u8) (*((u8 *) (((char *) D_801C7AB0) + 2)))))
      {
        goto loop_2;
      }
    }
  }
  *((u8 *) (((char *) D_801C7AB0) + 2)) = var_a1;
  D_801C7AB6 = 0;
 do { var_a2_2 = 0; if ((*((u8 *) (((char *) D_801C7AB0) + 2))) != 0) { var_v0_3 = 0 & 0xFF; do { temp_a1 = var_v0_3 * 5; temp_a0_2 = temp_a1 + D_801C7080; temp_v1_2 = sp640 + temp_a1; do { *((u8 *) (((char *) temp_a0_2) + 0)) = (u8) (*((u8 *) (((char *) temp_v1_2) + 0))); *((u8 *) (((char *) temp_a0_2) + 1)) = (u8) (*((u8 *) (((char *) temp_v1_2) + 1))); *((u8 *) (((char *) temp_a0_2) + 2)) = (u8) (*((u8 *) (((char *) temp_v1_2) + 2))); *((u8 *) (((char *) temp_a0_2) + 3)) = (u8) (*((u8 *) (((char *) temp_v1_2) + 3))); *((u8 *) (((char *) temp_a0_2) + 4)) = (u8) (*((u8 *) (((char *) temp_v1_2) + 4))); } while (0); *(D_801C7AD8 + ((((s8) (*(D_801C7082 + temp_a1))) + ((*(D_801C7083 + temp_a1)) * 0x18)) & 0xFFFF)) = var_a2_2; D_801C7AB6 += 1; var_a1_2 = 0; temp_v0_2 = (var_a2_2 & 0xFF) * 8; var_v0_4 = 0 & 0xFF; loop_10: temp_v0_3 = var_v0_4 * 2; temp_v1_3 = temp_v0_3 + (temp_v0_2 + D_801C7470); *temp_v1_3 = *((s32 *) (temp_v0_3 + (temp_v0_2 + sp))); var_a1_2 += 1; if ((*temp_v1_3) != 0xFFFF) { D_801C7AB6 += 1; } var_v0_4 = var_a1_2 & 0xFF; if (((u32) (var_a1_2 & 0xFF)) < 4U) { goto loop_10; } var_a2_2 += 1; var_v0_3 = var_a2_2 & 0xFF; } while (((u32) (var_a2_2 & 0xFF)) < ((u8) (*((u8 *) (((char *) D_801C7AB0) + 2))))); } } while (0);
  temp_v0_4 = var_a2_2 & 0xFF;
  var_v1 = temp_v0_4;
  if (temp_v0_4 < 0xC8U)
  {
    var_v0_5 = var_v1 * 4;
    do
    {
      temp_v0_5 = (var_v0_5 + var_v1) + D_801C7080;
      *((s8 *) (((char *) temp_v0_5) + 0)) = 4;
      *((s8 *) (((char *) temp_v0_5) + 1)) = 0;
      *((s8 *) (((char *) temp_v0_5) + 2)) = -1;
      *((s8 *) (((char *) temp_v0_5) + 3)) = -1;
      *((s8 *) (((char *) temp_v0_5) + 4)) = -1;
      var_a1_3 = 0;
      var_v0_6 = 0 & 0xFF;
      loop_17:
      *((s32 *) ((var_v0_6 * 2) + (((var_a2_2 & 0xFF) * 8) + D_801C7470))) = 0xFFFF;

      var_a1_3 += 1;
      var_v0_6 = var_a1_3 & 0xFF;
      if (((u32) (var_a1_3 & 0xFF)) < 4U)
      {
        goto loop_17;
      }
      var_a2_2 += 1;
      var_v1 = var_a2_2 & 0xFF;
      var_v0_5 = var_v1 * 4;
    }
    while (var_v1 < 0xC8U);
  }
}
