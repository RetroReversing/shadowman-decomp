extern int func_802478C0(s32, void *);
extern s32 D_8007BE5C;

void func_80247914(void *arg0) {
    char *a1 = *(char **)((char *)arg0 + 8);
    s32 a0 = *(s32 *)(a1 + 0x6C) + 4;
    if (D_8007BE5C == 0) {
        func_802478C0(a0, a1 + 0x24);
    }
}
