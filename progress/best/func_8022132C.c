extern unsigned short D_8006FB10;
s32 guMtxIdentF();
extern char D_8006FAF0[];
extern char D_80229B20[];
extern char D_802352F4[];
void func_8022132C(void *arg0)
{
  int __repair_literal;
  int __repair_constant = -1;
  f32 __repair_fzero = 0.0f;
  s32 var_v1_3;
  s32 var_v0_3;
  s32 var_v0_4;
  int var_v0_5;
  s32 var_v1;
  s32 var_v1_2;
  s32 var_v0_2;
  s32 var_v1_4;
  s32 var_v1_5;
  void *temp_v0;
  void *temp_v0_2;
  void *temp_v0_3;
  void *temp_v0_4;
  void *var_v0;
  *((u8 *) (((char *) arg0) + 0)) = 0xFF;
  *((u16 *) (((char *) arg0) + 2)) = 0xFFFF;
  *((u16 *) (((char *) arg0) + 4)) = 0;
  *((u16 *) (((char *) arg0) + 6)) = 0;
  *((f32 *) (((char *) arg0) + 0x748)) = 1000.0f;
  *((s32 *) (((char *) arg0) + 0x744)) = 0;
  *((u8 *) (((char *) arg0) + 0x74C)) = 0;
  *((u8 *) (((char *) arg0) + 0x74D)) = 0;
  *((s32 *) (((char *) arg0) + 0x750)) = 0;
  *((s32 *) (((char *) arg0) + 0x754)) = 0;
  *((s32 *) (((char *) arg0) + 0x758)) = 0;
  *((s32 *) (((char *) arg0) + 0x75C)) = 0;
  *((s32 *) (((char *) arg0) + 0x760)) = 0;
  *((s32 *) (((char *) arg0) + 0x764)) = 0;
  *((s32 *) (((char *) arg0) + 0x768)) = 0;
  *((s32 *) (((char *) arg0) + 0x76C)) = 0;
  *((s32 *) (((char *) arg0) + 0x77C)) = 0;
  *((s32 *) (((char *) arg0) + 0x780)) = 0;
  *((s32 *) (((char *) arg0) + 0x770)) = 0;
  *((s32 *) (((char *) arg0) + 0x774)) = 0;
  *((u8 *) (((char *) arg0) + 0x778)) = 0;
  *((s32 *) (((char *) arg0) + 0x784)) = 0;
  *((s32 *) (((char *) arg0) + 0x788)) = 0;
  *((s32 *) (((char *) arg0) + 0x78C)) = 0;
  *((s32 *) (((char *) arg0) + 0x790)) = 0;
  *((s32 *) (((char *) arg0) + 0x794)) = 0;
  *((s32 *) (((char *) arg0) + 0x798)) = 0;
  *((s32 *) (((char *) arg0) + 0x79C)) = 0;
  *((s32 *) (((char *) arg0) + 0x7A0)) = 0;
  *((s32 *) (((char *) arg0) + 0x7A4)) = 0;
  *((s32 *) (((char *) arg0) + 0x7A8)) = 0;
  *((s32 *) (((char *) arg0) + 0x7AC)) = 0;
  *((s32 *) (((char *) arg0) + 0x7B0)) = 0;
  *((s32 *) (((char *) arg0) + 0x7B4)) = 0;
  *((s32 *) (((char *) arg0) + 0x7B8)) = 0;
  *((s32 *) (((char *) arg0) + 0x7C0)) = 0;
  *((s32 *) (((char *) arg0) + 0x7BC)) = 0;
  *((s32 *) (((char *) arg0) + 0x7C4)) = 0;
  *((s32 *) (((char *) arg0) + 0x7C8)) = 0;
  *((s32 *) (((char *) arg0) + 0x854)) = 0;
  *((s32 *) (((char *) arg0) + 0x858)) = 0;
  *((s32 *) (((char *) arg0) + 0x85C)) = 0;
  *((u8 *) (((char *) arg0) + 0x7CD)) = 0;
 do { *((u8 *) (((char *) arg0) + 0x7CE)) = 0; *((u8 *) (((char *) arg0) + 0x7CC)) = 0xA; *((u8 *) (((char *) arg0) + 0x811)) = 0; *((u8 *) (((char *) arg0) + 0x812)) = 0; *((u8 *) (((char *) arg0) + 0x810)) = 0xA; *((u8 *) (((char *) arg0) + 0x87A)) = 0; *((u8 *) (((char *) arg0) + 0x8A1)) = 0; *((u8 *) (((char *) arg0) + 0x860)) = 0; *((u8 *) (((char *) arg0) + 0x87B)) = 0; *((u8 *) (((char *) arg0) + 0x87C)) = 0; *((s32 *) (((char *) arg0) + 0x890)) = 0; *((s32 *) (((char *) arg0) + 0x894)) = 0; *((s32 *) (((char *) arg0) + 0x898)) = 0; *((s32 *) (((char *) arg0) + 0x89C)) = 0; *((u8 *) (((char *) arg0) + 0x8A0)) = 0; *((s32 *) (((char *) arg0) + 0x868)) = 0; *((s32 *) (((char *) arg0) + 0x86C)) = 0; *((f32 *) (((char *) arg0) + 0x8A4)) = 1.0f; do { *((f32 *) (((char *) arg0) + 0x8BC)) = __repair_fzero; *((f32 *) (((char *) arg0) + 0x8B8)) = __repair_fzero; *((f32 *) (((char *) arg0) + 0x8B4)) = __repair_fzero; } while (0); *((u8 *) (((char *) arg0) + 0x8D0)) = 0; *((u8 *) (((char *) arg0) + 0x8C8)) = 0; *((u8 *) (((char *) arg0) + 0x8C9)) = 0; *((f32 *) (((char *) arg0) + 0x8CC)) = __repair_fzero; *((u8 *) (((char *) arg0) + 0x8D1)) = 0; *((f32 *) (((char *) arg0) + 0x8D4)) = __repair_fzero; *((f32 *) (((char *) arg0) + 0x8D8)) = __repair_fzero; *((u8 *) (((char *) arg0) + 0x870)) = 0; *((u8 *) (((char *) arg0) + 0x871)) = 0; *((f32 *) (((char *) arg0) + 0x874)) = 1.0f; *((u8 *) (((char *) arg0) + 0x878)) = 0; *((f32 *) (((char *) arg0) + 0x864)) = 1.0f; *((f32 *) (((char *) arg0) + 0x8B0)) = __repair_fzero; *((f32 *) (((char *) arg0) + 0x8AC)) = __repair_fzero; *((f32 *) (((char *) arg0) + 0x8A8)) = __repair_fzero; *((f32 *) (((char *) arg0) + 0x8BC)) = __repair_fzero; *((f32 *) (((char *) arg0) + 0x8B8)) = __repair_fzero; *((f32 *) (((char *) arg0) + 0x8B4)) = __repair_fzero; *((u8 *) (((char *) arg0) + 0x8C0)) = 0; *((u8 *) (((char *) arg0) + 0x8C1)) = 0; } while (0);
  *((f32 *) (((char *) arg0) + 0x8C4)) = __repair_fzero;
  *((s32 *) (((char *) arg0) + 0x8DC)) = 0;
  *((s32 **) (((char *) arg0) + 0x8E0)) = D_80229B20;
  *((u16 *) (((char *) arg0) + 0x8E4)) = 0;
  *((u16 *) (((char *) arg0) + 0x8E6)) = 0;
  *((u16 *) (((char *) arg0) + 0x8E8)) = 0;
  *((u16 *) (((char *) arg0) + 0x8EA)) = 0;
  *((u16 *) (((char *) arg0) + 0x8EC)) = 0;
  var_v1 = 0;
  var_v0 = arg0;
  do
  {
    *((u8 *) (((char *) var_v0) + 0x87D)) = 0;
    ++var_v1;
    var_v0 = arg0 + var_v1;
  }
  while (var_v1 < 0xA);
  *((u8 *) (((char *) arg0) + 0x88D)) = 0;
  *((u16 *) (((char *) arg0) + 0x88E)) = 0;
  var_v1_2 = 0;
  do
  {
    var_v0_2 = 0 * 8;
  }
  while (0);
  do
  {
    temp_v0 = arg0 + ((var_v0_2 - var_v1_2) * 8);
    *((u16 *) (((char *) temp_v0) + 0x5F4)) = __repair_constant;
    *((u16 *) (((char *) temp_v0) + 0x5F6)) = __repair_constant;
    *((u16 *) (((char *) temp_v0) + 0x5F8)) = 0;
    *((f32 *) (((char *) temp_v0) + 0x5FC)) = 1.0f;
    *((u16 *) (((char *) temp_v0) + 0x600)) = __repair_constant;
    *((u8 *) (((char *) temp_v0) + 0x602)) = 0;
    *((u16 *) (((char *) temp_v0) + 0x628)) = __repair_constant;
    *((s32 *) (((char *) temp_v0) + 0x604)) = 0;
    *((s32 *) (((char *) temp_v0) + 0x608)) = 0;
    *((s32 *) (((char *) temp_v0) + 0x60C)) = 0;
    *((s32 *) (((char *) temp_v0) + 0x610)) = 0;
    *((s32 *) (((char *) temp_v0) + 0x614)) = 0;
    *((s32 *) (((char *) temp_v0) + 0x618)) = 0;
    *((s32 *) (((char *) temp_v0) + 0x61C)) = 0;
    *((s32 *) (((char *) temp_v0) + 0x620)) = 0;
    *((s32 *) (((char *) temp_v0) + 0x624)) = 0;
    var_v1_2 += 1;
    __repair_literal = 8;
    var_v0_2 = var_v1_2 * __repair_literal;
  }
  while (var_v1_2 < 4);
  *((s32 *) (((char *) arg0) + 0x5A0)) = 0;
  *((s32 *) (((char *) arg0) + 0x5A4)) = 0;
  *((s32 *) (((char *) arg0) + 0x5A8)) = 0;
  *((s32 *) (((char *) arg0) + 0x5AC)) = 0;
  *((u8 *) (((char *) arg0) + 0x5B0)) = 0;
  var_v1_3 = 0;
  do
  {
    var_v0_3 = 0 * 8;
  }
  while (0);
  do
  {
    temp_v0_2 = arg0 + var_v0_3;
    *((s32 *) (((char *) temp_v0_2) + 0x5B4)) = 0;
    *((s32 *) (((char *) temp_v0_2) + 0x5B8)) = 0;
    do
    {
      var_v1_3 += 1;
    }
    while (0);
    var_v0_3 = var_v1_3 * 8;
  }
  while (var_v1_3 < 7);
  *((f32 *) (((char *) arg0) + 0x5EC)) = 100.0f;
  *((u16 *) (((char *) arg0) + 0x5F0)) = 0;
  *((u8 *) (((char *) arg0) + 0x5F2)) = 0;
  var_v1_4 = 0;
  var_v0_4 = 0 * 2;
  do
  {
    temp_v0_3 = arg0 + ((var_v0_4 + var_v1_4) * 4);
    *((f32 *) (((char *) temp_v0_3) + 0x71C)) = __repair_fzero;
    *((f32 *) (((char *) temp_v0_3) + 0x718)) = __repair_fzero;
    *((f32 *) (((char *) temp_v0_3) + 0x714)) = __repair_fzero;
    ++var_v1_4;
    var_v0_4 = var_v1_4 * 2;
  }
  while (4 > var_v1_4);
  guMtxIdentF(arg0 + 0x6D4);
  var_v1_5 = 0;
  var_v0_5 = 0 * 4;
  do
  {
    var_v0_4 = var_v0_5 + var_v1_5; temp_v0_4 = arg0 + var_v0_4;
    *((u8 *) (((char *) temp_v0_4) + 0x562)) = 0;
    *((u8 *) (((char *) temp_v0_4) + 0x563)) = 0;
    *((u8 *) (((char *) temp_v0_4) + 0x564)) = 0;
    *((u8 *) (((char *) temp_v0_4) + 0x565)) = 0;
    *((u8 *) (((char *) temp_v0_4) + 0x566)) = 0;
    var_v1_5 += 1;
    var_v0_5 = var_v1_5 * 4;
  }
  while (0xA > var_v1_5);
  *((u16 *) (((char *) arg0) + 0x594)) = 0;
  do
  {
    *((u8 *) (((char *) arg0) + 0x596)) = 1;
    *((u8 *) (((char *) arg0) + 0x597)) = (u8) (*(D_802352F4 + D_8006FB10));
    *((s32 *) (((char *) arg0) + 0x598)) = 0;
    *((s32 *) (((char *) arg0) + 0x59C)) = 0;
  }
  while (0);
}
