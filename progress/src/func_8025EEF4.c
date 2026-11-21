typedef struct { u8 pad[3]; u8 flags; u8 rest[0x1C]; } Ent;
extern Ent D_80030630[];
extern s8 D_80074C3A[];

void func_8025EEF4(s32 arg0) {
    s32 mask;
    if (D_80074C3A[arg0] != -1) {
        mask = 0x20;
        if (arg0 == 0) {
            mask = 0x10;
        }
        D_80030630[D_80074C3A[arg0]].flags &= ~mask;
        D_80030630[D_80074C3A[arg0]].flags |= 8;
        D_80074C3A[arg0] = -1;
    }
}
