typedef struct { char pad[0xC]; s32 v; char pad2[6]; char c; } B;
typedef struct { char pad[0x68]; B *b; } A;
typedef struct { char pad[8]; s32 state; A *p; } T;
s32 func_80245684(void *);
void func_80245614(void *);

s32 func_802435D8(T *arg0) {
    B *b;
    switch ((u32)arg0->state) {
    case 1:
        if (func_80245684(arg0)) {
            b = arg0->p->b;
            if (b != 0) { b->v = 3; b->c = 0; }
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
