s32 osVirtualToPhysical();
void *_n_saveBuffer(void *arg0, u32 arg1, s32 arg2, void *arg3)
{
  s32 temp_s1;
  s32 temp_v1;
  u32 temp_a1;
  int temp_s0;
  u32 temp_v0;
  u32 var_a0;
  void *temp_s4;
  volatile long long pad;
  void *var_s2;
  void *var_s4;
  var_a0 = arg1;
  temp_v0 = *((u32 *) (((char *) arg0) + 0x14));
  temp_v1 = (*((s32 *) (((char *) arg0) + 0x1C))) * 2;
  temp_a1 = temp_v0 + temp_v1;
  var_s2 = arg3;
  if (var_a0 < temp_v0)
  {
    var_a0 += temp_v1;
  }
  temp_s0 = var_a0 + 0x170;
  if (temp_a1 < temp_s0)
  {
    temp_s4 = arg3 + 8;
    temp_s1 = (((s32) (temp_a1 - var_a0)) >> 1) * 2;
    *((s32 *) (((char *) var_s2) + 0)) = (s32) (((temp_s1 & 0xFFF) << 0xC) | ((arg2 & 0xFFF) | 0x06000000));
    *((s32 *) (((char *) var_s2) + 4)) = osVirtualToPhysical(var_a0);
    var_s2 = temp_s4;
    *((s32 *) (((char *) arg3) + 8)) = (s32) (((((((s32) (temp_s0 - temp_a1)) >> 1) * 2) & 0xFFF) << 0xC) | (((arg2 + ((((s32) (temp_a1 - var_a0)) >> 1) * 2)) & 0xFFF) | 0x06000000));
    var_a0 = *((u32 *) (((char *) arg0) + 0x14));
    var_s4 = temp_s4 + 8;
  }
  else
  {
    var_s4 = arg3 + 8;
    *((s32 *) (((char *) var_s2) + 0)) = (s32) ((arg2 & 0xFFF) | 0x06170000);
  }
  *((s32 *) (((char *) var_s2) + 4)) = osVirtualToPhysical(var_a0);
  return var_s4;
}

