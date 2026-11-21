extern u32 D_8006973C;
extern char *D_800698A0;

s32 func_80237428(void) {
    u32 i = 0;
    u32 n;
    char *p;
    if (D_8006973C != 0) {
        n = D_8006973C;
        p = D_800698A0;
        do {
            if (*(s16 *)p == -1) {
                return i;
            }
            i++;
            p += 0x5C;
        } while (i < n);
    }
    return -1;
}
