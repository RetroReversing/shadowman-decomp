typedef struct { s16 a; u16 b; } E;
extern E D_8004ECB4[];
extern E D_8004ED0C[];

s32 func_80262ADC(void *arg0, s32 arg1) {
    E *tab;
    E *e;
    switch (arg1) {
    case 3:
        tab = D_8004ED0C;
        break;
    case 4:
        tab = D_8004ECB4;
        break;
    default:
        return 0;
    }
    e = tab + ((s32 *)arg0)[6];
    if (e->a != 0) {
        e->b = **(u16 **)arg0;
        return 1;
    }
    return e->a = **(u16 **)arg0;
}
