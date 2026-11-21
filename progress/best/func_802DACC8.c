typedef struct { int pad[2]; int p; } S;
extern void func_802D9E20(int *, int);
extern S *D_8007DB68;
extern char D_8007DC30[];
extern int D_8007E038[];

void func_802DACC8(void) {
    D_8007E038[0] = D_8007DB68->p + 0x3E8;
    D_8007E038[1] = D_8007DB68->p + 0x3E8;
    D_8007E038[2] = D_8007DB68->p + 0x4D8;
    D_8007E038[3] = D_8007DB68->p + 0x460;
    D_8007E038[4] = D_8007DB68->p + 0x488;
    D_8007E038[5] = D_8007DB68->p + 0x4B0;
    D_8007E038[6] = D_8007DB68->p + 0x280;
    D_8007E038[7] = D_8007DB68->p + 0x2A8;
    D_8007E038[8] = D_8007DB68->p + 0x2D0;
    D_8007E038[16] = 0;
    D_8007DC30[0x3F4] = 2;
    D_8007DC30[0x3F1] = 1;
    D_8007DC30[0x3ED] = 9;
    D_8007DC30[0x3EE] = 7;
    D_8007DC30[0x3F2] = 0;
    D_8007DC30[0x3F3] = 0;
    D_8007DC30[0x3EF] = 5;
    {
        int a1 = D_8007DB68->p + 0x500;
        D_8007E038[15] = a1;
        func_802D9E20(D_8007E038, a1);
    }
}
