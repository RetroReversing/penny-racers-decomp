typedef struct {u8 id,pad; u16 flags; u8 pad4[12]; u16 prev; u8 rest[82];} PRNode;
extern PRNode D_8011F2F0[]; extern u16 objListHead;
void func_800DEFF8(void){u16 idx;idx=objListHead;if(idx!=65535){do{if(D_8011F2F0[idx].id!=255) D_8011F2F0[idx].flags|=16;idx=D_8011F2F0[idx].prev;}while(idx!=65535);}}
