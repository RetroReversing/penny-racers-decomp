extern void *D_80046DF4;
s32 n_alMainBusPull(s32 arg0, void *arg1)
{
  void *temp_v1;
  void *__repair_cached_pointer = D_80046DF4;
  void *temp_v0;
  *((s32 *) (((char *) arg1) + 0)) = 0x020004E0;
  *((s32 *) (((char *) arg1) + 4)) = 0x2E0;
  temp_v0 = (*((void *(**)(void *)) (((char *) (*((void **) (((char *) __repair_cached_pointer) + 0x3C)))) + 4)))(arg1 + 8);
 do { temp_v1 = temp_v0 + 8; do { *((s32 *) (((char *) temp_v0) + 0)) = 0x0C007FFF; *((s32 *) (((char *) temp_v0) + 4)) = 0x07C004E0; *((s32 *) (((char *) temp_v0) + 8)) = 0x0C007FFF; temp_v0 = 0; *((s32 *) (((char *) temp_v1) + 4)) = 0x09300650; return temp_v1 + 8; } while (0); } while (0);
}
