extern f32 *D_8007BE60;
extern f64 fabs(f64);
void func_80267F78(f32, void *, s32, s32);

void func_80250540(void *arg0) {
    char *a1 = *(char **)((char *)arg0 + 8);
    char *s0 = *(char **)(a1 + 0x6C);
    s32 s1 = *(s32 *)s0;
    if (s1 == 1 && *(s32 *)(s0 + 0xC) == 0 && D_8007BE60 != 0 &&
        *(f64 *)0x2031D8 < fabs((f64)*D_8007BE60) &&
        (u32)(**(s32 **)(a1 + 0x68) - 0xF) < 6U) {
        func_80267F78(*(f32 *)0x2031E0, a1 + 0x24, 8, -1);
        *(s32 *)(s0 + 0xC) = s1;
    }
}
