extern f32 D_00202E5C;
void *func_8029EB04(f32 *, f32);

void func_8024B434(void *arg0) {
    f32 sp10[3];
    u8 *s0;
    u8 *v1;

    s0 = *(u8 **)((u8 *)arg0 + 8);
    if (*(s16 *)(s0 + 0x7A) == 0) {
        sp10[0] = *(f32 *)(s0 + 0x24);
        sp10[1] = *(f32 *)(s0 + 0x28) - *(f32 *)0x202E5C;
        sp10[2] = *(f32 *)(s0 + 0x2C);
        v1 = func_8029EB04(sp10, 1.0f);
        if (v1 != NULL) {
            *(s16 *)(v1 + 0x70) = *(s8 *)(s0 + 0x71);
            *(s16 *)(s0 + 0x7A) = 1;
        }
    }
}
