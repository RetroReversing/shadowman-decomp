/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

s32 func_80109918(s32 *, s32, s16);         /* extern */
s32 func_8023DF7C(s32 *, s32 *, s32, s32, s32, s32); /* extern */
s32 func_8026B618(s32, s32);            /* extern */
extern s32 D_8002D420;
extern s32 D_80075500;
extern s32 D_80075518;
extern s32 D_80075568;
extern s32 D_8007558C;

void func_802CF2FC(void) {
    if ((*(s32 *)((char *)(&D_80075500) + 4)) == 0) {
        (*(s32 *)((char *)(&D_80075500) + 4)) = func_80109918(&D_8007558C, 0x7F, *(s16 *)0x216C56);
    }
    func_8026B618(1, 1);
    if (!(D_8002D420 & 0x200)) {
        func_8026B618(1, 0);
        func_8023DF7C(&D_80075568, &D_80075518, 0x107, 0xA, 0x78, 1);
    }
}
