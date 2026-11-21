s32 func_80109318();
f32 func_8023B800();
s32 func_8025BF10();
s32 func_80260368();
s32 func_80268E6C();
extern u16 D_80075534;
extern char D_8007558C[];

void func_802605D0(void *arg0) {
    char *p = *(char **)((char *)arg0 + 8);

    if (!(D_80075534 & 4) && (*(s16 *)((char *)arg0 + 0x16) != 0x10) && (func_8023B800(D_8007558C, p + 0x24) < *(f32 *)0x20B404)) {
        func_80109318(0xD0, D_8007558C, 0);
        func_8025BF10(arg0);
        func_80268E6C(7, func_80260368(2) >= 2 ? 0x28 : 0x14);
    }
}
