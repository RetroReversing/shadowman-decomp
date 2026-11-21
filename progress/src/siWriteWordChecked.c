/* identical to siWriteWordChecked in PENNY RACERS (matched), with its names changed by decompdecomp */
void func_80116750(char *, char *, s32);
s32 func_801158C0(void);

s32 siWriteWordChecked(s32 arg0, s32 arg1) {
    if (arg0 & 3) {
        func_80116750("EX", "sirawwrite.c", 0x34);
    }
    if (func_801158C0() != 0) {
        return -1;
    }
    *(vs32 *)(arg0 | 0xA0000000) = arg1;
    return 0;
}
