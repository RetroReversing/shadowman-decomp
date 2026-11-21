extern s32 D_8002DBD0[];
extern char D_2C4380[];
extern s32 D_8007BEE4;
void func_80239480(void *);

s32 func_802C43C0(void) {
    if (D_8002DBD0[3] == 0 && D_8002DBD0[7] == 0) {
        D_8007BEE4 = 0;
        func_80239480(D_2C4380);
        return D_8007BEE4 == 0;
    }
    return 0;
}
