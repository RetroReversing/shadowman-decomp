/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

s32 func_8023DF7C(s32 *, s32 *, s32, s32, s32, s32); /* extern */
s32 func_80268AF8(s32);                         /* extern */
s32 func_802CD7F0(s32);                     /* extern */
extern s32 D_8002D420;
extern s32 D_80075518;
extern s32 D_80075568;

void func_802CDEE0(void) {
    if (!(D_8002D420 & 0x100) || (func_80268AF8(3) == 0)) {
        func_8023DF7C(&D_80075568, &D_80075518, 0xDE, 0xA, 0, 0);
        (*(f32 *)((char *)((*(void **)((char *)(&D_80075518) + 0x44))) + 0x14C)) = (f32) *(f32 *)0x218828;
    }
    func_802CD7F0(0);
}
