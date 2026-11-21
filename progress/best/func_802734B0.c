extern s32 D_8002D2B4;
extern u8 *D_8005E9F0;
extern s32 D_8005EA14;
s32 func_802D0B28(s32, s8, s32);
s32 func_80231D44(f32, f32, s32, void *);

typedef struct { s16 type; s16 id; s32 pad[6]; } Ent;

s32 func_802734B0(f32 *arg0) {
    s32 i;
    Ent *e;
    s32 *p;
    s8 id = ((s8 *)arg0)[0x71];

    if (id == D_8002D2B4) return 1;
    if (func_802D0B28(D_8005EA14, id, 2) != 0) {
        e = *(Ent **)(D_8005E9F0 + 0xC);
        p = &e->pad[0];
        for (i = 0; i < *(s16 *)(D_8005E9F0 + 0x22); i++, e++) {
            if (e->type == 5 && func_80231D44(arg0[0], arg0[1], ((s32 *)arg0)[2], p) != 0) {
                if (*((s16 *)p - 1) == D_8002D2B4) return 1;
            }
            p += 7;
        }
    }
    return 0;
}
