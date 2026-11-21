extern void func_80109318(int, void *, int);

void func_802505E8(void *arg0) {
    char *a1 = *(char **)((char *)arg0 + 8);
    int *s0 = *(int **)(a1 + 0x6C);
    int *v0;
    int v1;
    s0[0] = *(s16 *)(a1 + 0x7A) != 0;
    if (s0[0] != 0) {
        v0 = *(int **)(a1 + 0x68);
        v1 = v0[0];
        v0[3] = 1;
        if (v1 == 0x14) {
            if (s0[2] != 0) {
                func_80109318(0x191, a1 + 0x24, 0);
                s0[2] = 0;
            }
        } else if (v1 == 0xE) {
            s0[2] = 1;
            s0[3] = 0;
        }
    }
}
