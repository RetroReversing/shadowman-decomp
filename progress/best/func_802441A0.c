typedef struct { int pad0[4]; void *unk10; } Sub;
typedef struct { int pad0[2]; int state; Sub *sub; } Obj;
extern int func_80245684(Obj *);
extern void func_80245614(Obj *);
extern void func_80297254(void *);
int func_802441A0(Obj *arg0) {
    Sub *s;
    switch (arg0->state) {
    case 1:
        if (func_80245684(arg0) != 0) {
            s = arg0->sub;
            if (s->unk10 != 0) {
                func_80297254(s->unk10);
                s->unk10 = 0;
            }
            arg0->state = 3;
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
