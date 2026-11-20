#include "common.h"

extern void *D_80046D68;
extern void func_80028C68(void);
void func_80029690(void *, void *);

void func_80028C20(void) {
    func_80029690(&D_80046D68, &func_80028C68);
}
