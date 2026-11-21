typedef struct {
    s32 f0;
    f32 pos[3];
    s32 a, b, c;
    char pad1C[3];
    u8 f1F;
    char pad20[4];
    s16 f24;
} Obj;
s32 func_80273FF8();
void func_80272830(f32 *, f32 *, s32, u32, s32, s32);
void func_802D0B28(s32, s32, s32);
extern s32 D_8005EA14;

s32 func_802617E0(Obj *o, s32 arg1) {
    f32 sp18[3];
    f32 sp28[3];

    if ((func_80273FF8() & 0xFF) == 1) {
        sp18[0] = o->pos[0];
        sp18[1] = o->pos[1];
        sp18[2] = o->pos[2];
        sp28[0] = (f32) o->a;
        sp28[1] = (f32) o->b;
        sp28[2] = 0;
        func_802D0B28(D_8005EA14, o->f24, 1);
        func_80272830(sp18, sp28, arg1 & 0xFF, (u32) (f32) o->c, o->f0, o->f1F);
        return 1;
    }
    return 0;
}
