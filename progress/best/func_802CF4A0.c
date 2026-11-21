/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

s32 func_8023DF7C(s32 *, s32 *, s32, s32, s32, s32); /* extern */
s32 func_8026B618(s32, s32);            /* extern */
extern s32 D_8002D424;
extern s32 D_80075518;
extern s32 D_80075568;

void func_802CF4A0(void) {
    s32 *__base_D_80075518;
    if (D_8002D424 & 0x100) {
        (*(f32 *)((char *)((*(void **)((char *)(__base_D_80075518) + 0x44))) + 0x14C)) = (f32) *(f32 *)0x21886C;
        __base_D_80075518 = &D_80075518;
        func_8023DF7C(&D_80075568, __base_D_80075518, 0xC2, 0xA, 0, 0);
    }
    func_8026B618(0, 0);
}
