typedef struct { char pad[4]; u16 flags; char pad2[0x32]; } Ent;
typedef struct {
    s16 a;
    s16 b;
    char pad[0x18];
    u16 flags;
    char pad2[0x12];
    Ent *ents;
} S75518;
extern S75518 D_80075518;
extern s32 D_8002DBDC;
extern s32 D_8002DBEC;
extern s32 D_80072BEC;
void func_802C17C0(void);

void func_802C1DA0(void) {
    if (!(D_80075518.flags & 4)) {
        func_802C17C0();
        if (D_80075518.a != -1 && D_80075518.a != 0x102 && (D_80075518.ents[D_80075518.a].flags & 2)) {
            D_8002DBDC = 1;
            D_80072BEC = 0;
        }
        if (D_80075518.b != -1 && D_80075518.b != 0x103 && (D_80075518.ents[D_80075518.b].flags & 2)) {
            D_8002DBEC = 1;
            D_80072BEC = 1;
        }
    }
}
