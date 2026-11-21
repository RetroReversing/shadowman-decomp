extern void func_80270090(s32);
struct S { char pad[0x80]; f32 f; };
extern struct S *D_8007AFF8;

s32 func_80272198(f32 arg0, s32 arg1) {
    f32 t = arg0 * arg0;
    if (t < D_8007AFF8->f) {
        func_80270090(arg1 & 0xFF);
        return 1;
    }
    return 0;
}
