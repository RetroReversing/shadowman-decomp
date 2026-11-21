typedef struct { int pad0[7]; int f1C; int pad20; unsigned char *f24; } E;
extern int D_80030E54;
extern char D_80044FB8[];

int func_802C7A50(void) {
    int i = 0;
    char *p;
    if (D_80030E54 & 1) return 1;
    p = D_80044FB8;
    do {
        E *e = (E *)p;
        if (e->f1C == -1) break;
        if (e->f24 == 0) break;
        i++;
        if (e->f24[1] & 0x20) return 0;
        p += 0xC;
    } while (i < 5);
    return 1;
}
