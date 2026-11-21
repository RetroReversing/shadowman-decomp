typedef struct Inner { s32 a; char pad[0x24]; s32 b; s32 c; s32 d; } Inner;
typedef struct Sub { char pad[0x6C]; Inner *p6c; } Sub;
typedef struct Obj { char pad[8]; s32 state; Sub *sub; } Obj;
extern s32 func_80245684(Obj *);
extern void func_80245614(Obj *);

s32 func_80244E7C(Obj *arg0) {
    switch ((u32)arg0->state) {
    case 0:
        break;
    case 1:
        if (func_80245684(arg0) != 0) {
            Inner *p = arg0->sub->p6c;
            p->a = 0;
            p->b = 0;
            p->c = 0;
            p->d = 0;
            arg0->state = 3;
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
