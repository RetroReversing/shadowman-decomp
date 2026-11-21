/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

extern int D_8007E038;
extern int D_8007E03C;
extern int D_8007E040;
extern int D_8007E044;
extern int D_8007E048;
extern int D_8007E04C;
extern int D_8007E050;
extern int D_8007E068;
extern int D_8007E06C;
extern int D_8007E070;
extern int D_8007E078;
extern signed char D_8007E023;
extern signed char D_8007E024;
extern signed char D_8007E021;
extern signed char D_8007E022;
extern signed char D_8007E01D;
extern signed char D_8007E01E;
extern signed char D_8007E01F;
extern int D_8007E074;
s32 func_802D9E20();
extern void *D_8007DB68;
extern char D_8007DC30[];

typedef struct { unsigned char pad[8]; int value; } __repair_field_8;
void func_802DADA4(void) {
    long temp_a2;

    D_8007E038 = (s32) ((((__repair_field_8 *)D_8007DB68)->value) + 0x168);
    D_8007E03C = (s32) ((((__repair_field_8 *)D_8007DB68)->value) + 0x190);
    D_8007E040 = (s32) ((((__repair_field_8 *)D_8007DB68)->value) + 0x1B8);
    D_8007E044 = (s32) ((((__repair_field_8 *)D_8007DB68)->value) + 0x208);
    D_8007E048 = (s32) ((((__repair_field_8 *)D_8007DB68)->value) + 0x230);
    D_8007E04C = (s32) ((((__repair_field_8 *)D_8007DB68)->value) + 0x258);
    D_8007E050 = (s32) ((((__repair_field_8 *)D_8007DB68)->value) + 0x280);
    D_8007E068 = (s32) ((((__repair_field_8 *)D_8007DB68)->value) + 0x320);
    D_8007E06C = (s32) ((((__repair_field_8 *)D_8007DB68)->value) + 0x370);
    D_8007E070 = (s32) ((((__repair_field_8 *)D_8007DB68)->value) + 0x348);
    D_8007E078 = 0;
    D_8007E023 = 1;
    D_8007E024 = 2;
    D_8007E021 = 0;
    D_8007E022 = 0;
    temp_a2 = (((__repair_field_8 *)D_8007DB68)->value) + 0x398;
    D_8007E01D = 3;
    D_8007E01F = 3;
    D_8007E01E = 7;
    D_8007E074 = temp_a2;
    func_802D9E20(&D_8007E038, 3, temp_a2);
}
