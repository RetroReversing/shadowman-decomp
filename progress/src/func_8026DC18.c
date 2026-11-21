void *func_8026DC18(s16 arg0, char *arg1, s16 arg2, int *arg3) {
    s32 i = 0;
    while (*arg3 != 0) {
        if (*(s16 *)((char *)arg3 + 4) == arg0) {
            while (--arg2 != -1) {
                if (*(s16 *)(arg1 + 0x2C) == i) return arg1;
                arg1 += 0x38;
            }
            return 0;
        }
        arg3 += 3;
        i++;
    }
    return 0;
}
