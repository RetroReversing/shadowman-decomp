s32 func_80245684(void *);
void func_80245614(void *);

s32 func_80244084(s32 *arg0) {
    u32 s = arg0[2];
    s32 *t;
    s32 *q;
    switch (s) {
    case 0:
        break;
    case 1:
        if (func_80245684(arg0) != 0) {
            t = (s32 *)arg0[3];
            q = (s32 *)t[0x6C / 4];
            *(s16 *)((char *)t + 0x7A) = s;
            q[5] = arg0[6];
            arg0[2] = 3;
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
