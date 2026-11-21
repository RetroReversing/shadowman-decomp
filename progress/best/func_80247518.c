extern int D_8002DBD0[];
extern char D_8002D390[];
extern char D_80031C50[];
extern int D_80072BFC;
extern char *D_80075558;
extern float D_80075584;
extern int D_8007B0F8;
void func_80237F4C();
void func_802397D0();
void func_8023981C();
void func_80239A3C(float);

void func_80247518(void) {
    float sp10[3];
    float *p;
    int *q;
    int i;
    if (D_8007B0F8 != 0) func_80237F4C(D_80031C50);
    D_80072BFC = 0;
    if (D_8002DBD0[1] == 0xE) {
        i = 0xD;
        goto body;
    }
    if (D_8002DBD0[5] == 0xE) {
        i = 9;
body:
        p = (float *)((i << 6) + (int)D_80075558);
        sp10[0] = p[0x24 / 4];
        sp10[1] = p[0x28 / 4];
        sp10[2] = p[0x2C / 4];
        D_80072BFC = 1;
        func_80239A3C(D_80075584);
        func_802397D0(D_8002D390);
        q = &D_8002DBD0[15];
        func_8023981C(q);
        q[-7] = *(int *)&sp10[0];
        q[-6] = *(int *)&sp10[1];
        q[-5] = *(int *)&sp10[2];
        func_80237F4C(q - 7);
    }
}
