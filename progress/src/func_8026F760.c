f32 func_80272214(void);
void func_80267F78(f32, s32, s32, s32);
extern u8 D_212078[];
extern s32 D_8006A4FC;
extern u8 *D_8007AFF8;
extern f32 D_213F00;

s32 func_8026F760(void) {
    s32 ret;
    s32 temp_s0;

    temp_s0 = D_212078[D_8007AFF8[0x40] * 0x6C + 0x24] * 0x64;
    if (func_80272214() == *(f32 *)0x213F00) {
        ret = 0;
    } else {
        func_80267F78((f32) temp_s0, D_8006A4FC + 0x24, 0, -1);
        ret = 1;
    }
    return ret;
}
