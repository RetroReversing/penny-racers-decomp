typedef struct PR_Player { struct PR_Player *next; u8 pad[12]; s32 samplesLeft; } PR_Player;
typedef struct { PR_Player *head; u8 pad[40]; s32 samples; } PR_Synth;
extern PR_Synth *D_80046DF4;
extern s32 func_800339C0(s32);
void n_alSynAddPlayer(PR_Player *p) {
 s32 mask;
 mask=func_800339C0(1);
 p->samplesLeft=D_80046DF4->samples;
 p->next=D_80046DF4->head;
 D_80046DF4->head=p;
 func_800339C0(mask);
}
