#ifndef M2C_DEFINES
#define M2C_DEFINES
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#define M2C_ERROR(desc) (0)
#define M2C_CARRY 0
#define M2C_OVERFLOW(a) (0)
#endif
s32 func_8002C110(void *arg0, volatile unsigned int arg1)
{
  s32 sp0;
  s32 sp4;
  s32 sp8;
  s32 spC;
  s16 *temp_a3;
  char *var_a0;
  volatile char temp_v0;
  union 
  {
    void *pointer;
    s32 value;
  } __repair_phase_storage;
  temp_a3 = *((s16 **) (((char *) arg0) + 0x20));
  __repair_phase_storage.pointer = ((arg1 & 0xFF) * 0x10) + (*((s32 *) (((char *) arg0) + 0x60)));
  sp0 = *((s32 *) (((char *) __repair_phase_storage.pointer) + 0));
  sp4 = *((s32 *) (((char *) __repair_phase_storage.pointer) + 4));
  sp8 = *((s32 *) (((char *) __repair_phase_storage.pointer) + 8));
  spC = *((s32 *) (((char *) __repair_phase_storage.pointer) + 0xC));
  temp_v0 = *temp_a3;
  __repair_phase_storage.value = 0;
  if (temp_v0 > 0)
  {
    var_a0 = temp_a3;
    loop_2:
    if ((*((s32 *) (((char *) var_a0) + 0xC))) != sp0)
    {
      __repair_phase_storage.value += 1;
      var_a0 += 4;
      if (__repair_phase_storage.value >= temp_v0)
      {
        goto block_7;
      }
      goto loop_2;
    }

    return __repair_phase_storage.value;
  }
  block_7:
  return -1;

}

