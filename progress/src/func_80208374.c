typedef struct {u8 a; u8 pad[3];s16 b;} Status;
extern Status D_8021E19E;
extern s32 D_8021B01C,D_8021B020,D_8021B080,D_8021B128;
extern u8 D_8021B084;
s32 func_80205D48(f32,f32,u8);
void func_80205E04(s32*,f32,u8);
void func_80205EBC(s32*,f32,f32,f32,s32);
void func_80211C7C(s32);
void func_80208374(void){
D_8021E19E.a-=8;
func_80205E04(&D_8021B01C,43.0f,D_8021B084);
func_80205EBC(&D_8021B020,40.0f,-3.0f,0.2f,(s32)D_8021B084);
func_80211C7C(0x14);
if(D_8021E19E.b==0 && D_8021B128!=1)D_8021B080=func_80205D48(20.0f,4.0f,D_8021B084);
if(D_8021B084==0)D_8021B084=1;
}
