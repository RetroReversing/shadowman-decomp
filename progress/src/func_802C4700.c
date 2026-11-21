typedef struct { s16 pad0; s16 pad2; char pad[0x2C]; struct { char p[4]; u16 flags; char q[0x32]; } *tab; } S518;
extern S518 D_80075518;
extern char D_80075568[];
void func_8023DF7C(void *, void *, s32, s32, s32, s32);
void func_802C2CC0(void);
void func_802C2F30(void);
void func_802C3274(void);
void func_802C3BC0(void);
void func_802C413C(void);
void func_802CC190(void);

void func_802C4700(void) {
    if (D_80075518.pad0 != -1 && (D_80075518.tab[D_80075518.pad0].flags & 2)) {
        func_8023DF7C(D_80075568, &D_80075518, 0x5F, 10, 0x28, 2);
    }
    if (D_80075518.pad2 != -1 && (D_80075518.tab[D_80075518.pad2].flags & 2)) {
        func_8023DF7C(D_80075568, &D_80075518, 0x60, 10, 0x28, 2);
    }
    func_802C2CC0();
    func_802C3BC0();
    func_802C2F30();
    func_802C413C();
    func_802C3274();
    func_802CC190();
}
