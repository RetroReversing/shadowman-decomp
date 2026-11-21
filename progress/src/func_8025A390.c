typedef struct { s32 key; s32 val; } E;
extern E D_8002E014[];

s32 func_8025A390(s32 arg0) {
    s32 i;

    for (i = 0; D_8002E014[i].key >= 0; i++) {
        if (arg0 == D_8002E014[i].key) break;
    }
    return D_8002E014[i].val;
}
