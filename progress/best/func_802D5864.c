/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

s32 func_802D5D18();
extern char D_8007C8B0[];
extern s32 D_8007C8F0;
extern s32 D_8007C8F8;

void func_802D5864(s32 arg0, s32 arg1) {
    s32 *__base_D_8007C8F8;
    s32 *__base_D_8007C8F0;
    char *__base_D_8007C8B0;
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a2;
    s32 temp_v1;
    s32 var_v0;
    s32 var_v0_2;
    void *temp_a0_3;

    __base_D_8007C8F8 = &D_8007C8F8;
    temp_a0 = (*__base_D_8007C8F8) + 1;
    var_v0 = temp_a0;
    if (temp_a0 < 0) {
        var_v0 = (*__base_D_8007C8F8) + 4;
    }
    temp_a2 = (*__base_D_8007C8F0);
    __base_D_8007C8F0 = &D_8007C8F0;
    temp_a0_2 = temp_a0 - ((var_v0 >> 2) * 4);
    (*(&D_8007C8F8)) = temp_a0_2;
    temp_v1 = temp_a2 + 1;
    var_v0_2 = temp_v1;
    if (temp_v1 < 0) {
        var_v0_2 = temp_a2 + 4;
    }
    __base_D_8007C8B0 = D_8007C8B0;
    temp_a0_3 = (temp_a0_2 * 0x10) + __base_D_8007C8B0;
    (*__base_D_8007C8F0) = temp_v1 - ((var_v0_2 >> 2) * 4);
    (*(s32 *)((char *)(temp_a0_3) + 0)) = arg1;
    (*(s32 *)((char *)(temp_a0_3) + 4)) = arg0;
    (*(s32 *)((char *)(temp_a0_3) + 8)) = 0;
    (*(s32 *)((char *)((((*__base_D_8007C8F8) * 0x10) + __base_D_8007C8B0)) + 0xC)) = func_802D5D18(temp_a0_3, (int)temp_a2, __base_D_8007C8F0);
}
