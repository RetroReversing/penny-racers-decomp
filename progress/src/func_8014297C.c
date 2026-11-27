/* identical to func_80140A0C (matched), with its names changed by decompdecomp */
extern unsigned char lastMaterial;
void func_8014297C(void **arg0)
{
  void *temp_v1;
  temp_v1 = *arg0;
  *arg0 = temp_v1 + 8;
  *((s32 *) (((char *) temp_v1) + 0)) = 0xFA000000;
  *((s32 *) (((char *) temp_v1) + 4)) = -1;
  lastMaterial = 0xFF;
}

