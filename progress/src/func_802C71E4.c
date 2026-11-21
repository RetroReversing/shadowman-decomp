extern s32 D_8002D420;
extern f32 D_80030E44;
extern f32 D_80030E4C;
extern f32 D_800458A0;
extern f32 D_800458A4;

void func_802C71E4(void) {
    if (D_8002D420 & 1) {
        D_80030E4C = D_800458A4;
    } else if (D_8002D420 & 2) {
        D_80030E4C = -D_800458A4;
    }
    if (D_8002D420 & 8) {
        D_80030E44 = D_800458A0 * *(f32 *)0x218538;
    } else if (D_8002D420 & 4) {
        D_80030E44 = -D_800458A0 * *(f32 *)0x21853C;
    }
}
