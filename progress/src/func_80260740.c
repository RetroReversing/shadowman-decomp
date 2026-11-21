typedef struct { char pad[0x8]; s32 b; char pad2[0xA]; s16 a; } S;
extern char D_8007558C;
s32 func_80109318(s32, void *, s32);
f32 func_8023B800(void *, s32);
void func_8025BF10(void *);
s32 func_80268E6C(s32, s32);

void func_80260740(S *arg0) {
    s32 b = arg0->b;
    if (arg0->a != 0x10 && func_8023B800(&D_8007558C, b + 0x24) < *(f32 *)0x20B40C && func_80268E6C(6, 0xC) != 0) {
        func_80109318(0xD0, &D_8007558C, 0);
        func_8025BF10(arg0);
    }
}
