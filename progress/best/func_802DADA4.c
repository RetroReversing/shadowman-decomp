typedef struct { int pad[2]; char *p; } S;
extern S *D_8007DB68;
extern char *D_8007E038[];
extern u8 D_8007DC30[];
void func_802D9E20(char **, int, char *);

void func_802DADA4(void) {
int __repair_constant = 3;

    D_8007E038[0] = D_8007DB68->p + 0x168;
    D_8007E038[1] = D_8007DB68->p + 0x190;
    D_8007E038[2] = D_8007DB68->p + 0x1B8;
    D_8007E038[3] = D_8007DB68->p + 0x208;
    D_8007E038[4] = D_8007DB68->p + 0x230;
    D_8007E038[5] = D_8007DB68->p + 0x258;
    D_8007E038[6] = D_8007DB68->p + 0x280;
    D_8007E038[12] = D_8007DB68->p + 0x320;
    D_8007E038[13] = D_8007DB68->p + 0x370;
    D_8007E038[14] = D_8007DB68->p + 0x348;
    D_8007E038[16] = 0;
    do {
        D_8007DC30[0x3F3] = 1;
        D_8007DC30[0x3F4] = 2;
        D_8007DC30[0x3F1] = 0;
        D_8007DC30[0x3F2] = 0;
        D_8007DC30[0x3ED] = __repair_constant;
        D_8007DC30[0x3EE] = 7;
        D_8007DC30[0x3EF] = __repair_constant;
        D_8007E038[15] = D_8007DB68->p + 0x398;
        func_802D9E20(D_8007E038, 3, D_8007E038[15]);
    } while (0);
}
