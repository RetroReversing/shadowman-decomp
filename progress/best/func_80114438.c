typedef struct { unsigned char b[8]; } In;
typedef struct { short a; unsigned char b; unsigned char c; } Out;
extern unsigned char D_8004EDEC;
extern In D_8004EDF0[];

void func_80114438(unsigned char *arg0, Out *arg1) {
    int i = 0;
    unsigned char mask = 0;
    In *p = D_8004EDF0;
    Out *o = arg1;
    if (D_8004EDEC != 0) {
        do {
            In s = *p;
            o->c = (s.b[2] & 0xC0) >> 4;
            if (o->c == 0) {
                o->a = s.b[4] | (s.b[5] << 8);
                mask |= 1 << i;
                o->b = s.b[6];
            }
            i++;
            p++;
            o++;
        } while (i < D_8004EDEC);
    }
    *arg0 = mask;
}
