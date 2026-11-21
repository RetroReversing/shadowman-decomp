/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

s32 func_8022251C();                                /* extern */
s32 func_8022254C(s32 *, s32, s32, s32); /* extern */
extern s32 D_2D0FFC;
extern s32 D_8007BEF0;

void func_802D10F0(s32 arg0) {
    s32 temp_s0;
    s32 *__base_D_8007BEF0;

    __base_D_8007BEF0 = &D_8007BEF0;

    temp_s0 = arg0 * 0x28;
    if (((*(u8 *)((char *)((*(void **)((char *)((temp_s0 + (*__base_D_8007BEF0))) + 0x20))) + 0x3E)) == 0) && (func_8022251C() == 0)) {
        func_8022254C(&D_2D0FFC, arg0, 0, 0);
        (*(s8 *)((char *)((*(void **)((char *)((temp_s0 + (*__base_D_8007BEF0))) + 0x20))) + 0x3E)) = 3;
    }
}
