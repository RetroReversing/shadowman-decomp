typedef struct { int a; int b; } P;
extern s32 D_8002D420;
extern P D_80075508;
extern char D_80075518[];
extern char D_80075568[];
extern char D_8007558C[];
extern u8 D_8007DBC1;
void func_80109A1C(int);
void func_8023DF7C();
void func_8026B618(int, int);
void func_802A6548(char *, int);

void func_802CE770(void) {
    if (!(D_8002D420 & 0x200)) {
        if (D_8007DBC1 != 0) {
            if (D_80075508.b != 0) {
                func_80109A1C(D_80075508.b);
                D_80075508.b = 0;
            }
            func_802A6548(D_8007558C, 0x23);
        }
        func_8026B618(1, 0);
        func_8023DF7C(D_80075568, D_80075518, 0xED, 0xA, 0x46, 1);
    }
}
