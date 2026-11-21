void func_80270090(s32);
extern char *D_8007AFF8;

s32 func_8026FD80(f32 arg0, s32 arg1) {
    s32 a0 = 4;
    if (*(s32 *)(D_8007AFF8 + 0xC) == 0) {
        if (*(f32 *)(D_8007AFF8 + 0x80) < arg0 * arg0) {
            *(s8 *)(D_8007AFF8 + 0x54) = 0;
            a0 = arg1 & 0xFF;
        } else {
            return 0;
        }
    }
    func_80270090(a0);
    return 1;
}
