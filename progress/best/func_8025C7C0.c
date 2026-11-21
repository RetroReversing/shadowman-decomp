/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

s32 func_80107D8C(s32, s32, s32, s32); /* extern */
s32 func_80109D80();                            /* extern */
s32 func_802367B4(s32 *);                       /* extern */
s32 func_80237AA8(void *);                      /* extern */
s32 func_8023934C(s32);                         /* extern */
s32 func_80262ED8();                            /* extern */
s32 func_802D0850(s32 *);                   /* extern */
s32 func_802D0B28(s32, s8, s32);            /* extern */
extern s32 D_20A068;
extern s32 D_25D6EC;
extern s8 D_8002C1BC;
extern s32 D_800305B0;
extern s32 D_80030E34;
extern s32 D_80030E3C;
extern s32 *D_80052778;
extern void *D_8005E9F0;
extern s32 D_8005EA14;
extern s32 *D_8005EA2C;
extern s32 D_8006973C;
extern s32 D_800698A0;
extern s32 D_80074BF0;
extern s32 D_80074F70;
extern s8 D_800755D9;
extern s8 D_8007DB7D;
extern u8 D_8007DC04;

void func_8025C7C0(void) {
    s32 *__base_D_80030E34;
    s32 temp_v1;
    s32 *__base_D_25D6EC;

    __base_D_25D6EC = &D_25D6EC;

    func_802D0850(&D_20A068);
    func_80109D80();
    if (D_8007DC04 != 5) {
        func_80107D8C(0, -1, 1, 0x7F);
    }
    D_800305B0 = 0;
    func_802D0B28(D_8005EA14, D_800755D9, 1);
    temp_v1 = (*(s32 *)((char *)(D_8005E9F0) + 0x10));
    if (temp_v1 != 0) {
        D_800698A0 = temp_v1;
        D_8006973C = (s32) (*(s16 *)((char *)(D_8005E9F0) + 0x1C));
        func_80237AA8(D_8005E9F0);
    }
    __base_D_80030E34 = &D_80030E34;
    if (((*__base_D_80030E34) >= 3) && (D_80030E3C < 4)) {
        (*__base_D_80030E34) = D_80030E3C;
    }
    func_802367B4(__base_D_80030E34);
    D_8007DB7D = 1;
    D_8002C1BC = 1;
    D_80052778 = __base_D_25D6EC;
    D_8005EA2C = &D_80074F70;
    func_8023934C(D_80074BF0);
    D_80030E3C = (*__base_D_80030E34);
    func_80262ED8();
}
