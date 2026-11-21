typedef struct { s32 a; char pad[0x12]; s16 b; } S;
void func_8023DF7C(void *, void *, s32, s32, s32, s32);
void func_802C71E4(void);
void func_802CBBA8(void);
void func_802CC190(void);
extern s32 D_8002D420;
extern S D_80044EB0;
extern s32 D_80075518;
extern s32 D_80075568;

void func_802C7464(void) {
    if (D_80044EB0.a != 0 && D_80044EB0.b != 0) {
        func_802CBBA8();
        if ((D_8002D420 & 0x24) == 0x24) {
            func_8023DF7C(&D_80075568, &D_80075518, 0x91, 0xA, 0x14, 2);
        } else if (D_8002D420 & 0x800000) {
            func_8023DF7C(&D_80075568, &D_80075518, 0x91, 0xA, 0x14, 2);
        } else {
            func_8023DF7C(&D_80075568, &D_80075518, 0xBA, 0xA, 0x14, 2);
        }
    }
    func_802C71E4();
    func_802CC190();
}
