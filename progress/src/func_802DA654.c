typedef struct { char pad[0x42]; unsigned char a; char pad2[0x18]; unsigned char b; char pad3[0]; } E;
extern unsigned char D_8007DC30[];
int func_802DA048(int);
int func_802D9F5C(int);
unsigned char func_802DA654(void) {
    unsigned char i = 0;
    int a = func_802DA048(0x41);
    while (i < 16) {
        unsigned char *e = D_8007DC30 + i * 60;
        if (e[0x5B] != 0 && e[0x42] == (unsigned char)a) {
            i++;
            a++;
            i = 0;
        } else {
            i++;
        }
    }
    return func_802D9F5C((unsigned char)a);
}
