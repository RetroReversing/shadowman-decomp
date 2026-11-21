typedef struct { char pad[0x1C]; f32 f; } S;
s32 func_802C4308();
void func_8023DF7C(void *, void *, s32, s32, s32, s32);
extern s32 D_8002D420;
extern s32 D_80075518;
extern S D_80075568;

void func_802C7F40(void) {
    if (func_802C4308() != 0) {
        if (D_8002D420 & 2) {
            D_80075568.f += 1.0f;
            func_8023DF7C(&D_80075568, &D_80075518, 0x75, 0xA, 0, 2);
        } else if (D_8002D420 & 0x40) {
            func_8023DF7C(&D_80075568, &D_80075518, 0x73, 0xA, 0, 2);
        } else {
            func_8023DF7C(&D_80075568, &D_80075518, 0x74, 0xA, 0, 2);
        }
    }
}
