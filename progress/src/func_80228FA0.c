typedef struct { s16 a; s16 b; } E;
extern E D_201B98[];
s16 func_80228FA0(s16 arg0) {
    u32 i;
    E *p = D_201B98;
    for (i = 0; i < 0x76; i++) {
        if (p[i].a == arg0) return p[i].b;
    }
    return -1;
}
