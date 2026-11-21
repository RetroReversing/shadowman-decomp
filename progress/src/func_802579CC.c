extern f32 D_80075568[];
extern s32 D_8007BE5C;
extern void func_80267F78(f32, void *, s32, s32);

void func_802579CC(u8 *arg0) {
    u8 *a1 = *(u8 **)(arg0 + 8);
    s32 *a0 = *(s32 **)(a1 + 0x6C);
    if (D_8007BE5C == 0 && a0[0] == 3) {
        D_80075568[11] = D_80075568[11] + ((f32 *)a0)[9];
        a0[9] = 0;
        goto b3;
    } else if (D_8007BE5C != 0) {
b3:
        if (a0[0] == 3 && a0[2] != 1 && *(f32 *)0x2037A4 < __builtin_fabsf(((f32 *)a0)[6])) {
            func_80267F78(*(f32 *)0x2037A8, a1 + 0x24, 0, -1);
        }
    }
}
