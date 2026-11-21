typedef struct { int a; unsigned short b; } SA;
typedef struct { int pad[4]; int x10; int pad2; float x18; } SB;
extern int D_800755F8;
extern int D_8005E9D8;
extern float D_80074BC0;
extern SA D_80075518;
extern SB D_80075568;
extern short D_80075546;
void func_8023DF7C(void *, void *, int, int, int, int);
void func_8026EA40(void);
void func_802A241C(void);
void func_802A28B8(void);
void func_802C2F20(void);

void func_802C2E48(void) {
    if (D_800755F8 != 0 && D_8005E9D8 != 0) {
        if ((unsigned short)(D_80075518.b - 0x66) >= 2U) {
            func_8023DF7C(&D_80075568, &D_80075518, 0x67, 0xA, 0x28, 2);
            D_80075568.x10 = 0;
        }
        {
        float t = D_80075568.x18;
        D_80075568.x18 = t + (*(float *)0x2183A4 - t) * D_80074BC0 * *(float *)0x2183A8;
        }
    }
    if (D_80075546 >= 0x12D) {
        func_8026EA40();
        func_802A28B8();
    } else {
        func_802A241C();
    }
}
