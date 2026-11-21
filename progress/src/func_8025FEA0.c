typedef struct { s16 id; u8 pad[1]; u8 flags; u8 rest[28]; } E;
extern E D_80030630[];

s32 func_8025FEA0(s32 arg0) {
    s32 i;
    E *p;
    if (arg0 == 0x19) {
        arg0 = 7;
    }
    i = 0;
    p = D_80030630;
    for (; i < 0x1E; i++, p++) {
        if (p->id == arg0) {
            return (p->flags & 0x38) != 0;
        }
    }
    return 0;
}
