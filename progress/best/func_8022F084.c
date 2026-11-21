/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

extern s32 D_800458F0;
extern s32 D_8004AEB0;
extern s32 D_8004AEB4;
extern s32 D_80052764;
extern s32 D_8005276C;
extern s32 D_80052770;
extern s32 D_8005277C;
extern f32 D_80074BC0;
extern s32 D_8007DB78;

void func_8022F084(void) {
    f32 temp_fv0;
    s32 temp_a0;

    D_80052764 += 1;
    ++D_8005276C;
    (*(s32 *)((char *)(&D_80052770) + 4)) = (s32) D_8004AEB0;
    if (D_8004AEB0 >= 7) {
        (*(s32 *)((char *)(&D_80052770) + 4)) = 6;
    }
    D_8004AEB4 = 0;
    temp_a0 = D_8004AEB4;
    D_8004AEB0 = 0;
    D_8005277C = temp_a0;
    if (D_800458F0 != 0) {
        (*(s32 *)((char *)(&D_80052770) + 4)) = temp_a0;
    }
    temp_fv0 = (f32) (*(s32 *)((char *)(&D_80052770) + 4));
    D_80074BC0 = temp_fv0;
    (*(f32 *)((char *)(&D_8007DB78) + 0x14)) = temp_fv0;
    if (temp_fv0 < 0.0f) {
        (*(f32 *)((char *)(&D_8007DB78) + 0x14)) = (f32) *(f32 *)0x202150;
    }
}
