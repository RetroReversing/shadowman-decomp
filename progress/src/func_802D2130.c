typedef struct { s32 a; s32 b; s32 c; s32 d; u8 id; u8 pad[3]; } Ent;
extern Ent D_80045930[20];

s32 func_802D2130(u8 arg0) {
    s32 i;
    s32 ret = -1;
    for (i = 0; i < 20; i++) {
        if (ret == -1) {
            if (D_80045930[i].id == arg0 && D_80045930[i].c != 0) {
                ret = i;
            }
        } else {
            break;
        }
    }
    return ret;
}
