/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

extern unsigned char D_80075F20;
extern unsigned char D_80075F21;
extern char D_21AB8C[];
extern u8 D_80045C3C;
extern u8 D_8007C320;

void func_802D3CC4(void) {
    u8 temp_v1;
    unsigned char *__base_D_80075F21;
    unsigned char *__base_D_80075F20;
    char *__base_D_21AB8C;
    u8 *__base_D_80045C3C;

    if (D_8007C320) {
        __base_D_80075F20 = &D_80075F20;
        (*__base_D_80075F20) = 4U;
        __base_D_80075F21 = &D_80075F21;
        (*__base_D_80075F21) = 0x18U;
        D_8007C320 = 0;
        return;
    }
    __base_D_80045C3C = &D_80045C3C;
    temp_v1 = (*__base_D_80045C3C);
    (*__base_D_80045C3C) = temp_v1 + 1;
    __base_D_21AB8C = D_21AB8C;
    (*__base_D_80075F21) = (u8) (*(u8 *)((char *)(((temp_v1 * 4) + __base_D_21AB8C)) + 3));
    (*__base_D_80075F20) = (u8) (*(u8 *)((char *)(((temp_v1 * 4) + __base_D_21AB8C)) + 1));
    if (*(((*__base_D_80045C3C) * 4) + __base_D_21AB8C) < 0) {
        (*__base_D_80045C3C) = 0;
    }
}
