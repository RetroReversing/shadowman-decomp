typedef struct { s16 id; u8 pad[1]; u8 flags; u8 rest[0x1C]; } Ent;
extern Ent D_80030630[];
extern u8 D_80074C32;
void func_8025FDC4(s32);

s32 func_8025FE34(s32 arg0) {
    s32 i;
    for (i = 0; i < 0x1E; i++) {
        if (D_80030630[i].id == arg0) {
            func_8025FDC4(arg0);
            return (D_80030630[i].flags & D_80074C32) != 0;
        }
    }
    return 0;
}
