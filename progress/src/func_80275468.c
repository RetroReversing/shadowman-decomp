typedef struct S { char pad[0xC]; s16 *list; } S;
extern S *D_8007AFF8;
s32 func_80275468(s16 arg0) {
    s16 *p;
    s16 *t = D_8007AFF8->list;
    if (t != 0) {
        p = t;
        while (1) {
            if (*p == arg0) break;
            p++;
            if (*p == -1) return 0;
        }
    } else return 0;
    return 1;
}
