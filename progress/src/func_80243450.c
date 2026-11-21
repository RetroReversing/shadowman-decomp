typedef struct { char pad[0xC]; s32 v; } B;
typedef struct { char pad[8]; s32 state; } A;
typedef struct { char pad[8]; s32 state; A *p; } T;
s32 func_80245684(void *);
void func_80245614(void *);

s32 func_80243450(T *arg0) {
    B *b;
    switch ((u32)arg0->state) {
    case 1:
        if (func_80245684(arg0)) {
            b = *(B **)((char *)arg0->p + 0x68);
            if (b != 0) b->v = 1;
            arg0->state = 3;
        }
        break;
    case 0:
        break;
    case 2:
        break;
    case 3:
        func_80245614(arg0);
        break;
    }
    return 1;
}
