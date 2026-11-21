typedef struct S { char pad[0xC]; s16 *list; } S;
extern S *D_8007AFF8;
s32 func_80275468(s16 arg0) {
    s16 *p = D_8007AFF8->list;
    if (p != 0) {
        while (1) {
            if (*p == arg0) break;
            p++;
            if (*p == -1) return 0;
        }
        return 1;
    }
    return 0;
}
