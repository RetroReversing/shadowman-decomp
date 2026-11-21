typedef struct { char pad[0x1C]; u16 flags; } S1;
typedef struct { char pad[0x18]; s32 v; } S2;
extern S1 D_80075518;
extern S2 D_80075568;
s32 func_8023DF7C();
extern s32 D_8002D420;
extern f32 D_80045440;

void func_802C3D10(void) {
    if ((D_80045440 == *(f32 *)0x21840C) && (D_80075518.flags & 2)) {
        if (D_8002D420 & 1) {
            D_80075568.v = 0;
            func_8023DF7C(&D_80075568, &D_80075518, 4, 0xA, 0x4B, 2);
        } else {
            D_80075568.v = 0;
            func_8023DF7C(&D_80075568, &D_80075518, 0, 0xA, 0x46, 2);
        }
    }
}
