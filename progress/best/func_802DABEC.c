typedef struct { int pad[2]; char *p; } S;
extern void func_802D9E20(int *, char *);
extern S *D_8007DB68;
extern char D_8007DC30[];
extern int D_8007E038[];

void func_802DABEC(void) {
    char *a1;
    D_8007E038[0] = (int)(D_8007DB68->p + 0x168);
    D_8007E038[1] = (int)(D_8007DB68->p + 0x190);
    D_8007E038[2] = (int)(D_8007DB68->p + 0x1B8);
    D_8007E038[3] = (int)(D_8007DB68->p + 0x208);
    D_8007E038[4] = (int)(D_8007DB68->p + 0x230);
    D_8007E038[5] = (int)(D_8007DB68->p + 0x258);
    D_8007E038[6] = (int)(D_8007DB68->p + 0x280);
    D_8007E038[7] = (int)(D_8007DB68->p + 0x2A8);
    D_8007E038[8] = (int)(D_8007DB68->p + 0x2D0);
    D_8007E038[16] = 0;
    D_8007DC30[0x3F4] = 2;
    D_8007DC30[0x3F1] = 1;
    D_8007DC30[0x3ED] = 9;
    D_8007DC30[0x3EE] = 7;
    D_8007DC30[0x3F2] = 0;
    D_8007DC30[0x3F3] = 0;
    D_8007DC30[0x3EF] = 5;
    a1 = D_8007DB68->p + 0x2F8;
    D_8007E038[15] = (int)a1;
    func_802D9E20(D_8007E038, a1);
}
