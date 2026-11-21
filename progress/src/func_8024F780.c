extern int func_8026E2F4(int);
extern unsigned char func_8024F654(void *);

void func_8024F780(void *arg0) {
    char *s1 = *(char **)((char *)arg0 + 8);
    int *s0 = *(int **)(s1 + 0x6C);
    if (*s0 == 0) {
        if (func_8026E2F4(0xA2) == 0) {
            *s0 = 1;
        } else if (func_8024F654(s1) != 0) {
            *s0 = 2;
        }
    }
}
