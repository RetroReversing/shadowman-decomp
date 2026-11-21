f32 func_8022EC3C(f32);
int func_8023E724(void *, s32, f32 *, f32 *);
s32 func_80265490();
void func_80297F20(f32 *, f32, f32, f32);
extern s32 D_80072BD4;
extern char D_80075518;

void func_80268554(void) {
    f32 sp10[3];
    f32 sp20[3];
    f32 t;
    f32 z;

    if (func_80265490() == 1) {
        z = 0.0f;
        sp10[2] = z;
        sp10[1] = z;
        sp10[0] = z;
        func_8023E724(&D_80075518, D_80072BD4, sp10, sp20);
        t = *(f32 *)0x20E1A4;
        sp20[1] += *(f32 *)0x20E1A0;
        func_80297F20(sp20, 4.5f, 8.0f, func_8022EC3C(t) + t);
    }
}
