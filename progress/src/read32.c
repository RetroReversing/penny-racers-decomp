typedef struct { u8 pad[8]; u8 *p; } PR_Cursor;
s32 read32(PR_Cursor *a) { u8 b0,b1,b2,b3; b0=*a->p++; b1=*a->p++; b2=*a->p++; b3=*a->p++; return (b0<<24)|(b1<<16)|(b2<<8)|b3; }
