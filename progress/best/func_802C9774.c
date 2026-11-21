/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

s32 func_8023DF7C(s32 *, s32 *, s32, s32, s32, s32); /* extern */
extern s32 D_8002D424;
extern s32 D_8002DBD0;
extern s32 D_80045420;
extern f32 D_800458C4;
extern s32 D_80075518;
extern s32 D_80075568;

void func_802C9774(void) {
    f32 temp_fv0f;

    temp_fv0f = (*(f32 *)((char *)(&D_80075568) + 0x28)) - D_800458C4;
    (*(f32 *)((char *)(&D_80045420) + 4)) = temp_fv0f;
    (*(f32 *)((char *)(&D_80075568) + 0x28)) = temp_fv0f;
    if (D_8002D424 & 0x80) {
        func_8023DF7C(&D_80075568, &D_80075518, 0x58, 0xA, 0x28, 2);
    }
    if (((*(s32 *)((char *)(&D_8002DBD0) + 0x18)) != 0) && ((*(s32 *)((char *)(&D_8002DBD0) + 8)) != 0)) {
        func_8023DF7C(&D_80075568, &D_80075518, 0x58, 0xA, 0x28, 2);
    }
}
