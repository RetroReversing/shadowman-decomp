typedef struct { char pad[0x10]; f32 f; } S;
extern S D_80075568;
extern char D_80075518[];
extern s32 D_800755F8;
s32 func_8023DF7C();

void func_802CC190(void) {
    if (D_800755F8 != 0) {
        D_80075568.f = D_80075568.f * *(f32 *)0x2186EC;
        func_8023DF7C(&D_80075568, D_80075518, 0x29, 0xA, 0x32, 2);
    }
}
