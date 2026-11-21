void func_80267F78(s32 *, void *, int, int, float);

void func_8024E1B0(void *arg0) {
    char *a1 = *(char **)((char *)arg0 + 8);
    s32 *a0 = *(s32 **)(a1 + 0x6C);
    if (*a0 == 1) {
        *a0 = 2;
        func_80267F78(a0, a1 + 0x24, 0, -1, *(float *)0x203080);
    }
}
