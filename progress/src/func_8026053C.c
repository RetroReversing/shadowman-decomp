typedef struct S { char pad[8]; char *p8; char pad2[0xA]; s16 s16; } S;
extern s32 func_80109318(s32, void *, s32);
extern f32 func_8023B800(void *, void *);
extern void func_8025BF10(void *);
extern void func_80268E6C(s32, s32);
extern u16 D_80075534;
extern char D_8007558C[];
extern f32 D_20B400;

void func_8026053C(S *arg0) {
    char *p = arg0->p8;
    if (arg0->s16 != 0x10 && !(D_80075534 & 4) && func_8023B800(D_8007558C, p + 0x24) < *(f32 *)0x20B400) {
        func_80109318(0xE4, D_8007558C, 0);
        func_8025BF10(arg0);
        func_80268E6C(1, 0x1F4);
    }
}
