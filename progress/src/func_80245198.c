extern s32 D_8002D4B0;
s32 func_80245684(void *);
void func_80245614(void *);

s32 func_80245198(s32 *arg0) {
    u32 s = arg0[2];
    switch (s) {
    case 0:
        break;
    case 1:
        if (func_80245684(arg0) != 0) {
            *(s16 *)((char *)arg0[3] + 0x7A) = s;
            arg0[2] = 3;
            D_8002D4B0 = arg0[6];
        }
        break;
    case 2:
        break;
    case 3:
        func_80245614(arg0);
        break;
    }
    return 1;
}
