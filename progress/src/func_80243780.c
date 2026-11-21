typedef struct Inner { u32 flags; } Inner;
typedef struct Sub { char pad[0x68]; Inner *p68; } Sub;
typedef struct Obj { char pad[8]; s32 state; Sub *sub; } Obj;
extern s32 func_80245684(Obj *);
extern void func_80245614(Obj *);

s32 func_80243780(Obj *arg0) {
    switch (arg0->state) {
    case 0:
        if (func_80245684(arg0) != 0) {
            Inner *p = arg0->sub->p68;
            s32 v = 3;
            if (p != NULL) {
                p->flags = (p->flags & 1) ^ 1;
            }
            arg0->state = v;
        }
        break;
    case 1:
    case 2:
        break;
    case 3:
        func_80245614(arg0);
        break;
    case 4:
        break;
    }
    return 1;
}
