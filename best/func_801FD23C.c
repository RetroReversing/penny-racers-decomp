s32 func_8021F6A0(s32);
extern s32 D_800DB1B8;
extern s32 D_8011F32E;
void func_801FD23C(s32 arg0)
{
  s16 *timer;
  u16 *state;
  u16 *pos;
  s32 idx;
  u16 temp;

  idx = arg0 & 0xFFFF;
  timer = (s16 *)((char *)&D_800DB1B8 + 0x2110);
  pos = (u16 *)((char *)&D_800DB1B8 + 0x2128);
  switch (*((u16 *)((char *)&D_8011F32E + idx * 0x64)))
  {
    case 0:
      func_8021F6A0(1);
      *((s16 *)((char *)&D_800DB1B8 + 0x2114)) = 0xA0;
      *((s16 *)((char *)&D_800DB1B8 + 0x2116)) = 0x78;
      *((u16 *)((char *)&D_8011F32E + idx * 0x64)) = 1;
      return;
    case 1:
      if (*timer >= 0xA0)
      {
        *((u16 *)((char *)&D_8011F32E + idx * 0x64)) = 2;
      }
      else
      {
        *timer = *timer + 1;
      }
      break;
    case 2:
      if (*timer > 0)
      {
        *timer = *timer - 1;
      }
      else
      {
        *((u16 *)((char *)&D_8011F32E + idx * 0x64)) = 1;
      }
      break;
  }
  temp = pos[-6];
  pos[0] = temp;
  pos[1] = pos[-5];
  *((s16 *)(pos + 2)) = temp + 0xA0;
  *((s16 *)(pos + 3)) = pos[-5] + 0x78;
}
