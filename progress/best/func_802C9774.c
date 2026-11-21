typedef struct { char pad[0x28]; f32 f; } S;
typedef struct { char pad[8]; s32 a; char pad2[0xC]; s32 b; } T;
typedef struct { s32 x; f32 y; } U;
void func_8023DF7C(void *, void *, s32, s32, s32, s32);
extern s32 D_8002D424;
extern T D_8002DBD0;
extern U D_80045420;
extern f32 D_800458C4;
extern s32 D_80075518;
extern S D_80075568;

void func_802C9774(void) {
    D_80075568.f -= D_800458C4;
    D_80045420.y = D_80075568.f;
    if (D_8002D424 & 0x80) {
        func_8023DF7C(&D_80075568, &D_80075518, 0x58, 0xA, 0x28, 2);
    }
    if (D_8002DBD0.b != 0 && D_8002DBD0.a != 0) {
        func_8023DF7C(&D_80075568, &D_80075518, 0x58, 0xA, 0x28, 2);
    }
}
