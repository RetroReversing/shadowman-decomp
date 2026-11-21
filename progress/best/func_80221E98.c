extern void *func_80104BF0(void *, s16);
extern char D_8004ADF8;

u8 *func_80221E98(s16 arg0) {
    u32 i;
    u8 *base;
    u8 *p;
    u32 *f;

    base = func_80104BF0(&D_8004ADF8, arg0);
    p = base;
    i = 0;
    do {
        f = (u32 *)(p + 0xE4);
        i++;
        if (*f != 0) {
            *f = *f + (u32)base;
        }
        p += 8;
    } while (i < 0xDF);
    return base;
}
