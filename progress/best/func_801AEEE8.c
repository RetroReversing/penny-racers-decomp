extern short D_800DD2C0;
extern char D_800DB1B8[];
void func_801AEEE8(void)
{
  union 
  {
    char *pointer;
    s32 value;
  } __repair_phase_storage;
  register void *temp_v0;
  do
  {
    __repair_phase_storage.pointer = D_800DB1B8;
 do { temp_v0 = __repair_phase_storage.pointer + 0x2108; } while (0);
    D_800DD2C0 = 1;
    *((s16 *) (((char *) temp_v0) + 2)) = 0;
    do
    {
      do
      {
        do
        {
          *((s16 *) (((char *) temp_v0) + 4)) = 1;
        }
        while (0);
        *((s16 *) (((char *) temp_v0) + 0xC)) = 0xF0;
      }
      while (0);
      if (1)
      {
        *((s16 *) (((char *) temp_v0) + 6)) = 2;
        do
        {
          *((s16 *) (((char *) temp_v0) + 0xE)) = 0xF0;
        }
        while (0);
      }
      *((s16 *) (((char *) temp_v0) + 8)) = 0;
      *((s16 *) (((char *) temp_v0) + 0xA)) = 0;
      *((s16 *) (((char *) temp_v0) + 0x20)) = 0;
    }
    while (0);
    *((s16 *) (((char *) temp_v0) + 0x22)) = 0;
    *((s16 *) (((char *) temp_v0) + 0x24)) = 0xF0;
    *((s16 *) (((char *) temp_v0) + 0x26)) = 0xF0;
  }
  while (0);
  *((s16 *) (((char *) temp_v0) + 0x28)) = 1;
  *((s16 *) (((char *) temp_v0) + 0x2A)) = 3;
  {
    *((s16 *) (((char *) temp_v0) + 0x2C)) = 4;
    *((s16 *) (((char *) temp_v0) + 0x2E)) = 5;
    *((s16 *) (((char *) temp_v0) + 0x36)) = 0x5A;
    *((s16 *) (((char *) temp_v0) + 0x34)) = 0x78;
    *((s16 *) (((char *) temp_v0) + 0x32)) = 0x4B;
  }
  *((s16 *) (((char *) temp_v0) + 0x30)) = 0x3C;
  do
  {
    *((s16 *) (((char *) temp_v0) + 0x48)) = 0x3C;
    *((s16 *) (((char *) temp_v0) + 0x4A)) = 0x4B;
  }
  while (0);
  *((s16 *) (((char *) temp_v0) + 0x4C)) = 0xB4;
  *((s16 *) (((char *) temp_v0) + 0x4E)) = 0xA5;
  __repair_phase_storage.value = 2;
  __repair_rows:
  {
    *((u16 *) ((D_800DB1B8 + 0x2108) + ((8 * (__repair_phase_storage.value & 0xFF)) * 5))) = 0;
    __repair_phase_storage.value += 1;
  }

  if (((((u32) (__repair_phase_storage.value & 0xFF)) + 1) - 1) < 4U)
  {
    goto __repair_rows;
  }
}
