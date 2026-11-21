typedef struct { s32 a, b, c; } V3;
typedef struct { u8 pad[0x40]; u8 f40; } Inner;
typedef struct { u8 pad[0x6C]; V3 *p6C; } Obj;
typedef struct { s32 p0; s32 p4; s32 state; Obj *obj; } Arg;
extern s32 D_80074BB0;
extern void func_8026E26C(s32);
extern void func_8026E4E8(V3 *, s32);
extern s32 func_80245684(Arg *);
extern void func_80245614(Arg *);
extern void func_80274A3C(Inner *);

s32 func_802439A0(Arg *arg0) {
    Obj *o = arg0->obj;
    Inner *s0;
    if (o != NULL) {
        s0 = (Inner *)o->p6C;
        switch (arg0->state) {
        case 0:
            break;
        case 1:
            if (D_80074BB0 == 0 && s0->f40 == 0x24) {
                func_8026E26C(0x8C);
                arg0->state = 2;
            } else {
                V3 v = *o->p6C;
                func_8026E4E8(&v, 0x7F);
                arg0->state = 2;
            }
            break;
        case 2:
            if (func_80245684(arg0) != 0) {
                func_80274A3C(s0);
                arg0->state = 3;
            }
            break;
        case 3:
            func_80245614(arg0);
            break;
        }
    }
    return 1;
}
