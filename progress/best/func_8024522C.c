extern s32 D_8002D4B4;
s32 func_80245684(void *);
void func_80245614(void *);

s32 func_8024522C(void *arg0) {
    switch (*(s32 *)((char *)arg0 + 8)) {
    case 1:
        if (func_80245684(arg0) != 0) {
            *(s16 *)(*(char **)((char *)arg0 + 0xC) + 0x7A) = 3;
            *(s32 *)((char *)arg0 + 8) = 3;
            D_8002D4B4 = *(s32 *)((char *)arg0 + 0x18);
        }
        break;
    case 0:
    case 2:
        break;
    case 3:
        func_80245614(arg0);
        break;
    }
    return 1;
}
