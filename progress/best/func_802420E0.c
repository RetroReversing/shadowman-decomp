/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

s8 func_8023646C(s32);                              /* extern */
s32 func_8023648C();                                /* extern */
extern s32 D_8005E90C;
extern s32 D_8006A710;

void func_802420E0(s32 arg0) {
    s32 *__base_D_8006A710;
    s32 *temp_s0_3;
    s32 temp_s0_2;
    s32 temp_v0;
    s32 temp_v1;
    s32 var_s1;
    s8 temp_s0;

    var_s1 = temp_v0;
    temp_v0 = func_8023648C() - 1;
    if ((temp_v0 & 0xFFFF) != 0xFFFF) {
        do {
            temp_s0 = func_8023646C(arg0);
            temp_s0_2 = temp_s0 & 0xFF;
            __base_D_8006A710 = &D_8006A710;
            (*(s8 *)((char *)((temp_s0_2 + __base_D_8006A710)) + 0xC)) = func_8023646C(arg0);
            temp_v1 = var_s1 - 1;
            var_s1 = temp_v1;
            temp_s0_3 = (D_8005E90C) + ((temp_s0_2 * 0x10));
            *temp_s0_3 |= 0x800000;
        } while ((temp_v1 & 0xFFFF) != 0xFFFF);
    }
}
