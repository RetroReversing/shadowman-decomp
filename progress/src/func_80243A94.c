typedef struct { s32 pad0; s32 pad4; s32 state; } S;
s32 func_80245684(S*);
void func_80245614(S*);

s32 func_80243A94(S *a) {
    switch ((u32)a->state) {
    case 0:
        break;
    case 1:
        if (func_80245684(a) != 0) {
            a->state = 3;
        }
        break;
    case 2:
        break;
    case 3:
        func_80245614(a);
        break;
    }
    return 1;
}
