typedef struct { s32 a; s32 b; s32 c; } Ent;
extern Ent D_218D74[];
extern s32 D_80045C38;
s32 func_802D2E34(s32);

s32 func_802D3708(void) {
    s32 i;
    for (i = 0; D_218D74[i].a != 0; i++) {
        if (func_802D2E34(D_218D74[i].a) != 0) {
            return i != D_80045C38;
        }
    }
    return 0;
}
