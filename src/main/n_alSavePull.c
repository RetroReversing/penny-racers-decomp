#include "common.h"

typedef struct { u32 w0, w1; } PR_Acmd;
extern PR_Acmd *n_alMainBusPull(void);
extern u8 *D_80046DF4;
PR_Acmd *n_alSavePull(void) {
 PR_Acmd *cmd = n_alMainBusPull();
 PR_Acmd *p;
 p = cmd++;
 *(u32 *)p = 0x0D000000;
 cmd->w0 = 0x062E0000;
 cmd->w1 = *(u32 *)(D_80046DF4 + 0x54);
 return cmd+1;
}
