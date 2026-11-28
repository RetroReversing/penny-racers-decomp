extern s32 objCreate(s32, s32, s32, s32, s32, s32, s32, void *, void *, s32, s32, s32, s32, s32, s32, s32, s32, s32);
extern void initStageScene(void);
extern void spawnRowBoardEntry(s32, s32, s32, s32, s32);
extern void setScreenTransition(s8, s16, s8, s8, u8);
extern void func_8013DD2C(void);
extern void runSpawnScript(void);
extern void func_801D5A90(void);
extern s8 D_80046832;
extern s8 D_80190CAA;
extern s8 D_8021EEB2;
extern u16 pickLists[];
extern u32 randomMasks[];
extern u8 D_8021CA28[];

/* Clears the pick lists, fills them from the random masks, then spawns the stage's starting objects and starts the screen transition. */ void initStageSpawns(void)
{
    s32 n;
    s32 group;
    s32 bit;
    u32 mask;
    s32 slot;

    for (n = 0; n < 0x96; n++)
    {
        pickLists[n] = 0;
    }

    slot = 0;
    for (group = 0; group < 8; group++)
    {
        mask = randomMasks[group];
        for (bit = 0; bit < D_8021CA28[group]; bit++)
        {
            if (mask & 1)
            {
                pickLists[slot] = 1;
            }
            mask >>= 1;
            slot++;
        }
        if (group == 0)
        {
            slot += 2;
        }
    }

    D_80190CAA = 0;
    D_8021EEB2 = 1;
    D_80046832 = 0;
    objCreate(0, 0xFF, 3, 0, 0x7F, 0, 0, func_801D5A90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    initStageScene();
    spawnRowBoardEntry(0x87, 0x52, 0, 0x80, 0x83);
    objCreate(0, 0, 3, 0, 0xA1, 0xFF, 0, 0, func_8013DD2C, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    objCreate(0, 0, 3, 0, 0x7A, 0, 0, runSpawnScript, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    setScreenTransition(1, 0x3C, 0, 0, 0);
}
