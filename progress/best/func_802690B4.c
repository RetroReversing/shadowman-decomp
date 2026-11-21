/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

s32 func_802691A8(s32 *, s32 *);            /* extern */
s32 func_80269224();                            /* extern */
s32 func_80269278(s32 *);                   /* extern */
s32 func_80269998();                            /* extern */
s32 func_80269A9C();                            /* extern */
s32 func_80269BA0();                            /* extern */
s32 func_8026A5E8(f32, f32, s32 *, s32 *, s32, s32, s32); /* extern */
extern s32 D_8002C240;
extern u8 D_800756A0[];
extern s32 D_80075AA8;

s32 func_802690B4(void) {
    f32 temp_fv0;
    f32 temp_fv0f;

    func_80269224();
    func_80269998();
    func_80269A9C();
    (*(s16 *)((char *)((((int)D_8002C240 << 9) + D_800756A0)) + 0x3E)) = 0;
    func_80269BA0();
    if ((*(s32 *)((char *)(&D_80075AA8) + 0x7C)) != 0) {
        if ((*(s32 *)((char *)(&D_80075AA8) + 0x7C)) == (*(s32 *)((char *)(&D_80075AA8) + 0x78))) {
            func_80269278(&D_80075AA8);
        }
    }
    temp_fv0 = (f32) (*(s32 *)((char *)(&D_80075AA8) + 0x68)) * *(f32 *)0x20E1F8;
    temp_fv0f = *(f32 *)0x20E1FC;
    if (!(temp_fv0f <= temp_fv0)) {
        return func_802691A8(&D_80075AA8, &D_80075AA8);
    }
    func_8026A5E8((*(f32 *)((char *)(&D_80075AA8) + 0)), (*(f32 *)((char *)(&D_80075AA8) + 4)), &D_80075AA8, &D_80075AA8, 0x40, 0x40, ((s32) (temp_fv0 - temp_fv0f) | 0x80000000) & 0xFF);
    return 1;
}
