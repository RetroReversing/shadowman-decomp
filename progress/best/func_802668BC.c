/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

s32 func_8023E724(s32 *, s32, s32 *, f32 *); /* extern */
s32 func_802401D0(s32 *, f32 *, s32);   /* extern */
s32 func_802645F0(s32, f32 *, f32 *);           /* extern */
s32 func_80265E80(f32 *, s32);                  /* extern */
s32 func_8026697C(s32 *);                   /* extern */
s32 func_8026698C();                            /* extern */
s32 func_80266AB4();                            /* extern */
s32 func_80266AB8();                            /* extern */
s32 func_80266B14(s32 *);                   /* extern */
s32 func_8026B618(s32, s32);                /* extern */
s32 func_802A5EC4(f32 *, f32 *, s32 *, s32, s32, s32); /* extern */
s32 func_802A6548(f32 *, s32);              /* extern */
extern s32 D_20DEF0;
extern s32 D_20DEFC;
extern s32 D_21794C;
extern s32 D_800458F0;
extern void *D_8005EA2C;
extern s32 D_8006A510;
extern s32 D_8006A5B4;
extern s32 D_800752D0;
extern s32 D_80075518;
extern s32 D_80075568;
extern s32 D_8007558C;
extern s32 D_80075598;
extern s32 D_8007BB10;
extern s32 D_8007BDE8;

void func_802668BC(s32 arg0) {
    f32 sp28[3];
    s32 sp18[3];
    f32 sp38[3];
    s32 sp48[3];
    s32 sp58[3];
    f32 temp_fs0;
    f32 temp_ft0;
    f32 temp_fv0f;
    void *temp_v0;

    sp48[0] = (*(s32 *)((char *)(&D_20DEF0) + 0));
    sp48[1] = (*(s32 *)((char *)(&D_20DEF0) + 4));
    sp48[2] = (*(f32 *)((char *)(&D_20DEF0) + 8));
    sp58[0] = (*(s32 *)((char *)(&D_20DEFC) + 0));
    sp58[1] = (*(s32 *)((char *)(&D_20DEFC) + 4));
    sp58[2] = (*(f32 *)((char *)(&D_20DEFC) + 8));
    if (arg0) {
        if (arg0 != 1) {
            func_8026698C();
            return;
        }
        sp18[0] = (*(s32 *)((char *)(&D_20DEFC) + 0));
        sp18[1] = (*(s32 *)((char *)(&D_20DEFC) + 4));
        sp18[2] = (*(f32 *)((char *)(&D_20DEFC) + 8));
        func_8023E724(&D_80075518, 0xD, sp18, sp28);
        temp_fs0 = *(f32 *)0x20DF08;
        sp18[0] = 0;
        sp18[1] = 0;
        sp18[2] = temp_fs0;
        if (D_800752D0 != 0) {
            sp28[0] = (*(f32 *)((char *)(D_8005EA2C) + 0));
            sp28[1] = (*(f32 *)((char *)(D_8005EA2C) + 4));
            sp28[2] = (*(f32 *)((char *)(D_8005EA2C) + 8));
            func_80265E80(sp28, arg0);
            sp38[0] = (*(f32 *)((char *)(&D_8007BB10) + 0)) - sp28[0];
            func_80266AB4();
            return;
        }
        if (*((arg0 * 4) + &D_8007BDE8) != 0) {
            func_802645F0(arg0, sp38, sp28);
            sp38[0] *= temp_fs0;
            sp38[1] *= temp_fs0;
            func_80266AB8();
            return;
        }
        temp_v0 = &D_80075598 + 4;
        temp_fv0f = (*(f32 *)((char *)(sp18) + 4));
        temp_ft0 = (*(f32 *)((char *)(sp18) + 8));
        sp38[0] = (temp_fv0f * (*(f32 *)((char *)(temp_v0) + 4))) + (temp_ft0 * (*(f32 *)((char *)(temp_v0) + 8)));
        sp38[1] = (temp_fv0f * (*(f32 *)((char *)(temp_v0) + 0x10))) + (temp_ft0 * (*(f32 *)((char *)(temp_v0) + 0x14)));
        sp38[2] = (temp_fv0f * (*(f32 *)((char *)(temp_v0) + 0x1C))) + (temp_ft0 * (*(f32 *)((char *)(temp_v0) + 0x20)));
        if (!((*(u16 *)((char *)((((*(s16 *)((char *)(&D_80075518) + 4)) * 0x38) + (*(s32 *)((char *)(&D_80075518) + 0x30)))) + 4)) & 0x20)) {
            D_8006A5B4 = 3;
            if (D_800458F0 != 0) {
                func_80266B14(&D_80075568);
                return;
            }
            func_802401D0(&D_8007558C, sp28, 0x3F800000);
            if ((*(s32 *)((char *)(&D_8006A510) + 0x78)) != 0) {
                sp28[0] = (*(f32 *)((char *)(&D_8006A510) + 0x80));
                sp28[1] = (*(f32 *)((char *)(&D_8006A510) + 0x84));
                sp28[2] = (*(f32 *)((char *)(&D_8006A510) + 0x88));
            }
            goto block_18;
        }
block_18:
        if (func_802A5EC4(sp28, sp38, &D_21794C, 0, 0, 0) == 0) {
            func_802A6548(sp28, 0x48);
        }
        func_8026B618(arg0, 1);
        return;
    }
    sp18[0] = sp48[0];
    sp18[1] = sp48[1];
    sp18[2] = sp48[2];
    func_8026697C(&D_80075518);
}
