typedef struct { char pad[0x14]; int f14; int f18; int f1c; int f20; int f24; int f28; char pad2[0x12]; unsigned char f3e; } A;
typedef struct { char pad[0x10]; int f10; char pad1[8]; short f1c; } B;
typedef struct { char pad[0x1C]; signed char f1c; char pad2[3]; A *a; B *b; } E;
extern unsigned int D_8005E9D4;
extern E *D_8007BEF0;

void func_802D18FC(void) {
    unsigned int i;
    for (i = 0; i <= D_8005E9D4; i++) {
        if (D_8007BEF0[i].a != 0) {
            D_8007BEF0[i].a->f18 = 0;
            D_8007BEF0[i].a->f14 = 0;
            D_8007BEF0[i].a->f1c = 0;
            D_8007BEF0[i].a->f20 = 0;
            D_8007BEF0[i].a->f24 = 0;
            D_8007BEF0[i].a->f28 = 0;
            D_8007BEF0[i].a->f3e = 0;
            D_8007BEF0[i].b->f10 = 0;
            D_8007BEF0[i].b->f1c = 0;
            D_8007BEF0[i].f1c = -1;
        }
    }
}
