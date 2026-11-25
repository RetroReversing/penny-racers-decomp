s32 osVirtualToPhysical(s32);
extern s32 D_8006F9D0;
extern s32 D_800DB1B0;
extern unsigned short D_800DB1B8;
inline static int inline_fn(int arg0)
{
  return (arg0 & 0x3FF) * 4;
}

void func_801B7678(void **arg0)
{
  s32 __repair_store_0;
  s32 __repair_store_1;
  void *temp_a1;
  void *temp_a2;
  void *temp_s0;
  void *temp_v0;
  void *temp_v0_2;
  void *temp_v1;
  void *temp_v1_2;
  void *temp_v1_3;
  void *temp_v1_4;
  temp_v1 = *arg0;
  *arg0 = temp_v1 + 8;
  do
  {
    *((s32 *) (((char *) temp_v1) + 0)) = 0xE7000000;
    *((s32 *) (((char *) temp_v1) + 4)) = 0; temp_v1_2 = *arg0;
    *arg0 = temp_v1_2 + 8;
    do
    {
      *((s32 *) (((char *) temp_v1_2) + 0)) = 0xB900031D;
      *((u16 *) (((char *) temp_v1_2) + 4)) = 0x550208;
      do
      {
        temp_v1_3 = *arg0;
      }
      while (0);
      *arg0 = temp_v1_3 + 8;
      *((s32 *) (((char *) temp_v1_3) + 0)) = 0xBA001402;
      *((s32 *) (((char *) temp_v1_3) + 4)) = 0x300000;
      {
        do
        {
          temp_a1 = *arg0;
        }
        while (0);
        *arg0 = temp_a1 + 8;
        *((s32 *) (((char *) temp_a1) + 0)) = 0xFF10013F;
        *((s32 *) (((char *) temp_a1) + 4)) = (s32) (D_8006F9D0 - 0x80000000); temp_v1_4 = *arg0;
        *arg0 = temp_v1_4 + 8;
      }
      *((s32 *) (((char *) temp_v1_4) + 0)) = 0xF7000000;
      *((s32 *) (((char *) temp_v1_4) + 4)) = (float) 0xFFFCFFFC;
      temp_a1 = *arg0;
      *arg0 = temp_a1 + 8; temp_a2 = ((char *) (&D_800DB1B8)) + 0x2138; __repair_store_0 = (s32) ((((((*((u16 *) (((char *) (&D_800DB1B8)) + 0x2138))) + (*((u16 *) (((char *) temp_a2) + 4)))) - 1) & 0x3FF) << 0xE) | (inline_fn(((*((u16 *) (((char *) temp_a2) + 2))) + (*((u16 *) (((char *) temp_a2) + 6)))) - 1) | 0xF6000000)); __repair_store_1 = (s32) ((((*((u16 *) (((char *) (&D_800DB1B8)) + 0x2138))) & 0x3FF) << 0xE) | ((((*((u16 *) (((char *) temp_a2) + 2))) & 0x3FF) * 2) * 2));
      *((s32 *) (((char *) temp_a1) + 0)) = __repair_store_0;
      *((s32 *) (((char *) temp_a1) + 4)) = __repair_store_1;
    }
    while (0);
  }
  while (0);
  temp_v0 = *arg0;
  *arg0 = temp_v0 + 8;
  *((s32 *) (((char *) temp_v0) + 0)) = 0xE7000000;
  *((s32 *) (((char *) temp_v0) + 4)) = 0;
  temp_v0_2 = *arg0;
  *arg0 = temp_v0_2 + 8;
  *((s32 *) (((char *) temp_v0_2) + 0)) = 0xBA001402;
  *((s32 *) (((char *) temp_v0_2) + 4)) = 0;
  temp_s0 = *arg0;
  *arg0 = temp_s0 + 8;
  *((s32 *) (((char *) temp_s0) + 0)) = 0xFF10013F;
  *((s32 *) (((char *) temp_s0) + 4)) = osVirtualToPhysical(D_800DB1B0);
}

