/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

s32 func_80103878(s32, s32, s32);           /* extern */
s32 func_80104980(s16, s32, s32, s32 *);    /* extern */
s32 func_80104BC0(s32, s16);                        /* extern */
s32 func_80221E98(s32, s32, u16);                    /* extern */
s32 func_802D5B40();                            /* extern */
extern u16 D_8002C112;
extern s32 D_8002D18C;
extern s32 D_8004AE18;
extern s32 D_80059670;
extern s8 D_8007DB7E;

void func_80228ED0(s32 arg0, s16 arg1) {
    s32 temp_v0;

    func_802D5B40();
    temp_v0 = func_80103878(func_80104BC0(arg0, arg1) + 1, 2, 0);
    (*(s32 *)((char *)(&D_80059670) + 4)) = temp_v0;
    func_80104980(arg1, temp_v0, arg0, &D_8004AE18);
    (*(s32 *)((char *)(&D_80059670) + 0)) = temp_v0;
    (*(s8 *)((char *)(&D_80059670) + 0x10)) = 0;
    (*(s32 *)((char *)(&D_80059670) + 0xC)) = 0;
    (*(s32 *)((char *)(&D_80059670) + 4)) = temp_v0;
    D_8007DB7E = 1;
    (*(f32 *)((char *)(&D_80059670) + 8)) = (f32) D_8002C112;
    D_8002D18C = func_80221E98(arg0, 0x35, D_8002C112);
}
