extern s32 D_8007BE5C;
void func_8026E4CC(void *, s32);
void func_80109318(s32, void *, s32);

void func_8024E834(void *arg0) {
    char *s0;
    s32 *s2;
    s32 id;
    s32 x;
    if (D_8007BE5C == 0) {
        s0 = *(char **)((char *)arg0 + 8);
        s2 = *(s32 **)(s0 + 0x6C);
        func_8026E4CC(s0, 0);
        x = *(s16 *)((char *)arg0 + 0x14);
        if (x == 0x1DD) {
            id = 0x1B0;
        } else if (x == 0x1B6 || x == 0x1C2 || x == 0x1C3) {
            id = 0x15B;
        } else {
            id = 0x146;
        }
        func_80109318(id, s0 + 0x24, 0);
        *s2 += 1;
    }
}
