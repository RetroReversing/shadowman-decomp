extern struct { s16 id; char pad[0x1E]; } D_80030630[];
extern s8 D_80074C34;
extern s8 D_80074C35;
extern s8 D_80074C36;

void func_8025F15C(s16 arg0) {
    s32 i;
    for (i = 0; i < 0x1E; i++) {
        if (D_80030630[i].id == arg0) {
            D_80074C34 = i % 5;
            D_80074C35 = i / 5;
            D_80074C36 = i;
            return;
        }
    }
    D_80074C36 = 0;
    D_80074C35 = 0;
    D_80074C34 = 0;
}
