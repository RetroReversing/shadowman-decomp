extern s32 D_8002D420;
extern s32 D_8003AE38;
extern char D_80075518[];
extern struct { char pad[0x18]; f32 f18; } D_80075568;
void func_8023DF7C(void *, void *, int, int, int, int);
void func_802CC388(int);
void func_802CC640(void);
void func_802CC720(f32);
extern s32 D_800755F8;

void func_802CC9D8(void) {
    if (!(D_8002D420 & 3)) {
        s32 t = (s32)(D_80075568.f18 - *(f32 *)0x21873C);
        if (t >= 4) {
            D_80075568.f18 = D_80075568.f18 - *(f32 *)0x218740;
        } else if (t < -3) {
            D_80075568.f18 = D_80075568.f18 + *(f32 *)0x218744;
        }
        *(f32 *)&D_8003AE38 = *(f32 *)0x218748;
    } else {
        D_8003AE38 = 0;
    }
    func_802CC720(*(f32 *)0x21874C);
    if (D_800755F8 == 0) {
        func_802CC640();
    }
    if (D_8002D420 & 0x80) {
        func_8023DF7C(&D_80075568, D_80075518, 0x2B, 0xA, 0x28, 2);
    }
    func_802CC388(0x10);
}
