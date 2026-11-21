/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

extern unsigned char D_8007DC06;
extern u16 D_2D7100;
extern char D_8007DB78[];

s32 func_802DB2C4(s32 arg0) {
    u16 *__base_D_2D7100;
    s32 temp_v0;
    s32 var_a1;
    char *var_v1;
    u32 var_a2;

    var_a2 = 0;
    arg0 &= 0xFFFF;
    __base_D_2D7100 = &D_2D7100;
    var_v1 = __base_D_2D7100;
    var_a1 = 0;
loop_1:
    var_v1 += 0x1C;
    if (*(u16 *)var_v1 == arg0) {
        return (*(s32 *)((char *)(((D_8007DC06 * 4) + var_a1 + __base_D_2D7100)) + 4));
    }
    var_a2 += 1;
    temp_v0 = var_a2 < 0xDU;
    var_a1 += 0x1C;
    if (temp_v0 == 0) {
        return temp_v0;
    }
    goto loop_1;
}
