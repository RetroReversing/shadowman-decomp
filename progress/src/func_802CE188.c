typedef struct { char pad[4]; s16 idx; char pad2[0x2a]; struct { char p[4]; u16 flags; char q[0x32]; } *tab; } T;
extern T D_80075518;
extern char D_80075568[];
extern s32 D_8002D424;
extern u8 D_8007DBC0;
void func_8023DF7C();
void func_802CE214();

void func_802CE188(void) {
    if (D_8007DBC0 == 0) {
        if (D_80075518.tab[D_80075518.idx].flags & 4) {
            if (D_8002D424 & 0x100) {
                func_8023DF7C(D_80075568, &D_80075518, 0xE4, 0xA, 0x14, 0);
            }
        } else if (D_8002D424 & 0x100) {
            func_8023DF7C(D_80075568, &D_80075518, 0xE1, 0xA, 0, 0);
        }
    }
}
