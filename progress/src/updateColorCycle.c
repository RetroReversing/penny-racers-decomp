typedef struct { u8 r, g, b, a; } Col;
extern Col colorCycleKeys[];
extern u8 D_8021F264[];

/* Steps a color cycle one frame: blends the current key color toward the next key and stores it. */ void updateColorCycle(u8 stepsPerKey)
{
    s32 keyIdx;
    s32 nextKeyIdx;
    s32 stepFrac;
    u8 *phasePtr = D_8021F264;
    Col *outColor = (Col *)(phasePtr - 4);

    stepFrac = phasePtr[0] % stepsPerKey;
    keyIdx = phasePtr[0] / stepsPerKey;
    nextKeyIdx = keyIdx + 1;
    if (nextKeyIdx >= 4) nextKeyIdx = 0;
    outColor->r = colorCycleKeys[keyIdx].r - stepFrac * (colorCycleKeys[keyIdx].r - colorCycleKeys[nextKeyIdx].r) / stepsPerKey;
    outColor->g = colorCycleKeys[keyIdx].g - stepFrac * (colorCycleKeys[keyIdx].g - colorCycleKeys[nextKeyIdx].g) / stepsPerKey;
    outColor->b = colorCycleKeys[keyIdx].b - stepFrac * (colorCycleKeys[keyIdx].b - colorCycleKeys[nextKeyIdx].b) / stepsPerKey;
    outColor->a = colorCycleKeys[keyIdx].a - stepFrac * (colorCycleKeys[keyIdx].a - colorCycleKeys[nextKeyIdx].a) / stepsPerKey;
    if (++phasePtr[0] >= stepsPerKey * 4) phasePtr[0] = 0;
}
