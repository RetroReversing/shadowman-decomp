typedef struct { char pad[4]; s16 f4; char pad2[0x1C-6]; u16 f1c; } Inner;
typedef struct { char pad[0x3B]; u8 f3b; char pad2[4]; u8 f40; char pad3[0x108-0x41]; void *f108; Inner *f10c; } Obj;
extern Obj *D_8007AFF8;
extern u16 D_8007AFB6;
extern void *D_8006A4FC;
void func_8023DF7C();
void func_80109A1C();

s32 func_80271FAC(s32 arg0, s32 arg1, s32 arg2) {
    Obj *o = D_8007AFF8;
    if (o->f10c->f4 != arg0) {
        if (o->f3b == D_8007AFB6) {
            func_8023DF7C(D_8006A4FC, o->f10c, arg0, arg1, arg2, 2);
            D_8007AFF8->f10c->f1c &= 0xFFFD;
            o = D_8007AFF8;
            if (o->f40 != 0x20) {
                if (o->f40 == 0x23) return 1;
                if (o->f108 == 0) return 1;
                func_80109A1C(o->f108);
                D_8007AFF8->f108 = 0;
            }
            return 1;
        }
    }
    return 0;
}
