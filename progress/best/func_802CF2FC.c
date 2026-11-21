typedef struct { int a; int b; } P;
extern s32 D_8002D420;
extern P D_80075500;
extern char D_80075518[];
extern char D_80075568[];
extern char D_8007558C[];
int func_80109918(char *, int, s16);
void func_8023DF7C();
void func_8026B618(int, int);

void func_802CF2FC(void) {
    if (D_80075500.b == 0) {
        D_80075500.b = func_80109918(D_8007558C, 0x7F, *(s16 *)0x216C56);
    }
    func_8026B618(1, 1);
    if (!(D_8002D420 & 0x200)) {
        func_8023DF7C(D_80075568, D_80075518, 0x107, 0xA, 0x78, 1);
        func_8026B618(1, 0);
    }
}
