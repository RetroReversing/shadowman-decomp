typedef struct { char pad[0x3E]; u8 f3E; } Inner;
typedef struct { char pad[0x20]; Inner *p; char pad2[0x4]; } Ent;
extern Ent *D_8007BEF0;
extern char D_2D0FFC[];
s32 func_8022251C(void);
s32 func_8022254C(char *, s32, s32, s32);

void func_802D10F0(s32 arg0) {
    if (D_8007BEF0[arg0].p->f3E == 0 && func_8022251C() == 0) {
        D_8007BEF0[arg0].p->f3E = 3;
        func_8022254C(D_2D0FFC, arg0, 0, 0);
    }
}
