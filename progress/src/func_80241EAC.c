typedef struct E { s8 a; s8 pad[5]; s16 b; s16 c; s16 d; } E;
extern E D_8006A920[];
void func_80241E6C(void);

void func_80241EAC(void) {
    int i;
    func_80241E6C();
    for (i = 0; i < 8; i++) {
        D_8006A920[i].a = 0;
        D_8006A920[i].b = 0;
        D_8006A920[i].c = 1;
        D_8006A920[i].d = 0;
    }
}
