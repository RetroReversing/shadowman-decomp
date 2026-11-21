typedef struct { char pad[0xC]; char *list; char pad2[0x12]; s16 count; } Hdr;
s32 func_80231D44(f32, f32, f32, void*);
extern Hdr *D_8005E9F0;

s16 func_80257068(f32 arg0, f32 arg1, f32 arg2) {
    char *p;
    s32 res;
    s32 i;

    res = -1;
    p = D_8005E9F0->list;
    for (i = 0; i < D_8005E9F0->count; i++) {
        if (*(s16 *)p == 0 && func_80231D44(arg0, arg1, arg2, p + 4) != 0) {
            res = *(s16 *)(p + 2);
        }
        p += 0x1C;
    }
    return res;
}
