/* Partial candidate from function #24213 in project #53; rechecked locally. */
s32 func_80042250(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    if (arg0 >= arg2) {
        if (arg0 != arg2) {
            if (arg1 >= arg3) {
                if (arg1 != arg3) {
                    return 1;
                }
                /* Duplicate return node #6. Try simplifying control flow for better match */
                return 2;
            }
            /* Duplicate return node #5. Try simplifying control flow for better match */
            return M2C_ERROR(/* Read from unset register $v0 */) ^ M2C_ERROR(/* Read from unset register $v0 */);
        }
        return 2;
    }
    return M2C_ERROR(/* Read from unset register $v0 */) ^ M2C_ERROR(/* Read from unset register $v0 */);
}
